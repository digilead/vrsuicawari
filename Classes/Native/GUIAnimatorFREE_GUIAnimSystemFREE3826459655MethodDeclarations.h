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

// GUIAnimSystemFREE
struct GUIAnimSystemFREE_t3826459655;
// System.String
struct String_t;
// System.Collections.IEnumerator
struct IEnumerator_t287207039;
// UnityEngine.Transform
struct Transform_t284553113;
// UnityEngine.ParticleSystem
struct ParticleSystem_t56787138;
// UnityEngine.GameObject
struct GameObject_t4012695102;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_t3499186955;
// UnityEngine.Canvas
struct Canvas_t3534013893;
// UnityEngine.Canvas[]
struct CanvasU5BU5D_t645781896;
// UnityEngine.UI.GraphicRaycaster
struct GraphicRaycaster_t2033008887;
// UnityEngine.UI.GraphicRaycaster[]
struct GraphicRaycasterU5BU5D_t3255361870;

#include "codegen/il2cpp-codegen.h"
#include "GUIAnimatorFREE_GUIAnimSystemFREE3826459655.h"
#include "mscorlib_System_String968488902.h"
#include "UnityEngine_UnityEngine_Transform284553113.h"
#include "UnityEngine_UnityEngine_ParticleSystem56787138.h"
#include "UnityEngine_UnityEngine_GameObject4012695102.h"
#include "UnityEngine_UnityEngine_Canvas3534013893.h"
#include "UnityEngine_UI_UnityEngine_UI_GraphicRaycaster2033008887.h"

// GUIAnimSystemFREE GUIAnimSystemFREE::get_Instance()
extern "C"  GUIAnimSystemFREE_t3826459655 * GUIAnimSystemFREE_get_Instance_m2205931826 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GUIAnimSystemFREE::set_Instance(GUIAnimSystemFREE)
extern "C"  void GUIAnimSystemFREE_set_Instance_m2239190265 (Il2CppObject * __this /* static, unused */, GUIAnimSystemFREE_t3826459655 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GUIAnimSystemFREE GUIAnimSystemFREE::GetInstance()
extern "C"  GUIAnimSystemFREE_t3826459655 * GUIAnimSystemFREE_GetInstance_m173415833 (GUIAnimSystemFREE_t3826459655 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GUIAnimSystemFREE::Awake()
extern "C"  void GUIAnimSystemFREE_Awake_m3912475431 (GUIAnimSystemFREE_t3826459655 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GUIAnimSystemFREE::Start()
extern "C"  void GUIAnimSystemFREE_Start_m2622008004 (GUIAnimSystemFREE_t3826459655 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GUIAnimSystemFREE::Update()
extern "C"  void GUIAnimSystemFREE_Update_m3978688969 (GUIAnimSystemFREE_t3826459655 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GUIAnimSystemFREE::OnGUI()
extern "C"  void GUIAnimSystemFREE_OnGUI_m3170268862 (GUIAnimSystemFREE_t3826459655 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GUIAnimSystemFREE::ShowFreeVersionText()
extern "C"  void GUIAnimSystemFREE_ShowFreeVersionText_m2041238910 (GUIAnimSystemFREE_t3826459655 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GUIAnimSystemFREE::LoadLevel(System.String,System.Single)
extern "C"  void GUIAnimSystemFREE_LoadLevel_m68779335 (GUIAnimSystemFREE_t3826459655 * __this, String_t* ___LevelName0, float ___delay1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator GUIAnimSystemFREE::LoadLevelDelay(System.String,System.Single)
extern "C"  Il2CppObject * GUIAnimSystemFREE_LoadLevelDelay_m2351210922 (GUIAnimSystemFREE_t3826459655 * __this, String_t* ___LevelName0, float ___delay1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GUIAnimSystemFREE::MoveIn(UnityEngine.Transform,System.Boolean)
extern "C"  void GUIAnimSystemFREE_MoveIn_m2286384694 (GUIAnimSystemFREE_t3826459655 * __this, Transform_t284553113 * ___trans0, bool ___EffectsOnChildren1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GUIAnimSystemFREE::MoveInAll()
extern "C"  void GUIAnimSystemFREE_MoveInAll_m3579593869 (GUIAnimSystemFREE_t3826459655 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GUIAnimSystemFREE::MoveOut(UnityEngine.Transform,System.Boolean)
extern "C"  void GUIAnimSystemFREE_MoveOut_m2183480383 (GUIAnimSystemFREE_t3826459655 * __this, Transform_t284553113 * ___trans0, bool ___EffectsOnChildren1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GUIAnimSystemFREE::MoveOutAll()
extern "C"  void GUIAnimSystemFREE_MoveOutAll_m208219492 (GUIAnimSystemFREE_t3826459655 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GUIAnimSystemFREE::PlayParticle(UnityEngine.Transform)
extern "C"  void GUIAnimSystemFREE_PlayParticle_m1156811811 (GUIAnimSystemFREE_t3826459655 * __this, Transform_t284553113 * ___trans0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GUIAnimSystemFREE::StopParticle(UnityEngine.Transform)
extern "C"  void GUIAnimSystemFREE_StopParticle_m2056648085 (GUIAnimSystemFREE_t3826459655 * __this, Transform_t284553113 * ___trans0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GUIAnimSystemFREE::DontDestroyParticleWhenLoadNewScene(UnityEngine.Transform,System.Boolean)
extern "C"  void GUIAnimSystemFREE_DontDestroyParticleWhenLoadNewScene_m3359080861 (GUIAnimSystemFREE_t3826459655 * __this, Transform_t284553113 * ___trans0, bool ___StopParticle1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator GUIAnimSystemFREE::DontDestroyParticleWhenLoadNewSceneDelay(UnityEngine.Transform,System.Boolean,System.Single)
extern "C"  Il2CppObject * GUIAnimSystemFREE_DontDestroyParticleWhenLoadNewSceneDelay_m3681472485 (GUIAnimSystemFREE_t3826459655 * __this, Transform_t284553113 * ___trans0, bool ___StopParticle1, float ___delay2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GUIAnimSystemFREE::DontDestroyParticleWhenLoadNewScene(UnityEngine.ParticleSystem,System.Boolean)
extern "C"  void GUIAnimSystemFREE_DontDestroyParticleWhenLoadNewScene_m1321076396 (GUIAnimSystemFREE_t3826459655 * __this, ParticleSystem_t56787138 * ___pParticleSystem0, bool ___StopParticle1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator GUIAnimSystemFREE::DontDestroyParticleWhenLoadNewSceneDelay(UnityEngine.ParticleSystem,System.Boolean,System.Single)
extern "C"  Il2CppObject * GUIAnimSystemFREE_DontDestroyParticleWhenLoadNewSceneDelay_m3269523534 (GUIAnimSystemFREE_t3826459655 * __this, ParticleSystem_t56787138 * ___pParticleSystem0, bool ___StopParticle1, float ___delay2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GUIAnimSystemFREE::FocusOnlyThisCanvas(UnityEngine.GameObject)
extern "C"  void GUIAnimSystemFREE_FocusOnlyThisCanvas_m264901236 (GUIAnimSystemFREE_t3826459655 * __this, GameObject_t4012695102 * ___gOB0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GUIAnimSystemFREE::FocusTheseCanvases(UnityEngine.GameObject[])
extern "C"  void GUIAnimSystemFREE_FocusTheseCanvases_m1979802567 (GUIAnimSystemFREE_t3826459655 * __this, GameObjectU5BU5D_t3499186955* ___gOBs0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GUIAnimSystemFREE::FocusThisCanvas(UnityEngine.Canvas)
extern "C"  void GUIAnimSystemFREE_FocusThisCanvas_m49145729 (GUIAnimSystemFREE_t3826459655 * __this, Canvas_t3534013893 * ___pCanvas0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GUIAnimSystemFREE::FocusTheseCanvas(UnityEngine.Canvas[])
extern "C"  void GUIAnimSystemFREE_FocusTheseCanvas_m154725810 (GUIAnimSystemFREE_t3826459655 * __this, CanvasU5BU5D_t645781896* ___pCanvases0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GUIAnimSystemFREE::FocusThisCanvas(UnityEngine.UI.GraphicRaycaster)
extern "C"  void GUIAnimSystemFREE_FocusThisCanvas_m2095958609 (GUIAnimSystemFREE_t3826459655 * __this, GraphicRaycaster_t2033008887 * ___pGraphicRaycaster0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GUIAnimSystemFREE::FocusTheseCanvases(UnityEngine.UI.GraphicRaycaster[])
extern "C"  void GUIAnimSystemFREE_FocusTheseCanvases_m454767054 (GUIAnimSystemFREE_t3826459655 * __this, GraphicRaycasterU5BU5D_t3255361870* ___pGraphicRaycasters0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GUIAnimSystemFREE::SetGraphicRaycasterEnable(UnityEngine.GameObject,System.Boolean)
extern "C"  void GUIAnimSystemFREE_SetGraphicRaycasterEnable_m1931655568 (GUIAnimSystemFREE_t3826459655 * __this, GameObject_t4012695102 * ___gOB0, bool ___Enable1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GUIAnimSystemFREE::SetGraphicRaycasterEnable(UnityEngine.Canvas,System.Boolean)
extern "C"  void GUIAnimSystemFREE_SetGraphicRaycasterEnable_m2630492311 (GUIAnimSystemFREE_t3826459655 * __this, Canvas_t3534013893 * ___pCanvas0, bool ___Enable1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GUIAnimSystemFREE::SetGraphicRaycasterEnable(UnityEngine.UI.GraphicRaycaster,System.Boolean)
extern "C"  void GUIAnimSystemFREE_SetGraphicRaycasterEnable_m4179541553 (GUIAnimSystemFREE_t3826459655 * __this, GraphicRaycaster_t2033008887 * ___pGraphicRaycaster0, bool ___Enable1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GUIAnimSystemFREE::EnableAllGraphicRaycasters(System.Boolean)
extern "C"  void GUIAnimSystemFREE_EnableAllGraphicRaycasters_m1281116958 (GUIAnimSystemFREE_t3826459655 * __this, bool ___Enable0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GUIAnimSystemFREE::EnableAllButtons(System.Boolean)
extern "C"  void GUIAnimSystemFREE_EnableAllButtons_m2854808698 (GUIAnimSystemFREE_t3826459655 * __this, bool ___Enable0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GUIAnimSystemFREE::EnableButton(System.Boolean,System.Single)
extern "C"  void GUIAnimSystemFREE_EnableButton_m2906038257 (GUIAnimSystemFREE_t3826459655 * __this, bool ___Enable0, float ___Seconds1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator GUIAnimSystemFREE::DelayEnableButton(System.Boolean,System.Single)
extern "C"  Il2CppObject * GUIAnimSystemFREE_DelayEnableButton_m3602513790 (GUIAnimSystemFREE_t3826459655 * __this, bool ___Enable0, float ___Seconds1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GUIAnimSystemFREE::EnableButton(UnityEngine.Transform,System.Boolean)
extern "C"  void GUIAnimSystemFREE_EnableButton_m1474763125 (GUIAnimSystemFREE_t3826459655 * __this, Transform_t284553113 * ___trans0, bool ___Enable1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GUIAnimSystemFREE::EnableButton(UnityEngine.Transform,System.Boolean,System.Single)
extern "C"  void GUIAnimSystemFREE_EnableButton_m1942582170 (GUIAnimSystemFREE_t3826459655 * __this, Transform_t284553113 * ___trans0, bool ___Enable1, float ___Seconds2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator GUIAnimSystemFREE::DelayEnableButton(UnityEngine.Transform,System.Boolean,System.Single)
extern "C"  Il2CppObject * GUIAnimSystemFREE_DelayEnableButton_m2386361191 (GUIAnimSystemFREE_t3826459655 * __this, Transform_t284553113 * ___trans0, bool ___Enable1, float ___Seconds2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GUIAnimSystemFREE::SetInteracableAllButtons(System.Boolean)
extern "C"  void GUIAnimSystemFREE_SetInteracableAllButtons_m3125534925 (GUIAnimSystemFREE_t3826459655 * __this, bool ___Interacable0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GUIAnimSystemFREE::SetInteracableAllButtons(System.Boolean,System.Single)
extern "C"  void GUIAnimSystemFREE_SetInteracableAllButtons_m1244823794 (GUIAnimSystemFREE_t3826459655 * __this, bool ___Interacable0, float ___Seconds1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator GUIAnimSystemFREE::DelayInteracableOfAllButton(System.Boolean,System.Single)
extern "C"  Il2CppObject * GUIAnimSystemFREE_DelayInteracableOfAllButton_m870155853 (GUIAnimSystemFREE_t3826459655 * __this, bool ___Interacable0, float ___Seconds1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GUIAnimSystemFREE::InteracableButton(UnityEngine.Transform,System.Boolean)
extern "C"  void GUIAnimSystemFREE_InteracableButton_m2016942380 (GUIAnimSystemFREE_t3826459655 * __this, Transform_t284553113 * ___trans0, bool ___Interacable1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GUIAnimSystemFREE::InteracableButton(UnityEngine.Transform,System.Boolean,System.Single)
extern "C"  void GUIAnimSystemFREE_InteracableButton_m2462656273 (GUIAnimSystemFREE_t3826459655 * __this, Transform_t284553113 * ___trans0, bool ___Interacable1, float ___Seconds2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator GUIAnimSystemFREE::DelayInteracableButton(UnityEngine.Transform,System.Boolean,System.Single)
extern "C"  Il2CppObject * GUIAnimSystemFREE_DelayInteracableButton_m3292755812 (GUIAnimSystemFREE_t3826459655 * __this, Transform_t284553113 * ___trans0, bool ___Interacable1, float ___Seconds2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Canvas GUIAnimSystemFREE::GetParent_Canvas(UnityEngine.Transform)
extern "C"  Canvas_t3534013893 * GUIAnimSystemFREE_GetParent_Canvas_m2212399732 (GUIAnimSystemFREE_t3826459655 * __this, Transform_t284553113 * ___trans0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GUIAnimSystemFREE::.ctor()
extern "C"  void GUIAnimSystemFREE__ctor_m3674870212 (GUIAnimSystemFREE_t3826459655 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
