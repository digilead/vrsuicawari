﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// UnityEngine.Collider
struct Collider_t955670625;
// UnityEngine.Rigidbody
struct Rigidbody_t1972007546;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Bounds3518514978.h"
#include "UnityEngine_UnityEngine_Collider955670625.h"
#include "UnityEngine_UnityEngine_Ray1522967639.h"
#include "UnityEngine_UnityEngine_RaycastHit46221527.h"

// UnityEngine.Rigidbody UnityEngine.Collider::get_attachedRigidbody()
extern "C"  Rigidbody_t1972007546 * Collider_get_attachedRigidbody_m2821754842 (Collider_t955670625 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Bounds UnityEngine.Collider::get_bounds()
extern "C"  Bounds_t3518514978  Collider_get_bounds_m1050008332 (Collider_t955670625 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Collider::INTERNAL_get_bounds(UnityEngine.Bounds&)
extern "C"  void Collider_INTERNAL_get_bounds_m1269265569 (Collider_t955670625 * __this, Bounds_t3518514978 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Collider::Internal_Raycast(UnityEngine.Collider,UnityEngine.Ray,UnityEngine.RaycastHit&,System.Single)
extern "C"  bool Collider_Internal_Raycast_m2952058962 (Il2CppObject * __this /* static, unused */, Collider_t955670625 * ___col0, Ray_t1522967639  ___ray1, RaycastHit_t46221527 * ___hitInfo2, float ___maxDistance3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Collider::INTERNAL_CALL_Internal_Raycast(UnityEngine.Collider,UnityEngine.Ray&,UnityEngine.RaycastHit&,System.Single)
extern "C"  bool Collider_INTERNAL_CALL_Internal_Raycast_m2856018931 (Il2CppObject * __this /* static, unused */, Collider_t955670625 * ___col0, Ray_t1522967639 * ___ray1, RaycastHit_t46221527 * ___hitInfo2, float ___maxDistance3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Collider::Raycast(UnityEngine.Ray,UnityEngine.RaycastHit&,System.Single)
extern "C"  bool Collider_Raycast_m3774073393 (Collider_t955670625 * __this, Ray_t1522967639  ___ray0, RaycastHit_t46221527 * ___hitInfo1, float ___maxDistance2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
