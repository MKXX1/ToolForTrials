#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: MatchStartCountdownWidget

#include "Basic.hpp"

#include "OPP_structs.hpp"
#include "Engine_structs.hpp"
#include "SlateCore_structs.hpp"


namespace SDK::Params
{

// Function MatchStartCountdownWidget.MatchStartCountdownWidget_C.ExecuteUbergraph_MatchStartCountdownWidget
// 0x00F0 (0x00F0 - 0x0000)
struct MatchStartCountdownWidget_C_ExecuteUbergraph_MatchStartCountdownWidget final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class ARBLobbyPlayerState* RBLobbyPlayerState, struct FFindPartyState& FindPartyState)> K2Node_CreateDelegate_OutputDelegate;              // 0x0004(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void(EFindPartyTicketState FindPartyTicketState)> K2Node_CreateDelegate_OutputDelegate_1;            // 0x0014(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void(class ARBLobbyPlayerState* RBLobbyPlayerState, struct FMatchState& MatchState)> K2Node_CreateDelegate_OutputDelegate_2;            // 0x0024(0x0010)(ZeroConstructor, NoDestructor)
	struct FGeometry                              K2Node_Event_MyGeometry;                           // 0x0034(0x0038)(IsPlainOldData, NoDestructor)
	float                                         K2Node_Event_InDeltaTime;                          // 0x006C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ARBLobbyPlayerController*               CallFunc_GetLocalLobbyPlayerController_ReturnValue; // 0x0070(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0078(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_79[0x7];                                       // 0x0079(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ARBLobbyPlayerController*               CallFunc_GetLocalLobbyPlayerController_ReturnValue_1; // 0x0080(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ARBLobbyPlayerState*                    K2Node_CustomEvent_rbLobbyPlayerState_1;           // 0x0088(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FMatchState                            K2Node_CustomEvent_matchState;                     // 0x0090(0x0020)(ConstParm, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x00B0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_B1[0x7];                                       // 0x00B1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ARBLobbyPlayerState*                    K2Node_CustomEvent_rbLobbyPlayerState;             // 0x00B8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFindPartyState                        K2Node_CustomEvent_findPartyState;                 // 0x00C0(0x0028)(ConstParm, NoDestructor)
	EFindPartyTicketState                         K2Node_CustomEvent_findPartyTicketState;           // 0x00E8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(MatchStartCountdownWidget_C_ExecuteUbergraph_MatchStartCountdownWidget) == 0x000008, "Wrong alignment on MatchStartCountdownWidget_C_ExecuteUbergraph_MatchStartCountdownWidget");
static_assert(sizeof(MatchStartCountdownWidget_C_ExecuteUbergraph_MatchStartCountdownWidget) == 0x0000F0, "Wrong size on MatchStartCountdownWidget_C_ExecuteUbergraph_MatchStartCountdownWidget");
static_assert(offsetof(MatchStartCountdownWidget_C_ExecuteUbergraph_MatchStartCountdownWidget, EntryPoint) == 0x000000, "Member 'MatchStartCountdownWidget_C_ExecuteUbergraph_MatchStartCountdownWidget::EntryPoint' has a wrong offset!");
static_assert(offsetof(MatchStartCountdownWidget_C_ExecuteUbergraph_MatchStartCountdownWidget, K2Node_CreateDelegate_OutputDelegate) == 0x000004, "Member 'MatchStartCountdownWidget_C_ExecuteUbergraph_MatchStartCountdownWidget::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(MatchStartCountdownWidget_C_ExecuteUbergraph_MatchStartCountdownWidget, K2Node_CreateDelegate_OutputDelegate_1) == 0x000014, "Member 'MatchStartCountdownWidget_C_ExecuteUbergraph_MatchStartCountdownWidget::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(MatchStartCountdownWidget_C_ExecuteUbergraph_MatchStartCountdownWidget, K2Node_CreateDelegate_OutputDelegate_2) == 0x000024, "Member 'MatchStartCountdownWidget_C_ExecuteUbergraph_MatchStartCountdownWidget::K2Node_CreateDelegate_OutputDelegate_2' has a wrong offset!");
static_assert(offsetof(MatchStartCountdownWidget_C_ExecuteUbergraph_MatchStartCountdownWidget, K2Node_Event_MyGeometry) == 0x000034, "Member 'MatchStartCountdownWidget_C_ExecuteUbergraph_MatchStartCountdownWidget::K2Node_Event_MyGeometry' has a wrong offset!");
static_assert(offsetof(MatchStartCountdownWidget_C_ExecuteUbergraph_MatchStartCountdownWidget, K2Node_Event_InDeltaTime) == 0x00006C, "Member 'MatchStartCountdownWidget_C_ExecuteUbergraph_MatchStartCountdownWidget::K2Node_Event_InDeltaTime' has a wrong offset!");
static_assert(offsetof(MatchStartCountdownWidget_C_ExecuteUbergraph_MatchStartCountdownWidget, CallFunc_GetLocalLobbyPlayerController_ReturnValue) == 0x000070, "Member 'MatchStartCountdownWidget_C_ExecuteUbergraph_MatchStartCountdownWidget::CallFunc_GetLocalLobbyPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(MatchStartCountdownWidget_C_ExecuteUbergraph_MatchStartCountdownWidget, CallFunc_IsValid_ReturnValue) == 0x000078, "Member 'MatchStartCountdownWidget_C_ExecuteUbergraph_MatchStartCountdownWidget::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(MatchStartCountdownWidget_C_ExecuteUbergraph_MatchStartCountdownWidget, CallFunc_GetLocalLobbyPlayerController_ReturnValue_1) == 0x000080, "Member 'MatchStartCountdownWidget_C_ExecuteUbergraph_MatchStartCountdownWidget::CallFunc_GetLocalLobbyPlayerController_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MatchStartCountdownWidget_C_ExecuteUbergraph_MatchStartCountdownWidget, K2Node_CustomEvent_rbLobbyPlayerState_1) == 0x000088, "Member 'MatchStartCountdownWidget_C_ExecuteUbergraph_MatchStartCountdownWidget::K2Node_CustomEvent_rbLobbyPlayerState_1' has a wrong offset!");
static_assert(offsetof(MatchStartCountdownWidget_C_ExecuteUbergraph_MatchStartCountdownWidget, K2Node_CustomEvent_matchState) == 0x000090, "Member 'MatchStartCountdownWidget_C_ExecuteUbergraph_MatchStartCountdownWidget::K2Node_CustomEvent_matchState' has a wrong offset!");
static_assert(offsetof(MatchStartCountdownWidget_C_ExecuteUbergraph_MatchStartCountdownWidget, CallFunc_IsValid_ReturnValue_1) == 0x0000B0, "Member 'MatchStartCountdownWidget_C_ExecuteUbergraph_MatchStartCountdownWidget::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MatchStartCountdownWidget_C_ExecuteUbergraph_MatchStartCountdownWidget, K2Node_CustomEvent_rbLobbyPlayerState) == 0x0000B8, "Member 'MatchStartCountdownWidget_C_ExecuteUbergraph_MatchStartCountdownWidget::K2Node_CustomEvent_rbLobbyPlayerState' has a wrong offset!");
static_assert(offsetof(MatchStartCountdownWidget_C_ExecuteUbergraph_MatchStartCountdownWidget, K2Node_CustomEvent_findPartyState) == 0x0000C0, "Member 'MatchStartCountdownWidget_C_ExecuteUbergraph_MatchStartCountdownWidget::K2Node_CustomEvent_findPartyState' has a wrong offset!");
static_assert(offsetof(MatchStartCountdownWidget_C_ExecuteUbergraph_MatchStartCountdownWidget, K2Node_CustomEvent_findPartyTicketState) == 0x0000E8, "Member 'MatchStartCountdownWidget_C_ExecuteUbergraph_MatchStartCountdownWidget::K2Node_CustomEvent_findPartyTicketState' has a wrong offset!");

// Function MatchStartCountdownWidget.MatchStartCountdownWidget_C.OnFindPartyTicketStateUpdatedEvent
// 0x0001 (0x0001 - 0x0000)
struct MatchStartCountdownWidget_C_OnFindPartyTicketStateUpdatedEvent final
{
public:
	EFindPartyTicketState                         FindPartyTicketState_0;                            // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(MatchStartCountdownWidget_C_OnFindPartyTicketStateUpdatedEvent) == 0x000001, "Wrong alignment on MatchStartCountdownWidget_C_OnFindPartyTicketStateUpdatedEvent");
static_assert(sizeof(MatchStartCountdownWidget_C_OnFindPartyTicketStateUpdatedEvent) == 0x000001, "Wrong size on MatchStartCountdownWidget_C_OnFindPartyTicketStateUpdatedEvent");
static_assert(offsetof(MatchStartCountdownWidget_C_OnFindPartyTicketStateUpdatedEvent, FindPartyTicketState_0) == 0x000000, "Member 'MatchStartCountdownWidget_C_OnFindPartyTicketStateUpdatedEvent::FindPartyTicketState_0' has a wrong offset!");

// Function MatchStartCountdownWidget.MatchStartCountdownWidget_C.OnFindPartyStateUpdatedEvent
// 0x0030 (0x0030 - 0x0000)
struct MatchStartCountdownWidget_C_OnFindPartyStateUpdatedEvent final
{
public:
	class ARBLobbyPlayerState*                    RBLobbyPlayerState;                                // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFindPartyState                        FindPartyState;                                    // 0x0008(0x0028)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
};
static_assert(alignof(MatchStartCountdownWidget_C_OnFindPartyStateUpdatedEvent) == 0x000008, "Wrong alignment on MatchStartCountdownWidget_C_OnFindPartyStateUpdatedEvent");
static_assert(sizeof(MatchStartCountdownWidget_C_OnFindPartyStateUpdatedEvent) == 0x000030, "Wrong size on MatchStartCountdownWidget_C_OnFindPartyStateUpdatedEvent");
static_assert(offsetof(MatchStartCountdownWidget_C_OnFindPartyStateUpdatedEvent, RBLobbyPlayerState) == 0x000000, "Member 'MatchStartCountdownWidget_C_OnFindPartyStateUpdatedEvent::RBLobbyPlayerState' has a wrong offset!");
static_assert(offsetof(MatchStartCountdownWidget_C_OnFindPartyStateUpdatedEvent, FindPartyState) == 0x000008, "Member 'MatchStartCountdownWidget_C_OnFindPartyStateUpdatedEvent::FindPartyState' has a wrong offset!");

// Function MatchStartCountdownWidget.MatchStartCountdownWidget_C.OnMatchStateUpdatedEvent
// 0x0028 (0x0028 - 0x0000)
struct MatchStartCountdownWidget_C_OnMatchStateUpdatedEvent final
{
public:
	class ARBLobbyPlayerState*                    RBLobbyPlayerState;                                // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FMatchState                            MatchState;                                        // 0x0008(0x0020)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
};
static_assert(alignof(MatchStartCountdownWidget_C_OnMatchStateUpdatedEvent) == 0x000008, "Wrong alignment on MatchStartCountdownWidget_C_OnMatchStateUpdatedEvent");
static_assert(sizeof(MatchStartCountdownWidget_C_OnMatchStateUpdatedEvent) == 0x000028, "Wrong size on MatchStartCountdownWidget_C_OnMatchStateUpdatedEvent");
static_assert(offsetof(MatchStartCountdownWidget_C_OnMatchStateUpdatedEvent, RBLobbyPlayerState) == 0x000000, "Member 'MatchStartCountdownWidget_C_OnMatchStateUpdatedEvent::RBLobbyPlayerState' has a wrong offset!");
static_assert(offsetof(MatchStartCountdownWidget_C_OnMatchStateUpdatedEvent, MatchState) == 0x000008, "Member 'MatchStartCountdownWidget_C_OnMatchStateUpdatedEvent::MatchState' has a wrong offset!");

// Function MatchStartCountdownWidget.MatchStartCountdownWidget_C.Tick
// 0x003C (0x003C - 0x0000)
struct MatchStartCountdownWidget_C_Tick final
{
public:
	struct FGeometry                              MyGeometry;                                        // 0x0000(0x0038)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                         InDeltaTime;                                       // 0x0038(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(MatchStartCountdownWidget_C_Tick) == 0x000004, "Wrong alignment on MatchStartCountdownWidget_C_Tick");
static_assert(sizeof(MatchStartCountdownWidget_C_Tick) == 0x00003C, "Wrong size on MatchStartCountdownWidget_C_Tick");
static_assert(offsetof(MatchStartCountdownWidget_C_Tick, MyGeometry) == 0x000000, "Member 'MatchStartCountdownWidget_C_Tick::MyGeometry' has a wrong offset!");
static_assert(offsetof(MatchStartCountdownWidget_C_Tick, InDeltaTime) == 0x000038, "Member 'MatchStartCountdownWidget_C_Tick::InDeltaTime' has a wrong offset!");

// Function MatchStartCountdownWidget.MatchStartCountdownWidget_C.StartMatchCountdown
// 0x0010 (0x0010 - 0x0000)
struct MatchStartCountdownWidget_C_StartMatchCountdown final
{
public:
	float                                         MatchCancelationGracePeriodServerTime;             // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         MatchStartServerTime_0;                            // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bReadyToTravelToMatch;                             // 0x0008(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Greater_FloatFloat_ReturnValue;           // 0x0009(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x000A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x000B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                         CallFunc_GetServerTime_ReturnValue;                // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(MatchStartCountdownWidget_C_StartMatchCountdown) == 0x000004, "Wrong alignment on MatchStartCountdownWidget_C_StartMatchCountdown");
static_assert(sizeof(MatchStartCountdownWidget_C_StartMatchCountdown) == 0x000010, "Wrong size on MatchStartCountdownWidget_C_StartMatchCountdown");
static_assert(offsetof(MatchStartCountdownWidget_C_StartMatchCountdown, MatchCancelationGracePeriodServerTime) == 0x000000, "Member 'MatchStartCountdownWidget_C_StartMatchCountdown::MatchCancelationGracePeriodServerTime' has a wrong offset!");
static_assert(offsetof(MatchStartCountdownWidget_C_StartMatchCountdown, MatchStartServerTime_0) == 0x000004, "Member 'MatchStartCountdownWidget_C_StartMatchCountdown::MatchStartServerTime_0' has a wrong offset!");
static_assert(offsetof(MatchStartCountdownWidget_C_StartMatchCountdown, bReadyToTravelToMatch) == 0x000008, "Member 'MatchStartCountdownWidget_C_StartMatchCountdown::bReadyToTravelToMatch' has a wrong offset!");
static_assert(offsetof(MatchStartCountdownWidget_C_StartMatchCountdown, CallFunc_Greater_FloatFloat_ReturnValue) == 0x000009, "Member 'MatchStartCountdownWidget_C_StartMatchCountdown::CallFunc_Greater_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(MatchStartCountdownWidget_C_StartMatchCountdown, CallFunc_BooleanAND_ReturnValue) == 0x00000A, "Member 'MatchStartCountdownWidget_C_StartMatchCountdown::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(MatchStartCountdownWidget_C_StartMatchCountdown, CallFunc_Not_PreBool_ReturnValue) == 0x00000B, "Member 'MatchStartCountdownWidget_C_StartMatchCountdown::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(MatchStartCountdownWidget_C_StartMatchCountdown, CallFunc_GetServerTime_ReturnValue) == 0x00000C, "Member 'MatchStartCountdownWidget_C_StartMatchCountdown::CallFunc_GetServerTime_ReturnValue' has a wrong offset!");

// Function MatchStartCountdownWidget.MatchStartCountdownWidget_C.SetIsRightAligned
// 0x0001 (0x0001 - 0x0000)
struct MatchStartCountdownWidget_C_SetIsRightAligned final
{
public:
	bool                                          IsRightAligned;                                    // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(MatchStartCountdownWidget_C_SetIsRightAligned) == 0x000001, "Wrong alignment on MatchStartCountdownWidget_C_SetIsRightAligned");
static_assert(sizeof(MatchStartCountdownWidget_C_SetIsRightAligned) == 0x000001, "Wrong size on MatchStartCountdownWidget_C_SetIsRightAligned");
static_assert(offsetof(MatchStartCountdownWidget_C_SetIsRightAligned, IsRightAligned) == 0x000000, "Member 'MatchStartCountdownWidget_C_SetIsRightAligned::IsRightAligned' has a wrong offset!");

// Function MatchStartCountdownWidget.MatchStartCountdownWidget_C.OnMatchStateUpdated
// 0x0028 (0x0028 - 0x0000)
struct MatchStartCountdownWidget_C_OnMatchStateUpdated final
{
public:
	struct FMatchState                            MatchState;                                        // 0x0000(0x0020)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	bool                                          CallFunc_Greater_FloatFloat_ReturnValue;           // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Greater_FloatFloat_ReturnValue_1;         // 0x0021(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x0022(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(MatchStartCountdownWidget_C_OnMatchStateUpdated) == 0x000008, "Wrong alignment on MatchStartCountdownWidget_C_OnMatchStateUpdated");
static_assert(sizeof(MatchStartCountdownWidget_C_OnMatchStateUpdated) == 0x000028, "Wrong size on MatchStartCountdownWidget_C_OnMatchStateUpdated");
static_assert(offsetof(MatchStartCountdownWidget_C_OnMatchStateUpdated, MatchState) == 0x000000, "Member 'MatchStartCountdownWidget_C_OnMatchStateUpdated::MatchState' has a wrong offset!");
static_assert(offsetof(MatchStartCountdownWidget_C_OnMatchStateUpdated, CallFunc_Greater_FloatFloat_ReturnValue) == 0x000020, "Member 'MatchStartCountdownWidget_C_OnMatchStateUpdated::CallFunc_Greater_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(MatchStartCountdownWidget_C_OnMatchStateUpdated, CallFunc_Greater_FloatFloat_ReturnValue_1) == 0x000021, "Member 'MatchStartCountdownWidget_C_OnMatchStateUpdated::CallFunc_Greater_FloatFloat_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MatchStartCountdownWidget_C_OnMatchStateUpdated, CallFunc_BooleanOR_ReturnValue) == 0x000022, "Member 'MatchStartCountdownWidget_C_OnMatchStateUpdated::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");

// Function MatchStartCountdownWidget.MatchStartCountdownWidget_C.UpdateText
// 0x0100 (0x0100 - 0x0000)
struct MatchStartCountdownWidget_C_UpdateText final
{
public:
	bool                                          Temp_bool_Variable;                                // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1[0x7];                                        // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   Temp_text_Variable;                                // 0x0008(0x0018)()
	bool                                          Temp_bool_Variable_1;                              // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_21[0x7];                                       // 0x0021(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   Temp_text_Variable_1;                              // 0x0028(0x0018)()
	class FText                                   Temp_text_Variable_2;                              // 0x0040(0x0018)()
	bool                                          Temp_bool_Variable_2;                              // 0x0058(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_59[0x7];                                       // 0x0059(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   Temp_text_Variable_3;                              // 0x0060(0x0018)()
	class FText                                   Temp_text_Variable_4;                              // 0x0078(0x0018)()
	bool                                          CallFunc_Greater_FloatFloat_ReturnValue;           // 0x0090(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0091(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_92[0x6];                                       // 0x0092(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_GetFindPartySearchingText_ReturnValue;    // 0x0098(0x0018)()
	class FText                                   K2Node_Select_Default;                             // 0x00B0(0x0018)()
	class FText                                   K2Node_Select_Default_1;                           // 0x00C8(0x0018)()
	class FText                                   K2Node_Select_Default_2;                           // 0x00E0(0x0018)()
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x00F8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(MatchStartCountdownWidget_C_UpdateText) == 0x000008, "Wrong alignment on MatchStartCountdownWidget_C_UpdateText");
static_assert(sizeof(MatchStartCountdownWidget_C_UpdateText) == 0x000100, "Wrong size on MatchStartCountdownWidget_C_UpdateText");
static_assert(offsetof(MatchStartCountdownWidget_C_UpdateText, Temp_bool_Variable) == 0x000000, "Member 'MatchStartCountdownWidget_C_UpdateText::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(MatchStartCountdownWidget_C_UpdateText, Temp_text_Variable) == 0x000008, "Member 'MatchStartCountdownWidget_C_UpdateText::Temp_text_Variable' has a wrong offset!");
static_assert(offsetof(MatchStartCountdownWidget_C_UpdateText, Temp_bool_Variable_1) == 0x000020, "Member 'MatchStartCountdownWidget_C_UpdateText::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(MatchStartCountdownWidget_C_UpdateText, Temp_text_Variable_1) == 0x000028, "Member 'MatchStartCountdownWidget_C_UpdateText::Temp_text_Variable_1' has a wrong offset!");
static_assert(offsetof(MatchStartCountdownWidget_C_UpdateText, Temp_text_Variable_2) == 0x000040, "Member 'MatchStartCountdownWidget_C_UpdateText::Temp_text_Variable_2' has a wrong offset!");
static_assert(offsetof(MatchStartCountdownWidget_C_UpdateText, Temp_bool_Variable_2) == 0x000058, "Member 'MatchStartCountdownWidget_C_UpdateText::Temp_bool_Variable_2' has a wrong offset!");
static_assert(offsetof(MatchStartCountdownWidget_C_UpdateText, Temp_text_Variable_3) == 0x000060, "Member 'MatchStartCountdownWidget_C_UpdateText::Temp_text_Variable_3' has a wrong offset!");
static_assert(offsetof(MatchStartCountdownWidget_C_UpdateText, Temp_text_Variable_4) == 0x000078, "Member 'MatchStartCountdownWidget_C_UpdateText::Temp_text_Variable_4' has a wrong offset!");
static_assert(offsetof(MatchStartCountdownWidget_C_UpdateText, CallFunc_Greater_FloatFloat_ReturnValue) == 0x000090, "Member 'MatchStartCountdownWidget_C_UpdateText::CallFunc_Greater_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(MatchStartCountdownWidget_C_UpdateText, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000091, "Member 'MatchStartCountdownWidget_C_UpdateText::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(MatchStartCountdownWidget_C_UpdateText, CallFunc_GetFindPartySearchingText_ReturnValue) == 0x000098, "Member 'MatchStartCountdownWidget_C_UpdateText::CallFunc_GetFindPartySearchingText_ReturnValue' has a wrong offset!");
static_assert(offsetof(MatchStartCountdownWidget_C_UpdateText, K2Node_Select_Default) == 0x0000B0, "Member 'MatchStartCountdownWidget_C_UpdateText::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(MatchStartCountdownWidget_C_UpdateText, K2Node_Select_Default_1) == 0x0000C8, "Member 'MatchStartCountdownWidget_C_UpdateText::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(MatchStartCountdownWidget_C_UpdateText, K2Node_Select_Default_2) == 0x0000E0, "Member 'MatchStartCountdownWidget_C_UpdateText::K2Node_Select_Default_2' has a wrong offset!");
static_assert(offsetof(MatchStartCountdownWidget_C_UpdateText, CallFunc_BooleanAND_ReturnValue) == 0x0000F8, "Member 'MatchStartCountdownWidget_C_UpdateText::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");

// Function MatchStartCountdownWidget.MatchStartCountdownWidget_C.OnFindPartyStateUpdated
// 0x0028 (0x0028 - 0x0000)
struct MatchStartCountdownWidget_C_OnFindPartyStateUpdated final
{
public:
	struct FFindPartyState                        FindPartyState;                                    // 0x0000(0x0028)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
};
static_assert(alignof(MatchStartCountdownWidget_C_OnFindPartyStateUpdated) == 0x000008, "Wrong alignment on MatchStartCountdownWidget_C_OnFindPartyStateUpdated");
static_assert(sizeof(MatchStartCountdownWidget_C_OnFindPartyStateUpdated) == 0x000028, "Wrong size on MatchStartCountdownWidget_C_OnFindPartyStateUpdated");
static_assert(offsetof(MatchStartCountdownWidget_C_OnFindPartyStateUpdated, FindPartyState) == 0x000000, "Member 'MatchStartCountdownWidget_C_OnFindPartyStateUpdated::FindPartyState' has a wrong offset!");

// Function MatchStartCountdownWidget.MatchStartCountdownWidget_C.OnFindPartyTicketStateUpdated
// 0x0001 (0x0001 - 0x0000)
struct MatchStartCountdownWidget_C_OnFindPartyTicketStateUpdated final
{
public:
	EFindPartyTicketState                         FindPartyTicketState_0;                            // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(MatchStartCountdownWidget_C_OnFindPartyTicketStateUpdated) == 0x000001, "Wrong alignment on MatchStartCountdownWidget_C_OnFindPartyTicketStateUpdated");
static_assert(sizeof(MatchStartCountdownWidget_C_OnFindPartyTicketStateUpdated) == 0x000001, "Wrong size on MatchStartCountdownWidget_C_OnFindPartyTicketStateUpdated");
static_assert(offsetof(MatchStartCountdownWidget_C_OnFindPartyTicketStateUpdated, FindPartyTicketState_0) == 0x000000, "Member 'MatchStartCountdownWidget_C_OnFindPartyTicketStateUpdated::FindPartyTicketState_0' has a wrong offset!");

// Function MatchStartCountdownWidget.MatchStartCountdownWidget_C.UpdateCountdownText
// 0x000C (0x000C - 0x0000)
struct MatchStartCountdownWidget_C_UpdateCountdownText final
{
public:
	float                                         CallFunc_GetServerTime_ReturnValue;                // 0x0000(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Subtract_FloatFloat_ReturnValue;          // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_FMax_ReturnValue;                         // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(MatchStartCountdownWidget_C_UpdateCountdownText) == 0x000004, "Wrong alignment on MatchStartCountdownWidget_C_UpdateCountdownText");
static_assert(sizeof(MatchStartCountdownWidget_C_UpdateCountdownText) == 0x00000C, "Wrong size on MatchStartCountdownWidget_C_UpdateCountdownText");
static_assert(offsetof(MatchStartCountdownWidget_C_UpdateCountdownText, CallFunc_GetServerTime_ReturnValue) == 0x000000, "Member 'MatchStartCountdownWidget_C_UpdateCountdownText::CallFunc_GetServerTime_ReturnValue' has a wrong offset!");
static_assert(offsetof(MatchStartCountdownWidget_C_UpdateCountdownText, CallFunc_Subtract_FloatFloat_ReturnValue) == 0x000004, "Member 'MatchStartCountdownWidget_C_UpdateCountdownText::CallFunc_Subtract_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(MatchStartCountdownWidget_C_UpdateCountdownText, CallFunc_FMax_ReturnValue) == 0x000008, "Member 'MatchStartCountdownWidget_C_UpdateCountdownText::CallFunc_FMax_ReturnValue' has a wrong offset!");

// Function MatchStartCountdownWidget.MatchStartCountdownWidget_C.GetFindPartySearchingText
// 0x02B8 (0x02B8 - 0x0000)
struct MatchStartCountdownWidget_C_GetFindPartySearchingText final
{
public:
	class FText                                   ReturnValue;                                       // 0x0000(0x0018)(Parm, OutParm, ReturnParm)
	bool                                          Temp_bool_Variable;                                // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_19[0x7];                                       // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   Temp_text_Variable;                                // 0x0020(0x0018)()
	class URBGameStructureConfig*                 CallFunc_GetGameStructureConfig_ReturnValue;       // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_NameName_ReturnValue;            // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_41[0x7];                                       // 0x0041(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FRBProgramInfoRow                      CallFunc_GetProgramInfo_ReturnValue;               // 0x0048(0x01D8)(ConstParm)
	class FText                                   CallFunc_TextToUpper_ReturnValue;                  // 0x0220(0x0018)()
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData;              // 0x0238(0x0040)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array;                            // 0x0278(0x0010)(ReferenceParm)
	class FText                                   CallFunc_Format_ReturnValue;                       // 0x0288(0x0018)()
	class FText                                   K2Node_Select_Default;                             // 0x02A0(0x0018)()
};
static_assert(alignof(MatchStartCountdownWidget_C_GetFindPartySearchingText) == 0x000008, "Wrong alignment on MatchStartCountdownWidget_C_GetFindPartySearchingText");
static_assert(sizeof(MatchStartCountdownWidget_C_GetFindPartySearchingText) == 0x0002B8, "Wrong size on MatchStartCountdownWidget_C_GetFindPartySearchingText");
static_assert(offsetof(MatchStartCountdownWidget_C_GetFindPartySearchingText, ReturnValue) == 0x000000, "Member 'MatchStartCountdownWidget_C_GetFindPartySearchingText::ReturnValue' has a wrong offset!");
static_assert(offsetof(MatchStartCountdownWidget_C_GetFindPartySearchingText, Temp_bool_Variable) == 0x000018, "Member 'MatchStartCountdownWidget_C_GetFindPartySearchingText::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(MatchStartCountdownWidget_C_GetFindPartySearchingText, Temp_text_Variable) == 0x000020, "Member 'MatchStartCountdownWidget_C_GetFindPartySearchingText::Temp_text_Variable' has a wrong offset!");
static_assert(offsetof(MatchStartCountdownWidget_C_GetFindPartySearchingText, CallFunc_GetGameStructureConfig_ReturnValue) == 0x000038, "Member 'MatchStartCountdownWidget_C_GetFindPartySearchingText::CallFunc_GetGameStructureConfig_ReturnValue' has a wrong offset!");
static_assert(offsetof(MatchStartCountdownWidget_C_GetFindPartySearchingText, CallFunc_NotEqual_NameName_ReturnValue) == 0x000040, "Member 'MatchStartCountdownWidget_C_GetFindPartySearchingText::CallFunc_NotEqual_NameName_ReturnValue' has a wrong offset!");
static_assert(offsetof(MatchStartCountdownWidget_C_GetFindPartySearchingText, CallFunc_GetProgramInfo_ReturnValue) == 0x000048, "Member 'MatchStartCountdownWidget_C_GetFindPartySearchingText::CallFunc_GetProgramInfo_ReturnValue' has a wrong offset!");
static_assert(offsetof(MatchStartCountdownWidget_C_GetFindPartySearchingText, CallFunc_TextToUpper_ReturnValue) == 0x000220, "Member 'MatchStartCountdownWidget_C_GetFindPartySearchingText::CallFunc_TextToUpper_ReturnValue' has a wrong offset!");
static_assert(offsetof(MatchStartCountdownWidget_C_GetFindPartySearchingText, K2Node_MakeStruct_FormatArgumentData) == 0x000238, "Member 'MatchStartCountdownWidget_C_GetFindPartySearchingText::K2Node_MakeStruct_FormatArgumentData' has a wrong offset!");
static_assert(offsetof(MatchStartCountdownWidget_C_GetFindPartySearchingText, K2Node_MakeArray_Array) == 0x000278, "Member 'MatchStartCountdownWidget_C_GetFindPartySearchingText::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(MatchStartCountdownWidget_C_GetFindPartySearchingText, CallFunc_Format_ReturnValue) == 0x000288, "Member 'MatchStartCountdownWidget_C_GetFindPartySearchingText::CallFunc_Format_ReturnValue' has a wrong offset!");
static_assert(offsetof(MatchStartCountdownWidget_C_GetFindPartySearchingText, K2Node_Select_Default) == 0x0002A0, "Member 'MatchStartCountdownWidget_C_GetFindPartySearchingText::K2Node_Select_Default' has a wrong offset!");

// Function MatchStartCountdownWidget.MatchStartCountdownWidget_C.ShouldShow
// 0x0006 (0x0006 - 0x0000)
struct MatchStartCountdownWidget_C_ShouldShow final
{
public:
	bool                                          ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_1;        // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x0003(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanOR_ReturnValue_1;                  // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(MatchStartCountdownWidget_C_ShouldShow) == 0x000001, "Wrong alignment on MatchStartCountdownWidget_C_ShouldShow");
static_assert(sizeof(MatchStartCountdownWidget_C_ShouldShow) == 0x000006, "Wrong size on MatchStartCountdownWidget_C_ShouldShow");
static_assert(offsetof(MatchStartCountdownWidget_C_ShouldShow, ReturnValue) == 0x000000, "Member 'MatchStartCountdownWidget_C_ShouldShow::ReturnValue' has a wrong offset!");
static_assert(offsetof(MatchStartCountdownWidget_C_ShouldShow, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000001, "Member 'MatchStartCountdownWidget_C_ShouldShow::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(MatchStartCountdownWidget_C_ShouldShow, CallFunc_EqualEqual_ByteByte_ReturnValue_1) == 0x000002, "Member 'MatchStartCountdownWidget_C_ShouldShow::CallFunc_EqualEqual_ByteByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MatchStartCountdownWidget_C_ShouldShow, CallFunc_BooleanOR_ReturnValue) == 0x000003, "Member 'MatchStartCountdownWidget_C_ShouldShow::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");
static_assert(offsetof(MatchStartCountdownWidget_C_ShouldShow, CallFunc_BooleanAND_ReturnValue) == 0x000004, "Member 'MatchStartCountdownWidget_C_ShouldShow::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(MatchStartCountdownWidget_C_ShouldShow, CallFunc_BooleanOR_ReturnValue_1) == 0x000005, "Member 'MatchStartCountdownWidget_C_ShouldShow::CallFunc_BooleanOR_ReturnValue_1' has a wrong offset!");

}
