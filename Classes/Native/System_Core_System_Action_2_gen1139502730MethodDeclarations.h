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

// System.Action`2<System.Single,System.Single>
struct Action_2_t1139502730;
// System.Object
struct Il2CppObject;
// System.IAsyncResult
struct IAsyncResult_t537683269;
// System.AsyncCallback
struct AsyncCallback_t1363551830;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object837106420.h"
#include "mscorlib_System_IntPtr676692020.h"
#include "mscorlib_System_AsyncCallback1363551830.h"

// System.Void System.Action`2<System.Single,System.Single>::.ctor(System.Object,System.IntPtr)
extern "C"  void Action_2__ctor_m3205665544_gshared (Action_2_t1139502730 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method);
#define Action_2__ctor_m3205665544(__this, ___object0, ___method1, method) ((  void (*) (Action_2_t1139502730 *, Il2CppObject *, IntPtr_t, const MethodInfo*))Action_2__ctor_m3205665544_gshared)(__this, ___object0, ___method1, method)
// System.Void System.Action`2<System.Single,System.Single>::Invoke(T1,T2)
extern "C"  void Action_2_Invoke_m503874322_gshared (Action_2_t1139502730 * __this, float ___arg10, float ___arg21, const MethodInfo* method);
#define Action_2_Invoke_m503874322(__this, ___arg10, ___arg21, method) ((  void (*) (Action_2_t1139502730 *, float, float, const MethodInfo*))Action_2_Invoke_m503874322_gshared)(__this, ___arg10, ___arg21, method)
// System.IAsyncResult System.Action`2<System.Single,System.Single>::BeginInvoke(T1,T2,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * Action_2_BeginInvoke_m3738822722_gshared (Action_2_t1139502730 * __this, float ___arg10, float ___arg21, AsyncCallback_t1363551830 * ___callback2, Il2CppObject * ___object3, const MethodInfo* method);
#define Action_2_BeginInvoke_m3738822722(__this, ___arg10, ___arg21, ___callback2, ___object3, method) ((  Il2CppObject * (*) (Action_2_t1139502730 *, float, float, AsyncCallback_t1363551830 *, Il2CppObject *, const MethodInfo*))Action_2_BeginInvoke_m3738822722_gshared)(__this, ___arg10, ___arg21, ___callback2, ___object3, method)
// System.Void System.Action`2<System.Single,System.Single>::EndInvoke(System.IAsyncResult)
extern "C"  void Action_2_EndInvoke_m4151888152_gshared (Action_2_t1139502730 * __this, Il2CppObject * ___result0, const MethodInfo* method);
#define Action_2_EndInvoke_m4151888152(__this, ___result0, method) ((  void (*) (Action_2_t1139502730 *, Il2CppObject *, const MethodInfo*))Action_2_EndInvoke_m4151888152_gshared)(__this, ___result0, method)
