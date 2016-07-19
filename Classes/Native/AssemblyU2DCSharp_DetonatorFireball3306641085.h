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
#include "UnityEngine_UnityEngine_Color1588175760.h"
#include "UnityEngine_UnityEngine_Vector33525329789.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// DetonatorFireball
struct  DetonatorFireball_t3306641085  : public DetonatorComponent_t2605738101
{
public:
	// System.Single DetonatorFireball::_baseSize
	float ____baseSize_22;
	// System.Single DetonatorFireball::_baseDuration
	float ____baseDuration_23;
	// UnityEngine.Color DetonatorFireball::_baseColor
	Color_t1588175760  ____baseColor_24;
	// UnityEngine.Vector3 DetonatorFireball::_baseVelocity
	Vector3_t3525329789  ____baseVelocity_25;
	// System.Single DetonatorFireball::_scaledDuration
	float ____scaledDuration_26;
	// UnityEngine.GameObject DetonatorFireball::_fireballA
	GameObject_t4012695102 * ____fireballA_27;
	// DetonatorBurstEmitter DetonatorFireball::_fireballAEmitter
	DetonatorBurstEmitter_t2784708534 * ____fireballAEmitter_28;
	// UnityEngine.Material DetonatorFireball::fireballAMaterial
	Material_t1886596500 * ___fireballAMaterial_29;
	// UnityEngine.GameObject DetonatorFireball::_fireballB
	GameObject_t4012695102 * ____fireballB_30;
	// DetonatorBurstEmitter DetonatorFireball::_fireballBEmitter
	DetonatorBurstEmitter_t2784708534 * ____fireballBEmitter_31;
	// UnityEngine.Material DetonatorFireball::fireballBMaterial
	Material_t1886596500 * ___fireballBMaterial_32;
	// UnityEngine.GameObject DetonatorFireball::_fireShadow
	GameObject_t4012695102 * ____fireShadow_33;
	// DetonatorBurstEmitter DetonatorFireball::_fireShadowEmitter
	DetonatorBurstEmitter_t2784708534 * ____fireShadowEmitter_34;
	// UnityEngine.Material DetonatorFireball::fireShadowMaterial
	Material_t1886596500 * ___fireShadowMaterial_35;
	// System.Boolean DetonatorFireball::drawFireballA
	bool ___drawFireballA_36;
	// System.Boolean DetonatorFireball::drawFireballB
	bool ___drawFireballB_37;
	// System.Boolean DetonatorFireball::drawFireShadow
	bool ___drawFireShadow_38;
	// UnityEngine.Color DetonatorFireball::_detailAdjustedColor
	Color_t1588175760  ____detailAdjustedColor_39;

public:
	inline static int32_t get_offset_of__baseSize_22() { return static_cast<int32_t>(offsetof(DetonatorFireball_t3306641085, ____baseSize_22)); }
	inline float get__baseSize_22() const { return ____baseSize_22; }
	inline float* get_address_of__baseSize_22() { return &____baseSize_22; }
	inline void set__baseSize_22(float value)
	{
		____baseSize_22 = value;
	}

	inline static int32_t get_offset_of__baseDuration_23() { return static_cast<int32_t>(offsetof(DetonatorFireball_t3306641085, ____baseDuration_23)); }
	inline float get__baseDuration_23() const { return ____baseDuration_23; }
	inline float* get_address_of__baseDuration_23() { return &____baseDuration_23; }
	inline void set__baseDuration_23(float value)
	{
		____baseDuration_23 = value;
	}

	inline static int32_t get_offset_of__baseColor_24() { return static_cast<int32_t>(offsetof(DetonatorFireball_t3306641085, ____baseColor_24)); }
	inline Color_t1588175760  get__baseColor_24() const { return ____baseColor_24; }
	inline Color_t1588175760 * get_address_of__baseColor_24() { return &____baseColor_24; }
	inline void set__baseColor_24(Color_t1588175760  value)
	{
		____baseColor_24 = value;
	}

	inline static int32_t get_offset_of__baseVelocity_25() { return static_cast<int32_t>(offsetof(DetonatorFireball_t3306641085, ____baseVelocity_25)); }
	inline Vector3_t3525329789  get__baseVelocity_25() const { return ____baseVelocity_25; }
	inline Vector3_t3525329789 * get_address_of__baseVelocity_25() { return &____baseVelocity_25; }
	inline void set__baseVelocity_25(Vector3_t3525329789  value)
	{
		____baseVelocity_25 = value;
	}

	inline static int32_t get_offset_of__scaledDuration_26() { return static_cast<int32_t>(offsetof(DetonatorFireball_t3306641085, ____scaledDuration_26)); }
	inline float get__scaledDuration_26() const { return ____scaledDuration_26; }
	inline float* get_address_of__scaledDuration_26() { return &____scaledDuration_26; }
	inline void set__scaledDuration_26(float value)
	{
		____scaledDuration_26 = value;
	}

	inline static int32_t get_offset_of__fireballA_27() { return static_cast<int32_t>(offsetof(DetonatorFireball_t3306641085, ____fireballA_27)); }
	inline GameObject_t4012695102 * get__fireballA_27() const { return ____fireballA_27; }
	inline GameObject_t4012695102 ** get_address_of__fireballA_27() { return &____fireballA_27; }
	inline void set__fireballA_27(GameObject_t4012695102 * value)
	{
		____fireballA_27 = value;
		Il2CppCodeGenWriteBarrier(&____fireballA_27, value);
	}

	inline static int32_t get_offset_of__fireballAEmitter_28() { return static_cast<int32_t>(offsetof(DetonatorFireball_t3306641085, ____fireballAEmitter_28)); }
	inline DetonatorBurstEmitter_t2784708534 * get__fireballAEmitter_28() const { return ____fireballAEmitter_28; }
	inline DetonatorBurstEmitter_t2784708534 ** get_address_of__fireballAEmitter_28() { return &____fireballAEmitter_28; }
	inline void set__fireballAEmitter_28(DetonatorBurstEmitter_t2784708534 * value)
	{
		____fireballAEmitter_28 = value;
		Il2CppCodeGenWriteBarrier(&____fireballAEmitter_28, value);
	}

	inline static int32_t get_offset_of_fireballAMaterial_29() { return static_cast<int32_t>(offsetof(DetonatorFireball_t3306641085, ___fireballAMaterial_29)); }
	inline Material_t1886596500 * get_fireballAMaterial_29() const { return ___fireballAMaterial_29; }
	inline Material_t1886596500 ** get_address_of_fireballAMaterial_29() { return &___fireballAMaterial_29; }
	inline void set_fireballAMaterial_29(Material_t1886596500 * value)
	{
		___fireballAMaterial_29 = value;
		Il2CppCodeGenWriteBarrier(&___fireballAMaterial_29, value);
	}

	inline static int32_t get_offset_of__fireballB_30() { return static_cast<int32_t>(offsetof(DetonatorFireball_t3306641085, ____fireballB_30)); }
	inline GameObject_t4012695102 * get__fireballB_30() const { return ____fireballB_30; }
	inline GameObject_t4012695102 ** get_address_of__fireballB_30() { return &____fireballB_30; }
	inline void set__fireballB_30(GameObject_t4012695102 * value)
	{
		____fireballB_30 = value;
		Il2CppCodeGenWriteBarrier(&____fireballB_30, value);
	}

	inline static int32_t get_offset_of__fireballBEmitter_31() { return static_cast<int32_t>(offsetof(DetonatorFireball_t3306641085, ____fireballBEmitter_31)); }
	inline DetonatorBurstEmitter_t2784708534 * get__fireballBEmitter_31() const { return ____fireballBEmitter_31; }
	inline DetonatorBurstEmitter_t2784708534 ** get_address_of__fireballBEmitter_31() { return &____fireballBEmitter_31; }
	inline void set__fireballBEmitter_31(DetonatorBurstEmitter_t2784708534 * value)
	{
		____fireballBEmitter_31 = value;
		Il2CppCodeGenWriteBarrier(&____fireballBEmitter_31, value);
	}

	inline static int32_t get_offset_of_fireballBMaterial_32() { return static_cast<int32_t>(offsetof(DetonatorFireball_t3306641085, ___fireballBMaterial_32)); }
	inline Material_t1886596500 * get_fireballBMaterial_32() const { return ___fireballBMaterial_32; }
	inline Material_t1886596500 ** get_address_of_fireballBMaterial_32() { return &___fireballBMaterial_32; }
	inline void set_fireballBMaterial_32(Material_t1886596500 * value)
	{
		___fireballBMaterial_32 = value;
		Il2CppCodeGenWriteBarrier(&___fireballBMaterial_32, value);
	}

	inline static int32_t get_offset_of__fireShadow_33() { return static_cast<int32_t>(offsetof(DetonatorFireball_t3306641085, ____fireShadow_33)); }
	inline GameObject_t4012695102 * get__fireShadow_33() const { return ____fireShadow_33; }
	inline GameObject_t4012695102 ** get_address_of__fireShadow_33() { return &____fireShadow_33; }
	inline void set__fireShadow_33(GameObject_t4012695102 * value)
	{
		____fireShadow_33 = value;
		Il2CppCodeGenWriteBarrier(&____fireShadow_33, value);
	}

	inline static int32_t get_offset_of__fireShadowEmitter_34() { return static_cast<int32_t>(offsetof(DetonatorFireball_t3306641085, ____fireShadowEmitter_34)); }
	inline DetonatorBurstEmitter_t2784708534 * get__fireShadowEmitter_34() const { return ____fireShadowEmitter_34; }
	inline DetonatorBurstEmitter_t2784708534 ** get_address_of__fireShadowEmitter_34() { return &____fireShadowEmitter_34; }
	inline void set__fireShadowEmitter_34(DetonatorBurstEmitter_t2784708534 * value)
	{
		____fireShadowEmitter_34 = value;
		Il2CppCodeGenWriteBarrier(&____fireShadowEmitter_34, value);
	}

	inline static int32_t get_offset_of_fireShadowMaterial_35() { return static_cast<int32_t>(offsetof(DetonatorFireball_t3306641085, ___fireShadowMaterial_35)); }
	inline Material_t1886596500 * get_fireShadowMaterial_35() const { return ___fireShadowMaterial_35; }
	inline Material_t1886596500 ** get_address_of_fireShadowMaterial_35() { return &___fireShadowMaterial_35; }
	inline void set_fireShadowMaterial_35(Material_t1886596500 * value)
	{
		___fireShadowMaterial_35 = value;
		Il2CppCodeGenWriteBarrier(&___fireShadowMaterial_35, value);
	}

	inline static int32_t get_offset_of_drawFireballA_36() { return static_cast<int32_t>(offsetof(DetonatorFireball_t3306641085, ___drawFireballA_36)); }
	inline bool get_drawFireballA_36() const { return ___drawFireballA_36; }
	inline bool* get_address_of_drawFireballA_36() { return &___drawFireballA_36; }
	inline void set_drawFireballA_36(bool value)
	{
		___drawFireballA_36 = value;
	}

	inline static int32_t get_offset_of_drawFireballB_37() { return static_cast<int32_t>(offsetof(DetonatorFireball_t3306641085, ___drawFireballB_37)); }
	inline bool get_drawFireballB_37() const { return ___drawFireballB_37; }
	inline bool* get_address_of_drawFireballB_37() { return &___drawFireballB_37; }
	inline void set_drawFireballB_37(bool value)
	{
		___drawFireballB_37 = value;
	}

	inline static int32_t get_offset_of_drawFireShadow_38() { return static_cast<int32_t>(offsetof(DetonatorFireball_t3306641085, ___drawFireShadow_38)); }
	inline bool get_drawFireShadow_38() const { return ___drawFireShadow_38; }
	inline bool* get_address_of_drawFireShadow_38() { return &___drawFireShadow_38; }
	inline void set_drawFireShadow_38(bool value)
	{
		___drawFireShadow_38 = value;
	}

	inline static int32_t get_offset_of__detailAdjustedColor_39() { return static_cast<int32_t>(offsetof(DetonatorFireball_t3306641085, ____detailAdjustedColor_39)); }
	inline Color_t1588175760  get__detailAdjustedColor_39() const { return ____detailAdjustedColor_39; }
	inline Color_t1588175760 * get_address_of__detailAdjustedColor_39() { return &____detailAdjustedColor_39; }
	inline void set__detailAdjustedColor_39(Color_t1588175760  value)
	{
		____detailAdjustedColor_39 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
