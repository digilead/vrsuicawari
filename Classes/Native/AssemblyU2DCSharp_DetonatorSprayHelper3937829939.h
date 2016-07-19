#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Material
struct Material_t1886596500;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// DetonatorSprayHelper
struct  DetonatorSprayHelper_t3937829939  : public MonoBehaviour_t3012272455
{
public:
	// System.Single DetonatorSprayHelper::startTimeMin
	float ___startTimeMin_2;
	// System.Single DetonatorSprayHelper::startTimeMax
	float ___startTimeMax_3;
	// System.Single DetonatorSprayHelper::stopTimeMin
	float ___stopTimeMin_4;
	// System.Single DetonatorSprayHelper::stopTimeMax
	float ___stopTimeMax_5;
	// UnityEngine.Material DetonatorSprayHelper::firstMaterial
	Material_t1886596500 * ___firstMaterial_6;
	// UnityEngine.Material DetonatorSprayHelper::secondMaterial
	Material_t1886596500 * ___secondMaterial_7;
	// System.Single DetonatorSprayHelper::startTime
	float ___startTime_8;
	// System.Single DetonatorSprayHelper::stopTime
	float ___stopTime_9;
	// System.Boolean DetonatorSprayHelper::isReallyOn
	bool ___isReallyOn_10;

public:
	inline static int32_t get_offset_of_startTimeMin_2() { return static_cast<int32_t>(offsetof(DetonatorSprayHelper_t3937829939, ___startTimeMin_2)); }
	inline float get_startTimeMin_2() const { return ___startTimeMin_2; }
	inline float* get_address_of_startTimeMin_2() { return &___startTimeMin_2; }
	inline void set_startTimeMin_2(float value)
	{
		___startTimeMin_2 = value;
	}

	inline static int32_t get_offset_of_startTimeMax_3() { return static_cast<int32_t>(offsetof(DetonatorSprayHelper_t3937829939, ___startTimeMax_3)); }
	inline float get_startTimeMax_3() const { return ___startTimeMax_3; }
	inline float* get_address_of_startTimeMax_3() { return &___startTimeMax_3; }
	inline void set_startTimeMax_3(float value)
	{
		___startTimeMax_3 = value;
	}

	inline static int32_t get_offset_of_stopTimeMin_4() { return static_cast<int32_t>(offsetof(DetonatorSprayHelper_t3937829939, ___stopTimeMin_4)); }
	inline float get_stopTimeMin_4() const { return ___stopTimeMin_4; }
	inline float* get_address_of_stopTimeMin_4() { return &___stopTimeMin_4; }
	inline void set_stopTimeMin_4(float value)
	{
		___stopTimeMin_4 = value;
	}

	inline static int32_t get_offset_of_stopTimeMax_5() { return static_cast<int32_t>(offsetof(DetonatorSprayHelper_t3937829939, ___stopTimeMax_5)); }
	inline float get_stopTimeMax_5() const { return ___stopTimeMax_5; }
	inline float* get_address_of_stopTimeMax_5() { return &___stopTimeMax_5; }
	inline void set_stopTimeMax_5(float value)
	{
		___stopTimeMax_5 = value;
	}

	inline static int32_t get_offset_of_firstMaterial_6() { return static_cast<int32_t>(offsetof(DetonatorSprayHelper_t3937829939, ___firstMaterial_6)); }
	inline Material_t1886596500 * get_firstMaterial_6() const { return ___firstMaterial_6; }
	inline Material_t1886596500 ** get_address_of_firstMaterial_6() { return &___firstMaterial_6; }
	inline void set_firstMaterial_6(Material_t1886596500 * value)
	{
		___firstMaterial_6 = value;
		Il2CppCodeGenWriteBarrier(&___firstMaterial_6, value);
	}

	inline static int32_t get_offset_of_secondMaterial_7() { return static_cast<int32_t>(offsetof(DetonatorSprayHelper_t3937829939, ___secondMaterial_7)); }
	inline Material_t1886596500 * get_secondMaterial_7() const { return ___secondMaterial_7; }
	inline Material_t1886596500 ** get_address_of_secondMaterial_7() { return &___secondMaterial_7; }
	inline void set_secondMaterial_7(Material_t1886596500 * value)
	{
		___secondMaterial_7 = value;
		Il2CppCodeGenWriteBarrier(&___secondMaterial_7, value);
	}

	inline static int32_t get_offset_of_startTime_8() { return static_cast<int32_t>(offsetof(DetonatorSprayHelper_t3937829939, ___startTime_8)); }
	inline float get_startTime_8() const { return ___startTime_8; }
	inline float* get_address_of_startTime_8() { return &___startTime_8; }
	inline void set_startTime_8(float value)
	{
		___startTime_8 = value;
	}

	inline static int32_t get_offset_of_stopTime_9() { return static_cast<int32_t>(offsetof(DetonatorSprayHelper_t3937829939, ___stopTime_9)); }
	inline float get_stopTime_9() const { return ___stopTime_9; }
	inline float* get_address_of_stopTime_9() { return &___stopTime_9; }
	inline void set_stopTime_9(float value)
	{
		___stopTime_9 = value;
	}

	inline static int32_t get_offset_of_isReallyOn_10() { return static_cast<int32_t>(offsetof(DetonatorSprayHelper_t3937829939, ___isReallyOn_10)); }
	inline bool get_isReallyOn_10() const { return ___isReallyOn_10; }
	inline bool* get_address_of_isReallyOn_10() { return &___isReallyOn_10; }
	inline void set_isReallyOn_10(bool value)
	{
		___isReallyOn_10 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
