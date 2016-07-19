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

// UnityEngine.ParticleSystem
struct ParticleSystem_t56787138;
// UnityEngine.ParticleSystem/IteratorDelegate
struct IteratorDelegate_t3855630387;
// UnityEngine.Transform
struct Transform_t284553113;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_ParticleSystem56787138.h"
#include "UnityEngine_UnityEngine_ParticleSystem_IteratorDel3855630387.h"
#include "UnityEngine_UnityEngine_Transform284553113.h"

// System.Boolean UnityEngine.ParticleSystem::get_isPlaying()
extern "C"  bool ParticleSystem_get_isPlaying_m184625675 (ParticleSystem_t56787138 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.ParticleSystem::set_loop(System.Boolean)
extern "C"  void ParticleSystem_set_loop_m2070057540 (ParticleSystem_t56787138 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.ParticleSystem::set_enableEmission(System.Boolean)
extern "C"  void ParticleSystem_set_enableEmission_m3362064842 (ParticleSystem_t56787138 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.ParticleSystem::Internal_Play(UnityEngine.ParticleSystem)
extern "C"  bool ParticleSystem_Internal_Play_m594025146 (Il2CppObject * __this /* static, unused */, ParticleSystem_t56787138 * ___self0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.ParticleSystem::Internal_Stop(UnityEngine.ParticleSystem)
extern "C"  bool ParticleSystem_Internal_Stop_m4175525512 (Il2CppObject * __this /* static, unused */, ParticleSystem_t56787138 * ___self0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.ParticleSystem::Internal_IsAlive(UnityEngine.ParticleSystem)
extern "C"  bool ParticleSystem_Internal_IsAlive_m3898640007 (Il2CppObject * __this /* static, unused */, ParticleSystem_t56787138 * ___self0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.ParticleSystem::Play(System.Boolean)
extern "C"  void ParticleSystem_Play_m1637509303 (ParticleSystem_t56787138 * __this, bool ___withChildren0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.ParticleSystem::Stop()
extern "C"  void ParticleSystem_Stop_m1331160206 (ParticleSystem_t56787138 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.ParticleSystem::Stop(System.Boolean)
extern "C"  void ParticleSystem_Stop_m1876199813 (ParticleSystem_t56787138 * __this, bool ___withChildren0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.ParticleSystem::IsAlive()
extern "C"  bool ParticleSystem_IsAlive_m3733722867 (ParticleSystem_t56787138 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.ParticleSystem::IsAlive(System.Boolean)
extern "C"  bool ParticleSystem_IsAlive_m2723817258 (ParticleSystem_t56787138 * __this, bool ___withChildren0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.ParticleSystem::IterateParticleSystems(System.Boolean,UnityEngine.ParticleSystem/IteratorDelegate)
extern "C"  bool ParticleSystem_IterateParticleSystems_m2232250723 (ParticleSystem_t56787138 * __this, bool ___recurse0, IteratorDelegate_t3855630387 * ___func1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.ParticleSystem::IterateParticleSystemsRecursive(UnityEngine.Transform,UnityEngine.ParticleSystem/IteratorDelegate)
extern "C"  bool ParticleSystem_IterateParticleSystemsRecursive_m389741621 (Il2CppObject * __this /* static, unused */, Transform_t284553113 * ___transform0, IteratorDelegate_t3855630387 * ___func1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.ParticleSystem::<Play>m__1(UnityEngine.ParticleSystem)
extern "C"  bool ParticleSystem_U3CPlayU3Em__1_m745236472 (Il2CppObject * __this /* static, unused */, ParticleSystem_t56787138 * ___ps0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.ParticleSystem::<Stop>m__2(UnityEngine.ParticleSystem)
extern "C"  bool ParticleSystem_U3CStopU3Em__2_m2892570987 (Il2CppObject * __this /* static, unused */, ParticleSystem_t56787138 * ___ps0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.ParticleSystem::<IsAlive>m__5(UnityEngine.ParticleSystem)
extern "C"  bool ParticleSystem_U3CIsAliveU3Em__5_m576010307 (Il2CppObject * __this /* static, unused */, ParticleSystem_t56787138 * ___ps0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
