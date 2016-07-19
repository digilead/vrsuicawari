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

// PlatformInputController
struct  PlatformInputController_t1844164083  : public MonoBehaviour_t3012272455
{
public:
	// System.Boolean PlatformInputController::autoRotate
	bool ___autoRotate_2;
	// System.Single PlatformInputController::maxRotationSpeed
	float ___maxRotationSpeed_3;
	// CharacterMotor PlatformInputController::motor
	CharacterMotor_t3633310444 * ___motor_4;

public:
	inline static int32_t get_offset_of_autoRotate_2() { return static_cast<int32_t>(offsetof(PlatformInputController_t1844164083, ___autoRotate_2)); }
	inline bool get_autoRotate_2() const { return ___autoRotate_2; }
	inline bool* get_address_of_autoRotate_2() { return &___autoRotate_2; }
	inline void set_autoRotate_2(bool value)
	{
		___autoRotate_2 = value;
	}

	inline static int32_t get_offset_of_maxRotationSpeed_3() { return static_cast<int32_t>(offsetof(PlatformInputController_t1844164083, ___maxRotationSpeed_3)); }
	inline float get_maxRotationSpeed_3() const { return ___maxRotationSpeed_3; }
	inline float* get_address_of_maxRotationSpeed_3() { return &___maxRotationSpeed_3; }
	inline void set_maxRotationSpeed_3(float value)
	{
		___maxRotationSpeed_3 = value;
	}

	inline static int32_t get_offset_of_motor_4() { return static_cast<int32_t>(offsetof(PlatformInputController_t1844164083, ___motor_4)); }
	inline CharacterMotor_t3633310444 * get_motor_4() const { return ___motor_4; }
	inline CharacterMotor_t3633310444 ** get_address_of_motor_4() { return &___motor_4; }
	inline void set_motor_4(CharacterMotor_t3633310444 * value)
	{
		___motor_4 = value;
		Il2CppCodeGenWriteBarrier(&___motor_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
