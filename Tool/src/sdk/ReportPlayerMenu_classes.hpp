#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ReportPlayerMenu

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "AkAudio_structs.hpp"
#include "OPP_structs.hpp"
#include "OPP_classes.hpp"
#include "SlateCore_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass ReportPlayerMenu.ReportPlayerMenu_C
// 0x0078 (0x03A8 - 0x0330)
class UReportPlayerMenu_C final : public URBReportPlayerMenu
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0330(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                 bg;                                                // 0x0338(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             ButtonText;                                        // 0x0340(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             ButtonText_1;                                      // 0x0348(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             ButtonText_2;                                      // 0x0350(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMultiLineEditableTextBox*              DetailsTextBox;                                    // 0x0358(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class URBMenuButton_C*                        ExitButton;                                        // 0x0360(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                                GroupFinderContainer;                              // 0x0368(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMenuFocusActionButtonContainer_C*      MenuFocusActionButtonContainer;                    // 0x0370(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 PlatformIcon;                                      // 0x0378(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             PlayerDisplayName;                                 // 0x0380(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UComboBoxString*                        ReasonComboBox;                                    // 0x0388(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UExperimentBoardActionButton_C*         SendReportBtn;                                     // 0x0390(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Separator;                                         // 0x0398(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Separator_1;                                       // 0x03A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_ReportPlayerMenu(int32 EntryPoint);
	void BndEvt__ReportPlayerMenu_DetailsTextBox_K2Node_ComponentBoundEvent_2_OnMultiLineEditableTextBoxCommittedEvent__DelegateSignature(const class FText& Text, ETextCommit CommitMethod);
	void BndEvt__ReportPlayerMenu_DetailsTextBox_K2Node_ComponentBoundEvent_3_OnMultiLineEditableTextBoxChangedEvent__DelegateSignature(const class FText& Text);
	void Event_MenuCancel_Pressed();
	void OnFocusLost(const struct FFocusEvent& InFocusEvent);
	void BndEvt__ReportPlayerMenu_ExitButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature(class URBMenuButton_C* Button);
	void BndEvt__ReportPlayerMenu_GroupFinderStartBtn_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature();
	void Event_Refresh();
	struct FEventReply OnFocusReceived(const struct FGeometry& MyGeometry, const struct FFocusEvent& InFocusEvent);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ReportPlayerMenu_C">();
	}
	static class UReportPlayerMenu_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UReportPlayerMenu_C>();
	}
};
static_assert(alignof(UReportPlayerMenu_C) == 0x000008, "Wrong alignment on UReportPlayerMenu_C");
static_assert(sizeof(UReportPlayerMenu_C) == 0x0003A8, "Wrong size on UReportPlayerMenu_C");
static_assert(offsetof(UReportPlayerMenu_C, UberGraphFrame) == 0x000330, "Member 'UReportPlayerMenu_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UReportPlayerMenu_C, bg) == 0x000338, "Member 'UReportPlayerMenu_C::bg' has a wrong offset!");
static_assert(offsetof(UReportPlayerMenu_C, ButtonText) == 0x000340, "Member 'UReportPlayerMenu_C::ButtonText' has a wrong offset!");
static_assert(offsetof(UReportPlayerMenu_C, ButtonText_1) == 0x000348, "Member 'UReportPlayerMenu_C::ButtonText_1' has a wrong offset!");
static_assert(offsetof(UReportPlayerMenu_C, ButtonText_2) == 0x000350, "Member 'UReportPlayerMenu_C::ButtonText_2' has a wrong offset!");
static_assert(offsetof(UReportPlayerMenu_C, DetailsTextBox) == 0x000358, "Member 'UReportPlayerMenu_C::DetailsTextBox' has a wrong offset!");
static_assert(offsetof(UReportPlayerMenu_C, ExitButton) == 0x000360, "Member 'UReportPlayerMenu_C::ExitButton' has a wrong offset!");
static_assert(offsetof(UReportPlayerMenu_C, GroupFinderContainer) == 0x000368, "Member 'UReportPlayerMenu_C::GroupFinderContainer' has a wrong offset!");
static_assert(offsetof(UReportPlayerMenu_C, MenuFocusActionButtonContainer) == 0x000370, "Member 'UReportPlayerMenu_C::MenuFocusActionButtonContainer' has a wrong offset!");
static_assert(offsetof(UReportPlayerMenu_C, PlatformIcon) == 0x000378, "Member 'UReportPlayerMenu_C::PlatformIcon' has a wrong offset!");
static_assert(offsetof(UReportPlayerMenu_C, PlayerDisplayName) == 0x000380, "Member 'UReportPlayerMenu_C::PlayerDisplayName' has a wrong offset!");
static_assert(offsetof(UReportPlayerMenu_C, ReasonComboBox) == 0x000388, "Member 'UReportPlayerMenu_C::ReasonComboBox' has a wrong offset!");
static_assert(offsetof(UReportPlayerMenu_C, SendReportBtn) == 0x000390, "Member 'UReportPlayerMenu_C::SendReportBtn' has a wrong offset!");
static_assert(offsetof(UReportPlayerMenu_C, Separator) == 0x000398, "Member 'UReportPlayerMenu_C::Separator' has a wrong offset!");
static_assert(offsetof(UReportPlayerMenu_C, Separator_1) == 0x0003A0, "Member 'UReportPlayerMenu_C::Separator_1' has a wrong offset!");

}
