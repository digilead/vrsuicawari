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

// UnityEngine.Material
struct Material_t1886596500;
// UnityEngine.Shader
struct Shader_t3998140498;
// UnityEngine.Texture
struct Texture_t1769722184;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Shader3998140498.h"
#include "UnityEngine_UnityEngine_Material1886596500.h"
#include "UnityEngine_UnityEngine_Color1588175760.h"
#include "UnityEngine_UnityEngine_Texture1769722184.h"
#include "UnityEngine_UnityEngine_Vector23525329788.h"
#include "mscorlib_System_String968488902.h"

// System.Void UnityEngine.Material::.ctor(UnityEngine.Shader)
extern "C"  void Material__ctor_m2685909642 (Material_t1886596500 * __this, Shader_t3998140498 * ___shader0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Material::.ctor(UnityEngine.Material)
extern "C"  void Material__ctor_m2546967560 (Material_t1886596500 * __this, Material_t1886596500 * ___source0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Material::set_color(UnityEngine.Color)
extern "C"  void Material_set_color_m3296857020 (Material_t1886596500 * __this, Color_t1588175760  ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Texture UnityEngine.Material::get_mainTexture()
extern "C"  Texture_t1769722184 * Material_get_mainTexture_m1012267054 (Material_t1886596500 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Material::set_mainTexture(UnityEngine.Texture)
extern "C"  void Material_set_mainTexture_m3116438437 (Material_t1886596500 * __this, Texture_t1769722184 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Material::set_mainTextureOffset(UnityEngine.Vector2)
extern "C"  void Material_set_mainTextureOffset_m3397882654 (Material_t1886596500 * __this, Vector2_t3525329788  ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Material::set_mainTextureScale(UnityEngine.Vector2)
extern "C"  void Material_set_mainTextureScale_m2180744791 (Material_t1886596500 * __this, Vector2_t3525329788  ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Material::SetColor(System.String,UnityEngine.Color)
extern "C"  void Material_SetColor_m1918430019 (Material_t1886596500 * __this, String_t* ___propertyName0, Color_t1588175760  ___color1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Material::SetColor(System.Int32,UnityEngine.Color)
extern "C"  void Material_SetColor_m54957808 (Material_t1886596500 * __this, int32_t ___nameID0, Color_t1588175760  ___color1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Material::INTERNAL_CALL_SetColor(UnityEngine.Material,System.Int32,UnityEngine.Color&)
extern "C"  void Material_INTERNAL_CALL_SetColor_m3209011477 (Il2CppObject * __this /* static, unused */, Material_t1886596500 * ___self0, int32_t ___nameID1, Color_t1588175760 * ___color2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Material::SetTexture(System.String,UnityEngine.Texture)
extern "C"  void Material_SetTexture_m1833724755 (Material_t1886596500 * __this, String_t* ___propertyName0, Texture_t1769722184 * ___texture1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Material::SetTexture(System.Int32,UnityEngine.Texture)
extern "C"  void Material_SetTexture_m3847256752 (Material_t1886596500 * __this, int32_t ___nameID0, Texture_t1769722184 * ___texture1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Texture UnityEngine.Material::GetTexture(System.String)
extern "C"  Texture_t1769722184 * Material_GetTexture_m1284113328 (Material_t1886596500 * __this, String_t* ___propertyName0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Texture UnityEngine.Material::GetTexture(System.Int32)
extern "C"  Texture_t1769722184 * Material_GetTexture_m3767468771 (Material_t1886596500 * __this, int32_t ___nameID0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Material::SetTextureOffset(System.String,UnityEngine.Vector2)
extern "C"  void Material_SetTextureOffset_m1301408396 (Material_t1886596500 * __this, String_t* ___propertyName0, Vector2_t3525329788  ___offset1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Material::INTERNAL_CALL_SetTextureOffset(UnityEngine.Material,System.String,UnityEngine.Vector2&)
extern "C"  void Material_INTERNAL_CALL_SetTextureOffset_m3039341169 (Il2CppObject * __this /* static, unused */, Material_t1886596500 * ___self0, String_t* ___propertyName1, Vector2_t3525329788 * ___offset2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Material::SetTextureScale(System.String,UnityEngine.Vector2)
extern "C"  void Material_SetTextureScale_m1752758881 (Material_t1886596500 * __this, String_t* ___propertyName0, Vector2_t3525329788  ___scale1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Material::INTERNAL_CALL_SetTextureScale(UnityEngine.Material,System.String,UnityEngine.Vector2&)
extern "C"  void Material_INTERNAL_CALL_SetTextureScale_m708056228 (Il2CppObject * __this /* static, unused */, Material_t1886596500 * ___self0, String_t* ___propertyName1, Vector2_t3525329788 * ___scale2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Material::SetFloat(System.String,System.Single)
extern "C"  void Material_SetFloat_m981710063 (Material_t1886596500 * __this, String_t* ___propertyName0, float ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Material::SetFloat(System.Int32,System.Single)
extern "C"  void Material_SetFloat_m170145518 (Material_t1886596500 * __this, int32_t ___nameID0, float ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Material::SetInt(System.String,System.Int32)
extern "C"  void Material_SetInt_m2649395040 (Material_t1886596500 * __this, String_t* ___propertyName0, int32_t ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Material::HasProperty(System.String)
extern "C"  bool Material_HasProperty_m2077312757 (Material_t1886596500 * __this, String_t* ___propertyName0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Material::HasProperty(System.Int32)
extern "C"  bool Material_HasProperty_m190825214 (Material_t1886596500 * __this, int32_t ___nameID0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Material::SetPass(System.Int32)
extern "C"  bool Material_SetPass_m4241824642 (Material_t1886596500 * __this, int32_t ___pass0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Material::Internal_CreateWithShader(UnityEngine.Material,UnityEngine.Shader)
extern "C"  void Material_Internal_CreateWithShader_m701341915 (Il2CppObject * __this /* static, unused */, Material_t1886596500 * ___mono0, Shader_t3998140498 * ___shader1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Material::Internal_CreateWithMaterial(UnityEngine.Material,UnityEngine.Material)
extern "C"  void Material_Internal_CreateWithMaterial_m2349411671 (Il2CppObject * __this /* static, unused */, Material_t1886596500 * ___mono0, Material_t1886596500 * ___source1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Material::CopyPropertiesFromMaterial(UnityEngine.Material)
extern "C"  void Material_CopyPropertiesFromMaterial_m1463072089 (Material_t1886596500 * __this, Material_t1886596500 * ___mat0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Material::EnableKeyword(System.String)
extern "C"  void Material_EnableKeyword_m3802712984 (Material_t1886596500 * __this, String_t* ___keyword0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Material::DisableKeyword(System.String)
extern "C"  void Material_DisableKeyword_m572736419 (Material_t1886596500 * __this, String_t* ___keyword0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
