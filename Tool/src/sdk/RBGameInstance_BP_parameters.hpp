#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: RBGameInstance_BP

#include "Basic.hpp"


namespace SDK::Params
{

// Function RBGameInstance_BP.RBGameInstance_BP_C.ExecuteUbergraph_RBGameInstance_BP
// 0x0028 (0x0028 - 0x0000)
struct RBGameInstance_BP_C_ExecuteUbergraph_RBGameInstance_BP final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 K2Node_CustomEvent_Map;                            // 0x0008(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue;                // 0x0018(0x0010)(ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(RBGameInstance_BP_C_ExecuteUbergraph_RBGameInstance_BP) == 0x000008, "Wrong alignment on RBGameInstance_BP_C_ExecuteUbergraph_RBGameInstance_BP");
static_assert(sizeof(RBGameInstance_BP_C_ExecuteUbergraph_RBGameInstance_BP) == 0x000028, "Wrong size on RBGameInstance_BP_C_ExecuteUbergraph_RBGameInstance_BP");
static_assert(offsetof(RBGameInstance_BP_C_ExecuteUbergraph_RBGameInstance_BP, EntryPoint) == 0x000000, "Member 'RBGameInstance_BP_C_ExecuteUbergraph_RBGameInstance_BP::EntryPoint' has a wrong offset!");
static_assert(offsetof(RBGameInstance_BP_C_ExecuteUbergraph_RBGameInstance_BP, K2Node_CustomEvent_Map) == 0x000008, "Member 'RBGameInstance_BP_C_ExecuteUbergraph_RBGameInstance_BP::K2Node_CustomEvent_Map' has a wrong offset!");
static_assert(offsetof(RBGameInstance_BP_C_ExecuteUbergraph_RBGameInstance_BP, CallFunc_Concat_StrStr_ReturnValue) == 0x000018, "Member 'RBGameInstance_BP_C_ExecuteUbergraph_RBGameInstance_BP::CallFunc_Concat_StrStr_ReturnValue' has a wrong offset!");

// Function RBGameInstance_BP.RBGameInstance_BP_C.TravelToMap
// 0x0010 (0x0010 - 0x0000)
struct RBGameInstance_BP_C_TravelToMap final
{
public:
	class FString                                 Map;                                               // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(RBGameInstance_BP_C_TravelToMap) == 0x000008, "Wrong alignment on RBGameInstance_BP_C_TravelToMap");
static_assert(sizeof(RBGameInstance_BP_C_TravelToMap) == 0x000010, "Wrong size on RBGameInstance_BP_C_TravelToMap");
static_assert(offsetof(RBGameInstance_BP_C_TravelToMap, Map) == 0x000000, "Member 'RBGameInstance_BP_C_TravelToMap::Map' has a wrong offset!");

}
