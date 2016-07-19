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

// GvrProfile
struct GvrProfile_t2868291302;
// System.Single[]
struct SingleU5BU5D_t1219431280;
// System.Double[]
struct DoubleU5BU5D_t1048280995;
// System.Double[,]
struct DoubleU5BU2CU5D_t1048280996;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_GvrProfile_ScreenSizes1613396838.h"
#include "AssemblyU2DCSharp_GvrProfile_ViewerTypes2782222695.h"
#include "UnityEngine_UnityEngine_Rect1525428817.h"
#include "AssemblyU2DCSharp_GvrProfile_Distortion435440829.h"

// System.Void GvrProfile::.ctor()
extern "C"  void GvrProfile__ctor_m4276835445 (GvrProfile_t2868291302 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GvrProfile::.cctor()
extern "C"  void GvrProfile__cctor_m3250783704 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GvrProfile GvrProfile::Clone()
extern "C"  GvrProfile_t2868291302 * GvrProfile_Clone_m2183420153 (GvrProfile_t2868291302 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single GvrProfile::get_VerticalLensOffset()
extern "C"  float GvrProfile_get_VerticalLensOffset_m3829073995 (GvrProfile_t2868291302 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GvrProfile GvrProfile::GetKnownProfile(GvrProfile/ScreenSizes,GvrProfile/ViewerTypes)
extern "C"  GvrProfile_t2868291302 * GvrProfile_GetKnownProfile_m426714189 (Il2CppObject * __this /* static, unused */, int32_t ___screenSize0, int32_t ___deviceType1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GvrProfile::GetLeftEyeVisibleTanAngles(System.Single[])
extern "C"  void GvrProfile_GetLeftEyeVisibleTanAngles_m3366079383 (GvrProfile_t2868291302 * __this, SingleU5BU5D_t1219431280* ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GvrProfile::GetLeftEyeNoLensTanAngles(System.Single[])
extern "C"  void GvrProfile_GetLeftEyeNoLensTanAngles_m2923340936 (GvrProfile_t2868291302 * __this, SingleU5BU5D_t1219431280* ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rect GvrProfile::GetLeftEyeVisibleScreenRect(System.Single[])
extern "C"  Rect_t1525428817  GvrProfile_GetLeftEyeVisibleScreenRect_m3588833386 (GvrProfile_t2868291302 * __this, SingleU5BU5D_t1219431280* ___undistortedFrustum0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single GvrProfile::GetMaxRadius(System.Single[])
extern "C"  float GvrProfile_GetMaxRadius_m2075037262 (Il2CppObject * __this /* static, unused */, SingleU5BU5D_t1219431280* ___tanAngleRect0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double[] GvrProfile::solveLinear(System.Double[,],System.Double[])
extern "C"  DoubleU5BU5D_t1048280995* GvrProfile_solveLinear_m2395022164 (Il2CppObject * __this /* static, unused */, DoubleU5BU2CU5D_t1048280996* ___a0, DoubleU5BU5D_t1048280995* ___y1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double[] GvrProfile::solveLeastSquares(System.Double[,],System.Double[])
extern "C"  DoubleU5BU5D_t1048280995* GvrProfile_solveLeastSquares_m3561022076 (Il2CppObject * __this /* static, unused */, DoubleU5BU2CU5D_t1048280996* ___matA0, DoubleU5BU5D_t1048280995* ___vecY1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GvrProfile/Distortion GvrProfile::ApproximateInverse(System.Single[],System.Single,System.Int32)
extern "C"  Distortion_t435440829  GvrProfile_ApproximateInverse_m922132385 (Il2CppObject * __this /* static, unused */, SingleU5BU5D_t1219431280* ___coef0, float ___maxRadius1, int32_t ___numSamples2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GvrProfile/Distortion GvrProfile::ApproximateInverse(GvrProfile/Distortion,System.Single,System.Int32)
extern "C"  Distortion_t435440829  GvrProfile_ApproximateInverse_m1109444574 (Il2CppObject * __this /* static, unused */, Distortion_t435440829  ___distort0, float ___maxRadius1, int32_t ___numSamples2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
