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

// UnityEngine.RaycastHit[]
struct RaycastHitU5BU5D_t1365728750;
// UnityEngine.Collider[]
struct ColliderU5BU5D_t1585173756;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Vector33525329789.h"
#include "UnityEngine_UnityEngine_RaycastHit46221527.h"
#include "UnityEngine_UnityEngine_QueryTriggerInteraction4085533775.h"
#include "UnityEngine_UnityEngine_Ray1522967639.h"

// UnityEngine.Vector3 UnityEngine.Physics::get_gravity()
extern "C"  Vector3_t3525329789  Physics_get_gravity_m2907531023 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Physics::INTERNAL_get_gravity(UnityEngine.Vector3&)
extern "C"  void Physics_INTERNAL_get_gravity_m3320492712 (Il2CppObject * __this /* static, unused */, Vector3_t3525329789 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Physics::Raycast(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.RaycastHit&,System.Single)
extern "C"  bool Physics_Raycast_m395141497 (Il2CppObject * __this /* static, unused */, Vector3_t3525329789  ___origin0, Vector3_t3525329789  ___direction1, RaycastHit_t46221527 * ___hitInfo2, float ___maxDistance3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Physics::Raycast(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.RaycastHit&)
extern "C"  bool Physics_Raycast_m2482317716 (Il2CppObject * __this /* static, unused */, Vector3_t3525329789  ___origin0, Vector3_t3525329789  ___direction1, RaycastHit_t46221527 * ___hitInfo2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Physics::Raycast(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.RaycastHit&,System.Single,System.Int32,UnityEngine.QueryTriggerInteraction)
extern "C"  bool Physics_Raycast_m1758069759 (Il2CppObject * __this /* static, unused */, Vector3_t3525329789  ___origin0, Vector3_t3525329789  ___direction1, RaycastHit_t46221527 * ___hitInfo2, float ___maxDistance3, int32_t ___layerMask4, int32_t ___queryTriggerInteraction5, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Physics::Raycast(UnityEngine.Ray,UnityEngine.RaycastHit&,System.Single,System.Int32)
extern "C"  bool Physics_Raycast_m1600345803 (Il2CppObject * __this /* static, unused */, Ray_t1522967639  ___ray0, RaycastHit_t46221527 * ___hitInfo1, float ___maxDistance2, int32_t ___layerMask3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Physics::Raycast(UnityEngine.Ray,UnityEngine.RaycastHit&,System.Single)
extern "C"  bool Physics_Raycast_m1235528076 (Il2CppObject * __this /* static, unused */, Ray_t1522967639  ___ray0, RaycastHit_t46221527 * ___hitInfo1, float ___maxDistance2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Physics::Raycast(UnityEngine.Ray,UnityEngine.RaycastHit&)
extern "C"  bool Physics_Raycast_m1343340263 (Il2CppObject * __this /* static, unused */, Ray_t1522967639  ___ray0, RaycastHit_t46221527 * ___hitInfo1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Physics::Raycast(UnityEngine.Ray,UnityEngine.RaycastHit&,System.Single,System.Int32,UnityEngine.QueryTriggerInteraction)
extern "C"  bool Physics_Raycast_m165875788 (Il2CppObject * __this /* static, unused */, Ray_t1522967639  ___ray0, RaycastHit_t46221527 * ___hitInfo1, float ___maxDistance2, int32_t ___layerMask3, int32_t ___queryTriggerInteraction4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.RaycastHit[] UnityEngine.Physics::RaycastAll(UnityEngine.Ray,System.Single,System.Int32)
extern "C"  RaycastHitU5BU5D_t1365728750* Physics_RaycastAll_m1771931441 (Il2CppObject * __this /* static, unused */, Ray_t1522967639  ___ray0, float ___maxDistance1, int32_t ___layerMask2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.RaycastHit[] UnityEngine.Physics::RaycastAll(UnityEngine.Ray,System.Single,System.Int32,UnityEngine.QueryTriggerInteraction)
extern "C"  RaycastHitU5BU5D_t1365728750* Physics_RaycastAll_m1269007794 (Il2CppObject * __this /* static, unused */, Ray_t1522967639  ___ray0, float ___maxDistance1, int32_t ___layerMask2, int32_t ___queryTriggerInteraction3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.RaycastHit[] UnityEngine.Physics::RaycastAll(UnityEngine.Vector3,UnityEngine.Vector3,System.Single,System.Int32,UnityEngine.QueryTriggerInteraction)
extern "C"  RaycastHitU5BU5D_t1365728750* Physics_RaycastAll_m892728677 (Il2CppObject * __this /* static, unused */, Vector3_t3525329789  ___origin0, Vector3_t3525329789  ___direction1, float ___maxDistance2, int32_t ___layermask3, int32_t ___queryTriggerInteraction4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.RaycastHit[] UnityEngine.Physics::RaycastAll(UnityEngine.Vector3,UnityEngine.Vector3,System.Single,System.Int32)
extern "C"  RaycastHitU5BU5D_t1365728750* Physics_RaycastAll_m2195936356 (Il2CppObject * __this /* static, unused */, Vector3_t3525329789  ___origin0, Vector3_t3525329789  ___direction1, float ___maxDistance2, int32_t ___layermask3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.RaycastHit[] UnityEngine.Physics::INTERNAL_CALL_RaycastAll(UnityEngine.Vector3&,UnityEngine.Vector3&,System.Single,System.Int32,UnityEngine.QueryTriggerInteraction)
extern "C"  RaycastHitU5BU5D_t1365728750* Physics_INTERNAL_CALL_RaycastAll_m2642095530 (Il2CppObject * __this /* static, unused */, Vector3_t3525329789 * ___origin0, Vector3_t3525329789 * ___direction1, float ___maxDistance2, int32_t ___layermask3, int32_t ___queryTriggerInteraction4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Collider[] UnityEngine.Physics::OverlapSphere(UnityEngine.Vector3,System.Single)
extern "C"  ColliderU5BU5D_t1585173756* Physics_OverlapSphere_m359079608 (Il2CppObject * __this /* static, unused */, Vector3_t3525329789  ___position0, float ___radius1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Collider[] UnityEngine.Physics::INTERNAL_CALL_OverlapSphere(UnityEngine.Vector3&,System.Single,System.Int32,UnityEngine.QueryTriggerInteraction)
extern "C"  ColliderU5BU5D_t1585173756* Physics_INTERNAL_CALL_OverlapSphere_m4255329177 (Il2CppObject * __this /* static, unused */, Vector3_t3525329789 * ___position0, float ___radius1, int32_t ___layerMask2, int32_t ___queryTriggerInteraction3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Physics::SphereCast(UnityEngine.Vector3,System.Single,UnityEngine.Vector3,UnityEngine.RaycastHit&,System.Single,System.Int32)
extern "C"  bool Physics_SphereCast_m3031395826 (Il2CppObject * __this /* static, unused */, Vector3_t3525329789  ___origin0, float ___radius1, Vector3_t3525329789  ___direction2, RaycastHit_t46221527 * ___hitInfo3, float ___maxDistance4, int32_t ___layerMask5, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Physics::SphereCast(UnityEngine.Vector3,System.Single,UnityEngine.Vector3,UnityEngine.RaycastHit&,System.Single)
extern "C"  bool Physics_SphereCast_m2556362501 (Il2CppObject * __this /* static, unused */, Vector3_t3525329789  ___origin0, float ___radius1, Vector3_t3525329789  ___direction2, RaycastHit_t46221527 * ___hitInfo3, float ___maxDistance4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Physics::SphereCast(UnityEngine.Vector3,System.Single,UnityEngine.Vector3,UnityEngine.RaycastHit&,System.Single,System.Int32,UnityEngine.QueryTriggerInteraction)
extern "C"  bool Physics_SphereCast_m3149979635 (Il2CppObject * __this /* static, unused */, Vector3_t3525329789  ___origin0, float ___radius1, Vector3_t3525329789  ___direction2, RaycastHit_t46221527 * ___hitInfo3, float ___maxDistance4, int32_t ___layerMask5, int32_t ___queryTriggerInteraction6, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.RaycastHit[] UnityEngine.Physics::CapsuleCastAll(UnityEngine.Vector3,UnityEngine.Vector3,System.Single,UnityEngine.Vector3,System.Single,System.Int32,UnityEngine.QueryTriggerInteraction)
extern "C"  RaycastHitU5BU5D_t1365728750* Physics_CapsuleCastAll_m389433258 (Il2CppObject * __this /* static, unused */, Vector3_t3525329789  ___point10, Vector3_t3525329789  ___point21, float ___radius2, Vector3_t3525329789  ___direction3, float ___maxDistance4, int32_t ___layermask5, int32_t ___queryTriggerInteraction6, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.RaycastHit[] UnityEngine.Physics::INTERNAL_CALL_CapsuleCastAll(UnityEngine.Vector3&,UnityEngine.Vector3&,System.Single,UnityEngine.Vector3&,System.Single,System.Int32,UnityEngine.QueryTriggerInteraction)
extern "C"  RaycastHitU5BU5D_t1365728750* Physics_INTERNAL_CALL_CapsuleCastAll_m2975798891 (Il2CppObject * __this /* static, unused */, Vector3_t3525329789 * ___point10, Vector3_t3525329789 * ___point21, float ___radius2, Vector3_t3525329789 * ___direction3, float ___maxDistance4, int32_t ___layermask5, int32_t ___queryTriggerInteraction6, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.RaycastHit[] UnityEngine.Physics::SphereCastAll(UnityEngine.Vector3,System.Single,UnityEngine.Vector3,System.Single,System.Int32)
extern "C"  RaycastHitU5BU5D_t1365728750* Physics_SphereCastAll_m1037167634 (Il2CppObject * __this /* static, unused */, Vector3_t3525329789  ___origin0, float ___radius1, Vector3_t3525329789  ___direction2, float ___maxDistance3, int32_t ___layerMask4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.RaycastHit[] UnityEngine.Physics::SphereCastAll(UnityEngine.Vector3,System.Single,UnityEngine.Vector3,System.Single,System.Int32,UnityEngine.QueryTriggerInteraction)
extern "C"  RaycastHitU5BU5D_t1365728750* Physics_SphereCastAll_m3942043155 (Il2CppObject * __this /* static, unused */, Vector3_t3525329789  ___origin0, float ___radius1, Vector3_t3525329789  ___direction2, float ___maxDistance3, int32_t ___layerMask4, int32_t ___queryTriggerInteraction5, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Physics::Internal_Raycast(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.RaycastHit&,System.Single,System.Int32,UnityEngine.QueryTriggerInteraction)
extern "C"  bool Physics_Internal_Raycast_m3365413907 (Il2CppObject * __this /* static, unused */, Vector3_t3525329789  ___origin0, Vector3_t3525329789  ___direction1, RaycastHit_t46221527 * ___hitInfo2, float ___maxDistance3, int32_t ___layermask4, int32_t ___queryTriggerInteraction5, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Physics::INTERNAL_CALL_Internal_Raycast(UnityEngine.Vector3&,UnityEngine.Vector3&,UnityEngine.RaycastHit&,System.Single,System.Int32,UnityEngine.QueryTriggerInteraction)
extern "C"  bool Physics_INTERNAL_CALL_Internal_Raycast_m1291554392 (Il2CppObject * __this /* static, unused */, Vector3_t3525329789 * ___origin0, Vector3_t3525329789 * ___direction1, RaycastHit_t46221527 * ___hitInfo2, float ___maxDistance3, int32_t ___layermask4, int32_t ___queryTriggerInteraction5, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Physics::Internal_CapsuleCast(UnityEngine.Vector3,UnityEngine.Vector3,System.Single,UnityEngine.Vector3,UnityEngine.RaycastHit&,System.Single,System.Int32,UnityEngine.QueryTriggerInteraction)
extern "C"  bool Physics_Internal_CapsuleCast_m677019326 (Il2CppObject * __this /* static, unused */, Vector3_t3525329789  ___point10, Vector3_t3525329789  ___point21, float ___radius2, Vector3_t3525329789  ___direction3, RaycastHit_t46221527 * ___hitInfo4, float ___maxDistance5, int32_t ___layermask6, int32_t ___queryTriggerInteraction7, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Physics::INTERNAL_CALL_Internal_CapsuleCast(UnityEngine.Vector3&,UnityEngine.Vector3&,System.Single,UnityEngine.Vector3&,UnityEngine.RaycastHit&,System.Single,System.Int32,UnityEngine.QueryTriggerInteraction)
extern "C"  bool Physics_INTERNAL_CALL_Internal_CapsuleCast_m1067850665 (Il2CppObject * __this /* static, unused */, Vector3_t3525329789 * ___point10, Vector3_t3525329789 * ___point21, float ___radius2, Vector3_t3525329789 * ___direction3, RaycastHit_t46221527 * ___hitInfo4, float ___maxDistance5, int32_t ___layermask6, int32_t ___queryTriggerInteraction7, const MethodInfo* method) IL2CPP_METHOD_ATTR;
