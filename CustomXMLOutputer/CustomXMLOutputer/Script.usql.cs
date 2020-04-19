using Microsoft.Analytics.Interfaces;
using Microsoft.Analytics.Interfaces.Streaming;
using Microsoft.Analytics.Types.Sql;
using System;
using System.Collections.Generic;
using System.IO;
using System.Linq;
using System.Text;

namespace CustomXMLOutputer
{
    [SqlUserDefinedOutputter(AtomicFileProcessing = false)]
    public class EmployeeXMLOutputter : IOutputter
    {
        private Encoding encoding;
        private bool IsXMLRoot = true;
        private Stream g_writer;

        // Parameters definition
        public EmployeeXMLOutputter(Encoding encoding = null)
        {
            this.encoding = ((encoding == null) ? Encoding.UTF8 : encoding);
            this.IsXMLRoot = true;
        }

        // Close method is used to write footer to file - executed only once after all rows
        public override void Close()
        {
            //Reference to IO.Stream object - g_writer
            if (g_writer != null)
            {
                StreamWriter streamWriter = new StreamWriter(g_writer, this.encoding);
                streamWriter.Write("</Root>");
                streamWriter.Flush();
                streamWriter.Close();
            }
        }

        public override void Output(IRow row, IUnstructuredWriter output)
        {
            System.IO.StreamWriter streamWriter = new StreamWriter(output.BaseStream, this.encoding);
            ISchema schema = row.Schema;
            if (IsXMLRoot)
            {
                streamWriter.Write("<Root>");
                IsXMLRoot = false;
            }

            foreach (IColumn col in row.Schema)
            {
                var value = row.Get<string>(col.Name);
                if (value != null)
                {

                    if (col.Name == "dept")
                    {
                        streamWriter.Write("<Department>");
                        streamWriter.Write("<Name>" + value + "</Name>");
                    }
                    if (col.Name == "newtag")
                    {
                        streamWriter.Write("<Employee>");
                        var vlidationList = value.Split('|');
                        foreach (var item in vlidationList)
                        {
                            streamWriter.Write("<Name>" + item + "</Name>");
                        }
                        streamWriter.Write("</Employee>");
                        streamWriter.Write("</Department>");
                    }
                }
            }

            if (IsXMLRoot)
            {
                IsXMLRoot = false;
            }

            g_writer = output.BaseStream;
            streamWriter.Flush();
        }
    }

    public static class Factory
    {
        public static EmployeeXMLOutputter EmployeeXMLOutputter(Encoding encoding = null)
        {
            return new EmployeeXMLOutputter(encoding);
        }
    }
}
