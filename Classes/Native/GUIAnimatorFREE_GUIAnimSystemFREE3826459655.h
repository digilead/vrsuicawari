﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// GUIAnimSystemFREE
struct GUIAnimSystemFREE_t3826459655;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"
#include "GUIAnimatorFREE_GUIAnimSystemFREE_eAnimationMode3308135138.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GUIAnimSystemFREE
struct  GUIAnimSystemFREE_t3826459655  : public MonoBehaviour_t3012272455
{
public:
	// System.Single GUIAnimSystemFREE::m_GUISpeed
	float ___m_GUISpeed_3;
	// System.Boolean GUIAnimSystemFREE::m_AutoAnimation
	bool ___m_AutoAnimation_4;
	// GUIAnimSystemFREE/eAnimationMode GUIAnimSystemFREE::m_AnimationMode
	int32_t ___m_AnimationMode_5;
	// System.Single GUIAnimSystemFREE::m_IdleTime
	float ___m_IdleTime_6;
	// System.Boolean GUIAnimSystemFREE::m_SetShowFreeVersion
	bool ___m_SetShowFreeVersion_7;
	// System.Single GUIAnimSystemFREE::m_ShowFreeVersionText
	float ___m_ShowFreeVersionText_8;

public:
	inline static int32_t get_offset_of_m_GUISpeed_3() { return static_cast<int32_t>(offsetof(GUIAnimSystemFREE_t3826459655, ___m_GUISpeed_3)); }
	inline float get_m_GUISpeed_3() const { return ___m_GUISpeed_3; }
	inline float* get_address_of_m_GUISpeed_3() { return &___m_GUISpeed_3; }
	inline void set_m_GUISpeed_3(float value)
	{
		___m_GUISpeed_3 = value;
	}

	inline static int32_t get_offset_of_m_AutoAnimation_4() { return static_cast<int32_t>(offsetof(GUIAnimSystemFREE_t3826459655, ___m_AutoAnimation_4)); }
	inline bool get_m_AutoAnimation_4() const { return ___m_AutoAnimation_4; }
	inline bool* get_address_of_m_AutoAnimation_4() { return &___m_AutoAnimation_4; }
	inline void set_m_AutoAnimation_4(bool value)
	{
		___m_AutoAnimation_4 = value;
	}

	inline static int32_t get_offset_of_m_AnimationMode_5() { return static_cast<int32_t>(offsetof(GUIAnimSystemFREE_t3826459655, ___m_AnimationMode_5)); }
	inline int32_t get_m_AnimationMode_5() const { return ___m_AnimationMode_5; }
	inline int32_t* get_address_of_m_AnimationMode_5() { return &___m_AnimationMode_5; }
	inline void set_m_AnimationMode_5(int32_t value)
	{
		___m_AnimationMode_5 = value;
	}

	inline static int32_t get_offset_of_m_IdleTime_6() { return static_cast<int32_t>(offsetof(GUIAnimSystemFREE_t3826459655, ___m_IdleTime_6)); }
	inline float get_m_IdleTime_6() const { return ___m_IdleTime_6; }
	inline float* get_address_of_m_IdleTime_6() { return &___m_IdleTime_6; }
	inline void set_m_IdleTime_6(float value)
	{
		___m_IdleTime_6 = value;
	}

	inline static int32_t get_offset_of_m_SetShowFreeVersion_7() { return static_cast<int32_t>(offsetof(GUIAnimSystemFREE_t3826459655, ___m_SetShowFreeVersion_7)); }
	inline bool get_m_SetShowFreeVersion_7() const { return ___m_SetShowFreeVersion_7; }
	inline bool* get_address_of_m_SetShowFreeVersion_7() { return &___m_SetShowFreeVersion_7; }
	inline void set_m_SetShowFreeVersion_7(bool value)
	{
		___m_SetShowFreeVersion_7 = value;
	}

	inline static int32_t get_offset_of_m_ShowFreeVersionText_8() { return static_cast<int32_t>(offsetof(GUIAnimSystemFREE_t3826459655, ___m_ShowFreeVersionText_8)); }
	inline float get_m_ShowFreeVersionText_8() const { return ___m_ShowFreeVersionText_8; }
	inline float* get_address_of_m_ShowFreeVersionText_8() { return &___m_ShowFreeVersionText_8; }
	inline void set_m_ShowFreeVersionText_8(float value)
	{
		___m_ShowFreeVersionText_8 = value;
	}
};

struct GUIAnimSystemFREE_t3826459655_StaticFields
{
public:
	// GUIAnimSystemFREE GUIAnimSystemFREE::instance
	GUIAnimSystemFREE_t3826459655 * ___instance_2;

public:
	inline static int32_t get_offset_of_instance_2() { return static_cast<int32_t>(offsetof(GUIAnimSystemFREE_t3826459655_StaticFields, ___instance_2)); }
	inline GUIAnimSystemFREE_t3826459655 * get_instance_2() const { return ___instance_2; }
	inline GUIAnimSystemFREE_t3826459655 ** get_address_of_instance_2() { return &___instance_2; }
	inline void set_instance_2(GUIAnimSystemFREE_t3826459655 * value)
	{
		___instance_2 = value;
		Il2CppCodeGenWriteBarrier(&___instance_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
