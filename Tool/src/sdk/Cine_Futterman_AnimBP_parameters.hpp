#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Cine_Futterman_AnimBP

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function Cine_Futterman_AnimBP.Cine_Futterman_AnimBP_C.ExecuteUbergraph_Cine_Futterman_AnimBP
// 0x0058 (0x0058 - 0x0000)
struct Cine_Futterman_AnimBP_C_ExecuteUbergraph_Cine_Futterman_AnimBP final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_GetOwningActor_ReturnValue;               // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                 CallFunc_GetOwningComponent_ReturnValue;           // 0x0010(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ACineGooseberryMinus01_BP_C*            K2Node_DynamicCast_AsCine_Gooseberry_01_BP;        // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_21[0x3];                                       // 0x0021(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         K2Node_Event_DeltaTimeX;                           // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimSequence*                          CallFunc_GetFuttermanAnimation_Animation;          // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetWorldDeltaSeconds_ReturnValue;         // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Multiply_FloatFloat_ReturnValue;          // 0x0034(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakRotator_Roll;                        // 0x0038(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakRotator_Pitch;                       // 0x003C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakRotator_Yaw;                         // 0x0040(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Add_FloatFloat_ReturnValue;               // 0x0044(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Percent_FloatFloat_ReturnValue;           // 0x0048(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_MakeRotator_ReturnValue;                  // 0x004C(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(Cine_Futterman_AnimBP_C_ExecuteUbergraph_Cine_Futterman_AnimBP) == 0x000008, "Wrong alignment on Cine_Futterman_AnimBP_C_ExecuteUbergraph_Cine_Futterman_AnimBP");
static_assert(sizeof(Cine_Futterman_AnimBP_C_ExecuteUbergraph_Cine_Futterman_AnimBP) == 0x000058, "Wrong size on Cine_Futterman_AnimBP_C_ExecuteUbergraph_Cine_Futterman_AnimBP");
static_assert(offsetof(Cine_Futterman_AnimBP_C_ExecuteUbergraph_Cine_Futterman_AnimBP, EntryPoint) == 0x000000, "Member 'Cine_Futterman_AnimBP_C_ExecuteUbergraph_Cine_Futterman_AnimBP::EntryPoint' has a wrong offset!");
static_assert(offsetof(Cine_Futterman_AnimBP_C_ExecuteUbergraph_Cine_Futterman_AnimBP, CallFunc_GetOwningActor_ReturnValue) == 0x000008, "Member 'Cine_Futterman_AnimBP_C_ExecuteUbergraph_Cine_Futterman_AnimBP::CallFunc_GetOwningActor_ReturnValue' has a wrong offset!");
static_assert(offsetof(Cine_Futterman_AnimBP_C_ExecuteUbergraph_Cine_Futterman_AnimBP, CallFunc_GetOwningComponent_ReturnValue) == 0x000010, "Member 'Cine_Futterman_AnimBP_C_ExecuteUbergraph_Cine_Futterman_AnimBP::CallFunc_GetOwningComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(Cine_Futterman_AnimBP_C_ExecuteUbergraph_Cine_Futterman_AnimBP, K2Node_DynamicCast_AsCine_Gooseberry_01_BP) == 0x000018, "Member 'Cine_Futterman_AnimBP_C_ExecuteUbergraph_Cine_Futterman_AnimBP::K2Node_DynamicCast_AsCine_Gooseberry_01_BP' has a wrong offset!");
static_assert(offsetof(Cine_Futterman_AnimBP_C_ExecuteUbergraph_Cine_Futterman_AnimBP, K2Node_DynamicCast_bSuccess) == 0x000020, "Member 'Cine_Futterman_AnimBP_C_ExecuteUbergraph_Cine_Futterman_AnimBP::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(Cine_Futterman_AnimBP_C_ExecuteUbergraph_Cine_Futterman_AnimBP, K2Node_Event_DeltaTimeX) == 0x000024, "Member 'Cine_Futterman_AnimBP_C_ExecuteUbergraph_Cine_Futterman_AnimBP::K2Node_Event_DeltaTimeX' has a wrong offset!");
static_assert(offsetof(Cine_Futterman_AnimBP_C_ExecuteUbergraph_Cine_Futterman_AnimBP, CallFunc_GetFuttermanAnimation_Animation) == 0x000028, "Member 'Cine_Futterman_AnimBP_C_ExecuteUbergraph_Cine_Futterman_AnimBP::CallFunc_GetFuttermanAnimation_Animation' has a wrong offset!");
static_assert(offsetof(Cine_Futterman_AnimBP_C_ExecuteUbergraph_Cine_Futterman_AnimBP, CallFunc_GetWorldDeltaSeconds_ReturnValue) == 0x000030, "Member 'Cine_Futterman_AnimBP_C_ExecuteUbergraph_Cine_Futterman_AnimBP::CallFunc_GetWorldDeltaSeconds_ReturnValue' has a wrong offset!");
static_assert(offsetof(Cine_Futterman_AnimBP_C_ExecuteUbergraph_Cine_Futterman_AnimBP, CallFunc_Multiply_FloatFloat_ReturnValue) == 0x000034, "Member 'Cine_Futterman_AnimBP_C_ExecuteUbergraph_Cine_Futterman_AnimBP::CallFunc_Multiply_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(Cine_Futterman_AnimBP_C_ExecuteUbergraph_Cine_Futterman_AnimBP, CallFunc_BreakRotator_Roll) == 0x000038, "Member 'Cine_Futterman_AnimBP_C_ExecuteUbergraph_Cine_Futterman_AnimBP::CallFunc_BreakRotator_Roll' has a wrong offset!");
static_assert(offsetof(Cine_Futterman_AnimBP_C_ExecuteUbergraph_Cine_Futterman_AnimBP, CallFunc_BreakRotator_Pitch) == 0x00003C, "Member 'Cine_Futterman_AnimBP_C_ExecuteUbergraph_Cine_Futterman_AnimBP::CallFunc_BreakRotator_Pitch' has a wrong offset!");
static_assert(offsetof(Cine_Futterman_AnimBP_C_ExecuteUbergraph_Cine_Futterman_AnimBP, CallFunc_BreakRotator_Yaw) == 0x000040, "Member 'Cine_Futterman_AnimBP_C_ExecuteUbergraph_Cine_Futterman_AnimBP::CallFunc_BreakRotator_Yaw' has a wrong offset!");
static_assert(offsetof(Cine_Futterman_AnimBP_C_ExecuteUbergraph_Cine_Futterman_AnimBP, CallFunc_Add_FloatFloat_ReturnValue) == 0x000044, "Member 'Cine_Futterman_AnimBP_C_ExecuteUbergraph_Cine_Futterman_AnimBP::CallFunc_Add_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(Cine_Futterman_AnimBP_C_ExecuteUbergraph_Cine_Futterman_AnimBP, CallFunc_Percent_FloatFloat_ReturnValue) == 0x000048, "Member 'Cine_Futterman_AnimBP_C_ExecuteUbergraph_Cine_Futterman_AnimBP::CallFunc_Percent_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(Cine_Futterman_AnimBP_C_ExecuteUbergraph_Cine_Futterman_AnimBP, CallFunc_MakeRotator_ReturnValue) == 0x00004C, "Member 'Cine_Futterman_AnimBP_C_ExecuteUbergraph_Cine_Futterman_AnimBP::CallFunc_MakeRotator_ReturnValue' has a wrong offset!");

// Function Cine_Futterman_AnimBP.Cine_Futterman_AnimBP_C.BlueprintUpdateAnimation
// 0x0004 (0x0004 - 0x0000)
struct Cine_Futterman_AnimBP_C_BlueprintUpdateAnimation final
{
public:
	float                                         DeltaTimeX;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Cine_Futterman_AnimBP_C_BlueprintUpdateAnimation) == 0x000004, "Wrong alignment on Cine_Futterman_AnimBP_C_BlueprintUpdateAnimation");
static_assert(sizeof(Cine_Futterman_AnimBP_C_BlueprintUpdateAnimation) == 0x000004, "Wrong size on Cine_Futterman_AnimBP_C_BlueprintUpdateAnimation");
static_assert(offsetof(Cine_Futterman_AnimBP_C_BlueprintUpdateAnimation, DeltaTimeX) == 0x000000, "Member 'Cine_Futterman_AnimBP_C_BlueprintUpdateAnimation::DeltaTimeX' has a wrong offset!");

// Function Cine_Futterman_AnimBP.Cine_Futterman_AnimBP_C.AnimGraph
// 0x0010 (0x0010 - 0x0000)
struct Cine_Futterman_AnimBP_C_AnimGraph final
{
public:
	struct FPoseLink                              AnimGraph_0;                                       // 0x0000(0x0010)(Parm, OutParm, NoDestructor)
};
static_assert(alignof(Cine_Futterman_AnimBP_C_AnimGraph) == 0x000008, "Wrong alignment on Cine_Futterman_AnimBP_C_AnimGraph");
static_assert(sizeof(Cine_Futterman_AnimBP_C_AnimGraph) == 0x000010, "Wrong size on Cine_Futterman_AnimBP_C_AnimGraph");
static_assert(offsetof(Cine_Futterman_AnimBP_C_AnimGraph, AnimGraph_0) == 0x000000, "Member 'Cine_Futterman_AnimBP_C_AnimGraph::AnimGraph_0' has a wrong offset!");

}
