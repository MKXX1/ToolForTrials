#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: TextChatWidget_BP

#include "Basic.hpp"

#include "AkAudio_structs.hpp"
#include "OPP_structs.hpp"


namespace SDK::Params
{

// Function TextChatWidget_BP.TextChatWidget_BP_C.ExecuteUbergraph_TextChatWidget_BP
// 0x00B0 (0x00B0 - 0x0000)
struct TextChatWidget_BP_C_ExecuteUbergraph_TextChatWidget_BP final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UWidget*>                        CallFunc_GetAllChildren_ReturnValue;               // 0x0008(0x0010)(ReferenceParm, ContainsInstancedReference)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0024(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_25[0x3];                                       // 0x0025(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(EAkCallbackType CallbackType, class UAkCallbackInfo* CallbackInfo)> Temp_delegate_Variable;                            // 0x002C(0x0010)(ConstParm, ZeroConstructor, NoDestructor)
	uint8                                         Pad_3C[0x4];                                       // 0x003C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UWidget*                                CallFunc_Array_Get_Item;                           // 0x0040(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_PostEventGlobal_ReturnValue;              // 0x0048(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4C[0x4];                                       // 0x004C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UTextChatEntry_C*                       K2Node_DynamicCast_AsText_Chat_Entry;              // 0x0050(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0058(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x0059(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5A[0x2];                                       // 0x005A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Variable;                                 // 0x005C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRBTextChatMessage                     K2Node_Event_message;                              // 0x0060(0x0040)(ConstParm)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x00A0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x00A1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_A2[0x2];                                       // 0x00A2(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x00A4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_Event_messageId;                            // 0x00A8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x00AC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(TextChatWidget_BP_C_ExecuteUbergraph_TextChatWidget_BP) == 0x000008, "Wrong alignment on TextChatWidget_BP_C_ExecuteUbergraph_TextChatWidget_BP");
static_assert(sizeof(TextChatWidget_BP_C_ExecuteUbergraph_TextChatWidget_BP) == 0x0000B0, "Wrong size on TextChatWidget_BP_C_ExecuteUbergraph_TextChatWidget_BP");
static_assert(offsetof(TextChatWidget_BP_C_ExecuteUbergraph_TextChatWidget_BP, EntryPoint) == 0x000000, "Member 'TextChatWidget_BP_C_ExecuteUbergraph_TextChatWidget_BP::EntryPoint' has a wrong offset!");
static_assert(offsetof(TextChatWidget_BP_C_ExecuteUbergraph_TextChatWidget_BP, CallFunc_GetAllChildren_ReturnValue) == 0x000008, "Member 'TextChatWidget_BP_C_ExecuteUbergraph_TextChatWidget_BP::CallFunc_GetAllChildren_ReturnValue' has a wrong offset!");
static_assert(offsetof(TextChatWidget_BP_C_ExecuteUbergraph_TextChatWidget_BP, Temp_int_Loop_Counter_Variable) == 0x000018, "Member 'TextChatWidget_BP_C_ExecuteUbergraph_TextChatWidget_BP::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(TextChatWidget_BP_C_ExecuteUbergraph_TextChatWidget_BP, CallFunc_Array_Length_ReturnValue) == 0x00001C, "Member 'TextChatWidget_BP_C_ExecuteUbergraph_TextChatWidget_BP::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(TextChatWidget_BP_C_ExecuteUbergraph_TextChatWidget_BP, CallFunc_Add_IntInt_ReturnValue) == 0x000020, "Member 'TextChatWidget_BP_C_ExecuteUbergraph_TextChatWidget_BP::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(TextChatWidget_BP_C_ExecuteUbergraph_TextChatWidget_BP, CallFunc_Less_IntInt_ReturnValue) == 0x000024, "Member 'TextChatWidget_BP_C_ExecuteUbergraph_TextChatWidget_BP::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(TextChatWidget_BP_C_ExecuteUbergraph_TextChatWidget_BP, Temp_int_Array_Index_Variable) == 0x000028, "Member 'TextChatWidget_BP_C_ExecuteUbergraph_TextChatWidget_BP::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(TextChatWidget_BP_C_ExecuteUbergraph_TextChatWidget_BP, Temp_delegate_Variable) == 0x00002C, "Member 'TextChatWidget_BP_C_ExecuteUbergraph_TextChatWidget_BP::Temp_delegate_Variable' has a wrong offset!");
static_assert(offsetof(TextChatWidget_BP_C_ExecuteUbergraph_TextChatWidget_BP, CallFunc_Array_Get_Item) == 0x000040, "Member 'TextChatWidget_BP_C_ExecuteUbergraph_TextChatWidget_BP::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(TextChatWidget_BP_C_ExecuteUbergraph_TextChatWidget_BP, CallFunc_PostEventGlobal_ReturnValue) == 0x000048, "Member 'TextChatWidget_BP_C_ExecuteUbergraph_TextChatWidget_BP::CallFunc_PostEventGlobal_ReturnValue' has a wrong offset!");
static_assert(offsetof(TextChatWidget_BP_C_ExecuteUbergraph_TextChatWidget_BP, K2Node_DynamicCast_AsText_Chat_Entry) == 0x000050, "Member 'TextChatWidget_BP_C_ExecuteUbergraph_TextChatWidget_BP::K2Node_DynamicCast_AsText_Chat_Entry' has a wrong offset!");
static_assert(offsetof(TextChatWidget_BP_C_ExecuteUbergraph_TextChatWidget_BP, K2Node_DynamicCast_bSuccess) == 0x000058, "Member 'TextChatWidget_BP_C_ExecuteUbergraph_TextChatWidget_BP::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(TextChatWidget_BP_C_ExecuteUbergraph_TextChatWidget_BP, K2Node_Event_IsDesignTime) == 0x000059, "Member 'TextChatWidget_BP_C_ExecuteUbergraph_TextChatWidget_BP::K2Node_Event_IsDesignTime' has a wrong offset!");
static_assert(offsetof(TextChatWidget_BP_C_ExecuteUbergraph_TextChatWidget_BP, Temp_int_Variable) == 0x00005C, "Member 'TextChatWidget_BP_C_ExecuteUbergraph_TextChatWidget_BP::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(TextChatWidget_BP_C_ExecuteUbergraph_TextChatWidget_BP, K2Node_Event_message) == 0x000060, "Member 'TextChatWidget_BP_C_ExecuteUbergraph_TextChatWidget_BP::K2Node_Event_message' has a wrong offset!");
static_assert(offsetof(TextChatWidget_BP_C_ExecuteUbergraph_TextChatWidget_BP, K2Node_SwitchEnum_CmpSuccess) == 0x0000A0, "Member 'TextChatWidget_BP_C_ExecuteUbergraph_TextChatWidget_BP::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(TextChatWidget_BP_C_ExecuteUbergraph_TextChatWidget_BP, CallFunc_LessEqual_IntInt_ReturnValue) == 0x0000A1, "Member 'TextChatWidget_BP_C_ExecuteUbergraph_TextChatWidget_BP::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(TextChatWidget_BP_C_ExecuteUbergraph_TextChatWidget_BP, CallFunc_Add_IntInt_ReturnValue_1) == 0x0000A4, "Member 'TextChatWidget_BP_C_ExecuteUbergraph_TextChatWidget_BP::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(TextChatWidget_BP_C_ExecuteUbergraph_TextChatWidget_BP, K2Node_Event_messageId) == 0x0000A8, "Member 'TextChatWidget_BP_C_ExecuteUbergraph_TextChatWidget_BP::K2Node_Event_messageId' has a wrong offset!");
static_assert(offsetof(TextChatWidget_BP_C_ExecuteUbergraph_TextChatWidget_BP, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x0000AC, "Member 'TextChatWidget_BP_C_ExecuteUbergraph_TextChatWidget_BP::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");

// Function TextChatWidget_BP.TextChatWidget_BP_C.Event_HideMessage
// 0x0004 (0x0004 - 0x0000)
struct TextChatWidget_BP_C_Event_HideMessage final
{
public:
	int32                                         MessageId;                                         // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(TextChatWidget_BP_C_Event_HideMessage) == 0x000004, "Wrong alignment on TextChatWidget_BP_C_Event_HideMessage");
static_assert(sizeof(TextChatWidget_BP_C_Event_HideMessage) == 0x000004, "Wrong size on TextChatWidget_BP_C_Event_HideMessage");
static_assert(offsetof(TextChatWidget_BP_C_Event_HideMessage, MessageId) == 0x000000, "Member 'TextChatWidget_BP_C_Event_HideMessage::MessageId' has a wrong offset!");

// Function TextChatWidget_BP.TextChatWidget_BP_C.Event_ShowMessage
// 0x0040 (0x0040 - 0x0000)
struct TextChatWidget_BP_C_Event_ShowMessage final
{
public:
	struct FRBTextChatMessage                     Message;                                           // 0x0000(0x0040)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(TextChatWidget_BP_C_Event_ShowMessage) == 0x000008, "Wrong alignment on TextChatWidget_BP_C_Event_ShowMessage");
static_assert(sizeof(TextChatWidget_BP_C_Event_ShowMessage) == 0x000040, "Wrong size on TextChatWidget_BP_C_Event_ShowMessage");
static_assert(offsetof(TextChatWidget_BP_C_Event_ShowMessage, Message) == 0x000000, "Member 'TextChatWidget_BP_C_Event_ShowMessage::Message' has a wrong offset!");

// Function TextChatWidget_BP.TextChatWidget_BP_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct TextChatWidget_BP_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(TextChatWidget_BP_C_PreConstruct) == 0x000001, "Wrong alignment on TextChatWidget_BP_C_PreConstruct");
static_assert(sizeof(TextChatWidget_BP_C_PreConstruct) == 0x000001, "Wrong size on TextChatWidget_BP_C_PreConstruct");
static_assert(offsetof(TextChatWidget_BP_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'TextChatWidget_BP_C_PreConstruct::IsDesignTime' has a wrong offset!");

// Function TextChatWidget_BP.TextChatWidget_BP_C.AddMessage
// 0x0060 (0x0060 - 0x0000)
struct TextChatWidget_BP_C_AddMessage final
{
public:
	struct FRBTextChatMessage                     Message;                                           // 0x0000(0x0040)(BlueprintVisible, BlueprintReadOnly, Parm)
	TDelegate<void(class UTextChatEntry_C* Entry)> K2Node_CreateDelegate_OutputDelegate;              // 0x0040(0x0010)(ZeroConstructor, NoDestructor)
	class UTextChatEntry_C*                       CallFunc_Create_ReturnValue;                       // 0x0050(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPanelSlot*                             CallFunc_AddChild_ReturnValue;                     // 0x0058(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(TextChatWidget_BP_C_AddMessage) == 0x000008, "Wrong alignment on TextChatWidget_BP_C_AddMessage");
static_assert(sizeof(TextChatWidget_BP_C_AddMessage) == 0x000060, "Wrong size on TextChatWidget_BP_C_AddMessage");
static_assert(offsetof(TextChatWidget_BP_C_AddMessage, Message) == 0x000000, "Member 'TextChatWidget_BP_C_AddMessage::Message' has a wrong offset!");
static_assert(offsetof(TextChatWidget_BP_C_AddMessage, K2Node_CreateDelegate_OutputDelegate) == 0x000040, "Member 'TextChatWidget_BP_C_AddMessage::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(TextChatWidget_BP_C_AddMessage, CallFunc_Create_ReturnValue) == 0x000050, "Member 'TextChatWidget_BP_C_AddMessage::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(TextChatWidget_BP_C_AddMessage, CallFunc_AddChild_ReturnValue) == 0x000058, "Member 'TextChatWidget_BP_C_AddMessage::CallFunc_AddChild_ReturnValue' has a wrong offset!");

// Function TextChatWidget_BP.TextChatWidget_BP_C.OnEntryHidden
// 0x0010 (0x0010 - 0x0000)
struct TextChatWidget_BP_C_OnEntryHidden final
{
public:
	class UTextChatEntry_C*                       Entry;                                             // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_RemoveChild_ReturnValue;                  // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(TextChatWidget_BP_C_OnEntryHidden) == 0x000008, "Wrong alignment on TextChatWidget_BP_C_OnEntryHidden");
static_assert(sizeof(TextChatWidget_BP_C_OnEntryHidden) == 0x000010, "Wrong size on TextChatWidget_BP_C_OnEntryHidden");
static_assert(offsetof(TextChatWidget_BP_C_OnEntryHidden, Entry) == 0x000000, "Member 'TextChatWidget_BP_C_OnEntryHidden::Entry' has a wrong offset!");
static_assert(offsetof(TextChatWidget_BP_C_OnEntryHidden, CallFunc_RemoveChild_ReturnValue) == 0x000008, "Member 'TextChatWidget_BP_C_OnEntryHidden::CallFunc_RemoveChild_ReturnValue' has a wrong offset!");

}
