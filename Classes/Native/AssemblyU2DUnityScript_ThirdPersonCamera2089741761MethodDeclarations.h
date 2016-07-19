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

// ThirdPersonCamera
struct ThirdPersonCamera_t2089741761;
// UnityEngine.Transform
struct Transform_t284553113;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Transform284553113.h"
#include "UnityEngine_UnityEngine_Vector33525329789.h"

// System.Void ThirdPersonCamera::.ctor()
extern "C"  void ThirdPersonCamera__ctor_m257513973 (ThirdPersonCamera_t2089741761 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ThirdPersonCamera::Awake()
extern "C"  void ThirdPersonCamera_Awake_m495119192 (ThirdPersonCamera_t2089741761 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ThirdPersonCamera::DebugDrawStuff()
extern "C"  void ThirdPersonCamera_DebugDrawStuff_m1262650860 (ThirdPersonCamera_t2089741761 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single ThirdPersonCamera::AngleDistance(System.Single,System.Single)
extern "C"  float ThirdPersonCamera_AngleDistance_m3619017961 (ThirdPersonCamera_t2089741761 * __this, float ___a0, float ___b1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ThirdPersonCamera::Apply(UnityEngine.Transform,UnityEngine.Vector3)
extern "C"  void ThirdPersonCamera_Apply_m3634473583 (ThirdPersonCamera_t2089741761 * __this, Transform_t284553113 * ___dummyTarget0, Vector3_t3525329789  ___dummyCenter1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ThirdPersonCamera::LateUpdate()
extern "C"  void ThirdPersonCamera_LateUpdate_m2592006526 (ThirdPersonCamera_t2089741761 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ThirdPersonCamera::Cut(UnityEngine.Transform,UnityEngine.Vector3)
extern "C"  void ThirdPersonCamera_Cut_m2076631707 (ThirdPersonCamera_t2089741761 * __this, Transform_t284553113 * ___dummyTarget0, Vector3_t3525329789  ___dummyCenter1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ThirdPersonCamera::SetUpRotation(UnityEngine.Vector3,UnityEngine.Vector3)
extern "C"  void ThirdPersonCamera_SetUpRotation_m2373125022 (ThirdPersonCamera_t2089741761 * __this, Vector3_t3525329789  ___centerPos0, Vector3_t3525329789  ___headPos1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 ThirdPersonCamera::GetCenterOffset()
extern "C"  Vector3_t3525329789  ThirdPersonCamera_GetCenterOffset_m402709067 (ThirdPersonCamera_t2089741761 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ThirdPersonCamera::Main()
extern "C"  void ThirdPersonCamera_Main_m4080221224 (ThirdPersonCamera_t2089741761 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
