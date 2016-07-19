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

// UnityEngine.GUISkin
struct GUISkin_t2614611333;
// UnityEngine.GUIContent
struct GUIContent_t2432841515;
// UnityEngine.GUIStyle
struct GUIStyle_t1006925219;
// System.String
struct String_t;
// UnityEngine.GUI/WindowFunction
struct WindowFunction_t999919624;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_DateTime339033936.h"
#include "UnityEngine_UnityEngine_GUISkin2614611333.h"
#include "UnityEngine_UnityEngine_Rect1525428817.h"
#include "UnityEngine_UnityEngine_GUIContent2432841515.h"
#include "UnityEngine_UnityEngine_GUIStyle1006925219.h"
#include "mscorlib_System_String968488902.h"
#include "UnityEngine_UnityEngine_GUI_WindowFunction999919624.h"
#include "mscorlib_System_IntPtr676692020.h"

// System.Void UnityEngine.GUI::.cctor()
extern "C"  void GUI__cctor_m1345698031 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime UnityEngine.GUI::get_nextScrollStepTime()
extern "C"  DateTime_t339033936  GUI_get_nextScrollStepTime_m719800559 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::set_nextScrollStepTime(System.DateTime)
extern "C"  void GUI_set_nextScrollStepTime_m3820512796 (Il2CppObject * __this /* static, unused */, DateTime_t339033936  ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.GUI::get_scrollTroughSide()
extern "C"  int32_t GUI_get_scrollTroughSide_m3369891864 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::set_scrollTroughSide(System.Int32)
extern "C"  void GUI_set_scrollTroughSide_m1228634973 (Il2CppObject * __this /* static, unused */, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::set_skin(UnityEngine.GUISkin)
extern "C"  void GUI_set_skin_m1213959601 (Il2CppObject * __this /* static, unused */, GUISkin_t2614611333 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUISkin UnityEngine.GUI::get_skin()
extern "C"  GUISkin_t2614611333 * GUI_get_skin_m4001454842 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::DoSetSkin(UnityEngine.GUISkin)
extern "C"  void GUI_DoSetSkin_m800823745 (Il2CppObject * __this /* static, unused */, GUISkin_t2614611333 * ___newSkin0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::Label(UnityEngine.Rect,UnityEngine.GUIContent,UnityEngine.GUIStyle)
extern "C"  void GUI_Label_m2293702269 (Il2CppObject * __this /* static, unused */, Rect_t1525428817  ___position0, GUIContent_t2432841515 * ___content1, GUIStyle_t1006925219 * ___style2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::Box(UnityEngine.Rect,UnityEngine.GUIContent,UnityEngine.GUIStyle)
extern "C"  void GUI_Box_m3007052244 (Il2CppObject * __this /* static, unused */, Rect_t1525428817  ___position0, GUIContent_t2432841515 * ___content1, GUIStyle_t1006925219 * ___style2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.GUI::Button(UnityEngine.Rect,System.String)
extern "C"  bool GUI_Button_m885093907 (Il2CppObject * __this /* static, unused */, Rect_t1525428817  ___position0, String_t* ___text1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.GUI::Button(UnityEngine.Rect,UnityEngine.GUIContent,UnityEngine.GUIStyle)
extern "C"  bool GUI_Button_m3806860863 (Il2CppObject * __this /* static, unused */, Rect_t1525428817  ___position0, GUIContent_t2432841515 * ___content1, GUIStyle_t1006925219 * ___style2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.GUI::HorizontalSlider(UnityEngine.Rect,System.Single,System.Single,System.Single,UnityEngine.GUIStyle,UnityEngine.GUIStyle)
extern "C"  float GUI_HorizontalSlider_m899690739 (Il2CppObject * __this /* static, unused */, Rect_t1525428817  ___position0, float ___value1, float ___leftValue2, float ___rightValue3, GUIStyle_t1006925219 * ___slider4, GUIStyle_t1006925219 * ___thumb5, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.GUI::Slider(UnityEngine.Rect,System.Single,System.Single,System.Single,System.Single,UnityEngine.GUIStyle,UnityEngine.GUIStyle,System.Boolean,System.Int32)
extern "C"  float GUI_Slider_m2269439694 (Il2CppObject * __this /* static, unused */, Rect_t1525428817  ___position0, float ___value1, float ___size2, float ___start3, float ___end4, GUIStyle_t1006925219 * ___slider5, GUIStyle_t1006925219 * ___thumb6, bool ___horiz7, int32_t ___id8, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::BeginGroup(UnityEngine.Rect,UnityEngine.GUIContent,UnityEngine.GUIStyle)
extern "C"  void GUI_BeginGroup_m3147745289 (Il2CppObject * __this /* static, unused */, Rect_t1525428817  ___position0, GUIContent_t2432841515 * ___content1, GUIStyle_t1006925219 * ___style2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::EndGroup()
extern "C"  void GUI_EndGroup_m2343976426 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::CallWindowDelegate(UnityEngine.GUI/WindowFunction,System.Int32,UnityEngine.GUISkin,System.Int32,System.Single,System.Single,UnityEngine.GUIStyle)
extern "C"  void GUI_CallWindowDelegate_m2260338804 (Il2CppObject * __this /* static, unused */, WindowFunction_t999919624 * ___func0, int32_t ___id1, GUISkin_t2614611333 * ____skin2, int32_t ___forceRect3, float ___width4, float ___height5, GUIStyle_t1006925219 * ___style6, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::set_changed(System.Boolean)
extern "C"  void GUI_set_changed_m727947722 (Il2CppObject * __this /* static, unused */, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::DoLabel(UnityEngine.Rect,UnityEngine.GUIContent,System.IntPtr)
extern "C"  void GUI_DoLabel_m2990009013 (Il2CppObject * __this /* static, unused */, Rect_t1525428817  ___position0, GUIContent_t2432841515 * ___content1, IntPtr_t ___style2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::INTERNAL_CALL_DoLabel(UnityEngine.Rect&,UnityEngine.GUIContent,System.IntPtr)
extern "C"  void GUI_INTERNAL_CALL_DoLabel_m2707679966 (Il2CppObject * __this /* static, unused */, Rect_t1525428817 * ___position0, GUIContent_t2432841515 * ___content1, IntPtr_t ___style2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.GUI::DoButton(UnityEngine.Rect,UnityEngine.GUIContent,System.IntPtr)
extern "C"  bool GUI_DoButton_m2194494269 (Il2CppObject * __this /* static, unused */, Rect_t1525428817  ___position0, GUIContent_t2432841515 * ___content1, IntPtr_t ___style2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.GUI::INTERNAL_CALL_DoButton(UnityEngine.Rect&,UnityEngine.GUIContent,System.IntPtr)
extern "C"  bool GUI_INTERNAL_CALL_DoButton_m1954108340 (Il2CppObject * __this /* static, unused */, Rect_t1525428817 * ___position0, GUIContent_t2432841515 * ___content1, IntPtr_t ___style2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.GUI::get_usePageScrollbars()
extern "C"  bool GUI_get_usePageScrollbars_m944581596 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::InternalRepaintEditorWindow()
extern "C"  void GUI_InternalRepaintEditorWindow_m3223206407 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
