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

#include "mscorlib_System_Object837106420.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GUIAnimFREE/cSounds
struct  cSounds_t150876039  : public Il2CppObject
{
public:
	// UnityEngine.AudioClip GUIAnimFREE/cSounds::m_Begin
	AudioClip_t3714538611 * ___m_Begin_0;
	// UnityEngine.AudioClip GUIAnimFREE/cSounds::m_AfterDelay
	AudioClip_t3714538611 * ___m_AfterDelay_1;
	// UnityEngine.AudioClip GUIAnimFREE/cSounds::m_End
	AudioClip_t3714538611 * ___m_End_2;

public:
	inline static int32_t get_offset_of_m_Begin_0() { return static_cast<int32_t>(offsetof(cSounds_t150876039, ___m_Begin_0)); }
	inline AudioClip_t3714538611 * get_m_Begin_0() const { return ___m_Begin_0; }
	inline AudioClip_t3714538611 ** get_address_of_m_Begin_0() { return &___m_Begin_0; }
	inline void set_m_Begin_0(AudioClip_t3714538611 * value)
	{
		___m_Begin_0 = value;
		Il2CppCodeGenWriteBarrier(&___m_Begin_0, value);
	}

	inline static int32_t get_offset_of_m_AfterDelay_1() { return static_cast<int32_t>(offsetof(cSounds_t150876039, ___m_AfterDelay_1)); }
	inline AudioClip_t3714538611 * get_m_AfterDelay_1() const { return ___m_AfterDelay_1; }
	inline AudioClip_t3714538611 ** get_address_of_m_AfterDelay_1() { return &___m_AfterDelay_1; }
	inline void set_m_AfterDelay_1(AudioClip_t3714538611 * value)
	{
		___m_AfterDelay_1 = value;
		Il2CppCodeGenWriteBarrier(&___m_AfterDelay_1, value);
	}

	inline static int32_t get_offset_of_m_End_2() { return static_cast<int32_t>(offsetof(cSounds_t150876039, ___m_End_2)); }
	inline AudioClip_t3714538611 * get_m_End_2() const { return ___m_End_2; }
	inline AudioClip_t3714538611 ** get_address_of_m_End_2() { return &___m_End_2; }
	inline void set_m_End_2(AudioClip_t3714538611 * value)
	{
		___m_End_2 = value;
		Il2CppCodeGenWriteBarrier(&___m_End_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
