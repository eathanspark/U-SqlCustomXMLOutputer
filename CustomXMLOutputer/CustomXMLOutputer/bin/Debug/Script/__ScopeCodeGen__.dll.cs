using Microsoft.Analytics.Interfaces;
using System;
using System.Collections.Generic;
using System.Text;
using System.Reflection;
using System.IO;
using System.Text.RegularExpressions;
using System.Threading;
using System.Runtime.Serialization;
using System.Linq;
using System.Globalization;
using Microsoft.Analytics.Types.Sql;
using System.Runtime.Versioning;
[assembly:TargetFramework(".NETFramework,Version=v4.7.2", FrameworkDisplayName = ".NET Framework, Version 4.7.2")]

public class ___Scope_Generated_Classes___
{



	public class SqlTransformer_1 : IProcessor
	{
		public override IRow Process(IRow inRow, IUpdatableRow outRow)
		{
			var row = (ScopeEngineManaged.SqlIpRow)inRow;
			var output = (ScopeEngineManaged.SqlIpUpdatableRow)outRow;
			int exceptionIndex = 0;
			try
			{
				System.String col_dept = row.GetInternal<System.String>(0);
				Microsoft.Analytics.Types.Sql.SqlArray<System.String> col_Expr_0 = row.GetInternal<Microsoft.Analytics.Types.Sql.SqlArray<System.String>>(1);
				output.SetInternal(0, String.Join("|", col_Expr_0));
				exceptionIndex++;
				output.SetInternal(1, col_dept);
				exceptionIndex++;
			}
			catch (Exception exception)
			{
				ScopeEngineManaged.ExceptionHelper.WrapExpressionException(exceptionsInfo[exceptionIndex], ScopeEngineManaged.SqlHelper.Dump(row), exception);
			}
			return output.AsReadOnly();
		}
		public static string[] exceptionsInfo = 
		{
			@"String.Join(""|"", Expr_0)",
			@"dept",
		};
	}


	public class SqlFilterTransformer_5 : IProcessor
	{
		public override IRow Process(IRow inRow, IUpdatableRow outRow)
		{
			var row = (ScopeEngineManaged.SqlIpRow)inRow;
			var output = (ScopeEngineManaged.SqlIpUpdatableRow)outRow;
			System.String col_dept = row.GetInternal<System.String>(0);
			Microsoft.Analytics.Types.Sql.SqlArray<System.String> col_Expr_0 = row.GetInternal<Microsoft.Analytics.Types.Sql.SqlArray<System.String>>(1);
			bool bPicked = false;
			int exceptionIndex = 0;
			try
			{
				{
					bPicked = true;
					output.SetInternal<System.String>(0, (col_dept));
					exceptionIndex++;
					output.SetInternal<System.String>(1, (String.Join(staticconstant_0, col_Expr_0)));
					exceptionIndex++;
				}
			}
			catch (Exception exception)
			{
				ScopeEngineManaged.ExceptionHelper.WrapExpressionException(exceptionsInfo[exceptionIndex], ScopeEngineManaged.SqlHelper.Dump(row), exception);
			}
			if(bPicked)
			{
			    return output.AsReadOnly();
			}
			else
			{
			    return null;
			}
		}
		public static string[] exceptionsInfo = 
		{
			@"dept",
			@"String.Join(""|"", Expr_0)",
		};		static System.String staticconstant_0 = "|";

	}





































	public static class __OperatorFactory__
	{
		public static Microsoft.Analytics.Interfaces.IProcessor Create_Process_4()
		{
			return new ___Scope_Generated_Classes___.SqlFilterTransformer_5();
		}
		public static string Name_Process_4 = "___Scope_Generated_Classes___.SqlFilterTransformer_5";
		public static Microsoft.Analytics.Interfaces.IOutputter Create_SV1_Extract_out0()
		{
			return new CustomXMLOutputer.EmployeeXMLOutputter();
		}
		public static string Name_SV1_Extract_out0 = "CustomXMLOutputer.EmployeeXMLOutputter";
	}
}
