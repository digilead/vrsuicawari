#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// CharacterMotorMovement
struct CharacterMotorMovement_t331916219;
// CharacterMotorJumping
struct CharacterMotorJumping_t3885160552;
// CharacterMotorMovingPlatform
struct CharacterMotorMovingPlatform_t2727899373;
// CharacterMotorSliding
struct CharacterMotorSliding_t3021045154;
// UnityEngine.Transform
struct Transform_t284553113;
// UnityEngine.CharacterController
struct CharacterController_t2029520850;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"
#include "UnityEngine_UnityEngine_Vector33525329789.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// CharacterMotor
struct  CharacterMotor_t3633310444  : public MonoBehaviour_t3012272455
{
public:
	// System.Boolean CharacterMotor::canControl
	bool ___canControl_2;
	// System.Boolean CharacterMotor::useFixedUpdate
	bool ___useFixedUpdate_3;
	// UnityEngine.Vector3 CharacterMotor::inputMoveDirection
	Vector3_t3525329789  ___inputMoveDirection_4;
	// System.Boolean CharacterMotor::inputJump
	bool ___inputJump_5;
	// CharacterMotorMovement CharacterMotor::movement
	CharacterMotorMovement_t331916219 * ___movement_6;
	// CharacterMotorJumping CharacterMotor::jumping
	CharacterMotorJumping_t3885160552 * ___jumping_7;
	// CharacterMotorMovingPlatform CharacterMotor::movingPlatform
	CharacterMotorMovingPlatform_t2727899373 * ___movingPlatform_8;
	// CharacterMotorSliding CharacterMotor::sliding
	CharacterMotorSliding_t3021045154 * ___sliding_9;
	// System.Boolean CharacterMotor::grounded
	bool ___grounded_10;
	// UnityEngine.Vector3 CharacterMotor::groundNormal
	Vector3_t3525329789  ___groundNormal_11;
	// UnityEngine.Vector3 CharacterMotor::lastGroundNormal
	Vector3_t3525329789  ___lastGroundNormal_12;
	// UnityEngine.Transform CharacterMotor::tr
	Transform_t284553113 * ___tr_13;
	// UnityEngine.CharacterController CharacterMotor::controller
	CharacterController_t2029520850 * ___controller_14;

public:
	inline static int32_t get_offset_of_canControl_2() { return static_cast<int32_t>(offsetof(CharacterMotor_t3633310444, ___canControl_2)); }
	inline bool get_canControl_2() const { return ___canControl_2; }
	inline bool* get_address_of_canControl_2() { return &___canControl_2; }
	inline void set_canControl_2(bool value)
	{
		___canControl_2 = value;
	}

	inline static int32_t get_offset_of_useFixedUpdate_3() { return static_cast<int32_t>(offsetof(CharacterMotor_t3633310444, ___useFixedUpdate_3)); }
	inline bool get_useFixedUpdate_3() const { return ___useFixedUpdate_3; }
	inline bool* get_address_of_useFixedUpdate_3() { return &___useFixedUpdate_3; }
	inline void set_useFixedUpdate_3(bool value)
	{
		___useFixedUpdate_3 = value;
	}

	inline static int32_t get_offset_of_inputMoveDirection_4() { return static_cast<int32_t>(offsetof(CharacterMotor_t3633310444, ___inputMoveDirection_4)); }
	inline Vector3_t3525329789  get_inputMoveDirection_4() const { return ___inputMoveDirection_4; }
	inline Vector3_t3525329789 * get_address_of_inputMoveDirection_4() { return &___inputMoveDirection_4; }
	inline void set_inputMoveDirection_4(Vector3_t3525329789  value)
	{
		___inputMoveDirection_4 = value;
	}

	inline static int32_t get_offset_of_inputJump_5() { return static_cast<int32_t>(offsetof(CharacterMotor_t3633310444, ___inputJump_5)); }
	inline bool get_inputJump_5() const { return ___inputJump_5; }
	inline bool* get_address_of_inputJump_5() { return &___inputJump_5; }
	inline void set_inputJump_5(bool value)
	{
		___inputJump_5 = value;
	}

	inline static int32_t get_offset_of_movement_6() { return static_cast<int32_t>(offsetof(CharacterMotor_t3633310444, ___movement_6)); }
	inline CharacterMotorMovement_t331916219 * get_movement_6() const { return ___movement_6; }
	inline CharacterMotorMovement_t331916219 ** get_address_of_movement_6() { return &___movement_6; }
	inline void set_movement_6(CharacterMotorMovement_t331916219 * value)
	{
		___movement_6 = value;
		Il2CppCodeGenWriteBarrier(&___movement_6, value);
	}

	inline static int32_t get_offset_of_jumping_7() { return static_cast<int32_t>(offsetof(CharacterMotor_t3633310444, ___jumping_7)); }
	inline CharacterMotorJumping_t3885160552 * get_jumping_7() const { return ___jumping_7; }
	inline CharacterMotorJumping_t3885160552 ** get_address_of_jumping_7() { return &___jumping_7; }
	inline void set_jumping_7(CharacterMotorJumping_t3885160552 * value)
	{
		___jumping_7 = value;
		Il2CppCodeGenWriteBarrier(&___jumping_7, value);
	}

	inline static int32_t get_offset_of_movingPlatform_8() { return static_cast<int32_t>(offsetof(CharacterMotor_t3633310444, ___movingPlatform_8)); }
	inline CharacterMotorMovingPlatform_t2727899373 * get_movingPlatform_8() const { return ___movingPlatform_8; }
	inline CharacterMotorMovingPlatform_t2727899373 ** get_address_of_movingPlatform_8() { return &___movingPlatform_8; }
	inline void set_movingPlatform_8(CharacterMotorMovingPlatform_t2727899373 * value)
	{
		___movingPlatform_8 = value;
		Il2CppCodeGenWriteBarrier(&___movingPlatform_8, value);
	}

	inline static int32_t get_offset_of_sliding_9() { return static_cast<int32_t>(offsetof(CharacterMotor_t3633310444, ___sliding_9)); }
	inline CharacterMotorSliding_t3021045154 * get_sliding_9() const { return ___sliding_9; }
	inline CharacterMotorSliding_t3021045154 ** get_address_of_sliding_9() { return &___sliding_9; }
	inline void set_sliding_9(CharacterMotorSliding_t3021045154 * value)
	{
		___sliding_9 = value;
		Il2CppCodeGenWriteBarrier(&___sliding_9, value);
	}

	inline static int32_t get_offset_of_grounded_10() { return static_cast<int32_t>(offsetof(CharacterMotor_t3633310444, ___grounded_10)); }
	inline bool get_grounded_10() const { return ___grounded_10; }
	inline bool* get_address_of_grounded_10() { return &___grounded_10; }
	inline void set_grounded_10(bool value)
	{
		___grounded_10 = value;
	}

	inline static int32_t get_offset_of_groundNormal_11() { return static_cast<int32_t>(offsetof(CharacterMotor_t3633310444, ___groundNormal_11)); }
	inline Vector3_t3525329789  get_groundNormal_11() const { return ___groundNormal_11; }
	inline Vector3_t3525329789 * get_address_of_groundNormal_11() { return &___groundNormal_11; }
	inline void set_groundNormal_11(Vector3_t3525329789  value)
	{
		___groundNormal_11 = value;
	}

	inline static int32_t get_offset_of_lastGroundNormal_12() { return static_cast<int32_t>(offsetof(CharacterMotor_t3633310444, ___lastGroundNormal_12)); }
	inline Vector3_t3525329789  get_lastGroundNormal_12() const { return ___lastGroundNormal_12; }
	inline Vector3_t3525329789 * get_address_of_lastGroundNormal_12() { return &___lastGroundNormal_12; }
	inline void set_lastGroundNormal_12(Vector3_t3525329789  value)
	{
		___lastGroundNormal_12 = value;
	}

	inline static int32_t get_offset_of_tr_13() { return static_cast<int32_t>(offsetof(CharacterMotor_t3633310444, ___tr_13)); }
	inline Transform_t284553113 * get_tr_13() const { return ___tr_13; }
	inline Transform_t284553113 ** get_address_of_tr_13() { return &___tr_13; }
	inline void set_tr_13(Transform_t284553113 * value)
	{
		___tr_13 = value;
		Il2CppCodeGenWriteBarrier(&___tr_13, value);
	}

	inline static int32_t get_offset_of_controller_14() { return static_cast<int32_t>(offsetof(CharacterMotor_t3633310444, ___controller_14)); }
	inline CharacterController_t2029520850 * get_controller_14() const { return ___controller_14; }
	inline CharacterController_t2029520850 ** get_address_of_controller_14() { return &___controller_14; }
	inline void set_controller_14(CharacterController_t2029520850 * value)
	{
		___controller_14 = value;
		Il2CppCodeGenWriteBarrier(&___controller_14, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
