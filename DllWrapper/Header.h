#pragma once

#include <stdio.h>
//FILE* __cdecl __iob_func(void)
//{
//    FILE _iob[] = { *stdin, *stdout, *stderr };
//    return _iob;
//}
#include "SpiceZdf.h"
#include "SpiceCel.h"
#include "SpiceDLA.h"
#include "SpiceCK.h"
#include "SpiceDSK.h"
#include "SpiceDtl.h"
#include "SpiceEK.h"
#include "SpiceEll.h"
#include "SpiceErr.h"
#include "SpiceFrm.h"
#include "SpiceGF.h"
#include "SpiceOccult.h"
#include "SpiceOsc.h"
#include "SpicePln.h"
#include "SpiceSPK.h"
#include "SpiceSrf.h"
#include "SpiceUsr.h"
#include "SpiceZad.h"
#include "SpiceZfc.h"
#include "SpiceZim.h"
#include "SpiceZmc.h"
#include "SpiceZpl.h"
#include "SpiceZpr.h"
#include "SpiceZrnm.h"
#include "SpiceZst.h"



#ifdef DLLWRAPPER_EXPORTS
#define DLLWRAPPER_API __declspec(dllexport)
#else
#define DLLWRAPPER_API __declspec(dllimport)
#endif

