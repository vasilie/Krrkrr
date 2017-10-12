#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>


#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Target
struct  Target_t353214563  : public MonoBehaviour_t1158329972
{
public:
	// System.Single Target::health
	float ___health_2;

public:
	inline static int32_t get_offset_of_health_2() { return static_cast<int32_t>(offsetof(Target_t353214563, ___health_2)); }
	inline float get_health_2() const { return ___health_2; }
	inline float* get_address_of_health_2() { return &___health_2; }
	inline void set_health_2(float value)
	{
		___health_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
