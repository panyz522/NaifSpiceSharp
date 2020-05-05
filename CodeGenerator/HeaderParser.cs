using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.IO;
using System.Linq;
using System.Text;
using System.Text.RegularExpressions;

namespace CodeGenerator
{
    public class HeaderParser
    {
        private enum State
        {
            Finding,
            InFunc
        }



        public List<Function> Parse(string filePath)
        {
            var ctagsProc = Process.Start(new ProcessStartInfo { FileName = "ctags.exe", Arguments = $"-N --c-kinds=p --fields=S \"{filePath}\"" });
            ctagsProc.WaitForExit();

            var lines = File.ReadAllLines("tags");
            var res = new List<Function>();

            Console.WriteLine("ctag file lines: " + lines.Length);
            foreach (var line in lines)
            {
                if (line.StartsWith("!")) continue;
                var func = new Function();
                res.Add(func);

                var funcTokens = line.Split("\t");
                func.Name = funcTokens[0];

                var returnTypeMatch = Regex.Match(funcTokens[2], @$"\/\^(.*?){func.Name}");
                func.Return = new TypeNamePair { Type = returnTypeMatch.Groups[1].Value.Trim() };
                if (func.Return.Type.EndsWith("*"))
                {
                    func.ParseError = "Pointer as return type is not supported";
                    continue;
                }

                var paramList = Regex.Match(funcTokens[3], @"signature:\( (.*) \)").Groups[1].Value.Split(", ");

                if (paramList[0] == "void")
                {
                    continue;
                }

                if (Array.IndexOf(paramList, "...") >= 0)
                {
                    func.ParseError = "... as parameter is not supported";
                    continue;
                }

                var paramsRes = func.Params;
                foreach (var param in paramList)
                {
                    var paramTokens = param.Split(" ", StringSplitOptions.RemoveEmptyEntries);
                    var p = new TypeNamePair();

                    if (param.Contains("("))
                    {
                        func.ParseError = "Function pointer as parameter is not supported";
                        goto CONTLINE;
                    }

                    {
                        var tempParamTokens = new List<string>();
                        for (int i = 0; i < paramTokens.Length; i++)
                        {
                            var tempp = paramTokens[i];
                            if (tempp.EndsWith("]") || tempp.EndsWith("["))
                            {
                                var ind = tempp.IndexOf('[');
                                var frontPart = tempp.Substring(0, ind);
                                if (frontPart.Length > 0) tempParamTokens.Add(frontPart);
                                tempParamTokens.Add(tempp.Substring(ind) + string.Join("", paramTokens[(i + 1)..]));
                                break;
                            }
                            else if (tempp.StartsWith("*") && tempp.Length > 1)
                            {
                                var lastInd = tempp.LastIndexOf("*");
                                tempParamTokens.Add(new string('*', lastInd + 1));
                                if (lastInd < tempp.Length - 1)
                                    tempParamTokens.Add(tempp.Substring(lastInd + 1));
                            }
                            else
                            {
                                tempParamTokens.Add(tempp);
                            }
                        }
                        paramTokens = tempParamTokens.ToArray();
                    }

                    if (paramTokens[^1].StartsWith("["))
                    {
                        p.Name = paramTokens[^2];
                        p.Index = paramTokens[^1];
                        p.Pointer = paramTokens[^3].StartsWith("*") ? paramTokens[^2].Length : 0;
                        p.Type = string.Join(" ", paramTokens[0..^(2 + (p.Pointer > 0 ? 1 : 0))]);
                    }
                    else
                    {
                        p.Name = paramTokens[^1];
                        p.Pointer = paramTokens[^2].StartsWith("*") ? paramTokens[^2].Length : 0;
                        p.Type = string.Join(" ", paramTokens[0..^(1 + (p.Pointer > 0 ? 1 : 0))]);
                    }

                    paramsRes.Add(p);
                }

            CONTLINE:;
            }

            return res;
        }
    }

    public class Function
    {
        public string Name { get; set; }

        public TypeNamePair Return { get; set; }

        public List<TypeNamePair> Params { get; set; } = new List<TypeNamePair>();

        public string ParseError { get; set; }

        public override string ToString()
        {
            if (ParseError != null)
                return $"ERROR: {ParseError}";
            return $"[{Return}]-{Name}({string.Join(",,", Params)})";
        }
    }

    public class TypeNamePair
    {
        public string Type { get; set; }
        public string Name { get; set; }
        public int Pointer { get; set; }
        public string Index { get; set; }

        public override string ToString()
        {
            return $"[{Type}]:{Pointer}.{Name}";
        }
    }
}
