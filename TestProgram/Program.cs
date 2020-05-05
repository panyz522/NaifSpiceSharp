using NaifSpiceSharp;
using System;
using System.Text;

namespace TestProgram
{
    class Program
    {
        static void Main(string[] args)
        {
            unsafe
            {
                var metaFilePath = Environment.ExpandEnvironmentVariables(@"%appdata%\SPICE\mk\solar_system_v0033.tm");

                Console.WriteLine(metaFilePath);
                fixed (byte* pathChars = Encoding.ASCII.GetBytes(metaFilePath))
                {
                    Spice.FURNSH_C(pathChars);
                }

                // Get Ephemeris Time
                double tdb;
                fixed (byte* timeChars = CStr("2020 MAY 04 15:40:21.3"))
                {
                    Spice.STR2ET_C(timeChars, &tdb);
                }

                // Calc position and velocity
                double* state = stackalloc double[6]; // (x, y, z, vx, vy, vz)
                for (int i = 0; i < 6; i++)
                {
                    state[i] = 0;
                }
                double lt; // Light time
                fixed (byte* target = CStr("EARTH"))
                fixed (byte* obs = CStr("SUN"))
                fixed (byte* frame = CStr("ECLIPJ2000"))
                fixed (byte* corr = CStr("NONE"))
                {
                    Spice.SPKEZ_C(301 /*Moon*/, tdb, frame, corr, 399 /*Earth*/, state, &lt);
                }
                Console.WriteLine("Position of moon observed from earth");
                for (int i = 0; i < 6; i++)
                {
                    Console.Write($"{state[i]} ");
                }
                Console.WriteLine();
                double rad;
                double lon;
                double lat;
                Spice.RECLAT_C(state, &rad, &lon, &lat);
                Console.WriteLine("Lon and lat in ECLIPJ2000");
                Console.WriteLine($"{lon * 180 / Math.PI} {lat * 180 / Math.PI} {rad}");
            }
        }

        private static byte[] CStr(string s)
        {
            return Encoding.ASCII.GetBytes(s);
        }
    }
}
