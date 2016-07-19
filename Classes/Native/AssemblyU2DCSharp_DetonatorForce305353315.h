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
// UnityEngine.Collider[]
struct ColliderU5BU5D_t1585173756;

#include "AssemblyU2DCSharp_DetonatorComponent2605738101.h"
#include "UnityEngine_UnityEngine_Vector33525329789.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// DetonatorForce
struct  DetonatorForce_t305353315  : public DetonatorComponent_t2605738101
{
public:
	// System.Single DetonatorForce::_baseRadius
	float ____baseRadius_22;
	// System.Single DetonatorForce::_basePower
	float ____basePower_23;
	// System.Single DetonatorForce::_scaledRange
	float ____scaledRange_24;
	// System.Single DetonatorForce::_scaledIntensity
	float ____scaledIntensity_25;
	// System.Boolean DetonatorForce::_delayedExplosionStarted
	bool ____delayedExplosionStarted_26;
	// System.Single DetonatorForce::_explodeDelay
	float ____explodeDelay_27;
	// System.Single DetonatorForce::radius
	float ___radius_28;
	// System.Single DetonatorForce::power
	float ___power_29;
	// UnityEngine.GameObject DetonatorForce::fireObject
	GameObject_t4012695102 * ___fireObject_30;
	// System.Single DetonatorForce::fireObjectLife
	float ___fireObjectLife_31;
	// UnityEngine.Collider[] DetonatorForce::_colliders
	ColliderU5BU5D_t1585173756* ____colliders_32;
	// UnityEngine.GameObject DetonatorForce::_tempFireObject
	GameObject_t4012695102 * ____tempFireObject_33;
	// UnityEngine.Vector3 DetonatorForce::_explosionPosition
	Vector3_t3525329789  ____explosionPosition_34;

public:
	inline static int32_t get_offset_of__baseRadius_22() { return static_cast<int32_t>(offsetof(DetonatorForce_t305353315, ____baseRadius_22)); }
	inline float get__baseRadius_22() const { return ____baseRadius_22; }
	inline float* get_address_of__baseRadius_22() { return &____baseRadius_22; }
	inline void set__baseRadius_22(float value)
	{
		____baseRadius_22 = value;
	}

	inline static int32_t get_offset_of__basePower_23() { return static_cast<int32_t>(offsetof(DetonatorForce_t305353315, ____basePower_23)); }
	inline float get__basePower_23() const { return ____basePower_23; }
	inline float* get_address_of__basePower_23() { return &____basePower_23; }
	inline void set__basePower_23(float value)
	{
		____basePower_23 = value;
	}

	inline static int32_t get_offset_of__scaledRange_24() { return static_cast<int32_t>(offsetof(DetonatorForce_t305353315, ____scaledRange_24)); }
	inline float get__scaledRange_24() const { return ____scaledRange_24; }
	inline float* get_address_of__scaledRange_24() { return &____scaledRange_24; }
	inline void set__scaledRange_24(float value)
	{
		____scaledRange_24 = value;
	}

	inline static int32_t get_offset_of__scaledIntensity_25() { return static_cast<int32_t>(offsetof(DetonatorForce_t305353315, ____scaledIntensity_25)); }
	inline float get__scaledIntensity_25() const { return ____scaledIntensity_25; }
	inline float* get_address_of__scaledIntensity_25() { return &____scaledIntensity_25; }
	inline void set__scaledIntensity_25(float value)
	{
		____scaledIntensity_25 = value;
	}

	inline static int32_t get_offset_of__delayedExplosionStarted_26() { return static_cast<int32_t>(offsetof(DetonatorForce_t305353315, ____delayedExplosionStarted_26)); }
	inline bool get__delayedExplosionStarted_26() const { return ____delayedExplosionStarted_26; }
	inline bool* get_address_of__delayedExplosionStarted_26() { return &____delayedExplosionStarted_26; }
	inline void set__delayedExplosionStarted_26(bool value)
	{
		____delayedExplosionStarted_26 = value;
	}

	inline static int32_t get_offset_of__explodeDelay_27() { return static_cast<int32_t>(offsetof(DetonatorForce_t305353315, ____explodeDelay_27)); }
	inline float get__explodeDelay_27() const { return ____explodeDelay_27; }
	inline float* get_address_of__explodeDelay_27() { return &____explodeDelay_27; }
	inline void set__explodeDelay_27(float value)
	{
		____explodeDelay_27 = value;
	}

	inline static int32_t get_offset_of_radius_28() { return static_cast<int32_t>(offsetof(DetonatorForce_t305353315, ___radius_28)); }
	inline float get_radius_28() const { return ___radius_28; }
	inline float* get_address_of_radius_28() { return &___radius_28; }
	inline void set_radius_28(float value)
	{
		___radius_28 = value;
	}

	inline static int32_t get_offset_of_power_29() { return static_cast<int32_t>(offsetof(DetonatorForce_t305353315, ___power_29)); }
	inline float get_power_29() const { return ___power_29; }
	inline float* get_address_of_power_29() { return &___power_29; }
	inline void set_power_29(float value)
	{
		___power_29 = value;
	}

	inline static int32_t get_offset_of_fireObject_30() { return static_cast<int32_t>(offsetof(DetonatorForce_t305353315, ___fireObject_30)); }
	inline GameObject_t4012695102 * get_fireObject_30() const { return ___fireObject_30; }
	inline GameObject_t4012695102 ** get_address_of_fireObject_30() { return &___fireObject_30; }
	inline void set_fireObject_30(GameObject_t4012695102 * value)
	{
		___fireObject_30 = value;
		Il2CppCodeGenWriteBarrier(&___fireObject_30, value);
	}

	inline static int32_t get_offset_of_fireObjectLife_31() { return static_cast<int32_t>(offsetof(DetonatorForce_t305353315, ___fireObjectLife_31)); }
	inline float get_fireObjectLife_31() const { return ___fireObjectLife_31; }
	inline float* get_address_of_fireObjectLife_31() { return &___fireObjectLife_31; }
	inline void set_fireObjectLife_31(float value)
	{
		___fireObjectLife_31 = value;
	}

	inline static int32_t get_offset_of__colliders_32() { return static_cast<int32_t>(offsetof(DetonatorForce_t305353315, ____colliders_32)); }
	inline ColliderU5BU5D_t1585173756* get__colliders_32() const { return ____colliders_32; }
	inline ColliderU5BU5D_t1585173756** get_address_of__colliders_32() { return &____colliders_32; }
	inline void set__colliders_32(ColliderU5BU5D_t1585173756* value)
	{
		____colliders_32 = value;
		Il2CppCodeGenWriteBarrier(&____colliders_32, value);
	}

	inline static int32_t get_offset_of__tempFireObject_33() { return static_cast<int32_t>(offsetof(DetonatorForce_t305353315, ____tempFireObject_33)); }
	inline GameObject_t4012695102 * get__tempFireObject_33() const { return ____tempFireObject_33; }
	inline GameObject_t4012695102 ** get_address_of__tempFireObject_33() { return &____tempFireObject_33; }
	inline void set__tempFireObject_33(GameObject_t4012695102 * value)
	{
		____tempFireObject_33 = value;
		Il2CppCodeGenWriteBarrier(&____tempFireObject_33, value);
	}

	inline static int32_t get_offset_of__explosionPosition_34() { return static_cast<int32_t>(offsetof(DetonatorForce_t305353315, ____explosionPosition_34)); }
	inline Vector3_t3525329789  get__explosionPosition_34() const { return ____explosionPosition_34; }
	inline Vector3_t3525329789 * get_address_of__explosionPosition_34() { return &____explosionPosition_34; }
	inline void set__explosionPosition_34(Vector3_t3525329789  value)
	{
		____explosionPosition_34 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
