#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// CharacterMotor
struct CharacterMotor_t3633310444;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// FPSInputController
struct  FPSInputController_t3054943997  : public MonoBehaviour_t3012272455
{
public:
	// CharacterMotor FPSInputController::motor
	CharacterMotor_t3633310444 * ___motor_2;

public:
	inline static int32_t get_offset_of_motor_2() { return static_cast<int32_t>(offsetof(FPSInputController_t3054943997, ___motor_2)); }
	inline CharacterMotor_t3633310444 * get_motor_2() const { return ___motor_2; }
	inline CharacterMotor_t3633310444 ** get_address_of_motor_2() { return &___motor_2; }
	inline void set_motor_2(CharacterMotor_t3633310444 * value)
	{
		___motor_2 = value;
		Il2CppCodeGenWriteBarrier(&___motor_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
