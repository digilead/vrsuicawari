#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.Dictionary`2<System.String,UnitySampleAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis>
struct Dictionary_2_t2313350812;
// System.Collections.Generic.Dictionary`2<System.String,UnitySampleAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton>
struct Dictionary_2_t2426271597;
// System.Collections.Generic.List`1<System.String>
struct List_1_t1765447871;

#include "mscorlib_System_Object837106420.h"
#include "UnityEngine_UnityEngine_Vector33525329789.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnitySampleAssets.CrossPlatformInput.VirtualInput
struct  VirtualInput_t3444624304  : public Il2CppObject
{
public:
	// System.Collections.Generic.Dictionary`2<System.String,UnitySampleAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis> UnitySampleAssets.CrossPlatformInput.VirtualInput::virtualAxes
	Dictionary_2_t2313350812 * ___virtualAxes_0;
	// System.Collections.Generic.Dictionary`2<System.String,UnitySampleAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton> UnitySampleAssets.CrossPlatformInput.VirtualInput::virtualButtons
	Dictionary_2_t2426271597 * ___virtualButtons_1;
	// System.Collections.Generic.List`1<System.String> UnitySampleAssets.CrossPlatformInput.VirtualInput::alwaysUseVirtual
	List_1_t1765447871 * ___alwaysUseVirtual_2;
	// UnityEngine.Vector3 UnitySampleAssets.CrossPlatformInput.VirtualInput::<virtualMousePosition>k__BackingField
	Vector3_t3525329789  ___U3CvirtualMousePositionU3Ek__BackingField_3;

public:
	inline static int32_t get_offset_of_virtualAxes_0() { return static_cast<int32_t>(offsetof(VirtualInput_t3444624304, ___virtualAxes_0)); }
	inline Dictionary_2_t2313350812 * get_virtualAxes_0() const { return ___virtualAxes_0; }
	inline Dictionary_2_t2313350812 ** get_address_of_virtualAxes_0() { return &___virtualAxes_0; }
	inline void set_virtualAxes_0(Dictionary_2_t2313350812 * value)
	{
		___virtualAxes_0 = value;
		Il2CppCodeGenWriteBarrier(&___virtualAxes_0, value);
	}

	inline static int32_t get_offset_of_virtualButtons_1() { return static_cast<int32_t>(offsetof(VirtualInput_t3444624304, ___virtualButtons_1)); }
	inline Dictionary_2_t2426271597 * get_virtualButtons_1() const { return ___virtualButtons_1; }
	inline Dictionary_2_t2426271597 ** get_address_of_virtualButtons_1() { return &___virtualButtons_1; }
	inline void set_virtualButtons_1(Dictionary_2_t2426271597 * value)
	{
		___virtualButtons_1 = value;
		Il2CppCodeGenWriteBarrier(&___virtualButtons_1, value);
	}

	inline static int32_t get_offset_of_alwaysUseVirtual_2() { return static_cast<int32_t>(offsetof(VirtualInput_t3444624304, ___alwaysUseVirtual_2)); }
	inline List_1_t1765447871 * get_alwaysUseVirtual_2() const { return ___alwaysUseVirtual_2; }
	inline List_1_t1765447871 ** get_address_of_alwaysUseVirtual_2() { return &___alwaysUseVirtual_2; }
	inline void set_alwaysUseVirtual_2(List_1_t1765447871 * value)
	{
		___alwaysUseVirtual_2 = value;
		Il2CppCodeGenWriteBarrier(&___alwaysUseVirtual_2, value);
	}

	inline static int32_t get_offset_of_U3CvirtualMousePositionU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(VirtualInput_t3444624304, ___U3CvirtualMousePositionU3Ek__BackingField_3)); }
	inline Vector3_t3525329789  get_U3CvirtualMousePositionU3Ek__BackingField_3() const { return ___U3CvirtualMousePositionU3Ek__BackingField_3; }
	inline Vector3_t3525329789 * get_address_of_U3CvirtualMousePositionU3Ek__BackingField_3() { return &___U3CvirtualMousePositionU3Ek__BackingField_3; }
	inline void set_U3CvirtualMousePositionU3Ek__BackingField_3(Vector3_t3525329789  value)
	{
		___U3CvirtualMousePositionU3Ek__BackingField_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
