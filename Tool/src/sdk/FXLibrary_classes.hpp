#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: FXLibrary

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass FXLibrary.FXLibrary_C
// 0x0000 (0x0028 - 0x0028)
class UFXLibrary_C final : public UBlueprintFunctionLibrary
{
public:
	static void GetPPFXManager(class UObject* __WorldContext, class APPManager_BP_C** Manager);
	static void RefreshScapegoatLights(float ProgressRatio, int32 CurrentLevel, bool bProgressLocked, TArray<class UStaticMeshComponent*>& Meshes, TArray<class ULightComponent*>& Lights, class UObject* __WorldContext);
	static void Get_Scapegoat_Bulb_Flash_Ratio(float Value, bool ProgressLock, class UObject* __WorldContext, float* OutFlashRatio);
	static void TrySpawnBloodSplatterDecal(bool TraceForSurface, const struct FVector& OriginLocation, const struct FVector& Direction, class UMaterialInstanceConstant* Decal, float DecalSize, float RandomOffset, class UObject* __WorldContext, bool* bSpawned, struct FVector* DecalLocation, struct FVector* DecalNormal);
	static void GetScapegoatLockedBulbData(float FlashRatio, class UObject* __WorldContext, struct FLinearColor* MeshMaterialData, struct FLinearColor* LightColor, float* Intensity);

	static void GetScapegoatBulbData(float FlashRatio, class UObject* __WorldContext, struct FLinearColor* MeshMaterialColor, struct FLinearColor* LightColor, float* LightIntensity);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"FXLibrary_C">();
	}
	static class UFXLibrary_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFXLibrary_C>();
	}
};
static_assert(alignof(UFXLibrary_C) == 0x000008, "Wrong alignment on UFXLibrary_C");
static_assert(sizeof(UFXLibrary_C) == 0x000028, "Wrong size on UFXLibrary_C");

}
