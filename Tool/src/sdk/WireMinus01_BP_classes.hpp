#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WireMinus01_BP

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "SplineMeshBase_BP_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass Wire-01_BP.Wire-01_BP_C
// 0x0040 (0x0458 - 0x0418)
class AWireMinus01_BP_C final : public ASplineMeshBase_BP_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_WireMinus01_BP_C;                   // 0x0418(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UPointLightComponent*                   PointLight;                                        // 0x0420(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	bool                                          UseSparks;                                         // 0x0428(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          SpawnSparksAtEnd;                                  // 0x0429(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_42A[0x2];                                      // 0x042A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         SparkAtPoint;                                      // 0x042C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                SparkLocation;                                     // 0x0430(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          OnStartSparks;                                     // 0x043C(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          UseLight;                                          // 0x043D(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_43E[0x2];                                      // 0x043E(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         Spark_Light_Intensity;                             // 0x0440(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           Spark_Light_Color;                                 // 0x0444(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_WireMinus01_BP(int32 EntryPoint);
	void ReceiveBeginPlay();
	void UserConstructionScript();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Wire-01_BP_C">();
	}
	static class AWireMinus01_BP_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AWireMinus01_BP_C>();
	}
};
static_assert(alignof(AWireMinus01_BP_C) == 0x000008, "Wrong alignment on AWireMinus01_BP_C");
static_assert(sizeof(AWireMinus01_BP_C) == 0x000458, "Wrong size on AWireMinus01_BP_C");
static_assert(offsetof(AWireMinus01_BP_C, UberGraphFrame_WireMinus01_BP_C) == 0x000418, "Member 'AWireMinus01_BP_C::UberGraphFrame_WireMinus01_BP_C' has a wrong offset!");
static_assert(offsetof(AWireMinus01_BP_C, PointLight) == 0x000420, "Member 'AWireMinus01_BP_C::PointLight' has a wrong offset!");
static_assert(offsetof(AWireMinus01_BP_C, UseSparks) == 0x000428, "Member 'AWireMinus01_BP_C::UseSparks' has a wrong offset!");
static_assert(offsetof(AWireMinus01_BP_C, SpawnSparksAtEnd) == 0x000429, "Member 'AWireMinus01_BP_C::SpawnSparksAtEnd' has a wrong offset!");
static_assert(offsetof(AWireMinus01_BP_C, SparkAtPoint) == 0x00042C, "Member 'AWireMinus01_BP_C::SparkAtPoint' has a wrong offset!");
static_assert(offsetof(AWireMinus01_BP_C, SparkLocation) == 0x000430, "Member 'AWireMinus01_BP_C::SparkLocation' has a wrong offset!");
static_assert(offsetof(AWireMinus01_BP_C, OnStartSparks) == 0x00043C, "Member 'AWireMinus01_BP_C::OnStartSparks' has a wrong offset!");
static_assert(offsetof(AWireMinus01_BP_C, UseLight) == 0x00043D, "Member 'AWireMinus01_BP_C::UseLight' has a wrong offset!");
static_assert(offsetof(AWireMinus01_BP_C, Spark_Light_Intensity) == 0x000440, "Member 'AWireMinus01_BP_C::Spark_Light_Intensity' has a wrong offset!");
static_assert(offsetof(AWireMinus01_BP_C, Spark_Light_Color) == 0x000444, "Member 'AWireMinus01_BP_C::Spark_Light_Color' has a wrong offset!");

}
