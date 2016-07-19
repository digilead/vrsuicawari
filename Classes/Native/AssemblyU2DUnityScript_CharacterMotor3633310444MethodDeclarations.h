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

// CharacterMotor
struct CharacterMotor_t3633310444;
// UnityEngine.ControllerColliderHit
struct ControllerColliderHit_t2693066224;
// System.Collections.IEnumerator
struct IEnumerator_t287207039;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Vector33525329789.h"
#include "UnityEngine_UnityEngine_ControllerColliderHit2693066224.h"

// System.Void CharacterMotor::.ctor()
extern "C"  void CharacterMotor__ctor_m488653284 (CharacterMotor_t3633310444 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CharacterMotor::Awake()
extern "C"  void CharacterMotor_Awake_m726258503 (CharacterMotor_t3633310444 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CharacterMotor::UpdateFunction()
extern "C"  void CharacterMotor_UpdateFunction_m2139774881 (CharacterMotor_t3633310444 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CharacterMotor::FixedUpdate()
extern "C"  void CharacterMotor_FixedUpdate_m759309407 (CharacterMotor_t3633310444 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CharacterMotor::Update()
extern "C"  void CharacterMotor_Update_m3990212009 (CharacterMotor_t3633310444 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 CharacterMotor::ApplyInputVelocityChange(UnityEngine.Vector3)
extern "C"  Vector3_t3525329789  CharacterMotor_ApplyInputVelocityChange_m2275205846 (CharacterMotor_t3633310444 * __this, Vector3_t3525329789  ___velocity0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 CharacterMotor::ApplyGravityAndJumping(UnityEngine.Vector3)
extern "C"  Vector3_t3525329789  CharacterMotor_ApplyGravityAndJumping_m560798178 (CharacterMotor_t3633310444 * __this, Vector3_t3525329789  ___velocity0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CharacterMotor::OnControllerColliderHit(UnityEngine.ControllerColliderHit)
extern "C"  void CharacterMotor_OnControllerColliderHit_m847152032 (CharacterMotor_t3633310444 * __this, ControllerColliderHit_t2693066224 * ___hit0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator CharacterMotor::SubtractNewPlatformVelocity()
extern "C"  Il2CppObject * CharacterMotor_SubtractNewPlatformVelocity_m2977075308 (CharacterMotor_t3633310444 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean CharacterMotor::MoveWithPlatform()
extern "C"  bool CharacterMotor_MoveWithPlatform_m1269339432 (CharacterMotor_t3633310444 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 CharacterMotor::GetDesiredHorizontalVelocity()
extern "C"  Vector3_t3525329789  CharacterMotor_GetDesiredHorizontalVelocity_m3106160703 (CharacterMotor_t3633310444 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 CharacterMotor::AdjustGroundVelocityToNormal(UnityEngine.Vector3,UnityEngine.Vector3)
extern "C"  Vector3_t3525329789  CharacterMotor_AdjustGroundVelocityToNormal_m2437773597 (CharacterMotor_t3633310444 * __this, Vector3_t3525329789  ___hVelocity0, Vector3_t3525329789  ___groundNormal1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean CharacterMotor::IsGroundedTest()
extern "C"  bool CharacterMotor_IsGroundedTest_m1392628992 (CharacterMotor_t3633310444 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single CharacterMotor::GetMaxAcceleration(System.Boolean)
extern "C"  float CharacterMotor_GetMaxAcceleration_m371706609 (CharacterMotor_t3633310444 * __this, bool ___grounded0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single CharacterMotor::CalculateJumpVerticalSpeed(System.Single)
extern "C"  float CharacterMotor_CalculateJumpVerticalSpeed_m1458037698 (CharacterMotor_t3633310444 * __this, float ___targetJumpHeight0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean CharacterMotor::IsJumping()
extern "C"  bool CharacterMotor_IsJumping_m1746915502 (CharacterMotor_t3633310444 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean CharacterMotor::IsSliding()
extern "C"  bool CharacterMotor_IsSliding_m260706152 (CharacterMotor_t3633310444 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean CharacterMotor::IsTouchingCeiling()
extern "C"  bool CharacterMotor_IsTouchingCeiling_m75112500 (CharacterMotor_t3633310444 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean CharacterMotor::IsGrounded()
extern "C"  bool CharacterMotor_IsGrounded_m3798822734 (CharacterMotor_t3633310444 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean CharacterMotor::TooSteep()
extern "C"  bool CharacterMotor_TooSteep_m276062457 (CharacterMotor_t3633310444 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 CharacterMotor::GetDirection()
extern "C"  Vector3_t3525329789  CharacterMotor_GetDirection_m147030883 (CharacterMotor_t3633310444 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CharacterMotor::SetControllable(System.Boolean)
extern "C"  void CharacterMotor_SetControllable_m1224300484 (CharacterMotor_t3633310444 * __this, bool ___controllable0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single CharacterMotor::MaxSpeedInDirection(UnityEngine.Vector3)
extern "C"  float CharacterMotor_MaxSpeedInDirection_m2873448236 (CharacterMotor_t3633310444 * __this, Vector3_t3525329789  ___desiredMovementDirection0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CharacterMotor::SetVelocity(UnityEngine.Vector3)
extern "C"  void CharacterMotor_SetVelocity_m2617710680 (CharacterMotor_t3633310444 * __this, Vector3_t3525329789  ___velocity0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CharacterMotor::Main()
extern "C"  void CharacterMotor_Main_m2148014681 (CharacterMotor_t3633310444 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
