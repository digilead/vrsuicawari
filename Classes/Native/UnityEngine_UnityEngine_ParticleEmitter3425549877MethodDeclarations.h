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

// UnityEngine.ParticleEmitter
struct ParticleEmitter_t3425549877;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Vector33525329789.h"
#include "UnityEngine_UnityEngine_Color1588175760.h"
#include "UnityEngine_UnityEngine_InternalEmitParticleArgume3421370189.h"

// System.Boolean UnityEngine.ParticleEmitter::get_emit()
extern "C"  bool ParticleEmitter_get_emit_m4010660137 (ParticleEmitter_t3425549877 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.ParticleEmitter::set_emit(System.Boolean)
extern "C"  void ParticleEmitter_set_emit_m3583864954 (ParticleEmitter_t3425549877 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.ParticleEmitter::get_useWorldSpace()
extern "C"  bool ParticleEmitter_get_useWorldSpace_m350915143 (ParticleEmitter_t3425549877 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.ParticleEmitter::set_useWorldSpace(System.Boolean)
extern "C"  void ParticleEmitter_set_useWorldSpace_m1086537508 (ParticleEmitter_t3425549877 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.ParticleEmitter::Emit(UnityEngine.Vector3,UnityEngine.Vector3,System.Single,System.Single,UnityEngine.Color,System.Single,System.Single)
extern "C"  void ParticleEmitter_Emit_m2426850490 (ParticleEmitter_t3425549877 * __this, Vector3_t3525329789  ___pos0, Vector3_t3525329789  ___velocity1, float ___size2, float ___energy3, Color_t1588175760  ___color4, float ___rotation5, float ___angularVelocity6, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.ParticleEmitter::Emit3(UnityEngine.InternalEmitParticleArguments&)
extern "C"  void ParticleEmitter_Emit3_m532233042 (ParticleEmitter_t3425549877 * __this, InternalEmitParticleArguments_t3421370189 * ___args0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
