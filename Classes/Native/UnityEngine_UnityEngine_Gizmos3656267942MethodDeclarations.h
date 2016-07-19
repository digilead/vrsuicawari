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

// UnityEngine.Mesh
struct Mesh_t1525280346;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Vector33525329789.h"
#include "UnityEngine_UnityEngine_Mesh1525280346.h"
#include "UnityEngine_UnityEngine_Quaternion1891715979.h"
#include "UnityEngine_UnityEngine_Color1588175760.h"
#include "UnityEngine_UnityEngine_Matrix4x4277289660.h"

// System.Void UnityEngine.Gizmos::DrawWireCube(UnityEngine.Vector3,UnityEngine.Vector3)
extern "C"  void Gizmos_DrawWireCube_m3014140670 (Il2CppObject * __this /* static, unused */, Vector3_t3525329789  ___center0, Vector3_t3525329789  ___size1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Gizmos::INTERNAL_CALL_DrawWireCube(UnityEngine.Vector3&,UnityEngine.Vector3&)
extern "C"  void Gizmos_INTERNAL_CALL_DrawWireCube_m3575153817 (Il2CppObject * __this /* static, unused */, Vector3_t3525329789 * ___center0, Vector3_t3525329789 * ___size1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Gizmos::DrawMesh(UnityEngine.Mesh,UnityEngine.Vector3,UnityEngine.Quaternion,UnityEngine.Vector3)
extern "C"  void Gizmos_DrawMesh_m3325431412 (Il2CppObject * __this /* static, unused */, Mesh_t1525280346 * ___mesh0, Vector3_t3525329789  ___position1, Quaternion_t1891715979  ___rotation2, Vector3_t3525329789  ___scale3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Gizmos::DrawMesh(UnityEngine.Mesh,System.Int32,UnityEngine.Vector3,UnityEngine.Quaternion,UnityEngine.Vector3)
extern "C"  void Gizmos_DrawMesh_m328677783 (Il2CppObject * __this /* static, unused */, Mesh_t1525280346 * ___mesh0, int32_t ___submeshIndex1, Vector3_t3525329789  ___position2, Quaternion_t1891715979  ___rotation3, Vector3_t3525329789  ___scale4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Gizmos::INTERNAL_CALL_DrawMesh(UnityEngine.Mesh,System.Int32,UnityEngine.Vector3&,UnityEngine.Quaternion&,UnityEngine.Vector3&)
extern "C"  void Gizmos_INTERNAL_CALL_DrawMesh_m3193242848 (Il2CppObject * __this /* static, unused */, Mesh_t1525280346 * ___mesh0, int32_t ___submeshIndex1, Vector3_t3525329789 * ___position2, Quaternion_t1891715979 * ___rotation3, Vector3_t3525329789 * ___scale4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Gizmos::set_color(UnityEngine.Color)
extern "C"  void Gizmos_set_color_m3649224910 (Il2CppObject * __this /* static, unused */, Color_t1588175760  ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Gizmos::INTERNAL_set_color(UnityEngine.Color&)
extern "C"  void Gizmos_INTERNAL_set_color_m2940555066 (Il2CppObject * __this /* static, unused */, Color_t1588175760 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Gizmos::set_matrix(UnityEngine.Matrix4x4)
extern "C"  void Gizmos_set_matrix_m3443030764 (Il2CppObject * __this /* static, unused */, Matrix4x4_t277289660  ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Gizmos::INTERNAL_set_matrix(UnityEngine.Matrix4x4&)
extern "C"  void Gizmos_INTERNAL_set_matrix_m176789860 (Il2CppObject * __this /* static, unused */, Matrix4x4_t277289660 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
