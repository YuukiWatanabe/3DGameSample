﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.GameObject
struct GameObject_t3674682005;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// IgaguriGenerator
struct  IgaguriGenerator_t2455066283  : public MonoBehaviour_t667441552
{
public:
	// UnityEngine.GameObject IgaguriGenerator::igaguriPrefab
	GameObject_t3674682005 * ___igaguriPrefab_2;

public:
	inline static int32_t get_offset_of_igaguriPrefab_2() { return static_cast<int32_t>(offsetof(IgaguriGenerator_t2455066283, ___igaguriPrefab_2)); }
	inline GameObject_t3674682005 * get_igaguriPrefab_2() const { return ___igaguriPrefab_2; }
	inline GameObject_t3674682005 ** get_address_of_igaguriPrefab_2() { return &___igaguriPrefab_2; }
	inline void set_igaguriPrefab_2(GameObject_t3674682005 * value)
	{
		___igaguriPrefab_2 = value;
		Il2CppCodeGenWriteBarrier(&___igaguriPrefab_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
