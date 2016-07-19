#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Camera
struct Camera_t3533968274;
// UnitySampleAssets.Utility.CurveControlledBob
struct CurveControlledBob_t3427460376;
// UnitySampleAssets.Utility.LerpControlledBob
struct LerpControlledBob_t1201268048;
// UnitySampleAssets.Characters.FirstPerson.RigidbodyFirstPersonController
struct RigidbodyFirstPersonController_t2706339155;
// UnitySampleAssets.Utility.CameraRefocus
struct CameraRefocus_t392674784;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"
#include "UnityEngine_UnityEngine_Vector33525329789.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnitySampleAssets.Characters.FirstPerson.HeadBob
struct  HeadBob_t6749556  : public MonoBehaviour_t3012272455
{
public:
	// UnityEngine.Camera UnitySampleAssets.Characters.FirstPerson.HeadBob::_camera
	Camera_t3533968274 * ____camera_2;
	// UnitySampleAssets.Utility.CurveControlledBob UnitySampleAssets.Characters.FirstPerson.HeadBob::motionBob
	CurveControlledBob_t3427460376 * ___motionBob_3;
	// UnitySampleAssets.Utility.LerpControlledBob UnitySampleAssets.Characters.FirstPerson.HeadBob::jumpAndLandingBob
	LerpControlledBob_t1201268048 * ___jumpAndLandingBob_4;
	// UnitySampleAssets.Characters.FirstPerson.RigidbodyFirstPersonController UnitySampleAssets.Characters.FirstPerson.HeadBob::rigidbodyFirstPersonController
	RigidbodyFirstPersonController_t2706339155 * ___rigidbodyFirstPersonController_5;
	// System.Single UnitySampleAssets.Characters.FirstPerson.HeadBob::StrideInterval
	float ___StrideInterval_6;
	// System.Single UnitySampleAssets.Characters.FirstPerson.HeadBob::RunningStrideLengthen
	float ___RunningStrideLengthen_7;
	// UnitySampleAssets.Utility.CameraRefocus UnitySampleAssets.Characters.FirstPerson.HeadBob::cameraRefocus
	CameraRefocus_t392674784 * ___cameraRefocus_8;
	// System.Boolean UnitySampleAssets.Characters.FirstPerson.HeadBob::previouslyGrounded
	bool ___previouslyGrounded_9;
	// UnityEngine.Vector3 UnitySampleAssets.Characters.FirstPerson.HeadBob::originalCameraPosition
	Vector3_t3525329789  ___originalCameraPosition_10;

public:
	inline static int32_t get_offset_of__camera_2() { return static_cast<int32_t>(offsetof(HeadBob_t6749556, ____camera_2)); }
	inline Camera_t3533968274 * get__camera_2() const { return ____camera_2; }
	inline Camera_t3533968274 ** get_address_of__camera_2() { return &____camera_2; }
	inline void set__camera_2(Camera_t3533968274 * value)
	{
		____camera_2 = value;
		Il2CppCodeGenWriteBarrier(&____camera_2, value);
	}

	inline static int32_t get_offset_of_motionBob_3() { return static_cast<int32_t>(offsetof(HeadBob_t6749556, ___motionBob_3)); }
	inline CurveControlledBob_t3427460376 * get_motionBob_3() const { return ___motionBob_3; }
	inline CurveControlledBob_t3427460376 ** get_address_of_motionBob_3() { return &___motionBob_3; }
	inline void set_motionBob_3(CurveControlledBob_t3427460376 * value)
	{
		___motionBob_3 = value;
		Il2CppCodeGenWriteBarrier(&___motionBob_3, value);
	}

	inline static int32_t get_offset_of_jumpAndLandingBob_4() { return static_cast<int32_t>(offsetof(HeadBob_t6749556, ___jumpAndLandingBob_4)); }
	inline LerpControlledBob_t1201268048 * get_jumpAndLandingBob_4() const { return ___jumpAndLandingBob_4; }
	inline LerpControlledBob_t1201268048 ** get_address_of_jumpAndLandingBob_4() { return &___jumpAndLandingBob_4; }
	inline void set_jumpAndLandingBob_4(LerpControlledBob_t1201268048 * value)
	{
		___jumpAndLandingBob_4 = value;
		Il2CppCodeGenWriteBarrier(&___jumpAndLandingBob_4, value);
	}

	inline static int32_t get_offset_of_rigidbodyFirstPersonController_5() { return static_cast<int32_t>(offsetof(HeadBob_t6749556, ___rigidbodyFirstPersonController_5)); }
	inline RigidbodyFirstPersonController_t2706339155 * get_rigidbodyFirstPersonController_5() const { return ___rigidbodyFirstPersonController_5; }
	inline RigidbodyFirstPersonController_t2706339155 ** get_address_of_rigidbodyFirstPersonController_5() { return &___rigidbodyFirstPersonController_5; }
	inline void set_rigidbodyFirstPersonController_5(RigidbodyFirstPersonController_t2706339155 * value)
	{
		___rigidbodyFirstPersonController_5 = value;
		Il2CppCodeGenWriteBarrier(&___rigidbodyFirstPersonController_5, value);
	}

	inline static int32_t get_offset_of_StrideInterval_6() { return static_cast<int32_t>(offsetof(HeadBob_t6749556, ___StrideInterval_6)); }
	inline float get_StrideInterval_6() const { return ___StrideInterval_6; }
	inline float* get_address_of_StrideInterval_6() { return &___StrideInterval_6; }
	inline void set_StrideInterval_6(float value)
	{
		___StrideInterval_6 = value;
	}

	inline static int32_t get_offset_of_RunningStrideLengthen_7() { return static_cast<int32_t>(offsetof(HeadBob_t6749556, ___RunningStrideLengthen_7)); }
	inline float get_RunningStrideLengthen_7() const { return ___RunningStrideLengthen_7; }
	inline float* get_address_of_RunningStrideLengthen_7() { return &___RunningStrideLengthen_7; }
	inline void set_RunningStrideLengthen_7(float value)
	{
		___RunningStrideLengthen_7 = value;
	}

	inline static int32_t get_offset_of_cameraRefocus_8() { return static_cast<int32_t>(offsetof(HeadBob_t6749556, ___cameraRefocus_8)); }
	inline CameraRefocus_t392674784 * get_cameraRefocus_8() const { return ___cameraRefocus_8; }
	inline CameraRefocus_t392674784 ** get_address_of_cameraRefocus_8() { return &___cameraRefocus_8; }
	inline void set_cameraRefocus_8(CameraRefocus_t392674784 * value)
	{
		___cameraRefocus_8 = value;
		Il2CppCodeGenWriteBarrier(&___cameraRefocus_8, value);
	}

	inline static int32_t get_offset_of_previouslyGrounded_9() { return static_cast<int32_t>(offsetof(HeadBob_t6749556, ___previouslyGrounded_9)); }
	inline bool get_previouslyGrounded_9() const { return ___previouslyGrounded_9; }
	inline bool* get_address_of_previouslyGrounded_9() { return &___previouslyGrounded_9; }
	inline void set_previouslyGrounded_9(bool value)
	{
		___previouslyGrounded_9 = value;
	}

	inline static int32_t get_offset_of_originalCameraPosition_10() { return static_cast<int32_t>(offsetof(HeadBob_t6749556, ___originalCameraPosition_10)); }
	inline Vector3_t3525329789  get_originalCameraPosition_10() const { return ___originalCameraPosition_10; }
	inline Vector3_t3525329789 * get_address_of_originalCameraPosition_10() { return &___originalCameraPosition_10; }
	inline void set_originalCameraPosition_10(Vector3_t3525329789  value)
	{
		___originalCameraPosition_10 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
