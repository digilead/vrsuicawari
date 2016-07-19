#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.GameObject
struct GameObject_t4012695102;
// UnityEngine.Light
struct Light_t1596303683;

#include "AssemblyU2DCSharp_DetonatorComponent2605738101.h"
#include "UnityEngine_UnityEngine_Color1588175760.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// DetonatorLight
struct  DetonatorLight_t310705294  : public DetonatorComponent_t2605738101
{
public:
	// System.Single DetonatorLight::_baseIntensity
	float ____baseIntensity_22;
	// UnityEngine.Color DetonatorLight::_baseColor
	Color_t1588175760  ____baseColor_23;
	// System.Single DetonatorLight::_scaledDuration
	float ____scaledDuration_24;
	// System.Single DetonatorLight::_explodeTime
	float ____explodeTime_25;
	// UnityEngine.GameObject DetonatorLight::_light
	GameObject_t4012695102 * ____light_26;
	// UnityEngine.Light DetonatorLight::_lightComponent
	Light_t1596303683 * ____lightComponent_27;
	// System.Single DetonatorLight::intensity
	float ___intensity_28;
	// System.Single DetonatorLight::_reduceAmount
	float ____reduceAmount_29;

public:
	inline static int32_t get_offset_of__baseIntensity_22() { return static_cast<int32_t>(offsetof(DetonatorLight_t310705294, ____baseIntensity_22)); }
	inline float get__baseIntensity_22() const { return ____baseIntensity_22; }
	inline float* get_address_of__baseIntensity_22() { return &____baseIntensity_22; }
	inline void set__baseIntensity_22(float value)
	{
		____baseIntensity_22 = value;
	}

	inline static int32_t get_offset_of__baseColor_23() { return static_cast<int32_t>(offsetof(DetonatorLight_t310705294, ____baseColor_23)); }
	inline Color_t1588175760  get__baseColor_23() const { return ____baseColor_23; }
	inline Color_t1588175760 * get_address_of__baseColor_23() { return &____baseColor_23; }
	inline void set__baseColor_23(Color_t1588175760  value)
	{
		____baseColor_23 = value;
	}

	inline static int32_t get_offset_of__scaledDuration_24() { return static_cast<int32_t>(offsetof(DetonatorLight_t310705294, ____scaledDuration_24)); }
	inline float get__scaledDuration_24() const { return ____scaledDuration_24; }
	inline float* get_address_of__scaledDuration_24() { return &____scaledDuration_24; }
	inline void set__scaledDuration_24(float value)
	{
		____scaledDuration_24 = value;
	}

	inline static int32_t get_offset_of__explodeTime_25() { return static_cast<int32_t>(offsetof(DetonatorLight_t310705294, ____explodeTime_25)); }
	inline float get__explodeTime_25() const { return ____explodeTime_25; }
	inline float* get_address_of__explodeTime_25() { return &____explodeTime_25; }
	inline void set__explodeTime_25(float value)
	{
		____explodeTime_25 = value;
	}

	inline static int32_t get_offset_of__light_26() { return static_cast<int32_t>(offsetof(DetonatorLight_t310705294, ____light_26)); }
	inline GameObject_t4012695102 * get__light_26() const { return ____light_26; }
	inline GameObject_t4012695102 ** get_address_of__light_26() { return &____light_26; }
	inline void set__light_26(GameObject_t4012695102 * value)
	{
		____light_26 = value;
		Il2CppCodeGenWriteBarrier(&____light_26, value);
	}

	inline static int32_t get_offset_of__lightComponent_27() { return static_cast<int32_t>(offsetof(DetonatorLight_t310705294, ____lightComponent_27)); }
	inline Light_t1596303683 * get__lightComponent_27() const { return ____lightComponent_27; }
	inline Light_t1596303683 ** get_address_of__lightComponent_27() { return &____lightComponent_27; }
	inline void set__lightComponent_27(Light_t1596303683 * value)
	{
		____lightComponent_27 = value;
		Il2CppCodeGenWriteBarrier(&____lightComponent_27, value);
	}

	inline static int32_t get_offset_of_intensity_28() { return static_cast<int32_t>(offsetof(DetonatorLight_t310705294, ___intensity_28)); }
	inline float get_intensity_28() const { return ___intensity_28; }
	inline float* get_address_of_intensity_28() { return &___intensity_28; }
	inline void set_intensity_28(float value)
	{
		___intensity_28 = value;
	}

	inline static int32_t get_offset_of__reduceAmount_29() { return static_cast<int32_t>(offsetof(DetonatorLight_t310705294, ____reduceAmount_29)); }
	inline float get__reduceAmount_29() const { return ____reduceAmount_29; }
	inline float* get_address_of__reduceAmount_29() { return &____reduceAmount_29; }
	inline void set__reduceAmount_29(float value)
	{
		____reduceAmount_29 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
