﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Camera
struct Camera_t3533968274;
// UnitySampleAssets.Characters.FirstPerson.RigidbodyFirstPersonController/MovementSettings
struct MovementSettings_t2310751762;
// UnitySampleAssets.Characters.FirstPerson.MouseLook
struct MouseLook_t136918691;
// UnitySampleAssets.Characters.FirstPerson.RigidbodyFirstPersonController/AdvancedSettings
struct AdvancedSettings_t1668778629;
// UnityEngine.Rigidbody
struct Rigidbody_t1972007546;
// UnityEngine.CapsuleCollider
struct CapsuleCollider_t3138252142;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"
#include "UnityEngine_UnityEngine_Vector33525329789.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnitySampleAssets.Characters.FirstPerson.RigidbodyFirstPersonController
struct  RigidbodyFirstPersonController_t2706339155  : public MonoBehaviour_t3012272455
{
public:
	// UnityEngine.Camera UnitySampleAssets.Characters.FirstPerson.RigidbodyFirstPersonController::_camera
	Camera_t3533968274 * ____camera_2;
	// UnitySampleAssets.Characters.FirstPerson.RigidbodyFirstPersonController/MovementSettings UnitySampleAssets.Characters.FirstPerson.RigidbodyFirstPersonController::movementSettings
	MovementSettings_t2310751762 * ___movementSettings_3;
	// UnitySampleAssets.Characters.FirstPerson.MouseLook UnitySampleAssets.Characters.FirstPerson.RigidbodyFirstPersonController::mouseLook
	MouseLook_t136918691 * ___mouseLook_4;
	// UnitySampleAssets.Characters.FirstPerson.RigidbodyFirstPersonController/AdvancedSettings UnitySampleAssets.Characters.FirstPerson.RigidbodyFirstPersonController::advancedSettings
	AdvancedSettings_t1668778629 * ___advancedSettings_5;
	// UnityEngine.Rigidbody UnitySampleAssets.Characters.FirstPerson.RigidbodyFirstPersonController::RigidBody
	Rigidbody_t1972007546 * ___RigidBody_6;
	// UnityEngine.CapsuleCollider UnitySampleAssets.Characters.FirstPerson.RigidbodyFirstPersonController::Capsule
	CapsuleCollider_t3138252142 * ___Capsule_7;
	// System.Single UnitySampleAssets.Characters.FirstPerson.RigidbodyFirstPersonController::yRotation
	float ___yRotation_8;
	// UnityEngine.Vector3 UnitySampleAssets.Characters.FirstPerson.RigidbodyFirstPersonController::groundContactNormal
	Vector3_t3525329789  ___groundContactNormal_9;
	// System.Boolean UnitySampleAssets.Characters.FirstPerson.RigidbodyFirstPersonController::jump
	bool ___jump_10;
	// System.Boolean UnitySampleAssets.Characters.FirstPerson.RigidbodyFirstPersonController::previouslyGrounded
	bool ___previouslyGrounded_11;
	// System.Boolean UnitySampleAssets.Characters.FirstPerson.RigidbodyFirstPersonController::jumping
	bool ___jumping_12;
	// System.Boolean UnitySampleAssets.Characters.FirstPerson.RigidbodyFirstPersonController::isGrounded
	bool ___isGrounded_13;

public:
	inline static int32_t get_offset_of__camera_2() { return static_cast<int32_t>(offsetof(RigidbodyFirstPersonController_t2706339155, ____camera_2)); }
	inline Camera_t3533968274 * get__camera_2() const { return ____camera_2; }
	inline Camera_t3533968274 ** get_address_of__camera_2() { return &____camera_2; }
	inline void set__camera_2(Camera_t3533968274 * value)
	{
		____camera_2 = value;
		Il2CppCodeGenWriteBarrier(&____camera_2, value);
	}

	inline static int32_t get_offset_of_movementSettings_3() { return static_cast<int32_t>(offsetof(RigidbodyFirstPersonController_t2706339155, ___movementSettings_3)); }
	inline MovementSettings_t2310751762 * get_movementSettings_3() const { return ___movementSettings_3; }
	inline MovementSettings_t2310751762 ** get_address_of_movementSettings_3() { return &___movementSettings_3; }
	inline void set_movementSettings_3(MovementSettings_t2310751762 * value)
	{
		___movementSettings_3 = value;
		Il2CppCodeGenWriteBarrier(&___movementSettings_3, value);
	}

	inline static int32_t get_offset_of_mouseLook_4() { return static_cast<int32_t>(offsetof(RigidbodyFirstPersonController_t2706339155, ___mouseLook_4)); }
	inline MouseLook_t136918691 * get_mouseLook_4() const { return ___mouseLook_4; }
	inline MouseLook_t136918691 ** get_address_of_mouseLook_4() { return &___mouseLook_4; }
	inline void set_mouseLook_4(MouseLook_t136918691 * value)
	{
		___mouseLook_4 = value;
		Il2CppCodeGenWriteBarrier(&___mouseLook_4, value);
	}

	inline static int32_t get_offset_of_advancedSettings_5() { return static_cast<int32_t>(offsetof(RigidbodyFirstPersonController_t2706339155, ___advancedSettings_5)); }
	inline AdvancedSettings_t1668778629 * get_advancedSettings_5() const { return ___advancedSettings_5; }
	inline AdvancedSettings_t1668778629 ** get_address_of_advancedSettings_5() { return &___advancedSettings_5; }
	inline void set_advancedSettings_5(AdvancedSettings_t1668778629 * value)
	{
		___advancedSettings_5 = value;
		Il2CppCodeGenWriteBarrier(&___advancedSettings_5, value);
	}

	inline static int32_t get_offset_of_RigidBody_6() { return static_cast<int32_t>(offsetof(RigidbodyFirstPersonController_t2706339155, ___RigidBody_6)); }
	inline Rigidbody_t1972007546 * get_RigidBody_6() const { return ___RigidBody_6; }
	inline Rigidbody_t1972007546 ** get_address_of_RigidBody_6() { return &___RigidBody_6; }
	inline void set_RigidBody_6(Rigidbody_t1972007546 * value)
	{
		___RigidBody_6 = value;
		Il2CppCodeGenWriteBarrier(&___RigidBody_6, value);
	}

	inline static int32_t get_offset_of_Capsule_7() { return static_cast<int32_t>(offsetof(RigidbodyFirstPersonController_t2706339155, ___Capsule_7)); }
	inline CapsuleCollider_t3138252142 * get_Capsule_7() const { return ___Capsule_7; }
	inline CapsuleCollider_t3138252142 ** get_address_of_Capsule_7() { return &___Capsule_7; }
	inline void set_Capsule_7(CapsuleCollider_t3138252142 * value)
	{
		___Capsule_7 = value;
		Il2CppCodeGenWriteBarrier(&___Capsule_7, value);
	}

	inline static int32_t get_offset_of_yRotation_8() { return static_cast<int32_t>(offsetof(RigidbodyFirstPersonController_t2706339155, ___yRotation_8)); }
	inline float get_yRotation_8() const { return ___yRotation_8; }
	inline float* get_address_of_yRotation_8() { return &___yRotation_8; }
	inline void set_yRotation_8(float value)
	{
		___yRotation_8 = value;
	}

	inline static int32_t get_offset_of_groundContactNormal_9() { return static_cast<int32_t>(offsetof(RigidbodyFirstPersonController_t2706339155, ___groundContactNormal_9)); }
	inline Vector3_t3525329789  get_groundContactNormal_9() const { return ___groundContactNormal_9; }
	inline Vector3_t3525329789 * get_address_of_groundContactNormal_9() { return &___groundContactNormal_9; }
	inline void set_groundContactNormal_9(Vector3_t3525329789  value)
	{
		___groundContactNormal_9 = value;
	}

	inline static int32_t get_offset_of_jump_10() { return static_cast<int32_t>(offsetof(RigidbodyFirstPersonController_t2706339155, ___jump_10)); }
	inline bool get_jump_10() const { return ___jump_10; }
	inline bool* get_address_of_jump_10() { return &___jump_10; }
	inline void set_jump_10(bool value)
	{
		___jump_10 = value;
	}

	inline static int32_t get_offset_of_previouslyGrounded_11() { return static_cast<int32_t>(offsetof(RigidbodyFirstPersonController_t2706339155, ___previouslyGrounded_11)); }
	inline bool get_previouslyGrounded_11() const { return ___previouslyGrounded_11; }
	inline bool* get_address_of_previouslyGrounded_11() { return &___previouslyGrounded_11; }
	inline void set_previouslyGrounded_11(bool value)
	{
		___previouslyGrounded_11 = value;
	}

	inline static int32_t get_offset_of_jumping_12() { return static_cast<int32_t>(offsetof(RigidbodyFirstPersonController_t2706339155, ___jumping_12)); }
	inline bool get_jumping_12() const { return ___jumping_12; }
	inline bool* get_address_of_jumping_12() { return &___jumping_12; }
	inline void set_jumping_12(bool value)
	{
		___jumping_12 = value;
	}

	inline static int32_t get_offset_of_isGrounded_13() { return static_cast<int32_t>(offsetof(RigidbodyFirstPersonController_t2706339155, ___isGrounded_13)); }
	inline bool get_isGrounded_13() const { return ___isGrounded_13; }
	inline bool* get_address_of_isGrounded_13() { return &___isGrounded_13; }
	inline void set_isGrounded_13(bool value)
	{
		___isGrounded_13 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
