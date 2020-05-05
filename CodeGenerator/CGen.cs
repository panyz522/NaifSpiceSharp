using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Linq;
using System.Text;

namespace CodeGenerator
{
    public static class CGen
    {
        public static List<string> GenerateLines(IEnumerable<Function> funcs, Dictionary<string, string> cDic, HashSet<string> exclude)
        {
            var res = new List<string>();
            foreach (var func in funcs)
            {
                if (func.ParseError != null) continue;
                if (exclude.Contains(func.Name)) continue;

                //if (!cDic.ContainsKey(func.Return.Type))
                //{
                //    Console.WriteLine($"Return type {func.Return.Type} of {func.Name} is not supported");
                //    continue;
                //}
                Debug.Assert(func.Return.Pointer == 0);

                StringBuilder sb = new StringBuilder();
                for (int i = 0; i < func.Params.Count; i++)
                {
                    var param = func.Params[i];

                    //if (!cDic.ContainsKey(param.Type))
                    //{
                    //    Console.WriteLine($"Param type {param.Type} of {func.Name}.{param.Name} is not supported");
                    //    goto BREAKPOINT;
                    //}
                    sb.Append(param.Type);
                    sb.Append(" ");
                    sb.Append(param.Pointer > 0 ? $"{new string('*', param.Pointer)} " : "");
                    sb.Append(param.Name);
                    sb.Append(param.Index);
                    if (i < func.Params.Count - 1)
                    {
                        sb.Append(", ");
                    }
                }

                var args = string.Join(",", func.Params.Select((p) => p.Name));
                var returnKeyWord = func.Return.Type != "void" ? "return" : "";

                res.Add($"extern DLLWRAPPER_API {func.Return.Type} {func.Name.ToUpper()}({sb}) {{{returnKeyWord} {func.Name}({args});}}");

            }

            return res;
        }
    }
}
