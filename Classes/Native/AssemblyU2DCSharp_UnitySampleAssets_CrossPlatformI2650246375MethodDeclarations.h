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

// UnitySampleAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis
struct VirtualAxis_t675652908;
// UnitySampleAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton
struct VirtualButton_t788573693;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_UnitySampleAssets_CrossPlatformIn675652908.h"
#include "AssemblyU2DCSharp_UnitySampleAssets_CrossPlatformIn788573693.h"
#include "mscorlib_System_String968488902.h"
#include "UnityEngine_UnityEngine_Vector33525329789.h"

// System.Void UnitySampleAssets.CrossPlatformInput.CrossPlatformInputManager::.cctor()
extern "C"  void CrossPlatformInputManager__cctor_m1763808733 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnitySampleAssets.CrossPlatformInput.CrossPlatformInputManager::RegisterVirtualAxis(UnitySampleAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis)
extern "C"  void CrossPlatformInputManager_RegisterVirtualAxis_m2019364815 (Il2CppObject * __this /* static, unused */, VirtualAxis_t675652908 * ___axis0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnitySampleAssets.CrossPlatformInput.CrossPlatformInputManager::RegisterVirtualButton(UnitySampleAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton)
extern "C"  void CrossPlatformInputManager_RegisterVirtualButton_m1930158383 (Il2CppObject * __this /* static, unused */, VirtualButton_t788573693 * ___button0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnitySampleAssets.CrossPlatformInput.CrossPlatformInputManager::UnRegisterVirtualAxis(System.String)
extern "C"  void CrossPlatformInputManager_UnRegisterVirtualAxis_m2365985156 (Il2CppObject * __this /* static, unused */, String_t* ____name0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnitySampleAssets.CrossPlatformInput.CrossPlatformInputManager::UnRegisterVirtualButton(System.String)
extern "C"  void CrossPlatformInputManager_UnRegisterVirtualButton_m3364242643 (Il2CppObject * __this /* static, unused */, String_t* ___name0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnitySampleAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis UnitySampleAssets.CrossPlatformInput.CrossPlatformInputManager::VirtualAxisReference(System.String)
extern "C"  VirtualAxis_t675652908 * CrossPlatformInputManager_VirtualAxisReference_m3500660346 (Il2CppObject * __this /* static, unused */, String_t* ___name0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnitySampleAssets.CrossPlatformInput.CrossPlatformInputManager::GetAxis(System.String)
extern "C"  float CrossPlatformInputManager_GetAxis_m247330537 (Il2CppObject * __this /* static, unused */, String_t* ___name0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnitySampleAssets.CrossPlatformInput.CrossPlatformInputManager::GetAxisRaw(System.String)
extern "C"  float CrossPlatformInputManager_GetAxisRaw_m2402196049 (Il2CppObject * __this /* static, unused */, String_t* ___name0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnitySampleAssets.CrossPlatformInput.CrossPlatformInputManager::GetAxis(System.String,System.Boolean)
extern "C"  float CrossPlatformInputManager_GetAxis_m2212138356 (Il2CppObject * __this /* static, unused */, String_t* ___name0, bool ___raw1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnitySampleAssets.CrossPlatformInput.CrossPlatformInputManager::GetButton(System.String)
extern "C"  bool CrossPlatformInputManager_GetButton_m1905573600 (Il2CppObject * __this /* static, unused */, String_t* ___name0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnitySampleAssets.CrossPlatformInput.CrossPlatformInputManager::GetButtonDown(System.String)
extern "C"  bool CrossPlatformInputManager_GetButtonDown_m1109234270 (Il2CppObject * __this /* static, unused */, String_t* ___name0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnitySampleAssets.CrossPlatformInput.CrossPlatformInputManager::GetButtonUp(System.String)
extern "C"  bool CrossPlatformInputManager_GetButtonUp_m1701491461 (Il2CppObject * __this /* static, unused */, String_t* ___name0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnitySampleAssets.CrossPlatformInput.CrossPlatformInputManager::SetButtonDown(System.String)
extern "C"  void CrossPlatformInputManager_SetButtonDown_m3208376862 (Il2CppObject * __this /* static, unused */, String_t* ___name0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnitySampleAssets.CrossPlatformInput.CrossPlatformInputManager::SetButtonUp(System.String)
extern "C"  void CrossPlatformInputManager_SetButtonUp_m1109263045 (Il2CppObject * __this /* static, unused */, String_t* ___name0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnitySampleAssets.CrossPlatformInput.CrossPlatformInputManager::SetAxisPositive(System.String)
extern "C"  void CrossPlatformInputManager_SetAxisPositive_m3922646872 (Il2CppObject * __this /* static, unused */, String_t* ___name0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnitySampleAssets.CrossPlatformInput.CrossPlatformInputManager::SetAxisNegative(System.String)
extern "C"  void CrossPlatformInputManager_SetAxisNegative_m1073227164 (Il2CppObject * __this /* static, unused */, String_t* ___name0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnitySampleAssets.CrossPlatformInput.CrossPlatformInputManager::SetAxisZero(System.String)
extern "C"  void CrossPlatformInputManager_SetAxisZero_m2463794889 (Il2CppObject * __this /* static, unused */, String_t* ___name0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnitySampleAssets.CrossPlatformInput.CrossPlatformInputManager::SetAxis(System.String,System.Single)
extern "C"  void CrossPlatformInputManager_SetAxis_m1487082422 (Il2CppObject * __this /* static, unused */, String_t* ___name0, float ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnitySampleAssets.CrossPlatformInput.CrossPlatformInputManager::get_mousePosition()
extern "C"  Vector3_t3525329789  CrossPlatformInputManager_get_mousePosition_m1156444249 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnitySampleAssets.CrossPlatformInput.CrossPlatformInputManager::SetVirtualMousePositionX(System.Single)
extern "C"  void CrossPlatformInputManager_SetVirtualMousePositionX_m2976688132 (Il2CppObject * __this /* static, unused */, float ___f0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnitySampleAssets.CrossPlatformInput.CrossPlatformInputManager::SetVirtualMousePositionY(System.Single)
extern "C"  void CrossPlatformInputManager_SetVirtualMousePositionY_m2466153955 (Il2CppObject * __this /* static, unused */, float ___f0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnitySampleAssets.CrossPlatformInput.CrossPlatformInputManager::SetVirtualMousePositionZ(System.Single)
extern "C"  void CrossPlatformInputManager_SetVirtualMousePositionZ_m1955619778 (Il2CppObject * __this /* static, unused */, float ___f0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
