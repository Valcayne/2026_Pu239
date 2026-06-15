// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME dIhomedIvictor93dICmExperimentFolderdI2026_Pu239dI2026_Pu239dIPlots01_VictordIPlot2DHisto_cc_ACLiC_dict
#define R__NO_DEPRECATION

/*******************************************************************/
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>
#define G__DICTIONARY
#include "ROOT/RConfig.hxx"
#include "TClass.h"
#include "TDictAttributeMap.h"
#include "TInterpreter.h"
#include "TROOT.h"
#include "TBuffer.h"
#include "TMemberInspector.h"
#include "TInterpreter.h"
#include "TVirtualMutex.h"
#include "TError.h"

#ifndef G__ROOT
#define G__ROOT
#endif

#include "RtypesImp.h"
#include "TIsAProxy.h"
#include "TFileMergeInfo.h"
#include <algorithm>
#include "TCollectionProxyInfo.h"
/*******************************************************************/

#include "TDataMember.h"

// The generated code does not explicitly qualify STL entities
namespace std {} using namespace std;

// Header files passed as explicit arguments
#include "/home/victor93/CmExperimentFolder/2026_Pu239/2026_Pu239/Plots01_Victor/./Plot2DHisto.cc"

// Header files passed via #pragma extra_include

namespace {
  void TriggerDictionaryInitialization_Plot2DHisto_cc_ACLiC_dict_Impl() {
    static const char* headers[] = {
"./Plot2DHisto.cc",
nullptr
    };
    static const char* includePaths[] = {
"/home/victor93/Programs/root_v6.30.06/root_v6.30.06.Linux-ubuntu20.04-x86_64-gcc9.4/root/include",
"/home/victor93/Programs/root_v6.30.06/root_v6.30.06.Linux-ubuntu20.04-x86_64-gcc9.4/root/etc/",
"/home/victor93/Programs/root_v6.30.06/root_v6.30.06.Linux-ubuntu20.04-x86_64-gcc9.4/root/etc//cling",
"/home/victor93/Programs/root_v6.30.06/root_v6.30.06.Linux-ubuntu20.04-x86_64-gcc9.4/root/etc//cling/plugins/include",
"/home/victor93/Programs/root_v6.30.06/root_v6.30.06.Linux-ubuntu20.04-x86_64-gcc9.4/root/include/",
"/home/victor93/Programs/root_v6.30.06/root_v6.30.06.Linux-ubuntu20.04-x86_64-gcc9.4/root/include",
"/home/victor93/Programs/root_v6.30.06/root_v6.30.06.Linux-ubuntu20.04-x86_64-gcc9.4/root/include/",
"/home/victor93/CmExperimentFolder/2026_Pu239/2026_Pu239/Plots01_Victor/",
nullptr
    };
    static const char* fwdDeclCode = R"DICTFWDDCLS(
#line 1 "Plot2DHisto_cc_ACLiC_dict dictionary forward declarations' payload"
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_AutoLoading_Map;
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "Plot2DHisto_cc_ACLiC_dict dictionary payload"

#ifndef __ACLIC__
  #define __ACLIC__ 1
#endif

#define _BACKWARD_BACKWARD_WARNING_H
// Inline headers
#include "./Plot2DHisto.cc"

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[] = {
"Plot2DHisto", payloadCode, "@",
"plot2D", payloadCode, "@",
"plot2DChangeGainWithSourceAllDets", payloadCode, "@",
"plot2DChangeGainWithSources", payloadCode, "@",
"plot2DCheckCalibrations", payloadCode, "@",
"plot2DCheckCalibrationsAllDets", payloadCode, "@",
"plot2DVariousCompareWithOneRun", payloadCode, "@",
"plot2DVariousCompareWithRunType", payloadCode, "@",
nullptr
};
    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("Plot2DHisto_cc_ACLiC_dict",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_Plot2DHisto_cc_ACLiC_dict_Impl, {}, classesHeaders, /*hasCxxModule*/false);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_Plot2DHisto_cc_ACLiC_dict_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_Plot2DHisto_cc_ACLiC_dict() {
  TriggerDictionaryInitialization_Plot2DHisto_cc_ACLiC_dict_Impl();
}
