#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Face_Emote_AnimBP

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "AnimGraphRuntime_structs.hpp"
#include "OPP_structs.hpp"
#include "OPP_classes.hpp"


namespace SDK
{

// AnimBlueprintGeneratedClass Face_Emote_AnimBP.Face_Emote_AnimBP_C
// 0x0D70 (0x10F0 - 0x0380)
class UFace_Emote_AnimBP_C final : public URBFaceAnimInstancePlayer
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0380(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                         AnimGraphNode_Root;                                // 0x0388(0x0030)()
	struct FAnimNode_CopyPoseFromMesh             AnimGraphNode_CopyPoseFromMesh;                    // 0x03B8(0x01D8)(ContainsInstancedReference)
	struct FAnimNode_SaveCachedPose               AnimGraphNode_SaveCachedPose;                      // 0x0590(0x0158)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_4;                  // 0x06E8(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_3;                  // 0x0710(0x0028)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_6;                    // 0x0738(0x0080)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult_6;                       // 0x07B8(0x0030)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_5;                    // 0x07E8(0x0080)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult_5;                       // 0x0868(0x0030)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_4;                    // 0x0898(0x0080)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult_4;                       // 0x0918(0x0030)()
	struct FAnimNode_StateMachine                 AnimGraphNode_StateMachine_2;                      // 0x0948(0x00B0)()
	struct FAnimNode_LayeredBoneBlend             AnimGraphNode_LayeredBoneBlend;                    // 0x09F8(0x00C0)()
	struct FAnimNode_PoseBlendNode                AnimGraphNode_PoseBlendNode;                       // 0x0AB8(0x00A0)()
	struct FAnimNode_UseCachedPose                AnimGraphNode_UseCachedPose;                       // 0x0B58(0x0028)()
	struct FAnimNode_BlendListByInt               AnimGraphNode_BlendListByInt;                      // 0x0B80(0x00A8)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_2;                  // 0x0C28(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_1;                  // 0x0C50(0x0028)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_3;                    // 0x0C78(0x0080)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult_3;                       // 0x0CF8(0x0030)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_2;                    // 0x0D28(0x0080)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult_2;                       // 0x0DA8(0x0030)()
	struct FAnimNode_StateMachine                 AnimGraphNode_StateMachine_1;                      // 0x0DD8(0x00B0)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult;                    // 0x0E88(0x0028)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_1;                    // 0x0EB0(0x0080)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult_1;                       // 0x0F30(0x0030)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer;                      // 0x0F60(0x0080)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult;                         // 0x0FE0(0x0030)()
	struct FAnimNode_StateMachine                 AnimGraphNode_StateMachine;                        // 0x1010(0x00B0)()
	class UPoseAsset*                             PoseAsset;                                         // 0x10C0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	class UAnimSequence*                          IdleFaceAnim;                                      // 0x10C8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	int32                                         WhichAnimStyle;                                    // 0x10D0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Active;                                            // 0x10D4(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          bIsPreview;                                        // 0x10D5(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_10D6[0x2];                                     // 0x10D6(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class AMenuCharacter_C*                       MenuCharacter;                                     // 0x10D8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ECustomizationMenuCategory                    CurrentMenuCategory;                               // 0x10E0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_10E1[0x3];                                     // 0x10E1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         TerminalAnimOffset;                                // 0x10E4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         PodiumAnimDelay;                                   // 0x10E8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          PodiumDelayDone;                                   // 0x10EC(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void ExecuteUbergraph_Face_Emote_AnimBP(int32 EntryPoint);
	void Update_Emote(int32 AnimStyle, class URBEmoteCustomizationOption* EmoteCustomizationOption, bool bIsPreview_0, float TerminalAnimOffset_0, float PodiumAnimDelay_0);
	void BlueprintUpdateAnimation(float DeltaTimeX);
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Face_Emote_AnimBP_AnimGraphNode_TransitionResult_51DBBF7B4471316605ADD2B2E4E8FD81();
	void OnLoaded_44DF0A4E49029115DE354787555967A8(class UObject* Loaded);
	void AnimGraph(struct FPoseLink* AnimGraph_0);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Face_Emote_AnimBP_C">();
	}
	static class UFace_Emote_AnimBP_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFace_Emote_AnimBP_C>();
	}
};
static_assert(alignof(UFace_Emote_AnimBP_C) == 0x000010, "Wrong alignment on UFace_Emote_AnimBP_C");
static_assert(sizeof(UFace_Emote_AnimBP_C) == 0x0010F0, "Wrong size on UFace_Emote_AnimBP_C");
static_assert(offsetof(UFace_Emote_AnimBP_C, UberGraphFrame) == 0x000380, "Member 'UFace_Emote_AnimBP_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UFace_Emote_AnimBP_C, AnimGraphNode_Root) == 0x000388, "Member 'UFace_Emote_AnimBP_C::AnimGraphNode_Root' has a wrong offset!");
static_assert(offsetof(UFace_Emote_AnimBP_C, AnimGraphNode_CopyPoseFromMesh) == 0x0003B8, "Member 'UFace_Emote_AnimBP_C::AnimGraphNode_CopyPoseFromMesh' has a wrong offset!");
static_assert(offsetof(UFace_Emote_AnimBP_C, AnimGraphNode_SaveCachedPose) == 0x000590, "Member 'UFace_Emote_AnimBP_C::AnimGraphNode_SaveCachedPose' has a wrong offset!");
static_assert(offsetof(UFace_Emote_AnimBP_C, AnimGraphNode_TransitionResult_4) == 0x0006E8, "Member 'UFace_Emote_AnimBP_C::AnimGraphNode_TransitionResult_4' has a wrong offset!");
static_assert(offsetof(UFace_Emote_AnimBP_C, AnimGraphNode_TransitionResult_3) == 0x000710, "Member 'UFace_Emote_AnimBP_C::AnimGraphNode_TransitionResult_3' has a wrong offset!");
static_assert(offsetof(UFace_Emote_AnimBP_C, AnimGraphNode_SequencePlayer_6) == 0x000738, "Member 'UFace_Emote_AnimBP_C::AnimGraphNode_SequencePlayer_6' has a wrong offset!");
static_assert(offsetof(UFace_Emote_AnimBP_C, AnimGraphNode_StateResult_6) == 0x0007B8, "Member 'UFace_Emote_AnimBP_C::AnimGraphNode_StateResult_6' has a wrong offset!");
static_assert(offsetof(UFace_Emote_AnimBP_C, AnimGraphNode_SequencePlayer_5) == 0x0007E8, "Member 'UFace_Emote_AnimBP_C::AnimGraphNode_SequencePlayer_5' has a wrong offset!");
static_assert(offsetof(UFace_Emote_AnimBP_C, AnimGraphNode_StateResult_5) == 0x000868, "Member 'UFace_Emote_AnimBP_C::AnimGraphNode_StateResult_5' has a wrong offset!");
static_assert(offsetof(UFace_Emote_AnimBP_C, AnimGraphNode_SequencePlayer_4) == 0x000898, "Member 'UFace_Emote_AnimBP_C::AnimGraphNode_SequencePlayer_4' has a wrong offset!");
static_assert(offsetof(UFace_Emote_AnimBP_C, AnimGraphNode_StateResult_4) == 0x000918, "Member 'UFace_Emote_AnimBP_C::AnimGraphNode_StateResult_4' has a wrong offset!");
static_assert(offsetof(UFace_Emote_AnimBP_C, AnimGraphNode_StateMachine_2) == 0x000948, "Member 'UFace_Emote_AnimBP_C::AnimGraphNode_StateMachine_2' has a wrong offset!");
static_assert(offsetof(UFace_Emote_AnimBP_C, AnimGraphNode_LayeredBoneBlend) == 0x0009F8, "Member 'UFace_Emote_AnimBP_C::AnimGraphNode_LayeredBoneBlend' has a wrong offset!");
static_assert(offsetof(UFace_Emote_AnimBP_C, AnimGraphNode_PoseBlendNode) == 0x000AB8, "Member 'UFace_Emote_AnimBP_C::AnimGraphNode_PoseBlendNode' has a wrong offset!");
static_assert(offsetof(UFace_Emote_AnimBP_C, AnimGraphNode_UseCachedPose) == 0x000B58, "Member 'UFace_Emote_AnimBP_C::AnimGraphNode_UseCachedPose' has a wrong offset!");
static_assert(offsetof(UFace_Emote_AnimBP_C, AnimGraphNode_BlendListByInt) == 0x000B80, "Member 'UFace_Emote_AnimBP_C::AnimGraphNode_BlendListByInt' has a wrong offset!");
static_assert(offsetof(UFace_Emote_AnimBP_C, AnimGraphNode_TransitionResult_2) == 0x000C28, "Member 'UFace_Emote_AnimBP_C::AnimGraphNode_TransitionResult_2' has a wrong offset!");
static_assert(offsetof(UFace_Emote_AnimBP_C, AnimGraphNode_TransitionResult_1) == 0x000C50, "Member 'UFace_Emote_AnimBP_C::AnimGraphNode_TransitionResult_1' has a wrong offset!");
static_assert(offsetof(UFace_Emote_AnimBP_C, AnimGraphNode_SequencePlayer_3) == 0x000C78, "Member 'UFace_Emote_AnimBP_C::AnimGraphNode_SequencePlayer_3' has a wrong offset!");
static_assert(offsetof(UFace_Emote_AnimBP_C, AnimGraphNode_StateResult_3) == 0x000CF8, "Member 'UFace_Emote_AnimBP_C::AnimGraphNode_StateResult_3' has a wrong offset!");
static_assert(offsetof(UFace_Emote_AnimBP_C, AnimGraphNode_SequencePlayer_2) == 0x000D28, "Member 'UFace_Emote_AnimBP_C::AnimGraphNode_SequencePlayer_2' has a wrong offset!");
static_assert(offsetof(UFace_Emote_AnimBP_C, AnimGraphNode_StateResult_2) == 0x000DA8, "Member 'UFace_Emote_AnimBP_C::AnimGraphNode_StateResult_2' has a wrong offset!");
static_assert(offsetof(UFace_Emote_AnimBP_C, AnimGraphNode_StateMachine_1) == 0x000DD8, "Member 'UFace_Emote_AnimBP_C::AnimGraphNode_StateMachine_1' has a wrong offset!");
static_assert(offsetof(UFace_Emote_AnimBP_C, AnimGraphNode_TransitionResult) == 0x000E88, "Member 'UFace_Emote_AnimBP_C::AnimGraphNode_TransitionResult' has a wrong offset!");
static_assert(offsetof(UFace_Emote_AnimBP_C, AnimGraphNode_SequencePlayer_1) == 0x000EB0, "Member 'UFace_Emote_AnimBP_C::AnimGraphNode_SequencePlayer_1' has a wrong offset!");
static_assert(offsetof(UFace_Emote_AnimBP_C, AnimGraphNode_StateResult_1) == 0x000F30, "Member 'UFace_Emote_AnimBP_C::AnimGraphNode_StateResult_1' has a wrong offset!");
static_assert(offsetof(UFace_Emote_AnimBP_C, AnimGraphNode_SequencePlayer) == 0x000F60, "Member 'UFace_Emote_AnimBP_C::AnimGraphNode_SequencePlayer' has a wrong offset!");
static_assert(offsetof(UFace_Emote_AnimBP_C, AnimGraphNode_StateResult) == 0x000FE0, "Member 'UFace_Emote_AnimBP_C::AnimGraphNode_StateResult' has a wrong offset!");
static_assert(offsetof(UFace_Emote_AnimBP_C, AnimGraphNode_StateMachine) == 0x001010, "Member 'UFace_Emote_AnimBP_C::AnimGraphNode_StateMachine' has a wrong offset!");
static_assert(offsetof(UFace_Emote_AnimBP_C, PoseAsset) == 0x0010C0, "Member 'UFace_Emote_AnimBP_C::PoseAsset' has a wrong offset!");
static_assert(offsetof(UFace_Emote_AnimBP_C, IdleFaceAnim) == 0x0010C8, "Member 'UFace_Emote_AnimBP_C::IdleFaceAnim' has a wrong offset!");
static_assert(offsetof(UFace_Emote_AnimBP_C, WhichAnimStyle) == 0x0010D0, "Member 'UFace_Emote_AnimBP_C::WhichAnimStyle' has a wrong offset!");
static_assert(offsetof(UFace_Emote_AnimBP_C, Active) == 0x0010D4, "Member 'UFace_Emote_AnimBP_C::Active' has a wrong offset!");
static_assert(offsetof(UFace_Emote_AnimBP_C, bIsPreview) == 0x0010D5, "Member 'UFace_Emote_AnimBP_C::bIsPreview' has a wrong offset!");
static_assert(offsetof(UFace_Emote_AnimBP_C, MenuCharacter) == 0x0010D8, "Member 'UFace_Emote_AnimBP_C::MenuCharacter' has a wrong offset!");
static_assert(offsetof(UFace_Emote_AnimBP_C, CurrentMenuCategory) == 0x0010E0, "Member 'UFace_Emote_AnimBP_C::CurrentMenuCategory' has a wrong offset!");
static_assert(offsetof(UFace_Emote_AnimBP_C, TerminalAnimOffset) == 0x0010E4, "Member 'UFace_Emote_AnimBP_C::TerminalAnimOffset' has a wrong offset!");
static_assert(offsetof(UFace_Emote_AnimBP_C, PodiumAnimDelay) == 0x0010E8, "Member 'UFace_Emote_AnimBP_C::PodiumAnimDelay' has a wrong offset!");
static_assert(offsetof(UFace_Emote_AnimBP_C, PodiumDelayDone) == 0x0010EC, "Member 'UFace_Emote_AnimBP_C::PodiumDelayDone' has a wrong offset!");

}
