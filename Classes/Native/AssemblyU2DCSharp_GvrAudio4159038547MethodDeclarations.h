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

// GvrAudioListener
struct GvrAudioListener_t2617838119;
// UnityEngine.Transform
struct Transform_t284553113;
// GvrAudioRoom/SurfaceMaterial[]
struct SurfaceMaterialU5BU5D_t3915230557;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_t2741383957;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_GvrAudioListener2617838119.h"
#include "AssemblyU2DCSharp_GvrAudio_Quality2315868383.h"
#include "UnityEngine_UnityEngine_LayerMask1862190090.h"
#include "UnityEngine_UnityEngine_Transform284553113.h"
#include "UnityEngine_UnityEngine_AudioRolloffMode3071838028.h"
#include "UnityEngine_UnityEngine_Vector33525329789.h"
#include "UnityEngine_UnityEngine_Quaternion1891715979.h"

// System.Void GvrAudio::.cctor()
extern "C"  void GvrAudio__cctor_m4258904325 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GvrAudio::get_SampleRate()
extern "C"  int32_t GvrAudio_get_SampleRate_m3270880477 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GvrAudio::get_NumChannels()
extern "C"  int32_t GvrAudio_get_NumChannels_m2317404805 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GvrAudio::get_FramesPerBuffer()
extern "C"  int32_t GvrAudio_get_FramesPerBuffer_m1465030534 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GvrAudio::Initialize(GvrAudioListener,GvrAudio/Quality)
extern "C"  void GvrAudio_Initialize_m4140574142 (Il2CppObject * __this /* static, unused */, GvrAudioListener_t2617838119 * ___listener0, int32_t ___quality1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GvrAudio::Shutdown(GvrAudioListener)
extern "C"  void GvrAudio_Shutdown_m3896450219 (Il2CppObject * __this /* static, unused */, GvrAudioListener_t2617838119 * ___listener0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GvrAudio::UpdateAudioListener(System.Single,UnityEngine.LayerMask,System.Single)
extern "C"  void GvrAudio_UpdateAudioListener_m2285629295 (Il2CppObject * __this /* static, unused */, float ___globalGainDb0, LayerMask_t1862190090  ___occlusionMask1, float ___worldScale2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GvrAudio::CreateAudioSource(System.Boolean)
extern "C"  int32_t GvrAudio_CreateAudioSource_m1809109092 (Il2CppObject * __this /* static, unused */, bool ___hrtfEnabled0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GvrAudio::DestroyAudioSource(System.Int32)
extern "C"  void GvrAudio_DestroyAudioSource_m3759383460 (Il2CppObject * __this /* static, unused */, int32_t ___id0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GvrAudio::UpdateAudioSource(System.Int32,UnityEngine.Transform,System.Boolean,System.Single,System.Single,UnityEngine.AudioRolloffMode,System.Single,System.Single,System.Single,System.Single,System.Single)
extern "C"  void GvrAudio_UpdateAudioSource_m639837080 (Il2CppObject * __this /* static, unused */, int32_t ___id0, Transform_t284553113 * ___transform1, bool ___bypassRoomEffects2, float ___gainDb3, float ___spread4, int32_t ___rolloffMode5, float ___minDistance6, float ___maxDistance7, float ___alpha8, float ___sharpness9, float ___occlusion10, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GvrAudio::CreateAudioRoom()
extern "C"  int32_t GvrAudio_CreateAudioRoom_m629970605 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GvrAudio::DestroyAudioRoom(System.Int32)
extern "C"  void GvrAudio_DestroyAudioRoom_m852852260 (Il2CppObject * __this /* static, unused */, int32_t ___id0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GvrAudio::UpdateAudioRoom(System.Int32,UnityEngine.Transform,GvrAudioRoom/SurfaceMaterial[],System.Single,System.Single,System.Single,System.Single,UnityEngine.Vector3)
extern "C"  void GvrAudio_UpdateAudioRoom_m3716656514 (Il2CppObject * __this /* static, unused */, int32_t ___id0, Transform_t284553113 * ___transform1, SurfaceMaterialU5BU5D_t3915230557* ___materials2, float ___reflectivity3, float ___reverbGainDb4, float ___reverbBrightness5, float ___reverbTime6, Vector3_t3525329789  ___size7, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single GvrAudio::ComputeOcclusion(UnityEngine.Transform)
extern "C"  float GvrAudio_ComputeOcclusion_m4053637503 (Il2CppObject * __this /* static, unused */, Transform_t284553113 * ___sourceTransform0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2[] GvrAudio::Generate2dPolarPattern(System.Single,System.Single,System.Int32)
extern "C"  Vector2U5BU5D_t2741383957* GvrAudio_Generate2dPolarPattern_m1431210773 (Il2CppObject * __this /* static, unused */, float ___alpha0, float ___order1, int32_t ___resolution2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single GvrAudio::ConvertAmplitudeFromDb(System.Single)
extern "C"  float GvrAudio_ConvertAmplitudeFromDb_m1063126027 (Il2CppObject * __this /* static, unused */, float ___db0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GvrAudio::ConvertAudioTransformFromUnity(UnityEngine.Vector3&,UnityEngine.Quaternion&)
extern "C"  void GvrAudio_ConvertAudioTransformFromUnity_m448868012 (Il2CppObject * __this /* static, unused */, Vector3_t3525329789 * ___position0, Quaternion_t1891715979 * ___rotation1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GvrAudio::SetListenerGain(System.Single)
extern "C"  void GvrAudio_SetListenerGain_m4290622576 (Il2CppObject * __this /* static, unused */, float ___gain0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GvrAudio::SetListenerTransform(System.Single,System.Single,System.Single,System.Single,System.Single,System.Single,System.Single)
extern "C"  void GvrAudio_SetListenerTransform_m4241122455 (Il2CppObject * __this /* static, unused */, float ___px0, float ___py1, float ___pz2, float ___qx3, float ___qy4, float ___qz5, float ___qw6, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GvrAudio::CreateSource(System.Boolean)
extern "C"  int32_t GvrAudio_CreateSource_m919673816 (Il2CppObject * __this /* static, unused */, bool ___enableHrtf0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GvrAudio::DestroySource(System.Int32)
extern "C"  void GvrAudio_DestroySource_m3248276492 (Il2CppObject * __this /* static, unused */, int32_t ___sourceId0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GvrAudio::SetSourceBypassRoomEffects(System.Int32,System.Boolean)
extern "C"  void GvrAudio_SetSourceBypassRoomEffects_m3470739822 (Il2CppObject * __this /* static, unused */, int32_t ___sourceId0, bool ___bypassRoomEffects1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GvrAudio::SetSourceDirectivity(System.Int32,System.Single,System.Single)
extern "C"  void GvrAudio_SetSourceDirectivity_m275237490 (Il2CppObject * __this /* static, unused */, int32_t ___sourceId0, float ___alpha1, float ___order2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GvrAudio::SetSourceDistanceAttenuationMethod(System.Int32,UnityEngine.AudioRolloffMode,System.Single,System.Single)
extern "C"  void GvrAudio_SetSourceDistanceAttenuationMethod_m602109940 (Il2CppObject * __this /* static, unused */, int32_t ___sourceId0, int32_t ___rolloffMode1, float ___minDistance2, float ___maxDistance3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GvrAudio::SetSourceGain(System.Int32,System.Single)
extern "C"  void GvrAudio_SetSourceGain_m2656461048 (Il2CppObject * __this /* static, unused */, int32_t ___sourceId0, float ___gain1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GvrAudio::SetSourceOcclusionIntensity(System.Int32,System.Single)
extern "C"  void GvrAudio_SetSourceOcclusionIntensity_m3150654111 (Il2CppObject * __this /* static, unused */, int32_t ___sourceId0, float ___intensity1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GvrAudio::SetSourceSpread(System.Int32,System.Single)
extern "C"  void GvrAudio_SetSourceSpread_m1274341484 (Il2CppObject * __this /* static, unused */, int32_t ___sourceId0, float ___spreadRad1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GvrAudio::SetSourceTransform(System.Int32,System.Single,System.Single,System.Single,System.Single,System.Single,System.Single,System.Single)
extern "C"  void GvrAudio_SetSourceTransform_m2959118527 (Il2CppObject * __this /* static, unused */, int32_t ___sourceId0, float ___px1, float ___py2, float ___pz3, float ___qx4, float ___qy5, float ___qz6, float ___qw7, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GvrAudio::CreateRoom()
extern "C"  int32_t GvrAudio_CreateRoom_m1331055137 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GvrAudio::DestroyRoom(System.Int32)
extern "C"  void GvrAudio_DestroyRoom_m628856972 (Il2CppObject * __this /* static, unused */, int32_t ___roomId0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GvrAudio::SetRoomProperties(System.Int32,System.Single,System.Single,System.Single,System.Single,System.Single,System.Single,System.Single,System.Single,System.Single,System.Single,GvrAudioRoom/SurfaceMaterial[],System.Single,System.Single,System.Single,System.Single)
extern "C"  void GvrAudio_SetRoomProperties_m2445666156 (Il2CppObject * __this /* static, unused */, int32_t ___roomId0, float ___px1, float ___py2, float ___pz3, float ___qx4, float ___qy5, float ___qz6, float ___qw7, float ___dx8, float ___dy9, float ___dz10, SurfaceMaterialU5BU5D_t3915230557* ___materialNames11, float ___reflectionScalar12, float ___reverbGain13, float ___reverbBrightness14, float ___reverbTime15, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GvrAudio::Initialize(GvrAudio/Quality,System.Int32,System.Int32,System.Int32)
extern "C"  void GvrAudio_Initialize_m1191139374 (Il2CppObject * __this /* static, unused */, int32_t ___quality0, int32_t ___sampleRate1, int32_t ___numChannels2, int32_t ___framesPerBuffer3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GvrAudio::Shutdown()
extern "C"  void GvrAudio_Shutdown_m1565365234 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
