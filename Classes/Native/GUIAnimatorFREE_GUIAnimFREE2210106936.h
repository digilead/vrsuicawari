﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Canvas
struct Canvas_t3534013893;
// GUIAnimFREE/cMoveIn
struct cMoveIn_t4274088729;
// GUIAnimFREE/cRotationIn
struct cRotationIn_t114699782;
// GUIAnimFREE/cScaleIn
struct cScaleIn_t20109868;
// GUIAnimFREE/cFade
struct cFade_t93610367;
// GETweenItem
struct GETweenItem_t2763602144;
// GUIAnimFREE/cPingPongScale
struct cPingPongScale_t484115261;
// GUIAnimFREE/cPingPongFade
struct cPingPongFade_t2093437481;
// GUIAnimFREE/cMoveOut
struct cMoveOut_t3647737818;
// GUIAnimFREE/cRotationOut
struct cRotationOut_t3555699341;
// GUIAnimFREE/cScaleOut
struct cScaleOut_t623412007;
// UnityEngine.RectTransform
struct RectTransform_t3317474837;
// UnityEngine.UI.Image
struct Image_t3354615620;
// UnityEngine.UI.Toggle
struct Toggle_t1499417981;
// UnityEngine.UI.Text
struct Text_t3286458198;
// UnityEngine.UI.Outline
struct Outline_t3842262571;
// UnityEngine.UI.Shadow
struct Shadow_t1464142665;
// UnityEngine.UI.RawImage
struct RawImage_t3831555132;
// UnityEngine.UI.Slider
struct Slider_t1468074762;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_t3626201768;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"
#include "UnityEngine_UnityEngine_Vector33525329789.h"
#include "UnityEngine_UnityEngine_Bounds3518514978.h"
#include "UnityEngine_UnityEngine_Quaternion1891715979.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GUIAnimFREE
struct  GUIAnimFREE_t2210106936  : public MonoBehaviour_t3012272455
{
public:
	// UnityEngine.Canvas GUIAnimFREE::m_Parent_Canvas
	Canvas_t3534013893 * ___m_Parent_Canvas_2;
	// System.Single GUIAnimFREE::m_CameraLeftEdge
	float ___m_CameraLeftEdge_3;
	// System.Single GUIAnimFREE::m_CameraRightEdge
	float ___m_CameraRightEdge_4;
	// System.Single GUIAnimFREE::m_CameraTopEdge
	float ___m_CameraTopEdge_5;
	// System.Single GUIAnimFREE::m_CameraBottomEdge
	float ___m_CameraBottomEdge_6;
	// UnityEngine.Vector3 GUIAnimFREE::m_CanvasWorldTopLeft
	Vector3_t3525329789  ___m_CanvasWorldTopLeft_7;
	// UnityEngine.Vector3 GUIAnimFREE::m_CanvasWorldTopCenter
	Vector3_t3525329789  ___m_CanvasWorldTopCenter_8;
	// UnityEngine.Vector3 GUIAnimFREE::m_CanvasWorldTopRight
	Vector3_t3525329789  ___m_CanvasWorldTopRight_9;
	// UnityEngine.Vector3 GUIAnimFREE::m_CanvasWorldMiddleLeft
	Vector3_t3525329789  ___m_CanvasWorldMiddleLeft_10;
	// UnityEngine.Vector3 GUIAnimFREE::m_CanvasWorldMiddleCenter
	Vector3_t3525329789  ___m_CanvasWorldMiddleCenter_11;
	// UnityEngine.Vector3 GUIAnimFREE::m_CanvasWorldMiddleRight
	Vector3_t3525329789  ___m_CanvasWorldMiddleRight_12;
	// UnityEngine.Vector3 GUIAnimFREE::m_CanvasWorldBottomLeft
	Vector3_t3525329789  ___m_CanvasWorldBottomLeft_13;
	// UnityEngine.Vector3 GUIAnimFREE::m_CanvasWorldBottomCenter
	Vector3_t3525329789  ___m_CanvasWorldBottomCenter_14;
	// UnityEngine.Vector3 GUIAnimFREE::m_CanvasWorldBottomRight
	Vector3_t3525329789  ___m_CanvasWorldBottomRight_15;
	// UnityEngine.Bounds GUIAnimFREE::m_TotalBounds
	Bounds_t3518514978  ___m_TotalBounds_16;
	// UnityEngine.Vector3 GUIAnimFREE::m_MoveOriginal
	Vector3_t3525329789  ___m_MoveOriginal_17;
	// UnityEngine.Quaternion GUIAnimFREE::m_RotationOriginal
	Quaternion_t1891715979  ___m_RotationOriginal_18;
	// UnityEngine.Vector3 GUIAnimFREE::m_ScaleOriginal
	Vector3_t3525329789  ___m_ScaleOriginal_19;
	// System.Single GUIAnimFREE::m_FadeOriginal
	float ___m_FadeOriginal_20;
	// System.Single GUIAnimFREE::m_FadeOriginalTextOutline
	float ___m_FadeOriginalTextOutline_21;
	// System.Single GUIAnimFREE::m_FadeOriginalTextShadow
	float ___m_FadeOriginalTextShadow_22;
	// GUIAnimFREE/cMoveIn GUIAnimFREE::m_MoveIn
	cMoveIn_t4274088729 * ___m_MoveIn_23;
	// GUIAnimFREE/cRotationIn GUIAnimFREE::m_RotationIn
	cRotationIn_t114699782 * ___m_RotationIn_24;
	// GUIAnimFREE/cScaleIn GUIAnimFREE::m_ScaleIn
	cScaleIn_t20109868 * ___m_ScaleIn_25;
	// GUIAnimFREE/cFade GUIAnimFREE::m_FadeIn
	cFade_t93610367 * ___m_FadeIn_26;
	// GETweenItem GUIAnimFREE::m_GETweenScaleLoop
	GETweenItem_t2763602144 * ___m_GETweenScaleLoop_27;
	// GUIAnimFREE/cPingPongScale GUIAnimFREE::m_ScaleLoop
	cPingPongScale_t484115261 * ___m_ScaleLoop_28;
	// GETweenItem GUIAnimFREE::m_GETweenFadeLoop
	GETweenItem_t2763602144 * ___m_GETweenFadeLoop_29;
	// GUIAnimFREE/cPingPongFade GUIAnimFREE::m_FadeLoop
	cPingPongFade_t2093437481 * ___m_FadeLoop_30;
	// GUIAnimFREE/cMoveOut GUIAnimFREE::m_MoveOut
	cMoveOut_t3647737818 * ___m_MoveOut_31;
	// GUIAnimFREE/cRotationOut GUIAnimFREE::m_RotationOut
	cRotationOut_t3555699341 * ___m_RotationOut_32;
	// GUIAnimFREE/cScaleOut GUIAnimFREE::m_ScaleOut
	cScaleOut_t623412007 * ___m_ScaleOut_33;
	// GUIAnimFREE/cFade GUIAnimFREE::m_FadeOut
	cFade_t93610367 * ___m_FadeOut_34;
	// System.Single GUIAnimFREE::m_MoveVariable
	float ___m_MoveVariable_35;
	// System.Single GUIAnimFREE::m_RotationVariable
	float ___m_RotationVariable_36;
	// System.Single GUIAnimFREE::m_ScaleVariable
	float ___m_ScaleVariable_37;
	// System.Single GUIAnimFREE::m_FadeVariable
	float ___m_FadeVariable_38;
	// System.Boolean GUIAnimFREE::m_InitialDone
	bool ___m_InitialDone_39;
	// System.Boolean GUIAnimFREE::m_ResetPositionDone
	bool ___m_ResetPositionDone_40;
	// UnityEngine.RectTransform GUIAnimFREE::m_RectTransform
	RectTransform_t3317474837 * ___m_RectTransform_41;
	// UnityEngine.UI.Image GUIAnimFREE::m_Image
	Image_t3354615620 * ___m_Image_42;
	// UnityEngine.UI.Toggle GUIAnimFREE::m_Toggle
	Toggle_t1499417981 * ___m_Toggle_43;
	// UnityEngine.UI.Text GUIAnimFREE::m_Text
	Text_t3286458198 * ___m_Text_44;
	// UnityEngine.UI.Outline GUIAnimFREE::m_TextOutline
	Outline_t3842262571 * ___m_TextOutline_45;
	// UnityEngine.UI.Shadow GUIAnimFREE::m_TextShadow
	Shadow_t1464142665 * ___m_TextShadow_46;
	// UnityEngine.UI.RawImage GUIAnimFREE::m_RawImage
	RawImage_t3831555132 * ___m_RawImage_47;
	// UnityEngine.UI.Slider GUIAnimFREE::m_Slider
	Slider_t1468074762 * ___m_Slider_48;
	// UnityEngine.CanvasRenderer GUIAnimFREE::m_CanvasRenderer
	CanvasRenderer_t3626201768 * ___m_CanvasRenderer_49;
	// UnityEngine.RectTransform GUIAnimFREE::m_ParentCanvasRectTransform
	RectTransform_t3317474837 * ___m_ParentCanvasRectTransform_50;
	// System.Int32 GUIAnimFREE::m_MoveIdle_Attemp
	int32_t ___m_MoveIdle_Attemp_51;
	// System.Int32 GUIAnimFREE::m_MoveIdle_AttempMax
	int32_t ___m_MoveIdle_AttempMax_52;
	// System.Single GUIAnimFREE::m_MoveIdle_AttempMax_TimeInterval
	float ___m_MoveIdle_AttempMax_TimeInterval_53;
	// System.Boolean GUIAnimFREE::m_MoveIdle_StartSucceed
	bool ___m_MoveIdle_StartSucceed_54;

public:
	inline static int32_t get_offset_of_m_Parent_Canvas_2() { return static_cast<int32_t>(offsetof(GUIAnimFREE_t2210106936, ___m_Parent_Canvas_2)); }
	inline Canvas_t3534013893 * get_m_Parent_Canvas_2() const { return ___m_Parent_Canvas_2; }
	inline Canvas_t3534013893 ** get_address_of_m_Parent_Canvas_2() { return &___m_Parent_Canvas_2; }
	inline void set_m_Parent_Canvas_2(Canvas_t3534013893 * value)
	{
		___m_Parent_Canvas_2 = value;
		Il2CppCodeGenWriteBarrier(&___m_Parent_Canvas_2, value);
	}

	inline static int32_t get_offset_of_m_CameraLeftEdge_3() { return static_cast<int32_t>(offsetof(GUIAnimFREE_t2210106936, ___m_CameraLeftEdge_3)); }
	inline float get_m_CameraLeftEdge_3() const { return ___m_CameraLeftEdge_3; }
	inline float* get_address_of_m_CameraLeftEdge_3() { return &___m_CameraLeftEdge_3; }
	inline void set_m_CameraLeftEdge_3(float value)
	{
		___m_CameraLeftEdge_3 = value;
	}

	inline static int32_t get_offset_of_m_CameraRightEdge_4() { return static_cast<int32_t>(offsetof(GUIAnimFREE_t2210106936, ___m_CameraRightEdge_4)); }
	inline float get_m_CameraRightEdge_4() const { return ___m_CameraRightEdge_4; }
	inline float* get_address_of_m_CameraRightEdge_4() { return &___m_CameraRightEdge_4; }
	inline void set_m_CameraRightEdge_4(float value)
	{
		___m_CameraRightEdge_4 = value;
	}

	inline static int32_t get_offset_of_m_CameraTopEdge_5() { return static_cast<int32_t>(offsetof(GUIAnimFREE_t2210106936, ___m_CameraTopEdge_5)); }
	inline float get_m_CameraTopEdge_5() const { return ___m_CameraTopEdge_5; }
	inline float* get_address_of_m_CameraTopEdge_5() { return &___m_CameraTopEdge_5; }
	inline void set_m_CameraTopEdge_5(float value)
	{
		___m_CameraTopEdge_5 = value;
	}

	inline static int32_t get_offset_of_m_CameraBottomEdge_6() { return static_cast<int32_t>(offsetof(GUIAnimFREE_t2210106936, ___m_CameraBottomEdge_6)); }
	inline float get_m_CameraBottomEdge_6() const { return ___m_CameraBottomEdge_6; }
	inline float* get_address_of_m_CameraBottomEdge_6() { return &___m_CameraBottomEdge_6; }
	inline void set_m_CameraBottomEdge_6(float value)
	{
		___m_CameraBottomEdge_6 = value;
	}

	inline static int32_t get_offset_of_m_CanvasWorldTopLeft_7() { return static_cast<int32_t>(offsetof(GUIAnimFREE_t2210106936, ___m_CanvasWorldTopLeft_7)); }
	inline Vector3_t3525329789  get_m_CanvasWorldTopLeft_7() const { return ___m_CanvasWorldTopLeft_7; }
	inline Vector3_t3525329789 * get_address_of_m_CanvasWorldTopLeft_7() { return &___m_CanvasWorldTopLeft_7; }
	inline void set_m_CanvasWorldTopLeft_7(Vector3_t3525329789  value)
	{
		___m_CanvasWorldTopLeft_7 = value;
	}

	inline static int32_t get_offset_of_m_CanvasWorldTopCenter_8() { return static_cast<int32_t>(offsetof(GUIAnimFREE_t2210106936, ___m_CanvasWorldTopCenter_8)); }
	inline Vector3_t3525329789  get_m_CanvasWorldTopCenter_8() const { return ___m_CanvasWorldTopCenter_8; }
	inline Vector3_t3525329789 * get_address_of_m_CanvasWorldTopCenter_8() { return &___m_CanvasWorldTopCenter_8; }
	inline void set_m_CanvasWorldTopCenter_8(Vector3_t3525329789  value)
	{
		___m_CanvasWorldTopCenter_8 = value;
	}

	inline static int32_t get_offset_of_m_CanvasWorldTopRight_9() { return static_cast<int32_t>(offsetof(GUIAnimFREE_t2210106936, ___m_CanvasWorldTopRight_9)); }
	inline Vector3_t3525329789  get_m_CanvasWorldTopRight_9() const { return ___m_CanvasWorldTopRight_9; }
	inline Vector3_t3525329789 * get_address_of_m_CanvasWorldTopRight_9() { return &___m_CanvasWorldTopRight_9; }
	inline void set_m_CanvasWorldTopRight_9(Vector3_t3525329789  value)
	{
		___m_CanvasWorldTopRight_9 = value;
	}

	inline static int32_t get_offset_of_m_CanvasWorldMiddleLeft_10() { return static_cast<int32_t>(offsetof(GUIAnimFREE_t2210106936, ___m_CanvasWorldMiddleLeft_10)); }
	inline Vector3_t3525329789  get_m_CanvasWorldMiddleLeft_10() const { return ___m_CanvasWorldMiddleLeft_10; }
	inline Vector3_t3525329789 * get_address_of_m_CanvasWorldMiddleLeft_10() { return &___m_CanvasWorldMiddleLeft_10; }
	inline void set_m_CanvasWorldMiddleLeft_10(Vector3_t3525329789  value)
	{
		___m_CanvasWorldMiddleLeft_10 = value;
	}

	inline static int32_t get_offset_of_m_CanvasWorldMiddleCenter_11() { return static_cast<int32_t>(offsetof(GUIAnimFREE_t2210106936, ___m_CanvasWorldMiddleCenter_11)); }
	inline Vector3_t3525329789  get_m_CanvasWorldMiddleCenter_11() const { return ___m_CanvasWorldMiddleCenter_11; }
	inline Vector3_t3525329789 * get_address_of_m_CanvasWorldMiddleCenter_11() { return &___m_CanvasWorldMiddleCenter_11; }
	inline void set_m_CanvasWorldMiddleCenter_11(Vector3_t3525329789  value)
	{
		___m_CanvasWorldMiddleCenter_11 = value;
	}

	inline static int32_t get_offset_of_m_CanvasWorldMiddleRight_12() { return static_cast<int32_t>(offsetof(GUIAnimFREE_t2210106936, ___m_CanvasWorldMiddleRight_12)); }
	inline Vector3_t3525329789  get_m_CanvasWorldMiddleRight_12() const { return ___m_CanvasWorldMiddleRight_12; }
	inline Vector3_t3525329789 * get_address_of_m_CanvasWorldMiddleRight_12() { return &___m_CanvasWorldMiddleRight_12; }
	inline void set_m_CanvasWorldMiddleRight_12(Vector3_t3525329789  value)
	{
		___m_CanvasWorldMiddleRight_12 = value;
	}

	inline static int32_t get_offset_of_m_CanvasWorldBottomLeft_13() { return static_cast<int32_t>(offsetof(GUIAnimFREE_t2210106936, ___m_CanvasWorldBottomLeft_13)); }
	inline Vector3_t3525329789  get_m_CanvasWorldBottomLeft_13() const { return ___m_CanvasWorldBottomLeft_13; }
	inline Vector3_t3525329789 * get_address_of_m_CanvasWorldBottomLeft_13() { return &___m_CanvasWorldBottomLeft_13; }
	inline void set_m_CanvasWorldBottomLeft_13(Vector3_t3525329789  value)
	{
		___m_CanvasWorldBottomLeft_13 = value;
	}

	inline static int32_t get_offset_of_m_CanvasWorldBottomCenter_14() { return static_cast<int32_t>(offsetof(GUIAnimFREE_t2210106936, ___m_CanvasWorldBottomCenter_14)); }
	inline Vector3_t3525329789  get_m_CanvasWorldBottomCenter_14() const { return ___m_CanvasWorldBottomCenter_14; }
	inline Vector3_t3525329789 * get_address_of_m_CanvasWorldBottomCenter_14() { return &___m_CanvasWorldBottomCenter_14; }
	inline void set_m_CanvasWorldBottomCenter_14(Vector3_t3525329789  value)
	{
		___m_CanvasWorldBottomCenter_14 = value;
	}

	inline static int32_t get_offset_of_m_CanvasWorldBottomRight_15() { return static_cast<int32_t>(offsetof(GUIAnimFREE_t2210106936, ___m_CanvasWorldBottomRight_15)); }
	inline Vector3_t3525329789  get_m_CanvasWorldBottomRight_15() const { return ___m_CanvasWorldBottomRight_15; }
	inline Vector3_t3525329789 * get_address_of_m_CanvasWorldBottomRight_15() { return &___m_CanvasWorldBottomRight_15; }
	inline void set_m_CanvasWorldBottomRight_15(Vector3_t3525329789  value)
	{
		___m_CanvasWorldBottomRight_15 = value;
	}

	inline static int32_t get_offset_of_m_TotalBounds_16() { return static_cast<int32_t>(offsetof(GUIAnimFREE_t2210106936, ___m_TotalBounds_16)); }
	inline Bounds_t3518514978  get_m_TotalBounds_16() const { return ___m_TotalBounds_16; }
	inline Bounds_t3518514978 * get_address_of_m_TotalBounds_16() { return &___m_TotalBounds_16; }
	inline void set_m_TotalBounds_16(Bounds_t3518514978  value)
	{
		___m_TotalBounds_16 = value;
	}

	inline static int32_t get_offset_of_m_MoveOriginal_17() { return static_cast<int32_t>(offsetof(GUIAnimFREE_t2210106936, ___m_MoveOriginal_17)); }
	inline Vector3_t3525329789  get_m_MoveOriginal_17() const { return ___m_MoveOriginal_17; }
	inline Vector3_t3525329789 * get_address_of_m_MoveOriginal_17() { return &___m_MoveOriginal_17; }
	inline void set_m_MoveOriginal_17(Vector3_t3525329789  value)
	{
		___m_MoveOriginal_17 = value;
	}

	inline static int32_t get_offset_of_m_RotationOriginal_18() { return static_cast<int32_t>(offsetof(GUIAnimFREE_t2210106936, ___m_RotationOriginal_18)); }
	inline Quaternion_t1891715979  get_m_RotationOriginal_18() const { return ___m_RotationOriginal_18; }
	inline Quaternion_t1891715979 * get_address_of_m_RotationOriginal_18() { return &___m_RotationOriginal_18; }
	inline void set_m_RotationOriginal_18(Quaternion_t1891715979  value)
	{
		___m_RotationOriginal_18 = value;
	}

	inline static int32_t get_offset_of_m_ScaleOriginal_19() { return static_cast<int32_t>(offsetof(GUIAnimFREE_t2210106936, ___m_ScaleOriginal_19)); }
	inline Vector3_t3525329789  get_m_ScaleOriginal_19() const { return ___m_ScaleOriginal_19; }
	inline Vector3_t3525329789 * get_address_of_m_ScaleOriginal_19() { return &___m_ScaleOriginal_19; }
	inline void set_m_ScaleOriginal_19(Vector3_t3525329789  value)
	{
		___m_ScaleOriginal_19 = value;
	}

	inline static int32_t get_offset_of_m_FadeOriginal_20() { return static_cast<int32_t>(offsetof(GUIAnimFREE_t2210106936, ___m_FadeOriginal_20)); }
	inline float get_m_FadeOriginal_20() const { return ___m_FadeOriginal_20; }
	inline float* get_address_of_m_FadeOriginal_20() { return &___m_FadeOriginal_20; }
	inline void set_m_FadeOriginal_20(float value)
	{
		___m_FadeOriginal_20 = value;
	}

	inline static int32_t get_offset_of_m_FadeOriginalTextOutline_21() { return static_cast<int32_t>(offsetof(GUIAnimFREE_t2210106936, ___m_FadeOriginalTextOutline_21)); }
	inline float get_m_FadeOriginalTextOutline_21() const { return ___m_FadeOriginalTextOutline_21; }
	inline float* get_address_of_m_FadeOriginalTextOutline_21() { return &___m_FadeOriginalTextOutline_21; }
	inline void set_m_FadeOriginalTextOutline_21(float value)
	{
		___m_FadeOriginalTextOutline_21 = value;
	}

	inline static int32_t get_offset_of_m_FadeOriginalTextShadow_22() { return static_cast<int32_t>(offsetof(GUIAnimFREE_t2210106936, ___m_FadeOriginalTextShadow_22)); }
	inline float get_m_FadeOriginalTextShadow_22() const { return ___m_FadeOriginalTextShadow_22; }
	inline float* get_address_of_m_FadeOriginalTextShadow_22() { return &___m_FadeOriginalTextShadow_22; }
	inline void set_m_FadeOriginalTextShadow_22(float value)
	{
		___m_FadeOriginalTextShadow_22 = value;
	}

	inline static int32_t get_offset_of_m_MoveIn_23() { return static_cast<int32_t>(offsetof(GUIAnimFREE_t2210106936, ___m_MoveIn_23)); }
	inline cMoveIn_t4274088729 * get_m_MoveIn_23() const { return ___m_MoveIn_23; }
	inline cMoveIn_t4274088729 ** get_address_of_m_MoveIn_23() { return &___m_MoveIn_23; }
	inline void set_m_MoveIn_23(cMoveIn_t4274088729 * value)
	{
		___m_MoveIn_23 = value;
		Il2CppCodeGenWriteBarrier(&___m_MoveIn_23, value);
	}

	inline static int32_t get_offset_of_m_RotationIn_24() { return static_cast<int32_t>(offsetof(GUIAnimFREE_t2210106936, ___m_RotationIn_24)); }
	inline cRotationIn_t114699782 * get_m_RotationIn_24() const { return ___m_RotationIn_24; }
	inline cRotationIn_t114699782 ** get_address_of_m_RotationIn_24() { return &___m_RotationIn_24; }
	inline void set_m_RotationIn_24(cRotationIn_t114699782 * value)
	{
		___m_RotationIn_24 = value;
		Il2CppCodeGenWriteBarrier(&___m_RotationIn_24, value);
	}

	inline static int32_t get_offset_of_m_ScaleIn_25() { return static_cast<int32_t>(offsetof(GUIAnimFREE_t2210106936, ___m_ScaleIn_25)); }
	inline cScaleIn_t20109868 * get_m_ScaleIn_25() const { return ___m_ScaleIn_25; }
	inline cScaleIn_t20109868 ** get_address_of_m_ScaleIn_25() { return &___m_ScaleIn_25; }
	inline void set_m_ScaleIn_25(cScaleIn_t20109868 * value)
	{
		___m_ScaleIn_25 = value;
		Il2CppCodeGenWriteBarrier(&___m_ScaleIn_25, value);
	}

	inline static int32_t get_offset_of_m_FadeIn_26() { return static_cast<int32_t>(offsetof(GUIAnimFREE_t2210106936, ___m_FadeIn_26)); }
	inline cFade_t93610367 * get_m_FadeIn_26() const { return ___m_FadeIn_26; }
	inline cFade_t93610367 ** get_address_of_m_FadeIn_26() { return &___m_FadeIn_26; }
	inline void set_m_FadeIn_26(cFade_t93610367 * value)
	{
		___m_FadeIn_26 = value;
		Il2CppCodeGenWriteBarrier(&___m_FadeIn_26, value);
	}

	inline static int32_t get_offset_of_m_GETweenScaleLoop_27() { return static_cast<int32_t>(offsetof(GUIAnimFREE_t2210106936, ___m_GETweenScaleLoop_27)); }
	inline GETweenItem_t2763602144 * get_m_GETweenScaleLoop_27() const { return ___m_GETweenScaleLoop_27; }
	inline GETweenItem_t2763602144 ** get_address_of_m_GETweenScaleLoop_27() { return &___m_GETweenScaleLoop_27; }
	inline void set_m_GETweenScaleLoop_27(GETweenItem_t2763602144 * value)
	{
		___m_GETweenScaleLoop_27 = value;
		Il2CppCodeGenWriteBarrier(&___m_GETweenScaleLoop_27, value);
	}

	inline static int32_t get_offset_of_m_ScaleLoop_28() { return static_cast<int32_t>(offsetof(GUIAnimFREE_t2210106936, ___m_ScaleLoop_28)); }
	inline cPingPongScale_t484115261 * get_m_ScaleLoop_28() const { return ___m_ScaleLoop_28; }
	inline cPingPongScale_t484115261 ** get_address_of_m_ScaleLoop_28() { return &___m_ScaleLoop_28; }
	inline void set_m_ScaleLoop_28(cPingPongScale_t484115261 * value)
	{
		___m_ScaleLoop_28 = value;
		Il2CppCodeGenWriteBarrier(&___m_ScaleLoop_28, value);
	}

	inline static int32_t get_offset_of_m_GETweenFadeLoop_29() { return static_cast<int32_t>(offsetof(GUIAnimFREE_t2210106936, ___m_GETweenFadeLoop_29)); }
	inline GETweenItem_t2763602144 * get_m_GETweenFadeLoop_29() const { return ___m_GETweenFadeLoop_29; }
	inline GETweenItem_t2763602144 ** get_address_of_m_GETweenFadeLoop_29() { return &___m_GETweenFadeLoop_29; }
	inline void set_m_GETweenFadeLoop_29(GETweenItem_t2763602144 * value)
	{
		___m_GETweenFadeLoop_29 = value;
		Il2CppCodeGenWriteBarrier(&___m_GETweenFadeLoop_29, value);
	}

	inline static int32_t get_offset_of_m_FadeLoop_30() { return static_cast<int32_t>(offsetof(GUIAnimFREE_t2210106936, ___m_FadeLoop_30)); }
	inline cPingPongFade_t2093437481 * get_m_FadeLoop_30() const { return ___m_FadeLoop_30; }
	inline cPingPongFade_t2093437481 ** get_address_of_m_FadeLoop_30() { return &___m_FadeLoop_30; }
	inline void set_m_FadeLoop_30(cPingPongFade_t2093437481 * value)
	{
		___m_FadeLoop_30 = value;
		Il2CppCodeGenWriteBarrier(&___m_FadeLoop_30, value);
	}

	inline static int32_t get_offset_of_m_MoveOut_31() { return static_cast<int32_t>(offsetof(GUIAnimFREE_t2210106936, ___m_MoveOut_31)); }
	inline cMoveOut_t3647737818 * get_m_MoveOut_31() const { return ___m_MoveOut_31; }
	inline cMoveOut_t3647737818 ** get_address_of_m_MoveOut_31() { return &___m_MoveOut_31; }
	inline void set_m_MoveOut_31(cMoveOut_t3647737818 * value)
	{
		___m_MoveOut_31 = value;
		Il2CppCodeGenWriteBarrier(&___m_MoveOut_31, value);
	}

	inline static int32_t get_offset_of_m_RotationOut_32() { return static_cast<int32_t>(offsetof(GUIAnimFREE_t2210106936, ___m_RotationOut_32)); }
	inline cRotationOut_t3555699341 * get_m_RotationOut_32() const { return ___m_RotationOut_32; }
	inline cRotationOut_t3555699341 ** get_address_of_m_RotationOut_32() { return &___m_RotationOut_32; }
	inline void set_m_RotationOut_32(cRotationOut_t3555699341 * value)
	{
		___m_RotationOut_32 = value;
		Il2CppCodeGenWriteBarrier(&___m_RotationOut_32, value);
	}

	inline static int32_t get_offset_of_m_ScaleOut_33() { return static_cast<int32_t>(offsetof(GUIAnimFREE_t2210106936, ___m_ScaleOut_33)); }
	inline cScaleOut_t623412007 * get_m_ScaleOut_33() const { return ___m_ScaleOut_33; }
	inline cScaleOut_t623412007 ** get_address_of_m_ScaleOut_33() { return &___m_ScaleOut_33; }
	inline void set_m_ScaleOut_33(cScaleOut_t623412007 * value)
	{
		___m_ScaleOut_33 = value;
		Il2CppCodeGenWriteBarrier(&___m_ScaleOut_33, value);
	}

	inline static int32_t get_offset_of_m_FadeOut_34() { return static_cast<int32_t>(offsetof(GUIAnimFREE_t2210106936, ___m_FadeOut_34)); }
	inline cFade_t93610367 * get_m_FadeOut_34() const { return ___m_FadeOut_34; }
	inline cFade_t93610367 ** get_address_of_m_FadeOut_34() { return &___m_FadeOut_34; }
	inline void set_m_FadeOut_34(cFade_t93610367 * value)
	{
		___m_FadeOut_34 = value;
		Il2CppCodeGenWriteBarrier(&___m_FadeOut_34, value);
	}

	inline static int32_t get_offset_of_m_MoveVariable_35() { return static_cast<int32_t>(offsetof(GUIAnimFREE_t2210106936, ___m_MoveVariable_35)); }
	inline float get_m_MoveVariable_35() const { return ___m_MoveVariable_35; }
	inline float* get_address_of_m_MoveVariable_35() { return &___m_MoveVariable_35; }
	inline void set_m_MoveVariable_35(float value)
	{
		___m_MoveVariable_35 = value;
	}

	inline static int32_t get_offset_of_m_RotationVariable_36() { return static_cast<int32_t>(offsetof(GUIAnimFREE_t2210106936, ___m_RotationVariable_36)); }
	inline float get_m_RotationVariable_36() const { return ___m_RotationVariable_36; }
	inline float* get_address_of_m_RotationVariable_36() { return &___m_RotationVariable_36; }
	inline void set_m_RotationVariable_36(float value)
	{
		___m_RotationVariable_36 = value;
	}

	inline static int32_t get_offset_of_m_ScaleVariable_37() { return static_cast<int32_t>(offsetof(GUIAnimFREE_t2210106936, ___m_ScaleVariable_37)); }
	inline float get_m_ScaleVariable_37() const { return ___m_ScaleVariable_37; }
	inline float* get_address_of_m_ScaleVariable_37() { return &___m_ScaleVariable_37; }
	inline void set_m_ScaleVariable_37(float value)
	{
		___m_ScaleVariable_37 = value;
	}

	inline static int32_t get_offset_of_m_FadeVariable_38() { return static_cast<int32_t>(offsetof(GUIAnimFREE_t2210106936, ___m_FadeVariable_38)); }
	inline float get_m_FadeVariable_38() const { return ___m_FadeVariable_38; }
	inline float* get_address_of_m_FadeVariable_38() { return &___m_FadeVariable_38; }
	inline void set_m_FadeVariable_38(float value)
	{
		___m_FadeVariable_38 = value;
	}

	inline static int32_t get_offset_of_m_InitialDone_39() { return static_cast<int32_t>(offsetof(GUIAnimFREE_t2210106936, ___m_InitialDone_39)); }
	inline bool get_m_InitialDone_39() const { return ___m_InitialDone_39; }
	inline bool* get_address_of_m_InitialDone_39() { return &___m_InitialDone_39; }
	inline void set_m_InitialDone_39(bool value)
	{
		___m_InitialDone_39 = value;
	}

	inline static int32_t get_offset_of_m_ResetPositionDone_40() { return static_cast<int32_t>(offsetof(GUIAnimFREE_t2210106936, ___m_ResetPositionDone_40)); }
	inline bool get_m_ResetPositionDone_40() const { return ___m_ResetPositionDone_40; }
	inline bool* get_address_of_m_ResetPositionDone_40() { return &___m_ResetPositionDone_40; }
	inline void set_m_ResetPositionDone_40(bool value)
	{
		___m_ResetPositionDone_40 = value;
	}

	inline static int32_t get_offset_of_m_RectTransform_41() { return static_cast<int32_t>(offsetof(GUIAnimFREE_t2210106936, ___m_RectTransform_41)); }
	inline RectTransform_t3317474837 * get_m_RectTransform_41() const { return ___m_RectTransform_41; }
	inline RectTransform_t3317474837 ** get_address_of_m_RectTransform_41() { return &___m_RectTransform_41; }
	inline void set_m_RectTransform_41(RectTransform_t3317474837 * value)
	{
		___m_RectTransform_41 = value;
		Il2CppCodeGenWriteBarrier(&___m_RectTransform_41, value);
	}

	inline static int32_t get_offset_of_m_Image_42() { return static_cast<int32_t>(offsetof(GUIAnimFREE_t2210106936, ___m_Image_42)); }
	inline Image_t3354615620 * get_m_Image_42() const { return ___m_Image_42; }
	inline Image_t3354615620 ** get_address_of_m_Image_42() { return &___m_Image_42; }
	inline void set_m_Image_42(Image_t3354615620 * value)
	{
		___m_Image_42 = value;
		Il2CppCodeGenWriteBarrier(&___m_Image_42, value);
	}

	inline static int32_t get_offset_of_m_Toggle_43() { return static_cast<int32_t>(offsetof(GUIAnimFREE_t2210106936, ___m_Toggle_43)); }
	inline Toggle_t1499417981 * get_m_Toggle_43() const { return ___m_Toggle_43; }
	inline Toggle_t1499417981 ** get_address_of_m_Toggle_43() { return &___m_Toggle_43; }
	inline void set_m_Toggle_43(Toggle_t1499417981 * value)
	{
		___m_Toggle_43 = value;
		Il2CppCodeGenWriteBarrier(&___m_Toggle_43, value);
	}

	inline static int32_t get_offset_of_m_Text_44() { return static_cast<int32_t>(offsetof(GUIAnimFREE_t2210106936, ___m_Text_44)); }
	inline Text_t3286458198 * get_m_Text_44() const { return ___m_Text_44; }
	inline Text_t3286458198 ** get_address_of_m_Text_44() { return &___m_Text_44; }
	inline void set_m_Text_44(Text_t3286458198 * value)
	{
		___m_Text_44 = value;
		Il2CppCodeGenWriteBarrier(&___m_Text_44, value);
	}

	inline static int32_t get_offset_of_m_TextOutline_45() { return static_cast<int32_t>(offsetof(GUIAnimFREE_t2210106936, ___m_TextOutline_45)); }
	inline Outline_t3842262571 * get_m_TextOutline_45() const { return ___m_TextOutline_45; }
	inline Outline_t3842262571 ** get_address_of_m_TextOutline_45() { return &___m_TextOutline_45; }
	inline void set_m_TextOutline_45(Outline_t3842262571 * value)
	{
		___m_TextOutline_45 = value;
		Il2CppCodeGenWriteBarrier(&___m_TextOutline_45, value);
	}

	inline static int32_t get_offset_of_m_TextShadow_46() { return static_cast<int32_t>(offsetof(GUIAnimFREE_t2210106936, ___m_TextShadow_46)); }
	inline Shadow_t1464142665 * get_m_TextShadow_46() const { return ___m_TextShadow_46; }
	inline Shadow_t1464142665 ** get_address_of_m_TextShadow_46() { return &___m_TextShadow_46; }
	inline void set_m_TextShadow_46(Shadow_t1464142665 * value)
	{
		___m_TextShadow_46 = value;
		Il2CppCodeGenWriteBarrier(&___m_TextShadow_46, value);
	}

	inline static int32_t get_offset_of_m_RawImage_47() { return static_cast<int32_t>(offsetof(GUIAnimFREE_t2210106936, ___m_RawImage_47)); }
	inline RawImage_t3831555132 * get_m_RawImage_47() const { return ___m_RawImage_47; }
	inline RawImage_t3831555132 ** get_address_of_m_RawImage_47() { return &___m_RawImage_47; }
	inline void set_m_RawImage_47(RawImage_t3831555132 * value)
	{
		___m_RawImage_47 = value;
		Il2CppCodeGenWriteBarrier(&___m_RawImage_47, value);
	}

	inline static int32_t get_offset_of_m_Slider_48() { return static_cast<int32_t>(offsetof(GUIAnimFREE_t2210106936, ___m_Slider_48)); }
	inline Slider_t1468074762 * get_m_Slider_48() const { return ___m_Slider_48; }
	inline Slider_t1468074762 ** get_address_of_m_Slider_48() { return &___m_Slider_48; }
	inline void set_m_Slider_48(Slider_t1468074762 * value)
	{
		___m_Slider_48 = value;
		Il2CppCodeGenWriteBarrier(&___m_Slider_48, value);
	}

	inline static int32_t get_offset_of_m_CanvasRenderer_49() { return static_cast<int32_t>(offsetof(GUIAnimFREE_t2210106936, ___m_CanvasRenderer_49)); }
	inline CanvasRenderer_t3626201768 * get_m_CanvasRenderer_49() const { return ___m_CanvasRenderer_49; }
	inline CanvasRenderer_t3626201768 ** get_address_of_m_CanvasRenderer_49() { return &___m_CanvasRenderer_49; }
	inline void set_m_CanvasRenderer_49(CanvasRenderer_t3626201768 * value)
	{
		___m_CanvasRenderer_49 = value;
		Il2CppCodeGenWriteBarrier(&___m_CanvasRenderer_49, value);
	}

	inline static int32_t get_offset_of_m_ParentCanvasRectTransform_50() { return static_cast<int32_t>(offsetof(GUIAnimFREE_t2210106936, ___m_ParentCanvasRectTransform_50)); }
	inline RectTransform_t3317474837 * get_m_ParentCanvasRectTransform_50() const { return ___m_ParentCanvasRectTransform_50; }
	inline RectTransform_t3317474837 ** get_address_of_m_ParentCanvasRectTransform_50() { return &___m_ParentCanvasRectTransform_50; }
	inline void set_m_ParentCanvasRectTransform_50(RectTransform_t3317474837 * value)
	{
		___m_ParentCanvasRectTransform_50 = value;
		Il2CppCodeGenWriteBarrier(&___m_ParentCanvasRectTransform_50, value);
	}

	inline static int32_t get_offset_of_m_MoveIdle_Attemp_51() { return static_cast<int32_t>(offsetof(GUIAnimFREE_t2210106936, ___m_MoveIdle_Attemp_51)); }
	inline int32_t get_m_MoveIdle_Attemp_51() const { return ___m_MoveIdle_Attemp_51; }
	inline int32_t* get_address_of_m_MoveIdle_Attemp_51() { return &___m_MoveIdle_Attemp_51; }
	inline void set_m_MoveIdle_Attemp_51(int32_t value)
	{
		___m_MoveIdle_Attemp_51 = value;
	}

	inline static int32_t get_offset_of_m_MoveIdle_AttempMax_52() { return static_cast<int32_t>(offsetof(GUIAnimFREE_t2210106936, ___m_MoveIdle_AttempMax_52)); }
	inline int32_t get_m_MoveIdle_AttempMax_52() const { return ___m_MoveIdle_AttempMax_52; }
	inline int32_t* get_address_of_m_MoveIdle_AttempMax_52() { return &___m_MoveIdle_AttempMax_52; }
	inline void set_m_MoveIdle_AttempMax_52(int32_t value)
	{
		___m_MoveIdle_AttempMax_52 = value;
	}

	inline static int32_t get_offset_of_m_MoveIdle_AttempMax_TimeInterval_53() { return static_cast<int32_t>(offsetof(GUIAnimFREE_t2210106936, ___m_MoveIdle_AttempMax_TimeInterval_53)); }
	inline float get_m_MoveIdle_AttempMax_TimeInterval_53() const { return ___m_MoveIdle_AttempMax_TimeInterval_53; }
	inline float* get_address_of_m_MoveIdle_AttempMax_TimeInterval_53() { return &___m_MoveIdle_AttempMax_TimeInterval_53; }
	inline void set_m_MoveIdle_AttempMax_TimeInterval_53(float value)
	{
		___m_MoveIdle_AttempMax_TimeInterval_53 = value;
	}

	inline static int32_t get_offset_of_m_MoveIdle_StartSucceed_54() { return static_cast<int32_t>(offsetof(GUIAnimFREE_t2210106936, ___m_MoveIdle_StartSucceed_54)); }
	inline bool get_m_MoveIdle_StartSucceed_54() const { return ___m_MoveIdle_StartSucceed_54; }
	inline bool* get_address_of_m_MoveIdle_StartSucceed_54() { return &___m_MoveIdle_StartSucceed_54; }
	inline void set_m_MoveIdle_StartSucceed_54(bool value)
	{
		___m_MoveIdle_StartSucceed_54 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
