﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.AudioSource[]
struct AudioSourceU5BU5D_t224472971;
// UnityEngine.AudioClip
struct AudioClip_t3714538611;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GA_FREE_JS_DemoPlaySound
struct  GA_FREE_JS_DemoPlaySound_t2267945680  : public MonoBehaviour_t3012272455
{
public:
	// System.Int32 GA_FREE_JS_DemoPlaySound::m_AudioSourceCount
	int32_t ___m_AudioSourceCount_2;
	// UnityEngine.AudioSource[] GA_FREE_JS_DemoPlaySound::m_AudioSource
	AudioSourceU5BU5D_t224472971* ___m_AudioSource_3;
	// UnityEngine.AudioClip GA_FREE_JS_DemoPlaySound::m_Audio_Button1
	AudioClip_t3714538611 * ___m_Audio_Button1_4;
	// UnityEngine.AudioClip GA_FREE_JS_DemoPlaySound::m_Audio_Button2
	AudioClip_t3714538611 * ___m_Audio_Button2_5;

public:
	inline static int32_t get_offset_of_m_AudioSourceCount_2() { return static_cast<int32_t>(offsetof(GA_FREE_JS_DemoPlaySound_t2267945680, ___m_AudioSourceCount_2)); }
	inline int32_t get_m_AudioSourceCount_2() const { return ___m_AudioSourceCount_2; }
	inline int32_t* get_address_of_m_AudioSourceCount_2() { return &___m_AudioSourceCount_2; }
	inline void set_m_AudioSourceCount_2(int32_t value)
	{
		___m_AudioSourceCount_2 = value;
	}

	inline static int32_t get_offset_of_m_AudioSource_3() { return static_cast<int32_t>(offsetof(GA_FREE_JS_DemoPlaySound_t2267945680, ___m_AudioSource_3)); }
	inline AudioSourceU5BU5D_t224472971* get_m_AudioSource_3() const { return ___m_AudioSource_3; }
	inline AudioSourceU5BU5D_t224472971** get_address_of_m_AudioSource_3() { return &___m_AudioSource_3; }
	inline void set_m_AudioSource_3(AudioSourceU5BU5D_t224472971* value)
	{
		___m_AudioSource_3 = value;
		Il2CppCodeGenWriteBarrier(&___m_AudioSource_3, value);
	}

	inline static int32_t get_offset_of_m_Audio_Button1_4() { return static_cast<int32_t>(offsetof(GA_FREE_JS_DemoPlaySound_t2267945680, ___m_Audio_Button1_4)); }
	inline AudioClip_t3714538611 * get_m_Audio_Button1_4() const { return ___m_Audio_Button1_4; }
	inline AudioClip_t3714538611 ** get_address_of_m_Audio_Button1_4() { return &___m_Audio_Button1_4; }
	inline void set_m_Audio_Button1_4(AudioClip_t3714538611 * value)
	{
		___m_Audio_Button1_4 = value;
		Il2CppCodeGenWriteBarrier(&___m_Audio_Button1_4, value);
	}

	inline static int32_t get_offset_of_m_Audio_Button2_5() { return static_cast<int32_t>(offsetof(GA_FREE_JS_DemoPlaySound_t2267945680, ___m_Audio_Button2_5)); }
	inline AudioClip_t3714538611 * get_m_Audio_Button2_5() const { return ___m_Audio_Button2_5; }
	inline AudioClip_t3714538611 ** get_address_of_m_Audio_Button2_5() { return &___m_Audio_Button2_5; }
	inline void set_m_Audio_Button2_5(AudioClip_t3714538611 * value)
	{
		___m_Audio_Button2_5 = value;
		Il2CppCodeGenWriteBarrier(&___m_Audio_Button2_5, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif