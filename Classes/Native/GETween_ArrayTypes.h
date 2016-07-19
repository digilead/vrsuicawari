#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


// GETweenItem
struct GETweenItem_t2763602144;

#include "mscorlib_System_Array2840145358.h"
#include "GETween_GETweenItem2763602144.h"

#pragma once
// GETweenItem[]
struct GETweenItemU5BU5D_t724658081  : public Il2CppArray
{
public:
	ALIGN_TYPE (8) GETweenItem_t2763602144 * m_Items[1];

public:
	inline GETweenItem_t2763602144 * GetAt(il2cpp_array_size_t index) const { return m_Items[index]; }
	inline GETweenItem_t2763602144 ** GetAddressAt(il2cpp_array_size_t index) { return m_Items + index; }
	inline void SetAt(il2cpp_array_size_t index, GETweenItem_t2763602144 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
