#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// GUIAnimFREE
struct GUIAnimFREE_t2210106936;
// System.Collections.IEnumerator
struct IEnumerator_t287207039;
// UnityEngine.Transform
struct Transform_t284553113;
// UnityEngine.AudioClip
struct AudioClip_t3714538611;
// UnityEngine.AudioSource
struct AudioSource_t3628549054;

#include "codegen/il2cpp-codegen.h"
#include "GUIAnimatorFREE_GUIAnimSystemFREE_eGUIMove1021735815.h"
#include "UnityEngine_UnityEngine_Transform284553113.h"
#include "UnityEngine_UnityEngine_AudioClip3714538611.h"
#include "GETween_GETween_GETweenType2763934983.h"
#include "GUIAnimatorFREE_GUIAnimFREE_eEaseType1407315917.h"

// System.Void GUIAnimFREE::Awake()
extern "C"  void GUIAnimFREE_Awake_m820465174 (GUIAnimFREE_t2210106936 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GUIAnimFREE::Start()
extern "C"  void GUIAnimFREE_Start_m3824965043 (GUIAnimFREE_t2210106936 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GUIAnimFREE::Update()
extern "C"  void GUIAnimFREE_Update_m2615651514 (GUIAnimFREE_t2210106936 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GUIAnimFREE::Reset()
extern "C"  void GUIAnimFREE_Reset_m2524260192 (GUIAnimFREE_t2210106936 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator GUIAnimFREE::Free_ResetPositionDoneFlag(System.Single)
extern "C"  Il2CppObject * GUIAnimFREE_Free_ResetPositionDoneFlag_m2483622383 (GUIAnimFREE_t2210106936 * __this, float ___Delay0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GUIAnimFREE::ResetAllChildren()
extern "C"  void GUIAnimFREE_ResetAllChildren_m412912610 (GUIAnimFREE_t2210106936 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator GUIAnimFREE::InitScaleIn(System.Single)
extern "C"  Il2CppObject * GUIAnimFREE_InitScaleIn_m380765811 (GUIAnimFREE_t2210106936 * __this, float ___Delay0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GUIAnimFREE::CalculateCameraArea()
extern "C"  void GUIAnimFREE_CalculateCameraArea_m1237959977 (GUIAnimFREE_t2210106936 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GUIAnimFREE::InitMoveIn()
extern "C"  void GUIAnimFREE_InitMoveIn_m3641694903 (GUIAnimFREE_t2210106936 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GUIAnimFREE::InitMoveOut()
extern "C"  void GUIAnimFREE_InitMoveOut_m1229215006 (GUIAnimFREE_t2210106936 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GUIAnimFREE::InitRotationIn()
extern "C"  void GUIAnimFREE_InitRotationIn_m2548293604 (GUIAnimFREE_t2210106936 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GUIAnimFREE::InitScaleIn()
extern "C"  void GUIAnimFREE_InitScaleIn_m2592199408 (GUIAnimFREE_t2210106936 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GUIAnimFREE::InitFadeIn()
extern "C"  void GUIAnimFREE_InitFadeIn_m4271450082 (GUIAnimFREE_t2210106936 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GUIAnimFREE::MoveIn()
extern "C"  void GUIAnimFREE_MoveIn_m1188313479 (GUIAnimFREE_t2210106936 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GUIAnimFREE::MoveIn(GUIAnimSystemFREE/eGUIMove)
extern "C"  void GUIAnimFREE_MoveIn_m1533929816 (GUIAnimFREE_t2210106936 * __this, int32_t ___GUIMoveType0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GUIAnimFREE::RecuresiveMoveIn(UnityEngine.Transform)
extern "C"  void GUIAnimFREE_RecuresiveMoveIn_m211463865 (GUIAnimFREE_t2210106936 * __this, Transform_t284553113 * ___tf0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GUIAnimFREE::StartMoveIdle()
extern "C"  void GUIAnimFREE_StartMoveIdle_m2833924568 (GUIAnimFREE_t2210106936 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GUIAnimFREE::MoveIdle()
extern "C"  void GUIAnimFREE_MoveIdle_m3795769398 (GUIAnimFREE_t2210106936 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator GUIAnimFREE::CoroutineMoveIdle(System.Single)
extern "C"  Il2CppObject * GUIAnimFREE_CoroutineMoveIdle_m2218978133 (GUIAnimFREE_t2210106936 * __this, float ___Delay0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GUIAnimFREE::MoveOut()
extern "C"  void GUIAnimFREE_MoveOut_m2483802190 (GUIAnimFREE_t2210106936 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator GUIAnimFREE::CoroutineMoveOut(System.Single)
extern "C"  Il2CppObject * GUIAnimFREE_CoroutineMoveOut_m1279631869 (GUIAnimFREE_t2210106936 * __this, float ___Delay0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GUIAnimFREE::MoveOut(GUIAnimSystemFREE/eGUIMove)
extern "C"  void GUIAnimFREE_MoveOut_m263849311 (GUIAnimFREE_t2210106936 * __this, int32_t ___GUIMoveType0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GUIAnimFREE::RecuresiveMoveOut(UnityEngine.Transform)
extern "C"  void GUIAnimFREE_RecuresiveMoveOut_m392929644 (GUIAnimFREE_t2210106936 * __this, Transform_t284553113 * ___tf0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GUIAnimFREE::AnimIn_MoveUpdateByValue(System.Single)
extern "C"  void GUIAnimFREE_AnimIn_MoveUpdateByValue_m2475605315 (GUIAnimFREE_t2210106936 * __this, float ___Value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GUIAnimFREE::AnimIn_MoveComplete()
extern "C"  void GUIAnimFREE_AnimIn_MoveComplete_m1081140196 (GUIAnimFREE_t2210106936 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GUIAnimFREE::AnimOut_MoveUpdateByValue(System.Single)
extern "C"  void GUIAnimFREE_AnimOut_MoveUpdateByValue_m2062852636 (GUIAnimFREE_t2210106936 * __this, float ___Value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GUIAnimFREE::AnimOut_MoveComplete()
extern "C"  void GUIAnimFREE_AnimOut_MoveComplete_m122125565 (GUIAnimFREE_t2210106936 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GUIAnimFREE::AnimIn_RotationUpdateByValue(System.Single)
extern "C"  void GUIAnimFREE_AnimIn_RotationUpdateByValue_m1873958640 (GUIAnimFREE_t2210106936 * __this, float ___Value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GUIAnimFREE::AnimIn_RotationComplete()
extern "C"  void GUIAnimFREE_AnimIn_RotationComplete_m3679092433 (GUIAnimFREE_t2210106936 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GUIAnimFREE::AnimOut_RotationUpdateByValue(System.Single)
extern "C"  void GUIAnimFREE_AnimOut_RotationUpdateByValue_m3044550473 (GUIAnimFREE_t2210106936 * __this, float ___Value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GUIAnimFREE::AnimOut_RotationComplete()
extern "C"  void GUIAnimFREE_AnimOut_RotationComplete_m3029132138 (GUIAnimFREE_t2210106936 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GUIAnimFREE::AnimIn_ScaleUpdateByValue(System.Single)
extern "C"  void GUIAnimFREE_AnimIn_ScaleUpdateByValue_m2424307818 (GUIAnimFREE_t2210106936 * __this, float ___Value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GUIAnimFREE::AnimIn_ScaleComplete()
extern "C"  void GUIAnimFREE_AnimIn_ScaleComplete_m2431349451 (GUIAnimFREE_t2210106936 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GUIAnimFREE::AnimOut_ScaleUpdateByValue(System.Single)
extern "C"  void GUIAnimFREE_AnimOut_ScaleUpdateByValue_m2513876657 (GUIAnimFREE_t2210106936 * __this, float ___Value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GUIAnimFREE::AnimOut_ScaleComplete()
extern "C"  void GUIAnimFREE_AnimOut_ScaleComplete_m2766666962 (GUIAnimFREE_t2210106936 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GUIAnimFREE::AnimIn_FadeUpdateByValue(System.Single)
extern "C"  void GUIAnimFREE_AnimIn_FadeUpdateByValue_m2841508206 (GUIAnimFREE_t2210106936 * __this, float ___Value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GUIAnimFREE::AnimIn_FadeComplete()
extern "C"  void GUIAnimFREE_AnimIn_FadeComplete_m2109236431 (GUIAnimFREE_t2210106936 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GUIAnimFREE::AnimOut_FadeUpdateByValue(System.Single)
extern "C"  void GUIAnimFREE_AnimOut_FadeUpdateByValue_m2428755527 (GUIAnimFREE_t2210106936 * __this, float ___Value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GUIAnimFREE::AnimOut_FadeComplete()
extern "C"  void GUIAnimFREE_AnimOut_FadeComplete_m1150221800 (GUIAnimFREE_t2210106936 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GUIAnimFREE::ScaleLoopStart(System.Single)
extern "C"  void GUIAnimFREE_ScaleLoopStart_m2186273446 (GUIAnimFREE_t2210106936 * __this, float ___delay0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GUIAnimFREE::ScaleLoopUpdateByValue(System.Single)
extern "C"  void GUIAnimFREE_ScaleLoopUpdateByValue_m3571416791 (GUIAnimFREE_t2210106936 * __this, float ___Value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GUIAnimFREE::ScaleLoopComplete()
extern "C"  void GUIAnimFREE_ScaleLoopComplete_m1098162808 (GUIAnimFREE_t2210106936 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GUIAnimFREE::StopScaleLoop()
extern "C"  void GUIAnimFREE_StopScaleLoop_m1287077885 (GUIAnimFREE_t2210106936 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GUIAnimFREE::FadeLoopStart(System.Single)
extern "C"  void GUIAnimFREE_FadeLoopStart_m1549016632 (GUIAnimFREE_t2210106936 * __this, float ___delay0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GUIAnimFREE::FadeLoopUpdateByValue(System.Single)
extern "C"  void GUIAnimFREE_FadeLoopUpdateByValue_m3212839017 (GUIAnimFREE_t2210106936 * __this, float ___Value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GUIAnimFREE::FadeLoopComplete()
extern "C"  void GUIAnimFREE_FadeLoopComplete_m4044409994 (GUIAnimFREE_t2210106936 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GUIAnimFREE::StopFadeLoop()
extern "C"  void GUIAnimFREE_StopFadeLoop_m110086931 (GUIAnimFREE_t2210106936 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GUIAnimFREE::PlaySoundOneShot(UnityEngine.AudioClip)
extern "C"  void GUIAnimFREE_PlaySoundOneShot_m1031562925 (GUIAnimFREE_t2210106936 * __this, AudioClip_t3714538611 * ___pAudioClip0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator GUIAnimFREE::PlaySoundOneShotWithDelay(UnityEngine.AudioClip,System.Single)
extern "C"  Il2CppObject * GUIAnimFREE_PlaySoundOneShotWithDelay_m58747511 (GUIAnimFREE_t2210106936 * __this, AudioClip_t3714538611 * ___pAudioClip0, float ___Delay1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.AudioSource GUIAnimFREE::PlaySoundLoop(UnityEngine.AudioClip)
extern "C"  AudioSource_t3628549054 * GUIAnimFREE_PlaySoundLoop_m4166640346 (GUIAnimFREE_t2210106936 * __this, AudioClip_t3714538611 * ___pAudioClip0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GUIAnimFREE::StartScaleLoopSound()
extern "C"  void GUIAnimFREE_StartScaleLoopSound_m753653940 (GUIAnimFREE_t2210106936 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GUIAnimFREE::StopScaleLoopSound()
extern "C"  void GUIAnimFREE_StopScaleLoopSound_m2675286196 (GUIAnimFREE_t2210106936 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GUIAnimFREE::StartFadeLoopSound()
extern "C"  void GUIAnimFREE_StartFadeLoopSound_m4071185246 (GUIAnimFREE_t2210106936 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GUIAnimFREE::StopFadeLoopSound()
extern "C"  void GUIAnimFREE_StopFadeLoopSound_m2747700062 (GUIAnimFREE_t2210106936 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GUIAnimFREE::CalculateTotalBounds()
extern "C"  void GUIAnimFREE_CalculateTotalBounds_m3960727876 (GUIAnimFREE_t2210106936 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GUIAnimFREE::ScreenResolutionChange()
extern "C"  void GUIAnimFREE_ScreenResolutionChange_m1791767609 (GUIAnimFREE_t2210106936 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GUIAnimFREE::IsAnimating()
extern "C"  bool GUIAnimFREE_IsAnimating_m2914853593 (GUIAnimFREE_t2210106936 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single GUIAnimFREE::GetFadeValue(UnityEngine.Transform)
extern "C"  float GUIAnimFREE_GetFadeValue_m3771945465 (GUIAnimFREE_t2210106936 * __this, Transform_t284553113 * ___trans0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single GUIAnimFREE::GetFadeTextOutlineValue(UnityEngine.Transform)
extern "C"  float GUIAnimFREE_GetFadeTextOutlineValue_m2092732114 (GUIAnimFREE_t2210106936 * __this, Transform_t284553113 * ___trans0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single GUIAnimFREE::GetFadeTextShadowValue(UnityEngine.Transform)
extern "C"  float GUIAnimFREE_GetFadeTextShadowValue_m271541190 (GUIAnimFREE_t2210106936 * __this, Transform_t284553113 * ___trans0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GUIAnimFREE::RecursiveFade(UnityEngine.Transform,System.Single,System.Boolean)
extern "C"  void GUIAnimFREE_RecursiveFade_m185724474 (GUIAnimFREE_t2210106936 * __this, Transform_t284553113 * ___trans0, float ___Fade1, bool ___IsFadeChildren2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GUIAnimFREE::FadeTextOutline(UnityEngine.Transform,System.Single)
extern "C"  void GUIAnimFREE_FadeTextOutline_m3877423448 (GUIAnimFREE_t2210106936 * __this, Transform_t284553113 * ___trans0, float ___FadeOutline1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GUIAnimFREE::FadeTextShadow(UnityEngine.Transform,System.Single)
extern "C"  void GUIAnimFREE_FadeTextShadow_m324415720 (GUIAnimFREE_t2210106936 * __this, Transform_t284553113 * ___trans0, float ___FadeShadow1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GETween/GETweenType GUIAnimFREE::GETweenEaseType(GUIAnimFREE/eEaseType)
extern "C"  int32_t GUIAnimFREE_GETweenEaseType_m2967032936 (GUIAnimFREE_t2210106936 * __this, int32_t ___easeType0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GUIAnimFREE::.ctor()
extern "C"  void GUIAnimFREE__ctor_m582859955 (GUIAnimFREE_t2210106936 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
