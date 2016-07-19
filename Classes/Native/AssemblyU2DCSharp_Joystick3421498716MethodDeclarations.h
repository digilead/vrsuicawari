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

// Joystick
struct Joystick_t3421498716;
// UnityEngine.EventSystems.PointerEventData
struct PointerEventData_t3205101634;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Vector33525329789.h"
#include "UnityEngine_UI_UnityEngine_EventSystems_PointerEve3205101634.h"

// System.Void Joystick::.ctor()
extern "C"  void Joystick__ctor_m26220735 (Joystick_t3421498716 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Joystick::Start()
extern "C"  void Joystick_Start_m3268325823 (Joystick_t3421498716 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Joystick::UpdateVirtualAxes(UnityEngine.Vector3)
extern "C"  void Joystick_UpdateVirtualAxes_m3005827829 (Joystick_t3421498716 * __this, Vector3_t3525329789  ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Joystick::CreateVirtualAxes()
extern "C"  void Joystick_CreateVirtualAxes_m965289233 (Joystick_t3421498716 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Joystick::OnDrag(UnityEngine.EventSystems.PointerEventData)
extern "C"  void Joystick_OnDrag_m3618238950 (Joystick_t3421498716 * __this, PointerEventData_t3205101634 * ___data0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Joystick::OnPointerUp(UnityEngine.EventSystems.PointerEventData)
extern "C"  void Joystick_OnPointerUp_m4070119688 (Joystick_t3421498716 * __this, PointerEventData_t3205101634 * ___data0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Joystick::OnPointerDown(UnityEngine.EventSystems.PointerEventData)
extern "C"  void Joystick_OnPointerDown_m2374337313 (Joystick_t3421498716 * __this, PointerEventData_t3205101634 * ___data0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Joystick::OnDisable()
extern "C"  void Joystick_OnDisable_m609154470 (Joystick_t3421498716 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
