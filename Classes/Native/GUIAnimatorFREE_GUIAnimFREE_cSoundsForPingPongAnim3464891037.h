#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.AudioClip
struct AudioClip_t3714538611;
// UnityEngine.AudioSource
struct AudioSource_t3628549054;

#include "mscorlib_System_Object837106420.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GUIAnimFREE/cSoundsForPingPongAnim
struct  cSoundsForPingPongAnim_t3464891037  : public Il2CppObject
{
public:
	// UnityEngine.AudioClip GUIAnimFREE/cSoundsForPingPongAnim::m_AudioClip
	AudioClip_t3714538611 * ___m_AudioClip_0;
	// System.Boolean GUIAnimFREE/cSoundsForPingPongAnim::m_Loop
	bool ___m_Loop_1;
	// UnityEngine.AudioSource GUIAnimFREE/cSoundsForPingPongAnim::m_AudioSource
	AudioSource_t3628549054 * ___m_AudioSource_2;

public:
	inline static int32_t get_offset_of_m_AudioClip_0() { return static_cast<int32_t>(offsetof(cSoundsForPingPongAnim_t3464891037, ___m_AudioClip_0)); }
	inline AudioClip_t3714538611 * get_m_AudioClip_0() const { return ___m_AudioClip_0; }
	inline AudioClip_t3714538611 ** get_address_of_m_AudioClip_0() { return &___m_AudioClip_0; }
	inline void set_m_AudioClip_0(AudioClip_t3714538611 * value)
	{
		___m_AudioClip_0 = value;
		Il2CppCodeGenWriteBarrier(&___m_AudioClip_0, value);
	}

	inline static int32_t get_offset_of_m_Loop_1() { return static_cast<int32_t>(offsetof(cSoundsForPingPongAnim_t3464891037, ___m_Loop_1)); }
	inline bool get_m_Loop_1() const { return ___m_Loop_1; }
	inline bool* get_address_of_m_Loop_1() { return &___m_Loop_1; }
	inline void set_m_Loop_1(bool value)
	{
		___m_Loop_1 = value;
	}

	inline static int32_t get_offset_of_m_AudioSource_2() { return static_cast<int32_t>(offsetof(cSoundsForPingPongAnim_t3464891037, ___m_AudioSource_2)); }
	inline AudioSource_t3628549054 * get_m_AudioSource_2() const { return ___m_AudioSource_2; }
	inline AudioSource_t3628549054 ** get_address_of_m_AudioSource_2() { return &___m_AudioSource_2; }
	inline void set_m_AudioSource_2(AudioSource_t3628549054 * value)
	{
		___m_AudioSource_2 = value;
		Il2CppCodeGenWriteBarrier(&___m_AudioSource_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
