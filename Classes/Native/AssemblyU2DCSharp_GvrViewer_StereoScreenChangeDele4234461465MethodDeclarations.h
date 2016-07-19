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

// GvrViewer/StereoScreenChangeDelegate
struct StereoScreenChangeDelegate_t4234461465;
// System.Object
struct Il2CppObject;
// UnityEngine.RenderTexture
struct RenderTexture_t12905170;
// System.IAsyncResult
struct IAsyncResult_t537683269;
// System.AsyncCallback
struct AsyncCallback_t1363551830;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object837106420.h"
#include "mscorlib_System_IntPtr676692020.h"
#include "UnityEngine_UnityEngine_RenderTexture12905170.h"
#include "mscorlib_System_AsyncCallback1363551830.h"

// System.Void GvrViewer/StereoScreenChangeDelegate::.ctor(System.Object,System.IntPtr)
extern "C"  void StereoScreenChangeDelegate__ctor_m912330074 (StereoScreenChangeDelegate_t4234461465 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GvrViewer/StereoScreenChangeDelegate::Invoke(UnityEngine.RenderTexture)
extern "C"  void StereoScreenChangeDelegate_Invoke_m3596629872 (StereoScreenChangeDelegate_t4234461465 * __this, RenderTexture_t12905170 * ___newStereoScreen0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void pinvoke_delegate_wrapper_StereoScreenChangeDelegate_t4234461465(Il2CppObject* delegate, RenderTexture_t12905170 * ___newStereoScreen0);
// System.IAsyncResult GvrViewer/StereoScreenChangeDelegate::BeginInvoke(UnityEngine.RenderTexture,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * StereoScreenChangeDelegate_BeginInvoke_m189770225 (StereoScreenChangeDelegate_t4234461465 * __this, RenderTexture_t12905170 * ___newStereoScreen0, AsyncCallback_t1363551830 * ___callback1, Il2CppObject * ___object2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GvrViewer/StereoScreenChangeDelegate::EndInvoke(System.IAsyncResult)
extern "C"  void StereoScreenChangeDelegate_EndInvoke_m2478128234 (StereoScreenChangeDelegate_t4234461465 * __this, Il2CppObject * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
