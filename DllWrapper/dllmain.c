// dllmain.cpp : Defines the entry point for the DLL application.
#include "Header.h"

double g_c;

extern DLLWRAPPER_API void AddTest(const double a, const double b, double * c)
{
    *c = a + b;
    g_c = *c;
}

extern DLLWRAPPER_API double GetTest()
{
    return g_c;
}

extern DLLWRAPPER_API void SizeOfEnum (int *size)
{
    *size = sizeof(SpiceDataType);
}

extern DLLWRAPPER_API void CharTest (char *c)
{
    int cnt = 0;
    while (*c != '\0' && cnt < 100)
    {
        printf("%c", *c++);
        cnt++;
    }
    printf("|EOF|");
}

// SpiceZpr {
extern DLLWRAPPER_API void APPNDC_C(ConstSpiceChar * item, SpiceCell * cell) { appndc_c(item,cell);}
extern DLLWRAPPER_API void APPNDD_C(SpiceDouble item, SpiceCell * cell) { appndd_c(item,cell);}
extern DLLWRAPPER_API void APPNDI_C(SpiceInt item, SpiceCell * cell) { appndi_c(item,cell);}
extern DLLWRAPPER_API void AXISAR_C(ConstSpiceDouble axis[3], SpiceDouble angle, SpiceDouble r[3][3]) { axisar_c(axis,angle,r);}
extern DLLWRAPPER_API SpiceDouble B1900_C() {return b1900_c();}
extern DLLWRAPPER_API SpiceDouble B1950_C() {return b1950_c();}
extern DLLWRAPPER_API SpiceBoolean BADKPV_C(ConstSpiceChar * caller, ConstSpiceChar * name, ConstSpiceChar * comp, SpiceInt size, SpiceInt divby, SpiceChar type) {return badkpv_c(caller,name,comp,size,divby,type);}
extern DLLWRAPPER_API void BLTFRM_C(SpiceInt frmcls, SpiceCell * idset) { bltfrm_c(frmcls,idset);}
extern DLLWRAPPER_API void BODC2N_C(SpiceInt code, SpiceInt namelen, SpiceChar * name, SpiceBoolean * found) { bodc2n_c(code,namelen,name,found);}
extern DLLWRAPPER_API void BODC2S_C(SpiceInt code, SpiceInt lenout, SpiceChar * name) { bodc2s_c(code,lenout,name);}
extern DLLWRAPPER_API void BODDEF_C(ConstSpiceChar * name, SpiceInt code) { boddef_c(name,code);}
extern DLLWRAPPER_API SpiceBoolean BODFND_C(SpiceInt body, ConstSpiceChar * item) {return bodfnd_c(body,item);}
extern DLLWRAPPER_API void BODN2C_C(ConstSpiceChar * name, SpiceInt * code, SpiceBoolean * found) { bodn2c_c(name,code,found);}
extern DLLWRAPPER_API void BODS2C_C(ConstSpiceChar * name, SpiceInt * code, SpiceBoolean * found) { bods2c_c(name,code,found);}
extern DLLWRAPPER_API void BODVAR_C(SpiceInt body, ConstSpiceChar * item, SpiceInt * dim, SpiceDouble * values) { bodvar_c(body,item,dim,values);}
extern DLLWRAPPER_API void BODVCD_C(SpiceInt body, ConstSpiceChar * item, SpiceInt maxn, SpiceInt * dim, SpiceDouble * values) { bodvcd_c(body,item,maxn,dim,values);}
extern DLLWRAPPER_API void BODVRD_C(ConstSpiceChar * body, ConstSpiceChar * item, SpiceInt maxn, SpiceInt * dim, SpiceDouble * values) { bodvrd_c(body,item,maxn,dim,values);}
extern DLLWRAPPER_API SpiceDouble BRCKTD_C(SpiceDouble number, SpiceDouble end1, SpiceDouble end2) {return brcktd_c(number,end1,end2);}
extern DLLWRAPPER_API SpiceInt BRCKTI_C(SpiceInt number, SpiceInt end1, SpiceInt end2) {return brckti_c(number,end1,end2);}
extern DLLWRAPPER_API SpiceInt BSCHOC_C(ConstSpiceChar * value, SpiceInt ndim, SpiceInt lenvals, const void * array, ConstSpiceInt * order) {return bschoc_c(value,ndim,lenvals,array,order);}
extern DLLWRAPPER_API SpiceInt BSCHOI_C(SpiceInt value, SpiceInt ndim, ConstSpiceInt * array, ConstSpiceInt * order) {return bschoi_c(value,ndim,array,order);}
extern DLLWRAPPER_API SpiceInt BSRCHC_C(ConstSpiceChar * value, SpiceInt ndim, SpiceInt lenvals, const void * array) {return bsrchc_c(value,ndim,lenvals,array);}
extern DLLWRAPPER_API SpiceInt BSRCHD_C(SpiceDouble value, SpiceInt ndim, ConstSpiceDouble * array) {return bsrchd_c(value,ndim,array);}
extern DLLWRAPPER_API SpiceInt BSRCHI_C(SpiceInt value, SpiceInt ndim, ConstSpiceInt * array) {return bsrchi_c(value,ndim,array);}
extern DLLWRAPPER_API SpiceInt CARD_C(SpiceCell * cell) {return card_c(cell);}
extern DLLWRAPPER_API void CCIFRM_C(SpiceInt frclss, SpiceInt clssid, SpiceInt lenout, SpiceInt * frcode, SpiceChar * frname, SpiceInt * center, SpiceBoolean * found) { ccifrm_c(frclss,clssid,lenout,frcode,frname,center,found);}
extern DLLWRAPPER_API void CGV2EL_C(ConstSpiceDouble center[3], ConstSpiceDouble vec1[3], ConstSpiceDouble vec2[3], SpiceEllipse * ellipse) { cgv2el_c(center,vec1,vec2,ellipse);}
extern DLLWRAPPER_API void CHBDER_C(ConstSpiceDouble * cp, SpiceInt degp, SpiceDouble x2s[2], SpiceDouble x, SpiceInt nderiv, SpiceDouble * partdp, SpiceDouble * dpdxs) { chbder_c(cp,degp,x2s,x,nderiv,partdp,dpdxs);}
extern DLLWRAPPER_API void CHKIN_C(ConstSpiceChar * module) { chkin_c(module);}
extern DLLWRAPPER_API void CHKOUT_C(ConstSpiceChar * module) { chkout_c(module);}
extern DLLWRAPPER_API void CIDFRM_C(SpiceInt cent, SpiceInt lenout, SpiceInt * frcode, SpiceChar * frname, SpiceBoolean * found) { cidfrm_c(cent,lenout,frcode,frname,found);}
extern DLLWRAPPER_API void CKCLS_C(SpiceInt handle) { ckcls_c(handle);}
extern DLLWRAPPER_API void CKCOV_C(ConstSpiceChar * ck, SpiceInt idcode, SpiceBoolean needav, ConstSpiceChar * level, SpiceDouble tol, ConstSpiceChar * timsys, SpiceCell * cover) { ckcov_c(ck,idcode,needav,level,tol,timsys,cover);}
extern DLLWRAPPER_API void CKGP_C(SpiceInt inst, SpiceDouble sclkdp, SpiceDouble tol, ConstSpiceChar * ref, SpiceDouble cmat[3][3], SpiceDouble * clkout, SpiceBoolean * found) { ckgp_c(inst,sclkdp,tol,ref,cmat,clkout,found);}
extern DLLWRAPPER_API void CKGPAV_C(SpiceInt inst, SpiceDouble sclkdp, SpiceDouble tol, ConstSpiceChar * ref, SpiceDouble cmat[3][3], SpiceDouble av[3], SpiceDouble * clkout, SpiceBoolean * found) { ckgpav_c(inst,sclkdp,tol,ref,cmat,av,clkout,found);}
extern DLLWRAPPER_API void CKLPF_C(ConstSpiceChar * fname, SpiceInt * handle) { cklpf_c(fname,handle);}
extern DLLWRAPPER_API void CKOBJ_C(ConstSpiceChar * ck, SpiceCell * ids) { ckobj_c(ck,ids);}
extern DLLWRAPPER_API void CKOPN_C(ConstSpiceChar * name, ConstSpiceChar * ifname, SpiceInt ncomch, SpiceInt * handle) { ckopn_c(name,ifname,ncomch,handle);}
extern DLLWRAPPER_API void CKUPF_C(SpiceInt handle) { ckupf_c(handle);}
extern DLLWRAPPER_API void CKW01_C(SpiceInt handle, SpiceDouble begtime, SpiceDouble endtime, SpiceInt inst, ConstSpiceChar * ref, SpiceBoolean avflag, ConstSpiceChar * segid, SpiceInt nrec, ConstSpiceDouble sclkdp[], ConstSpiceDouble quats[][4], ConstSpiceDouble avvs[][3]) { ckw01_c(handle,begtime,endtime,inst,ref,avflag,segid,nrec,sclkdp,quats,avvs);}
extern DLLWRAPPER_API void CKW02_C(SpiceInt handle, SpiceDouble begtim, SpiceDouble endtim, SpiceInt inst, ConstSpiceChar * ref, ConstSpiceChar * segid, SpiceInt nrec, ConstSpiceDouble start[], ConstSpiceDouble stop[], ConstSpiceDouble quats[][4], ConstSpiceDouble avvs[][3], ConstSpiceDouble rates[]) { ckw02_c(handle,begtim,endtim,inst,ref,segid,nrec,start,stop,quats,avvs,rates);}
extern DLLWRAPPER_API void CKW03_C(SpiceInt handle, SpiceDouble begtim, SpiceDouble endtim, SpiceInt inst, ConstSpiceChar * ref, SpiceBoolean avflag, ConstSpiceChar * segid, SpiceInt nrec, ConstSpiceDouble sclkdp[], ConstSpiceDouble quats[][4], ConstSpiceDouble avvs[][3], SpiceInt nints, ConstSpiceDouble starts[]) { ckw03_c(handle,begtim,endtim,inst,ref,avflag,segid,nrec,sclkdp,quats,avvs,nints,starts);}
extern DLLWRAPPER_API void CKW05_C(SpiceInt handle, SpiceCK05Subtype subtyp, SpiceInt degree, SpiceDouble begtim, SpiceDouble endtim, SpiceInt inst, ConstSpiceChar * ref, SpiceBoolean avflag, ConstSpiceChar * segid, SpiceInt n, ConstSpiceDouble sclkdp[], const void * packets, SpiceDouble rate, SpiceInt nints, ConstSpiceDouble starts[]) { ckw05_c(handle,subtyp,degree,begtim,endtim,inst,ref,avflag,segid,n,sclkdp,packets,rate,nints,starts);}
extern DLLWRAPPER_API void CLEARD_C(SpiceInt ndim, SpiceDouble * array) { cleard_c(ndim,array);}
extern DLLWRAPPER_API SpiceDouble CLIGHT_C() {return clight_c();}
extern DLLWRAPPER_API void CLPOOL_C() { clpool_c();}
extern DLLWRAPPER_API void CMPRSS_C(SpiceChar delim, SpiceInt n, ConstSpiceChar * input, SpiceInt lenout, SpiceChar * output) { cmprss_c(delim,n,input,lenout,output);}
extern DLLWRAPPER_API void CNMFRM_C(ConstSpiceChar * cname, SpiceInt lenout, SpiceInt * frcode, SpiceChar * frname, SpiceBoolean * found) { cnmfrm_c(cname,lenout,frcode,frname,found);}
extern DLLWRAPPER_API void CONICS_C(ConstSpiceDouble elts[8], SpiceDouble et, SpiceDouble state[6]) { conics_c(elts,et,state);}
extern DLLWRAPPER_API void CONVRT_C(SpiceDouble x, ConstSpiceChar * in, ConstSpiceChar * out, SpiceDouble * y) { convrt_c(x,in,out,y);}
extern DLLWRAPPER_API void COPY_C(SpiceCell * a, SpiceCell * b) { copy_c(a,b);}
extern DLLWRAPPER_API SpiceInt CPOS_C(ConstSpiceChar * str, ConstSpiceChar * chars, SpiceInt start) {return cpos_c(str,chars,start);}
extern DLLWRAPPER_API SpiceInt CPOSR_C(ConstSpiceChar * str, ConstSpiceChar * chars, SpiceInt start) {return cposr_c(str,chars,start);}
extern DLLWRAPPER_API void CVPOOL_C(ConstSpiceChar * agent, SpiceBoolean * update) { cvpool_c(agent,update);}
extern DLLWRAPPER_API void CYLLAT_C(SpiceDouble r, SpiceDouble lonc, SpiceDouble z, SpiceDouble * radius, SpiceDouble * lon, SpiceDouble * lat) { cyllat_c(r,lonc,z,radius,lon,lat);}
extern DLLWRAPPER_API void CYLREC_C(SpiceDouble r, SpiceDouble lon, SpiceDouble z, SpiceDouble rectan[3]) { cylrec_c(r,lon,z,rectan);}
extern DLLWRAPPER_API void CYLSPH_C(SpiceDouble r, SpiceDouble lonc, SpiceDouble z, SpiceDouble * radius, SpiceDouble * colat, SpiceDouble * lon) { cylsph_c(r,lonc,z,radius,colat,lon);}
extern DLLWRAPPER_API void DAFAC_C(SpiceInt handle, SpiceInt n, SpiceInt lenvals, const void * buffer) { dafac_c(handle,n,lenvals,buffer);}
extern DLLWRAPPER_API void DAFBBS_C(SpiceInt handle) { dafbbs_c(handle);}
extern DLLWRAPPER_API void DAFBFS_C(SpiceInt handle) { dafbfs_c(handle);}
extern DLLWRAPPER_API void DAFCLS_C(SpiceInt handle) { dafcls_c(handle);}
extern DLLWRAPPER_API void DAFCS_C(SpiceInt handle) { dafcs_c(handle);}
extern DLLWRAPPER_API void DAFDC_C(SpiceInt handle) { dafdc_c(handle);}
extern DLLWRAPPER_API void DAFEC_C(SpiceInt handle, SpiceInt bufsiz, SpiceInt lenout, SpiceInt * n, void * buffer, SpiceBoolean * done) { dafec_c(handle,bufsiz,lenout,n,buffer,done);}
extern DLLWRAPPER_API void DAFFNA_C(SpiceBoolean * found) { daffna_c(found);}
extern DLLWRAPPER_API void DAFFPA_C(SpiceBoolean * found) { daffpa_c(found);}
extern DLLWRAPPER_API void DAFGDA_C(SpiceInt handle, SpiceInt begin, SpiceInt end, SpiceDouble * data) { dafgda_c(handle,begin,end,data);}
extern DLLWRAPPER_API void DAFGH_C(SpiceInt * handle) { dafgh_c(handle);}
extern DLLWRAPPER_API void DAFGN_C(SpiceInt lenout, SpiceChar * name) { dafgn_c(lenout,name);}
extern DLLWRAPPER_API void DAFGS_C(SpiceDouble sum[]) { dafgs_c(sum);}
extern DLLWRAPPER_API void DAFGSR_C(SpiceInt handle, SpiceInt recno, SpiceInt begin, SpiceInt end, SpiceDouble * data, SpiceBoolean * found) { dafgsr_c(handle,recno,begin,end,data,found);}
extern DLLWRAPPER_API void DAFOPR_C(ConstSpiceChar * fname, SpiceInt * handle) { dafopr_c(fname,handle);}
extern DLLWRAPPER_API void DAFOPW_C(ConstSpiceChar * fname, SpiceInt * handle) { dafopw_c(fname,handle);}
extern DLLWRAPPER_API void DAFPS_C(SpiceInt nd, SpiceInt ni, ConstSpiceDouble dc[], ConstSpiceInt ic[], SpiceDouble sum[]) { dafps_c(nd,ni,dc,ic,sum);}
extern DLLWRAPPER_API void DAFRDA_C(SpiceInt handle, SpiceInt begin, SpiceInt end, SpiceDouble * data) { dafrda_c(handle,begin,end,data);}
extern DLLWRAPPER_API void DAFRFR_C(SpiceInt handle, SpiceInt lenout, SpiceInt * nd, SpiceInt * ni, SpiceChar * ifname, SpiceInt * fward, SpiceInt * bward, SpiceInt * free) { dafrfr_c(handle,lenout,nd,ni,ifname,fward,bward,free);}
extern DLLWRAPPER_API void DAFRS_C(ConstSpiceDouble * sum) { dafrs_c(sum);}
extern DLLWRAPPER_API void DAFUS_C(ConstSpiceDouble sum[], SpiceInt nd, SpiceInt ni, SpiceDouble dc[], SpiceInt ic[]) { dafus_c(sum,nd,ni,dc,ic);}
extern DLLWRAPPER_API void DASAC_C(SpiceInt handle, SpiceInt n, SpiceInt buflen, const void * buffer) { dasac_c(handle,n,buflen,buffer);}
extern DLLWRAPPER_API void DASCLS_C(SpiceInt handle) { dascls_c(handle);}
extern DLLWRAPPER_API void DASDC_C(SpiceInt handle) { dasdc_c(handle);}
extern DLLWRAPPER_API void DASEC_C(SpiceInt handle, SpiceInt bufsiz, SpiceInt buflen, SpiceInt * n, void * buffer, SpiceBoolean * done) { dasec_c(handle,bufsiz,buflen,n,buffer,done);}
extern DLLWRAPPER_API void DASHFN_C(SpiceInt handle, SpiceInt namlen, SpiceChar * fname) { dashfn_c(handle,namlen,fname);}
extern DLLWRAPPER_API void DASOPR_C(ConstSpiceChar * fname, SpiceInt * handle) { dasopr_c(fname,handle);}
extern DLLWRAPPER_API void DASOPW_C(ConstSpiceChar * fname, SpiceInt * handle) { dasopw_c(fname,handle);}
extern DLLWRAPPER_API void DASRFR_C(SpiceInt handle, SpiceInt idwlen, SpiceInt ifnlen, SpiceChar * idword, SpiceChar * ifname, SpiceInt * nresvr, SpiceInt * nresvc, SpiceInt * ncomr, SpiceInt * ncomc) { dasrfr_c(handle,idwlen,ifnlen,idword,ifname,nresvr,nresvc,ncomr,ncomc);}
extern DLLWRAPPER_API void DCYLDR_C(SpiceDouble x, SpiceDouble y, SpiceDouble z, SpiceDouble jacobi[3][3]) { dcyldr_c(x,y,z,jacobi);}
extern DLLWRAPPER_API void DELTET_C(SpiceDouble epoch, ConstSpiceChar * eptype, SpiceDouble * delta) { deltet_c(epoch,eptype,delta);}
extern DLLWRAPPER_API SpiceDouble DET_C(ConstSpiceDouble m1[3][3]) {return det_c(m1);}
extern DLLWRAPPER_API void DGEODR_C(SpiceDouble x, SpiceDouble y, SpiceDouble z, SpiceDouble re, SpiceDouble f, SpiceDouble jacobi[3][3]) { dgeodr_c(x,y,z,re,f,jacobi);}
extern DLLWRAPPER_API void DIAGS2_C(ConstSpiceDouble symmat[2][2], SpiceDouble diag[2][2], SpiceDouble rotate[2][2]) { diags2_c(symmat,diag,rotate);}
extern DLLWRAPPER_API void DIFF_C(SpiceCell * a, SpiceCell * b, SpiceCell * c) { diff_c(a,b,c);}
extern DLLWRAPPER_API void DLABBS_C(SpiceInt handle, SpiceDLADescr * descr, SpiceBoolean * found) { dlabbs_c(handle,descr,found);}
extern DLLWRAPPER_API void DLABFS_C(SpiceInt handle, SpiceDLADescr * descr, SpiceBoolean * found) { dlabfs_c(handle,descr,found);}
extern DLLWRAPPER_API void DLAFNS_C(SpiceInt handle, ConstSpiceDLADescr * descr, SpiceDLADescr * nxtdsc, SpiceBoolean * found) { dlafns_c(handle,descr,nxtdsc,found);}
extern DLLWRAPPER_API void DLAFPS_C(SpiceInt handle, ConstSpiceDLADescr * descr, SpiceDLADescr * prvdsc, SpiceBoolean * found) { dlafps_c(handle,descr,prvdsc,found);}
extern DLLWRAPPER_API void DLATDR_C(SpiceDouble x, SpiceDouble y, SpiceDouble z, SpiceDouble jacobi[3][3]) { dlatdr_c(x,y,z,jacobi);}
extern DLLWRAPPER_API void DP2HX_C(SpiceDouble number, SpiceInt lenout, SpiceChar * string, SpiceInt * length) { dp2hx_c(number,lenout,string,length);}
extern DLLWRAPPER_API void DPGRDR_C(ConstSpiceChar * body, SpiceDouble x, SpiceDouble y, SpiceDouble z, SpiceDouble re, SpiceDouble f, SpiceDouble jacobi[3][3]) { dpgrdr_c(body,x,y,z,re,f,jacobi);}
extern DLLWRAPPER_API SpiceDouble DPMAX_() {return dpmax_();}
extern DLLWRAPPER_API SpiceDouble DPMAX_C() {return dpmax_c();}
extern DLLWRAPPER_API SpiceDouble DPMIN_() {return dpmin_();}
extern DLLWRAPPER_API SpiceDouble DPMIN_C() {return dpmin_c();}
extern DLLWRAPPER_API SpiceDouble DPR_C() {return dpr_c();}
extern DLLWRAPPER_API void DRDCYL_C(SpiceDouble r, SpiceDouble lon, SpiceDouble z, SpiceDouble jacobi[3][3]) { drdcyl_c(r,lon,z,jacobi);}
extern DLLWRAPPER_API void DRDGEO_C(SpiceDouble lon, SpiceDouble lat, SpiceDouble alt, SpiceDouble re, SpiceDouble f, SpiceDouble jacobi[3][3]) { drdgeo_c(lon,lat,alt,re,f,jacobi);}
extern DLLWRAPPER_API void DRDLAT_C(SpiceDouble r, SpiceDouble lon, SpiceDouble lat, SpiceDouble jacobi[3][3]) { drdlat_c(r,lon,lat,jacobi);}
extern DLLWRAPPER_API void DRDPGR_C(ConstSpiceChar * body, SpiceDouble lon, SpiceDouble lat, SpiceDouble alt, SpiceDouble re, SpiceDouble f, SpiceDouble jacobi[3][3]) { drdpgr_c(body,lon,lat,alt,re,f,jacobi);}
extern DLLWRAPPER_API void DRDSPH_C(SpiceDouble r, SpiceDouble colat, SpiceDouble lon, SpiceDouble jacobi[3][3]) { drdsph_c(r,colat,lon,jacobi);}
extern DLLWRAPPER_API void DSKB02_C(SpiceInt handle, ConstSpiceDLADescr * dladsc, SpiceInt * nv, SpiceInt * np, SpiceInt * nvxtot, SpiceDouble vtxbds[3][2], SpiceDouble * voxsiz, SpiceDouble voxori[3], SpiceInt vgrext[3], SpiceInt * cgscal, SpiceInt * vtxnpl, SpiceInt * voxnpt, SpiceInt * voxnpl) { dskb02_c(handle,dladsc,nv,np,nvxtot,vtxbds,voxsiz,voxori,vgrext,cgscal,vtxnpl,voxnpt,voxnpl);}
extern DLLWRAPPER_API void DSKCLS_C(SpiceInt handle, SpiceBoolean optmiz) { dskcls_c(handle,optmiz);}
extern DLLWRAPPER_API void DSKD02_C(SpiceInt handle, ConstSpiceDLADescr * dladsc, SpiceInt item, SpiceInt start, SpiceInt room, SpiceInt * n, SpiceDouble * values) { dskd02_c(handle,dladsc,item,start,room,n,values);}
extern DLLWRAPPER_API void DSKGD_C(SpiceInt handle, ConstSpiceDLADescr * dladsc, SpiceDSKDescr * dskdsc) { dskgd_c(handle,dladsc,dskdsc);}
extern DLLWRAPPER_API void DSKGTL_C(SpiceInt keywrd, SpiceDouble * dpval) { dskgtl_c(keywrd,dpval);}
extern DLLWRAPPER_API void DSKI02_C(SpiceInt handle, ConstSpiceDLADescr * dladsc, SpiceInt item, SpiceInt start, SpiceInt room, SpiceInt * n, SpiceInt * values) { dski02_c(handle,dladsc,item,start,room,n,values);}
extern DLLWRAPPER_API void DSKMI2_C(SpiceInt nv, ConstSpiceDouble vrtces[][3], SpiceInt np, ConstSpiceInt plates[][3], SpiceDouble finscl, SpiceInt corscl, SpiceInt worksz, SpiceInt voxpsz, SpiceInt voxlsz, SpiceBoolean makvtl, SpiceInt spxisz, SpiceInt work[][2], SpiceDouble spaixd[], SpiceInt spaixi[]) { dskmi2_c(nv,vrtces,np,plates,finscl,corscl,worksz,voxpsz,voxlsz,makvtl,spxisz,work,spaixd,spaixi);}
extern DLLWRAPPER_API void DSKN02_C(SpiceInt handle, ConstSpiceDLADescr * dladsc, SpiceInt plid, SpiceDouble normal[3]) { dskn02_c(handle,dladsc,plid,normal);}
extern DLLWRAPPER_API void DSKOBJ_C(ConstSpiceChar * dsk, SpiceCell * bodids) { dskobj_c(dsk,bodids);}
extern DLLWRAPPER_API void DSKOPN_C(ConstSpiceChar * fname, ConstSpiceChar * ifname, SpiceInt ncomch, SpiceInt * handle) { dskopn_c(fname,ifname,ncomch,handle);}
extern DLLWRAPPER_API void DSKP02_C(SpiceInt handle, ConstSpiceDLADescr * dladsc, SpiceInt start, SpiceInt room, SpiceInt * n, SpiceInt plates[][3]) { dskp02_c(handle,dladsc,start,room,n,plates);}
extern DLLWRAPPER_API void DSKRB2_C(SpiceInt nv, ConstSpiceDouble vrtces[][3], SpiceInt np, ConstSpiceInt plates[][3], SpiceInt corsys, ConstSpiceDouble corpar[], SpiceDouble * mncor3, SpiceDouble * mxcor3) { dskrb2_c(nv,vrtces,np,plates,corsys,corpar,mncor3,mxcor3);}
extern DLLWRAPPER_API void DSKSRF_C(ConstSpiceChar * dsk, SpiceInt bodyid, SpiceCell * srfids) { dsksrf_c(dsk,bodyid,srfids);}
extern DLLWRAPPER_API void DSKSTL_C(SpiceInt keywrd, SpiceDouble dpval) { dskstl_c(keywrd,dpval);}
extern DLLWRAPPER_API void DSKV02_C(SpiceInt handle, ConstSpiceDLADescr * dladsc, SpiceInt start, SpiceInt room, SpiceInt * n, SpiceDouble vrtces[][3]) { dskv02_c(handle,dladsc,start,room,n,vrtces);}
extern DLLWRAPPER_API void DSKW02_C(SpiceInt handle, SpiceInt center, SpiceInt surfce, SpiceInt dclass, ConstSpiceChar * frame, SpiceInt corsys, ConstSpiceDouble corpar[], SpiceDouble mncor1, SpiceDouble mxcor1, SpiceDouble mncor2, SpiceDouble mxcor2, SpiceDouble mncor3, SpiceDouble mxcor3, SpiceDouble first, SpiceDouble last, SpiceInt nv, ConstSpiceDouble vrtces[][3], SpiceInt np, ConstSpiceInt plates[][3], ConstSpiceDouble spaixd[], ConstSpiceInt spaixi[]) { dskw02_c(handle,center,surfce,dclass,frame,corsys,corpar,mncor1,mxcor1,mncor2,mxcor2,mncor3,mxcor3,first,last,nv,vrtces,np,plates,spaixd,spaixi);}
extern DLLWRAPPER_API void DSKX02_C(SpiceInt handle, ConstSpiceDLADescr * dladsc, ConstSpiceDouble vertex[3], ConstSpiceDouble raydir[3], SpiceInt * plid, SpiceDouble xpt[3], SpiceBoolean * found) { dskx02_c(handle,dladsc,vertex,raydir,plid,xpt,found);}
extern DLLWRAPPER_API void DSKXSI_C(SpiceBoolean pri, ConstSpiceChar * target, SpiceInt nsurf, ConstSpiceInt srflst[], SpiceDouble et, ConstSpiceChar * fixref, ConstSpiceDouble vertex[3], ConstSpiceDouble raydir[3], SpiceInt maxd, SpiceInt maxi, SpiceDouble xpt[3], SpiceInt * handle, SpiceDLADescr * dladsc, SpiceDSKDescr * dskdsc, SpiceDouble dc[], SpiceInt ic[], SpiceBoolean * found) { dskxsi_c(pri,target,nsurf,srflst,et,fixref,vertex,raydir,maxd,maxi,xpt,handle,dladsc,dskdsc,dc,ic,found);}
extern DLLWRAPPER_API void DSKXV_C(SpiceBoolean pri, ConstSpiceChar * target, SpiceInt nsurf, ConstSpiceInt srflst[], SpiceDouble et, ConstSpiceChar * fixref, SpiceInt nrays, ConstSpiceDouble vtxarr[][3], ConstSpiceDouble dirarr[][3], SpiceDouble xptarr[][3], SpiceBoolean fndarr[]) { dskxv_c(pri,target,nsurf,srflst,et,fixref,nrays,vtxarr,dirarr,xptarr,fndarr);}
extern DLLWRAPPER_API void DSKZ02_C(SpiceInt handle, ConstSpiceDLADescr * dladsc, SpiceInt * nv, SpiceInt * np) { dskz02_c(handle,dladsc,nv,np);}
extern DLLWRAPPER_API void DSPHDR_C(SpiceDouble x, SpiceDouble y, SpiceDouble z, SpiceDouble jacobi[3][3]) { dsphdr_c(x,y,z,jacobi);}
extern DLLWRAPPER_API void DTPOOL_C(ConstSpiceChar * name, SpiceBoolean * found, SpiceInt * n, SpiceChar type[1]) { dtpool_c(name,found,n,type);}
extern DLLWRAPPER_API void DUCRSS_C(ConstSpiceDouble s1[6], ConstSpiceDouble s2[6], SpiceDouble sout[6]) { ducrss_c(s1,s2,sout);}
extern DLLWRAPPER_API void DVCRSS_C(ConstSpiceDouble s1[6], ConstSpiceDouble s2[6], SpiceDouble sout[6]) { dvcrss_c(s1,s2,sout);}
extern DLLWRAPPER_API SpiceDouble DVDOT_C(ConstSpiceDouble s1[6], ConstSpiceDouble s2[6]) {return dvdot_c(s1,s2);}
extern DLLWRAPPER_API void DVHAT_C(ConstSpiceDouble s1[6], SpiceDouble sout[6]) { dvhat_c(s1,sout);}
extern DLLWRAPPER_API SpiceDouble DVNORM_C(ConstSpiceDouble state[6]) {return dvnorm_c(state);}
extern DLLWRAPPER_API void DVPOOL_C(ConstSpiceChar * name) { dvpool_c(name);}
extern DLLWRAPPER_API SpiceDouble DVSEP_C(ConstSpiceDouble * s1, ConstSpiceDouble * s2) {return dvsep_c(s1,s2);}
extern DLLWRAPPER_API void EDLIMB_C(SpiceDouble a, SpiceDouble b, SpiceDouble c, ConstSpiceDouble viewpt[3], SpiceEllipse * limb) { edlimb_c(a,b,c,viewpt,limb);}
extern DLLWRAPPER_API void EDTERM_C(ConstSpiceChar * trmtyp, ConstSpiceChar * source, ConstSpiceChar * target, SpiceDouble et, ConstSpiceChar * fixfrm, ConstSpiceChar * abcorr, ConstSpiceChar * obsrvr, SpiceInt npts, SpiceDouble * trgepc, SpiceDouble obspos[3], SpiceDouble termpts[][3]) { edterm_c(trmtyp,source,target,et,fixfrm,abcorr,obsrvr,npts,trgepc,obspos,termpts);}
extern DLLWRAPPER_API void EKACEC_C(SpiceInt handle, SpiceInt segno, SpiceInt recno, ConstSpiceChar * column, SpiceInt nvals, SpiceInt vallen, const void * cvals, SpiceBoolean isnull) { ekacec_c(handle,segno,recno,column,nvals,vallen,cvals,isnull);}
extern DLLWRAPPER_API void EKACED_C(SpiceInt handle, SpiceInt segno, SpiceInt recno, ConstSpiceChar * column, SpiceInt nvals, ConstSpiceDouble * dvals, SpiceBoolean isnull) { ekaced_c(handle,segno,recno,column,nvals,dvals,isnull);}
extern DLLWRAPPER_API void EKACEI_C(SpiceInt handle, SpiceInt segno, SpiceInt recno, ConstSpiceChar * column, SpiceInt nvals, ConstSpiceInt * ivals, SpiceBoolean isnull) { ekacei_c(handle,segno,recno,column,nvals,ivals,isnull);}
extern DLLWRAPPER_API void EKACLC_C(SpiceInt handle, SpiceInt segno, ConstSpiceChar * column, SpiceInt vallen, const void * cvals, ConstSpiceInt * entszs, ConstSpiceBoolean * nlflgs, ConstSpiceInt * rcptrs, SpiceInt * wkindx) { ekaclc_c(handle,segno,column,vallen,cvals,entszs,nlflgs,rcptrs,wkindx);}
extern DLLWRAPPER_API void EKACLD_C(SpiceInt handle, SpiceInt segno, ConstSpiceChar * column, ConstSpiceDouble * dvals, ConstSpiceInt * entszs, ConstSpiceBoolean * nlflgs, ConstSpiceInt * rcptrs, SpiceInt * wkindx) { ekacld_c(handle,segno,column,dvals,entszs,nlflgs,rcptrs,wkindx);}
extern DLLWRAPPER_API void EKACLI_C(SpiceInt handle, SpiceInt segno, ConstSpiceChar * column, ConstSpiceInt * ivals, ConstSpiceInt * entszs, ConstSpiceBoolean * nlflgs, ConstSpiceInt * rcptrs, SpiceInt * wkindx) { ekacli_c(handle,segno,column,ivals,entszs,nlflgs,rcptrs,wkindx);}
extern DLLWRAPPER_API void EKAPPR_C(SpiceInt handle, SpiceInt segno, SpiceInt * recno) { ekappr_c(handle,segno,recno);}
extern DLLWRAPPER_API void EKBSEG_C(SpiceInt handle, ConstSpiceChar * tabnam, SpiceInt ncols, SpiceInt cnmlen, const void * cnames, SpiceInt declen, const void * decls, SpiceInt * segno) { ekbseg_c(handle,tabnam,ncols,cnmlen,cnames,declen,decls,segno);}
extern DLLWRAPPER_API void EKCCNT_C(ConstSpiceChar * table, SpiceInt * ccount) { ekccnt_c(table,ccount);}
extern DLLWRAPPER_API void EKCII_C(ConstSpiceChar * table, SpiceInt cindex, SpiceInt lenout, SpiceChar * column, SpiceEKAttDsc * attdsc) { ekcii_c(table,cindex,lenout,column,attdsc);}
extern DLLWRAPPER_API void EKCLS_C(SpiceInt handle) { ekcls_c(handle);}
extern DLLWRAPPER_API void EKDELR_C(SpiceInt handle, SpiceInt segno, SpiceInt recno) { ekdelr_c(handle,segno,recno);}
extern DLLWRAPPER_API void EKFFLD_C(SpiceInt handle, SpiceInt segno, SpiceInt * rcptrs) { ekffld_c(handle,segno,rcptrs);}
extern DLLWRAPPER_API void EKFIND_C(ConstSpiceChar * query, SpiceInt lenout, SpiceInt * nmrows, SpiceBoolean * error, SpiceChar * errmsg) { ekfind_c(query,lenout,nmrows,error,errmsg);}
extern DLLWRAPPER_API void EKGC_C(SpiceInt selidx, SpiceInt row, SpiceInt elment, SpiceInt lenout, SpiceChar * cdata, SpiceBoolean * null, SpiceBoolean * found) { ekgc_c(selidx,row,elment,lenout,cdata,null,found);}
extern DLLWRAPPER_API void EKGD_C(SpiceInt selidx, SpiceInt row, SpiceInt elment, SpiceDouble * ddata, SpiceBoolean * null, SpiceBoolean * found) { ekgd_c(selidx,row,elment,ddata,null,found);}
extern DLLWRAPPER_API void EKGI_C(SpiceInt selidx, SpiceInt row, SpiceInt elment, SpiceInt * idata, SpiceBoolean * null, SpiceBoolean * found) { ekgi_c(selidx,row,elment,idata,null,found);}
extern DLLWRAPPER_API void EKIFLD_C(SpiceInt handle, ConstSpiceChar * tabnam, SpiceInt ncols, SpiceInt nrows, SpiceInt cnmlen, const void * cnames, SpiceInt declen, const void * decls, SpiceInt * segno, SpiceInt * rcptrs) { ekifld_c(handle,tabnam,ncols,nrows,cnmlen,cnames,declen,decls,segno,rcptrs);}
extern DLLWRAPPER_API void EKINSR_C(SpiceInt handle, SpiceInt segno, SpiceInt recno) { ekinsr_c(handle,segno,recno);}
extern DLLWRAPPER_API void EKLEF_C(ConstSpiceChar * fname, SpiceInt * handle) { eklef_c(fname,handle);}
extern DLLWRAPPER_API SpiceInt EKNELT_C(SpiceInt selidx, SpiceInt row) {return eknelt_c(selidx,row);}
extern DLLWRAPPER_API SpiceInt EKNSEG_C(SpiceInt handle) {return eknseg_c(handle);}
extern DLLWRAPPER_API void EKNTAB_C(SpiceInt * n) { ekntab_c(n);}
extern DLLWRAPPER_API void EKOPN_C(ConstSpiceChar * fname, ConstSpiceChar * ifname, SpiceInt ncomch, SpiceInt * handle) { ekopn_c(fname,ifname,ncomch,handle);}
extern DLLWRAPPER_API void EKOPR_C(ConstSpiceChar * fname, SpiceInt * handle) { ekopr_c(fname,handle);}
extern DLLWRAPPER_API void EKOPS_C(SpiceInt * handle) { ekops_c(handle);}
extern DLLWRAPPER_API void EKOPW_C(ConstSpiceChar * fname, SpiceInt * handle) { ekopw_c(fname,handle);}
extern DLLWRAPPER_API void EKPSEL_C(ConstSpiceChar * query, SpiceInt msglen, SpiceInt tablen, SpiceInt collen, SpiceInt * n, SpiceInt * xbegs, SpiceInt * xends, SpiceEKDataType * xtypes, SpiceEKExprClass * xclass, void * tabs, void * cols, SpiceBoolean * error, SpiceChar * errmsg) { ekpsel_c(query,msglen,tablen,collen,n,xbegs,xends,xtypes,xclass,tabs,cols,error,errmsg);}
extern DLLWRAPPER_API void EKRCEC_C(SpiceInt handle, SpiceInt segno, SpiceInt recno, ConstSpiceChar * column, SpiceInt lenout, SpiceInt * nvals, void * cvals, SpiceBoolean * isnull) { ekrcec_c(handle,segno,recno,column,lenout,nvals,cvals,isnull);}
extern DLLWRAPPER_API void EKRCED_C(SpiceInt handle, SpiceInt segno, SpiceInt recno, ConstSpiceChar * column, SpiceInt * nvals, SpiceDouble * dvals, SpiceBoolean * isnull) { ekrced_c(handle,segno,recno,column,nvals,dvals,isnull);}
extern DLLWRAPPER_API void EKRCEI_C(SpiceInt handle, SpiceInt segno, SpiceInt recno, ConstSpiceChar * column, SpiceInt * nvals, SpiceInt * ivals, SpiceBoolean * isnull) { ekrcei_c(handle,segno,recno,column,nvals,ivals,isnull);}
extern DLLWRAPPER_API void EKSSUM_C(SpiceInt handle, SpiceInt segno, SpiceEKSegSum * segsum) { ekssum_c(handle,segno,segsum);}
extern DLLWRAPPER_API void EKTNAM_C(SpiceInt n, SpiceInt lenout, SpiceChar * table) { ektnam_c(n,lenout,table);}
extern DLLWRAPPER_API void EKUCEC_C(SpiceInt handle, SpiceInt segno, SpiceInt recno, ConstSpiceChar * column, SpiceInt nvals, SpiceInt vallen, const void * cvals, SpiceBoolean isnull) { ekucec_c(handle,segno,recno,column,nvals,vallen,cvals,isnull);}
extern DLLWRAPPER_API void EKUCED_C(SpiceInt handle, SpiceInt segno, SpiceInt recno, ConstSpiceChar * column, SpiceInt nvals, ConstSpiceDouble * dvals, SpiceBoolean isnull) { ekuced_c(handle,segno,recno,column,nvals,dvals,isnull);}
extern DLLWRAPPER_API void EKUCEI_C(SpiceInt handle, SpiceInt segno, SpiceInt recno, ConstSpiceChar * column, SpiceInt nvals, ConstSpiceInt * ivals, SpiceBoolean isnull) { ekucei_c(handle,segno,recno,column,nvals,ivals,isnull);}
extern DLLWRAPPER_API void EKUEF_C(SpiceInt handle) { ekuef_c(handle);}
extern DLLWRAPPER_API void EL2CGV_C(ConstSpiceEllipse * ellipse, SpiceDouble center[3], SpiceDouble smajor[3], SpiceDouble sminor[3]) { el2cgv_c(ellipse,center,smajor,sminor);}
extern DLLWRAPPER_API SpiceBoolean ELEMC_C(ConstSpiceChar * item, SpiceCell * set) {return elemc_c(item,set);}
extern DLLWRAPPER_API SpiceBoolean ELEMD_C(SpiceDouble item, SpiceCell * set) {return elemd_c(item,set);}
extern DLLWRAPPER_API SpiceBoolean ELEMI_C(SpiceInt item, SpiceCell * set) {return elemi_c(item,set);}
extern DLLWRAPPER_API void EQNCPV_C(SpiceDouble et, SpiceDouble epoch, ConstSpiceDouble eqel[9], SpiceDouble rapol, SpiceDouble decpol, SpiceDouble state[6]) { eqncpv_c(et,epoch,eqel,rapol,decpol,state);}
extern DLLWRAPPER_API SpiceBoolean EQSTR_C(ConstSpiceChar * a, ConstSpiceChar * b) {return eqstr_c(a,b);}
extern DLLWRAPPER_API void ERRACT_C(ConstSpiceChar * operation, SpiceInt lenout, SpiceChar * action) { erract_c(operation,lenout,action);}
extern DLLWRAPPER_API void ERRCH_C(ConstSpiceChar * marker, ConstSpiceChar * string) { errch_c(marker,string);}
extern DLLWRAPPER_API void ERRDEV_C(ConstSpiceChar * operation, SpiceInt lenout, SpiceChar * device) { errdev_c(operation,lenout,device);}
extern DLLWRAPPER_API void ERRDP_C(ConstSpiceChar * marker, SpiceDouble number) { errdp_c(marker,number);}
extern DLLWRAPPER_API void ERRINT_C(ConstSpiceChar * marker, SpiceInt number) { errint_c(marker,number);}
extern DLLWRAPPER_API void ERRPRT_C(ConstSpiceChar * operation, SpiceInt lenout, SpiceChar * list) { errprt_c(operation,lenout,list);}
extern DLLWRAPPER_API SpiceInt ESRCHC_C(ConstSpiceChar * value, SpiceInt ndim, SpiceInt lenvals, const void * array) {return esrchc_c(value,ndim,lenvals,array);}
extern DLLWRAPPER_API void ET2LST_C(SpiceDouble et, SpiceInt body, SpiceDouble lon, ConstSpiceChar * type, SpiceInt timlen, SpiceInt ampmlen, SpiceInt * hr, SpiceInt * mn, SpiceInt * sc, SpiceChar * time, SpiceChar * ampm) { et2lst_c(et,body,lon,type,timlen,ampmlen,hr,mn,sc,time,ampm);}
extern DLLWRAPPER_API void ET2UTC_C(SpiceDouble et, ConstSpiceChar * format, SpiceInt prec, SpiceInt lenout, SpiceChar * utcstr) { et2utc_c(et,format,prec,lenout,utcstr);}
extern DLLWRAPPER_API void ETCAL_C(SpiceDouble et, SpiceInt lenout, SpiceChar * string) { etcal_c(et,lenout,string);}
extern DLLWRAPPER_API void EUL2M_C(SpiceDouble angle3, SpiceDouble angle2, SpiceDouble angle1, SpiceInt axis3, SpiceInt axis2, SpiceInt axis1, SpiceDouble r[3][3]) { eul2m_c(angle3,angle2,angle1,axis3,axis2,axis1,r);}
extern DLLWRAPPER_API void EUL2XF_C(ConstSpiceDouble eulang[6], SpiceInt axisa, SpiceInt axisb, SpiceInt axisc, SpiceDouble xform[6][6]) { eul2xf_c(eulang,axisa,axisb,axisc,xform);}
extern DLLWRAPPER_API SpiceBoolean EXISTS_C(ConstSpiceChar * name) {return exists_c(name);}
extern DLLWRAPPER_API void EXPOOL_C(ConstSpiceChar * name, SpiceBoolean * found) { expool_c(name,found);}
extern DLLWRAPPER_API SpiceBoolean FAILED_C() {return failed_c();}
extern DLLWRAPPER_API void FOVRAY_C(ConstSpiceChar * inst, ConstSpiceDouble raydir[3], ConstSpiceChar * rframe, ConstSpiceChar * abcorr, ConstSpiceChar * obsrvr, SpiceDouble * et, SpiceBoolean * visible) { fovray_c(inst,raydir,rframe,abcorr,obsrvr,et,visible);}
extern DLLWRAPPER_API void FOVTRG_C(ConstSpiceChar * inst, ConstSpiceChar * target, ConstSpiceChar * tshape, ConstSpiceChar * tframe, ConstSpiceChar * abcorr, ConstSpiceChar * obsrvr, SpiceDouble * et, SpiceBoolean * visible) { fovtrg_c(inst,target,tshape,tframe,abcorr,obsrvr,et,visible);}
extern DLLWRAPPER_API void FRAME_C(SpiceDouble x[3], SpiceDouble y[3], SpiceDouble z[3]) { frame_c(x,y,z);}
extern DLLWRAPPER_API void FRINFO_C(SpiceInt frcode, SpiceInt * cent, SpiceInt * clss, SpiceInt * clssid, SpiceBoolean * found) { frinfo_c(frcode,cent,clss,clssid,found);}
extern DLLWRAPPER_API void FRMNAM_C(SpiceInt frcode, SpiceInt lenout, SpiceChar * frname) { frmnam_c(frcode,lenout,frname);}
extern DLLWRAPPER_API void FTNCLS_C(SpiceInt unit) { ftncls_c(unit);}
extern DLLWRAPPER_API void FURNSH_C(ConstSpiceChar * file) { furnsh_c(file);}
extern DLLWRAPPER_API void GCPOOL_C(ConstSpiceChar * name, SpiceInt start, SpiceInt room, SpiceInt lenout, SpiceInt * n, void * cvals, SpiceBoolean * found) { gcpool_c(name,start,room,lenout,n,cvals,found);}
extern DLLWRAPPER_API void GDPOOL_C(ConstSpiceChar * name, SpiceInt start, SpiceInt room, SpiceInt * n, SpiceDouble * values, SpiceBoolean * found) { gdpool_c(name,start,room,n,values,found);}
extern DLLWRAPPER_API void GEOREC_C(SpiceDouble lon, SpiceDouble lat, SpiceDouble alt, SpiceDouble re, SpiceDouble f, SpiceDouble rectan[3]) { georec_c(lon,lat,alt,re,f,rectan);}
extern DLLWRAPPER_API void GETCML_C(SpiceInt * argc, SpiceChar *** argv) { getcml_c(argc,argv);}
extern DLLWRAPPER_API void GETELM_C(SpiceInt frstyr, SpiceInt lineln, const void * lines, SpiceDouble * epoch, SpiceDouble * elems) { getelm_c(frstyr,lineln,lines,epoch,elems);}
extern DLLWRAPPER_API void GETFAT_C(ConstSpiceChar * file, SpiceInt arclen, SpiceInt typlen, SpiceChar * arch, SpiceChar * type) { getfat_c(file,arclen,typlen,arch,type);}
extern DLLWRAPPER_API void GETFOV_C(SpiceInt instid, SpiceInt room, SpiceInt shapelen, SpiceInt framelen, SpiceChar * shape, SpiceChar * frame, SpiceDouble bsight[3], SpiceInt * n, SpiceDouble bounds[][3]) { getfov_c(instid,room,shapelen,framelen,shape,frame,bsight,n,bounds);}
extern DLLWRAPPER_API void GETMSG_C(ConstSpiceChar * option, SpiceInt lenout, SpiceChar * msg) { getmsg_c(option,lenout,msg);}
extern DLLWRAPPER_API SpiceBoolean GFBAIL_C() {return gfbail_c();}
extern DLLWRAPPER_API void GFCLRH_C() { gfclrh_c();}
extern DLLWRAPPER_API void GFDIST_C(ConstSpiceChar * target, ConstSpiceChar * abcorr, ConstSpiceChar * obsrvr, ConstSpiceChar * relate, SpiceDouble refval, SpiceDouble adjust, SpiceDouble step, SpiceInt nintvls, SpiceCell * cnfine, SpiceCell * result) { gfdist_c(target,abcorr,obsrvr,relate,refval,adjust,step,nintvls,cnfine,result);}
extern DLLWRAPPER_API void GFILUM_C(ConstSpiceChar * method, ConstSpiceChar * angtyp, ConstSpiceChar * target, ConstSpiceChar * illum, ConstSpiceChar * fixref, ConstSpiceChar * abcorr, ConstSpiceChar * obsrvr, ConstSpiceDouble spoint[3], ConstSpiceChar * relate, SpiceDouble refval, SpiceDouble adjust, SpiceDouble step, SpiceInt nintvls, SpiceCell * cnfine, SpiceCell * result) { gfilum_c(method,angtyp,target,illum,fixref,abcorr,obsrvr,spoint,relate,refval,adjust,step,nintvls,cnfine,result);}
extern DLLWRAPPER_API void GFINTH_C(int sigcode) { gfinth_c(sigcode);}
extern DLLWRAPPER_API void GFOCLT_C(ConstSpiceChar * occtyp, ConstSpiceChar * front, ConstSpiceChar * fshape, ConstSpiceChar * fframe, ConstSpiceChar * back, ConstSpiceChar * bshape, ConstSpiceChar * bframe, ConstSpiceChar * obsrvr, ConstSpiceChar * abcorr, SpiceDouble step, SpiceCell * cnfine, SpiceCell * result) { gfoclt_c(occtyp,front,fshape,fframe,back,bshape,bframe,obsrvr,abcorr,step,cnfine,result);}
extern DLLWRAPPER_API void GFPA_C(ConstSpiceChar * target, ConstSpiceChar * illum, ConstSpiceChar * abcorr, ConstSpiceChar * obsrvr, ConstSpiceChar * relate, SpiceDouble refval, SpiceDouble adjust, SpiceDouble step, SpiceInt nintvls, SpiceCell * cnfine, SpiceCell * result) { gfpa_c(target,illum,abcorr,obsrvr,relate,refval,adjust,step,nintvls,cnfine,result);}
extern DLLWRAPPER_API void GFPOSC_C(ConstSpiceChar * target, ConstSpiceChar * frame, ConstSpiceChar * abcorr, ConstSpiceChar * obsrvr, ConstSpiceChar * crdsys, ConstSpiceChar * coord, ConstSpiceChar * relate, SpiceDouble refval, SpiceDouble adjust, SpiceDouble step, SpiceInt nintvls, SpiceCell * cnfine, SpiceCell * result) { gfposc_c(target,frame,abcorr,obsrvr,crdsys,coord,relate,refval,adjust,step,nintvls,cnfine,result);}
extern DLLWRAPPER_API void GFREFN_C(SpiceDouble t1, SpiceDouble t2, SpiceBoolean s1, SpiceBoolean s2, SpiceDouble * t) { gfrefn_c(t1,t2,s1,s2,t);}
extern DLLWRAPPER_API void GFREPF_C() { gfrepf_c();}
extern DLLWRAPPER_API void GFREPI_C(SpiceCell * window, ConstSpiceChar * begmss, ConstSpiceChar * endmss) { gfrepi_c(window,begmss,endmss);}
extern DLLWRAPPER_API void GFREPU_C(SpiceDouble ivbeg, SpiceDouble ivend, SpiceDouble time) { gfrepu_c(ivbeg,ivend,time);}
extern DLLWRAPPER_API void GFRFOV_C(ConstSpiceChar * inst, ConstSpiceDouble raydir[3], ConstSpiceChar * rframe, ConstSpiceChar * abcorr, ConstSpiceChar * obsrvr, SpiceDouble step, SpiceCell * cnfine, SpiceCell * result) { gfrfov_c(inst,raydir,rframe,abcorr,obsrvr,step,cnfine,result);}
extern DLLWRAPPER_API void GFRR_C(ConstSpiceChar * target, ConstSpiceChar * abcorr, ConstSpiceChar * obsrvr, ConstSpiceChar * relate, SpiceDouble refval, SpiceDouble adjust, SpiceDouble step, SpiceInt nintvls, SpiceCell * cnfine, SpiceCell * result) { gfrr_c(target,abcorr,obsrvr,relate,refval,adjust,step,nintvls,cnfine,result);}
extern DLLWRAPPER_API void GFSEP_C(ConstSpiceChar * targ1, ConstSpiceChar * shape1, ConstSpiceChar * frame1, ConstSpiceChar * targ2, ConstSpiceChar * shape2, ConstSpiceChar * frame2, ConstSpiceChar * abcorr, ConstSpiceChar * obsrvr, ConstSpiceChar * relate, SpiceDouble refval, SpiceDouble adjust, SpiceDouble step, SpiceInt nintvls, SpiceCell * cnfine, SpiceCell * result) { gfsep_c(targ1,shape1,frame1,targ2,shape2,frame2,abcorr,obsrvr,relate,refval,adjust,step,nintvls,cnfine,result);}
extern DLLWRAPPER_API void GFSNTC_C(ConstSpiceChar * target, ConstSpiceChar * fixref, ConstSpiceChar * method, ConstSpiceChar * abcorr, ConstSpiceChar * obsrvr, ConstSpiceChar * dref, ConstSpiceDouble dvec[3], ConstSpiceChar * crdsys, ConstSpiceChar * coord, ConstSpiceChar * relate, SpiceDouble refval, SpiceDouble adjust, SpiceDouble step, SpiceInt nintvls, SpiceCell * cnfine, SpiceCell * result) { gfsntc_c(target,fixref,method,abcorr,obsrvr,dref,dvec,crdsys,coord,relate,refval,adjust,step,nintvls,cnfine,result);}
extern DLLWRAPPER_API void GFSSTP_C(SpiceDouble step) { gfsstp_c(step);}
extern DLLWRAPPER_API void GFSTEP_C(SpiceDouble time, SpiceDouble * step) { gfstep_c(time,step);}
extern DLLWRAPPER_API void GFSTOL_C(SpiceDouble value) { gfstol_c(value);}
extern DLLWRAPPER_API void GFSUBC_C(ConstSpiceChar * target, ConstSpiceChar * fixref, ConstSpiceChar * method, ConstSpiceChar * abcorr, ConstSpiceChar * obsrvr, ConstSpiceChar * crdsys, ConstSpiceChar * coord, ConstSpiceChar * relate, SpiceDouble refval, SpiceDouble adjust, SpiceDouble step, SpiceInt nintvls, SpiceCell * cnfine, SpiceCell * result) { gfsubc_c(target,fixref,method,abcorr,obsrvr,crdsys,coord,relate,refval,adjust,step,nintvls,cnfine,result);}
extern DLLWRAPPER_API void GFTFOV_C(ConstSpiceChar * inst, ConstSpiceChar * target, ConstSpiceChar * tshape, ConstSpiceChar * tframe, ConstSpiceChar * abcorr, ConstSpiceChar * obsrvr, SpiceDouble step, SpiceCell * cnfine, SpiceCell * result) { gftfov_c(inst,target,tshape,tframe,abcorr,obsrvr,step,cnfine,result);}
extern DLLWRAPPER_API void GIPOOL_C(ConstSpiceChar * name, SpiceInt start, SpiceInt room, SpiceInt * n, SpiceInt * ivals, SpiceBoolean * found) { gipool_c(name,start,room,n,ivals,found);}
extern DLLWRAPPER_API void GNPOOL_C(ConstSpiceChar * name, SpiceInt start, SpiceInt room, SpiceInt lenout, SpiceInt * n, void * kvars, SpiceBoolean * found) { gnpool_c(name,start,room,lenout,n,kvars,found);}
extern DLLWRAPPER_API SpiceDouble HALFPI_C() {return halfpi_c();}
extern DLLWRAPPER_API void HRMINT_C(SpiceInt n, ConstSpiceDouble * xvals, ConstSpiceDouble * yvals, SpiceDouble x, SpiceDouble * work, SpiceDouble * f, SpiceDouble * df) { hrmint_c(n,xvals,yvals,x,work,f,df);}
extern DLLWRAPPER_API void HX2DP_C(ConstSpiceChar * string, SpiceInt lenout, SpiceDouble * number, SpiceBoolean * error, SpiceChar * errmsg) { hx2dp_c(string,lenout,number,error,errmsg);}
extern DLLWRAPPER_API void IDENT_C(SpiceDouble matrix[3][3]) { ident_c(matrix);}
extern DLLWRAPPER_API void ILLUM_C(ConstSpiceChar * target, SpiceDouble et, ConstSpiceChar * abcorr, ConstSpiceChar * obsrvr, ConstSpiceDouble spoint[3], SpiceDouble * phase, SpiceDouble * solar, SpiceDouble * emissn) { illum_c(target,et,abcorr,obsrvr,spoint,phase,solar,emissn);}
extern DLLWRAPPER_API void ILLUM_PL02(SpiceInt handle, ConstSpiceDLADescr * dladsc, ConstSpiceChar * target, SpiceDouble et, ConstSpiceChar * abcorr, ConstSpiceChar * obsrvr, SpiceDouble spoint[3], SpiceDouble * phase, SpiceDouble * solar, SpiceDouble * emissn) { illum_pl02(handle,dladsc,target,et,abcorr,obsrvr,spoint,phase,solar,emissn);}
extern DLLWRAPPER_API void ILLUM_PLID_PL02(SpiceInt handle, ConstSpiceDLADescr * dladsc, ConstSpiceChar * target, SpiceDouble et, ConstSpiceChar * abcorr, ConstSpiceChar * obsrvr, SpiceDouble spoint[3], SpiceInt plid, SpiceDouble * trgepc, SpiceDouble srfvec[3], SpiceDouble * phase, SpiceDouble * solar, SpiceDouble * emissn, SpiceBoolean * visible, SpiceBoolean * lit) { illum_plid_pl02(handle,dladsc,target,et,abcorr,obsrvr,spoint,plid,trgepc,srfvec,phase,solar,emissn,visible,lit);}
extern DLLWRAPPER_API void ILLUMF_C(ConstSpiceChar * method, ConstSpiceChar * target, ConstSpiceChar * ilusrc, SpiceDouble et, ConstSpiceChar * fixref, ConstSpiceChar * abcorr, ConstSpiceChar * obsrvr, ConstSpiceDouble spoint[3], SpiceDouble * trgepc, SpiceDouble srfvec[3], SpiceDouble * phase, SpiceDouble * incdnc, SpiceDouble * emissn, SpiceBoolean * visibl, SpiceBoolean * lit) { illumf_c(method,target,ilusrc,et,fixref,abcorr,obsrvr,spoint,trgepc,srfvec,phase,incdnc,emissn,visibl,lit);}
extern DLLWRAPPER_API void ILLUMG_C(ConstSpiceChar * method, ConstSpiceChar * target, ConstSpiceChar * illum, SpiceDouble et, ConstSpiceChar * fixref, ConstSpiceChar * abcorr, ConstSpiceChar * obsrvr, ConstSpiceDouble spoint[3], SpiceDouble * trgepc, SpiceDouble srfvec[3], SpiceDouble * phase, SpiceDouble * solar, SpiceDouble * emissn) { illumg_c(method,target,illum,et,fixref,abcorr,obsrvr,spoint,trgepc,srfvec,phase,solar,emissn);}
extern DLLWRAPPER_API void ILUMIN_C(ConstSpiceChar * method, ConstSpiceChar * target, SpiceDouble et, ConstSpiceChar * fixref, ConstSpiceChar * abcorr, ConstSpiceChar * obsrvr, ConstSpiceDouble spoint[3], SpiceDouble * trgepc, SpiceDouble srfvec[3], SpiceDouble * phase, SpiceDouble * solar, SpiceDouble * emissn) { ilumin_c(method,target,et,fixref,abcorr,obsrvr,spoint,trgepc,srfvec,phase,solar,emissn);}
extern DLLWRAPPER_API void INEDPL_C(SpiceDouble a, SpiceDouble b, SpiceDouble c, ConstSpicePlane * plane, SpiceEllipse * ellipse, SpiceBoolean * found) { inedpl_c(a,b,c,plane,ellipse,found);}
extern DLLWRAPPER_API void INELPL_C(ConstSpiceEllipse * ellips, ConstSpicePlane * plane, SpiceInt * nxpts, SpiceDouble xpt1[3], SpiceDouble xpt2[3]) { inelpl_c(ellips,plane,nxpts,xpt1,xpt2);}
extern DLLWRAPPER_API void INRYPL_C(ConstSpiceDouble vertex[3], ConstSpiceDouble dir[3], ConstSpicePlane * plane, SpiceInt * nxpts, SpiceDouble xpt[3]) { inrypl_c(vertex,dir,plane,nxpts,xpt);}
extern DLLWRAPPER_API void INSRTC_C(ConstSpiceChar * item, SpiceCell * set) { insrtc_c(item,set);}
extern DLLWRAPPER_API void INSRTD_C(SpiceDouble item, SpiceCell * set) { insrtd_c(item,set);}
extern DLLWRAPPER_API void INSRTI_C(SpiceInt item, SpiceCell * set) { insrti_c(item,set);}
extern DLLWRAPPER_API void INTER_C(SpiceCell * a, SpiceCell * b, SpiceCell * c) { inter_c(a,b,c);}
extern DLLWRAPPER_API SpiceInt INTMAX_() {return intmax_();}
extern DLLWRAPPER_API SpiceInt INTMAX_C() {return intmax_c();}
extern DLLWRAPPER_API SpiceInt INTMIN_() {return intmin_();}
extern DLLWRAPPER_API SpiceInt INTMIN_C() {return intmin_c();}
extern DLLWRAPPER_API void INVERT_C(ConstSpiceDouble m1[3][3], SpiceDouble m2[3][3]) { invert_c(m1,m2);}
extern DLLWRAPPER_API void INVORT_C(ConstSpiceDouble m[3][3], SpiceDouble mit[3][3]) { invort_c(m,mit);}
extern DLLWRAPPER_API SpiceBoolean ISORDV_C(ConstSpiceInt * array, SpiceInt n) {return isordv_c(array,n);}
extern DLLWRAPPER_API SpiceInt ISRCHC_C(ConstSpiceChar * value, SpiceInt ndim, SpiceInt lenvals, const void * array) {return isrchc_c(value,ndim,lenvals,array);}
extern DLLWRAPPER_API SpiceInt ISRCHD_C(SpiceDouble value, SpiceInt ndim, ConstSpiceDouble * array) {return isrchd_c(value,ndim,array);}
extern DLLWRAPPER_API SpiceInt ISRCHI_C(SpiceInt value, SpiceInt ndim, ConstSpiceInt * array) {return isrchi_c(value,ndim,array);}
extern DLLWRAPPER_API SpiceBoolean ISROT_C(ConstSpiceDouble m[3][3], SpiceDouble ntol, SpiceDouble dtol) {return isrot_c(m,ntol,dtol);}
extern DLLWRAPPER_API SpiceBoolean ISWHSP_C(ConstSpiceChar * string) {return iswhsp_c(string);}
extern DLLWRAPPER_API SpiceDouble J1900_C() {return j1900_c();}
extern DLLWRAPPER_API SpiceDouble J1950_C() {return j1950_c();}
extern DLLWRAPPER_API SpiceDouble J2000_C() {return j2000_c();}
extern DLLWRAPPER_API SpiceDouble J2100_C() {return j2100_c();}
extern DLLWRAPPER_API SpiceDouble JYEAR_C() {return jyear_c();}
extern DLLWRAPPER_API void KCLEAR_C() { kclear_c();}
extern DLLWRAPPER_API void KDATA_C(SpiceInt which, ConstSpiceChar * kind, SpiceInt fillen, SpiceInt typlen, SpiceInt srclen, SpiceChar * file, SpiceChar * filtyp, SpiceChar * source, SpiceInt * handle, SpiceBoolean * found) { kdata_c(which,kind,fillen,typlen,srclen,file,filtyp,source,handle,found);}
extern DLLWRAPPER_API void KINFO_C(ConstSpiceChar * file, SpiceInt typlen, SpiceInt srclen, SpiceChar * filtyp, SpiceChar * source, SpiceInt * handle, SpiceBoolean * found) { kinfo_c(file,typlen,srclen,filtyp,source,handle,found);}
extern DLLWRAPPER_API void KPLFRM_C(SpiceInt frmcls, SpiceCell * idset) { kplfrm_c(frmcls,idset);}
extern DLLWRAPPER_API void KTOTAL_C(ConstSpiceChar * kind, SpiceInt * count) { ktotal_c(kind,count);}
extern DLLWRAPPER_API void KXTRCT_C(ConstSpiceChar * keywd, SpiceInt termlen, const void * terms, SpiceInt nterms, SpiceInt stringlen, SpiceInt substrlen, SpiceChar * string, SpiceBoolean * found, SpiceChar * substr) { kxtrct_c(keywd,termlen,terms,nterms,stringlen,substrlen,string,found,substr);}
extern DLLWRAPPER_API SpiceInt LASTNB_C(ConstSpiceChar * string) {return lastnb_c(string);}
extern DLLWRAPPER_API void LATCYL_C(SpiceDouble radius, SpiceDouble lon, SpiceDouble lat, SpiceDouble * r, SpiceDouble * lonc, SpiceDouble * z) { latcyl_c(radius,lon,lat,r,lonc,z);}
extern DLLWRAPPER_API void LATREC_C(SpiceDouble radius, SpiceDouble longitude, SpiceDouble latitude, SpiceDouble rectan[3]) { latrec_c(radius,longitude,latitude,rectan);}
extern DLLWRAPPER_API void LATSPH_C(SpiceDouble radius, SpiceDouble lon, SpiceDouble lat, SpiceDouble * rho, SpiceDouble * colat, SpiceDouble * lons) { latsph_c(radius,lon,lat,rho,colat,lons);}
extern DLLWRAPPER_API void LATSRF_C(ConstSpiceChar * method, ConstSpiceChar * target, SpiceDouble et, ConstSpiceChar * fixref, SpiceInt npts, ConstSpiceDouble lonlat[][2], SpiceDouble srfpts[][3]) { latsrf_c(method,target,et,fixref,npts,lonlat,srfpts);}
extern DLLWRAPPER_API void LCASE_C(SpiceChar * in, SpiceInt lenout, SpiceChar * out) { lcase_c(in,lenout,out);}
extern DLLWRAPPER_API void LDPOOL_C(ConstSpiceChar * filename) { ldpool_c(filename);}
extern DLLWRAPPER_API void LGRIND_C(SpiceInt n, ConstSpiceDouble * xvals, ConstSpiceDouble * yvals, SpiceDouble * work, SpiceDouble x, SpiceDouble * p, SpiceDouble * dp) { lgrind_c(n,xvals,yvals,work,x,p,dp);}
extern DLLWRAPPER_API void LIMB_PL02(SpiceInt handle, ConstSpiceDLADescr * dladsc, ConstSpiceChar * target, SpiceDouble et, ConstSpiceChar * fixref, ConstSpiceChar * abcorr, ConstSpiceChar * obsrvr, SpiceInt npoints, SpiceDouble * trgepc, SpiceDouble obspos[3], SpiceDouble limbpts[][3], SpiceInt plateIDs[]) { limb_pl02(handle,dladsc,target,et,fixref,abcorr,obsrvr,npoints,trgepc,obspos,limbpts,plateIDs);}
extern DLLWRAPPER_API void LIMBPT_C(ConstSpiceChar * method, ConstSpiceChar * target, SpiceDouble et, ConstSpiceChar * fixref, ConstSpiceChar * abcorr, ConstSpiceChar * corloc, ConstSpiceChar * obsrvr, ConstSpiceDouble refvec[3], SpiceDouble rolstp, SpiceInt ncuts, SpiceDouble schstp, SpiceDouble soltol, SpiceInt maxn, SpiceInt npts[], SpiceDouble points[][3], SpiceDouble epochs[], SpiceDouble tangts[][3]) { limbpt_c(method,target,et,fixref,abcorr,corloc,obsrvr,refvec,rolstp,ncuts,schstp,soltol,maxn,npts,points,epochs,tangts);}
extern DLLWRAPPER_API void LLGRID_PL02(SpiceInt handle, ConstSpiceDLADescr * dladsc, SpiceInt npoints, ConstSpiceDouble grid[][2], SpiceDouble spoints[][3], SpiceInt plateIDs[]) { llgrid_pl02(handle,dladsc,npoints,grid,spoints,plateIDs);}
extern DLLWRAPPER_API void LMPOOL_C(const void * cvals, SpiceInt lenvals, SpiceInt n) { lmpool_c(cvals,lenvals,n);}
extern DLLWRAPPER_API void LPARSE_C(ConstSpiceChar * list, ConstSpiceChar * delim, SpiceInt nmax, SpiceInt lenout, SpiceInt * n, void * items) { lparse_c(list,delim,nmax,lenout,n,items);}
extern DLLWRAPPER_API void LPARSM_C(ConstSpiceChar * list, ConstSpiceChar * delims, SpiceInt nmax, SpiceInt lenout, SpiceInt * n, void * items) { lparsm_c(list,delims,nmax,lenout,n,items);}
extern DLLWRAPPER_API void LPARSS_C(ConstSpiceChar * list, ConstSpiceChar * delims, SpiceCell * set) { lparss_c(list,delims,set);}
extern DLLWRAPPER_API SpiceDouble LSPCN_C(ConstSpiceChar * body, SpiceDouble et, ConstSpiceChar * abcorr) {return lspcn_c(body,et,abcorr);}
extern DLLWRAPPER_API SpiceInt LSTLEC_C(ConstSpiceChar * string, SpiceInt n, SpiceInt lenvals, const void * array) {return lstlec_c(string,n,lenvals,array);}
extern DLLWRAPPER_API SpiceInt LSTLED_C(SpiceDouble x, SpiceInt n, ConstSpiceDouble * array) {return lstled_c(x,n,array);}
extern DLLWRAPPER_API SpiceInt LSTLEI_C(SpiceInt x, SpiceInt n, ConstSpiceInt * array) {return lstlei_c(x,n,array);}
extern DLLWRAPPER_API SpiceInt LSTLTC_C(ConstSpiceChar * string, SpiceInt n, SpiceInt lenvals, const void * array) {return lstltc_c(string,n,lenvals,array);}
extern DLLWRAPPER_API SpiceInt LSTLTD_C(SpiceDouble x, SpiceInt n, ConstSpiceDouble * array) {return lstltd_c(x,n,array);}
extern DLLWRAPPER_API SpiceInt LSTLTI_C(SpiceInt x, SpiceInt n, ConstSpiceInt * array) {return lstlti_c(x,n,array);}
extern DLLWRAPPER_API void LTIME_C(SpiceDouble etobs, SpiceInt obs, ConstSpiceChar * dir, SpiceInt targ, SpiceDouble * ettarg, SpiceDouble * elapsd) { ltime_c(etobs,obs,dir,targ,ettarg,elapsd);}
extern DLLWRAPPER_API void LX4DEC_C(ConstSpiceChar * string, SpiceInt first, SpiceInt * last, SpiceInt * nchar) { lx4dec_c(string,first,last,nchar);}
extern DLLWRAPPER_API void LX4NUM_C(ConstSpiceChar * string, SpiceInt first, SpiceInt * last, SpiceInt * nchar) { lx4num_c(string,first,last,nchar);}
extern DLLWRAPPER_API void LX4SGN_C(ConstSpiceChar * string, SpiceInt first, SpiceInt * last, SpiceInt * nchar) { lx4sgn_c(string,first,last,nchar);}
extern DLLWRAPPER_API void LX4UNS_C(ConstSpiceChar * string, SpiceInt first, SpiceInt * last, SpiceInt * nchar) { lx4uns_c(string,first,last,nchar);}
extern DLLWRAPPER_API void LXQSTR_C(ConstSpiceChar * string, SpiceChar qchar, SpiceInt first, SpiceInt * last, SpiceInt * nchar) { lxqstr_c(string,qchar,first,last,nchar);}
extern DLLWRAPPER_API void M2EUL_C(ConstSpiceDouble r[3][3], SpiceInt axis3, SpiceInt axis2, SpiceInt axis1, SpiceDouble * angle3, SpiceDouble * angle2, SpiceDouble * angle1) { m2eul_c(r,axis3,axis2,axis1,angle3,angle2,angle1);}
extern DLLWRAPPER_API void M2Q_C(ConstSpiceDouble r[3][3], SpiceDouble q[4]) { m2q_c(r,q);}
extern DLLWRAPPER_API SpiceBoolean MATCHI_C(ConstSpiceChar * string, ConstSpiceChar * templ, SpiceChar wstr, SpiceChar wchr) {return matchi_c(string,templ,wstr,wchr);}
extern DLLWRAPPER_API SpiceBoolean MATCHW_C(ConstSpiceChar * string, ConstSpiceChar * templ, SpiceChar wstr, SpiceChar wchr) {return matchw_c(string,templ,wstr,wchr);}
extern DLLWRAPPER_API void MEQU_C(ConstSpiceDouble m1[3][3], SpiceDouble mout[3][3]) { mequ_c(m1,mout);}
extern DLLWRAPPER_API void MEQUG_C(const void * m1, SpiceInt nr, SpiceInt nc, void * mout) { mequg_c(m1,nr,nc,mout);}
extern DLLWRAPPER_API int MOVED_(SpiceDouble * arrfrm, SpiceInt * ndim, SpiceDouble * arrto) {return moved_(arrfrm,ndim,arrto);}
extern DLLWRAPPER_API void MTXM_C(ConstSpiceDouble m1[3][3], ConstSpiceDouble m2[3][3], SpiceDouble mout[3][3]) { mtxm_c(m1,m2,mout);}
extern DLLWRAPPER_API void MTXMG_C(const void * m1, const void * m2, SpiceInt row1, SpiceInt col1, SpiceInt col2, void * mout) { mtxmg_c(m1,m2,row1,col1,col2,mout);}
extern DLLWRAPPER_API void MTXV_C(ConstSpiceDouble m1[3][3], ConstSpiceDouble vin[3], SpiceDouble vout[3]) { mtxv_c(m1,vin,vout);}
extern DLLWRAPPER_API void MTXVG_C(const void * m1, const void * v2, SpiceInt ncol1, SpiceInt nr1r2, void * vout) { mtxvg_c(m1,v2,ncol1,nr1r2,vout);}
extern DLLWRAPPER_API void MXM_C(ConstSpiceDouble m1[3][3], ConstSpiceDouble m2[3][3], SpiceDouble mout[3][3]) { mxm_c(m1,m2,mout);}
extern DLLWRAPPER_API void MXMG_C(const void * m1, const void * m2, SpiceInt row1, SpiceInt col1, SpiceInt col2, void * mout) { mxmg_c(m1,m2,row1,col1,col2,mout);}
extern DLLWRAPPER_API void MXMT_C(ConstSpiceDouble m1[3][3], ConstSpiceDouble m2[3][3], SpiceDouble mout[3][3]) { mxmt_c(m1,m2,mout);}
extern DLLWRAPPER_API void MXMTG_C(const void * m1, const void * m2, SpiceInt nrow1, SpiceInt nc1c2, SpiceInt nrow2, void * mout) { mxmtg_c(m1,m2,nrow1,nc1c2,nrow2,mout);}
extern DLLWRAPPER_API void MXV_C(ConstSpiceDouble m1[3][3], ConstSpiceDouble vin[3], SpiceDouble vout[3]) { mxv_c(m1,vin,vout);}
extern DLLWRAPPER_API void MXVG_C(const void * m1, const void * v2, SpiceInt nrow1, SpiceInt nc1r2, void * vout) { mxvg_c(m1,v2,nrow1,nc1r2,vout);}
extern DLLWRAPPER_API void NAMFRM_C(ConstSpiceChar * frname, SpiceInt * frcode) { namfrm_c(frname,frcode);}
extern DLLWRAPPER_API SpiceInt NCPOS_C(ConstSpiceChar * str, ConstSpiceChar * chars, SpiceInt start) {return ncpos_c(str,chars,start);}
extern DLLWRAPPER_API SpiceInt NCPOSR_C(ConstSpiceChar * str, ConstSpiceChar * chars, SpiceInt start) {return ncposr_c(str,chars,start);}
extern DLLWRAPPER_API void NEARPT_C(ConstSpiceDouble positn[3], SpiceDouble a, SpiceDouble b, SpiceDouble c, SpiceDouble npoint[3], SpiceDouble * alt) { nearpt_c(positn,a,b,c,npoint,alt);}
extern DLLWRAPPER_API void NPEDLN_C(SpiceDouble a, SpiceDouble b, SpiceDouble c, ConstSpiceDouble linept[3], ConstSpiceDouble linedr[3], SpiceDouble pnear[3], SpiceDouble * dist) { npedln_c(a,b,c,linept,linedr,pnear,dist);}
extern DLLWRAPPER_API void NPELPT_C(ConstSpiceDouble point[3], ConstSpiceEllipse * ellips, SpiceDouble pnear[3], SpiceDouble * dist) { npelpt_c(point,ellips,pnear,dist);}
extern DLLWRAPPER_API void NPLNPT_C(ConstSpiceDouble linpt[3], ConstSpiceDouble lindir[3], ConstSpiceDouble point[3], SpiceDouble pnear[3], SpiceDouble * dist) { nplnpt_c(linpt,lindir,point,pnear,dist);}
extern DLLWRAPPER_API void NVC2PL_C(ConstSpiceDouble normal[3], SpiceDouble constant, SpicePlane * plane) { nvc2pl_c(normal,constant,plane);}
extern DLLWRAPPER_API void NVP2PL_C(ConstSpiceDouble normal[3], ConstSpiceDouble point[3], SpicePlane * plane) { nvp2pl_c(normal,point,plane);}
extern DLLWRAPPER_API void OCCULT_C(ConstSpiceChar * target1, ConstSpiceChar * shape1, ConstSpiceChar * frame1, ConstSpiceChar * target2, ConstSpiceChar * shape2, ConstSpiceChar * frame2, ConstSpiceChar * abcorr, ConstSpiceChar * observer, SpiceDouble time, SpiceInt * occult_code) { occult_c(target1,shape1,frame1,target2,shape2,frame2,abcorr,observer,time,occult_code);}
extern DLLWRAPPER_API SpiceInt ORDC_C(ConstSpiceChar * item, SpiceCell * set) {return ordc_c(item,set);}
extern DLLWRAPPER_API SpiceInt ORDD_C(SpiceDouble item, SpiceCell * set) {return ordd_c(item,set);}
extern DLLWRAPPER_API void ORDERC_C(SpiceInt lenvals, const void * array, SpiceInt ndim, SpiceInt * iorder) { orderc_c(lenvals,array,ndim,iorder);}
extern DLLWRAPPER_API void ORDERD_C(ConstSpiceDouble * array, SpiceInt ndim, SpiceInt * iorder) { orderd_c(array,ndim,iorder);}
extern DLLWRAPPER_API void ORDERI_C(ConstSpiceInt * array, SpiceInt ndim, SpiceInt * iorder) { orderi_c(array,ndim,iorder);}
extern DLLWRAPPER_API SpiceInt ORDI_C(SpiceInt item, SpiceCell * set) {return ordi_c(item,set);}
extern DLLWRAPPER_API void OSCELT_C(ConstSpiceDouble state[6], SpiceDouble et, SpiceDouble mu, SpiceDouble elts[8]) { oscelt_c(state,et,mu,elts);}
extern DLLWRAPPER_API void OSCLTX_C(ConstSpiceDouble state[6], SpiceDouble et, SpiceDouble mu, SpiceDouble elts[SPICE_OSCLTX_NELTS]) { oscltx_c(state,et,mu,elts);}
extern DLLWRAPPER_API void PCKCLS_C(SpiceInt handle) { pckcls_c(handle);}
extern DLLWRAPPER_API void PCKCOV_C(ConstSpiceChar * pck, SpiceInt idcode, SpiceCell * cover) { pckcov_c(pck,idcode,cover);}
extern DLLWRAPPER_API void PCKFRM_C(ConstSpiceChar * pck, SpiceCell * ids) { pckfrm_c(pck,ids);}
extern DLLWRAPPER_API void PCKLOF_C(ConstSpiceChar * fname, SpiceInt * handle) { pcklof_c(fname,handle);}
extern DLLWRAPPER_API void PCKOPN_C(ConstSpiceChar * name, ConstSpiceChar * ifname, SpiceInt ncomch, SpiceInt * handle) { pckopn_c(name,ifname,ncomch,handle);}
extern DLLWRAPPER_API void PCKUOF_C(SpiceInt handle) { pckuof_c(handle);}
extern DLLWRAPPER_API void PCKW02_C(SpiceInt handle, SpiceInt clssid, ConstSpiceChar * frame, SpiceDouble first, SpiceDouble last, ConstSpiceChar * segid, SpiceDouble intlen, SpiceInt n, SpiceInt polydg, SpiceDouble cdata[], SpiceDouble btime) { pckw02_c(handle,clssid,frame,first,last,segid,intlen,n,polydg,cdata,btime);}
extern DLLWRAPPER_API void PCPOOL_C(ConstSpiceChar * name, SpiceInt n, SpiceInt lenvals, const void * cvals) { pcpool_c(name,n,lenvals,cvals);}
extern DLLWRAPPER_API void PDPOOL_C(ConstSpiceChar * name, SpiceInt n, ConstSpiceDouble * dvals) { pdpool_c(name,n,dvals);}
extern DLLWRAPPER_API void PGRREC_C(ConstSpiceChar * body, SpiceDouble lon, SpiceDouble lat, SpiceDouble alt, SpiceDouble re, SpiceDouble f, SpiceDouble rectan[3]) { pgrrec_c(body,lon,lat,alt,re,f,rectan);}
extern DLLWRAPPER_API SpiceDouble PHASEQ_C(SpiceDouble et, ConstSpiceChar * target, ConstSpiceChar * illumn, ConstSpiceChar * obsrvr, ConstSpiceChar * abcorr) {return phaseq_c(et,target,illumn,obsrvr,abcorr);}
extern DLLWRAPPER_API SpiceDouble PI_C() {return pi_c();}
extern DLLWRAPPER_API void PIPOOL_C(ConstSpiceChar * name, SpiceInt n, ConstSpiceInt * ivals) { pipool_c(name,n,ivals);}
extern DLLWRAPPER_API void PJELPL_C(ConstSpiceEllipse * elin, ConstSpicePlane * plane, SpiceEllipse * elout) { pjelpl_c(elin,plane,elout);}
extern DLLWRAPPER_API void PL2NVC_C(ConstSpicePlane * plane, SpiceDouble normal[3], SpiceDouble * constant) { pl2nvc_c(plane,normal,constant);}
extern DLLWRAPPER_API void PL2NVP_C(ConstSpicePlane * plane, SpiceDouble normal[3], SpiceDouble point[3]) { pl2nvp_c(plane,normal,point);}
extern DLLWRAPPER_API void PL2PSV_C(ConstSpicePlane * plane, SpiceDouble point[3], SpiceDouble span1[3], SpiceDouble span2[3]) { pl2psv_c(plane,point,span1,span2);}
extern DLLWRAPPER_API SpiceDouble PLTAR_C(SpiceInt nv, ConstSpiceDouble vrtces[][3], SpiceInt np, ConstSpiceInt plates[][3]) {return pltar_c(nv,vrtces,np,plates);}
extern DLLWRAPPER_API void PLTEXP_C(ConstSpiceDouble iverts[3][3], SpiceDouble delta, SpiceDouble overts[3][3]) { pltexp_c(iverts,delta,overts);}
extern DLLWRAPPER_API void PLTNP_C(ConstSpiceDouble point[3], ConstSpiceDouble v1[3], ConstSpiceDouble v2[3], ConstSpiceDouble v3[3], SpiceDouble pnear[3], SpiceDouble * dist) { pltnp_c(point,v1,v2,v3,pnear,dist);}
extern DLLWRAPPER_API void PLTNRM_C(ConstSpiceDouble v1[3], ConstSpiceDouble v2[3], ConstSpiceDouble v3[3], SpiceDouble normal[3]) { pltnrm_c(v1,v2,v3,normal);}
extern DLLWRAPPER_API SpiceDouble PLTVOL_C(SpiceInt nv, ConstSpiceDouble vrtces[][3], SpiceInt np, ConstSpiceInt plates[][3]) {return pltvol_c(nv,vrtces,np,plates);}
extern DLLWRAPPER_API void POLYDS_C(ConstSpiceDouble * coeffs, SpiceInt deg, SpiceInt nderiv, SpiceDouble t, SpiceDouble * p) { polyds_c(coeffs,deg,nderiv,t,p);}
extern DLLWRAPPER_API SpiceInt POS_C(ConstSpiceChar * str, ConstSpiceChar * substr, SpiceInt start) {return pos_c(str,substr,start);}
extern DLLWRAPPER_API SpiceInt POSR_C(ConstSpiceChar * str, ConstSpiceChar * substr, SpiceInt start) {return posr_c(str,substr,start);}
extern DLLWRAPPER_API void PROP2B_C(SpiceDouble gm, ConstSpiceDouble pvinit[6], SpiceDouble dt, SpiceDouble pvprop[6]) { prop2b_c(gm,pvinit,dt,pvprop);}
extern DLLWRAPPER_API void PRSDP_C(ConstSpiceChar * string, SpiceDouble * dpval) { prsdp_c(string,dpval);}
extern DLLWRAPPER_API void PRSINT_C(ConstSpiceChar * string, SpiceInt * intval) { prsint_c(string,intval);}
extern DLLWRAPPER_API void PSV2PL_C(ConstSpiceDouble point[3], ConstSpiceDouble span1[3], ConstSpiceDouble span2[3], SpicePlane * plane) { psv2pl_c(point,span1,span2,plane);}
extern DLLWRAPPER_API void PUTCML_C(SpiceInt argc, SpiceChar ** argv) { putcml_c(argc,argv);}
extern DLLWRAPPER_API void PXFORM_C(ConstSpiceChar * from, ConstSpiceChar * to, SpiceDouble et, SpiceDouble rotate[3][3]) { pxform_c(from,to,et,rotate);}
extern DLLWRAPPER_API void PXFRM2_C(ConstSpiceChar * from, ConstSpiceChar * to, SpiceDouble etfrom, SpiceDouble etto, SpiceDouble rotate[3][3]) { pxfrm2_c(from,to,etfrom,etto,rotate);}
extern DLLWRAPPER_API void Q2M_C(ConstSpiceDouble q[4], SpiceDouble r[3][3]) { q2m_c(q,r);}
extern DLLWRAPPER_API void QCKTRC_C(SpiceInt tracelen, SpiceChar * trace) { qcktrc_c(tracelen,trace);}
extern DLLWRAPPER_API void QDQ2AV_C(ConstSpiceDouble q[4], ConstSpiceDouble dq[4], SpiceDouble av[3]) { qdq2av_c(q,dq,av);}
extern DLLWRAPPER_API void QXQ_C(ConstSpiceDouble q1[4], ConstSpiceDouble q2[4], SpiceDouble qout[4]) { qxq_c(q1,q2,qout);}
extern DLLWRAPPER_API void RADREC_C(SpiceDouble range, SpiceDouble ra, SpiceDouble dec, SpiceDouble rectan[3]) { radrec_c(range,ra,dec,rectan);}
extern DLLWRAPPER_API void RAV2XF_C(ConstSpiceDouble rot[3][3], ConstSpiceDouble av[3], SpiceDouble xform[6][6]) { rav2xf_c(rot,av,xform);}
extern DLLWRAPPER_API void RAXISA_C(ConstSpiceDouble matrix[3][3], SpiceDouble axis[3], SpiceDouble * angle) { raxisa_c(matrix,axis,angle);}
extern DLLWRAPPER_API void RDTEXT_C(ConstSpiceChar * file, SpiceInt lenout, SpiceChar * line, SpiceBoolean * eof) { rdtext_c(file,lenout,line,eof);}
extern DLLWRAPPER_API void RECCYL_C(ConstSpiceDouble rectan[3], SpiceDouble * r, SpiceDouble * lon, SpiceDouble * z) { reccyl_c(rectan,r,lon,z);}
extern DLLWRAPPER_API void RECGEO_C(ConstSpiceDouble rectan[3], SpiceDouble re, SpiceDouble f, SpiceDouble * lon, SpiceDouble * lat, SpiceDouble * alt) { recgeo_c(rectan,re,f,lon,lat,alt);}
extern DLLWRAPPER_API void RECLAT_C(ConstSpiceDouble rectan[3], SpiceDouble * radius, SpiceDouble * longitude, SpiceDouble * latitude) { reclat_c(rectan,radius,longitude,latitude);}
extern DLLWRAPPER_API void RECPGR_C(ConstSpiceChar * body, SpiceDouble rectan[3], SpiceDouble re, SpiceDouble f, SpiceDouble * lon, SpiceDouble * lat, SpiceDouble * alt) { recpgr_c(body,rectan,re,f,lon,lat,alt);}
extern DLLWRAPPER_API void RECRAD_C(ConstSpiceDouble rectan[3], SpiceDouble * radius, SpiceDouble * ra, SpiceDouble * dec) { recrad_c(rectan,radius,ra,dec);}
extern DLLWRAPPER_API void RECSPH_C(ConstSpiceDouble rectan[3], SpiceDouble * r, SpiceDouble * colat, SpiceDouble * lon) { recsph_c(rectan,r,colat,lon);}
extern DLLWRAPPER_API void REMOVC_C(ConstSpiceChar * item, SpiceCell * set) { removc_c(item,set);}
extern DLLWRAPPER_API void REMOVD_C(SpiceDouble item, SpiceCell * set) { removd_c(item,set);}
extern DLLWRAPPER_API void REMOVI_C(SpiceInt item, SpiceCell * set) { removi_c(item,set);}
extern DLLWRAPPER_API void REORDC_C(ConstSpiceInt * iorder, SpiceInt ndim, SpiceInt lenvals, void * array) { reordc_c(iorder,ndim,lenvals,array);}
extern DLLWRAPPER_API void REORDD_C(ConstSpiceInt * iorder, SpiceInt ndim, SpiceDouble * array) { reordd_c(iorder,ndim,array);}
extern DLLWRAPPER_API void REORDI_C(ConstSpiceInt * iorder, SpiceInt ndim, SpiceInt * array) { reordi_c(iorder,ndim,array);}
extern DLLWRAPPER_API void REORDL_C(ConstSpiceInt * iorder, SpiceInt ndim, SpiceBoolean * array) { reordl_c(iorder,ndim,array);}
extern DLLWRAPPER_API void REPMC_C(ConstSpiceChar * in, ConstSpiceChar * marker, ConstSpiceChar * value, SpiceInt lenout, SpiceChar * out) { repmc_c(in,marker,value,lenout,out);}
extern DLLWRAPPER_API void REPMCT_C(ConstSpiceChar * in, ConstSpiceChar * marker, SpiceInt value, SpiceChar strCase, SpiceInt lenout, SpiceChar * out) { repmct_c(in,marker,value,strCase,lenout,out);}
extern DLLWRAPPER_API void REPMD_C(ConstSpiceChar * in, ConstSpiceChar * marker, SpiceDouble value, SpiceInt sigdig, SpiceInt lenout, SpiceChar * out) { repmd_c(in,marker,value,sigdig,lenout,out);}
extern DLLWRAPPER_API void REPMF_C(ConstSpiceChar * in, ConstSpiceChar * marker, SpiceDouble value, SpiceInt sigdig, SpiceChar format, SpiceInt lenout, SpiceChar * out) { repmf_c(in,marker,value,sigdig,format,lenout,out);}
extern DLLWRAPPER_API void REPMI_C(ConstSpiceChar * in, ConstSpiceChar * marker, SpiceInt value, SpiceInt lenout, SpiceChar * out) { repmi_c(in,marker,value,lenout,out);}
extern DLLWRAPPER_API void REPMOT_C(ConstSpiceChar * in, ConstSpiceChar * marker, SpiceInt value, SpiceChar strCase, SpiceInt lenout, SpiceChar * out) { repmot_c(in,marker,value,strCase,lenout,out);}
extern DLLWRAPPER_API void RESET_C() { reset_c();}
extern DLLWRAPPER_API SpiceBoolean RETURN_C() {return return_c();}
extern DLLWRAPPER_API void ROTATE_C(SpiceDouble angle, SpiceInt iaxis, SpiceDouble mout[3][3]) { rotate_c(angle,iaxis,mout);}
extern DLLWRAPPER_API void ROTMAT_C(ConstSpiceDouble m1[3][3], SpiceDouble angle, SpiceInt iaxis, SpiceDouble mout[3][3]) { rotmat_c(m1,angle,iaxis,mout);}
extern DLLWRAPPER_API void ROTVEC_C(ConstSpiceDouble v1[3], SpiceDouble angle, SpiceInt iaxis, SpiceDouble vout[3]) { rotvec_c(v1,angle,iaxis,vout);}
extern DLLWRAPPER_API SpiceDouble RPD_C() {return rpd_c();}
extern DLLWRAPPER_API void RQUAD_C(SpiceDouble a, SpiceDouble b, SpiceDouble c, SpiceDouble root1[2], SpiceDouble root2[2]) { rquad_c(a,b,c,root1,root2);}
extern DLLWRAPPER_API void SAELGV_C(ConstSpiceDouble vec1[3], ConstSpiceDouble vec2[3], SpiceDouble smajor[3], SpiceDouble sminor[3]) { saelgv_c(vec1,vec2,smajor,sminor);}
extern DLLWRAPPER_API void SCARD_C(SpiceInt card, SpiceCell * cell) { scard_c(card,cell);}
extern DLLWRAPPER_API void SCDECD_C(SpiceInt sc, SpiceDouble sclkdp, SpiceInt sclklen, SpiceChar * sclkch) { scdecd_c(sc,sclkdp,sclklen,sclkch);}
extern DLLWRAPPER_API void SCE2C_C(SpiceInt sc, SpiceDouble et, SpiceDouble * sclkdp) { sce2c_c(sc,et,sclkdp);}
extern DLLWRAPPER_API void SCE2S_C(SpiceInt sc, SpiceDouble et, SpiceInt sclklen, SpiceChar * sclkch) { sce2s_c(sc,et,sclklen,sclkch);}
extern DLLWRAPPER_API void SCE2T_C(SpiceInt sc, SpiceDouble et, SpiceDouble * sclkdp) { sce2t_c(sc,et,sclkdp);}
extern DLLWRAPPER_API void SCENCD_C(SpiceInt sc, ConstSpiceChar * sclkch, SpiceDouble * sclkdp) { scencd_c(sc,sclkch,sclkdp);}
extern DLLWRAPPER_API void SCFMT_C(SpiceInt sc, SpiceDouble ticks, SpiceInt clkstrlen, SpiceChar * clkstr) { scfmt_c(sc,ticks,clkstrlen,clkstr);}
extern DLLWRAPPER_API void SCPART_C(SpiceInt sc, SpiceInt * nparts, SpiceDouble * pstart, SpiceDouble * pstop) { scpart_c(sc,nparts,pstart,pstop);}
extern DLLWRAPPER_API void SCS2E_C(SpiceInt sc, ConstSpiceChar * sclkch, SpiceDouble * et) { scs2e_c(sc,sclkch,et);}
extern DLLWRAPPER_API void SCT2E_C(SpiceInt sc, SpiceDouble sclkdp, SpiceDouble * et) { sct2e_c(sc,sclkdp,et);}
extern DLLWRAPPER_API void SCTIKS_C(SpiceInt sc, ConstSpiceChar * clkstr, SpiceDouble * ticks) { sctiks_c(sc,clkstr,ticks);}
extern DLLWRAPPER_API void SDIFF_C(SpiceCell * a, SpiceCell * b, SpiceCell * c) { sdiff_c(a,b,c);}
extern DLLWRAPPER_API SpiceBoolean SET_C(SpiceCell * a, ConstSpiceChar * op, SpiceCell * b) {return set_c(a,op,b);}
extern DLLWRAPPER_API void SETMSG_C(ConstSpiceChar * msg) { setmsg_c(msg);}
extern DLLWRAPPER_API void SHELLC_C(SpiceInt ndim, SpiceInt lenvals, void * array) { shellc_c(ndim,lenvals,array);}
extern DLLWRAPPER_API void SHELLD_C(SpiceInt ndim, SpiceDouble * array) { shelld_c(ndim,array);}
extern DLLWRAPPER_API void SHELLI_C(SpiceInt ndim, SpiceInt * array) { shelli_c(ndim,array);}
extern DLLWRAPPER_API void SIGERR_C(ConstSpiceChar * message) { sigerr_c(message);}
extern DLLWRAPPER_API void SINCPT_C(ConstSpiceChar * method, ConstSpiceChar * target, SpiceDouble et, ConstSpiceChar * fixref, ConstSpiceChar * abcorr, ConstSpiceChar * obsrvr, ConstSpiceChar * dref, ConstSpiceDouble dvec[3], SpiceDouble spoint[3], SpiceDouble * trgepc, SpiceDouble srfvec[3], SpiceBoolean * found) { sincpt_c(method,target,et,fixref,abcorr,obsrvr,dref,dvec,spoint,trgepc,srfvec,found);}
extern DLLWRAPPER_API SpiceInt SIZE_C(SpiceCell * size) {return size_c(size);}
extern DLLWRAPPER_API SpiceDouble SPD_C() {return spd_c();}
extern DLLWRAPPER_API void SPHCYL_C(SpiceDouble radius, SpiceDouble colat, SpiceDouble slon, SpiceDouble * r, SpiceDouble * lon, SpiceDouble * z) { sphcyl_c(radius,colat,slon,r,lon,z);}
extern DLLWRAPPER_API void SPHLAT_C(SpiceDouble r, SpiceDouble colat, SpiceDouble lons, SpiceDouble * radius, SpiceDouble * lon, SpiceDouble * lat) { sphlat_c(r,colat,lons,radius,lon,lat);}
extern DLLWRAPPER_API void SPHREC_C(SpiceDouble r, SpiceDouble colat, SpiceDouble lon, SpiceDouble rectan[3]) { sphrec_c(r,colat,lon,rectan);}
extern DLLWRAPPER_API void SPK14A_C(SpiceInt handle, SpiceInt ncsets, ConstSpiceDouble coeffs[], ConstSpiceDouble epochs[]) { spk14a_c(handle,ncsets,coeffs,epochs);}
extern DLLWRAPPER_API void SPK14B_C(SpiceInt handle, ConstSpiceChar * segid, SpiceInt body, SpiceInt center, ConstSpiceChar * frame, SpiceDouble first, SpiceDouble last, SpiceInt chbdeg) { spk14b_c(handle,segid,body,center,frame,first,last,chbdeg);}
extern DLLWRAPPER_API void SPK14E_C(SpiceInt handle) { spk14e_c(handle);}
extern DLLWRAPPER_API void SPKACS_C(SpiceInt targ, SpiceDouble et, ConstSpiceChar * ref, ConstSpiceChar * abcorr, SpiceInt obs, SpiceDouble starg[6], SpiceDouble * lt, SpiceDouble * dlt) { spkacs_c(targ,et,ref,abcorr,obs,starg,lt,dlt);}
extern DLLWRAPPER_API void SPKAPO_C(SpiceInt targ, SpiceDouble et, ConstSpiceChar * ref, ConstSpiceDouble sobs[6], ConstSpiceChar * abcorr, SpiceDouble ptarg[3], SpiceDouble * lt) { spkapo_c(targ,et,ref,sobs,abcorr,ptarg,lt);}
extern DLLWRAPPER_API void SPKAPP_C(SpiceInt targ, SpiceDouble et, ConstSpiceChar * ref, ConstSpiceDouble sobs[6], ConstSpiceChar * abcorr, SpiceDouble starg[6], SpiceDouble * lt) { spkapp_c(targ,et,ref,sobs,abcorr,starg,lt);}
extern DLLWRAPPER_API void SPKAPS_C(SpiceInt targ, SpiceDouble et, ConstSpiceChar * ref, ConstSpiceChar * abcorr, ConstSpiceDouble stobs[6], ConstSpiceDouble accobs[6], SpiceDouble starg[6], SpiceDouble * lt, SpiceDouble * dlt) { spkaps_c(targ,et,ref,abcorr,stobs,accobs,starg,lt,dlt);}
extern DLLWRAPPER_API void SPKCLS_C(SpiceInt handle) { spkcls_c(handle);}
extern DLLWRAPPER_API void SPKCOV_C(ConstSpiceChar * spk, SpiceInt idcode, SpiceCell * cover) { spkcov_c(spk,idcode,cover);}
extern DLLWRAPPER_API void SPKCPO_C(ConstSpiceChar * target, SpiceDouble et, ConstSpiceChar * outref, ConstSpiceChar * refloc, ConstSpiceChar * abcorr, ConstSpiceDouble obssta[3], ConstSpiceChar * obsctr, ConstSpiceChar * obsref, SpiceDouble state[6], SpiceDouble * lt) { spkcpo_c(target,et,outref,refloc,abcorr,obssta,obsctr,obsref,state,lt);}
extern DLLWRAPPER_API void SPKCPT_C(ConstSpiceDouble trgpos[3], ConstSpiceChar * trgctr, ConstSpiceChar * trgref, SpiceDouble et, ConstSpiceChar * outref, ConstSpiceChar * refloc, ConstSpiceChar * abcorr, ConstSpiceChar * obsrvr, SpiceDouble state[6], SpiceDouble * lt) { spkcpt_c(trgpos,trgctr,trgref,et,outref,refloc,abcorr,obsrvr,state,lt);}
extern DLLWRAPPER_API void SPKCVO_C(ConstSpiceChar * target, SpiceDouble et, ConstSpiceChar * outref, ConstSpiceChar * refloc, ConstSpiceChar * abcorr, ConstSpiceDouble obssta[6], SpiceDouble obsepc, ConstSpiceChar * obsctr, ConstSpiceChar * obsref, SpiceDouble state[6], SpiceDouble * lt) { spkcvo_c(target,et,outref,refloc,abcorr,obssta,obsepc,obsctr,obsref,state,lt);}
extern DLLWRAPPER_API void SPKCVT_C(ConstSpiceDouble trgsta[6], SpiceDouble trgepc, ConstSpiceChar * trgctr, ConstSpiceChar * trgref, SpiceDouble et, ConstSpiceChar * outref, ConstSpiceChar * refloc, ConstSpiceChar * abcorr, ConstSpiceChar * obsrvr, SpiceDouble state[6], SpiceDouble * lt) { spkcvt_c(trgsta,trgepc,trgctr,trgref,et,outref,refloc,abcorr,obsrvr,state,lt);}
extern DLLWRAPPER_API void SPKEZ_C(SpiceInt target, SpiceDouble epoch, ConstSpiceChar * frame, ConstSpiceChar * abcorr, SpiceInt observer, SpiceDouble state[6], SpiceDouble * lt) { spkez_c(target,epoch,frame,abcorr,observer,state,lt);}
extern DLLWRAPPER_API void SPKEZP_C(SpiceInt targ, SpiceDouble et, ConstSpiceChar * ref, ConstSpiceChar * abcorr, SpiceInt obs, SpiceDouble ptarg[3], SpiceDouble * lt) { spkezp_c(targ,et,ref,abcorr,obs,ptarg,lt);}
extern DLLWRAPPER_API void SPKEZR_C(ConstSpiceChar * target, SpiceDouble epoch, ConstSpiceChar * frame, ConstSpiceChar * abcorr, ConstSpiceChar * observer, SpiceDouble state[6], SpiceDouble * lt) { spkezr_c(target,epoch,frame,abcorr,observer,state,lt);}
extern DLLWRAPPER_API void SPKGEO_C(SpiceInt targ, SpiceDouble et, ConstSpiceChar * ref, SpiceInt obs, SpiceDouble state[6], SpiceDouble * lt) { spkgeo_c(targ,et,ref,obs,state,lt);}
extern DLLWRAPPER_API void SPKGPS_C(SpiceInt targ, SpiceDouble et, ConstSpiceChar * ref, SpiceInt obs, SpiceDouble pos[3], SpiceDouble * lt) { spkgps_c(targ,et,ref,obs,pos,lt);}
extern DLLWRAPPER_API void SPKLEF_C(ConstSpiceChar * filename, SpiceInt * handle) { spklef_c(filename,handle);}
extern DLLWRAPPER_API void SPKLTC_C(SpiceInt targ, SpiceDouble et, ConstSpiceChar * ref, ConstSpiceChar * abcorr, ConstSpiceDouble stobs[6], SpiceDouble starg[6], SpiceDouble * lt, SpiceDouble * dlt) { spkltc_c(targ,et,ref,abcorr,stobs,starg,lt,dlt);}
extern DLLWRAPPER_API void SPKOBJ_C(ConstSpiceChar * spk, SpiceCell * ids) { spkobj_c(spk,ids);}
extern DLLWRAPPER_API void SPKOPA_C(ConstSpiceChar * file, SpiceInt * handle) { spkopa_c(file,handle);}
extern DLLWRAPPER_API void SPKOPN_C(ConstSpiceChar * name, ConstSpiceChar * ifname, SpiceInt ncomch, SpiceInt * handle) { spkopn_c(name,ifname,ncomch,handle);}
extern DLLWRAPPER_API void SPKPDS_C(SpiceInt body, SpiceInt center, ConstSpiceChar * frame, SpiceInt type, SpiceDouble first, SpiceDouble last, SpiceDouble descr[5]) { spkpds_c(body,center,frame,type,first,last,descr);}
extern DLLWRAPPER_API void SPKPOS_C(ConstSpiceChar * targ, SpiceDouble et, ConstSpiceChar * ref, ConstSpiceChar * abcorr, ConstSpiceChar * obs, SpiceDouble ptarg[3], SpiceDouble * lt) { spkpos_c(targ,et,ref,abcorr,obs,ptarg,lt);}
extern DLLWRAPPER_API void SPKPVN_C(SpiceInt handle, ConstSpiceDouble descr[5], SpiceDouble et, SpiceInt * ref, SpiceDouble state[6], SpiceInt * center) { spkpvn_c(handle,descr,et,ref,state,center);}
extern DLLWRAPPER_API void SPKSFS_C(SpiceInt body, SpiceDouble et, SpiceInt idlen, SpiceInt * handle, SpiceDouble descr[5], SpiceChar * ident, SpiceBoolean * found) { spksfs_c(body,et,idlen,handle,descr,ident,found);}
extern DLLWRAPPER_API void SPKSSB_C(SpiceInt targ, SpiceDouble et, ConstSpiceChar * ref, SpiceDouble starg[6]) { spkssb_c(targ,et,ref,starg);}
extern DLLWRAPPER_API void SPKSUB_C(SpiceInt handle, SpiceDouble descr[5], ConstSpiceChar * ident, SpiceDouble begin, SpiceDouble end, SpiceInt newh) { spksub_c(handle,descr,ident,begin,end,newh);}
extern DLLWRAPPER_API void SPKUDS_C(ConstSpiceDouble descr[5], SpiceInt * body, SpiceInt * center, SpiceInt * frame, SpiceInt * type, SpiceDouble * first, SpiceDouble * last, SpiceInt * begin, SpiceInt * end) { spkuds_c(descr,body,center,frame,type,first,last,begin,end);}
extern DLLWRAPPER_API void SPKUEF_C(SpiceInt handle) { spkuef_c(handle);}
extern DLLWRAPPER_API void SPKW02_C(SpiceInt handle, SpiceInt body, SpiceInt center, ConstSpiceChar * frame, SpiceDouble first, SpiceDouble last, ConstSpiceChar * segid, SpiceDouble intlen, SpiceInt n, SpiceInt polydg, ConstSpiceDouble cdata[], SpiceDouble btime) { spkw02_c(handle,body,center,frame,first,last,segid,intlen,n,polydg,cdata,btime);}
extern DLLWRAPPER_API void SPKW03_C(SpiceInt handle, SpiceInt body, SpiceInt center, ConstSpiceChar * frame, SpiceDouble first, SpiceDouble last, ConstSpiceChar * segid, SpiceDouble intlen, SpiceInt n, SpiceInt polydg, ConstSpiceDouble cdata[], SpiceDouble btime) { spkw03_c(handle,body,center,frame,first,last,segid,intlen,n,polydg,cdata,btime);}
extern DLLWRAPPER_API void SPKW05_C(SpiceInt handle, SpiceInt body, SpiceInt center, ConstSpiceChar * frame, SpiceDouble first, SpiceDouble last, ConstSpiceChar * segid, SpiceDouble gm, SpiceInt n, ConstSpiceDouble states[][6], ConstSpiceDouble epochs[]) { spkw05_c(handle,body,center,frame,first,last,segid,gm,n,states,epochs);}
extern DLLWRAPPER_API void SPKW08_C(SpiceInt handle, SpiceInt body, SpiceInt center, ConstSpiceChar * frame, SpiceDouble first, SpiceDouble last, ConstSpiceChar * segid, SpiceInt degree, SpiceInt n, ConstSpiceDouble states[][6], SpiceDouble epoch1, SpiceDouble step) { spkw08_c(handle,body,center,frame,first,last,segid,degree,n,states,epoch1,step);}
extern DLLWRAPPER_API void SPKW09_C(SpiceInt handle, SpiceInt body, SpiceInt center, ConstSpiceChar * frame, SpiceDouble first, SpiceDouble last, ConstSpiceChar * segid, SpiceInt degree, SpiceInt n, ConstSpiceDouble states[][6], ConstSpiceDouble epochs[]) { spkw09_c(handle,body,center,frame,first,last,segid,degree,n,states,epochs);}
extern DLLWRAPPER_API void SPKW10_C(SpiceInt handle, SpiceInt body, SpiceInt center, ConstSpiceChar * frame, SpiceDouble first, SpiceDouble last, ConstSpiceChar * segid, ConstSpiceDouble consts[8], SpiceInt n, ConstSpiceDouble elems[], ConstSpiceDouble epochs[]) { spkw10_c(handle,body,center,frame,first,last,segid,consts,n,elems,epochs);}
extern DLLWRAPPER_API void SPKW12_C(SpiceInt handle, SpiceInt body, SpiceInt center, ConstSpiceChar * frame, SpiceDouble first, SpiceDouble last, ConstSpiceChar * segid, SpiceInt degree, SpiceInt n, ConstSpiceDouble states[][6], SpiceDouble epoch0, SpiceDouble step) { spkw12_c(handle,body,center,frame,first,last,segid,degree,n,states,epoch0,step);}
extern DLLWRAPPER_API void SPKW13_C(SpiceInt handle, SpiceInt body, SpiceInt center, ConstSpiceChar * frame, SpiceDouble first, SpiceDouble last, ConstSpiceChar * segid, SpiceInt degree, SpiceInt n, ConstSpiceDouble states[][6], ConstSpiceDouble epochs[]) { spkw13_c(handle,body,center,frame,first,last,segid,degree,n,states,epochs);}
extern DLLWRAPPER_API void SPKW15_C(SpiceInt handle, SpiceInt body, SpiceInt center, ConstSpiceChar * frame, SpiceDouble first, SpiceDouble last, ConstSpiceChar * segid, SpiceDouble epoch, ConstSpiceDouble tp[3], ConstSpiceDouble pa[3], SpiceDouble p, SpiceDouble ecc, SpiceDouble j2flg, ConstSpiceDouble pv[3], SpiceDouble gm, SpiceDouble j2, SpiceDouble radius) { spkw15_c(handle,body,center,frame,first,last,segid,epoch,tp,pa,p,ecc,j2flg,pv,gm,j2,radius);}
extern DLLWRAPPER_API void SPKW17_C(SpiceInt handle, SpiceInt body, SpiceInt center, ConstSpiceChar * frame, SpiceDouble first, SpiceDouble last, ConstSpiceChar * segid, SpiceDouble epoch, ConstSpiceDouble eqel[9], SpiceDouble rapol, SpiceDouble decpol) { spkw17_c(handle,body,center,frame,first,last,segid,epoch,eqel,rapol,decpol);}
extern DLLWRAPPER_API void SPKW18_C(SpiceInt handle, SpiceSPK18Subtype subtyp, SpiceInt body, SpiceInt center, ConstSpiceChar * frame, SpiceDouble first, SpiceDouble last, ConstSpiceChar * segid, SpiceInt degree, SpiceInt n, const void * packts, ConstSpiceDouble epochs[]) { spkw18_c(handle,subtyp,body,center,frame,first,last,segid,degree,n,packts,epochs);}
extern DLLWRAPPER_API void SPKW20_C(SpiceInt handle, SpiceInt body, SpiceInt center, ConstSpiceChar * frame, SpiceDouble first, SpiceDouble last, ConstSpiceChar * segid, SpiceDouble intlen, SpiceInt n, SpiceInt polydg, ConstSpiceDouble cdata[], SpiceDouble dscale, SpiceDouble tscale, SpiceDouble initjd, SpiceDouble initfr) { spkw20_c(handle,body,center,frame,first,last,segid,intlen,n,polydg,cdata,dscale,tscale,initjd,initfr);}
extern DLLWRAPPER_API void SRFC2S_C(SpiceInt code, SpiceInt bodyid, SpiceInt srflen, SpiceChar * srfstr, SpiceBoolean * isname) { srfc2s_c(code,bodyid,srflen,srfstr,isname);}
extern DLLWRAPPER_API void SRFCSS_C(SpiceInt code, ConstSpiceChar * bodstr, SpiceInt srflen, SpiceChar * srfstr, SpiceBoolean * isname) { srfcss_c(code,bodstr,srflen,srfstr,isname);}
extern DLLWRAPPER_API void SRFNRM_C(ConstSpiceChar * method, ConstSpiceChar * target, SpiceDouble et, ConstSpiceChar * fixref, SpiceInt npts, ConstSpiceDouble srfpts[][3], SpiceDouble normls[][3]) { srfnrm_c(method,target,et,fixref,npts,srfpts,normls);}
extern DLLWRAPPER_API void SRFREC_C(SpiceInt body, SpiceDouble lon, SpiceDouble lat, SpiceDouble rectan[3]) { srfrec_c(body,lon,lat,rectan);}
extern DLLWRAPPER_API void SRFS2C_C(ConstSpiceChar * srfstr, ConstSpiceChar * bodstr, SpiceInt * code, SpiceBoolean * found) { srfs2c_c(srfstr,bodstr,code,found);}
extern DLLWRAPPER_API void SRFSCC_C(ConstSpiceChar * surfce, SpiceInt bodyid, SpiceInt * surfid, SpiceBoolean * found) { srfscc_c(surfce,bodyid,surfid,found);}
extern DLLWRAPPER_API void SRFXPT_C(ConstSpiceChar * method, ConstSpiceChar * target, SpiceDouble et, ConstSpiceChar * abcorr, ConstSpiceChar * obsrvr, ConstSpiceChar * dref, ConstSpiceDouble dvec[3], SpiceDouble spoint[3], SpiceDouble * dist, SpiceDouble * trgepc, SpiceDouble obspos[3], SpiceBoolean * found) { srfxpt_c(method,target,et,abcorr,obsrvr,dref,dvec,spoint,dist,trgepc,obspos,found);}
extern DLLWRAPPER_API void SSIZE_C(SpiceInt size, SpiceCell * cell) { ssize_c(size,cell);}
extern DLLWRAPPER_API void STELAB_C(ConstSpiceDouble pobj[3], ConstSpiceDouble vobs[3], SpiceDouble appobj[3]) { stelab_c(pobj,vobs,appobj);}
extern DLLWRAPPER_API void STPOOL_C(ConstSpiceChar * item, SpiceInt nth, ConstSpiceChar * contin, SpiceInt lenout, SpiceChar * string, SpiceInt * size, SpiceBoolean * found) { stpool_c(item,nth,contin,lenout,string,size,found);}
extern DLLWRAPPER_API void STR2ET_C(ConstSpiceChar * date, SpiceDouble * et) { str2et_c(date,et);}
extern DLLWRAPPER_API void SUBPNT_C(ConstSpiceChar * method, ConstSpiceChar * target, SpiceDouble et, ConstSpiceChar * fixref, ConstSpiceChar * abcorr, ConstSpiceChar * obsrvr, SpiceDouble spoint[3], SpiceDouble * trgepc, SpiceDouble srfvec[3]) { subpnt_c(method,target,et,fixref,abcorr,obsrvr,spoint,trgepc,srfvec);}
extern DLLWRAPPER_API void SUBPT_C(ConstSpiceChar * method, ConstSpiceChar * target, SpiceDouble et, ConstSpiceChar * abcorr, ConstSpiceChar * obsrvr, SpiceDouble spoint[3], SpiceDouble * alt) { subpt_c(method,target,et,abcorr,obsrvr,spoint,alt);}
extern DLLWRAPPER_API void SUBPT_PL02(SpiceInt handle, ConstSpiceDLADescr * dladsc, ConstSpiceChar * method, ConstSpiceChar * target, SpiceDouble et, ConstSpiceChar * abcorr, ConstSpiceChar * obsrvr, SpiceDouble spoint[3], SpiceDouble * alt, SpiceInt * plateID) { subpt_pl02(handle,dladsc,method,target,et,abcorr,obsrvr,spoint,alt,plateID);}
extern DLLWRAPPER_API void SUBSLR_C(ConstSpiceChar * method, ConstSpiceChar * target, SpiceDouble et, ConstSpiceChar * fixref, ConstSpiceChar * abcorr, ConstSpiceChar * obsrvr, SpiceDouble spoint[3], SpiceDouble * trgepc, SpiceDouble srfvec[3]) { subslr_c(method,target,et,fixref,abcorr,obsrvr,spoint,trgepc,srfvec);}
extern DLLWRAPPER_API void SUBSOL_C(ConstSpiceChar * method, ConstSpiceChar * target, SpiceDouble et, ConstSpiceChar * abcorr, ConstSpiceChar * obsrvr, SpiceDouble spoint[3]) { subsol_c(method,target,et,abcorr,obsrvr,spoint);}
extern DLLWRAPPER_API void SUBSOL_PL02(SpiceInt handle, ConstSpiceDLADescr * dladsc, ConstSpiceChar * method, ConstSpiceChar * target, SpiceDouble et, ConstSpiceChar * abcorr, ConstSpiceChar * obsrvr, SpiceDouble spoint[3], SpiceDouble * dist, SpiceInt * plateID) { subsol_pl02(handle,dladsc,method,target,et,abcorr,obsrvr,spoint,dist,plateID);}
extern DLLWRAPPER_API SpiceDouble SUMAD_C(ConstSpiceDouble array[], SpiceInt n) {return sumad_c(array,n);}
extern DLLWRAPPER_API SpiceInt SUMAI_C(ConstSpiceInt array[], SpiceInt n) {return sumai_c(array,n);}
extern DLLWRAPPER_API void SURFNM_C(SpiceDouble a, SpiceDouble b, SpiceDouble c, ConstSpiceDouble point[3], SpiceDouble normal[3]) { surfnm_c(a,b,c,point,normal);}
extern DLLWRAPPER_API void SURFPT_C(ConstSpiceDouble positn[3], ConstSpiceDouble u[3], SpiceDouble a, SpiceDouble b, SpiceDouble c, SpiceDouble point[3], SpiceBoolean * found) { surfpt_c(positn,u,a,b,c,point,found);}
extern DLLWRAPPER_API void SURFPV_C(ConstSpiceDouble stvrtx[6], ConstSpiceDouble stdir[6], SpiceDouble a, SpiceDouble b, SpiceDouble c, SpiceDouble stx[6], SpiceBoolean * found) { surfpv_c(stvrtx,stdir,a,b,c,stx,found);}
extern DLLWRAPPER_API void SWPOOL_C(ConstSpiceChar * agent, SpiceInt nnames, SpiceInt lenvals, const void * names) { swpool_c(agent,nnames,lenvals,names);}
extern DLLWRAPPER_API void SXFORM_C(ConstSpiceChar * from, ConstSpiceChar * to, SpiceDouble et, SpiceDouble xform[6][6]) { sxform_c(from,to,et,xform);}
extern DLLWRAPPER_API void SZPOOL_C(ConstSpiceChar * name, SpiceInt * n, SpiceBoolean * found) { szpool_c(name,n,found);}
extern DLLWRAPPER_API void TERM_PL02(SpiceInt handle, ConstSpiceDLADescr * dladsc, ConstSpiceChar * trmtyp, ConstSpiceChar * source, ConstSpiceChar * target, SpiceDouble et, ConstSpiceChar * fixref, ConstSpiceChar * abcorr, ConstSpiceChar * obsrvr, SpiceInt npoints, SpiceDouble * trgepc, SpiceDouble obspos[3], SpiceDouble trmpts[][3], SpiceInt plateIDs[]) { term_pl02(handle,dladsc,trmtyp,source,target,et,fixref,abcorr,obsrvr,npoints,trgepc,obspos,trmpts,plateIDs);}
extern DLLWRAPPER_API void TERMPT_C(ConstSpiceChar * method, ConstSpiceChar * ilusrc, ConstSpiceChar * target, SpiceDouble et, ConstSpiceChar * fixref, ConstSpiceChar * abcorr, ConstSpiceChar * corloc, ConstSpiceChar * obsrvr, ConstSpiceDouble refvec[3], SpiceDouble rolstp, SpiceInt ncuts, SpiceDouble schstp, SpiceDouble soltol, SpiceInt maxn, SpiceInt npts[], SpiceDouble points[][3], SpiceDouble epochs[], SpiceDouble tangts[][3]) { termpt_c(method,ilusrc,target,et,fixref,abcorr,corloc,obsrvr,refvec,rolstp,ncuts,schstp,soltol,maxn,npts,points,epochs,tangts);}
extern DLLWRAPPER_API void TIMDEF_C(ConstSpiceChar * action, ConstSpiceChar * item, SpiceInt lenout, SpiceChar * value) { timdef_c(action,item,lenout,value);}
extern DLLWRAPPER_API void TIMOUT_C(SpiceDouble et, ConstSpiceChar * pictur, SpiceInt lenout, SpiceChar * output) { timout_c(et,pictur,lenout,output);}
extern DLLWRAPPER_API void TIPBOD_C(ConstSpiceChar * ref, SpiceInt body, SpiceDouble et, SpiceDouble tipm[3][3]) { tipbod_c(ref,body,et,tipm);}
extern DLLWRAPPER_API void TISBOD_C(ConstSpiceChar * ref, SpiceInt body, SpiceDouble et, SpiceDouble tsipm[6][6]) { tisbod_c(ref,body,et,tsipm);}
extern DLLWRAPPER_API void TPARSE_C(ConstSpiceChar * string, SpiceInt lenout, SpiceDouble * sp2000, SpiceChar * errmsg) { tparse_c(string,lenout,sp2000,errmsg);}
extern DLLWRAPPER_API void TPICTR_C(ConstSpiceChar * sample, SpiceInt lenpictur, SpiceInt lenerror, SpiceChar * pictur, SpiceBoolean * ok, SpiceChar * error) { tpictr_c(sample,lenpictur,lenerror,pictur,ok,error);}
extern DLLWRAPPER_API SpiceDouble TRACE_C(ConstSpiceDouble matrix[3][3]) {return trace_c(matrix);}
extern DLLWRAPPER_API void TRCDEP_C(SpiceInt * depth) { trcdep_c(depth);}
extern DLLWRAPPER_API void TRCNAM_C(SpiceInt index, SpiceInt namelen, SpiceChar * name) { trcnam_c(index,namelen,name);}
extern DLLWRAPPER_API void TRCOFF_C() { trcoff_c();}
extern DLLWRAPPER_API void TSETYR_C(SpiceInt year) { tsetyr_c(year);}
extern DLLWRAPPER_API SpiceDouble TWOPI_C() {return twopi_c();}
extern DLLWRAPPER_API void TWOVEC_C(ConstSpiceDouble axdef[3], SpiceInt indexa, ConstSpiceDouble plndef[3], SpiceInt indexp, SpiceDouble mout[3][3]) { twovec_c(axdef,indexa,plndef,indexp,mout);}
extern DLLWRAPPER_API SpiceDouble TYEAR_C() {return tyear_c();}
extern DLLWRAPPER_API void UCASE_C(SpiceChar * in, SpiceInt lenout, SpiceChar * out) { ucase_c(in,lenout,out);}
extern DLLWRAPPER_API void UCRSS_C(ConstSpiceDouble v1[3], ConstSpiceDouble v2[3], SpiceDouble vout[3]) { ucrss_c(v1,v2,vout);}
extern DLLWRAPPER_API void UDF_C(SpiceDouble x, SpiceDouble * value) { udf_c(x,value);}
extern DLLWRAPPER_API void UNION_C(SpiceCell * a, SpiceCell * b, SpiceCell * c) { union_c(a,b,c);}
extern DLLWRAPPER_API SpiceDouble UNITIM_C(SpiceDouble epoch, ConstSpiceChar * insys, ConstSpiceChar * outsys) {return unitim_c(epoch,insys,outsys);}
extern DLLWRAPPER_API void UNLOAD_C(ConstSpiceChar * file) { unload_c(file);}
extern DLLWRAPPER_API void UNORM_C(ConstSpiceDouble v1[3], SpiceDouble vout[3], SpiceDouble * vmag) { unorm_c(v1,vout,vmag);}
extern DLLWRAPPER_API void UNORMG_C(ConstSpiceDouble * v1, SpiceInt ndim, SpiceDouble * vout, SpiceDouble * vmag) { unormg_c(v1,ndim,vout,vmag);}
extern DLLWRAPPER_API void UTC2ET_C(ConstSpiceChar * utcstr, SpiceDouble * et) { utc2et_c(utcstr,et);}
extern DLLWRAPPER_API void VADD_C(ConstSpiceDouble v1[3], ConstSpiceDouble v2[3], SpiceDouble vout[3]) { vadd_c(v1,v2,vout);}
extern DLLWRAPPER_API void VADDG_C(ConstSpiceDouble * v1, ConstSpiceDouble * v2, SpiceInt ndim, SpiceDouble * vout) { vaddg_c(v1,v2,ndim,vout);}
extern DLLWRAPPER_API void VALID_C(SpiceInt size, SpiceInt n, SpiceCell * a) { valid_c(size,n,a);}
extern DLLWRAPPER_API void VCRSS_C(ConstSpiceDouble v1[3], ConstSpiceDouble v2[3], SpiceDouble vout[3]) { vcrss_c(v1,v2,vout);}
extern DLLWRAPPER_API SpiceDouble VDIST_C(ConstSpiceDouble v1[3], ConstSpiceDouble v2[3]) {return vdist_c(v1,v2);}
extern DLLWRAPPER_API SpiceDouble VDISTG_C(ConstSpiceDouble * v1, ConstSpiceDouble * v2, SpiceInt ndim) {return vdistg_c(v1,v2,ndim);}
extern DLLWRAPPER_API SpiceDouble VDOT_C(ConstSpiceDouble v1[3], ConstSpiceDouble v2[3]) {return vdot_c(v1,v2);}
extern DLLWRAPPER_API SpiceDouble VDOTG_C(ConstSpiceDouble * v1, ConstSpiceDouble * v2, SpiceInt ndim) {return vdotg_c(v1,v2,ndim);}
extern DLLWRAPPER_API void VEQU_C(ConstSpiceDouble vin[3], SpiceDouble vout[3]) { vequ_c(vin,vout);}
extern DLLWRAPPER_API void VEQUG_C(ConstSpiceDouble * vin, SpiceInt ndim, SpiceDouble * vout) { vequg_c(vin,ndim,vout);}
extern DLLWRAPPER_API void VHAT_C(ConstSpiceDouble v1[3], SpiceDouble vout[3]) { vhat_c(v1,vout);}
extern DLLWRAPPER_API void VHATG_C(ConstSpiceDouble * v1, SpiceInt ndim, SpiceDouble * vout) { vhatg_c(v1,ndim,vout);}
extern DLLWRAPPER_API void VLCOM3_C(SpiceDouble a, ConstSpiceDouble v1[3], SpiceDouble b, ConstSpiceDouble v2[3], SpiceDouble c, ConstSpiceDouble v3[3], SpiceDouble sum[3]) { vlcom3_c(a,v1,b,v2,c,v3,sum);}
extern DLLWRAPPER_API void VLCOM_C(SpiceDouble a, ConstSpiceDouble v1[3], SpiceDouble b, ConstSpiceDouble v2[3], SpiceDouble sum[3]) { vlcom_c(a,v1,b,v2,sum);}
extern DLLWRAPPER_API void VLCOMG_C(SpiceInt n, SpiceDouble a, ConstSpiceDouble * v1, SpiceDouble b, ConstSpiceDouble * v2, SpiceDouble * sum) { vlcomg_c(n,a,v1,b,v2,sum);}
extern DLLWRAPPER_API void VMINUG_C(ConstSpiceDouble * vin, SpiceInt ndim, SpiceDouble * vout) { vminug_c(vin,ndim,vout);}
extern DLLWRAPPER_API void VMINUS_C(ConstSpiceDouble v1[3], SpiceDouble vout[3]) { vminus_c(v1,vout);}
extern DLLWRAPPER_API SpiceDouble VNORM_C(ConstSpiceDouble v1[3]) {return vnorm_c(v1);}
extern DLLWRAPPER_API SpiceDouble VNORMG_C(ConstSpiceDouble * v1, SpiceInt ndim) {return vnormg_c(v1,ndim);}
extern DLLWRAPPER_API void VPACK_C(SpiceDouble x, SpiceDouble y, SpiceDouble z, SpiceDouble v[3]) { vpack_c(x,y,z,v);}
extern DLLWRAPPER_API void VPERP_C(ConstSpiceDouble a[3], ConstSpiceDouble b[3], SpiceDouble p[3]) { vperp_c(a,b,p);}
extern DLLWRAPPER_API void VPRJP_C(ConstSpiceDouble vin[3], ConstSpicePlane * plane, SpiceDouble vout[3]) { vprjp_c(vin,plane,vout);}
extern DLLWRAPPER_API void VPRJPI_C(ConstSpiceDouble vin[3], ConstSpicePlane * projpl, ConstSpicePlane * invpl, SpiceDouble vout[3], SpiceBoolean * found) { vprjpi_c(vin,projpl,invpl,vout,found);}
extern DLLWRAPPER_API void VPROJ_C(ConstSpiceDouble a[3], ConstSpiceDouble b[3], SpiceDouble p[3]) { vproj_c(a,b,p);}
extern DLLWRAPPER_API SpiceDouble VREL_C(ConstSpiceDouble v1[3], ConstSpiceDouble v2[3]) {return vrel_c(v1,v2);}
extern DLLWRAPPER_API SpiceDouble VRELG_C(ConstSpiceDouble * v1, ConstSpiceDouble * v2, SpiceInt ndim) {return vrelg_c(v1,v2,ndim);}
extern DLLWRAPPER_API void VROTV_C(ConstSpiceDouble v[3], ConstSpiceDouble axis[3], SpiceDouble theta, SpiceDouble r[3]) { vrotv_c(v,axis,theta,r);}
extern DLLWRAPPER_API void VSCL_C(SpiceDouble s, ConstSpiceDouble v1[3], SpiceDouble vout[3]) { vscl_c(s,v1,vout);}
extern DLLWRAPPER_API void VSCLG_C(SpiceDouble s, ConstSpiceDouble * v1, SpiceInt ndim, SpiceDouble * vout) { vsclg_c(s,v1,ndim,vout);}
extern DLLWRAPPER_API SpiceDouble VSEP_C(ConstSpiceDouble v1[3], ConstSpiceDouble v2[3]) {return vsep_c(v1,v2);}
extern DLLWRAPPER_API SpiceDouble VSEPG_C(ConstSpiceDouble * v1, ConstSpiceDouble * v2, SpiceInt ndim) {return vsepg_c(v1,v2,ndim);}
extern DLLWRAPPER_API void VSUB_C(ConstSpiceDouble v1[3], ConstSpiceDouble v2[3], SpiceDouble vout[3]) { vsub_c(v1,v2,vout);}
extern DLLWRAPPER_API void VSUBG_C(ConstSpiceDouble * v1, ConstSpiceDouble * v2, SpiceInt ndim, SpiceDouble * vout) { vsubg_c(v1,v2,ndim,vout);}
extern DLLWRAPPER_API SpiceDouble VTMV_C(ConstSpiceDouble v1[3], ConstSpiceDouble matrix[3][3], ConstSpiceDouble v2[3]) {return vtmv_c(v1,matrix,v2);}
extern DLLWRAPPER_API SpiceDouble VTMVG_C(const void * v1, const void * matrix, const void * v2, SpiceInt nrow, SpiceInt ncol) {return vtmvg_c(v1,matrix,v2,nrow,ncol);}
extern DLLWRAPPER_API void VUPACK_C(ConstSpiceDouble v[3], SpiceDouble * x, SpiceDouble * y, SpiceDouble * z) { vupack_c(v,x,y,z);}
extern DLLWRAPPER_API SpiceBoolean VZERO_C(ConstSpiceDouble v[3]) {return vzero_c(v);}
extern DLLWRAPPER_API SpiceBoolean VZEROG_C(ConstSpiceDouble * v, SpiceInt ndim) {return vzerog_c(v,ndim);}
extern DLLWRAPPER_API SpiceInt WNCARD_C(SpiceCell * window) {return wncard_c(window);}
extern DLLWRAPPER_API void WNCOMD_C(SpiceDouble left, SpiceDouble right, SpiceCell * window, SpiceCell * result) { wncomd_c(left,right,window,result);}
extern DLLWRAPPER_API void WNCOND_C(SpiceDouble left, SpiceDouble right, SpiceCell * window) { wncond_c(left,right,window);}
extern DLLWRAPPER_API void WNDIFD_C(SpiceCell * a, SpiceCell * b, SpiceCell * c) { wndifd_c(a,b,c);}
extern DLLWRAPPER_API SpiceBoolean WNELMD_C(SpiceDouble point, SpiceCell * window) {return wnelmd_c(point,window);}
extern DLLWRAPPER_API void WNEXPD_C(SpiceDouble left, SpiceDouble right, SpiceCell * window) { wnexpd_c(left,right,window);}
extern DLLWRAPPER_API void WNEXTD_C(SpiceChar side, SpiceCell * window) { wnextd_c(side,window);}
extern DLLWRAPPER_API void WNFETD_C(SpiceCell * window, SpiceInt n, SpiceDouble * left, SpiceDouble * right) { wnfetd_c(window,n,left,right);}
extern DLLWRAPPER_API void WNFILD_C(SpiceDouble sml, SpiceCell * window) { wnfild_c(sml,window);}
extern DLLWRAPPER_API void WNFLTD_C(SpiceDouble sml, SpiceCell * window) { wnfltd_c(sml,window);}
extern DLLWRAPPER_API SpiceBoolean WNINCD_C(SpiceDouble left, SpiceDouble right, SpiceCell * window) {return wnincd_c(left,right,window);}
extern DLLWRAPPER_API void WNINSD_C(SpiceDouble left, SpiceDouble right, SpiceCell * window) { wninsd_c(left,right,window);}
extern DLLWRAPPER_API void WNINTD_C(SpiceCell * a, SpiceCell * b, SpiceCell * c) { wnintd_c(a,b,c);}
extern DLLWRAPPER_API SpiceBoolean WNRELD_C(SpiceCell * a, ConstSpiceChar * op, SpiceCell * b) {return wnreld_c(a,op,b);}
extern DLLWRAPPER_API void WNSUMD_C(SpiceCell * window, SpiceDouble * meas, SpiceDouble * avg, SpiceDouble * stddev, SpiceInt * shortest, SpiceInt * longest) { wnsumd_c(window,meas,avg,stddev,shortest,longest);}
extern DLLWRAPPER_API void WNUNID_C(SpiceCell * a, SpiceCell * b, SpiceCell * c) { wnunid_c(a,b,c);}
extern DLLWRAPPER_API void WNVALD_C(SpiceInt size, SpiceInt n, SpiceCell * window) { wnvald_c(size,n,window);}
extern DLLWRAPPER_API void XF2EUL_C(ConstSpiceDouble xform[6][6], SpiceInt axisa, SpiceInt axisb, SpiceInt axisc, SpiceDouble eulang[6], SpiceBoolean * unique) { xf2eul_c(xform,axisa,axisb,axisc,eulang,unique);}
extern DLLWRAPPER_API void XF2RAV_C(ConstSpiceDouble xform[6][6], SpiceDouble rot[3][3], SpiceDouble av[3]) { xf2rav_c(xform,rot,av);}
extern DLLWRAPPER_API void XFMSTA_C(ConstSpiceDouble input_state[6], ConstSpiceChar * input_coord_sys, ConstSpiceChar * output_coord_sys, ConstSpiceChar * body, SpiceDouble output_state[6]) { xfmsta_c(input_state,input_coord_sys,output_coord_sys,body,output_state);}
extern DLLWRAPPER_API void XPOSE6_C(ConstSpiceDouble m1[6][6], SpiceDouble mout[6][6]) { xpose6_c(m1,mout);}
extern DLLWRAPPER_API void XPOSE_C(ConstSpiceDouble m1[3][3], SpiceDouble mout[3][3]) { xpose_c(m1,mout);}
extern DLLWRAPPER_API void XPOSEG_C(const void * matrix, SpiceInt nrow, SpiceInt ncol, void * xposem) { xposeg_c(matrix,nrow,ncol,xposem);}
extern DLLWRAPPER_API void ZZGETCML_C(SpiceInt * argc, SpiceChar *** argv, SpiceBoolean init) { zzgetcml_c(argc,argv,init);}
extern DLLWRAPPER_API SpiceBoolean ZZGFGETH_C() {return zzgfgeth_c();}
extern DLLWRAPPER_API void ZZGFSAVH_C(SpiceBoolean status) { zzgfsavh_c(status);}
extern DLLWRAPPER_API void ZZSYNCCL_C(SpiceTransDir xdir, SpiceCell * cell) { zzsynccl_c(xdir,cell);}
// SpiceZpr }
