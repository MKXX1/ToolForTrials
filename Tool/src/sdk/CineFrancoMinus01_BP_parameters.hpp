#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: CineFrancoMinus01_BP

#include "Basic.hpp"


namespace SDK::Params
{

// Function CineFranco-01_BP.CineFranco-01_BP_C.ExecuteUbergraph_CineFranco-01_BP
// 0x0008 (0x0008 - 0x0000)
struct CineFrancoMinus01_BP_C_ExecuteUbergraph_CineFrancoMinus01_BP final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Multiply_FloatFloat_ReturnValue;          // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(CineFrancoMinus01_BP_C_ExecuteUbergraph_CineFrancoMinus01_BP) == 0x000004, "Wrong alignment on CineFrancoMinus01_BP_C_ExecuteUbergraph_CineFrancoMinus01_BP");
static_assert(sizeof(CineFrancoMinus01_BP_C_ExecuteUbergraph_CineFrancoMinus01_BP) == 0x000008, "Wrong size on CineFrancoMinus01_BP_C_ExecuteUbergraph_CineFrancoMinus01_BP");
static_assert(offsetof(CineFrancoMinus01_BP_C_ExecuteUbergraph_CineFrancoMinus01_BP, EntryPoint) == 0x000000, "Member 'CineFrancoMinus01_BP_C_ExecuteUbergraph_CineFrancoMinus01_BP::EntryPoint' has a wrong offset!");
static_assert(offsetof(CineFrancoMinus01_BP_C_ExecuteUbergraph_CineFrancoMinus01_BP, CallFunc_Multiply_FloatFloat_ReturnValue) == 0x000004, "Member 'CineFrancoMinus01_BP_C_ExecuteUbergraph_CineFrancoMinus01_BP::CallFunc_Multiply_FloatFloat_ReturnValue' has a wrong offset!");

// Function CineFranco-01_BP.CineFranco-01_BP_C.GetCineFaceAnimBP
// 0x0020 (0x0020 - 0x0000)
struct CineFrancoMinus01_BP_C_GetCineFaceAnimBP final
{
public:
	class UCineFace_AnimBP_C*                     CineFaceAnimBP;                                    // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimInstance*                          CallFunc_GetAnimInstance_ReturnValue;              // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCineFace_AnimBP_C*                     K2Node_DynamicCast_AsCine_Face_Anim_BP;            // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(CineFrancoMinus01_BP_C_GetCineFaceAnimBP) == 0x000008, "Wrong alignment on CineFrancoMinus01_BP_C_GetCineFaceAnimBP");
static_assert(sizeof(CineFrancoMinus01_BP_C_GetCineFaceAnimBP) == 0x000020, "Wrong size on CineFrancoMinus01_BP_C_GetCineFaceAnimBP");
static_assert(offsetof(CineFrancoMinus01_BP_C_GetCineFaceAnimBP, CineFaceAnimBP) == 0x000000, "Member 'CineFrancoMinus01_BP_C_GetCineFaceAnimBP::CineFaceAnimBP' has a wrong offset!");
static_assert(offsetof(CineFrancoMinus01_BP_C_GetCineFaceAnimBP, CallFunc_GetAnimInstance_ReturnValue) == 0x000008, "Member 'CineFrancoMinus01_BP_C_GetCineFaceAnimBP::CallFunc_GetAnimInstance_ReturnValue' has a wrong offset!");
static_assert(offsetof(CineFrancoMinus01_BP_C_GetCineFaceAnimBP, K2Node_DynamicCast_AsCine_Face_Anim_BP) == 0x000010, "Member 'CineFrancoMinus01_BP_C_GetCineFaceAnimBP::K2Node_DynamicCast_AsCine_Face_Anim_BP' has a wrong offset!");
static_assert(offsetof(CineFrancoMinus01_BP_C_GetCineFaceAnimBP, K2Node_DynamicCast_bSuccess) == 0x000018, "Member 'CineFrancoMinus01_BP_C_GetCineFaceAnimBP::K2Node_DynamicCast_bSuccess' has a wrong offset!");

// Function CineFranco-01_BP.CineFranco-01_BP_C.GetPoseAsset
// 0x0008 (0x0008 - 0x0000)
struct CineFrancoMinus01_BP_C_GetPoseAsset final
{
public:
	class UPoseAsset*                             PoseAsset;                                         // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(CineFrancoMinus01_BP_C_GetPoseAsset) == 0x000008, "Wrong alignment on CineFrancoMinus01_BP_C_GetPoseAsset");
static_assert(sizeof(CineFrancoMinus01_BP_C_GetPoseAsset) == 0x000008, "Wrong size on CineFrancoMinus01_BP_C_GetPoseAsset");
static_assert(offsetof(CineFrancoMinus01_BP_C_GetPoseAsset, PoseAsset) == 0x000000, "Member 'CineFrancoMinus01_BP_C_GetPoseAsset::PoseAsset' has a wrong offset!");

}
