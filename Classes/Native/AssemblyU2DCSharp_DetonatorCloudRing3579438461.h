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

// DetonatorCloudRing
struct  DetonatorCloudRing_t3579438461  : public DetonatorComponent_t2605738101
{
public:
	// System.Single DetonatorCloudRing::_baseSize
	float ____baseSize_22;
	// System.Single DetonatorCloudRing::_baseDuration
	float ____baseDuration_23;
	// UnityEngine.Vector3 DetonatorCloudRing::_baseVelocity
	Vector3_t3525329789  ____baseVelocity_24;
	// UnityEngine.Color DetonatorCloudRing::_baseColor
	Color_t1588175760  ____baseColor_25;
	// UnityEngine.Vector3 DetonatorCloudRing::_baseForce
	Vector3_t3525329789  ____baseForce_26;
	// UnityEngine.GameObject DetonatorCloudRing::_cloudRing
	GameObject_t4012695102 * ____cloudRing_27;
	// DetonatorBurstEmitter DetonatorCloudRing::_cloudRingEmitter
	DetonatorBurstEmitter_t2784708534 * ____cloudRingEmitter_28;
	// UnityEngine.Material DetonatorCloudRing::cloudRingMaterial
	Material_t1886596500 * ___cloudRingMaterial_29;

public:
	inline static int32_t get_offset_of__baseSize_22() { return static_cast<int32_t>(offsetof(DetonatorCloudRing_t3579438461, ____baseSize_22)); }
	inline float get__baseSize_22() const { return ____baseSize_22; }
	inline float* get_address_of__baseSize_22() { return &____baseSize_22; }
	inline void set__baseSize_22(float value)
	{
		____baseSize_22 = value;
	}

	inline static int32_t get_offset_of__baseDuration_23() { return static_cast<int32_t>(offsetof(DetonatorCloudRing_t3579438461, ____baseDuration_23)); }
	inline float get__baseDuration_23() const { return ____baseDuration_23; }
	inline float* get_address_of__baseDuration_23() { return &____baseDuration_23; }
	inline void set__baseDuration_23(float value)
	{
		____baseDuration_23 = value;
	}

	inline static int32_t get_offset_of__baseVelocity_24() { return static_cast<int32_t>(offsetof(DetonatorCloudRing_t3579438461, ____baseVelocity_24)); }
	inline Vector3_t3525329789  get__baseVelocity_24() const { return ____baseVelocity_24; }
	inline Vector3_t3525329789 * get_address_of__baseVelocity_24() { return &____baseVelocity_24; }
	inline void set__baseVelocity_24(Vector3_t3525329789  value)
	{
		____baseVelocity_24 = value;
	}

	inline static int32_t get_offset_of__baseColor_25() { return static_cast<int32_t>(offsetof(DetonatorCloudRing_t3579438461, ____baseColor_25)); }
	inline Color_t1588175760  get__baseColor_25() const { return ____baseColor_25; }
	inline Color_t1588175760 * get_address_of__baseColor_25() { return &____baseColor_25; }
	inline void set__baseColor_25(Color_t1588175760  value)
	{
		____baseColor_25 = value;
	}

	inline static int32_t get_offset_of__baseForce_26() { return static_cast<int32_t>(offsetof(DetonatorCloudRing_t3579438461, ____baseForce_26)); }
	inline Vector3_t3525329789  get__baseForce_26() const { return ____baseForce_26; }
	inline Vector3_t3525329789 * get_address_of__baseForce_26() { return &____baseForce_26; }
	inline void set__baseForce_26(Vector3_t3525329789  value)
	{
		____baseForce_26 = value;
	}

	inline static int32_t get_offset_of__cloudRing_27() { return static_cast<int32_t>(offsetof(DetonatorCloudRing_t3579438461, ____cloudRing_27)); }
	inline GameObject_t4012695102 * get__cloudRing_27() const { return ____cloudRing_27; }
	inline GameObject_t4012695102 ** get_address_of__cloudRing_27() { return &____cloudRing_27; }
	inline void set__cloudRing_27(GameObject_t4012695102 * value)
	{
		____cloudRing_27 = value;
		Il2CppCodeGenWriteBarrier(&____cloudRing_27, value);
	}

	inline static int32_t get_offset_of__cloudRingEmitter_28() { return static_cast<int32_t>(offsetof(DetonatorCloudRing_t3579438461, ____cloudRingEmitter_28)); }
	inline DetonatorBurstEmitter_t2784708534 * get__cloudRingEmitter_28() const { return ____cloudRingEmitter_28; }
	inline DetonatorBurstEmitter_t2784708534 ** get_address_of__cloudRingEmitter_28() { return &____cloudRingEmitter_28; }
	inline void set__cloudRingEmitter_28(DetonatorBurstEmitter_t2784708534 * value)
	{
		____cloudRingEmitter_28 = value;
		Il2CppCodeGenWriteBarrier(&____cloudRingEmitter_28, value);
	}

	inline static int32_t get_offset_of_cloudRingMaterial_29() { return static_cast<int32_t>(offsetof(DetonatorCloudRing_t3579438461, ___cloudRingMaterial_29)); }
	inline Material_t1886596500 * get_cloudRingMaterial_29() const { return ___cloudRingMaterial_29; }
	inline Material_t1886596500 ** get_address_of_cloudRingMaterial_29() { return &___cloudRingMaterial_29; }
	inline void set_cloudRingMaterial_29(Material_t1886596500 * value)
	{
		___cloudRingMaterial_29 = value;
		Il2CppCodeGenWriteBarrier(&___cloudRingMaterial_29, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
