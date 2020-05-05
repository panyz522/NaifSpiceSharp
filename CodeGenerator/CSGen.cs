using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Linq;
using System.Text;

namespace CodeGenerator
{
    public static class CSGen
    {
        public const string KeyWordsRaw = "null;in;out;ref;string";
        public static readonly HashSet<string> KeyWords = new HashSet<string>(KeyWordsRaw.Split(";"));

        public static List<string> GenerateLines(IEnumerable<Function> funcs, Dictionary<string, string> cDic, HashSet<string> exclude)
        {
            var res = new List<string>();
            foreach (var func in funcs)
            {
                if (func.ParseError != null) continue;
                if (exclude.Contains(func.Name)) continue;

                if (!cDic.ContainsKey(func.Return.Type))
                {
                    Console.WriteLine($"Return type {func.Return.Type} of {func.Name} is not supported");
                    continue;
                }
                Debug.Assert(func.Return.Pointer == 0);
                var returnType = cDic[func.Return.Type];

                StringBuilder sb = new StringBuilder();
                for (int i = 0; i < func.Params.Count; i++)
                {
                    var param = func.Params[i];

                    if (!cDic.ContainsKey(param.Type))
                    {
                        Console.WriteLine($"Param type {param.Type} of {func.Name}.{param.Name} is not supported");
                        goto CONTFUNC;
                    }
                    sb.Append(cDic[param.Type]);
                    sb.Append(" ");
                    if (param.Pointer > 0)
                    {
                        sb.Append($"{new string('*', param.Pointer)} ");
                    }
                    else if (param.Index != null)
                    {
                        sb.Append("* ");
                    }
                    sb.Append((KeyWords.Contains(param.Name) ? "@" : "") + param.Name);
                    if (i < func.Params.Count - 1)
                    {
                        sb.Append(", ");
                    }
                }

                var returnKeyWord = func.Return.Type != "void" ? "return" : "";

                res.Add( "        [DllImport(dllPath, CharSet = CharSet.Auto, SetLastError = true)]");
                res.Add($"        public static extern unsafe {returnType} {func.Name.ToUpper()}({sb});");
                res.Add("");
            CONTFUNC:;
            }

            return res;
        }
    }
}
