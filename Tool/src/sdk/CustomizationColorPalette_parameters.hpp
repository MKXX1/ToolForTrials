#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: CustomizationColorPalette

#include "Basic.hpp"

#include "OPP_structs.hpp"
#include "SlateCore_structs.hpp"


namespace SDK::Params
{

// Function CustomizationColorPalette.CustomizationColorPalette_C.OnHairColorClicked__DelegateSignature
// 0x0028 (0x0028 - 0x0000)
struct CustomizationColorPalette_C_OnHairColorClicked__DelegateSignature final
{
public:
	struct FRBHairColorOption                     NewHairColor;                                      // 0x0000(0x0028)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
};
static_assert(alignof(CustomizationColorPalette_C_OnHairColorClicked__DelegateSignature) == 0x000004, "Wrong alignment on CustomizationColorPalette_C_OnHairColorClicked__DelegateSignature");
static_assert(sizeof(CustomizationColorPalette_C_OnHairColorClicked__DelegateSignature) == 0x000028, "Wrong size on CustomizationColorPalette_C_OnHairColorClicked__DelegateSignature");
static_assert(offsetof(CustomizationColorPalette_C_OnHairColorClicked__DelegateSignature, NewHairColor) == 0x000000, "Member 'CustomizationColorPalette_C_OnHairColorClicked__DelegateSignature::NewHairColor' has a wrong offset!");

// Function CustomizationColorPalette.CustomizationColorPalette_C.OnHairColorHovered__DelegateSignature
// 0x0028 (0x0028 - 0x0000)
struct CustomizationColorPalette_C_OnHairColorHovered__DelegateSignature final
{
public:
	struct FRBHairColorOption                     HoveredHairColor;                                  // 0x0000(0x0028)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
};
static_assert(alignof(CustomizationColorPalette_C_OnHairColorHovered__DelegateSignature) == 0x000004, "Wrong alignment on CustomizationColorPalette_C_OnHairColorHovered__DelegateSignature");
static_assert(sizeof(CustomizationColorPalette_C_OnHairColorHovered__DelegateSignature) == 0x000028, "Wrong size on CustomizationColorPalette_C_OnHairColorHovered__DelegateSignature");
static_assert(offsetof(CustomizationColorPalette_C_OnHairColorHovered__DelegateSignature, HoveredHairColor) == 0x000000, "Member 'CustomizationColorPalette_C_OnHairColorHovered__DelegateSignature::HoveredHairColor' has a wrong offset!");

// Function CustomizationColorPalette.CustomizationColorPalette_C.ExecuteUbergraph_CustomizationColorPalette
// 0x0048 (0x0048 - 0x0000)
struct CustomizationColorPalette_C_ExecuteUbergraph_CustomizationColorPalette final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFocusEvent                            K2Node_Event_InFocusEvent;                         // 0x0004(0x0008)(NoDestructor)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x000C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_D[0x3];                                        // 0x000D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UColorPastille_C*                       K2Node_CustomEvent_ClickedPastille;                // 0x0010(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRBHairColorOption                     K2Node_CustomEvent_HoveredColor;                   // 0x0018(0x0028)(NoDestructor)
	struct FFocusEvent                            K2Node_Event_InFocusEvent_1;                       // 0x0040(0x0008)(NoDestructor)
};
static_assert(alignof(CustomizationColorPalette_C_ExecuteUbergraph_CustomizationColorPalette) == 0x000008, "Wrong alignment on CustomizationColorPalette_C_ExecuteUbergraph_CustomizationColorPalette");
static_assert(sizeof(CustomizationColorPalette_C_ExecuteUbergraph_CustomizationColorPalette) == 0x000048, "Wrong size on CustomizationColorPalette_C_ExecuteUbergraph_CustomizationColorPalette");
static_assert(offsetof(CustomizationColorPalette_C_ExecuteUbergraph_CustomizationColorPalette, EntryPoint) == 0x000000, "Member 'CustomizationColorPalette_C_ExecuteUbergraph_CustomizationColorPalette::EntryPoint' has a wrong offset!");
static_assert(offsetof(CustomizationColorPalette_C_ExecuteUbergraph_CustomizationColorPalette, K2Node_Event_InFocusEvent) == 0x000004, "Member 'CustomizationColorPalette_C_ExecuteUbergraph_CustomizationColorPalette::K2Node_Event_InFocusEvent' has a wrong offset!");
static_assert(offsetof(CustomizationColorPalette_C_ExecuteUbergraph_CustomizationColorPalette, K2Node_Event_IsDesignTime) == 0x00000C, "Member 'CustomizationColorPalette_C_ExecuteUbergraph_CustomizationColorPalette::K2Node_Event_IsDesignTime' has a wrong offset!");
static_assert(offsetof(CustomizationColorPalette_C_ExecuteUbergraph_CustomizationColorPalette, K2Node_CustomEvent_ClickedPastille) == 0x000010, "Member 'CustomizationColorPalette_C_ExecuteUbergraph_CustomizationColorPalette::K2Node_CustomEvent_ClickedPastille' has a wrong offset!");
static_assert(offsetof(CustomizationColorPalette_C_ExecuteUbergraph_CustomizationColorPalette, K2Node_CustomEvent_HoveredColor) == 0x000018, "Member 'CustomizationColorPalette_C_ExecuteUbergraph_CustomizationColorPalette::K2Node_CustomEvent_HoveredColor' has a wrong offset!");
static_assert(offsetof(CustomizationColorPalette_C_ExecuteUbergraph_CustomizationColorPalette, K2Node_Event_InFocusEvent_1) == 0x000040, "Member 'CustomizationColorPalette_C_ExecuteUbergraph_CustomizationColorPalette::K2Node_Event_InFocusEvent_1' has a wrong offset!");

// Function CustomizationColorPalette.CustomizationColorPalette_C.OnRemovedFromFocusPath
// 0x0008 (0x0008 - 0x0000)
struct CustomizationColorPalette_C_OnRemovedFromFocusPath final
{
public:
	struct FFocusEvent                            InFocusEvent;                                      // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
};
static_assert(alignof(CustomizationColorPalette_C_OnRemovedFromFocusPath) == 0x000004, "Wrong alignment on CustomizationColorPalette_C_OnRemovedFromFocusPath");
static_assert(sizeof(CustomizationColorPalette_C_OnRemovedFromFocusPath) == 0x000008, "Wrong size on CustomizationColorPalette_C_OnRemovedFromFocusPath");
static_assert(offsetof(CustomizationColorPalette_C_OnRemovedFromFocusPath, InFocusEvent) == 0x000000, "Member 'CustomizationColorPalette_C_OnRemovedFromFocusPath::InFocusEvent' has a wrong offset!");

// Function CustomizationColorPalette.CustomizationColorPalette_C.OnAddedToFocusPath
// 0x0008 (0x0008 - 0x0000)
struct CustomizationColorPalette_C_OnAddedToFocusPath final
{
public:
	struct FFocusEvent                            InFocusEvent;                                      // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
};
static_assert(alignof(CustomizationColorPalette_C_OnAddedToFocusPath) == 0x000004, "Wrong alignment on CustomizationColorPalette_C_OnAddedToFocusPath");
static_assert(sizeof(CustomizationColorPalette_C_OnAddedToFocusPath) == 0x000008, "Wrong size on CustomizationColorPalette_C_OnAddedToFocusPath");
static_assert(offsetof(CustomizationColorPalette_C_OnAddedToFocusPath, InFocusEvent) == 0x000000, "Member 'CustomizationColorPalette_C_OnAddedToFocusPath::InFocusEvent' has a wrong offset!");

// Function CustomizationColorPalette.CustomizationColorPalette_C.OnPastilleHovered
// 0x0028 (0x0028 - 0x0000)
struct CustomizationColorPalette_C_OnPastilleHovered final
{
public:
	struct FRBHairColorOption                     HoveredColor;                                      // 0x0000(0x0028)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
};
static_assert(alignof(CustomizationColorPalette_C_OnPastilleHovered) == 0x000004, "Wrong alignment on CustomizationColorPalette_C_OnPastilleHovered");
static_assert(sizeof(CustomizationColorPalette_C_OnPastilleHovered) == 0x000028, "Wrong size on CustomizationColorPalette_C_OnPastilleHovered");
static_assert(offsetof(CustomizationColorPalette_C_OnPastilleHovered, HoveredColor) == 0x000000, "Member 'CustomizationColorPalette_C_OnPastilleHovered::HoveredColor' has a wrong offset!");

// Function CustomizationColorPalette.CustomizationColorPalette_C.OnPastilleClicked
// 0x0008 (0x0008 - 0x0000)
struct CustomizationColorPalette_C_OnPastilleClicked final
{
public:
	class UColorPastille_C*                       ClickedPastille;                                   // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(CustomizationColorPalette_C_OnPastilleClicked) == 0x000008, "Wrong alignment on CustomizationColorPalette_C_OnPastilleClicked");
static_assert(sizeof(CustomizationColorPalette_C_OnPastilleClicked) == 0x000008, "Wrong size on CustomizationColorPalette_C_OnPastilleClicked");
static_assert(offsetof(CustomizationColorPalette_C_OnPastilleClicked, ClickedPastille) == 0x000000, "Member 'CustomizationColorPalette_C_OnPastilleClicked::ClickedPastille' has a wrong offset!");

// Function CustomizationColorPalette.CustomizationColorPalette_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct CustomizationColorPalette_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(CustomizationColorPalette_C_PreConstruct) == 0x000001, "Wrong alignment on CustomizationColorPalette_C_PreConstruct");
static_assert(sizeof(CustomizationColorPalette_C_PreConstruct) == 0x000001, "Wrong size on CustomizationColorPalette_C_PreConstruct");
static_assert(offsetof(CustomizationColorPalette_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'CustomizationColorPalette_C_PreConstruct::IsDesignTime' has a wrong offset!");

// Function CustomizationColorPalette.CustomizationColorPalette_C.RefreshColorList
// 0x0088 (0x0088 - 0x0000)
struct CustomizationColorPalette_C_RefreshColorList final
{
public:
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0000(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x000C(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void(const struct FRBHairColorOption& HoveredColor)> K2Node_CreateDelegate_OutputDelegate_1;            // 0x001C(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void(class UColorPastille_C* ClickedPastille)> K2Node_CreateDelegate_OutputDelegate_2;            // 0x002C(0x0010)(ZeroConstructor, NoDestructor)
	uint8                                         Pad_3C[0x4];                                       // 0x003C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class URBPlayerCustomizationConfig*           CallFunc_GetPlayerCustomizationConfig_ReturnValue; // 0x0040(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UColorPastille_C*                       CallFunc_Create_ReturnValue;                       // 0x0048(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRBHairColorOption                     CallFunc_Array_Get_Item;                           // 0x0050(0x0028)(NoDestructor)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0078(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x007C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7D[0x3];                                       // 0x007D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UUniformGridSlot*                       CallFunc_AddChildToUniformGrid_ReturnValue;        // 0x0080(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(CustomizationColorPalette_C_RefreshColorList) == 0x000008, "Wrong alignment on CustomizationColorPalette_C_RefreshColorList");
static_assert(sizeof(CustomizationColorPalette_C_RefreshColorList) == 0x000088, "Wrong size on CustomizationColorPalette_C_RefreshColorList");
static_assert(offsetof(CustomizationColorPalette_C_RefreshColorList, Temp_int_Array_Index_Variable) == 0x000000, "Member 'CustomizationColorPalette_C_RefreshColorList::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(CustomizationColorPalette_C_RefreshColorList, Temp_int_Loop_Counter_Variable) == 0x000004, "Member 'CustomizationColorPalette_C_RefreshColorList::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(CustomizationColorPalette_C_RefreshColorList, CallFunc_Add_IntInt_ReturnValue) == 0x000008, "Member 'CustomizationColorPalette_C_RefreshColorList::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(CustomizationColorPalette_C_RefreshColorList, K2Node_CreateDelegate_OutputDelegate) == 0x00000C, "Member 'CustomizationColorPalette_C_RefreshColorList::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(CustomizationColorPalette_C_RefreshColorList, K2Node_CreateDelegate_OutputDelegate_1) == 0x00001C, "Member 'CustomizationColorPalette_C_RefreshColorList::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(CustomizationColorPalette_C_RefreshColorList, K2Node_CreateDelegate_OutputDelegate_2) == 0x00002C, "Member 'CustomizationColorPalette_C_RefreshColorList::K2Node_CreateDelegate_OutputDelegate_2' has a wrong offset!");
static_assert(offsetof(CustomizationColorPalette_C_RefreshColorList, CallFunc_GetPlayerCustomizationConfig_ReturnValue) == 0x000040, "Member 'CustomizationColorPalette_C_RefreshColorList::CallFunc_GetPlayerCustomizationConfig_ReturnValue' has a wrong offset!");
static_assert(offsetof(CustomizationColorPalette_C_RefreshColorList, CallFunc_Create_ReturnValue) == 0x000048, "Member 'CustomizationColorPalette_C_RefreshColorList::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(CustomizationColorPalette_C_RefreshColorList, CallFunc_Array_Get_Item) == 0x000050, "Member 'CustomizationColorPalette_C_RefreshColorList::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(CustomizationColorPalette_C_RefreshColorList, CallFunc_Array_Length_ReturnValue) == 0x000078, "Member 'CustomizationColorPalette_C_RefreshColorList::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(CustomizationColorPalette_C_RefreshColorList, CallFunc_Less_IntInt_ReturnValue) == 0x00007C, "Member 'CustomizationColorPalette_C_RefreshColorList::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(CustomizationColorPalette_C_RefreshColorList, CallFunc_AddChildToUniformGrid_ReturnValue) == 0x000080, "Member 'CustomizationColorPalette_C_RefreshColorList::CallFunc_AddChildToUniformGrid_ReturnValue' has a wrong offset!");

// Function CustomizationColorPalette.CustomizationColorPalette_C.UpdateSelectedPastille
// 0x0010 (0x0010 - 0x0000)
struct CustomizationColorPalette_C_UpdateSelectedPastille final
{
public:
	class UColorPastille_C*                       NewSelectedPastille;                               // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(CustomizationColorPalette_C_UpdateSelectedPastille) == 0x000008, "Wrong alignment on CustomizationColorPalette_C_UpdateSelectedPastille");
static_assert(sizeof(CustomizationColorPalette_C_UpdateSelectedPastille) == 0x000010, "Wrong size on CustomizationColorPalette_C_UpdateSelectedPastille");
static_assert(offsetof(CustomizationColorPalette_C_UpdateSelectedPastille, NewSelectedPastille) == 0x000000, "Member 'CustomizationColorPalette_C_UpdateSelectedPastille::NewSelectedPastille' has a wrong offset!");
static_assert(offsetof(CustomizationColorPalette_C_UpdateSelectedPastille, CallFunc_IsValid_ReturnValue) == 0x000008, "Member 'CustomizationColorPalette_C_UpdateSelectedPastille::CallFunc_IsValid_ReturnValue' has a wrong offset!");

// Function CustomizationColorPalette.CustomizationColorPalette_C.Init
// 0x0090 (0x0090 - 0x0000)
struct CustomizationColorPalette_C_Init final
{
public:
	class FName                                   InitialHairColorId;                                // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWidget*                                CallFunc_GetChildAt_ReturnValue;                   // 0x0008(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class URBPlayerCustomizationConfig*           CallFunc_GetPlayerCustomizationConfig_ReturnValue; // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UColorPastille_C*                       K2Node_DynamicCast_AsColor_Pastille;               // 0x0018(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_21[0x3];                                       // 0x0021(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FRBHairColorOption                     CallFunc_Array_Get_Item;                           // 0x0024(0x0028)(NoDestructor)
	uint8                                         Pad_4C[0x4];                                       // 0x004C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class URBPlayerCustomizationConfig*           CallFunc_GetPlayerCustomizationConfig_ReturnValue_1; // 0x0050(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRBHairColorOption                     CallFunc_GetHairColorOption_ReturnValue;           // 0x0058(0x0028)(NoDestructor)
	bool                                          CallFunc_EqualEqual_NameName_ReturnValue;          // 0x0080(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_81[0x7];                                       // 0x0081(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UColorPastille_C*                       CallFunc_GetPastilleFromColor_ColorPastille;       // 0x0088(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(CustomizationColorPalette_C_Init) == 0x000008, "Wrong alignment on CustomizationColorPalette_C_Init");
static_assert(sizeof(CustomizationColorPalette_C_Init) == 0x000090, "Wrong size on CustomizationColorPalette_C_Init");
static_assert(offsetof(CustomizationColorPalette_C_Init, InitialHairColorId) == 0x000000, "Member 'CustomizationColorPalette_C_Init::InitialHairColorId' has a wrong offset!");
static_assert(offsetof(CustomizationColorPalette_C_Init, CallFunc_GetChildAt_ReturnValue) == 0x000008, "Member 'CustomizationColorPalette_C_Init::CallFunc_GetChildAt_ReturnValue' has a wrong offset!");
static_assert(offsetof(CustomizationColorPalette_C_Init, CallFunc_GetPlayerCustomizationConfig_ReturnValue) == 0x000010, "Member 'CustomizationColorPalette_C_Init::CallFunc_GetPlayerCustomizationConfig_ReturnValue' has a wrong offset!");
static_assert(offsetof(CustomizationColorPalette_C_Init, K2Node_DynamicCast_AsColor_Pastille) == 0x000018, "Member 'CustomizationColorPalette_C_Init::K2Node_DynamicCast_AsColor_Pastille' has a wrong offset!");
static_assert(offsetof(CustomizationColorPalette_C_Init, K2Node_DynamicCast_bSuccess) == 0x000020, "Member 'CustomizationColorPalette_C_Init::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(CustomizationColorPalette_C_Init, CallFunc_Array_Get_Item) == 0x000024, "Member 'CustomizationColorPalette_C_Init::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(CustomizationColorPalette_C_Init, CallFunc_GetPlayerCustomizationConfig_ReturnValue_1) == 0x000050, "Member 'CustomizationColorPalette_C_Init::CallFunc_GetPlayerCustomizationConfig_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CustomizationColorPalette_C_Init, CallFunc_GetHairColorOption_ReturnValue) == 0x000058, "Member 'CustomizationColorPalette_C_Init::CallFunc_GetHairColorOption_ReturnValue' has a wrong offset!");
static_assert(offsetof(CustomizationColorPalette_C_Init, CallFunc_EqualEqual_NameName_ReturnValue) == 0x000080, "Member 'CustomizationColorPalette_C_Init::CallFunc_EqualEqual_NameName_ReturnValue' has a wrong offset!");
static_assert(offsetof(CustomizationColorPalette_C_Init, CallFunc_GetPastilleFromColor_ColorPastille) == 0x000088, "Member 'CustomizationColorPalette_C_Init::CallFunc_GetPastilleFromColor_ColorPastille' has a wrong offset!");

// Function CustomizationColorPalette.CustomizationColorPalette_C.GetPastilleFromColor
// 0x0070 (0x0070 - 0x0000)
struct CustomizationColorPalette_C_GetPastilleFromColor final
{
public:
	struct FRBHairColorOption                     HairColor;                                         // 0x0000(0x0028)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	class UColorPastille_C*                       ColorPastille;                                     // 0x0028(0x0008)(Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0034(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0038(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3C[0x4];                                       // 0x003C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UWidget*>                        CallFunc_GetAllChildren_ReturnValue;               // 0x0040(0x0010)(ReferenceParm, ContainsInstancedReference)
	class UWidget*                                CallFunc_Array_Get_Item;                           // 0x0050(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UColorPastille_C*                       K2Node_DynamicCast_AsColor_Pastille;               // 0x0058(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0060(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_61[0x3];                                       // 0x0061(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0064(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0068(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_NameName_ReturnValue;          // 0x0069(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(CustomizationColorPalette_C_GetPastilleFromColor) == 0x000008, "Wrong alignment on CustomizationColorPalette_C_GetPastilleFromColor");
static_assert(sizeof(CustomizationColorPalette_C_GetPastilleFromColor) == 0x000070, "Wrong size on CustomizationColorPalette_C_GetPastilleFromColor");
static_assert(offsetof(CustomizationColorPalette_C_GetPastilleFromColor, HairColor) == 0x000000, "Member 'CustomizationColorPalette_C_GetPastilleFromColor::HairColor' has a wrong offset!");
static_assert(offsetof(CustomizationColorPalette_C_GetPastilleFromColor, ColorPastille) == 0x000028, "Member 'CustomizationColorPalette_C_GetPastilleFromColor::ColorPastille' has a wrong offset!");
static_assert(offsetof(CustomizationColorPalette_C_GetPastilleFromColor, Temp_int_Array_Index_Variable) == 0x000030, "Member 'CustomizationColorPalette_C_GetPastilleFromColor::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(CustomizationColorPalette_C_GetPastilleFromColor, Temp_int_Loop_Counter_Variable) == 0x000034, "Member 'CustomizationColorPalette_C_GetPastilleFromColor::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(CustomizationColorPalette_C_GetPastilleFromColor, CallFunc_Add_IntInt_ReturnValue) == 0x000038, "Member 'CustomizationColorPalette_C_GetPastilleFromColor::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(CustomizationColorPalette_C_GetPastilleFromColor, CallFunc_GetAllChildren_ReturnValue) == 0x000040, "Member 'CustomizationColorPalette_C_GetPastilleFromColor::CallFunc_GetAllChildren_ReturnValue' has a wrong offset!");
static_assert(offsetof(CustomizationColorPalette_C_GetPastilleFromColor, CallFunc_Array_Get_Item) == 0x000050, "Member 'CustomizationColorPalette_C_GetPastilleFromColor::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(CustomizationColorPalette_C_GetPastilleFromColor, K2Node_DynamicCast_AsColor_Pastille) == 0x000058, "Member 'CustomizationColorPalette_C_GetPastilleFromColor::K2Node_DynamicCast_AsColor_Pastille' has a wrong offset!");
static_assert(offsetof(CustomizationColorPalette_C_GetPastilleFromColor, K2Node_DynamicCast_bSuccess) == 0x000060, "Member 'CustomizationColorPalette_C_GetPastilleFromColor::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(CustomizationColorPalette_C_GetPastilleFromColor, CallFunc_Array_Length_ReturnValue) == 0x000064, "Member 'CustomizationColorPalette_C_GetPastilleFromColor::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(CustomizationColorPalette_C_GetPastilleFromColor, CallFunc_Less_IntInt_ReturnValue) == 0x000068, "Member 'CustomizationColorPalette_C_GetPastilleFromColor::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(CustomizationColorPalette_C_GetPastilleFromColor, CallFunc_EqualEqual_NameName_ReturnValue) == 0x000069, "Member 'CustomizationColorPalette_C_GetPastilleFromColor::CallFunc_EqualEqual_NameName_ReturnValue' has a wrong offset!");

}
