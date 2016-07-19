#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.String
struct String_t;

#include "UnityEngine_UI_UnityEngine_UI_Scrollbar1410649103.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnitySampleAssets.CrossPlatformInput.InputAxisScrollbar
struct  InputAxisScrollbar_t1179832332  : public Scrollbar_t1410649103
{
public:
	// System.String UnitySampleAssets.CrossPlatformInput.InputAxisScrollbar::axis
	String_t* ___axis_27;

public:
	inline static int32_t get_offset_of_axis_27() { return static_cast<int32_t>(offsetof(InputAxisScrollbar_t1179832332, ___axis_27)); }
	inline String_t* get_axis_27() const { return ___axis_27; }
	inline String_t** get_address_of_axis_27() { return &___axis_27; }
	inline void set_axis_27(String_t* value)
	{
		___axis_27 = value;
		Il2CppCodeGenWriteBarrier(&___axis_27, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
