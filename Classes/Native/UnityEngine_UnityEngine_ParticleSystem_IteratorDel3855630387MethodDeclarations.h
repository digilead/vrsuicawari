﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// UnityEngine.ParticleSystem/IteratorDelegate
struct IteratorDelegate_t3855630387;
// System.Object
struct Il2CppObject;
// UnityEngine.ParticleSystem
struct ParticleSystem_t56787138;
// System.IAsyncResult
struct IAsyncResult_t537683269;
// System.AsyncCallback
struct AsyncCallback_t1363551830;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object837106420.h"
#include "mscorlib_System_IntPtr676692020.h"
#include "UnityEngine_UnityEngine_ParticleSystem56787138.h"
#include "mscorlib_System_AsyncCallback1363551830.h"

// System.Void UnityEngine.ParticleSystem/IteratorDelegate::.ctor(System.Object,System.IntPtr)
extern "C"  void IteratorDelegate__ctor_m2534678614 (IteratorDelegate_t3855630387 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.ParticleSystem/IteratorDelegate::Invoke(UnityEngine.ParticleSystem)
extern "C"  bool IteratorDelegate_Invoke_m3641019902 (IteratorDelegate_t3855630387 * __this, ParticleSystem_t56787138 * ___ps0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" bool pinvoke_delegate_wrapper_IteratorDelegate_t3855630387(Il2CppObject* delegate, ParticleSystem_t56787138 * ___ps0);
// System.IAsyncResult UnityEngine.ParticleSystem/IteratorDelegate::BeginInvoke(UnityEngine.ParticleSystem,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * IteratorDelegate_BeginInvoke_m3274238639 (IteratorDelegate_t3855630387 * __this, ParticleSystem_t56787138 * ___ps0, AsyncCallback_t1363551830 * ___callback1, Il2CppObject * ___object2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.ParticleSystem/IteratorDelegate::EndInvoke(System.IAsyncResult)
extern "C"  bool IteratorDelegate_EndInvoke_m3581459136 (IteratorDelegate_t3855630387 * __this, Il2CppObject * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
