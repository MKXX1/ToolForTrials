#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ColorPastille

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "OPP_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass ColorPastille.ColorPastille_C
// 0x0088 (0x02E8 - 0x0260)
class UColorPastille_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0260(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       Hover;                                             // 0x0268(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UButton*                                ColorButton;                                       // 0x0270(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 ColoredSquare;                                     // 0x0278(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USimpleActionTooltip_C*                 GamepadTooltip;                                    // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 SelectedIcon;                                      // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FRBHairColorOption                     LocalColor;                                        // 0x0290(0x0028)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	FMulticastInlineDelegateProperty_             OnClicked;                                         // 0x02B8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             OnHovered;                                         // 0x02C8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                          IsSelected;                                        // 0x02D8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2D9[0x7];                                      // 0x02D9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USimpleActionTooltip_C*                 ToolTip;                                           // 0x02E0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void OnClicked__DelegateSignature(class UColorPastille_C* ClickedPastille);
	void OnHovered__DelegateSignature(const struct FRBHairColorOption& HoveredColor);
	void ExecuteUbergraph_ColorPastille(int32 EntryPoint);
	void BndEvt__ColorButton_ColorButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__ColorButton_ColorButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__ColorButton_ColorButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void Construct();
	void Init(const struct FRBHairColorOption& Hair_Color);
	void SetSelected(bool Selected);
	struct FEventReply OnFocusReceived(const struct FGeometry& MyGeometry, const struct FFocusEvent& InFocusEvent);
	void OnFocusLost(const struct FFocusEvent& InFocusEvent);
	void SetHovered(bool IsHovered_0);
	void GamepadNav_MenuConfirm();
	void GamepadNav_MenuConfirm_Released();
	struct FEventReply OnAnalogValueChanged(const struct FGeometry& MyGeometry, const struct FAnalogInputEvent& InAnalogInputEvent);
	void CreateTooltip();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ColorPastille_C">();
	}
	static class UColorPastille_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UColorPastille_C>();
	}
};
static_assert(alignof(UColorPastille_C) == 0x000008, "Wrong alignment on UColorPastille_C");
static_assert(sizeof(UColorPastille_C) == 0x0002E8, "Wrong size on UColorPastille_C");
static_assert(offsetof(UColorPastille_C, UberGraphFrame) == 0x000260, "Member 'UColorPastille_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UColorPastille_C, Hover) == 0x000268, "Member 'UColorPastille_C::Hover' has a wrong offset!");
static_assert(offsetof(UColorPastille_C, ColorButton) == 0x000270, "Member 'UColorPastille_C::ColorButton' has a wrong offset!");
static_assert(offsetof(UColorPastille_C, ColoredSquare) == 0x000278, "Member 'UColorPastille_C::ColoredSquare' has a wrong offset!");
static_assert(offsetof(UColorPastille_C, GamepadTooltip) == 0x000280, "Member 'UColorPastille_C::GamepadTooltip' has a wrong offset!");
static_assert(offsetof(UColorPastille_C, SelectedIcon) == 0x000288, "Member 'UColorPastille_C::SelectedIcon' has a wrong offset!");
static_assert(offsetof(UColorPastille_C, LocalColor) == 0x000290, "Member 'UColorPastille_C::LocalColor' has a wrong offset!");
static_assert(offsetof(UColorPastille_C, OnClicked) == 0x0002B8, "Member 'UColorPastille_C::OnClicked' has a wrong offset!");
static_assert(offsetof(UColorPastille_C, OnHovered) == 0x0002C8, "Member 'UColorPastille_C::OnHovered' has a wrong offset!");
static_assert(offsetof(UColorPastille_C, IsSelected) == 0x0002D8, "Member 'UColorPastille_C::IsSelected' has a wrong offset!");
static_assert(offsetof(UColorPastille_C, ToolTip) == 0x0002E0, "Member 'UColorPastille_C::ToolTip' has a wrong offset!");

}
