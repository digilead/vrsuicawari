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

// System.String
struct String_t;
// UnityEngine.GUILayoutOption[]
struct GUILayoutOptionU5BU5D_t1890718142;
// UnityEngine.GUIContent
struct GUIContent_t2432841515;
// UnityEngine.GUIStyle
struct GUIStyle_t1006925219;
// UnityEngine.GUILayoutOption
struct GUILayoutOption_t3151226183;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String968488902.h"
#include "UnityEngine_UnityEngine_GUIContent2432841515.h"
#include "UnityEngine_UnityEngine_GUIStyle1006925219.h"
#include "UnityEngine_UnityEngine_Rect1525428817.h"

// System.Void UnityEngine.GUILayout::Label(System.String,UnityEngine.GUILayoutOption[])
extern "C"  void GUILayout_Label_m925445731 (Il2CppObject * __this /* static, unused */, String_t* ___text0, GUILayoutOptionU5BU5D_t1890718142* ___options1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUILayout::DoLabel(UnityEngine.GUIContent,UnityEngine.GUIStyle,UnityEngine.GUILayoutOption[])
extern "C"  void GUILayout_DoLabel_m3812046522 (Il2CppObject * __this /* static, unused */, GUIContent_t2432841515 * ___content0, GUIStyle_t1006925219 * ___style1, GUILayoutOptionU5BU5D_t1890718142* ___options2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.GUILayout::Button(System.String,UnityEngine.GUILayoutOption[])
extern "C"  bool GUILayout_Button_m6468109 (Il2CppObject * __this /* static, unused */, String_t* ___text0, GUILayoutOptionU5BU5D_t1890718142* ___options1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.GUILayout::DoButton(UnityEngine.GUIContent,UnityEngine.GUIStyle,UnityEngine.GUILayoutOption[])
extern "C"  bool GUILayout_DoButton_m1519327982 (Il2CppObject * __this /* static, unused */, GUIContent_t2432841515 * ___content0, GUIStyle_t1006925219 * ___style1, GUILayoutOptionU5BU5D_t1890718142* ___options2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.GUILayout::HorizontalSlider(System.Single,System.Single,System.Single,UnityEngine.GUILayoutOption[])
extern "C"  float GUILayout_HorizontalSlider_m2607521747 (Il2CppObject * __this /* static, unused */, float ___value0, float ___leftValue1, float ___rightValue2, GUILayoutOptionU5BU5D_t1890718142* ___options3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.GUILayout::DoHorizontalSlider(System.Single,System.Single,System.Single,UnityEngine.GUIStyle,UnityEngine.GUIStyle,UnityEngine.GUILayoutOption[])
extern "C"  float GUILayout_DoHorizontalSlider_m3518318248 (Il2CppObject * __this /* static, unused */, float ___value0, float ___leftValue1, float ___rightValue2, GUIStyle_t1006925219 * ___slider3, GUIStyle_t1006925219 * ___thumb4, GUILayoutOptionU5BU5D_t1890718142* ___options5, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUILayout::BeginVertical(UnityEngine.GUILayoutOption[])
extern "C"  void GUILayout_BeginVertical_m2155819644 (Il2CppObject * __this /* static, unused */, GUILayoutOptionU5BU5D_t1890718142* ___options0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUILayout::BeginVertical(UnityEngine.GUIContent,UnityEngine.GUIStyle,UnityEngine.GUILayoutOption[])
extern "C"  void GUILayout_BeginVertical_m3125652388 (Il2CppObject * __this /* static, unused */, GUIContent_t2432841515 * ___content0, GUIStyle_t1006925219 * ___style1, GUILayoutOptionU5BU5D_t1890718142* ___options2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUILayout::EndVertical()
extern "C"  void GUILayout_EndVertical_m3685530563 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUILayout::BeginArea(UnityEngine.Rect)
extern "C"  void GUILayout_BeginArea_m4120101869 (Il2CppObject * __this /* static, unused */, Rect_t1525428817  ___screenRect0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUILayout::BeginArea(UnityEngine.Rect,UnityEngine.GUIContent,UnityEngine.GUIStyle)
extern "C"  void GUILayout_BeginArea_m2566106901 (Il2CppObject * __this /* static, unused */, Rect_t1525428817  ___screenRect0, GUIContent_t2432841515 * ___content1, GUIStyle_t1006925219 * ___style2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUILayout::EndArea()
extern "C"  void GUILayout_EndArea_m755663130 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUILayoutOption UnityEngine.GUILayout::Width(System.Single)
extern "C"  GUILayoutOption_t3151226183 * GUILayout_Width_m2259621411 (Il2CppObject * __this /* static, unused */, float ___width0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUILayoutOption UnityEngine.GUILayout::Height(System.Single)
extern "C"  GUILayoutOption_t3151226183 * GUILayout_Height_m3774802884 (Il2CppObject * __this /* static, unused */, float ___height0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
