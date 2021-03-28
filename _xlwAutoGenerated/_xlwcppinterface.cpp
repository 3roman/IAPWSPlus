//// 
//// Autogenerated by xlw 
//// Do not edit this file, it will be overwritten 
//// by InterfaceGenerator 
////

#include "xlw/MyContainers.h"
#include <xlw/CellMatrix.h>
#include "..\cppinterface.h"
#include <xlw/xlw.h>
#include <xlw/XlFunctionRegistration.h>
#include <stdexcept>
#include <xlw/XlOpenClose.h>
#include <xlw/HiResTimer.h>
using namespace xlw;

namespace {
const char* LibraryName = "ThermalLibrary";
};


// registrations start here


namespace
{
XLRegistration::Arg
P_HGArgs[]=
{
{ "P","too lazy to comment this one ","B"}
};
  XLRegistration::XLFunctionRegistrationHelper
registerP_HG("xlP_HG",
"P_HG",
"too lazy to comment this function ",
LibraryName,
P_HGArgs,
1
,false
,false
,""
,""
,false
,false
,false
);
}



extern "C"
{
LPXLFOPER EXCEL_EXPORT
xlP_HG(
double P)
{
EXCEL_BEGIN;

	if (XlfExcel::Instance().IsCalledByFuncWiz())
		return XlfOper(true);


double result(
	P_HG(
		P)
	);
return XlfOper(result);
EXCEL_END
}
}



//////////////////////////

namespace
{
XLRegistration::Arg
P_HLArgs[]=
{
{ "P","too lazy to comment this one ","B"}
};
  XLRegistration::XLFunctionRegistrationHelper
registerP_HL("xlP_HL",
"P_HL",
"too lazy to comment this function ",
LibraryName,
P_HLArgs,
1
,false
,false
,""
,""
,false
,false
,false
);
}



extern "C"
{
LPXLFOPER EXCEL_EXPORT
xlP_HL(
double P)
{
EXCEL_BEGIN;

	if (XlfExcel::Instance().IsCalledByFuncWiz())
		return XlfOper(true);


double result(
	P_HL(
		P)
	);
return XlfOper(result);
EXCEL_END
}
}



//////////////////////////

namespace
{
XLRegistration::Arg
P_SGArgs[]=
{
{ "P","too lazy to comment this one ","B"}
};
  XLRegistration::XLFunctionRegistrationHelper
registerP_SG("xlP_SG",
"P_SG",
"too lazy to comment this function ",
LibraryName,
P_SGArgs,
1
,false
,false
,""
,""
,false
,false
,false
);
}



extern "C"
{
LPXLFOPER EXCEL_EXPORT
xlP_SG(
double P)
{
EXCEL_BEGIN;

	if (XlfExcel::Instance().IsCalledByFuncWiz())
		return XlfOper(true);


double result(
	P_SG(
		P)
	);
return XlfOper(result);
EXCEL_END
}
}



//////////////////////////

namespace
{
XLRegistration::Arg
P_SLArgs[]=
{
{ "P","too lazy to comment this one ","B"}
};
  XLRegistration::XLFunctionRegistrationHelper
registerP_SL("xlP_SL",
"P_SL",
"too lazy to comment this function ",
LibraryName,
P_SLArgs,
1
,false
,false
,""
,""
,false
,false
,false
);
}



extern "C"
{
LPXLFOPER EXCEL_EXPORT
xlP_SL(
double P)
{
EXCEL_BEGIN;

	if (XlfExcel::Instance().IsCalledByFuncWiz())
		return XlfOper(true);


double result(
	P_SL(
		P)
	);
return XlfOper(result);
EXCEL_END
}
}



//////////////////////////

namespace
{
XLRegistration::Arg
P_TArgs[]=
{
{ "P","too lazy to comment this one ","B"}
};
  XLRegistration::XLFunctionRegistrationHelper
registerP_T("xlP_T",
"P_T",
"too lazy to comment this function ",
LibraryName,
P_TArgs,
1
,false
,false
,""
,""
,false
,false
,false
);
}



extern "C"
{
LPXLFOPER EXCEL_EXPORT
xlP_T(
double P)
{
EXCEL_BEGIN;

	if (XlfExcel::Instance().IsCalledByFuncWiz())
		return XlfOper(true);


double result(
	P_T(
		P)
	);
return XlfOper(result);
EXCEL_END
}
}



//////////////////////////

namespace
{
XLRegistration::Arg
P_VGArgs[]=
{
{ "P","too lazy to comment this one ","B"}
};
  XLRegistration::XLFunctionRegistrationHelper
registerP_VG("xlP_VG",
"P_VG",
"too lazy to comment this function ",
LibraryName,
P_VGArgs,
1
,false
,false
,""
,""
,false
,false
,false
);
}



extern "C"
{
LPXLFOPER EXCEL_EXPORT
xlP_VG(
double P)
{
EXCEL_BEGIN;

	if (XlfExcel::Instance().IsCalledByFuncWiz())
		return XlfOper(true);


double result(
	P_VG(
		P)
	);
return XlfOper(result);
EXCEL_END
}
}



//////////////////////////

namespace
{
XLRegistration::Arg
P_VLArgs[]=
{
{ "P","too lazy to comment this one ","B"}
};
  XLRegistration::XLFunctionRegistrationHelper
registerP_VL("xlP_VL",
"P_VL",
"too lazy to comment this function ",
LibraryName,
P_VLArgs,
1
,false
,false
,""
,""
,false
,false
,false
);
}



extern "C"
{
LPXLFOPER EXCEL_EXPORT
xlP_VL(
double P)
{
EXCEL_BEGIN;

	if (XlfExcel::Instance().IsCalledByFuncWiz())
		return XlfOper(true);


double result(
	P_VL(
		P)
	);
return XlfOper(result);
EXCEL_END
}
}



//////////////////////////

namespace
{
XLRegistration::Arg
PH_SArgs[]=
{
{ "P","too lazy to comment this one ","B"},
{ "H","too lazy to comment this one ","B"}
};
  XLRegistration::XLFunctionRegistrationHelper
registerPH_S("xlPH_S",
"PH_S",
"too lazy to comment this function ",
LibraryName,
PH_SArgs,
2
,false
,false
,""
,""
,false
,false
,false
);
}



extern "C"
{
LPXLFOPER EXCEL_EXPORT
xlPH_S(
double P,
double H)
{
EXCEL_BEGIN;

	if (XlfExcel::Instance().IsCalledByFuncWiz())
		return XlfOper(true);



double result(
	PH_S(
		P,
		H)
	);
return XlfOper(result);
EXCEL_END
}
}



//////////////////////////

namespace
{
XLRegistration::Arg
PH_TArgs[]=
{
{ "P","too lazy to comment this one ","B"},
{ "H","too lazy to comment this one ","B"}
};
  XLRegistration::XLFunctionRegistrationHelper
registerPH_T("xlPH_T",
"PH_T",
"too lazy to comment this function ",
LibraryName,
PH_TArgs,
2
,false
,false
,""
,""
,false
,false
,false
);
}



extern "C"
{
LPXLFOPER EXCEL_EXPORT
xlPH_T(
double P,
double H)
{
EXCEL_BEGIN;

	if (XlfExcel::Instance().IsCalledByFuncWiz())
		return XlfOper(true);



double result(
	PH_T(
		P,
		H)
	);
return XlfOper(result);
EXCEL_END
}
}



//////////////////////////

namespace
{
XLRegistration::Arg
PH_VArgs[]=
{
{ "P","too lazy to comment this one ","B"},
{ "H","too lazy to comment this one ","B"}
};
  XLRegistration::XLFunctionRegistrationHelper
registerPH_V("xlPH_V",
"PH_V",
"too lazy to comment this function ",
LibraryName,
PH_VArgs,
2
,false
,false
,""
,""
,false
,false
,false
);
}



extern "C"
{
LPXLFOPER EXCEL_EXPORT
xlPH_V(
double P,
double H)
{
EXCEL_BEGIN;

	if (XlfExcel::Instance().IsCalledByFuncWiz())
		return XlfOper(true);



double result(
	PH_V(
		P,
		H)
	);
return XlfOper(result);
EXCEL_END
}
}



//////////////////////////

namespace
{
XLRegistration::Arg
PS_HArgs[]=
{
{ "P","too lazy to comment this one ","B"},
{ "S","too lazy to comment this one ","B"}
};
  XLRegistration::XLFunctionRegistrationHelper
registerPS_H("xlPS_H",
"PS_H",
"too lazy to comment this function ",
LibraryName,
PS_HArgs,
2
,false
,false
,""
,""
,false
,false
,false
);
}



extern "C"
{
LPXLFOPER EXCEL_EXPORT
xlPS_H(
double P,
double S)
{
EXCEL_BEGIN;

	if (XlfExcel::Instance().IsCalledByFuncWiz())
		return XlfOper(true);



double result(
	PS_H(
		P,
		S)
	);
return XlfOper(result);
EXCEL_END
}
}



//////////////////////////

namespace
{
XLRegistration::Arg
PS_TArgs[]=
{
{ "P","too lazy to comment this one ","B"},
{ "S","too lazy to comment this one ","B"}
};
  XLRegistration::XLFunctionRegistrationHelper
registerPS_T("xlPS_T",
"PS_T",
"too lazy to comment this function ",
LibraryName,
PS_TArgs,
2
,false
,false
,""
,""
,false
,false
,false
);
}



extern "C"
{
LPXLFOPER EXCEL_EXPORT
xlPS_T(
double P,
double S)
{
EXCEL_BEGIN;

	if (XlfExcel::Instance().IsCalledByFuncWiz())
		return XlfOper(true);



double result(
	PS_T(
		P,
		S)
	);
return XlfOper(result);
EXCEL_END
}
}



//////////////////////////

namespace
{
XLRegistration::Arg
PS_VArgs[]=
{
{ "P","too lazy to comment this one ","B"},
{ "S","too lazy to comment this one ","B"}
};
  XLRegistration::XLFunctionRegistrationHelper
registerPS_V("xlPS_V",
"PS_V",
"too lazy to comment this function ",
LibraryName,
PS_VArgs,
2
,false
,false
,""
,""
,false
,false
,false
);
}



extern "C"
{
LPXLFOPER EXCEL_EXPORT
xlPS_V(
double P,
double S)
{
EXCEL_BEGIN;

	if (XlfExcel::Instance().IsCalledByFuncWiz())
		return XlfOper(true);



double result(
	PS_V(
		P,
		S)
	);
return XlfOper(result);
EXCEL_END
}
}



//////////////////////////

namespace
{
XLRegistration::Arg
PT_HArgs[]=
{
{ "P","too lazy to comment this one ","B"},
{ "T","too lazy to comment this one ","B"}
};
  XLRegistration::XLFunctionRegistrationHelper
registerPT_H("xlPT_H",
"PT_H",
"too lazy to comment this function ",
LibraryName,
PT_HArgs,
2
,false
,false
,""
,""
,false
,false
,false
);
}



extern "C"
{
LPXLFOPER EXCEL_EXPORT
xlPT_H(
double P,
double T)
{
EXCEL_BEGIN;

	if (XlfExcel::Instance().IsCalledByFuncWiz())
		return XlfOper(true);



double result(
	PT_H(
		P,
		T)
	);
return XlfOper(result);
EXCEL_END
}
}



//////////////////////////

namespace
{
XLRegistration::Arg
PT_SArgs[]=
{
{ "P","too lazy to comment this one ","B"},
{ "T","too lazy to comment this one ","B"}
};
  XLRegistration::XLFunctionRegistrationHelper
registerPT_S("xlPT_S",
"PT_S",
"too lazy to comment this function ",
LibraryName,
PT_SArgs,
2
,false
,false
,""
,""
,false
,false
,false
);
}



extern "C"
{
LPXLFOPER EXCEL_EXPORT
xlPT_S(
double P,
double T)
{
EXCEL_BEGIN;

	if (XlfExcel::Instance().IsCalledByFuncWiz())
		return XlfOper(true);



double result(
	PT_S(
		P,
		T)
	);
return XlfOper(result);
EXCEL_END
}
}



//////////////////////////

namespace
{
XLRegistration::Arg
PT_VArgs[]=
{
{ "P","too lazy to comment this one ","B"},
{ "T","too lazy to comment this one ","B"}
};
  XLRegistration::XLFunctionRegistrationHelper
registerPT_V("xlPT_V",
"PT_V",
"too lazy to comment this function ",
LibraryName,
PT_VArgs,
2
,false
,false
,""
,""
,false
,false
,false
);
}



extern "C"
{
LPXLFOPER EXCEL_EXPORT
xlPT_V(
double P,
double T)
{
EXCEL_BEGIN;

	if (XlfExcel::Instance().IsCalledByFuncWiz())
		return XlfOper(true);



double result(
	PT_V(
		P,
		T)
	);
return XlfOper(result);
EXCEL_END
}
}



//////////////////////////

namespace
{
XLRegistration::Arg
T_HGArgs[]=
{
{ "T","too lazy to comment this one ","B"}
};
  XLRegistration::XLFunctionRegistrationHelper
registerT_HG("xlT_HG",
"T_HG",
"too lazy to comment this function ",
LibraryName,
T_HGArgs,
1
,false
,false
,""
,""
,false
,false
,false
);
}



extern "C"
{
LPXLFOPER EXCEL_EXPORT
xlT_HG(
double T)
{
EXCEL_BEGIN;

	if (XlfExcel::Instance().IsCalledByFuncWiz())
		return XlfOper(true);


double result(
	T_HG(
		T)
	);
return XlfOper(result);
EXCEL_END
}
}



//////////////////////////

namespace
{
XLRegistration::Arg
T_HLArgs[]=
{
{ "T","too lazy to comment this one ","B"}
};
  XLRegistration::XLFunctionRegistrationHelper
registerT_HL("xlT_HL",
"T_HL",
"too lazy to comment this function ",
LibraryName,
T_HLArgs,
1
,false
,false
,""
,""
,false
,false
,false
);
}



extern "C"
{
LPXLFOPER EXCEL_EXPORT
xlT_HL(
double T)
{
EXCEL_BEGIN;

	if (XlfExcel::Instance().IsCalledByFuncWiz())
		return XlfOper(true);


double result(
	T_HL(
		T)
	);
return XlfOper(result);
EXCEL_END
}
}



//////////////////////////

namespace
{
XLRegistration::Arg
T_PArgs[]=
{
{ "T","too lazy to comment this one ","B"}
};
  XLRegistration::XLFunctionRegistrationHelper
registerT_P("xlT_P",
"T_P",
"too lazy to comment this function ",
LibraryName,
T_PArgs,
1
,false
,false
,""
,""
,false
,false
,false
);
}



extern "C"
{
LPXLFOPER EXCEL_EXPORT
xlT_P(
double T)
{
EXCEL_BEGIN;

	if (XlfExcel::Instance().IsCalledByFuncWiz())
		return XlfOper(true);


double result(
	T_P(
		T)
	);
return XlfOper(result);
EXCEL_END
}
}



//////////////////////////

namespace
{
XLRegistration::Arg
T_SGArgs[]=
{
{ "T","too lazy to comment this one ","B"}
};
  XLRegistration::XLFunctionRegistrationHelper
registerT_SG("xlT_SG",
"T_SG",
"too lazy to comment this function ",
LibraryName,
T_SGArgs,
1
,false
,false
,""
,""
,false
,false
,false
);
}



extern "C"
{
LPXLFOPER EXCEL_EXPORT
xlT_SG(
double T)
{
EXCEL_BEGIN;

	if (XlfExcel::Instance().IsCalledByFuncWiz())
		return XlfOper(true);


double result(
	T_SG(
		T)
	);
return XlfOper(result);
EXCEL_END
}
}



//////////////////////////

namespace
{
XLRegistration::Arg
T_SLArgs[]=
{
{ "T","too lazy to comment this one ","B"}
};
  XLRegistration::XLFunctionRegistrationHelper
registerT_SL("xlT_SL",
"T_SL",
"too lazy to comment this function ",
LibraryName,
T_SLArgs,
1
,false
,false
,""
,""
,false
,false
,false
);
}



extern "C"
{
LPXLFOPER EXCEL_EXPORT
xlT_SL(
double T)
{
EXCEL_BEGIN;

	if (XlfExcel::Instance().IsCalledByFuncWiz())
		return XlfOper(true);


double result(
	T_SL(
		T)
	);
return XlfOper(result);
EXCEL_END
}
}



//////////////////////////

namespace
{
XLRegistration::Arg
T_VGArgs[]=
{
{ "T","too lazy to comment this one ","B"}
};
  XLRegistration::XLFunctionRegistrationHelper
registerT_VG("xlT_VG",
"T_VG",
"too lazy to comment this function ",
LibraryName,
T_VGArgs,
1
,false
,false
,""
,""
,false
,false
,false
);
}



extern "C"
{
LPXLFOPER EXCEL_EXPORT
xlT_VG(
double T)
{
EXCEL_BEGIN;

	if (XlfExcel::Instance().IsCalledByFuncWiz())
		return XlfOper(true);


double result(
	T_VG(
		T)
	);
return XlfOper(result);
EXCEL_END
}
}



//////////////////////////

namespace
{
XLRegistration::Arg
T_VLArgs[]=
{
{ "T","too lazy to comment this one ","B"}
};
  XLRegistration::XLFunctionRegistrationHelper
registerT_VL("xlT_VL",
"T_VL",
"too lazy to comment this function ",
LibraryName,
T_VLArgs,
1
,false
,false
,""
,""
,false
,false
,false
);
}



extern "C"
{
LPXLFOPER EXCEL_EXPORT
xlT_VL(
double T)
{
EXCEL_BEGIN;

	if (XlfExcel::Instance().IsCalledByFuncWiz())
		return XlfOper(true);


double result(
	T_VL(
		T)
	);
return XlfOper(result);
EXCEL_END
}
}



//////////////////////////

namespace
{
XLRegistration::Arg
SolveExtractionEnthalpyArgs[]=
{
{ "p1","too lazy to comment this one ","B"},
{ "t1","too lazy to comment this one ","B"},
{ "p2","too lazy to comment this one ","B"},
{ "eta","too lazy to comment this one ","B"}
};
  XLRegistration::XLFunctionRegistrationHelper
registerSolveExtractionEnthalpy("xlSolveExtractionEnthalpy",
"SolveExtractionEnthalpy",
"too lazy to comment this function ",
LibraryName,
SolveExtractionEnthalpyArgs,
4
,false
,false
,""
,""
,false
,false
,false
);
}



extern "C"
{
LPXLFOPER EXCEL_EXPORT
xlSolveExtractionEnthalpy(
double p1,
double t1,
double p2,
double eta)
{
EXCEL_BEGIN;

	if (XlfExcel::Instance().IsCalledByFuncWiz())
		return XlfOper(true);





double result(
	SolveExtractionEnthalpy(
		p1,
		t1,
		p2,
		eta)
	);
return XlfOper(result);
EXCEL_END
}
}



//////////////////////////

namespace
{
XLRegistration::Arg
SolveExtractionTemperatureArgs[]=
{
{ "p1","too lazy to comment this one ","B"},
{ "t1","too lazy to comment this one ","B"},
{ "p2","too lazy to comment this one ","B"},
{ "eta","too lazy to comment this one ","B"}
};
  XLRegistration::XLFunctionRegistrationHelper
registerSolveExtractionTemperature("xlSolveExtractionTemperature",
"SolveExtractionTemperature",
"too lazy to comment this function ",
LibraryName,
SolveExtractionTemperatureArgs,
4
,false
,false
,""
,""
,false
,false
,false
);
}



extern "C"
{
LPXLFOPER EXCEL_EXPORT
xlSolveExtractionTemperature(
double p1,
double t1,
double p2,
double eta)
{
EXCEL_BEGIN;

	if (XlfExcel::Instance().IsCalledByFuncWiz())
		return XlfOper(true);





double result(
	SolveExtractionTemperature(
		p1,
		t1,
		p2,
		eta)
	);
return XlfOper(result);
EXCEL_END
}
}



//////////////////////////

//////////////////////////
// Methods that will get registered to execute in AutoOpen
//////////////////////////

//////////////////////////
// Methods that will get registered to execute in AutoClose
//////////////////////////

