using System;
using System.Runtime.InteropServices;

namespace NaifSpiceSharp
{
#pragma warning disable CA1401 // P/Invokes should not be visible
    /// <summary>
    ///   <para>
    /// The SPICE low level wrapper class.</para>
    ///   <para>Please refer to the official CSPICE document at <a href="https://naif.jpl.nasa.gov/pub/naif/toolkit_docs/C/index.html">https://naif.jpl.nasa.gov/pub/naif/toolkit_docs/C/index.html</a></para>
    ///   <para>Notes</para>
    ///   <list type="bullet">
    ///     <item>
    ///       Use byte * in C# to represent c string(char *). Eg. `byte* pathChars = Encoding.ASCII.GetBytes(metaFilePath)`
    ///     </item>
    ///   </list>
    /// </summary>
    public static class Spice
    {
        private const string xunitDllPath = @"..\..\..\..\DllWrapper\x64\Debug\DllWrapper.dll";
        private const string releaseDllPath = @"DllWrapper.dll";
        private const string dllPath =
#if DEBUG
            xunitDllPath;
#else
            releaseDllPath;
#endif

#if DEBUG
        [DllImport(dllPath, CharSet = CharSet.Auto, SetLastError = true)]
        public static extern unsafe void AddTest(double a, double b, double* c);

        [DllImport(dllPath, CharSet = CharSet.Auto, SetLastError = true)]
        public static extern unsafe double GetTest();

        [DllImport(dllPath, CharSet = CharSet.Auto, SetLastError = true)]
        public static extern unsafe void SizeOfEnum(int* size);

        [DllImport(dllPath, CharSet = CharSet.Auto, SetLastError = true)]
        public static extern unsafe void CharTest(byte* c);
#endif
        #region SpiceZpr
        [DllImport(dllPath, CharSet = CharSet.Auto, SetLastError = true)]
        public static extern unsafe void AXISAR_C(double * axis, double angle, double * r);

        [DllImport(dllPath, CharSet = CharSet.Auto, SetLastError = true)]
        public static extern unsafe double B1900_C();

        [DllImport(dllPath, CharSet = CharSet.Auto, SetLastError = true)]
        public static extern unsafe double B1950_C();

        [DllImport(dllPath, CharSet = CharSet.Auto, SetLastError = true)]
        public static extern unsafe int BADKPV_C(byte * caller, byte * name, byte * comp, long size, long divby, byte type);

        [DllImport(dllPath, CharSet = CharSet.Auto, SetLastError = true)]
        public static extern unsafe void BODC2N_C(long code, long namelen, byte * name, int * found);

        [DllImport(dllPath, CharSet = CharSet.Auto, SetLastError = true)]
        public static extern unsafe void BODC2S_C(long code, long lenout, byte * name);

        [DllImport(dllPath, CharSet = CharSet.Auto, SetLastError = true)]
        public static extern unsafe void BODDEF_C(byte * name, long code);

        [DllImport(dllPath, CharSet = CharSet.Auto, SetLastError = true)]
        public static extern unsafe int BODFND_C(long body, byte * item);

        [DllImport(dllPath, CharSet = CharSet.Auto, SetLastError = true)]
        public static extern unsafe void BODN2C_C(byte * name, long * code, int * found);

        [DllImport(dllPath, CharSet = CharSet.Auto, SetLastError = true)]
        public static extern unsafe void BODS2C_C(byte * name, long * code, int * found);

        [DllImport(dllPath, CharSet = CharSet.Auto, SetLastError = true)]
        public static extern unsafe void BODVAR_C(long body, byte * item, long * dim, double * values);

        [DllImport(dllPath, CharSet = CharSet.Auto, SetLastError = true)]
        public static extern unsafe void BODVCD_C(long body, byte * item, long maxn, long * dim, double * values);

        [DllImport(dllPath, CharSet = CharSet.Auto, SetLastError = true)]
        public static extern unsafe void BODVRD_C(byte * body, byte * item, long maxn, long * dim, double * values);

        [DllImport(dllPath, CharSet = CharSet.Auto, SetLastError = true)]
        public static extern unsafe double BRCKTD_C(double number, double end1, double end2);

        [DllImport(dllPath, CharSet = CharSet.Auto, SetLastError = true)]
        public static extern unsafe long BRCKTI_C(long number, long end1, long end2);

        [DllImport(dllPath, CharSet = CharSet.Auto, SetLastError = true)]
        public static extern unsafe long BSCHOI_C(long value, long ndim, long * array, long * order);

        [DllImport(dllPath, CharSet = CharSet.Auto, SetLastError = true)]
        public static extern unsafe long BSRCHD_C(double value, long ndim, double * array);

        [DllImport(dllPath, CharSet = CharSet.Auto, SetLastError = true)]
        public static extern unsafe long BSRCHI_C(long value, long ndim, long * array);

        [DllImport(dllPath, CharSet = CharSet.Auto, SetLastError = true)]
        public static extern unsafe void CCIFRM_C(long frclss, long clssid, long lenout, long * frcode, byte * frname, long * center, int * found);

        [DllImport(dllPath, CharSet = CharSet.Auto, SetLastError = true)]
        public static extern unsafe void CHBDER_C(double * cp, long degp, double * x2s, double x, long nderiv, double * partdp, double * dpdxs);

        [DllImport(dllPath, CharSet = CharSet.Auto, SetLastError = true)]
        public static extern unsafe void CHKIN_C(byte * module);

        [DllImport(dllPath, CharSet = CharSet.Auto, SetLastError = true)]
        public static extern unsafe void CHKOUT_C(byte * module);

        [DllImport(dllPath, CharSet = CharSet.Auto, SetLastError = true)]
        public static extern unsafe void CIDFRM_C(long cent, long lenout, long * frcode, byte * frname, int * found);

        [DllImport(dllPath, CharSet = CharSet.Auto, SetLastError = true)]
        public static extern unsafe void CKCLS_C(long handle);

        [DllImport(dllPath, CharSet = CharSet.Auto, SetLastError = true)]
        public static extern unsafe void CKGP_C(long inst, double sclkdp, double tol, byte * @ref, double * cmat, double * clkout, int * found);

        [DllImport(dllPath, CharSet = CharSet.Auto, SetLastError = true)]
        public static extern unsafe void CKGPAV_C(long inst, double sclkdp, double tol, byte * @ref, double * cmat, double * av, double * clkout, int * found);

        [DllImport(dllPath, CharSet = CharSet.Auto, SetLastError = true)]
        public static extern unsafe void CKLPF_C(byte * fname, long * handle);

        [DllImport(dllPath, CharSet = CharSet.Auto, SetLastError = true)]
        public static extern unsafe void CKOPN_C(byte * name, byte * ifname, long ncomch, long * handle);

        [DllImport(dllPath, CharSet = CharSet.Auto, SetLastError = true)]
        public static extern unsafe void CKUPF_C(long handle);

        [DllImport(dllPath, CharSet = CharSet.Auto, SetLastError = true)]
        public static extern unsafe void CKW01_C(long handle, double begtime, double endtime, long inst, byte * @ref, int avflag, byte * segid, long nrec, double * sclkdp, double * quats, double * avvs);

        [DllImport(dllPath, CharSet = CharSet.Auto, SetLastError = true)]
        public static extern unsafe void CKW02_C(long handle, double begtim, double endtim, long inst, byte * @ref, byte * segid, long nrec, double * start, double * stop, double * quats, double * avvs, double * rates);

        [DllImport(dllPath, CharSet = CharSet.Auto, SetLastError = true)]
        public static extern unsafe void CKW03_C(long handle, double begtim, double endtim, long inst, byte * @ref, int avflag, byte * segid, long nrec, double * sclkdp, double * quats, double * avvs, long nints, double * starts);

        [DllImport(dllPath, CharSet = CharSet.Auto, SetLastError = true)]
        public static extern unsafe void CLEARD_C(long ndim, double * array);

        [DllImport(dllPath, CharSet = CharSet.Auto, SetLastError = true)]
        public static extern unsafe double CLIGHT_C();

        [DllImport(dllPath, CharSet = CharSet.Auto, SetLastError = true)]
        public static extern unsafe void CLPOOL_C();

        [DllImport(dllPath, CharSet = CharSet.Auto, SetLastError = true)]
        public static extern unsafe void CMPRSS_C(byte delim, long n, byte * input, long lenout, byte * output);

        [DllImport(dllPath, CharSet = CharSet.Auto, SetLastError = true)]
        public static extern unsafe void CNMFRM_C(byte * cname, long lenout, long * frcode, byte * frname, int * found);

        [DllImport(dllPath, CharSet = CharSet.Auto, SetLastError = true)]
        public static extern unsafe void CONICS_C(double * elts, double et, double * state);

        [DllImport(dllPath, CharSet = CharSet.Auto, SetLastError = true)]
        public static extern unsafe void CONVRT_C(double x, byte * @in, byte * @out, double * y);

        [DllImport(dllPath, CharSet = CharSet.Auto, SetLastError = true)]
        public static extern unsafe long CPOS_C(byte * str, byte * chars, long start);

        [DllImport(dllPath, CharSet = CharSet.Auto, SetLastError = true)]
        public static extern unsafe long CPOSR_C(byte * str, byte * chars, long start);

        [DllImport(dllPath, CharSet = CharSet.Auto, SetLastError = true)]
        public static extern unsafe void CVPOOL_C(byte * agent, int * update);

        [DllImport(dllPath, CharSet = CharSet.Auto, SetLastError = true)]
        public static extern unsafe void CYLLAT_C(double r, double lonc, double z, double * radius, double * lon, double * lat);

        [DllImport(dllPath, CharSet = CharSet.Auto, SetLastError = true)]
        public static extern unsafe void CYLREC_C(double r, double lon, double z, double * rectan);

        [DllImport(dllPath, CharSet = CharSet.Auto, SetLastError = true)]
        public static extern unsafe void CYLSPH_C(double r, double lonc, double z, double * radius, double * colat, double * lon);

        [DllImport(dllPath, CharSet = CharSet.Auto, SetLastError = true)]
        public static extern unsafe void DAFBBS_C(long handle);

        [DllImport(dllPath, CharSet = CharSet.Auto, SetLastError = true)]
        public static extern unsafe void DAFBFS_C(long handle);

        [DllImport(dllPath, CharSet = CharSet.Auto, SetLastError = true)]
        public static extern unsafe void DAFCLS_C(long handle);

        [DllImport(dllPath, CharSet = CharSet.Auto, SetLastError = true)]
        public static extern unsafe void DAFCS_C(long handle);

        [DllImport(dllPath, CharSet = CharSet.Auto, SetLastError = true)]
        public static extern unsafe void DAFDC_C(long handle);

        [DllImport(dllPath, CharSet = CharSet.Auto, SetLastError = true)]
        public static extern unsafe void DAFEC_C(long handle, long bufsiz, long lenout, long * n, void * buffer, int * done);

        [DllImport(dllPath, CharSet = CharSet.Auto, SetLastError = true)]
        public static extern unsafe void DAFFNA_C(int * found);

        [DllImport(dllPath, CharSet = CharSet.Auto, SetLastError = true)]
        public static extern unsafe void DAFFPA_C(int * found);

        [DllImport(dllPath, CharSet = CharSet.Auto, SetLastError = true)]
        public static extern unsafe void DAFGDA_C(long handle, long begin, long end, double * data);

        [DllImport(dllPath, CharSet = CharSet.Auto, SetLastError = true)]
        public static extern unsafe void DAFGH_C(long * handle);

        [DllImport(dllPath, CharSet = CharSet.Auto, SetLastError = true)]
        public static extern unsafe void DAFGN_C(long lenout, byte * name);

        [DllImport(dllPath, CharSet = CharSet.Auto, SetLastError = true)]
        public static extern unsafe void DAFGS_C(double * sum);

        [DllImport(dllPath, CharSet = CharSet.Auto, SetLastError = true)]
        public static extern unsafe void DAFGSR_C(long handle, long recno, long begin, long end, double * data, int * found);

        [DllImport(dllPath, CharSet = CharSet.Auto, SetLastError = true)]
        public static extern unsafe void DAFOPR_C(byte * fname, long * handle);

        [DllImport(dllPath, CharSet = CharSet.Auto, SetLastError = true)]
        public static extern unsafe void DAFOPW_C(byte * fname, long * handle);

        [DllImport(dllPath, CharSet = CharSet.Auto, SetLastError = true)]
        public static extern unsafe void DAFPS_C(long nd, long ni, double * dc, long * ic, double * sum);

        [DllImport(dllPath, CharSet = CharSet.Auto, SetLastError = true)]
        public static extern unsafe void DAFRDA_C(long handle, long begin, long end, double * data);

        [DllImport(dllPath, CharSet = CharSet.Auto, SetLastError = true)]
        public static extern unsafe void DAFRFR_C(long handle, long lenout, long * nd, long * ni, byte * ifname, long * fward, long * bward, long * free);

        [DllImport(dllPath, CharSet = CharSet.Auto, SetLastError = true)]
        public static extern unsafe void DAFRS_C(double * sum);

        [DllImport(dllPath, CharSet = CharSet.Auto, SetLastError = true)]
        public static extern unsafe void DAFUS_C(double * sum, long nd, long ni, double * dc, long * ic);

        [DllImport(dllPath, CharSet = CharSet.Auto, SetLastError = true)]
        public static extern unsafe void DASCLS_C(long handle);

        [DllImport(dllPath, CharSet = CharSet.Auto, SetLastError = true)]
        public static extern unsafe void DASDC_C(long handle);

        [DllImport(dllPath, CharSet = CharSet.Auto, SetLastError = true)]
        public static extern unsafe void DASEC_C(long handle, long bufsiz, long buflen, long * n, void * buffer, int * done);

        [DllImport(dllPath, CharSet = CharSet.Auto, SetLastError = true)]
        public static extern unsafe void DASHFN_C(long handle, long namlen, byte * fname);

        [DllImport(dllPath, CharSet = CharSet.Auto, SetLastError = true)]
        public static extern unsafe void DASOPR_C(byte * fname, long * handle);

        [DllImport(dllPath, CharSet = CharSet.Auto, SetLastError = true)]
        public static extern unsafe void DASOPW_C(byte * fname, long * handle);

        [DllImport(dllPath, CharSet = CharSet.Auto, SetLastError = true)]
        public static extern unsafe void DASRFR_C(long handle, long idwlen, long ifnlen, byte * idword, byte * ifname, long * nresvr, long * nresvc, long * ncomr, long * ncomc);

        [DllImport(dllPath, CharSet = CharSet.Auto, SetLastError = true)]
        public static extern unsafe void DCYLDR_C(double x, double y, double z, double * jacobi);

        [DllImport(dllPath, CharSet = CharSet.Auto, SetLastError = true)]
        public static extern unsafe void DELTET_C(double epoch, byte * eptype, double * delta);

        [DllImport(dllPath, CharSet = CharSet.Auto, SetLastError = true)]
        public static extern unsafe double DET_C(double * m1);

        [DllImport(dllPath, CharSet = CharSet.Auto, SetLastError = true)]
        public static extern unsafe void DGEODR_C(double x, double y, double z, double re, double f, double * jacobi);

        [DllImport(dllPath, CharSet = CharSet.Auto, SetLastError = true)]
        public static extern unsafe void DIAGS2_C(double * symmat, double * diag, double * rotate);

        [DllImport(dllPath, CharSet = CharSet.Auto, SetLastError = true)]
        public static extern unsafe void DLATDR_C(double x, double y, double z, double * jacobi);

        [DllImport(dllPath, CharSet = CharSet.Auto, SetLastError = true)]
        public static extern unsafe void DP2HX_C(double number, long lenout, byte * @string, long * length);

        [DllImport(dllPath, CharSet = CharSet.Auto, SetLastError = true)]
        public static extern unsafe void DPGRDR_C(byte * body, double x, double y, double z, double re, double f, double * jacobi);

        [DllImport(dllPath, CharSet = CharSet.Auto, SetLastError = true)]
        public static extern unsafe double DPMAX_();

        [DllImport(dllPath, CharSet = CharSet.Auto, SetLastError = true)]
        public static extern unsafe double DPMAX_C();

        [DllImport(dllPath, CharSet = CharSet.Auto, SetLastError = true)]
        public static extern unsafe double DPMIN_();

        [DllImport(dllPath, CharSet = CharSet.Auto, SetLastError = true)]
        public static extern unsafe double DPMIN_C();

        [DllImport(dllPath, CharSet = CharSet.Auto, SetLastError = true)]
        public static extern unsafe double DPR_C();

        [DllImport(dllPath, CharSet = CharSet.Auto, SetLastError = true)]
        public static extern unsafe void DRDCYL_C(double r, double lon, double z, double * jacobi);

        [DllImport(dllPath, CharSet = CharSet.Auto, SetLastError = true)]
        public static extern unsafe void DRDGEO_C(double lon, double lat, double alt, double re, double f, double * jacobi);

        [DllImport(dllPath, CharSet = CharSet.Auto, SetLastError = true)]
        public static extern unsafe void DRDLAT_C(double r, double lon, double lat, double * jacobi);

        [DllImport(dllPath, CharSet = CharSet.Auto, SetLastError = true)]
        public static extern unsafe void DRDPGR_C(byte * body, double lon, double lat, double alt, double re, double f, double * jacobi);

        [DllImport(dllPath, CharSet = CharSet.Auto, SetLastError = true)]
        public static extern unsafe void DRDSPH_C(double r, double colat, double lon, double * jacobi);

        [DllImport(dllPath, CharSet = CharSet.Auto, SetLastError = true)]
        public static extern unsafe void DSKCLS_C(long handle, int optmiz);

        [DllImport(dllPath, CharSet = CharSet.Auto, SetLastError = true)]
        public static extern unsafe void DSKGTL_C(long keywrd, double * dpval);

        [DllImport(dllPath, CharSet = CharSet.Auto, SetLastError = true)]
        public static extern unsafe void DSKMI2_C(long nv, double * vrtces, long np, long * plates, double finscl, long corscl, long worksz, long voxpsz, long voxlsz, int makvtl, long spxisz, long * work, double * spaixd, long * spaixi);

        [DllImport(dllPath, CharSet = CharSet.Auto, SetLastError = true)]
        public static extern unsafe void DSKOPN_C(byte * fname, byte * ifname, long ncomch, long * handle);

        [DllImport(dllPath, CharSet = CharSet.Auto, SetLastError = true)]
        public static extern unsafe void DSKRB2_C(long nv, double * vrtces, long np, long * plates, long corsys, double * corpar, double * mncor3, double * mxcor3);

        [DllImport(dllPath, CharSet = CharSet.Auto, SetLastError = true)]
        public static extern unsafe void DSKSTL_C(long keywrd, double dpval);

        [DllImport(dllPath, CharSet = CharSet.Auto, SetLastError = true)]
        public static extern unsafe void DSKW02_C(long handle, long center, long surfce, long dclass, byte * frame, long corsys, double * corpar, double mncor1, double mxcor1, double mncor2, double mxcor2, double mncor3, double mxcor3, double first, double last, long nv, double * vrtces, long np, long * plates, double * spaixd, long * spaixi);

        [DllImport(dllPath, CharSet = CharSet.Auto, SetLastError = true)]
        public static extern unsafe void DSKXV_C(int pri, byte * target, long nsurf, long * srflst, double et, byte * fixref, long nrays, double * vtxarr, double * dirarr, double * xptarr, int * fndarr);

        [DllImport(dllPath, CharSet = CharSet.Auto, SetLastError = true)]
        public static extern unsafe void DSPHDR_C(double x, double y, double z, double * jacobi);

        [DllImport(dllPath, CharSet = CharSet.Auto, SetLastError = true)]
        public static extern unsafe void DTPOOL_C(byte * name, int * found, long * n, byte * type);

        [DllImport(dllPath, CharSet = CharSet.Auto, SetLastError = true)]
        public static extern unsafe void DUCRSS_C(double * s1, double * s2, double * sout);

        [DllImport(dllPath, CharSet = CharSet.Auto, SetLastError = true)]
        public static extern unsafe void DVCRSS_C(double * s1, double * s2, double * sout);

        [DllImport(dllPath, CharSet = CharSet.Auto, SetLastError = true)]
        public static extern unsafe double DVDOT_C(double * s1, double * s2);

        [DllImport(dllPath, CharSet = CharSet.Auto, SetLastError = true)]
        public static extern unsafe void DVHAT_C(double * s1, double * sout);

        [DllImport(dllPath, CharSet = CharSet.Auto, SetLastError = true)]
        public static extern unsafe double DVNORM_C(double * state);

        [DllImport(dllPath, CharSet = CharSet.Auto, SetLastError = true)]
        public static extern unsafe void DVPOOL_C(byte * name);

        [DllImport(dllPath, CharSet = CharSet.Auto, SetLastError = true)]
        public static extern unsafe double DVSEP_C(double * s1, double * s2);

        [DllImport(dllPath, CharSet = CharSet.Auto, SetLastError = true)]
        public static extern unsafe void EDTERM_C(byte * trmtyp, byte * source, byte * target, double et, byte * fixfrm, byte * abcorr, byte * obsrvr, long npts, double * trgepc, double * obspos, double * termpts);

        [DllImport(dllPath, CharSet = CharSet.Auto, SetLastError = true)]
        public static extern unsafe void EKACED_C(long handle, long segno, long recno, byte * column, long nvals, double * dvals, int isnull);

        [DllImport(dllPath, CharSet = CharSet.Auto, SetLastError = true)]
        public static extern unsafe void EKACEI_C(long handle, long segno, long recno, byte * column, long nvals, long * ivals, int isnull);

        [DllImport(dllPath, CharSet = CharSet.Auto, SetLastError = true)]
        public static extern unsafe void EKACLD_C(long handle, long segno, byte * column, double * dvals, long * entszs, int * nlflgs, long * rcptrs, long * wkindx);

        [DllImport(dllPath, CharSet = CharSet.Auto, SetLastError = true)]
        public static extern unsafe void EKACLI_C(long handle, long segno, byte * column, long * ivals, long * entszs, int * nlflgs, long * rcptrs, long * wkindx);

        [DllImport(dllPath, CharSet = CharSet.Auto, SetLastError = true)]
        public static extern unsafe void EKAPPR_C(long handle, long segno, long * recno);

        [DllImport(dllPath, CharSet = CharSet.Auto, SetLastError = true)]
        public static extern unsafe void EKCCNT_C(byte * table, long * ccount);

        [DllImport(dllPath, CharSet = CharSet.Auto, SetLastError = true)]
        public static extern unsafe void EKCLS_C(long handle);

        [DllImport(dllPath, CharSet = CharSet.Auto, SetLastError = true)]
        public static extern unsafe void EKDELR_C(long handle, long segno, long recno);

        [DllImport(dllPath, CharSet = CharSet.Auto, SetLastError = true)]
        public static extern unsafe void EKFFLD_C(long handle, long segno, long * rcptrs);

        [DllImport(dllPath, CharSet = CharSet.Auto, SetLastError = true)]
        public static extern unsafe void EKFIND_C(byte * query, long lenout, long * nmrows, int * error, byte * errmsg);

        [DllImport(dllPath, CharSet = CharSet.Auto, SetLastError = true)]
        public static extern unsafe void EKGC_C(long selidx, long row, long elment, long lenout, byte * cdata, int * @null, int * found);

        [DllImport(dllPath, CharSet = CharSet.Auto, SetLastError = true)]
        public static extern unsafe void EKGD_C(long selidx, long row, long elment, double * ddata, int * @null, int * found);

        [DllImport(dllPath, CharSet = CharSet.Auto, SetLastError = true)]
        public static extern unsafe void EKGI_C(long selidx, long row, long elment, long * idata, int * @null, int * found);

        [DllImport(dllPath, CharSet = CharSet.Auto, SetLastError = true)]
        public static extern unsafe void EKINSR_C(long handle, long segno, long recno);

        [DllImport(dllPath, CharSet = CharSet.Auto, SetLastError = true)]
        public static extern unsafe void EKLEF_C(byte * fname, long * handle);

        [DllImport(dllPath, CharSet = CharSet.Auto, SetLastError = true)]
        public static extern unsafe long EKNELT_C(long selidx, long row);

        [DllImport(dllPath, CharSet = CharSet.Auto, SetLastError = true)]
        public static extern unsafe long EKNSEG_C(long handle);

        [DllImport(dllPath, CharSet = CharSet.Auto, SetLastError = true)]
        public static extern unsafe void EKNTAB_C(long * n);

        [DllImport(dllPath, CharSet = CharSet.Auto, SetLastError = true)]
        public static extern unsafe void EKOPN_C(byte * fname, byte * ifname, long ncomch, long * handle);

        [DllImport(dllPath, CharSet = CharSet.Auto, SetLastError = true)]
        public static extern unsafe void EKOPR_C(byte * fname, long * handle);

        [DllImport(dllPath, CharSet = CharSet.Auto, SetLastError = true)]
        public static extern unsafe void EKOPS_C(long * handle);

        [DllImport(dllPath, CharSet = CharSet.Auto, SetLastError = true)]
        public static extern unsafe void EKOPW_C(byte * fname, long * handle);

        [DllImport(dllPath, CharSet = CharSet.Auto, SetLastError = true)]
        public static extern unsafe void EKRCEC_C(long handle, long segno, long recno, byte * column, long lenout, long * nvals, void * cvals, int * isnull);

        [DllImport(dllPath, CharSet = CharSet.Auto, SetLastError = true)]
        public static extern unsafe void EKRCED_C(long handle, long segno, long recno, byte * column, long * nvals, double * dvals, int * isnull);

        [DllImport(dllPath, CharSet = CharSet.Auto, SetLastError = true)]
        public static extern unsafe void EKRCEI_C(long handle, long segno, long recno, byte * column, long * nvals, long * ivals, int * isnull);

        [DllImport(dllPath, CharSet = CharSet.Auto, SetLastError = true)]
        public static extern unsafe void EKTNAM_C(long n, long lenout, byte * table);

        [DllImport(dllPath, CharSet = CharSet.Auto, SetLastError = true)]
        public static extern unsafe void EKUCED_C(long handle, long segno, long recno, byte * column, long nvals, double * dvals, int isnull);

        [DllImport(dllPath, CharSet = CharSet.Auto, SetLastError = true)]
        public static extern unsafe void EKUCEI_C(long handle, long segno, long recno, byte * column, long nvals, long * ivals, int isnull);

        [DllImport(dllPath, CharSet = CharSet.Auto, SetLastError = true)]
        public static extern unsafe void EKUEF_C(long handle);

        [DllImport(dllPath, CharSet = CharSet.Auto, SetLastError = true)]
        public static extern unsafe void EQNCPV_C(double et, double epoch, double * eqel, double rapol, double decpol, double * state);

        [DllImport(dllPath, CharSet = CharSet.Auto, SetLastError = true)]
        public static extern unsafe int EQSTR_C(byte * a, byte * b);

        [DllImport(dllPath, CharSet = CharSet.Auto, SetLastError = true)]
        public static extern unsafe void ERRACT_C(byte * operation, long lenout, byte * action);

        [DllImport(dllPath, CharSet = CharSet.Auto, SetLastError = true)]
        public static extern unsafe void ERRCH_C(byte * marker, byte * @string);

        [DllImport(dllPath, CharSet = CharSet.Auto, SetLastError = true)]
        public static extern unsafe void ERRDEV_C(byte * operation, long lenout, byte * device);

        [DllImport(dllPath, CharSet = CharSet.Auto, SetLastError = true)]
        public static extern unsafe void ERRDP_C(byte * marker, double number);

        [DllImport(dllPath, CharSet = CharSet.Auto, SetLastError = true)]
        public static extern unsafe void ERRINT_C(byte * marker, long number);

        [DllImport(dllPath, CharSet = CharSet.Auto, SetLastError = true)]
        public static extern unsafe void ERRPRT_C(byte * operation, long lenout, byte * list);

        [DllImport(dllPath, CharSet = CharSet.Auto, SetLastError = true)]
        public static extern unsafe void ET2LST_C(double et, long body, double lon, byte * type, long timlen, long ampmlen, long * hr, long * mn, long * sc, byte * time, byte * ampm);

        [DllImport(dllPath, CharSet = CharSet.Auto, SetLastError = true)]
        public static extern unsafe void ET2UTC_C(double et, byte * format, long prec, long lenout, byte * utcstr);

        [DllImport(dllPath, CharSet = CharSet.Auto, SetLastError = true)]
        public static extern unsafe void ETCAL_C(double et, long lenout, byte * @string);

        [DllImport(dllPath, CharSet = CharSet.Auto, SetLastError = true)]
        public static extern unsafe void EUL2M_C(double angle3, double angle2, double angle1, long axis3, long axis2, long axis1, double * r);

        [DllImport(dllPath, CharSet = CharSet.Auto, SetLastError = true)]
        public static extern unsafe void EUL2XF_C(double * eulang, long axisa, long axisb, long axisc, double * xform);

        [DllImport(dllPath, CharSet = CharSet.Auto, SetLastError = true)]
        public static extern unsafe int EXISTS_C(byte * name);

        [DllImport(dllPath, CharSet = CharSet.Auto, SetLastError = true)]
        public static extern unsafe void EXPOOL_C(byte * name, int * found);

        [DllImport(dllPath, CharSet = CharSet.Auto, SetLastError = true)]
        public static extern unsafe int FAILED_C();

        [DllImport(dllPath, CharSet = CharSet.Auto, SetLastError = true)]
        public static extern unsafe void FOVRAY_C(byte * inst, double * raydir, byte * rframe, byte * abcorr, byte * obsrvr, double * et, int * visible);

        [DllImport(dllPath, CharSet = CharSet.Auto, SetLastError = true)]
        public static extern unsafe void FOVTRG_C(byte * inst, byte * target, byte * tshape, byte * tframe, byte * abcorr, byte * obsrvr, double * et, int * visible);

        [DllImport(dllPath, CharSet = CharSet.Auto, SetLastError = true)]
        public static extern unsafe void FRAME_C(double * x, double * y, double * z);

        [DllImport(dllPath, CharSet = CharSet.Auto, SetLastError = true)]
        public static extern unsafe void FRINFO_C(long frcode, long * cent, long * clss, long * clssid, int * found);

        [DllImport(dllPath, CharSet = CharSet.Auto, SetLastError = true)]
        public static extern unsafe void FRMNAM_C(long frcode, long lenout, byte * frname);

        [DllImport(dllPath, CharSet = CharSet.Auto, SetLastError = true)]
        public static extern unsafe void FTNCLS_C(long unit);

        [DllImport(dllPath, CharSet = CharSet.Auto, SetLastError = true)]
        public static extern unsafe void FURNSH_C(byte * file);

        [DllImport(dllPath, CharSet = CharSet.Auto, SetLastError = true)]
        public static extern unsafe void GCPOOL_C(byte * name, long start, long room, long lenout, long * n, void * cvals, int * found);

        [DllImport(dllPath, CharSet = CharSet.Auto, SetLastError = true)]
        public static extern unsafe void GDPOOL_C(byte * name, long start, long room, long * n, double * values, int * found);

        [DllImport(dllPath, CharSet = CharSet.Auto, SetLastError = true)]
        public static extern unsafe void GEOREC_C(double lon, double lat, double alt, double re, double f, double * rectan);

        [DllImport(dllPath, CharSet = CharSet.Auto, SetLastError = true)]
        public static extern unsafe void GETCML_C(long * argc, byte *** argv);

        [DllImport(dllPath, CharSet = CharSet.Auto, SetLastError = true)]
        public static extern unsafe void GETFAT_C(byte * file, long arclen, long typlen, byte * arch, byte * type);

        [DllImport(dllPath, CharSet = CharSet.Auto, SetLastError = true)]
        public static extern unsafe void GETFOV_C(long instid, long room, long shapelen, long framelen, byte * shape, byte * frame, double * bsight, long * n, double * bounds);

        [DllImport(dllPath, CharSet = CharSet.Auto, SetLastError = true)]
        public static extern unsafe void GETMSG_C(byte * option, long lenout, byte * msg);

        [DllImport(dllPath, CharSet = CharSet.Auto, SetLastError = true)]
        public static extern unsafe int GFBAIL_C();

        [DllImport(dllPath, CharSet = CharSet.Auto, SetLastError = true)]
        public static extern unsafe void GFCLRH_C();

        [DllImport(dllPath, CharSet = CharSet.Auto, SetLastError = true)]
        public static extern unsafe void GFREFN_C(double t1, double t2, int s1, int s2, double * t);

        [DllImport(dllPath, CharSet = CharSet.Auto, SetLastError = true)]
        public static extern unsafe void GFREPF_C();

        [DllImport(dllPath, CharSet = CharSet.Auto, SetLastError = true)]
        public static extern unsafe void GFREPU_C(double ivbeg, double ivend, double time);

        [DllImport(dllPath, CharSet = CharSet.Auto, SetLastError = true)]
        public static extern unsafe void GFSSTP_C(double step);

        [DllImport(dllPath, CharSet = CharSet.Auto, SetLastError = true)]
        public static extern unsafe void GFSTEP_C(double time, double * step);

        [DllImport(dllPath, CharSet = CharSet.Auto, SetLastError = true)]
        public static extern unsafe void GFSTOL_C(double value);

        [DllImport(dllPath, CharSet = CharSet.Auto, SetLastError = true)]
        public static extern unsafe void GIPOOL_C(byte * name, long start, long room, long * n, long * ivals, int * found);

        [DllImport(dllPath, CharSet = CharSet.Auto, SetLastError = true)]
        public static extern unsafe void GNPOOL_C(byte * name, long start, long room, long lenout, long * n, void * kvars, int * found);

        [DllImport(dllPath, CharSet = CharSet.Auto, SetLastError = true)]
        public static extern unsafe double HALFPI_C();

        [DllImport(dllPath, CharSet = CharSet.Auto, SetLastError = true)]
        public static extern unsafe void HRMINT_C(long n, double * xvals, double * yvals, double x, double * work, double * f, double * df);

        [DllImport(dllPath, CharSet = CharSet.Auto, SetLastError = true)]
        public static extern unsafe void HX2DP_C(byte * @string, long lenout, double * number, int * error, byte * errmsg);

        [DllImport(dllPath, CharSet = CharSet.Auto, SetLastError = true)]
        public static extern unsafe void IDENT_C(double * matrix);

        [DllImport(dllPath, CharSet = CharSet.Auto, SetLastError = true)]
        public static extern unsafe void ILLUM_C(byte * target, double et, byte * abcorr, byte * obsrvr, double * spoint, double * phase, double * solar, double * emissn);

        [DllImport(dllPath, CharSet = CharSet.Auto, SetLastError = true)]
        public static extern unsafe void ILLUMF_C(byte * method, byte * target, byte * ilusrc, double et, byte * fixref, byte * abcorr, byte * obsrvr, double * spoint, double * trgepc, double * srfvec, double * phase, double * incdnc, double * emissn, int * visibl, int * lit);

        [DllImport(dllPath, CharSet = CharSet.Auto, SetLastError = true)]
        public static extern unsafe void ILLUMG_C(byte * method, byte * target, byte * illum, double et, byte * fixref, byte * abcorr, byte * obsrvr, double * spoint, double * trgepc, double * srfvec, double * phase, double * solar, double * emissn);

        [DllImport(dllPath, CharSet = CharSet.Auto, SetLastError = true)]
        public static extern unsafe void ILUMIN_C(byte * method, byte * target, double et, byte * fixref, byte * abcorr, byte * obsrvr, double * spoint, double * trgepc, double * srfvec, double * phase, double * solar, double * emissn);

        [DllImport(dllPath, CharSet = CharSet.Auto, SetLastError = true)]
        public static extern unsafe long INTMAX_();

        [DllImport(dllPath, CharSet = CharSet.Auto, SetLastError = true)]
        public static extern unsafe long INTMAX_C();

        [DllImport(dllPath, CharSet = CharSet.Auto, SetLastError = true)]
        public static extern unsafe long INTMIN_();

        [DllImport(dllPath, CharSet = CharSet.Auto, SetLastError = true)]
        public static extern unsafe long INTMIN_C();

        [DllImport(dllPath, CharSet = CharSet.Auto, SetLastError = true)]
        public static extern unsafe void INVERT_C(double * m1, double * m2);

        [DllImport(dllPath, CharSet = CharSet.Auto, SetLastError = true)]
        public static extern unsafe void INVORT_C(double * m, double * mit);

        [DllImport(dllPath, CharSet = CharSet.Auto, SetLastError = true)]
        public static extern unsafe int ISORDV_C(long * array, long n);

        [DllImport(dllPath, CharSet = CharSet.Auto, SetLastError = true)]
        public static extern unsafe long ISRCHD_C(double value, long ndim, double * array);

        [DllImport(dllPath, CharSet = CharSet.Auto, SetLastError = true)]
        public static extern unsafe long ISRCHI_C(long value, long ndim, long * array);

        [DllImport(dllPath, CharSet = CharSet.Auto, SetLastError = true)]
        public static extern unsafe int ISROT_C(double * m, double ntol, double dtol);

        [DllImport(dllPath, CharSet = CharSet.Auto, SetLastError = true)]
        public static extern unsafe int ISWHSP_C(byte * @string);

        [DllImport(dllPath, CharSet = CharSet.Auto, SetLastError = true)]
        public static extern unsafe double J1900_C();

        [DllImport(dllPath, CharSet = CharSet.Auto, SetLastError = true)]
        public static extern unsafe double J1950_C();

        [DllImport(dllPath, CharSet = CharSet.Auto, SetLastError = true)]
        public static extern unsafe double J2000_C();

        [DllImport(dllPath, CharSet = CharSet.Auto, SetLastError = true)]
        public static extern unsafe double J2100_C();

        [DllImport(dllPath, CharSet = CharSet.Auto, SetLastError = true)]
        public static extern unsafe double JYEAR_C();

        [DllImport(dllPath, CharSet = CharSet.Auto, SetLastError = true)]
        public static extern unsafe void KCLEAR_C();

        [DllImport(dllPath, CharSet = CharSet.Auto, SetLastError = true)]
        public static extern unsafe void KDATA_C(long which, byte * kind, long fillen, long typlen, long srclen, byte * file, byte * filtyp, byte * source, long * handle, int * found);

        [DllImport(dllPath, CharSet = CharSet.Auto, SetLastError = true)]
        public static extern unsafe void KINFO_C(byte * file, long typlen, long srclen, byte * filtyp, byte * source, long * handle, int * found);

        [DllImport(dllPath, CharSet = CharSet.Auto, SetLastError = true)]
        public static extern unsafe void KTOTAL_C(byte * kind, long * count);

        [DllImport(dllPath, CharSet = CharSet.Auto, SetLastError = true)]
        public static extern unsafe long LASTNB_C(byte * @string);

        [DllImport(dllPath, CharSet = CharSet.Auto, SetLastError = true)]
        public static extern unsafe void LATCYL_C(double radius, double lon, double lat, double * r, double * lonc, double * z);

        [DllImport(dllPath, CharSet = CharSet.Auto, SetLastError = true)]
        public static extern unsafe void LATREC_C(double radius, double longitude, double latitude, double * rectan);

        [DllImport(dllPath, CharSet = CharSet.Auto, SetLastError = true)]
        public static extern unsafe void LATSPH_C(double radius, double lon, double lat, double * rho, double * colat, double * lons);

        [DllImport(dllPath, CharSet = CharSet.Auto, SetLastError = true)]
        public static extern unsafe void LATSRF_C(byte * method, byte * target, double et, byte * fixref, long npts, double * lonlat, double * srfpts);

        [DllImport(dllPath, CharSet = CharSet.Auto, SetLastError = true)]
        public static extern unsafe void LCASE_C(byte * @in, long lenout, byte * @out);

        [DllImport(dllPath, CharSet = CharSet.Auto, SetLastError = true)]
        public static extern unsafe void LDPOOL_C(byte * filename);

        [DllImport(dllPath, CharSet = CharSet.Auto, SetLastError = true)]
        public static extern unsafe void LGRIND_C(long n, double * xvals, double * yvals, double * work, double x, double * p, double * dp);

        [DllImport(dllPath, CharSet = CharSet.Auto, SetLastError = true)]
        public static extern unsafe void LIMBPT_C(byte * method, byte * target, double et, byte * fixref, byte * abcorr, byte * corloc, byte * obsrvr, double * refvec, double rolstp, long ncuts, double schstp, double soltol, long maxn, long * npts, double * points, double * epochs, double * tangts);

        [DllImport(dllPath, CharSet = CharSet.Auto, SetLastError = true)]
        public static extern unsafe void LPARSE_C(byte * list, byte * delim, long nmax, long lenout, long * n, void * items);

        [DllImport(dllPath, CharSet = CharSet.Auto, SetLastError = true)]
        public static extern unsafe void LPARSM_C(byte * list, byte * delims, long nmax, long lenout, long * n, void * items);

        [DllImport(dllPath, CharSet = CharSet.Auto, SetLastError = true)]
        public static extern unsafe double LSPCN_C(byte * body, double et, byte * abcorr);

        [DllImport(dllPath, CharSet = CharSet.Auto, SetLastError = true)]
        public static extern unsafe long LSTLED_C(double x, long n, double * array);

        [DllImport(dllPath, CharSet = CharSet.Auto, SetLastError = true)]
        public static extern unsafe long LSTLEI_C(long x, long n, long * array);

        [DllImport(dllPath, CharSet = CharSet.Auto, SetLastError = true)]
        public static extern unsafe long LSTLTD_C(double x, long n, double * array);

        [DllImport(dllPath, CharSet = CharSet.Auto, SetLastError = true)]
        public static extern unsafe long LSTLTI_C(long x, long n, long * array);

        [DllImport(dllPath, CharSet = CharSet.Auto, SetLastError = true)]
        public static extern unsafe void LTIME_C(double etobs, long obs, byte * dir, long targ, double * ettarg, double * elapsd);

        [DllImport(dllPath, CharSet = CharSet.Auto, SetLastError = true)]
        public static extern unsafe void LX4DEC_C(byte * @string, long first, long * last, long * nchar);

        [DllImport(dllPath, CharSet = CharSet.Auto, SetLastError = true)]
        public static extern unsafe void LX4NUM_C(byte * @string, long first, long * last, long * nchar);

        [DllImport(dllPath, CharSet = CharSet.Auto, SetLastError = true)]
        public static extern unsafe void LX4SGN_C(byte * @string, long first, long * last, long * nchar);

        [DllImport(dllPath, CharSet = CharSet.Auto, SetLastError = true)]
        public static extern unsafe void LX4UNS_C(byte * @string, long first, long * last, long * nchar);

        [DllImport(dllPath, CharSet = CharSet.Auto, SetLastError = true)]
        public static extern unsafe void LXQSTR_C(byte * @string, byte qchar, long first, long * last, long * nchar);

        [DllImport(dllPath, CharSet = CharSet.Auto, SetLastError = true)]
        public static extern unsafe void M2EUL_C(double * r, long axis3, long axis2, long axis1, double * angle3, double * angle2, double * angle1);

        [DllImport(dllPath, CharSet = CharSet.Auto, SetLastError = true)]
        public static extern unsafe void M2Q_C(double * r, double * q);

        [DllImport(dllPath, CharSet = CharSet.Auto, SetLastError = true)]
        public static extern unsafe int MATCHI_C(byte * @string, byte * templ, byte wstr, byte wchr);

        [DllImport(dllPath, CharSet = CharSet.Auto, SetLastError = true)]
        public static extern unsafe int MATCHW_C(byte * @string, byte * templ, byte wstr, byte wchr);

        [DllImport(dllPath, CharSet = CharSet.Auto, SetLastError = true)]
        public static extern unsafe void MEQU_C(double * m1, double * mout);

        [DllImport(dllPath, CharSet = CharSet.Auto, SetLastError = true)]
        public static extern unsafe void MTXM_C(double * m1, double * m2, double * mout);

        [DllImport(dllPath, CharSet = CharSet.Auto, SetLastError = true)]
        public static extern unsafe void MTXV_C(double * m1, double * vin, double * vout);

        [DllImport(dllPath, CharSet = CharSet.Auto, SetLastError = true)]
        public static extern unsafe void MXM_C(double * m1, double * m2, double * mout);

        [DllImport(dllPath, CharSet = CharSet.Auto, SetLastError = true)]
        public static extern unsafe void MXMT_C(double * m1, double * m2, double * mout);

        [DllImport(dllPath, CharSet = CharSet.Auto, SetLastError = true)]
        public static extern unsafe void MXV_C(double * m1, double * vin, double * vout);

        [DllImport(dllPath, CharSet = CharSet.Auto, SetLastError = true)]
        public static extern unsafe void NAMFRM_C(byte * frname, long * frcode);

        [DllImport(dllPath, CharSet = CharSet.Auto, SetLastError = true)]
        public static extern unsafe long NCPOS_C(byte * str, byte * chars, long start);

        [DllImport(dllPath, CharSet = CharSet.Auto, SetLastError = true)]
        public static extern unsafe long NCPOSR_C(byte * str, byte * chars, long start);

        [DllImport(dllPath, CharSet = CharSet.Auto, SetLastError = true)]
        public static extern unsafe void NEARPT_C(double * positn, double a, double b, double c, double * npoint, double * alt);

        [DllImport(dllPath, CharSet = CharSet.Auto, SetLastError = true)]
        public static extern unsafe void NPEDLN_C(double a, double b, double c, double * linept, double * linedr, double * pnear, double * dist);

        [DllImport(dllPath, CharSet = CharSet.Auto, SetLastError = true)]
        public static extern unsafe void NPLNPT_C(double * linpt, double * lindir, double * point, double * pnear, double * dist);

        [DllImport(dllPath, CharSet = CharSet.Auto, SetLastError = true)]
        public static extern unsafe void OCCULT_C(byte * target1, byte * shape1, byte * frame1, byte * target2, byte * shape2, byte * frame2, byte * abcorr, byte * observer, double time, long * occult_code);

        [DllImport(dllPath, CharSet = CharSet.Auto, SetLastError = true)]
        public static extern unsafe void ORDERD_C(double * array, long ndim, long * iorder);

        [DllImport(dllPath, CharSet = CharSet.Auto, SetLastError = true)]
        public static extern unsafe void ORDERI_C(long * array, long ndim, long * iorder);

        [DllImport(dllPath, CharSet = CharSet.Auto, SetLastError = true)]
        public static extern unsafe void OSCELT_C(double * state, double et, double mu, double * elts);

        [DllImport(dllPath, CharSet = CharSet.Auto, SetLastError = true)]
        public static extern unsafe void OSCLTX_C(double * state, double et, double mu, double * elts);

        [DllImport(dllPath, CharSet = CharSet.Auto, SetLastError = true)]
        public static extern unsafe void PCKCLS_C(long handle);

        [DllImport(dllPath, CharSet = CharSet.Auto, SetLastError = true)]
        public static extern unsafe void PCKLOF_C(byte * fname, long * handle);

        [DllImport(dllPath, CharSet = CharSet.Auto, SetLastError = true)]
        public static extern unsafe void PCKOPN_C(byte * name, byte * ifname, long ncomch, long * handle);

        [DllImport(dllPath, CharSet = CharSet.Auto, SetLastError = true)]
        public static extern unsafe void PCKUOF_C(long handle);

        [DllImport(dllPath, CharSet = CharSet.Auto, SetLastError = true)]
        public static extern unsafe void PCKW02_C(long handle, long clssid, byte * frame, double first, double last, byte * segid, double intlen, long n, long polydg, double * cdata, double btime);

        [DllImport(dllPath, CharSet = CharSet.Auto, SetLastError = true)]
        public static extern unsafe void PDPOOL_C(byte * name, long n, double * dvals);

        [DllImport(dllPath, CharSet = CharSet.Auto, SetLastError = true)]
        public static extern unsafe void PGRREC_C(byte * body, double lon, double lat, double alt, double re, double f, double * rectan);

        [DllImport(dllPath, CharSet = CharSet.Auto, SetLastError = true)]
        public static extern unsafe double PHASEQ_C(double et, byte * target, byte * illumn, byte * obsrvr, byte * abcorr);

        [DllImport(dllPath, CharSet = CharSet.Auto, SetLastError = true)]
        public static extern unsafe double PI_C();

        [DllImport(dllPath, CharSet = CharSet.Auto, SetLastError = true)]
        public static extern unsafe void PIPOOL_C(byte * name, long n, long * ivals);

        [DllImport(dllPath, CharSet = CharSet.Auto, SetLastError = true)]
        public static extern unsafe double PLTAR_C(long nv, double * vrtces, long np, long * plates);

        [DllImport(dllPath, CharSet = CharSet.Auto, SetLastError = true)]
        public static extern unsafe void PLTEXP_C(double * iverts, double delta, double * overts);

        [DllImport(dllPath, CharSet = CharSet.Auto, SetLastError = true)]
        public static extern unsafe void PLTNP_C(double * point, double * v1, double * v2, double * v3, double * pnear, double * dist);

        [DllImport(dllPath, CharSet = CharSet.Auto, SetLastError = true)]
        public static extern unsafe void PLTNRM_C(double * v1, double * v2, double * v3, double * normal);

        [DllImport(dllPath, CharSet = CharSet.Auto, SetLastError = true)]
        public static extern unsafe double PLTVOL_C(long nv, double * vrtces, long np, long * plates);

        [DllImport(dllPath, CharSet = CharSet.Auto, SetLastError = true)]
        public static extern unsafe void POLYDS_C(double * coeffs, long deg, long nderiv, double t, double * p);

        [DllImport(dllPath, CharSet = CharSet.Auto, SetLastError = true)]
        public static extern unsafe long POS_C(byte * str, byte * substr, long start);

        [DllImport(dllPath, CharSet = CharSet.Auto, SetLastError = true)]
        public static extern unsafe long POSR_C(byte * str, byte * substr, long start);

        [DllImport(dllPath, CharSet = CharSet.Auto, SetLastError = true)]
        public static extern unsafe void PROP2B_C(double gm, double * pvinit, double dt, double * pvprop);

        [DllImport(dllPath, CharSet = CharSet.Auto, SetLastError = true)]
        public static extern unsafe void PRSDP_C(byte * @string, double * dpval);

        [DllImport(dllPath, CharSet = CharSet.Auto, SetLastError = true)]
        public static extern unsafe void PRSINT_C(byte * @string, long * intval);

        [DllImport(dllPath, CharSet = CharSet.Auto, SetLastError = true)]
        public static extern unsafe void PUTCML_C(long argc, byte ** argv);

        [DllImport(dllPath, CharSet = CharSet.Auto, SetLastError = true)]
        public static extern unsafe void PXFORM_C(byte * from, byte * to, double et, double * rotate);

        [DllImport(dllPath, CharSet = CharSet.Auto, SetLastError = true)]
        public static extern unsafe void PXFRM2_C(byte * from, byte * to, double etfrom, double etto, double * rotate);

        [DllImport(dllPath, CharSet = CharSet.Auto, SetLastError = true)]
        public static extern unsafe void Q2M_C(double * q, double * r);

        [DllImport(dllPath, CharSet = CharSet.Auto, SetLastError = true)]
        public static extern unsafe void QCKTRC_C(long tracelen, byte * trace);

        [DllImport(dllPath, CharSet = CharSet.Auto, SetLastError = true)]
        public static extern unsafe void QDQ2AV_C(double * q, double * dq, double * av);

        [DllImport(dllPath, CharSet = CharSet.Auto, SetLastError = true)]
        public static extern unsafe void QXQ_C(double * q1, double * q2, double * qout);

        [DllImport(dllPath, CharSet = CharSet.Auto, SetLastError = true)]
        public static extern unsafe void RADREC_C(double range, double ra, double dec, double * rectan);

        [DllImport(dllPath, CharSet = CharSet.Auto, SetLastError = true)]
        public static extern unsafe void RAV2XF_C(double * rot, double * av, double * xform);

        [DllImport(dllPath, CharSet = CharSet.Auto, SetLastError = true)]
        public static extern unsafe void RAXISA_C(double * matrix, double * axis, double * angle);

        [DllImport(dllPath, CharSet = CharSet.Auto, SetLastError = true)]
        public static extern unsafe void RDTEXT_C(byte * file, long lenout, byte * line, int * eof);

        [DllImport(dllPath, CharSet = CharSet.Auto, SetLastError = true)]
        public static extern unsafe void RECCYL_C(double * rectan, double * r, double * lon, double * z);

        [DllImport(dllPath, CharSet = CharSet.Auto, SetLastError = true)]
        public static extern unsafe void RECGEO_C(double * rectan, double re, double f, double * lon, double * lat, double * alt);

        [DllImport(dllPath, CharSet = CharSet.Auto, SetLastError = true)]
        public static extern unsafe void RECLAT_C(double * rectan, double * radius, double * longitude, double * latitude);

        [DllImport(dllPath, CharSet = CharSet.Auto, SetLastError = true)]
        public static extern unsafe void RECPGR_C(byte * body, double * rectan, double re, double f, double * lon, double * lat, double * alt);

        [DllImport(dllPath, CharSet = CharSet.Auto, SetLastError = true)]
        public static extern unsafe void RECRAD_C(double * rectan, double * radius, double * ra, double * dec);

        [DllImport(dllPath, CharSet = CharSet.Auto, SetLastError = true)]
        public static extern unsafe void RECSPH_C(double * rectan, double * r, double * colat, double * lon);

        [DllImport(dllPath, CharSet = CharSet.Auto, SetLastError = true)]
        public static extern unsafe void REORDC_C(long * iorder, long ndim, long lenvals, void * array);

        [DllImport(dllPath, CharSet = CharSet.Auto, SetLastError = true)]
        public static extern unsafe void REORDD_C(long * iorder, long ndim, double * array);

        [DllImport(dllPath, CharSet = CharSet.Auto, SetLastError = true)]
        public static extern unsafe void REORDI_C(long * iorder, long ndim, long * array);

        [DllImport(dllPath, CharSet = CharSet.Auto, SetLastError = true)]
        public static extern unsafe void REORDL_C(long * iorder, long ndim, int * array);

        [DllImport(dllPath, CharSet = CharSet.Auto, SetLastError = true)]
        public static extern unsafe void REPMC_C(byte * @in, byte * marker, byte * value, long lenout, byte * @out);

        [DllImport(dllPath, CharSet = CharSet.Auto, SetLastError = true)]
        public static extern unsafe void REPMCT_C(byte * @in, byte * marker, long value, byte strCase, long lenout, byte * @out);

        [DllImport(dllPath, CharSet = CharSet.Auto, SetLastError = true)]
        public static extern unsafe void REPMD_C(byte * @in, byte * marker, double value, long sigdig, long lenout, byte * @out);

        [DllImport(dllPath, CharSet = CharSet.Auto, SetLastError = true)]
        public static extern unsafe void REPMF_C(byte * @in, byte * marker, double value, long sigdig, byte format, long lenout, byte * @out);

        [DllImport(dllPath, CharSet = CharSet.Auto, SetLastError = true)]
        public static extern unsafe void REPMI_C(byte * @in, byte * marker, long value, long lenout, byte * @out);

        [DllImport(dllPath, CharSet = CharSet.Auto, SetLastError = true)]
        public static extern unsafe void REPMOT_C(byte * @in, byte * marker, long value, byte strCase, long lenout, byte * @out);

        [DllImport(dllPath, CharSet = CharSet.Auto, SetLastError = true)]
        public static extern unsafe void RESET_C();

        [DllImport(dllPath, CharSet = CharSet.Auto, SetLastError = true)]
        public static extern unsafe int RETURN_C();

        [DllImport(dllPath, CharSet = CharSet.Auto, SetLastError = true)]
        public static extern unsafe void ROTATE_C(double angle, long iaxis, double * mout);

        [DllImport(dllPath, CharSet = CharSet.Auto, SetLastError = true)]
        public static extern unsafe void ROTMAT_C(double * m1, double angle, long iaxis, double * mout);

        [DllImport(dllPath, CharSet = CharSet.Auto, SetLastError = true)]
        public static extern unsafe void ROTVEC_C(double * v1, double angle, long iaxis, double * vout);

        [DllImport(dllPath, CharSet = CharSet.Auto, SetLastError = true)]
        public static extern unsafe double RPD_C();

        [DllImport(dllPath, CharSet = CharSet.Auto, SetLastError = true)]
        public static extern unsafe void RQUAD_C(double a, double b, double c, double * root1, double * root2);

        [DllImport(dllPath, CharSet = CharSet.Auto, SetLastError = true)]
        public static extern unsafe void SAELGV_C(double * vec1, double * vec2, double * smajor, double * sminor);

        [DllImport(dllPath, CharSet = CharSet.Auto, SetLastError = true)]
        public static extern unsafe void SCDECD_C(long sc, double sclkdp, long sclklen, byte * sclkch);

        [DllImport(dllPath, CharSet = CharSet.Auto, SetLastError = true)]
        public static extern unsafe void SCE2C_C(long sc, double et, double * sclkdp);

        [DllImport(dllPath, CharSet = CharSet.Auto, SetLastError = true)]
        public static extern unsafe void SCE2S_C(long sc, double et, long sclklen, byte * sclkch);

        [DllImport(dllPath, CharSet = CharSet.Auto, SetLastError = true)]
        public static extern unsafe void SCE2T_C(long sc, double et, double * sclkdp);

        [DllImport(dllPath, CharSet = CharSet.Auto, SetLastError = true)]
        public static extern unsafe void SCENCD_C(long sc, byte * sclkch, double * sclkdp);

        [DllImport(dllPath, CharSet = CharSet.Auto, SetLastError = true)]
        public static extern unsafe void SCFMT_C(long sc, double ticks, long clkstrlen, byte * clkstr);

        [DllImport(dllPath, CharSet = CharSet.Auto, SetLastError = true)]
        public static extern unsafe void SCPART_C(long sc, long * nparts, double * pstart, double * pstop);

        [DllImport(dllPath, CharSet = CharSet.Auto, SetLastError = true)]
        public static extern unsafe void SCS2E_C(long sc, byte * sclkch, double * et);

        [DllImport(dllPath, CharSet = CharSet.Auto, SetLastError = true)]
        public static extern unsafe void SCT2E_C(long sc, double sclkdp, double * et);

        [DllImport(dllPath, CharSet = CharSet.Auto, SetLastError = true)]
        public static extern unsafe void SCTIKS_C(long sc, byte * clkstr, double * ticks);

        [DllImport(dllPath, CharSet = CharSet.Auto, SetLastError = true)]
        public static extern unsafe void SETMSG_C(byte * msg);

        [DllImport(dllPath, CharSet = CharSet.Auto, SetLastError = true)]
        public static extern unsafe void SHELLC_C(long ndim, long lenvals, void * array);

        [DllImport(dllPath, CharSet = CharSet.Auto, SetLastError = true)]
        public static extern unsafe void SHELLD_C(long ndim, double * array);

        [DllImport(dllPath, CharSet = CharSet.Auto, SetLastError = true)]
        public static extern unsafe void SHELLI_C(long ndim, long * array);

        [DllImport(dllPath, CharSet = CharSet.Auto, SetLastError = true)]
        public static extern unsafe void SIGERR_C(byte * message);

        [DllImport(dllPath, CharSet = CharSet.Auto, SetLastError = true)]
        public static extern unsafe void SINCPT_C(byte * method, byte * target, double et, byte * fixref, byte * abcorr, byte * obsrvr, byte * dref, double * dvec, double * spoint, double * trgepc, double * srfvec, int * found);

        [DllImport(dllPath, CharSet = CharSet.Auto, SetLastError = true)]
        public static extern unsafe double SPD_C();

        [DllImport(dllPath, CharSet = CharSet.Auto, SetLastError = true)]
        public static extern unsafe void SPHCYL_C(double radius, double colat, double slon, double * r, double * lon, double * z);

        [DllImport(dllPath, CharSet = CharSet.Auto, SetLastError = true)]
        public static extern unsafe void SPHLAT_C(double r, double colat, double lons, double * radius, double * lon, double * lat);

        [DllImport(dllPath, CharSet = CharSet.Auto, SetLastError = true)]
        public static extern unsafe void SPHREC_C(double r, double colat, double lon, double * rectan);

        [DllImport(dllPath, CharSet = CharSet.Auto, SetLastError = true)]
        public static extern unsafe void SPK14A_C(long handle, long ncsets, double * coeffs, double * epochs);

        [DllImport(dllPath, CharSet = CharSet.Auto, SetLastError = true)]
        public static extern unsafe void SPK14B_C(long handle, byte * segid, long body, long center, byte * frame, double first, double last, long chbdeg);

        [DllImport(dllPath, CharSet = CharSet.Auto, SetLastError = true)]
        public static extern unsafe void SPK14E_C(long handle);

        [DllImport(dllPath, CharSet = CharSet.Auto, SetLastError = true)]
        public static extern unsafe void SPKACS_C(long targ, double et, byte * @ref, byte * abcorr, long obs, double * starg, double * lt, double * dlt);

        [DllImport(dllPath, CharSet = CharSet.Auto, SetLastError = true)]
        public static extern unsafe void SPKAPO_C(long targ, double et, byte * @ref, double * sobs, byte * abcorr, double * ptarg, double * lt);

        [DllImport(dllPath, CharSet = CharSet.Auto, SetLastError = true)]
        public static extern unsafe void SPKAPP_C(long targ, double et, byte * @ref, double * sobs, byte * abcorr, double * starg, double * lt);

        [DllImport(dllPath, CharSet = CharSet.Auto, SetLastError = true)]
        public static extern unsafe void SPKAPS_C(long targ, double et, byte * @ref, byte * abcorr, double * stobs, double * accobs, double * starg, double * lt, double * dlt);

        [DllImport(dllPath, CharSet = CharSet.Auto, SetLastError = true)]
        public static extern unsafe void SPKCLS_C(long handle);

        [DllImport(dllPath, CharSet = CharSet.Auto, SetLastError = true)]
        public static extern unsafe void SPKCPO_C(byte * target, double et, byte * outref, byte * refloc, byte * abcorr, double * obssta, byte * obsctr, byte * obsref, double * state, double * lt);

        [DllImport(dllPath, CharSet = CharSet.Auto, SetLastError = true)]
        public static extern unsafe void SPKCPT_C(double * trgpos, byte * trgctr, byte * trgref, double et, byte * outref, byte * refloc, byte * abcorr, byte * obsrvr, double * state, double * lt);

        [DllImport(dllPath, CharSet = CharSet.Auto, SetLastError = true)]
        public static extern unsafe void SPKCVO_C(byte * target, double et, byte * outref, byte * refloc, byte * abcorr, double * obssta, double obsepc, byte * obsctr, byte * obsref, double * state, double * lt);

        [DllImport(dllPath, CharSet = CharSet.Auto, SetLastError = true)]
        public static extern unsafe void SPKCVT_C(double * trgsta, double trgepc, byte * trgctr, byte * trgref, double et, byte * outref, byte * refloc, byte * abcorr, byte * obsrvr, double * state, double * lt);

        [DllImport(dllPath, CharSet = CharSet.Auto, SetLastError = true)]
        public static extern unsafe void SPKEZ_C(long target, double epoch, byte * frame, byte * abcorr, long observer, double * state, double * lt);

        [DllImport(dllPath, CharSet = CharSet.Auto, SetLastError = true)]
        public static extern unsafe void SPKEZP_C(long targ, double et, byte * @ref, byte * abcorr, long obs, double * ptarg, double * lt);

        [DllImport(dllPath, CharSet = CharSet.Auto, SetLastError = true)]
        public static extern unsafe void SPKEZR_C(byte * target, double epoch, byte * frame, byte * abcorr, byte * observer, double * state, double * lt);

        [DllImport(dllPath, CharSet = CharSet.Auto, SetLastError = true)]
        public static extern unsafe void SPKGEO_C(long targ, double et, byte * @ref, long obs, double * state, double * lt);

        [DllImport(dllPath, CharSet = CharSet.Auto, SetLastError = true)]
        public static extern unsafe void SPKGPS_C(long targ, double et, byte * @ref, long obs, double * pos, double * lt);

        [DllImport(dllPath, CharSet = CharSet.Auto, SetLastError = true)]
        public static extern unsafe void SPKLEF_C(byte * filename, long * handle);

        [DllImport(dllPath, CharSet = CharSet.Auto, SetLastError = true)]
        public static extern unsafe void SPKLTC_C(long targ, double et, byte * @ref, byte * abcorr, double * stobs, double * starg, double * lt, double * dlt);

        [DllImport(dllPath, CharSet = CharSet.Auto, SetLastError = true)]
        public static extern unsafe void SPKOPA_C(byte * file, long * handle);

        [DllImport(dllPath, CharSet = CharSet.Auto, SetLastError = true)]
        public static extern unsafe void SPKOPN_C(byte * name, byte * ifname, long ncomch, long * handle);

        [DllImport(dllPath, CharSet = CharSet.Auto, SetLastError = true)]
        public static extern unsafe void SPKPDS_C(long body, long center, byte * frame, long type, double first, double last, double * descr);

        [DllImport(dllPath, CharSet = CharSet.Auto, SetLastError = true)]
        public static extern unsafe void SPKPOS_C(byte * targ, double et, byte * @ref, byte * abcorr, byte * obs, double * ptarg, double * lt);

        [DllImport(dllPath, CharSet = CharSet.Auto, SetLastError = true)]
        public static extern unsafe void SPKPVN_C(long handle, double * descr, double et, long * @ref, double * state, long * center);

        [DllImport(dllPath, CharSet = CharSet.Auto, SetLastError = true)]
        public static extern unsafe void SPKSFS_C(long body, double et, long idlen, long * handle, double * descr, byte * ident, int * found);

        [DllImport(dllPath, CharSet = CharSet.Auto, SetLastError = true)]
        public static extern unsafe void SPKSSB_C(long targ, double et, byte * @ref, double * starg);

        [DllImport(dllPath, CharSet = CharSet.Auto, SetLastError = true)]
        public static extern unsafe void SPKSUB_C(long handle, double * descr, byte * ident, double begin, double end, long newh);

        [DllImport(dllPath, CharSet = CharSet.Auto, SetLastError = true)]
        public static extern unsafe void SPKUDS_C(double * descr, long * body, long * center, long * frame, long * type, double * first, double * last, long * begin, long * end);

        [DllImport(dllPath, CharSet = CharSet.Auto, SetLastError = true)]
        public static extern unsafe void SPKUEF_C(long handle);

        [DllImport(dllPath, CharSet = CharSet.Auto, SetLastError = true)]
        public static extern unsafe void SPKW02_C(long handle, long body, long center, byte * frame, double first, double last, byte * segid, double intlen, long n, long polydg, double * cdata, double btime);

        [DllImport(dllPath, CharSet = CharSet.Auto, SetLastError = true)]
        public static extern unsafe void SPKW03_C(long handle, long body, long center, byte * frame, double first, double last, byte * segid, double intlen, long n, long polydg, double * cdata, double btime);

        [DllImport(dllPath, CharSet = CharSet.Auto, SetLastError = true)]
        public static extern unsafe void SPKW05_C(long handle, long body, long center, byte * frame, double first, double last, byte * segid, double gm, long n, double * states, double * epochs);

        [DllImport(dllPath, CharSet = CharSet.Auto, SetLastError = true)]
        public static extern unsafe void SPKW08_C(long handle, long body, long center, byte * frame, double first, double last, byte * segid, long degree, long n, double * states, double epoch1, double step);

        [DllImport(dllPath, CharSet = CharSet.Auto, SetLastError = true)]
        public static extern unsafe void SPKW09_C(long handle, long body, long center, byte * frame, double first, double last, byte * segid, long degree, long n, double * states, double * epochs);

        [DllImport(dllPath, CharSet = CharSet.Auto, SetLastError = true)]
        public static extern unsafe void SPKW10_C(long handle, long body, long center, byte * frame, double first, double last, byte * segid, double * consts, long n, double * elems, double * epochs);

        [DllImport(dllPath, CharSet = CharSet.Auto, SetLastError = true)]
        public static extern unsafe void SPKW12_C(long handle, long body, long center, byte * frame, double first, double last, byte * segid, long degree, long n, double * states, double epoch0, double step);

        [DllImport(dllPath, CharSet = CharSet.Auto, SetLastError = true)]
        public static extern unsafe void SPKW13_C(long handle, long body, long center, byte * frame, double first, double last, byte * segid, long degree, long n, double * states, double * epochs);

        [DllImport(dllPath, CharSet = CharSet.Auto, SetLastError = true)]
        public static extern unsafe void SPKW15_C(long handle, long body, long center, byte * frame, double first, double last, byte * segid, double epoch, double * tp, double * pa, double p, double ecc, double j2flg, double * pv, double gm, double j2, double radius);

        [DllImport(dllPath, CharSet = CharSet.Auto, SetLastError = true)]
        public static extern unsafe void SPKW17_C(long handle, long body, long center, byte * frame, double first, double last, byte * segid, double epoch, double * eqel, double rapol, double decpol);

        [DllImport(dllPath, CharSet = CharSet.Auto, SetLastError = true)]
        public static extern unsafe void SPKW20_C(long handle, long body, long center, byte * frame, double first, double last, byte * segid, double intlen, long n, long polydg, double * cdata, double dscale, double tscale, double initjd, double initfr);

        [DllImport(dllPath, CharSet = CharSet.Auto, SetLastError = true)]
        public static extern unsafe void SRFC2S_C(long code, long bodyid, long srflen, byte * srfstr, int * isname);

        [DllImport(dllPath, CharSet = CharSet.Auto, SetLastError = true)]
        public static extern unsafe void SRFCSS_C(long code, byte * bodstr, long srflen, byte * srfstr, int * isname);

        [DllImport(dllPath, CharSet = CharSet.Auto, SetLastError = true)]
        public static extern unsafe void SRFNRM_C(byte * method, byte * target, double et, byte * fixref, long npts, double * srfpts, double * normls);

        [DllImport(dllPath, CharSet = CharSet.Auto, SetLastError = true)]
        public static extern unsafe void SRFREC_C(long body, double lon, double lat, double * rectan);

        [DllImport(dllPath, CharSet = CharSet.Auto, SetLastError = true)]
        public static extern unsafe void SRFS2C_C(byte * srfstr, byte * bodstr, long * code, int * found);

        [DllImport(dllPath, CharSet = CharSet.Auto, SetLastError = true)]
        public static extern unsafe void SRFSCC_C(byte * surfce, long bodyid, long * surfid, int * found);

        [DllImport(dllPath, CharSet = CharSet.Auto, SetLastError = true)]
        public static extern unsafe void SRFXPT_C(byte * method, byte * target, double et, byte * abcorr, byte * obsrvr, byte * dref, double * dvec, double * spoint, double * dist, double * trgepc, double * obspos, int * found);

        [DllImport(dllPath, CharSet = CharSet.Auto, SetLastError = true)]
        public static extern unsafe void STELAB_C(double * pobj, double * vobs, double * appobj);

        [DllImport(dllPath, CharSet = CharSet.Auto, SetLastError = true)]
        public static extern unsafe void STPOOL_C(byte * item, long nth, byte * contin, long lenout, byte * @string, long * size, int * found);

        [DllImport(dllPath, CharSet = CharSet.Auto, SetLastError = true)]
        public static extern unsafe void STR2ET_C(byte * date, double * et);

        [DllImport(dllPath, CharSet = CharSet.Auto, SetLastError = true)]
        public static extern unsafe void SUBPNT_C(byte * method, byte * target, double et, byte * fixref, byte * abcorr, byte * obsrvr, double * spoint, double * trgepc, double * srfvec);

        [DllImport(dllPath, CharSet = CharSet.Auto, SetLastError = true)]
        public static extern unsafe void SUBPT_C(byte * method, byte * target, double et, byte * abcorr, byte * obsrvr, double * spoint, double * alt);

        [DllImport(dllPath, CharSet = CharSet.Auto, SetLastError = true)]
        public static extern unsafe void SUBSLR_C(byte * method, byte * target, double et, byte * fixref, byte * abcorr, byte * obsrvr, double * spoint, double * trgepc, double * srfvec);

        [DllImport(dllPath, CharSet = CharSet.Auto, SetLastError = true)]
        public static extern unsafe void SUBSOL_C(byte * method, byte * target, double et, byte * abcorr, byte * obsrvr, double * spoint);

        [DllImport(dllPath, CharSet = CharSet.Auto, SetLastError = true)]
        public static extern unsafe double SUMAD_C(double * array, long n);

        [DllImport(dllPath, CharSet = CharSet.Auto, SetLastError = true)]
        public static extern unsafe long SUMAI_C(long * array, long n);

        [DllImport(dllPath, CharSet = CharSet.Auto, SetLastError = true)]
        public static extern unsafe void SURFNM_C(double a, double b, double c, double * point, double * normal);

        [DllImport(dllPath, CharSet = CharSet.Auto, SetLastError = true)]
        public static extern unsafe void SURFPT_C(double * positn, double * u, double a, double b, double c, double * point, int * found);

        [DllImport(dllPath, CharSet = CharSet.Auto, SetLastError = true)]
        public static extern unsafe void SURFPV_C(double * stvrtx, double * stdir, double a, double b, double c, double * stx, int * found);

        [DllImport(dllPath, CharSet = CharSet.Auto, SetLastError = true)]
        public static extern unsafe void SXFORM_C(byte * from, byte * to, double et, double * xform);

        [DllImport(dllPath, CharSet = CharSet.Auto, SetLastError = true)]
        public static extern unsafe void SZPOOL_C(byte * name, long * n, int * found);

        [DllImport(dllPath, CharSet = CharSet.Auto, SetLastError = true)]
        public static extern unsafe void TERMPT_C(byte * method, byte * ilusrc, byte * target, double et, byte * fixref, byte * abcorr, byte * corloc, byte * obsrvr, double * refvec, double rolstp, long ncuts, double schstp, double soltol, long maxn, long * npts, double * points, double * epochs, double * tangts);

        [DllImport(dllPath, CharSet = CharSet.Auto, SetLastError = true)]
        public static extern unsafe void TIMDEF_C(byte * action, byte * item, long lenout, byte * value);

        [DllImport(dllPath, CharSet = CharSet.Auto, SetLastError = true)]
        public static extern unsafe void TIMOUT_C(double et, byte * pictur, long lenout, byte * output);

        [DllImport(dllPath, CharSet = CharSet.Auto, SetLastError = true)]
        public static extern unsafe void TIPBOD_C(byte * @ref, long body, double et, double * tipm);

        [DllImport(dllPath, CharSet = CharSet.Auto, SetLastError = true)]
        public static extern unsafe void TISBOD_C(byte * @ref, long body, double et, double * tsipm);

        [DllImport(dllPath, CharSet = CharSet.Auto, SetLastError = true)]
        public static extern unsafe void TPARSE_C(byte * @string, long lenout, double * sp2000, byte * errmsg);

        [DllImport(dllPath, CharSet = CharSet.Auto, SetLastError = true)]
        public static extern unsafe void TPICTR_C(byte * sample, long lenpictur, long lenerror, byte * pictur, int * ok, byte * error);

        [DllImport(dllPath, CharSet = CharSet.Auto, SetLastError = true)]
        public static extern unsafe double TRACE_C(double * matrix);

        [DllImport(dllPath, CharSet = CharSet.Auto, SetLastError = true)]
        public static extern unsafe void TRCDEP_C(long * depth);

        [DllImport(dllPath, CharSet = CharSet.Auto, SetLastError = true)]
        public static extern unsafe void TRCNAM_C(long index, long namelen, byte * name);

        [DllImport(dllPath, CharSet = CharSet.Auto, SetLastError = true)]
        public static extern unsafe void TRCOFF_C();

        [DllImport(dllPath, CharSet = CharSet.Auto, SetLastError = true)]
        public static extern unsafe void TSETYR_C(long year);

        [DllImport(dllPath, CharSet = CharSet.Auto, SetLastError = true)]
        public static extern unsafe double TWOPI_C();

        [DllImport(dllPath, CharSet = CharSet.Auto, SetLastError = true)]
        public static extern unsafe void TWOVEC_C(double * axdef, long indexa, double * plndef, long indexp, double * mout);

        [DllImport(dllPath, CharSet = CharSet.Auto, SetLastError = true)]
        public static extern unsafe double TYEAR_C();

        [DllImport(dllPath, CharSet = CharSet.Auto, SetLastError = true)]
        public static extern unsafe void UCASE_C(byte * @in, long lenout, byte * @out);

        [DllImport(dllPath, CharSet = CharSet.Auto, SetLastError = true)]
        public static extern unsafe void UCRSS_C(double * v1, double * v2, double * vout);

        [DllImport(dllPath, CharSet = CharSet.Auto, SetLastError = true)]
        public static extern unsafe void UDF_C(double x, double * value);

        [DllImport(dllPath, CharSet = CharSet.Auto, SetLastError = true)]
        public static extern unsafe double UNITIM_C(double epoch, byte * insys, byte * outsys);

        [DllImport(dllPath, CharSet = CharSet.Auto, SetLastError = true)]
        public static extern unsafe void UNLOAD_C(byte * file);

        [DllImport(dllPath, CharSet = CharSet.Auto, SetLastError = true)]
        public static extern unsafe void UNORM_C(double * v1, double * vout, double * vmag);

        [DllImport(dllPath, CharSet = CharSet.Auto, SetLastError = true)]
        public static extern unsafe void UNORMG_C(double * v1, long ndim, double * vout, double * vmag);

        [DllImport(dllPath, CharSet = CharSet.Auto, SetLastError = true)]
        public static extern unsafe void UTC2ET_C(byte * utcstr, double * et);

        [DllImport(dllPath, CharSet = CharSet.Auto, SetLastError = true)]
        public static extern unsafe void VADD_C(double * v1, double * v2, double * vout);

        [DllImport(dllPath, CharSet = CharSet.Auto, SetLastError = true)]
        public static extern unsafe void VADDG_C(double * v1, double * v2, long ndim, double * vout);

        [DllImport(dllPath, CharSet = CharSet.Auto, SetLastError = true)]
        public static extern unsafe void VCRSS_C(double * v1, double * v2, double * vout);

        [DllImport(dllPath, CharSet = CharSet.Auto, SetLastError = true)]
        public static extern unsafe double VDIST_C(double * v1, double * v2);

        [DllImport(dllPath, CharSet = CharSet.Auto, SetLastError = true)]
        public static extern unsafe double VDISTG_C(double * v1, double * v2, long ndim);

        [DllImport(dllPath, CharSet = CharSet.Auto, SetLastError = true)]
        public static extern unsafe double VDOT_C(double * v1, double * v2);

        [DllImport(dllPath, CharSet = CharSet.Auto, SetLastError = true)]
        public static extern unsafe double VDOTG_C(double * v1, double * v2, long ndim);

        [DllImport(dllPath, CharSet = CharSet.Auto, SetLastError = true)]
        public static extern unsafe void VEQU_C(double * vin, double * vout);

        [DllImport(dllPath, CharSet = CharSet.Auto, SetLastError = true)]
        public static extern unsafe void VEQUG_C(double * vin, long ndim, double * vout);

        [DllImport(dllPath, CharSet = CharSet.Auto, SetLastError = true)]
        public static extern unsafe void VHAT_C(double * v1, double * vout);

        [DllImport(dllPath, CharSet = CharSet.Auto, SetLastError = true)]
        public static extern unsafe void VHATG_C(double * v1, long ndim, double * vout);

        [DllImport(dllPath, CharSet = CharSet.Auto, SetLastError = true)]
        public static extern unsafe void VLCOM3_C(double a, double * v1, double b, double * v2, double c, double * v3, double * sum);

        [DllImport(dllPath, CharSet = CharSet.Auto, SetLastError = true)]
        public static extern unsafe void VLCOM_C(double a, double * v1, double b, double * v2, double * sum);

        [DllImport(dllPath, CharSet = CharSet.Auto, SetLastError = true)]
        public static extern unsafe void VLCOMG_C(long n, double a, double * v1, double b, double * v2, double * sum);

        [DllImport(dllPath, CharSet = CharSet.Auto, SetLastError = true)]
        public static extern unsafe void VMINUG_C(double * vin, long ndim, double * vout);

        [DllImport(dllPath, CharSet = CharSet.Auto, SetLastError = true)]
        public static extern unsafe void VMINUS_C(double * v1, double * vout);

        [DllImport(dllPath, CharSet = CharSet.Auto, SetLastError = true)]
        public static extern unsafe double VNORM_C(double * v1);

        [DllImport(dllPath, CharSet = CharSet.Auto, SetLastError = true)]
        public static extern unsafe double VNORMG_C(double * v1, long ndim);

        [DllImport(dllPath, CharSet = CharSet.Auto, SetLastError = true)]
        public static extern unsafe void VPACK_C(double x, double y, double z, double * v);

        [DllImport(dllPath, CharSet = CharSet.Auto, SetLastError = true)]
        public static extern unsafe void VPERP_C(double * a, double * b, double * p);

        [DllImport(dllPath, CharSet = CharSet.Auto, SetLastError = true)]
        public static extern unsafe void VPROJ_C(double * a, double * b, double * p);

        [DllImport(dllPath, CharSet = CharSet.Auto, SetLastError = true)]
        public static extern unsafe double VREL_C(double * v1, double * v2);

        [DllImport(dllPath, CharSet = CharSet.Auto, SetLastError = true)]
        public static extern unsafe double VRELG_C(double * v1, double * v2, long ndim);

        [DllImport(dllPath, CharSet = CharSet.Auto, SetLastError = true)]
        public static extern unsafe void VROTV_C(double * v, double * axis, double theta, double * r);

        [DllImport(dllPath, CharSet = CharSet.Auto, SetLastError = true)]
        public static extern unsafe void VSCL_C(double s, double * v1, double * vout);

        [DllImport(dllPath, CharSet = CharSet.Auto, SetLastError = true)]
        public static extern unsafe void VSCLG_C(double s, double * v1, long ndim, double * vout);

        [DllImport(dllPath, CharSet = CharSet.Auto, SetLastError = true)]
        public static extern unsafe double VSEP_C(double * v1, double * v2);

        [DllImport(dllPath, CharSet = CharSet.Auto, SetLastError = true)]
        public static extern unsafe double VSEPG_C(double * v1, double * v2, long ndim);

        [DllImport(dllPath, CharSet = CharSet.Auto, SetLastError = true)]
        public static extern unsafe void VSUB_C(double * v1, double * v2, double * vout);

        [DllImport(dllPath, CharSet = CharSet.Auto, SetLastError = true)]
        public static extern unsafe void VSUBG_C(double * v1, double * v2, long ndim, double * vout);

        [DllImport(dllPath, CharSet = CharSet.Auto, SetLastError = true)]
        public static extern unsafe double VTMV_C(double * v1, double * matrix, double * v2);

        [DllImport(dllPath, CharSet = CharSet.Auto, SetLastError = true)]
        public static extern unsafe void VUPACK_C(double * v, double * x, double * y, double * z);

        [DllImport(dllPath, CharSet = CharSet.Auto, SetLastError = true)]
        public static extern unsafe int VZERO_C(double * v);

        [DllImport(dllPath, CharSet = CharSet.Auto, SetLastError = true)]
        public static extern unsafe int VZEROG_C(double * v, long ndim);

        [DllImport(dllPath, CharSet = CharSet.Auto, SetLastError = true)]
        public static extern unsafe void XF2EUL_C(double * xform, long axisa, long axisb, long axisc, double * eulang, int * unique);

        [DllImport(dllPath, CharSet = CharSet.Auto, SetLastError = true)]
        public static extern unsafe void XF2RAV_C(double * xform, double * rot, double * av);

        [DllImport(dllPath, CharSet = CharSet.Auto, SetLastError = true)]
        public static extern unsafe void XFMSTA_C(double * input_state, byte * input_coord_sys, byte * output_coord_sys, byte * body, double * output_state);

        [DllImport(dllPath, CharSet = CharSet.Auto, SetLastError = true)]
        public static extern unsafe void XPOSE6_C(double * m1, double * mout);

        [DllImport(dllPath, CharSet = CharSet.Auto, SetLastError = true)]
        public static extern unsafe void XPOSE_C(double * m1, double * mout);

        [DllImport(dllPath, CharSet = CharSet.Auto, SetLastError = true)]
        public static extern unsafe void ZZGETCML_C(long * argc, byte *** argv, int init);

        [DllImport(dllPath, CharSet = CharSet.Auto, SetLastError = true)]
        public static extern unsafe int ZZGFGETH_C();

        [DllImport(dllPath, CharSet = CharSet.Auto, SetLastError = true)]
        public static extern unsafe void ZZGFSAVH_C(int status);

        #endregion SpiceZpr
    }
}
