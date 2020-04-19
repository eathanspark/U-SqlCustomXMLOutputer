""" 
Dependencies:
Python: Version "3.6.0"
Pandas: Version "0.22.0"
Numpy: Version >= "1.9.0" 

This module contains helper methods:
1. Create data frame from the whole rowset or specified number of rows at a time
2. Create enumerable of output rows from data frame
"""
import sys
import numpy
import pandas

import pyadla

def RowsetToDataframe(rowset, maxRows, columnList=None):
    """Take input rowset and convert requested number of rows to data frame.
    If user want to get single data frame from entire rowset, 'maxRows' 
    should be set to -1 (or any negative number). User could provide a column
    list(column name or index are both supported) to specify which columns were
    selected to create the dataframe.

    Parameters:
        'rowset': type 'pyadla.Rowset'
        'maxRows': type 'int'
        'columnList': type 'list', item is valid column name or index
    Note:
        'maxRows': there is no default value for 'maxRows' argument.
        'columnList': optional argument, columns in the columnList will be selected
                      and marshalled to dataframe. Default is None, means all the 
                      columns are selected.

    Returns:
        type 'pandas.DataFrame'
    """
    # selected column indexes list to create the dataframe
    columnIndexes = []
    if columnList is None:
        # create data frame labels
        labels = [column.Name for column in rowset.Schema]
    else:
        for column in columnList:
            if type(column) == str:
                columnIndex = rowset.Schema.IndexOf(column)
                # columnIndex will be -1 if column does not exist
                if columnIndex >= 0:
                    columnIndexes.append(columnIndex)
                else:
                    raise RuntimeError("column " + column + " does not exist in the input rowset schema")
            else:
                columnIndexes.append(column)

        # check column uniqueness in columnIndexes
        uniqueColumnList = set()
        for columnIndex in columnIndexes:
            if columnIndex not in uniqueColumnList:
                uniqueColumnList.add(columnIndex)
            else:
                raise RuntimeError("Find duplicate column in provided columnList, column index : " + str(columnIndex))
        labels = [rowset.Schema[column].Name for column in columnIndexes]

    # user asked for all rows to be in single frame
    # set row count as max possible int
    if maxRows < 0:
        maxRows = sys.maxsize

    # iteratively adding rows to dataFrame is very inefficient,
    # better solution is to append all rows to a list,
    # then create the dataFrame from the list at once.
    rowList = []
    for row in rowset:
        if len(rowList) < maxRows:
            if columnList is None:
                rowData = [value for value in row]
            else:
                rowData = [row[columnIndex] for columnIndex in columnIndexes]
            # add created row to rowList
            rowList.append(rowData)
            if len(rowList) == maxRows:
                break

    # create data frame from rowList
    dataFrame = pandas.DataFrame(
        data=rowList, 
        index=range(len(rowList)), 
        columns=labels )
    return dataFrame

def DataFrameToRowset(dataFrame, outputRow):
    """ Take output data frame and convert it into Enumerable of output rows.
    Parameters:
        'dataFrame': type 'pandas.DataFrame'
        'outputRow': type 'pyadla.OutputRow'

    Returns:
        type 'pyadla.Rowset'
    """

    # columns in dataframe may be not in the same order as in output row schema
    # build the indexes map between dataframe and output row
    indexMap = []
    for columnName in dataFrame.columns.values:
        columnIndex = outputRow.Schema.IndexOf(columnName)
        # columnIndex will be -1 if column does not exist
        if columnIndex >= 0 :
            indexMap.append(columnIndex)
        else:
            raise RuntimeError("column " + columnName + " does not exist in the output row schema")

    # create outputRow from every single row of data frame.
    for index in range(len(dataFrame)):
        # for every column within row
        for columnIndex in range(len(dataFrame.columns)):
            value = dataFrame.iloc[index, columnIndex]
            # if column value's type is numpy.generic, convert it to 
            # corresponding Python type, to ease setting 
            # value in row extension class
            if isinstance(value, numpy.generic):
                value = numpy.asscalar(value)
            # put column values into output row
            outputRow[indexMap[columnIndex]] = value
        yield outputRow
