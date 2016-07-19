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

// ThirdPersonController
struct ThirdPersonController_t973398072;
// UnityEngine.ControllerColliderHit
struct ControllerColliderHit_t2693066224;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_ControllerColliderHit2693066224.h"
#include "UnityEngine_UnityEngine_Vector33525329789.h"

// System.Void ThirdPersonController::.ctor()
extern "C"  void ThirdPersonController__ctor_m4148689886 (ThirdPersonController_t973398072 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ThirdPersonController::Awake()
extern "C"  void ThirdPersonController_Awake_m91327809 (ThirdPersonController_t973398072 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ThirdPersonController::UpdateSmoothedMovementDirection()
extern "C"  void ThirdPersonController_UpdateSmoothedMovementDirection_m2617983542 (ThirdPersonController_t973398072 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ThirdPersonController::ApplyJumping()
extern "C"  void ThirdPersonController_ApplyJumping_m4208492748 (ThirdPersonController_t973398072 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ThirdPersonController::ApplyGravity()
extern "C"  void ThirdPersonController_ApplyGravity_m2514286502 (ThirdPersonController_t973398072 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single ThirdPersonController::CalculateJumpVerticalSpeed(System.Single)
extern "C"  float ThirdPersonController_CalculateJumpVerticalSpeed_m1609729492 (ThirdPersonController_t973398072 * __this, float ___targetJumpHeight0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ThirdPersonController::DidJump()
extern "C"  void ThirdPersonController_DidJump_m3844392009 (ThirdPersonController_t973398072 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ThirdPersonController::Update()
extern "C"  void ThirdPersonController_Update_m1487229679 (ThirdPersonController_t973398072 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ThirdPersonController::OnControllerColliderHit(UnityEngine.ControllerColliderHit)
extern "C"  void ThirdPersonController_OnControllerColliderHit_m3926715238 (ThirdPersonController_t973398072 * __this, ControllerColliderHit_t2693066224 * ___hit0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single ThirdPersonController::GetSpeed()
extern "C"  float ThirdPersonController_GetSpeed_m1252822251 (ThirdPersonController_t973398072 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ThirdPersonController::IsJumping()
extern "C"  bool ThirdPersonController_IsJumping_m228273892 (ThirdPersonController_t973398072 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ThirdPersonController::IsGrounded()
extern "C"  bool ThirdPersonController_IsGrounded_m3965573080 (ThirdPersonController_t973398072 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 ThirdPersonController::GetDirection()
extern "C"  Vector3_t3525329789  ThirdPersonController_GetDirection_m216579317 (ThirdPersonController_t973398072 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ThirdPersonController::IsMovingBackwards()
extern "C"  bool ThirdPersonController_IsMovingBackwards_m3612919730 (ThirdPersonController_t973398072 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single ThirdPersonController::GetLockCameraTimer()
extern "C"  float ThirdPersonController_GetLockCameraTimer_m2176386649 (ThirdPersonController_t973398072 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ThirdPersonController::IsMoving()
extern "C"  bool ThirdPersonController_IsMoving_m577752576 (ThirdPersonController_t973398072 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ThirdPersonController::HasJumpReachedApex()
extern "C"  bool ThirdPersonController_HasJumpReachedApex_m1115034804 (ThirdPersonController_t973398072 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ThirdPersonController::IsGroundedWithTimeout()
extern "C"  bool ThirdPersonController_IsGroundedWithTimeout_m1035693221 (ThirdPersonController_t973398072 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ThirdPersonController::Reset()
extern "C"  void ThirdPersonController_Reset_m1795122827 (ThirdPersonController_t973398072 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ThirdPersonController::Main()
extern "C"  void ThirdPersonController_Main_m3513006367 (ThirdPersonController_t973398072 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
