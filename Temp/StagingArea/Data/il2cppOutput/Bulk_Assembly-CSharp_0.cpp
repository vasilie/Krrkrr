#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <cstring>
#include <string.h>
#include <stdio.h>
#include <cmath>
#include <limits>
#include <assert.h>

// Gun
struct Gun_t1581089958;
// UnityEngine.AudioSource
struct AudioSource_t1135106623;
// System.Object
struct Il2CppObject;
// Target
struct Target_t353214563;
// UnityStandardAssets.Utility.AutoMoveAndRotate
struct AutoMoveAndRotate_t2592441618;
// UnityStandardAssets.Utility.AutoMoveAndRotate/Vector3andSpace
struct Vector3andSpace_t245510835;

#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Array3829468939.h"
#include "AssemblyU2DCSharp_U3CModuleU3E3783534214.h"
#include "AssemblyU2DCSharp_U3CModuleU3E3783534214MethodDeclarations.h"
#include "AssemblyU2DCSharp_Gun1581089958.h"
#include "AssemblyU2DCSharp_Gun1581089958MethodDeclarations.h"
#include "mscorlib_System_Void1841601450.h"
#include "UnityEngine_UnityEngine_MonoBehaviour1158329972MethodDeclarations.h"
#include "mscorlib_System_Single2076509932.h"
#include "UnityEngine_UnityEngine_Component3819376471MethodDeclarations.h"
#include "UnityEngine_UnityEngine_GameObject1756533147MethodDeclarations.h"
#include "UnityEngine_UnityEngine_GameObject1756533147.h"
#include "UnityEngine_UnityEngine_AudioSource1135106623.h"
#include "UnityEngine_UnityEngine_Input1785128008MethodDeclarations.h"
#include "mscorlib_System_String2029220233.h"
#include "mscorlib_System_Boolean3825574718.h"
#include "UnityEngine_UnityEngine_Time31991979MethodDeclarations.h"
#include "UnityEngine_UnityEngine_ParticleSystem3394631041MethodDeclarations.h"
#include "UnityEngine_UnityEngine_AudioSource1135106623MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Transform3275118058MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Physics634932869MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Object1021602117MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Debug1368543263MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Vector32243707580MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Rigidbody4233889191MethodDeclarations.h"
#include "AssemblyU2DCSharp_Target353214563MethodDeclarations.h"
#include "UnityEngine_UnityEngine_RaycastHit87180320.h"
#include "AssemblyU2DCSharp_Target353214563.h"
#include "UnityEngine_UnityEngine_ParticleSystem3394631041.h"
#include "UnityEngine_UnityEngine_Camera189460977.h"
#include "UnityEngine_UnityEngine_Transform3275118058.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"
#include "UnityEngine_UnityEngine_RaycastHit87180320MethodDeclarations.h"
#include "mscorlib_System_Object2689449295.h"
#include "UnityEngine_UnityEngine_Component3819376471.h"
#include "UnityEngine_UnityEngine_Object1021602117.h"
#include "UnityEngine_UnityEngine_Rigidbody4233889191.h"
#include "AssemblyU2DCSharp_UnityStandardAssets_Utility_Auto2592441618.h"
#include "AssemblyU2DCSharp_UnityStandardAssets_Utility_Auto2592441618MethodDeclarations.h"
#include "AssemblyU2DCSharp_UnityStandardAssets_Utility_AutoM245510835.h"
#include "UnityEngine_UnityEngine_Space4278750806.h"
#include "AssemblyU2DCSharp_UnityStandardAssets_Utility_AutoM245510835MethodDeclarations.h"
#include "mscorlib_System_Object2689449295MethodDeclarations.h"

// !!0 UnityEngine.GameObject::GetComponent<System.Object>()
extern "C"  Il2CppObject * GameObject_GetComponent_TisIl2CppObject_m2650145732_gshared (GameObject_t1756533147 * __this, const MethodInfo* method);
#define GameObject_GetComponent_TisIl2CppObject_m2650145732(__this, method) ((  Il2CppObject * (*) (GameObject_t1756533147 *, const MethodInfo*))GameObject_GetComponent_TisIl2CppObject_m2650145732_gshared)(__this, method)
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.AudioSource>()
#define GameObject_GetComponent_TisAudioSource_t1135106623_m3309832039(__this, method) ((  AudioSource_t1135106623 * (*) (GameObject_t1756533147 *, const MethodInfo*))GameObject_GetComponent_TisIl2CppObject_m2650145732_gshared)(__this, method)
// !!0 UnityEngine.Component::GetComponent<System.Object>()
extern "C"  Il2CppObject * Component_GetComponent_TisIl2CppObject_m4109961936_gshared (Component_t3819376471 * __this, const MethodInfo* method);
#define Component_GetComponent_TisIl2CppObject_m4109961936(__this, method) ((  Il2CppObject * (*) (Component_t3819376471 *, const MethodInfo*))Component_GetComponent_TisIl2CppObject_m4109961936_gshared)(__this, method)
// !!0 UnityEngine.Component::GetComponent<Target>()
#define Component_GetComponent_TisTarget_t353214563_m410550478(__this, method) ((  Target_t353214563 * (*) (Component_t3819376471 *, const MethodInfo*))Component_GetComponent_TisIl2CppObject_m4109961936_gshared)(__this, method)
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Gun::.ctor()
extern "C"  void Gun__ctor_m1453436535 (Gun_t1581089958 * __this, const MethodInfo* method)
{
	{
		__this->set_damage_2((10.0f));
		__this->set_range_3((100.0f));
		__this->set_fireRate_5((1.0f));
		__this->set_force_7((10.0f));
		MonoBehaviour__ctor_m2464341955(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Gun::Start()
extern const MethodInfo* GameObject_GetComponent_TisAudioSource_t1135106623_m3309832039_MethodInfo_var;
extern const uint32_t Gun_Start_m154466091_MetadataUsageId;
extern "C"  void Gun_Start_m154466091 (Gun_t1581089958 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Gun_Start_m154466091_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		GameObject_t1756533147 * L_0 = Component_get_gameObject_m3105766835(__this, /*hidden argument*/NULL);
		AudioSource_t1135106623 * L_1 = GameObject_GetComponent_TisAudioSource_t1135106623_m3309832039(L_0, /*hidden argument*/GameObject_GetComponent_TisAudioSource_t1135106623_m3309832039_MethodInfo_var);
		__this->set_shootClip_8(L_1);
		return;
	}
}
// System.Void Gun::Update()
extern Il2CppClass* Input_t1785128008_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral3645101709;
extern const uint32_t Gun_Update_m1349698996_MetadataUsageId;
extern "C"  void Gun_Update_m1349698996 (Gun_t1581089958 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Gun_Update_m1349698996_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1785128008_il2cpp_TypeInfo_var);
		bool L_0 = Input_GetButton_m38251721(NULL /*static, unused*/, _stringLiteral3645101709, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0015;
		}
	}
	{
		Gun_Shoot_m667657726(__this, /*hidden argument*/NULL);
	}

IL_0015:
	{
		return;
	}
}
// System.Void Gun::Shoot()
extern Il2CppClass* Debug_t1368543263_il2cpp_TypeInfo_var;
extern Il2CppClass* Object_t1021602117_il2cpp_TypeInfo_var;
extern const MethodInfo* Component_GetComponent_TisTarget_t353214563_m410550478_MethodInfo_var;
extern const uint32_t Gun_Shoot_m667657726_MetadataUsageId;
extern "C"  void Gun_Shoot_m667657726 (Gun_t1581089958 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Gun_Shoot_m667657726_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RaycastHit_t87180320  V_0;
	memset(&V_0, 0, sizeof(V_0));
	Target_t353214563 * V_1 = NULL;
	{
		float L_0 = Time_get_time_m2216684562(NULL /*static, unused*/, /*hidden argument*/NULL);
		float L_1 = __this->get_lastFired_6();
		float L_2 = __this->get_fireRate_5();
		if ((!(((float)L_0) > ((float)((float)((float)L_1+(float)L_2))))))
		{
			goto IL_00d4;
		}
	}
	{
		ParticleSystem_t3394631041 * L_3 = __this->get_muzzleflash_10();
		ParticleSystem_Play_m4171585816(L_3, /*hidden argument*/NULL);
		AudioSource_t1135106623 * L_4 = __this->get_shootClip_8();
		AudioSource_Play_m353744792(L_4, /*hidden argument*/NULL);
		Camera_t189460977 * L_5 = __this->get_fpsCam_4();
		Transform_t3275118058 * L_6 = Component_get_transform_m2697483695(L_5, /*hidden argument*/NULL);
		Vector3_t2243707580  L_7 = Transform_get_position_m1104419803(L_6, /*hidden argument*/NULL);
		Camera_t189460977 * L_8 = __this->get_fpsCam_4();
		Transform_t3275118058 * L_9 = Component_get_transform_m2697483695(L_8, /*hidden argument*/NULL);
		Vector3_t2243707580  L_10 = Transform_get_forward_m1833488937(L_9, /*hidden argument*/NULL);
		float L_11 = __this->get_range_3();
		bool L_12 = Physics_Raycast_m2994111303(NULL /*static, unused*/, L_7, L_10, (&V_0), L_11, /*hidden argument*/NULL);
		if (!L_12)
		{
			goto IL_00c9;
		}
	}
	{
		Transform_t3275118058 * L_13 = RaycastHit_get_transform_m3290290036((&V_0), /*hidden argument*/NULL);
		String_t* L_14 = Object_get_name_m2079638459(L_13, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t1368543263_il2cpp_TypeInfo_var);
		Debug_Log_m920475918(NULL /*static, unused*/, L_14, /*hidden argument*/NULL);
		Transform_t3275118058 * L_15 = RaycastHit_get_transform_m3290290036((&V_0), /*hidden argument*/NULL);
		Target_t353214563 * L_16 = Component_GetComponent_TisTarget_t353214563_m410550478(L_15, /*hidden argument*/Component_GetComponent_TisTarget_t353214563_m410550478_MethodInfo_var);
		V_1 = L_16;
		Target_t353214563 * L_17 = V_1;
		Debug_Log_m920475918(NULL /*static, unused*/, L_17, /*hidden argument*/NULL);
		Target_t353214563 * L_18 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(Object_t1021602117_il2cpp_TypeInfo_var);
		bool L_19 = Object_op_Inequality_m2402264703(NULL /*static, unused*/, L_18, (Object_t1021602117 *)NULL, /*hidden argument*/NULL);
		if (!L_19)
		{
			goto IL_00c9;
		}
	}
	{
		Rigidbody_t4233889191 * L_20 = RaycastHit_get_rigidbody_m480380820((&V_0), /*hidden argument*/NULL);
		float L_21 = __this->get_force_7();
		Camera_t189460977 * L_22 = __this->get_fpsCam_4();
		Transform_t3275118058 * L_23 = Component_get_transform_m2697483695(L_22, /*hidden argument*/NULL);
		Vector3_t2243707580  L_24 = Transform_get_forward_m1833488937(L_23, /*hidden argument*/NULL);
		Vector3_t2243707580  L_25 = Vector3_op_Multiply_m3872631309(NULL /*static, unused*/, L_21, L_24, /*hidden argument*/NULL);
		Vector3_t2243707580  L_26 = RaycastHit_get_point_m326143462((&V_0), /*hidden argument*/NULL);
		Rigidbody_AddForceAtPosition_m196637080(L_20, L_25, L_26, /*hidden argument*/NULL);
		Target_t353214563 * L_27 = V_1;
		float L_28 = __this->get_damage_2();
		Target_TakeDamage_m4044350603(L_27, L_28, /*hidden argument*/NULL);
	}

IL_00c9:
	{
		float L_29 = Time_get_time_m2216684562(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->set_lastFired_6(L_29);
	}

IL_00d4:
	{
		return;
	}
}
// System.Void Target::.ctor()
extern "C"  void Target__ctor_m3482520516 (Target_t353214563 * __this, const MethodInfo* method)
{
	{
		__this->set_health_2((50.0f));
		MonoBehaviour__ctor_m2464341955(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Target::TakeDamage(System.Single)
extern "C"  void Target_TakeDamage_m4044350603 (Target_t353214563 * __this, float ___amount0, const MethodInfo* method)
{
	{
		float L_0 = __this->get_health_2();
		float L_1 = ___amount0;
		__this->set_health_2(((float)((float)L_0-(float)L_1)));
		float L_2 = __this->get_health_2();
		if ((!(((float)L_2) <= ((float)(0.0f)))))
		{
			goto IL_0024;
		}
	}
	{
		Target_Die_m1620751842(__this, /*hidden argument*/NULL);
	}

IL_0024:
	{
		return;
	}
}
// System.Void Target::Die()
extern Il2CppClass* Object_t1021602117_il2cpp_TypeInfo_var;
extern const uint32_t Target_Die_m1620751842_MetadataUsageId;
extern "C"  void Target_Die_m1620751842 (Target_t353214563 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Target_Die_m1620751842_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		GameObject_t1756533147 * L_0 = Component_get_gameObject_m3105766835(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t1021602117_il2cpp_TypeInfo_var);
		Object_Destroy_m4145850038(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityStandardAssets.Utility.AutoMoveAndRotate::.ctor()
extern "C"  void AutoMoveAndRotate__ctor_m2977255148 (AutoMoveAndRotate_t2592441618 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m2464341955(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityStandardAssets.Utility.AutoMoveAndRotate::Start()
extern "C"  void AutoMoveAndRotate_Start_m2091350796 (AutoMoveAndRotate_t2592441618 * __this, const MethodInfo* method)
{
	{
		float L_0 = Time_get_realtimeSinceStartup_m357614587(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->set_m_LastRealTime_5(L_0);
		return;
	}
}
// System.Void UnityStandardAssets.Utility.AutoMoveAndRotate::LateUpdate()
extern "C"  void AutoMoveAndRotate_LateUpdate_m4244334453 (AutoMoveAndRotate_t2592441618 * __this, const MethodInfo* method)
{
	float V_0 = 0.0f;
	{
		float L_0 = Time_get_deltaTime_m2233168104(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_0 = L_0;
		bool L_1 = __this->get_ignoreTimescale_4();
		if (!L_1)
		{
			goto IL_0029;
		}
	}
	{
		float L_2 = Time_get_realtimeSinceStartup_m357614587(NULL /*static, unused*/, /*hidden argument*/NULL);
		float L_3 = __this->get_m_LastRealTime_5();
		V_0 = ((float)((float)L_2-(float)L_3));
		float L_4 = Time_get_realtimeSinceStartup_m357614587(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->set_m_LastRealTime_5(L_4);
	}

IL_0029:
	{
		Transform_t3275118058 * L_5 = Component_get_transform_m2697483695(__this, /*hidden argument*/NULL);
		Vector3andSpace_t245510835 * L_6 = __this->get_moveUnitsPerSecond_2();
		Vector3_t2243707580  L_7 = L_6->get_value_0();
		float L_8 = V_0;
		Vector3_t2243707580  L_9 = Vector3_op_Multiply_m1351554733(NULL /*static, unused*/, L_7, L_8, /*hidden argument*/NULL);
		Vector3andSpace_t245510835 * L_10 = __this->get_moveUnitsPerSecond_2();
		int32_t L_11 = L_10->get_space_1();
		Transform_Translate_m423862381(L_5, L_9, L_11, /*hidden argument*/NULL);
		Transform_t3275118058 * L_12 = Component_get_transform_m2697483695(__this, /*hidden argument*/NULL);
		Vector3andSpace_t245510835 * L_13 = __this->get_rotateDegreesPerSecond_3();
		Vector3_t2243707580  L_14 = L_13->get_value_0();
		float L_15 = V_0;
		Vector3_t2243707580  L_16 = Vector3_op_Multiply_m1351554733(NULL /*static, unused*/, L_14, L_15, /*hidden argument*/NULL);
		Vector3andSpace_t245510835 * L_17 = __this->get_moveUnitsPerSecond_2();
		int32_t L_18 = L_17->get_space_1();
		Transform_Rotate_m2612876682(L_12, L_16, L_18, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityStandardAssets.Utility.AutoMoveAndRotate/Vector3andSpace::.ctor()
extern "C"  void Vector3andSpace__ctor_m3813534014 (Vector3andSpace_t245510835 * __this, const MethodInfo* method)
{
	{
		__this->set_space_1(1);
		Object__ctor_m2551263788(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
