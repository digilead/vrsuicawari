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

// UnitySampleAssets.CrossPlatformInput.VirtualInput
struct VirtualInput_t3444624304;
// UnitySampleAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis
struct VirtualAxis_t675652908;
// UnitySampleAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton
struct VirtualButton_t788573693;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Vector33525329789.h"
#include "AssemblyU2DCSharp_UnitySampleAssets_CrossPlatformIn675652908.h"
#include "AssemblyU2DCSharp_UnitySampleAssets_CrossPlatformIn788573693.h"
#include "mscorlib_System_String968488902.h"

// System.Void UnitySampleAssets.CrossPlatformInput.VirtualInput::.ctor()
extern "C"  void VirtualInput__ctor_m1412331393 (VirtualInput_t3444624304 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnitySampleAssets.CrossPlatformInput.VirtualInput::get_virtualMousePosition()
extern "C"  Vector3_t3525329789  VirtualInput_get_virtualMousePosition_m2614723381 (VirtualInput_t3444624304 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnitySampleAssets.CrossPlatformInput.VirtualInput::set_virtualMousePosition(UnityEngine.Vector3)
extern "C"  void VirtualInput_set_virtualMousePosition_m780308246 (VirtualInput_t3444624304 * __this, Vector3_t3525329789  ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnitySampleAssets.CrossPlatformInput.VirtualInput::RegisterVirtualAxis(UnitySampleAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis)
extern "C"  void VirtualInput_RegisterVirtualAxis_m1365609600 (VirtualInput_t3444624304 * __this, VirtualAxis_t675652908 * ___axis0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnitySampleAssets.CrossPlatformInput.VirtualInput::RegisterVirtualButton(UnitySampleAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton)
extern "C"  void VirtualInput_RegisterVirtualButton_m1697946976 (VirtualInput_t3444624304 * __this, VirtualButton_t788573693 * ___button0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnitySampleAssets.CrossPlatformInput.VirtualInput::UnRegisterVirtualAxis(System.String)
extern "C"  void VirtualInput_UnRegisterVirtualAxis_m414962547 (VirtualInput_t3444624304 * __this, String_t* ___name0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnitySampleAssets.CrossPlatformInput.VirtualInput::UnRegisterVirtualButton(System.String)
extern "C"  void VirtualInput_UnRegisterVirtualButton_m1037256450 (VirtualInput_t3444624304 * __this, String_t* ___name0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnitySampleAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis UnitySampleAssets.CrossPlatformInput.VirtualInput::VirtualAxisReference(System.String)
extern "C"  VirtualAxis_t675652908 * VirtualInput_VirtualAxisReference_m657952117 (VirtualInput_t3444624304 * __this, String_t* ___name0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnitySampleAssets.CrossPlatformInput.VirtualInput::SetVirtualMousePositionX(System.Single)
extern "C"  void VirtualInput_SetVirtualMousePositionX_m3854560181 (VirtualInput_t3444624304 * __this, float ___f0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnitySampleAssets.CrossPlatformInput.VirtualInput::SetVirtualMousePositionY(System.Single)
extern "C"  void VirtualInput_SetVirtualMousePositionY_m3344026004 (VirtualInput_t3444624304 * __this, float ___f0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnitySampleAssets.CrossPlatformInput.VirtualInput::SetVirtualMousePositionZ(System.Single)
extern "C"  void VirtualInput_SetVirtualMousePositionZ_m2833491827 (VirtualInput_t3444624304 * __this, float ___f0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
