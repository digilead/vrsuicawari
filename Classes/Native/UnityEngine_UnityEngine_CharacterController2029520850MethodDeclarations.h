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

// UnityEngine.CharacterController
struct CharacterController_t2029520850;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_CollisionFlags165451490.h"
#include "UnityEngine_UnityEngine_Vector33525329789.h"
#include "UnityEngine_UnityEngine_CharacterController2029520850.h"

// UnityEngine.CollisionFlags UnityEngine.CharacterController::Move(UnityEngine.Vector3)
extern "C"  int32_t CharacterController_Move_m3043020731 (CharacterController_t2029520850 * __this, Vector3_t3525329789  ___motion0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.CollisionFlags UnityEngine.CharacterController::INTERNAL_CALL_Move(UnityEngine.CharacterController,UnityEngine.Vector3&)
extern "C"  int32_t CharacterController_INTERNAL_CALL_Move_m985801042 (Il2CppObject * __this /* static, unused */, CharacterController_t2029520850 * ___self0, Vector3_t3525329789 * ___motion1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.CharacterController::get_isGrounded()
extern "C"  bool CharacterController_get_isGrounded_m1739295843 (CharacterController_t2029520850 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.CharacterController::get_velocity()
extern "C"  Vector3_t3525329789  CharacterController_get_velocity_m1414499516 (CharacterController_t2029520850 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.CharacterController::INTERNAL_get_velocity(UnityEngine.Vector3&)
extern "C"  void CharacterController_INTERNAL_get_velocity_m257673357 (CharacterController_t2029520850 * __this, Vector3_t3525329789 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.CharacterController::get_radius()
extern "C"  float CharacterController_get_radius_m2930031455 (CharacterController_t2029520850 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.CharacterController::get_height()
extern "C"  float CharacterController_get_height_m2077757108 (CharacterController_t2029520850 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.CharacterController::get_center()
extern "C"  Vector3_t3525329789  CharacterController_get_center_m4000255412 (CharacterController_t2029520850 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.CharacterController::INTERNAL_get_center(UnityEngine.Vector3&)
extern "C"  void CharacterController_INTERNAL_get_center_m3546264837 (CharacterController_t2029520850 * __this, Vector3_t3525329789 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.CharacterController::get_slopeLimit()
extern "C"  float CharacterController_get_slopeLimit_m3981117981 (CharacterController_t2029520850 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.CharacterController::get_stepOffset()
extern "C"  float CharacterController_get_stepOffset_m1993248780 (CharacterController_t2029520850 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
