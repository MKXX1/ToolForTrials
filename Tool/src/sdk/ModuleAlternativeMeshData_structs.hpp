#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ModuleAlternativeMeshData

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"


namespace SDK
{

// UserDefinedStruct ModuleAlternativeMeshData.ModuleAlternativeMeshData
// 0x0018 (0x0018 - 0x0000)
struct FModuleAlternativeMeshData final
{
public:
	class UStaticMesh*                            Mesh_6_6DA698EE4D7D9FAA5C983C9AD3EA5F30;           // 0x0000(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Recurence_16_F259B0FB42FC3100A87A15A0144A11FC;     // 0x0008(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              Offset_19_B6E6BDFB49F8212DAF0F85860AEDEBF4;        // 0x000C(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(FModuleAlternativeMeshData) == 0x000008, "Wrong alignment on FModuleAlternativeMeshData");
static_assert(sizeof(FModuleAlternativeMeshData) == 0x000018, "Wrong size on FModuleAlternativeMeshData");
static_assert(offsetof(FModuleAlternativeMeshData, Mesh_6_6DA698EE4D7D9FAA5C983C9AD3EA5F30) == 0x000000, "Member 'FModuleAlternativeMeshData::Mesh_6_6DA698EE4D7D9FAA5C983C9AD3EA5F30' has a wrong offset!");
static_assert(offsetof(FModuleAlternativeMeshData, Recurence_16_F259B0FB42FC3100A87A15A0144A11FC) == 0x000008, "Member 'FModuleAlternativeMeshData::Recurence_16_F259B0FB42FC3100A87A15A0144A11FC' has a wrong offset!");
static_assert(offsetof(FModuleAlternativeMeshData, Offset_19_B6E6BDFB49F8212DAF0F85860AEDEBF4) == 0x00000C, "Member 'FModuleAlternativeMeshData::Offset_19_B6E6BDFB49F8212DAF0F85860AEDEBF4' has a wrong offset!");

}
