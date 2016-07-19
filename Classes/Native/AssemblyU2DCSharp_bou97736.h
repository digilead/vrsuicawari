#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>


#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"
#include "UnityEngine_UnityEngine_Vector33525329789.h"
#include "UnityEngine_UnityEngine_Quaternion1891715979.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// bou
struct  bou_t97736  : public MonoBehaviour_t3012272455
{
public:
	// System.Int32 bou::animCnt
	int32_t ___animCnt_2;
	// System.Int32 bou::walkCnt
	int32_t ___walkCnt_3;
	// System.Boolean bou::bHit
	bool ___bHit_4;
	// UnityEngine.Vector3 bou::BaseV3
	Vector3_t3525329789  ___BaseV3_5;
	// UnityEngine.Quaternion bou::baseRot
	Quaternion_t1891715979  ___baseRot_6;
	// UnityEngine.Vector3 bou::furiV3
	Vector3_t3525329789  ___furiV3_7;

public:
	inline static int32_t get_offset_of_animCnt_2() { return static_cast<int32_t>(offsetof(bou_t97736, ___animCnt_2)); }
	inline int32_t get_animCnt_2() const { return ___animCnt_2; }
	inline int32_t* get_address_of_animCnt_2() { return &___animCnt_2; }
	inline void set_animCnt_2(int32_t value)
	{
		___animCnt_2 = value;
	}

	inline static int32_t get_offset_of_walkCnt_3() { return static_cast<int32_t>(offsetof(bou_t97736, ___walkCnt_3)); }
	inline int32_t get_walkCnt_3() const { return ___walkCnt_3; }
	inline int32_t* get_address_of_walkCnt_3() { return &___walkCnt_3; }
	inline void set_walkCnt_3(int32_t value)
	{
		___walkCnt_3 = value;
	}

	inline static int32_t get_offset_of_bHit_4() { return static_cast<int32_t>(offsetof(bou_t97736, ___bHit_4)); }
	inline bool get_bHit_4() const { return ___bHit_4; }
	inline bool* get_address_of_bHit_4() { return &___bHit_4; }
	inline void set_bHit_4(bool value)
	{
		___bHit_4 = value;
	}

	inline static int32_t get_offset_of_BaseV3_5() { return static_cast<int32_t>(offsetof(bou_t97736, ___BaseV3_5)); }
	inline Vector3_t3525329789  get_BaseV3_5() const { return ___BaseV3_5; }
	inline Vector3_t3525329789 * get_address_of_BaseV3_5() { return &___BaseV3_5; }
	inline void set_BaseV3_5(Vector3_t3525329789  value)
	{
		___BaseV3_5 = value;
	}

	inline static int32_t get_offset_of_baseRot_6() { return static_cast<int32_t>(offsetof(bou_t97736, ___baseRot_6)); }
	inline Quaternion_t1891715979  get_baseRot_6() const { return ___baseRot_6; }
	inline Quaternion_t1891715979 * get_address_of_baseRot_6() { return &___baseRot_6; }
	inline void set_baseRot_6(Quaternion_t1891715979  value)
	{
		___baseRot_6 = value;
	}

	inline static int32_t get_offset_of_furiV3_7() { return static_cast<int32_t>(offsetof(bou_t97736, ___furiV3_7)); }
	inline Vector3_t3525329789  get_furiV3_7() const { return ___furiV3_7; }
	inline Vector3_t3525329789 * get_address_of_furiV3_7() { return &___furiV3_7; }
	inline void set_furiV3_7(Vector3_t3525329789  value)
	{
		___furiV3_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
