#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Camera
struct Camera_t189460977;
// UnityEngine.AudioSource
struct AudioSource_t1135106623;
// UnityEngine.Animator
struct Animator_t69676727;
// UnityEngine.ParticleSystem
struct ParticleSystem_t3394631041;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Gun
struct  Gun_t1581089958  : public MonoBehaviour_t1158329972
{
public:
	// System.Single Gun::damage
	float ___damage_2;
	// System.Single Gun::range
	float ___range_3;
	// UnityEngine.Camera Gun::fpsCam
	Camera_t189460977 * ___fpsCam_4;
	// System.Single Gun::fireRate
	float ___fireRate_5;
	// System.Single Gun::lastFired
	float ___lastFired_6;
	// System.Single Gun::force
	float ___force_7;
	// UnityEngine.AudioSource Gun::shootClip
	AudioSource_t1135106623 * ___shootClip_8;
	// UnityEngine.Animator Gun::anim
	Animator_t69676727 * ___anim_9;
	// UnityEngine.ParticleSystem Gun::muzzleflash
	ParticleSystem_t3394631041 * ___muzzleflash_10;

public:
	inline static int32_t get_offset_of_damage_2() { return static_cast<int32_t>(offsetof(Gun_t1581089958, ___damage_2)); }
	inline float get_damage_2() const { return ___damage_2; }
	inline float* get_address_of_damage_2() { return &___damage_2; }
	inline void set_damage_2(float value)
	{
		___damage_2 = value;
	}

	inline static int32_t get_offset_of_range_3() { return static_cast<int32_t>(offsetof(Gun_t1581089958, ___range_3)); }
	inline float get_range_3() const { return ___range_3; }
	inline float* get_address_of_range_3() { return &___range_3; }
	inline void set_range_3(float value)
	{
		___range_3 = value;
	}

	inline static int32_t get_offset_of_fpsCam_4() { return static_cast<int32_t>(offsetof(Gun_t1581089958, ___fpsCam_4)); }
	inline Camera_t189460977 * get_fpsCam_4() const { return ___fpsCam_4; }
	inline Camera_t189460977 ** get_address_of_fpsCam_4() { return &___fpsCam_4; }
	inline void set_fpsCam_4(Camera_t189460977 * value)
	{
		___fpsCam_4 = value;
		Il2CppCodeGenWriteBarrier(&___fpsCam_4, value);
	}

	inline static int32_t get_offset_of_fireRate_5() { return static_cast<int32_t>(offsetof(Gun_t1581089958, ___fireRate_5)); }
	inline float get_fireRate_5() const { return ___fireRate_5; }
	inline float* get_address_of_fireRate_5() { return &___fireRate_5; }
	inline void set_fireRate_5(float value)
	{
		___fireRate_5 = value;
	}

	inline static int32_t get_offset_of_lastFired_6() { return static_cast<int32_t>(offsetof(Gun_t1581089958, ___lastFired_6)); }
	inline float get_lastFired_6() const { return ___lastFired_6; }
	inline float* get_address_of_lastFired_6() { return &___lastFired_6; }
	inline void set_lastFired_6(float value)
	{
		___lastFired_6 = value;
	}

	inline static int32_t get_offset_of_force_7() { return static_cast<int32_t>(offsetof(Gun_t1581089958, ___force_7)); }
	inline float get_force_7() const { return ___force_7; }
	inline float* get_address_of_force_7() { return &___force_7; }
	inline void set_force_7(float value)
	{
		___force_7 = value;
	}

	inline static int32_t get_offset_of_shootClip_8() { return static_cast<int32_t>(offsetof(Gun_t1581089958, ___shootClip_8)); }
	inline AudioSource_t1135106623 * get_shootClip_8() const { return ___shootClip_8; }
	inline AudioSource_t1135106623 ** get_address_of_shootClip_8() { return &___shootClip_8; }
	inline void set_shootClip_8(AudioSource_t1135106623 * value)
	{
		___shootClip_8 = value;
		Il2CppCodeGenWriteBarrier(&___shootClip_8, value);
	}

	inline static int32_t get_offset_of_anim_9() { return static_cast<int32_t>(offsetof(Gun_t1581089958, ___anim_9)); }
	inline Animator_t69676727 * get_anim_9() const { return ___anim_9; }
	inline Animator_t69676727 ** get_address_of_anim_9() { return &___anim_9; }
	inline void set_anim_9(Animator_t69676727 * value)
	{
		___anim_9 = value;
		Il2CppCodeGenWriteBarrier(&___anim_9, value);
	}

	inline static int32_t get_offset_of_muzzleflash_10() { return static_cast<int32_t>(offsetof(Gun_t1581089958, ___muzzleflash_10)); }
	inline ParticleSystem_t3394631041 * get_muzzleflash_10() const { return ___muzzleflash_10; }
	inline ParticleSystem_t3394631041 ** get_address_of_muzzleflash_10() { return &___muzzleflash_10; }
	inline void set_muzzleflash_10(ParticleSystem_t3394631041 * value)
	{
		___muzzleflash_10 = value;
		Il2CppCodeGenWriteBarrier(&___muzzleflash_10, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
