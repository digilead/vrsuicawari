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
// DetonatorBurstEmitter
struct DetonatorBurstEmitter_t2784708534;
// UnityEngine.Material
struct Material_t1886596500;

#include "AssemblyU2DCSharp_DetonatorComponent2605738101.h"
#include "UnityEngine_UnityEngine_Vector33525329789.h"
#include "UnityEngine_UnityEngine_Color1588175760.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// DetonatorSparks
struct  DetonatorSparks_t1248628926  : public DetonatorComponent_t2605738101
{
public:
	// System.Single DetonatorSparks::_baseSize
	float ____baseSize_22;
	// System.Single DetonatorSparks::_baseDuration
	float ____baseDuration_23;
	// UnityEngine.Vector3 DetonatorSparks::_baseVelocity
	Vector3_t3525329789  ____baseVelocity_24;
	// UnityEngine.Color DetonatorSparks::_baseColor
	Color_t1588175760  ____baseColor_25;
	// UnityEngine.Vector3 DetonatorSparks::_baseForce
	Vector3_t3525329789  ____baseForce_26;
	// System.Single DetonatorSparks::_scaledDuration
	float ____scaledDuration_27;
	// UnityEngine.GameObject DetonatorSparks::_sparks
	GameObject_t4012695102 * ____sparks_28;
	// DetonatorBurstEmitter DetonatorSparks::_sparksEmitter
	DetonatorBurstEmitter_t2784708534 * ____sparksEmitter_29;
	// UnityEngine.Material DetonatorSparks::sparksMaterial
	Material_t1886596500 * ___sparksMaterial_30;

public:
	inline static int32_t get_offset_of__baseSize_22() { return static_cast<int32_t>(offsetof(DetonatorSparks_t1248628926, ____baseSize_22)); }
	inline float get__baseSize_22() const { return ____baseSize_22; }
	inline float* get_address_of__baseSize_22() { return &____baseSize_22; }
	inline void set__baseSize_22(float value)
	{
		____baseSize_22 = value;
	}

	inline static int32_t get_offset_of__baseDuration_23() { return static_cast<int32_t>(offsetof(DetonatorSparks_t1248628926, ____baseDuration_23)); }
	inline float get__baseDuration_23() const { return ____baseDuration_23; }
	inline float* get_address_of__baseDuration_23() { return &____baseDuration_23; }
	inline void set__baseDuration_23(float value)
	{
		____baseDuration_23 = value;
	}

	inline static int32_t get_offset_of__baseVelocity_24() { return static_cast<int32_t>(offsetof(DetonatorSparks_t1248628926, ____baseVelocity_24)); }
	inline Vector3_t3525329789  get__baseVelocity_24() const { return ____baseVelocity_24; }
	inline Vector3_t3525329789 * get_address_of__baseVelocity_24() { return &____baseVelocity_24; }
	inline void set__baseVelocity_24(Vector3_t3525329789  value)
	{
		____baseVelocity_24 = value;
	}

	inline static int32_t get_offset_of__baseColor_25() { return static_cast<int32_t>(offsetof(DetonatorSparks_t1248628926, ____baseColor_25)); }
	inline Color_t1588175760  get__baseColor_25() const { return ____baseColor_25; }
	inline Color_t1588175760 * get_address_of__baseColor_25() { return &____baseColor_25; }
	inline void set__baseColor_25(Color_t1588175760  value)
	{
		____baseColor_25 = value;
	}

	inline static int32_t get_offset_of__baseForce_26() { return static_cast<int32_t>(offsetof(DetonatorSparks_t1248628926, ____baseForce_26)); }
	inline Vector3_t3525329789  get__baseForce_26() const { return ____baseForce_26; }
	inline Vector3_t3525329789 * get_address_of__baseForce_26() { return &____baseForce_26; }
	inline void set__baseForce_26(Vector3_t3525329789  value)
	{
		____baseForce_26 = value;
	}

	inline static int32_t get_offset_of__scaledDuration_27() { return static_cast<int32_t>(offsetof(DetonatorSparks_t1248628926, ____scaledDuration_27)); }
	inline float get__scaledDuration_27() const { return ____scaledDuration_27; }
	inline float* get_address_of__scaledDuration_27() { return &____scaledDuration_27; }
	inline void set__scaledDuration_27(float value)
	{
		____scaledDuration_27 = value;
	}

	inline static int32_t get_offset_of__sparks_28() { return static_cast<int32_t>(offsetof(DetonatorSparks_t1248628926, ____sparks_28)); }
	inline GameObject_t4012695102 * get__sparks_28() const { return ____sparks_28; }
	inline GameObject_t4012695102 ** get_address_of__sparks_28() { return &____sparks_28; }
	inline void set__sparks_28(GameObject_t4012695102 * value)
	{
		____sparks_28 = value;
		Il2CppCodeGenWriteBarrier(&____sparks_28, value);
	}

	inline static int32_t get_offset_of__sparksEmitter_29() { return static_cast<int32_t>(offsetof(DetonatorSparks_t1248628926, ____sparksEmitter_29)); }
	inline DetonatorBurstEmitter_t2784708534 * get__sparksEmitter_29() const { return ____sparksEmitter_29; }
	inline DetonatorBurstEmitter_t2784708534 ** get_address_of__sparksEmitter_29() { return &____sparksEmitter_29; }
	inline void set__sparksEmitter_29(DetonatorBurstEmitter_t2784708534 * value)
	{
		____sparksEmitter_29 = value;
		Il2CppCodeGenWriteBarrier(&____sparksEmitter_29, value);
	}

	inline static int32_t get_offset_of_sparksMaterial_30() { return static_cast<int32_t>(offsetof(DetonatorSparks_t1248628926, ___sparksMaterial_30)); }
	inline Material_t1886596500 * get_sparksMaterial_30() const { return ___sparksMaterial_30; }
	inline Material_t1886596500 ** get_address_of_sparksMaterial_30() { return &___sparksMaterial_30; }
	inline void set_sparksMaterial_30(Material_t1886596500 * value)
	{
		___sparksMaterial_30 = value;
		Il2CppCodeGenWriteBarrier(&___sparksMaterial_30, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
