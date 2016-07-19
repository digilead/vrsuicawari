#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Transform
struct Transform_t284553113;
// CharacterMotor
struct CharacterMotor_t3633310444;

#include "Boo_Lang_Boo_Lang_GenericGeneratorEnumerator_1_gen602172848.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// CharacterMotor/$SubtractNewPlatformVelocity$7/$
struct  U24_t36  : public GenericGeneratorEnumerator_1_t602172848
{
public:
	// UnityEngine.Transform CharacterMotor/$SubtractNewPlatformVelocity$7/$::$platform$8
	Transform_t284553113 * ___U24platformU248_2;
	// CharacterMotor CharacterMotor/$SubtractNewPlatformVelocity$7/$::$self_$9
	CharacterMotor_t3633310444 * ___U24self_U249_3;

public:
	inline static int32_t get_offset_of_U24platformU248_2() { return static_cast<int32_t>(offsetof(U24_t36, ___U24platformU248_2)); }
	inline Transform_t284553113 * get_U24platformU248_2() const { return ___U24platformU248_2; }
	inline Transform_t284553113 ** get_address_of_U24platformU248_2() { return &___U24platformU248_2; }
	inline void set_U24platformU248_2(Transform_t284553113 * value)
	{
		___U24platformU248_2 = value;
		Il2CppCodeGenWriteBarrier(&___U24platformU248_2, value);
	}

	inline static int32_t get_offset_of_U24self_U249_3() { return static_cast<int32_t>(offsetof(U24_t36, ___U24self_U249_3)); }
	inline CharacterMotor_t3633310444 * get_U24self_U249_3() const { return ___U24self_U249_3; }
	inline CharacterMotor_t3633310444 ** get_address_of_U24self_U249_3() { return &___U24self_U249_3; }
	inline void set_U24self_U249_3(CharacterMotor_t3633310444 * value)
	{
		___U24self_U249_3 = value;
		Il2CppCodeGenWriteBarrier(&___U24self_U249_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
