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

// UnitySampleAssets.Utility.CurveControlledBob
struct CurveControlledBob_t3427460376;
// UnityEngine.Camera
struct Camera_t3533968274;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Camera3533968274.h"
#include "UnityEngine_UnityEngine_Vector33525329789.h"

// System.Void UnitySampleAssets.Utility.CurveControlledBob::.ctor()
extern "C"  void CurveControlledBob__ctor_m1861138197 (CurveControlledBob_t3427460376 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnitySampleAssets.Utility.CurveControlledBob::Setup(UnityEngine.Camera,System.Single)
extern "C"  void CurveControlledBob_Setup_m965737465 (CurveControlledBob_t3427460376 * __this, Camera_t3533968274 * ___camera0, float ___bobBaseInterval1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnitySampleAssets.Utility.CurveControlledBob::DoHeadBob(System.Single)
extern "C"  Vector3_t3525329789  CurveControlledBob_DoHeadBob_m1840315752 (CurveControlledBob_t3427460376 * __this, float ___speed0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
