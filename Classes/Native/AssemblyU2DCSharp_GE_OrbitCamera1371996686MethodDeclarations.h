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

// GE_OrbitCamera
struct GE_OrbitCamera_t1371996686;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_GE_OrbitCamera_ZoomMethod1163023028.h"

// System.Void GE_OrbitCamera::.ctor()
extern "C"  void GE_OrbitCamera__ctor_m320158285 (GE_OrbitCamera_t1371996686 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GE_OrbitCamera::Start()
extern "C"  void GE_OrbitCamera_Start_m3562263373 (GE_OrbitCamera_t1371996686 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GE_OrbitCamera::Update()
extern "C"  void GE_OrbitCamera_Update_m3061834336 (GE_OrbitCamera_t1371996686 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GE_OrbitCamera::UpdatePosition()
extern "C"  void GE_OrbitCamera_UpdatePosition_m2849694313 (GE_OrbitCamera_t1371996686 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single GE_OrbitCamera::ClampAngle(System.Single,System.Single,System.Single)
extern "C"  float GE_OrbitCamera_ClampAngle_m198587418 (Il2CppObject * __this /* static, unused */, float ___angle0, float ___min1, float ___max2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GE_OrbitCamera::SetZoomMethod(GE_OrbitCamera/ZoomMethod)
extern "C"  void GE_OrbitCamera_SetZoomMethod_m4001336348 (GE_OrbitCamera_t1371996686 * __this, int32_t ___zoomMethod0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
