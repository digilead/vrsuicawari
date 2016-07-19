#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.GameObject
struct GameObject_t4012695102;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_t3499186955;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"
#include "UnityEngine_UnityEngine_Rect1525428817.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// DetonatorTest
struct  DetonatorTest_t2504109594  : public MonoBehaviour_t3012272455
{
public:
	// UnityEngine.GameObject DetonatorTest::currentDetonator
	GameObject_t4012695102 * ___currentDetonator_2;
	// System.Int32 DetonatorTest::_currentExpIdx
	int32_t ____currentExpIdx_3;
	// UnityEngine.GameObject[] DetonatorTest::detonatorPrefabs
	GameObjectU5BU5D_t3499186955* ___detonatorPrefabs_4;
	// System.Single DetonatorTest::explosionLife
	float ___explosionLife_5;
	// System.Single DetonatorTest::timeScale
	float ___timeScale_6;
	// System.Single DetonatorTest::detailLevel
	float ___detailLevel_7;
	// UnityEngine.GameObject DetonatorTest::wall
	GameObject_t4012695102 * ___wall_8;
	// UnityEngine.GameObject DetonatorTest::_currentWall
	GameObject_t4012695102 * ____currentWall_9;
	// System.Single DetonatorTest::_spawnWallTime
	float ____spawnWallTime_10;
	// UnityEngine.Rect DetonatorTest::_guiRect
	Rect_t1525428817  ____guiRect_11;
	// UnityEngine.Rect DetonatorTest::checkRect
	Rect_t1525428817  ___checkRect_12;

public:
	inline static int32_t get_offset_of_currentDetonator_2() { return static_cast<int32_t>(offsetof(DetonatorTest_t2504109594, ___currentDetonator_2)); }
	inline GameObject_t4012695102 * get_currentDetonator_2() const { return ___currentDetonator_2; }
	inline GameObject_t4012695102 ** get_address_of_currentDetonator_2() { return &___currentDetonator_2; }
	inline void set_currentDetonator_2(GameObject_t4012695102 * value)
	{
		___currentDetonator_2 = value;
		Il2CppCodeGenWriteBarrier(&___currentDetonator_2, value);
	}

	inline static int32_t get_offset_of__currentExpIdx_3() { return static_cast<int32_t>(offsetof(DetonatorTest_t2504109594, ____currentExpIdx_3)); }
	inline int32_t get__currentExpIdx_3() const { return ____currentExpIdx_3; }
	inline int32_t* get_address_of__currentExpIdx_3() { return &____currentExpIdx_3; }
	inline void set__currentExpIdx_3(int32_t value)
	{
		____currentExpIdx_3 = value;
	}

	inline static int32_t get_offset_of_detonatorPrefabs_4() { return static_cast<int32_t>(offsetof(DetonatorTest_t2504109594, ___detonatorPrefabs_4)); }
	inline GameObjectU5BU5D_t3499186955* get_detonatorPrefabs_4() const { return ___detonatorPrefabs_4; }
	inline GameObjectU5BU5D_t3499186955** get_address_of_detonatorPrefabs_4() { return &___detonatorPrefabs_4; }
	inline void set_detonatorPrefabs_4(GameObjectU5BU5D_t3499186955* value)
	{
		___detonatorPrefabs_4 = value;
		Il2CppCodeGenWriteBarrier(&___detonatorPrefabs_4, value);
	}

	inline static int32_t get_offset_of_explosionLife_5() { return static_cast<int32_t>(offsetof(DetonatorTest_t2504109594, ___explosionLife_5)); }
	inline float get_explosionLife_5() const { return ___explosionLife_5; }
	inline float* get_address_of_explosionLife_5() { return &___explosionLife_5; }
	inline void set_explosionLife_5(float value)
	{
		___explosionLife_5 = value;
	}

	inline static int32_t get_offset_of_timeScale_6() { return static_cast<int32_t>(offsetof(DetonatorTest_t2504109594, ___timeScale_6)); }
	inline float get_timeScale_6() const { return ___timeScale_6; }
	inline float* get_address_of_timeScale_6() { return &___timeScale_6; }
	inline void set_timeScale_6(float value)
	{
		___timeScale_6 = value;
	}

	inline static int32_t get_offset_of_detailLevel_7() { return static_cast<int32_t>(offsetof(DetonatorTest_t2504109594, ___detailLevel_7)); }
	inline float get_detailLevel_7() const { return ___detailLevel_7; }
	inline float* get_address_of_detailLevel_7() { return &___detailLevel_7; }
	inline void set_detailLevel_7(float value)
	{
		___detailLevel_7 = value;
	}

	inline static int32_t get_offset_of_wall_8() { return static_cast<int32_t>(offsetof(DetonatorTest_t2504109594, ___wall_8)); }
	inline GameObject_t4012695102 * get_wall_8() const { return ___wall_8; }
	inline GameObject_t4012695102 ** get_address_of_wall_8() { return &___wall_8; }
	inline void set_wall_8(GameObject_t4012695102 * value)
	{
		___wall_8 = value;
		Il2CppCodeGenWriteBarrier(&___wall_8, value);
	}

	inline static int32_t get_offset_of__currentWall_9() { return static_cast<int32_t>(offsetof(DetonatorTest_t2504109594, ____currentWall_9)); }
	inline GameObject_t4012695102 * get__currentWall_9() const { return ____currentWall_9; }
	inline GameObject_t4012695102 ** get_address_of__currentWall_9() { return &____currentWall_9; }
	inline void set__currentWall_9(GameObject_t4012695102 * value)
	{
		____currentWall_9 = value;
		Il2CppCodeGenWriteBarrier(&____currentWall_9, value);
	}

	inline static int32_t get_offset_of__spawnWallTime_10() { return static_cast<int32_t>(offsetof(DetonatorTest_t2504109594, ____spawnWallTime_10)); }
	inline float get__spawnWallTime_10() const { return ____spawnWallTime_10; }
	inline float* get_address_of__spawnWallTime_10() { return &____spawnWallTime_10; }
	inline void set__spawnWallTime_10(float value)
	{
		____spawnWallTime_10 = value;
	}

	inline static int32_t get_offset_of__guiRect_11() { return static_cast<int32_t>(offsetof(DetonatorTest_t2504109594, ____guiRect_11)); }
	inline Rect_t1525428817  get__guiRect_11() const { return ____guiRect_11; }
	inline Rect_t1525428817 * get_address_of__guiRect_11() { return &____guiRect_11; }
	inline void set__guiRect_11(Rect_t1525428817  value)
	{
		____guiRect_11 = value;
	}

	inline static int32_t get_offset_of_checkRect_12() { return static_cast<int32_t>(offsetof(DetonatorTest_t2504109594, ___checkRect_12)); }
	inline Rect_t1525428817  get_checkRect_12() const { return ___checkRect_12; }
	inline Rect_t1525428817 * get_address_of_checkRect_12() { return &___checkRect_12; }
	inline void set_checkRect_12(Rect_t1525428817  value)
	{
		___checkRect_12 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
