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

// UnityEngine.GameObject
struct GameObject_t4012695102;
// GETween
struct GETween_t644884525;
// System.Object
struct Il2CppObject;
// System.String
struct String_t;
// GETweenItem
struct GETweenItem_t2763602144;
// System.Action`1<System.Single>
struct Action_1_t1106661726;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String968488902.h"
#include "UnityEngine_UnityEngine_GameObject4012695102.h"
#include "UnityEngine_UnityEngine_Vector33525329789.h"
#include "GETween_GETweenItem2763602144.h"

// UnityEngine.GameObject GETween::get_m_TweenEmpty()
extern "C"  GameObject_t4012695102 * GETween_get_m_TweenEmpty_m1509105679 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GETween::Init()
extern "C"  void GETween_Init_m2605954517 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GETween::Init(System.Int32)
extern "C"  void GETween_Init_m1677611942 (Il2CppObject * __this /* static, unused */, int32_t ___maxSimultaneousTweens0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GETween::Reset()
extern "C"  void GETween_Reset_m2623976268 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GETween::Update()
extern "C"  void GETween_Update_m1411882574 (GETween_t644884525 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GETween::update()
extern "C"  void GETween_update_m1347238446 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GETween::RemoveTween(System.Int32,System.Int32)
extern "C"  void GETween_RemoveTween_m321420386 (Il2CppObject * __this /* static, unused */, int32_t ___i0, int32_t ___uniqueId1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GETween::RemoveTween(System.Int32)
extern "C"  void GETween_RemoveTween_m2082421397 (Il2CppObject * __this /* static, unused */, int32_t ___i0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object GETween::SendLogError(System.String)
extern "C"  Il2CppObject * GETween_SendLogError_m875186694 (Il2CppObject * __this /* static, unused */, String_t* ___error0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GETweenItem GETween::MoreInfo()
extern "C"  GETweenItem_t2763602144 * GETween_MoreInfo_m2593037845 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GETweenItem GETween::AddTween(UnityEngine.GameObject,UnityEngine.Vector3,System.Single,GETweenItem)
extern "C"  GETweenItem_t2763602144 * GETween_AddTween_m2750561912 (Il2CppObject * __this /* static, unused */, GameObject_t4012695102 * ___gameObject0, Vector3_t3525329789  ___to1, float ___time2, GETweenItem_t2763602144 * ___tween3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GETweenItem GETween::TweenValue(UnityEngine.GameObject,System.Action`1<System.Single>,System.Single,System.Single,System.Single)
extern "C"  GETweenItem_t2763602144 * GETween_TweenValue_m2679995032 (Il2CppObject * __this /* static, unused */, GameObject_t4012695102 * ___gameObject0, Action_1_t1106661726 * ___callOnUpdate1, float ___from2, float ___to3, float ___time4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single GETween::UpdateEaseOutQuadOpt(System.Single,System.Single,System.Single)
extern "C"  float GETween_UpdateEaseOutQuadOpt_m2786964999 (Il2CppObject * __this /* static, unused */, float ___start0, float ___diff1, float ___ratioPassed2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single GETween::UpdateEaseInQuadOpt(System.Single,System.Single,System.Single)
extern "C"  float GETween_UpdateEaseInQuadOpt_m256846748 (Il2CppObject * __this /* static, unused */, float ___start0, float ___diff1, float ___ratioPassed2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single GETween::UpdateEaseInOutQuadOpt(System.Single,System.Single,System.Single)
extern "C"  float GETween_UpdateEaseInOutQuadOpt_m311188898 (Il2CppObject * __this /* static, unused */, float ___start0, float ___diff1, float ___ratioPassed2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single GETween::UpdateEaseLinear(System.Single,System.Single,System.Single)
extern "C"  float GETween_UpdateEaseLinear_m403930560 (Il2CppObject * __this /* static, unused */, float ___start0, float ___end1, float ___val2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single GETween::UpdateEaseSpring(System.Single,System.Single,System.Single)
extern "C"  float GETween_UpdateEaseSpring_m3744025048 (Il2CppObject * __this /* static, unused */, float ___start0, float ___end1, float ___val2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single GETween::UpdateEaseInQuad(System.Single,System.Single,System.Single)
extern "C"  float GETween_UpdateEaseInQuad_m3659569785 (Il2CppObject * __this /* static, unused */, float ___start0, float ___end1, float ___val2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single GETween::UpdateEaseOutQuad(System.Single,System.Single,System.Single)
extern "C"  float GETween_UpdateEaseOutQuad_m1383931886 (Il2CppObject * __this /* static, unused */, float ___start0, float ___end1, float ___val2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single GETween::UpdateEaseInOutQuad(System.Single,System.Single,System.Single)
extern "C"  float GETween_UpdateEaseInOutQuad_m125965875 (Il2CppObject * __this /* static, unused */, float ___start0, float ___end1, float ___val2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single GETween::UpdateEaseInCubic(System.Single,System.Single,System.Single)
extern "C"  float GETween_UpdateEaseInCubic_m1868468862 (Il2CppObject * __this /* static, unused */, float ___start0, float ___end1, float ___val2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single GETween::UpdateEaseOutCubic(System.Single,System.Single,System.Single)
extern "C"  float GETween_UpdateEaseOutCubic_m43170729 (Il2CppObject * __this /* static, unused */, float ___start0, float ___end1, float ___val2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single GETween::UpdateEaseInOutCubic(System.Single,System.Single,System.Single)
extern "C"  float GETween_UpdateEaseInOutCubic_m3995897348 (Il2CppObject * __this /* static, unused */, float ___start0, float ___end1, float ___val2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single GETween::UpdateEaseInQuart(System.Single,System.Single,System.Single)
extern "C"  float GETween_UpdateEaseInQuart_m1079358697 (Il2CppObject * __this /* static, unused */, float ___start0, float ___end1, float ___val2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single GETween::UpdateEaseOutQuart(System.Single,System.Single,System.Single)
extern "C"  float GETween_UpdateEaseOutQuart_m3549027860 (Il2CppObject * __this /* static, unused */, float ___start0, float ___end1, float ___val2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single GETween::UpdateEaseInOutQuart(System.Single,System.Single,System.Single)
extern "C"  float GETween_UpdateEaseInOutQuart_m3206787183 (Il2CppObject * __this /* static, unused */, float ___start0, float ___end1, float ___val2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single GETween::UpdateEaseInQuint(System.Single,System.Single,System.Single)
extern "C"  float GETween_UpdateEaseInQuint_m2710509533 (Il2CppObject * __this /* static, unused */, float ___start0, float ___end1, float ___val2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single GETween::UpdateEaseOutQuint(System.Single,System.Single,System.Single)
extern "C"  float GETween_UpdateEaseOutQuint_m885211400 (Il2CppObject * __this /* static, unused */, float ___start0, float ___end1, float ___val2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single GETween::UpdateEaseInOutQuint(System.Single,System.Single,System.Single)
extern "C"  float GETween_UpdateEaseInOutQuint_m542970723 (Il2CppObject * __this /* static, unused */, float ___start0, float ___end1, float ___val2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single GETween::UpdateEaseInSine(System.Single,System.Single,System.Single)
extern "C"  float GETween_UpdateEaseInSine_m2962263411 (Il2CppObject * __this /* static, unused */, float ___start0, float ___end1, float ___val2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single GETween::UpdateEaseOutSine(System.Single,System.Single,System.Single)
extern "C"  float GETween_UpdateEaseOutSine_m686625512 (Il2CppObject * __this /* static, unused */, float ___start0, float ___end1, float ___val2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single GETween::UpdateEaseInOutSine(System.Single,System.Single,System.Single)
extern "C"  float GETween_UpdateEaseInOutSine_m3723626797 (Il2CppObject * __this /* static, unused */, float ___start0, float ___end1, float ___val2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single GETween::UpdateEaseInExpo(System.Single,System.Single,System.Single)
extern "C"  float GETween_UpdateEaseInExpo_m4100023534 (Il2CppObject * __this /* static, unused */, float ___start0, float ___end1, float ___val2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single GETween::UpdateEaseOutExpo(System.Single,System.Single,System.Single)
extern "C"  float GETween_UpdateEaseOutExpo_m1824385635 (Il2CppObject * __this /* static, unused */, float ___start0, float ___end1, float ___val2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single GETween::UpdateEaseInOutExpo(System.Single,System.Single,System.Single)
extern "C"  float GETween_UpdateEaseInOutExpo_m566419624 (Il2CppObject * __this /* static, unused */, float ___start0, float ___end1, float ___val2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single GETween::UpdateEaseInCirc(System.Single,System.Single,System.Single)
extern "C"  float GETween_UpdateEaseInCirc_m1033396393 (Il2CppObject * __this /* static, unused */, float ___start0, float ___end1, float ___val2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single GETween::UpdateEaseOutCirc(System.Single,System.Single,System.Single)
extern "C"  float GETween_UpdateEaseOutCirc_m3052725790 (Il2CppObject * __this /* static, unused */, float ___start0, float ___end1, float ___val2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single GETween::UpdateEaseInOutCirc(System.Single,System.Single,System.Single)
extern "C"  float GETween_UpdateEaseInOutCirc_m1794759779 (Il2CppObject * __this /* static, unused */, float ___start0, float ___end1, float ___val2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single GETween::UpdateEaseInBounce(System.Single,System.Single,System.Single)
extern "C"  float GETween_UpdateEaseInBounce_m1867457432 (Il2CppObject * __this /* static, unused */, float ___start0, float ___end1, float ___val2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single GETween::UpdateEaseOutBounce(System.Single,System.Single,System.Single)
extern "C"  float GETween_UpdateEaseOutBounce_m1117790157 (Il2CppObject * __this /* static, unused */, float ___start0, float ___end1, float ___val2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single GETween::UpdateEaseInOutBounce(System.Single,System.Single,System.Single)
extern "C"  float GETween_UpdateEaseInOutBounce_m3393231058 (Il2CppObject * __this /* static, unused */, float ___start0, float ___end1, float ___val2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single GETween::UpdateEaseInBack(System.Single,System.Single,System.Single)
extern "C"  float GETween_UpdateEaseInBack_m72987353 (Il2CppObject * __this /* static, unused */, float ___start0, float ___end1, float ___val2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single GETween::UpdateEaseOutBack(System.Single,System.Single,System.Single)
extern "C"  float GETween_UpdateEaseOutBack_m2092316750 (Il2CppObject * __this /* static, unused */, float ___start0, float ___end1, float ___val2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single GETween::UpdateEaseInOutBack(System.Single,System.Single,System.Single)
extern "C"  float GETween_UpdateEaseInOutBack_m834350739 (Il2CppObject * __this /* static, unused */, float ___start0, float ___end1, float ___val2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single GETween::UpdateEaseInElastic(System.Single,System.Single,System.Single)
extern "C"  float GETween_UpdateEaseInElastic_m1138515219 (Il2CppObject * __this /* static, unused */, float ___start0, float ___end1, float ___val2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single GETween::UpdateEaseOutElastic(System.Single,System.Single,System.Single)
extern "C"  float GETween_UpdateEaseOutElastic_m3668633470 (Il2CppObject * __this /* static, unused */, float ___start0, float ___end1, float ___val2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single GETween::UpdateEaseInOutElastic(System.Single,System.Single,System.Single)
extern "C"  float GETween_UpdateEaseInOutElastic_m1192857369 (Il2CppObject * __this /* static, unused */, float ___start0, float ___end1, float ___val2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GETween::.ctor()
extern "C"  void GETween__ctor_m682576031 (GETween_t644884525 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GETween::.cctor()
extern "C"  void GETween__cctor_m3497891566 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
