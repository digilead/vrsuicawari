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

// UnitySampleAssets.Utility.CameraRefocus
struct CameraRefocus_t392674784;
// UnityEngine.Camera
struct Camera_t3533968274;
// UnityEngine.Transform
struct Transform_t284553113;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Camera3533968274.h"
#include "UnityEngine_UnityEngine_Transform284553113.h"
#include "UnityEngine_UnityEngine_Vector33525329789.h"

// System.Void UnitySampleAssets.Utility.CameraRefocus::.ctor(UnityEngine.Camera,UnityEngine.Transform,UnityEngine.Vector3)
extern "C"  void CameraRefocus__ctor_m1319605031 (CameraRefocus_t392674784 * __this, Camera_t3533968274 * ___camera0, Transform_t284553113 * ___parent1, Vector3_t3525329789  ___origCameraPos2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnitySampleAssets.Utility.CameraRefocus::ChangeCamera(UnityEngine.Camera)
extern "C"  void CameraRefocus_ChangeCamera_m3356153348 (CameraRefocus_t392674784 * __this, Camera_t3533968274 * ___camera0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnitySampleAssets.Utility.CameraRefocus::ChangeParent(UnityEngine.Transform)
extern "C"  void CameraRefocus_ChangeParent_m286410424 (CameraRefocus_t392674784 * __this, Transform_t284553113 * ___parent0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnitySampleAssets.Utility.CameraRefocus::GetFocusPoint()
extern "C"  void CameraRefocus_GetFocusPoint_m3368722341 (CameraRefocus_t392674784 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnitySampleAssets.Utility.CameraRefocus::SetFocusPoint()
extern "C"  void CameraRefocus_SetFocusPoint_m4279474865 (CameraRefocus_t392674784 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
