#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: RBNPC_Big_BP

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "OPP_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "NPCSkinData_structs.hpp"
#include "RBNPC_BP_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass RBNPC_Big_BP.RBNPC_Big_BP_C
// 0x01C0 (0x5C30 - 0x5A70)
class ARBNPC_Big_BP_C final : public ARBNPC_BP_C
{
public:
	uint8                                         Pad_5A61[0x7];                                     // 0x5A61(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPointerToUberGraphFrame               UberGraphFrame_RBNPC_Big_BP_C;                     // 0x5A68(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class USkeletalMeshComponent*                 Head_Mesh_EDITOR;                                  // 0x5A70(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                 FullBody_Mesh_EDITOR;                              // 0x5A78(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                 HairMesh;                                          // 0x5A80(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                 Head_Mesh;                                         // 0x5A88(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                 FullBody_Mesh;                                     // 0x5A90(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TMap<ENPCWeapon, struct FVector>              LargeWeaponScales;                                 // 0x5A98(0x0050)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FString                                 SelectedVoice;                                     // 0x5AE8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	TArray<struct FNPCSkinData>                   MaleSkins;                                         // 0x5AF8(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	class UPoseAsset*                             PoseAsset;                                         // 0x5B08(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class USkeletalMeshComponent*>         ExtraMeshes;                                       // 0x5B10(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	TArray<struct FNPCSkinData>                   FemaleSkins;                                       // 0x5B20(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<class FString>                         MaleVoices;                                        // 0x5B30(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<class FString>                         FemaleVoices;                                      // 0x5B40(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                          IsFemale;                                          // 0x5B50(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5B51[0x7];                                     // 0x5B51(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FNPCSkinData                           SelectedSkin;                                      // 0x5B58(0x00C0)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	int32                                         SelectedMeshIndex;                                 // 0x5C18(0x0004)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash)
	bool                                          DelayedApplyCustomization;                         // 0x5C1C(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5C1D[0x3];                                     // 0x5C1D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         SelectedVoiceIndex_Server;                         // 0x5C20(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_RBNPC_Big_BP(int32 EntryPoint);
	void OnRessourcesLoaded(class AActor* CustomizationOwner, int32 RequestID, EPawnCustomizationRequestType RequestType);
	void ApplySkinMeshes();
	void Event_OnWeaponVisible(ENPCWeapon WeaponType, class ARBNPCWeapon* WeaponActor);
	void RequestSkinRessources();
	void OnRep_RandomMesh();
	class UPoseAsset* GetFacePoseAsset();
	void GetRessourcesToLoad(TArray<struct FSoftObjectPath>* Ressources);
	void AddExtraBodyMesh(class USkeletalMesh* NewMesh);
	void CleanMeshes();
	void OnRep_CustomizationNetSeed();
	void UpdateVoiceType_Server();
	void RandomizeCustomization();
	void OnReceivedMeshIndex();
	void GetCustomizationIndexFromId(class FName ID, int32* Index_0);
	void ReceiveBeginPlay();
	void UserConstructionScript();
	void GetFaceAnimBP(class UEnemyFace_AnimBlueprint_C** EnemyFaceAnimBP);

	class USkeletalMeshComponent* GetFaceFXSkeletalMeshComponent() const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"RBNPC_Big_BP_C">();
	}
	static class ARBNPC_Big_BP_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ARBNPC_Big_BP_C>();
	}
};
static_assert(alignof(ARBNPC_Big_BP_C) == 0x000010, "Wrong alignment on ARBNPC_Big_BP_C");
static_assert(sizeof(ARBNPC_Big_BP_C) == 0x005C30, "Wrong size on ARBNPC_Big_BP_C");
static_assert(offsetof(ARBNPC_Big_BP_C, UberGraphFrame_RBNPC_Big_BP_C) == 0x005A68, "Member 'ARBNPC_Big_BP_C::UberGraphFrame_RBNPC_Big_BP_C' has a wrong offset!");
static_assert(offsetof(ARBNPC_Big_BP_C, Head_Mesh_EDITOR) == 0x005A70, "Member 'ARBNPC_Big_BP_C::Head_Mesh_EDITOR' has a wrong offset!");
static_assert(offsetof(ARBNPC_Big_BP_C, FullBody_Mesh_EDITOR) == 0x005A78, "Member 'ARBNPC_Big_BP_C::FullBody_Mesh_EDITOR' has a wrong offset!");
static_assert(offsetof(ARBNPC_Big_BP_C, HairMesh) == 0x005A80, "Member 'ARBNPC_Big_BP_C::HairMesh' has a wrong offset!");
static_assert(offsetof(ARBNPC_Big_BP_C, Head_Mesh) == 0x005A88, "Member 'ARBNPC_Big_BP_C::Head_Mesh' has a wrong offset!");
static_assert(offsetof(ARBNPC_Big_BP_C, FullBody_Mesh) == 0x005A90, "Member 'ARBNPC_Big_BP_C::FullBody_Mesh' has a wrong offset!");
static_assert(offsetof(ARBNPC_Big_BP_C, LargeWeaponScales) == 0x005A98, "Member 'ARBNPC_Big_BP_C::LargeWeaponScales' has a wrong offset!");
static_assert(offsetof(ARBNPC_Big_BP_C, SelectedVoice) == 0x005AE8, "Member 'ARBNPC_Big_BP_C::SelectedVoice' has a wrong offset!");
static_assert(offsetof(ARBNPC_Big_BP_C, MaleSkins) == 0x005AF8, "Member 'ARBNPC_Big_BP_C::MaleSkins' has a wrong offset!");
static_assert(offsetof(ARBNPC_Big_BP_C, PoseAsset) == 0x005B08, "Member 'ARBNPC_Big_BP_C::PoseAsset' has a wrong offset!");
static_assert(offsetof(ARBNPC_Big_BP_C, ExtraMeshes) == 0x005B10, "Member 'ARBNPC_Big_BP_C::ExtraMeshes' has a wrong offset!");
static_assert(offsetof(ARBNPC_Big_BP_C, FemaleSkins) == 0x005B20, "Member 'ARBNPC_Big_BP_C::FemaleSkins' has a wrong offset!");
static_assert(offsetof(ARBNPC_Big_BP_C, MaleVoices) == 0x005B30, "Member 'ARBNPC_Big_BP_C::MaleVoices' has a wrong offset!");
static_assert(offsetof(ARBNPC_Big_BP_C, FemaleVoices) == 0x005B40, "Member 'ARBNPC_Big_BP_C::FemaleVoices' has a wrong offset!");
static_assert(offsetof(ARBNPC_Big_BP_C, IsFemale) == 0x005B50, "Member 'ARBNPC_Big_BP_C::IsFemale' has a wrong offset!");
static_assert(offsetof(ARBNPC_Big_BP_C, SelectedSkin) == 0x005B58, "Member 'ARBNPC_Big_BP_C::SelectedSkin' has a wrong offset!");
static_assert(offsetof(ARBNPC_Big_BP_C, SelectedMeshIndex) == 0x005C18, "Member 'ARBNPC_Big_BP_C::SelectedMeshIndex' has a wrong offset!");
static_assert(offsetof(ARBNPC_Big_BP_C, DelayedApplyCustomization) == 0x005C1C, "Member 'ARBNPC_Big_BP_C::DelayedApplyCustomization' has a wrong offset!");
static_assert(offsetof(ARBNPC_Big_BP_C, SelectedVoiceIndex_Server) == 0x005C20, "Member 'ARBNPC_Big_BP_C::SelectedVoiceIndex_Server' has a wrong offset!");

}
