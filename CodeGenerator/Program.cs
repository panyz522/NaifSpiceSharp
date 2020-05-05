using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.IO;
using System.Linq;

namespace CodeGenerator
{
    class Program
    {
        public const string SolDir = @"..\..\..\..\";
        public const string DllProject = "DllWrapper";
        public const string IncludeDir = @"include\";
        public const string CtagsPath = "ctags.exe";

        static void Main(string[] args)
        {
            string includeDir = $@"{SolDir}{DllProject}\{IncludeDir}";
            DirectoryInfo includeDirInfo = new DirectoryInfo(includeDir);
            foreach (var item in includeDirInfo.GetFiles())
            {
                Console.WriteLine(item.Name);
            }

            string typeMapRaw = @"
SpiceBoolean:int:int
SpiceSChar:signed char:sbyte
SpiceChar:char:byte
SpiceUChar:unsigned char:byte
SpiceUShort:unsigned short:ushort
SpiceShort:short:short
SpiceUInt:unsigned int:uint
SpiceInt:long:long
SpiceULong:unsigned long:ulong
SpiceLong:long:long
SpiceFloat:float:float
SpiceDouble:double:double

ConstSpiceBoolean:int:int
ConstSpiceChar:byte:byte
ConstSpiceInt:long:long
ConstSpiceFloat:float:float
ConstSpiceDouble:double:double

void:void:void
";
            string excludeFuncsRaw = @"prefix_c";

            Dictionary<string, string> cppTypeMap = new Dictionary<string, string>();
            Dictionary<string, string> csTypeMap = new Dictionary<string, string>();
            var excludeFuncs = new HashSet<string>(excludeFuncsRaw.Split(";"));
            var typeMapList = typeMapRaw.Split("\r\n");
            foreach (var item in typeMapList)
            {
                if (item.Length <= 2) continue;
                var tokens = item.Split(":");
                cppTypeMap[tokens[0]] = tokens[1];
                csTypeMap[tokens[0]] = tokens[2];
            }


            var parser = new HeaderParser();
            var headerName = "SpiceZpr";
            var funcs = parser.Parse($"{includeDir}{headerName}.h");

            UpdateC(headerName, funcs, cppTypeMap, excludeFuncs);
            UpdateCS(headerName, funcs, csTypeMap, excludeFuncs);
        }

        private static void UpdateC(string headerName, List<Function> funcs, Dictionary<string, string> cppTypeMap, HashSet<string> excludeFuncs)
        {
            var lines = CGen.GenerateLines(funcs, cppTypeMap, excludeFuncs);
            var cppFilePath = $@"{SolDir}{DllProject}\dllmain.c";
            var oldLines = File.ReadAllLines(cppFilePath);
            var newLines = new List<string>();
            var flag = $"// {headerName}";
            int i = 0;
            for (; i < oldLines.Length; i++)
            {
                newLines.Add(oldLines[i]);
                if (oldLines[i].StartsWith(flag))
                {
                    i++;
                    break;
                }
            }
            newLines.AddRange(lines);
            for (; i < oldLines.Length; i++)
            {
                if (oldLines[i].StartsWith(flag))
                {
                    break;
                }
            }
            newLines.AddRange(oldLines[i..]);
            Console.WriteLine(newLines.Count);
            File.WriteAllLines(cppFilePath, newLines);
        }

        private static void UpdateCS(string headerName, List<Function> funcs, Dictionary<string, string> csTypeMap, HashSet<string> excludeFuncs)
        {
            var lines = CSGen.GenerateLines(funcs, csTypeMap, excludeFuncs);
            var csFilePath = $@"{SolDir}NaifSpiceSharp\Spice.cs";
            var oldLines = File.ReadAllLines(csFilePath);
            var newLines = new List<string>();
            var flag = $"region {headerName}";
            int i = 0;
            for (; i < oldLines.Length; i++)
            {
                newLines.Add(oldLines[i]);
                if (oldLines[i].Contains(flag))
                {
                    i++;
                    break;
                }
            }
            newLines.AddRange(lines);
            for (; i < oldLines.Length; i++)
            {
                if (oldLines[i].Contains(flag))
                {
                    break;
                }
            }
            newLines.AddRange(oldLines[i..]);
            Console.WriteLine(newLines.Count);
            File.WriteAllLines(csFilePath, newLines);
        }
    }
}
