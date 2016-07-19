#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// UnitySampleAssets.CrossPlatformInput.PlatformSpecific.StandaloneInput
struct StandaloneInput_t278148533;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String968488902.h"
#include "UnityEngine_UnityEngine_Vector33525329789.h"

// System.Void UnitySampleAssets.CrossPlatformInput.PlatformSpecific.StandaloneInput::.ctor()
extern "C"  void StandaloneInput__ctor_m1145911780 (StandaloneInput_t278148533 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnitySampleAssets.CrossPlatformInput.PlatformSpecific.StandaloneInput::GetAxis(System.String,System.Boolean)
extern "C"  float StandaloneInput_GetAxis_m3861767328 (StandaloneInput_t278148533 * __this, String_t* ___name0, bool ___raw1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnitySampleAssets.CrossPlatformInput.PlatformSpecific.StandaloneInput::GetButton(System.String)
extern "C"  bool StandaloneInput_GetButton_m3745318756 (StandaloneInput_t278148533 * __this, String_t* ___name0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnitySampleAssets.CrossPlatformInput.PlatformSpecific.StandaloneInput::GetButtonDown(System.String)
extern "C"  bool StandaloneInput_GetButtonDown_m2577791202 (StandaloneInput_t278148533 * __this, String_t* ___name0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnitySampleAssets.CrossPlatformInput.PlatformSpecific.StandaloneInput::GetButtonUp(System.String)
extern "C"  bool StandaloneInput_GetButtonUp_m170060425 (StandaloneInput_t278148533 * __this, String_t* ___name0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnitySampleAssets.CrossPlatformInput.PlatformSpecific.StandaloneInput::SetButtonDown(System.String)
extern "C"  void StandaloneInput_SetButtonDown_m2935209098 (StandaloneInput_t278148533 * __this, String_t* ___name0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnitySampleAssets.CrossPlatformInput.PlatformSpecific.StandaloneInput::SetButtonUp(System.String)
extern "C"  void StandaloneInput_SetButtonUp_m2749200433 (StandaloneInput_t278148533 * __this, String_t* ___name0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnitySampleAssets.CrossPlatformInput.PlatformSpecific.StandaloneInput::SetAxisPositive(System.String)
extern "C"  void StandaloneInput_SetAxisPositive_m3401430724 (StandaloneInput_t278148533 * __this, String_t* ___name0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnitySampleAssets.CrossPlatformInput.PlatformSpecific.StandaloneInput::SetAxisNegative(System.String)
extern "C"  void StandaloneInput_SetAxisNegative_m552011016 (StandaloneInput_t278148533 * __this, String_t* ___name0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnitySampleAssets.CrossPlatformInput.PlatformSpecific.StandaloneInput::SetAxisZero(System.String)
extern "C"  void StandaloneInput_SetAxisZero_m4103732277 (StandaloneInput_t278148533 * __this, String_t* ___name0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnitySampleAssets.CrossPlatformInput.PlatformSpecific.StandaloneInput::SetAxis(System.String,System.Single)
extern "C"  void StandaloneInput_SetAxis_m768586274 (StandaloneInput_t278148533 * __this, String_t* ___name0, float ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnitySampleAssets.CrossPlatformInput.PlatformSpecific.StandaloneInput::MousePosition()
extern "C"  Vector3_t3525329789  StandaloneInput_MousePosition_m410303850 (StandaloneInput_t278148533 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
