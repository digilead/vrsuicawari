﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Transform
struct Transform_t284553113;

#include "mscorlib_System_Object837106420.h"
#include "AssemblyU2DUnityScript_MovementTransferOnJump501960999.h"
#include "UnityEngine_UnityEngine_Vector33525329789.h"
#include "UnityEngine_UnityEngine_Quaternion1891715979.h"
#include "UnityEngine_UnityEngine_Matrix4x4277289660.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// CharacterMotorMovingPlatform
struct  CharacterMotorMovingPlatform_t2727899373  : public Il2CppObject
{
public:
	// System.Boolean CharacterMotorMovingPlatform::enabled
	bool ___enabled_0;
	// MovementTransferOnJump CharacterMotorMovingPlatform::movementTransfer
	int32_t ___movementTransfer_1;
	// UnityEngine.Transform CharacterMotorMovingPlatform::hitPlatform
	Transform_t284553113 * ___hitPlatform_2;
	// UnityEngine.Transform CharacterMotorMovingPlatform::activePlatform
	Transform_t284553113 * ___activePlatform_3;
	// UnityEngine.Vector3 CharacterMotorMovingPlatform::activeLocalPoint
	Vector3_t3525329789  ___activeLocalPoint_4;
	// UnityEngine.Vector3 CharacterMotorMovingPlatform::activeGlobalPoint
	Vector3_t3525329789  ___activeGlobalPoint_5;
	// UnityEngine.Quaternion CharacterMotorMovingPlatform::activeLocalRotation
	Quaternion_t1891715979  ___activeLocalRotation_6;
	// UnityEngine.Quaternion CharacterMotorMovingPlatform::activeGlobalRotation
	Quaternion_t1891715979  ___activeGlobalRotation_7;
	// UnityEngine.Matrix4x4 CharacterMotorMovingPlatform::lastMatrix
	Matrix4x4_t277289660  ___lastMatrix_8;
	// UnityEngine.Vector3 CharacterMotorMovingPlatform::platformVelocity
	Vector3_t3525329789  ___platformVelocity_9;
	// System.Boolean CharacterMotorMovingPlatform::newPlatform
	bool ___newPlatform_10;

public:
	inline static int32_t get_offset_of_enabled_0() { return static_cast<int32_t>(offsetof(CharacterMotorMovingPlatform_t2727899373, ___enabled_0)); }
	inline bool get_enabled_0() const { return ___enabled_0; }
	inline bool* get_address_of_enabled_0() { return &___enabled_0; }
	inline void set_enabled_0(bool value)
	{
		___enabled_0 = value;
	}

	inline static int32_t get_offset_of_movementTransfer_1() { return static_cast<int32_t>(offsetof(CharacterMotorMovingPlatform_t2727899373, ___movementTransfer_1)); }
	inline int32_t get_movementTransfer_1() const { return ___movementTransfer_1; }
	inline int32_t* get_address_of_movementTransfer_1() { return &___movementTransfer_1; }
	inline void set_movementTransfer_1(int32_t value)
	{
		___movementTransfer_1 = value;
	}

	inline static int32_t get_offset_of_hitPlatform_2() { return static_cast<int32_t>(offsetof(CharacterMotorMovingPlatform_t2727899373, ___hitPlatform_2)); }
	inline Transform_t284553113 * get_hitPlatform_2() const { return ___hitPlatform_2; }
	inline Transform_t284553113 ** get_address_of_hitPlatform_2() { return &___hitPlatform_2; }
	inline void set_hitPlatform_2(Transform_t284553113 * value)
	{
		___hitPlatform_2 = value;
		Il2CppCodeGenWriteBarrier(&___hitPlatform_2, value);
	}

	inline static int32_t get_offset_of_activePlatform_3() { return static_cast<int32_t>(offsetof(CharacterMotorMovingPlatform_t2727899373, ___activePlatform_3)); }
	inline Transform_t284553113 * get_activePlatform_3() const { return ___activePlatform_3; }
	inline Transform_t284553113 ** get_address_of_activePlatform_3() { return &___activePlatform_3; }
	inline void set_activePlatform_3(Transform_t284553113 * value)
	{
		___activePlatform_3 = value;
		Il2CppCodeGenWriteBarrier(&___activePlatform_3, value);
	}

	inline static int32_t get_offset_of_activeLocalPoint_4() { return static_cast<int32_t>(offsetof(CharacterMotorMovingPlatform_t2727899373, ___activeLocalPoint_4)); }
	inline Vector3_t3525329789  get_activeLocalPoint_4() const { return ___activeLocalPoint_4; }
	inline Vector3_t3525329789 * get_address_of_activeLocalPoint_4() { return &___activeLocalPoint_4; }
	inline void set_activeLocalPoint_4(Vector3_t3525329789  value)
	{
		___activeLocalPoint_4 = value;
	}

	inline static int32_t get_offset_of_activeGlobalPoint_5() { return static_cast<int32_t>(offsetof(CharacterMotorMovingPlatform_t2727899373, ___activeGlobalPoint_5)); }
	inline Vector3_t3525329789  get_activeGlobalPoint_5() const { return ___activeGlobalPoint_5; }
	inline Vector3_t3525329789 * get_address_of_activeGlobalPoint_5() { return &___activeGlobalPoint_5; }
	inline void set_activeGlobalPoint_5(Vector3_t3525329789  value)
	{
		___activeGlobalPoint_5 = value;
	}

	inline static int32_t get_offset_of_activeLocalRotation_6() { return static_cast<int32_t>(offsetof(CharacterMotorMovingPlatform_t2727899373, ___activeLocalRotation_6)); }
	inline Quaternion_t1891715979  get_activeLocalRotation_6() const { return ___activeLocalRotation_6; }
	inline Quaternion_t1891715979 * get_address_of_activeLocalRotation_6() { return &___activeLocalRotation_6; }
	inline void set_activeLocalRotation_6(Quaternion_t1891715979  value)
	{
		___activeLocalRotation_6 = value;
	}

	inline static int32_t get_offset_of_activeGlobalRotation_7() { return static_cast<int32_t>(offsetof(CharacterMotorMovingPlatform_t2727899373, ___activeGlobalRotation_7)); }
	inline Quaternion_t1891715979  get_activeGlobalRotation_7() const { return ___activeGlobalRotation_7; }
	inline Quaternion_t1891715979 * get_address_of_activeGlobalRotation_7() { return &___activeGlobalRotation_7; }
	inline void set_activeGlobalRotation_7(Quaternion_t1891715979  value)
	{
		___activeGlobalRotation_7 = value;
	}

	inline static int32_t get_offset_of_lastMatrix_8() { return static_cast<int32_t>(offsetof(CharacterMotorMovingPlatform_t2727899373, ___lastMatrix_8)); }
	inline Matrix4x4_t277289660  get_lastMatrix_8() const { return ___lastMatrix_8; }
	inline Matrix4x4_t277289660 * get_address_of_lastMatrix_8() { return &___lastMatrix_8; }
	inline void set_lastMatrix_8(Matrix4x4_t277289660  value)
	{
		___lastMatrix_8 = value;
	}

	inline static int32_t get_offset_of_platformVelocity_9() { return static_cast<int32_t>(offsetof(CharacterMotorMovingPlatform_t2727899373, ___platformVelocity_9)); }
	inline Vector3_t3525329789  get_platformVelocity_9() const { return ___platformVelocity_9; }
	inline Vector3_t3525329789 * get_address_of_platformVelocity_9() { return &___platformVelocity_9; }
	inline void set_platformVelocity_9(Vector3_t3525329789  value)
	{
		___platformVelocity_9 = value;
	}

	inline static int32_t get_offset_of_newPlatform_10() { return static_cast<int32_t>(offsetof(CharacterMotorMovingPlatform_t2727899373, ___newPlatform_10)); }
	inline bool get_newPlatform_10() const { return ___newPlatform_10; }
	inline bool* get_address_of_newPlatform_10() { return &___newPlatform_10; }
	inline void set_newPlatform_10(bool value)
	{
		___newPlatform_10 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
