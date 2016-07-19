#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnitySampleAssets.Characters.FirstPerson.MouseLook
struct MouseLook_t136918691;
// UnitySampleAssets.Utility.FOVKick
struct FOVKick_t4133555955;
// UnitySampleAssets.Utility.CurveControlledBob
struct CurveControlledBob_t3427460376;
// UnitySampleAssets.Utility.LerpControlledBob
struct LerpControlledBob_t1201268048;
// UnityEngine.AudioClip[]
struct AudioClipU5BU5D_t2889538658;
// UnityEngine.AudioClip
struct AudioClip_t3714538611;
// UnityEngine.Camera
struct Camera_t3533968274;
// UnitySampleAssets.Utility.CameraRefocus
struct CameraRefocus_t392674784;
// UnityEngine.CharacterController
struct CharacterController_t2029520850;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"
#include "UnityEngine_UnityEngine_Vector23525329788.h"
#include "UnityEngine_UnityEngine_Vector33525329789.h"
#include "UnityEngine_UnityEngine_CollisionFlags165451490.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnitySampleAssets.Characters.FirstPerson.FirstPersonController
struct  FirstPersonController_t3913151840  : public MonoBehaviour_t3012272455
{
public:
	// System.Boolean UnitySampleAssets.Characters.FirstPerson.FirstPersonController::_isWalking
	bool ____isWalking_2;
	// System.Single UnitySampleAssets.Characters.FirstPerson.FirstPersonController::walkSpeed
	float ___walkSpeed_3;
	// System.Single UnitySampleAssets.Characters.FirstPerson.FirstPersonController::lookSpeed
	float ___lookSpeed_4;
	// System.Single UnitySampleAssets.Characters.FirstPerson.FirstPersonController::runSpeed
	float ___runSpeed_5;
	// System.Single UnitySampleAssets.Characters.FirstPerson.FirstPersonController::runstepLenghten
	float ___runstepLenghten_6;
	// System.Single UnitySampleAssets.Characters.FirstPerson.FirstPersonController::jumpSpeed
	float ___jumpSpeed_7;
	// System.Single UnitySampleAssets.Characters.FirstPerson.FirstPersonController::stickToGroundForce
	float ___stickToGroundForce_8;
	// System.Single UnitySampleAssets.Characters.FirstPerson.FirstPersonController::_gravityMultiplier
	float ____gravityMultiplier_9;
	// UnitySampleAssets.Characters.FirstPerson.MouseLook UnitySampleAssets.Characters.FirstPerson.FirstPersonController::_mouseLook
	MouseLook_t136918691 * ____mouseLook_10;
	// System.Boolean UnitySampleAssets.Characters.FirstPerson.FirstPersonController::useFOVKick
	bool ___useFOVKick_11;
	// UnitySampleAssets.Utility.FOVKick UnitySampleAssets.Characters.FirstPerson.FirstPersonController::_fovKick
	FOVKick_t4133555955 * ____fovKick_12;
	// System.Boolean UnitySampleAssets.Characters.FirstPerson.FirstPersonController::useHeadBob
	bool ___useHeadBob_13;
	// UnitySampleAssets.Utility.CurveControlledBob UnitySampleAssets.Characters.FirstPerson.FirstPersonController::_headBob
	CurveControlledBob_t3427460376 * ____headBob_14;
	// UnitySampleAssets.Utility.LerpControlledBob UnitySampleAssets.Characters.FirstPerson.FirstPersonController::_jumpBob
	LerpControlledBob_t1201268048 * ____jumpBob_15;
	// System.Single UnitySampleAssets.Characters.FirstPerson.FirstPersonController::_stepInterval
	float ____stepInterval_16;
	// UnityEngine.AudioClip[] UnitySampleAssets.Characters.FirstPerson.FirstPersonController::_footstepSounds
	AudioClipU5BU5D_t2889538658* ____footstepSounds_17;
	// UnityEngine.AudioClip UnitySampleAssets.Characters.FirstPerson.FirstPersonController::_jumpSound
	AudioClip_t3714538611 * ____jumpSound_18;
	// UnityEngine.AudioClip UnitySampleAssets.Characters.FirstPerson.FirstPersonController::_landSound
	AudioClip_t3714538611 * ____landSound_19;
	// UnityEngine.Camera UnitySampleAssets.Characters.FirstPerson.FirstPersonController::_camera
	Camera_t3533968274 * ____camera_20;
	// System.Boolean UnitySampleAssets.Characters.FirstPerson.FirstPersonController::_jump
	bool ____jump_21;
	// System.Single UnitySampleAssets.Characters.FirstPerson.FirstPersonController::_yRotation
	float ____yRotation_22;
	// UnitySampleAssets.Utility.CameraRefocus UnitySampleAssets.Characters.FirstPerson.FirstPersonController::_cameraRefocus
	CameraRefocus_t392674784 * ____cameraRefocus_23;
	// UnityEngine.Vector2 UnitySampleAssets.Characters.FirstPerson.FirstPersonController::_input
	Vector2_t3525329788  ____input_24;
	// UnityEngine.Vector3 UnitySampleAssets.Characters.FirstPerson.FirstPersonController::_moveDir
	Vector3_t3525329789  ____moveDir_25;
	// UnityEngine.CharacterController UnitySampleAssets.Characters.FirstPerson.FirstPersonController::_characterController
	CharacterController_t2029520850 * ____characterController_26;
	// UnityEngine.CollisionFlags UnitySampleAssets.Characters.FirstPerson.FirstPersonController::_collisionFlags
	int32_t ____collisionFlags_27;
	// System.Boolean UnitySampleAssets.Characters.FirstPerson.FirstPersonController::_previouslyGrounded
	bool ____previouslyGrounded_28;
	// UnityEngine.Vector3 UnitySampleAssets.Characters.FirstPerson.FirstPersonController::_originalCameraPosition
	Vector3_t3525329789  ____originalCameraPosition_29;
	// System.Single UnitySampleAssets.Characters.FirstPerson.FirstPersonController::_stepCycle
	float ____stepCycle_30;
	// System.Single UnitySampleAssets.Characters.FirstPerson.FirstPersonController::_nextStep
	float ____nextStep_31;
	// System.Boolean UnitySampleAssets.Characters.FirstPerson.FirstPersonController::_jumping
	bool ____jumping_32;

public:
	inline static int32_t get_offset_of__isWalking_2() { return static_cast<int32_t>(offsetof(FirstPersonController_t3913151840, ____isWalking_2)); }
	inline bool get__isWalking_2() const { return ____isWalking_2; }
	inline bool* get_address_of__isWalking_2() { return &____isWalking_2; }
	inline void set__isWalking_2(bool value)
	{
		____isWalking_2 = value;
	}

	inline static int32_t get_offset_of_walkSpeed_3() { return static_cast<int32_t>(offsetof(FirstPersonController_t3913151840, ___walkSpeed_3)); }
	inline float get_walkSpeed_3() const { return ___walkSpeed_3; }
	inline float* get_address_of_walkSpeed_3() { return &___walkSpeed_3; }
	inline void set_walkSpeed_3(float value)
	{
		___walkSpeed_3 = value;
	}

	inline static int32_t get_offset_of_lookSpeed_4() { return static_cast<int32_t>(offsetof(FirstPersonController_t3913151840, ___lookSpeed_4)); }
	inline float get_lookSpeed_4() const { return ___lookSpeed_4; }
	inline float* get_address_of_lookSpeed_4() { return &___lookSpeed_4; }
	inline void set_lookSpeed_4(float value)
	{
		___lookSpeed_4 = value;
	}

	inline static int32_t get_offset_of_runSpeed_5() { return static_cast<int32_t>(offsetof(FirstPersonController_t3913151840, ___runSpeed_5)); }
	inline float get_runSpeed_5() const { return ___runSpeed_5; }
	inline float* get_address_of_runSpeed_5() { return &___runSpeed_5; }
	inline void set_runSpeed_5(float value)
	{
		___runSpeed_5 = value;
	}

	inline static int32_t get_offset_of_runstepLenghten_6() { return static_cast<int32_t>(offsetof(FirstPersonController_t3913151840, ___runstepLenghten_6)); }
	inline float get_runstepLenghten_6() const { return ___runstepLenghten_6; }
	inline float* get_address_of_runstepLenghten_6() { return &___runstepLenghten_6; }
	inline void set_runstepLenghten_6(float value)
	{
		___runstepLenghten_6 = value;
	}

	inline static int32_t get_offset_of_jumpSpeed_7() { return static_cast<int32_t>(offsetof(FirstPersonController_t3913151840, ___jumpSpeed_7)); }
	inline float get_jumpSpeed_7() const { return ___jumpSpeed_7; }
	inline float* get_address_of_jumpSpeed_7() { return &___jumpSpeed_7; }
	inline void set_jumpSpeed_7(float value)
	{
		___jumpSpeed_7 = value;
	}

	inline static int32_t get_offset_of_stickToGroundForce_8() { return static_cast<int32_t>(offsetof(FirstPersonController_t3913151840, ___stickToGroundForce_8)); }
	inline float get_stickToGroundForce_8() const { return ___stickToGroundForce_8; }
	inline float* get_address_of_stickToGroundForce_8() { return &___stickToGroundForce_8; }
	inline void set_stickToGroundForce_8(float value)
	{
		___stickToGroundForce_8 = value;
	}

	inline static int32_t get_offset_of__gravityMultiplier_9() { return static_cast<int32_t>(offsetof(FirstPersonController_t3913151840, ____gravityMultiplier_9)); }
	inline float get__gravityMultiplier_9() const { return ____gravityMultiplier_9; }
	inline float* get_address_of__gravityMultiplier_9() { return &____gravityMultiplier_9; }
	inline void set__gravityMultiplier_9(float value)
	{
		____gravityMultiplier_9 = value;
	}

	inline static int32_t get_offset_of__mouseLook_10() { return static_cast<int32_t>(offsetof(FirstPersonController_t3913151840, ____mouseLook_10)); }
	inline MouseLook_t136918691 * get__mouseLook_10() const { return ____mouseLook_10; }
	inline MouseLook_t136918691 ** get_address_of__mouseLook_10() { return &____mouseLook_10; }
	inline void set__mouseLook_10(MouseLook_t136918691 * value)
	{
		____mouseLook_10 = value;
		Il2CppCodeGenWriteBarrier(&____mouseLook_10, value);
	}

	inline static int32_t get_offset_of_useFOVKick_11() { return static_cast<int32_t>(offsetof(FirstPersonController_t3913151840, ___useFOVKick_11)); }
	inline bool get_useFOVKick_11() const { return ___useFOVKick_11; }
	inline bool* get_address_of_useFOVKick_11() { return &___useFOVKick_11; }
	inline void set_useFOVKick_11(bool value)
	{
		___useFOVKick_11 = value;
	}

	inline static int32_t get_offset_of__fovKick_12() { return static_cast<int32_t>(offsetof(FirstPersonController_t3913151840, ____fovKick_12)); }
	inline FOVKick_t4133555955 * get__fovKick_12() const { return ____fovKick_12; }
	inline FOVKick_t4133555955 ** get_address_of__fovKick_12() { return &____fovKick_12; }
	inline void set__fovKick_12(FOVKick_t4133555955 * value)
	{
		____fovKick_12 = value;
		Il2CppCodeGenWriteBarrier(&____fovKick_12, value);
	}

	inline static int32_t get_offset_of_useHeadBob_13() { return static_cast<int32_t>(offsetof(FirstPersonController_t3913151840, ___useHeadBob_13)); }
	inline bool get_useHeadBob_13() const { return ___useHeadBob_13; }
	inline bool* get_address_of_useHeadBob_13() { return &___useHeadBob_13; }
	inline void set_useHeadBob_13(bool value)
	{
		___useHeadBob_13 = value;
	}

	inline static int32_t get_offset_of__headBob_14() { return static_cast<int32_t>(offsetof(FirstPersonController_t3913151840, ____headBob_14)); }
	inline CurveControlledBob_t3427460376 * get__headBob_14() const { return ____headBob_14; }
	inline CurveControlledBob_t3427460376 ** get_address_of__headBob_14() { return &____headBob_14; }
	inline void set__headBob_14(CurveControlledBob_t3427460376 * value)
	{
		____headBob_14 = value;
		Il2CppCodeGenWriteBarrier(&____headBob_14, value);
	}

	inline static int32_t get_offset_of__jumpBob_15() { return static_cast<int32_t>(offsetof(FirstPersonController_t3913151840, ____jumpBob_15)); }
	inline LerpControlledBob_t1201268048 * get__jumpBob_15() const { return ____jumpBob_15; }
	inline LerpControlledBob_t1201268048 ** get_address_of__jumpBob_15() { return &____jumpBob_15; }
	inline void set__jumpBob_15(LerpControlledBob_t1201268048 * value)
	{
		____jumpBob_15 = value;
		Il2CppCodeGenWriteBarrier(&____jumpBob_15, value);
	}

	inline static int32_t get_offset_of__stepInterval_16() { return static_cast<int32_t>(offsetof(FirstPersonController_t3913151840, ____stepInterval_16)); }
	inline float get__stepInterval_16() const { return ____stepInterval_16; }
	inline float* get_address_of__stepInterval_16() { return &____stepInterval_16; }
	inline void set__stepInterval_16(float value)
	{
		____stepInterval_16 = value;
	}

	inline static int32_t get_offset_of__footstepSounds_17() { return static_cast<int32_t>(offsetof(FirstPersonController_t3913151840, ____footstepSounds_17)); }
	inline AudioClipU5BU5D_t2889538658* get__footstepSounds_17() const { return ____footstepSounds_17; }
	inline AudioClipU5BU5D_t2889538658** get_address_of__footstepSounds_17() { return &____footstepSounds_17; }
	inline void set__footstepSounds_17(AudioClipU5BU5D_t2889538658* value)
	{
		____footstepSounds_17 = value;
		Il2CppCodeGenWriteBarrier(&____footstepSounds_17, value);
	}

	inline static int32_t get_offset_of__jumpSound_18() { return static_cast<int32_t>(offsetof(FirstPersonController_t3913151840, ____jumpSound_18)); }
	inline AudioClip_t3714538611 * get__jumpSound_18() const { return ____jumpSound_18; }
	inline AudioClip_t3714538611 ** get_address_of__jumpSound_18() { return &____jumpSound_18; }
	inline void set__jumpSound_18(AudioClip_t3714538611 * value)
	{
		____jumpSound_18 = value;
		Il2CppCodeGenWriteBarrier(&____jumpSound_18, value);
	}

	inline static int32_t get_offset_of__landSound_19() { return static_cast<int32_t>(offsetof(FirstPersonController_t3913151840, ____landSound_19)); }
	inline AudioClip_t3714538611 * get__landSound_19() const { return ____landSound_19; }
	inline AudioClip_t3714538611 ** get_address_of__landSound_19() { return &____landSound_19; }
	inline void set__landSound_19(AudioClip_t3714538611 * value)
	{
		____landSound_19 = value;
		Il2CppCodeGenWriteBarrier(&____landSound_19, value);
	}

	inline static int32_t get_offset_of__camera_20() { return static_cast<int32_t>(offsetof(FirstPersonController_t3913151840, ____camera_20)); }
	inline Camera_t3533968274 * get__camera_20() const { return ____camera_20; }
	inline Camera_t3533968274 ** get_address_of__camera_20() { return &____camera_20; }
	inline void set__camera_20(Camera_t3533968274 * value)
	{
		____camera_20 = value;
		Il2CppCodeGenWriteBarrier(&____camera_20, value);
	}

	inline static int32_t get_offset_of__jump_21() { return static_cast<int32_t>(offsetof(FirstPersonController_t3913151840, ____jump_21)); }
	inline bool get__jump_21() const { return ____jump_21; }
	inline bool* get_address_of__jump_21() { return &____jump_21; }
	inline void set__jump_21(bool value)
	{
		____jump_21 = value;
	}

	inline static int32_t get_offset_of__yRotation_22() { return static_cast<int32_t>(offsetof(FirstPersonController_t3913151840, ____yRotation_22)); }
	inline float get__yRotation_22() const { return ____yRotation_22; }
	inline float* get_address_of__yRotation_22() { return &____yRotation_22; }
	inline void set__yRotation_22(float value)
	{
		____yRotation_22 = value;
	}

	inline static int32_t get_offset_of__cameraRefocus_23() { return static_cast<int32_t>(offsetof(FirstPersonController_t3913151840, ____cameraRefocus_23)); }
	inline CameraRefocus_t392674784 * get__cameraRefocus_23() const { return ____cameraRefocus_23; }
	inline CameraRefocus_t392674784 ** get_address_of__cameraRefocus_23() { return &____cameraRefocus_23; }
	inline void set__cameraRefocus_23(CameraRefocus_t392674784 * value)
	{
		____cameraRefocus_23 = value;
		Il2CppCodeGenWriteBarrier(&____cameraRefocus_23, value);
	}

	inline static int32_t get_offset_of__input_24() { return static_cast<int32_t>(offsetof(FirstPersonController_t3913151840, ____input_24)); }
	inline Vector2_t3525329788  get__input_24() const { return ____input_24; }
	inline Vector2_t3525329788 * get_address_of__input_24() { return &____input_24; }
	inline void set__input_24(Vector2_t3525329788  value)
	{
		____input_24 = value;
	}

	inline static int32_t get_offset_of__moveDir_25() { return static_cast<int32_t>(offsetof(FirstPersonController_t3913151840, ____moveDir_25)); }
	inline Vector3_t3525329789  get__moveDir_25() const { return ____moveDir_25; }
	inline Vector3_t3525329789 * get_address_of__moveDir_25() { return &____moveDir_25; }
	inline void set__moveDir_25(Vector3_t3525329789  value)
	{
		____moveDir_25 = value;
	}

	inline static int32_t get_offset_of__characterController_26() { return static_cast<int32_t>(offsetof(FirstPersonController_t3913151840, ____characterController_26)); }
	inline CharacterController_t2029520850 * get__characterController_26() const { return ____characterController_26; }
	inline CharacterController_t2029520850 ** get_address_of__characterController_26() { return &____characterController_26; }
	inline void set__characterController_26(CharacterController_t2029520850 * value)
	{
		____characterController_26 = value;
		Il2CppCodeGenWriteBarrier(&____characterController_26, value);
	}

	inline static int32_t get_offset_of__collisionFlags_27() { return static_cast<int32_t>(offsetof(FirstPersonController_t3913151840, ____collisionFlags_27)); }
	inline int32_t get__collisionFlags_27() const { return ____collisionFlags_27; }
	inline int32_t* get_address_of__collisionFlags_27() { return &____collisionFlags_27; }
	inline void set__collisionFlags_27(int32_t value)
	{
		____collisionFlags_27 = value;
	}

	inline static int32_t get_offset_of__previouslyGrounded_28() { return static_cast<int32_t>(offsetof(FirstPersonController_t3913151840, ____previouslyGrounded_28)); }
	inline bool get__previouslyGrounded_28() const { return ____previouslyGrounded_28; }
	inline bool* get_address_of__previouslyGrounded_28() { return &____previouslyGrounded_28; }
	inline void set__previouslyGrounded_28(bool value)
	{
		____previouslyGrounded_28 = value;
	}

	inline static int32_t get_offset_of__originalCameraPosition_29() { return static_cast<int32_t>(offsetof(FirstPersonController_t3913151840, ____originalCameraPosition_29)); }
	inline Vector3_t3525329789  get__originalCameraPosition_29() const { return ____originalCameraPosition_29; }
	inline Vector3_t3525329789 * get_address_of__originalCameraPosition_29() { return &____originalCameraPosition_29; }
	inline void set__originalCameraPosition_29(Vector3_t3525329789  value)
	{
		____originalCameraPosition_29 = value;
	}

	inline static int32_t get_offset_of__stepCycle_30() { return static_cast<int32_t>(offsetof(FirstPersonController_t3913151840, ____stepCycle_30)); }
	inline float get__stepCycle_30() const { return ____stepCycle_30; }
	inline float* get_address_of__stepCycle_30() { return &____stepCycle_30; }
	inline void set__stepCycle_30(float value)
	{
		____stepCycle_30 = value;
	}

	inline static int32_t get_offset_of__nextStep_31() { return static_cast<int32_t>(offsetof(FirstPersonController_t3913151840, ____nextStep_31)); }
	inline float get__nextStep_31() const { return ____nextStep_31; }
	inline float* get_address_of__nextStep_31() { return &____nextStep_31; }
	inline void set__nextStep_31(float value)
	{
		____nextStep_31 = value;
	}

	inline static int32_t get_offset_of__jumping_32() { return static_cast<int32_t>(offsetof(FirstPersonController_t3913151840, ____jumping_32)); }
	inline bool get__jumping_32() const { return ____jumping_32; }
	inline bool* get_address_of__jumping_32() { return &____jumping_32; }
	inline void set__jumping_32(bool value)
	{
		____jumping_32 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
