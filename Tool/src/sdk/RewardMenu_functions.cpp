#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: RewardMenu

#include "Basic.hpp"

#include "RewardMenu_classes.hpp"
#include "RewardMenu_parameters.hpp"


namespace SDK
{

// Function RewardMenu.RewardMenu_C.ExecuteUbergraph_RewardMenu
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void URewardMenu_C::ExecuteUbergraph_RewardMenu(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RewardMenu_C", "ExecuteUbergraph_RewardMenu");

	Params::RewardMenu_C_ExecuteUbergraph_RewardMenu Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function RewardMenu.RewardMenu_C.Event_MenuConfirm_Pressed
// (Event, Public, BlueprintEvent)

void URewardMenu_C::Event_MenuConfirm_Pressed()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RewardMenu_C", "Event_MenuConfirm_Pressed");

	UObject::ProcessEvent(Func, nullptr);
}


// Function RewardMenu.RewardMenu_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                        MyGeometry                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                                   InDeltaTime                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void URewardMenu_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RewardMenu_C", "Tick");

	Params::RewardMenu_C_Tick Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function RewardMenu.RewardMenu_C.BndEvt__RewardMenu_ExitButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class URBMenuButton_C*                  Button                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void URewardMenu_C::BndEvt__RewardMenu_ExitButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature(class URBMenuButton_C* Button)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RewardMenu_C", "BndEvt__RewardMenu_ExitButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature");

	Params::RewardMenu_C_BndEvt__RewardMenu_ExitButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);
}


// Function RewardMenu.RewardMenu_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintCallable, BlueprintEvent)

void URewardMenu_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RewardMenu_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function RewardMenu.RewardMenu_C.SetupXpCounterDisplay
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Level                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   Value                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void URewardMenu_C::SetupXpCounterDisplay(int32 Level, int32 Value)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RewardMenu_C", "SetupXpCounterDisplay");

	Params::RewardMenu_C_SetupXpCounterDisplay Parms{};

	Parms.Level = Level;
	Parms.Value = Value;

	UObject::ProcessEvent(Func, &Parms);
}


// Function RewardMenu.RewardMenu_C.SetupInitialLevelData
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void URewardMenu_C::SetupInitialLevelData()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RewardMenu_C", "SetupInitialLevelData");

	UObject::ProcessEvent(Func, nullptr);
}


// Function RewardMenu.RewardMenu_C.AddPendingReward
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FRewardUIData                    RewardUIData                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)

void URewardMenu_C::AddPendingReward(const struct FRewardUIData& RewardUIData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RewardMenu_C", "AddPendingReward");

	Params::RewardMenu_C_AddPendingReward Parms{};

	Parms.RewardUIData = std::move(RewardUIData);

	UObject::ProcessEvent(Func, &Parms);
}


// Function RewardMenu.RewardMenu_C.TryStartNextProgressionAnimation
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void URewardMenu_C::TryStartNextProgressionAnimation()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RewardMenu_C", "TryStartNextProgressionAnimation");

	UObject::ProcessEvent(Func, nullptr);
}


// Function RewardMenu.RewardMenu_C.OnLevelUp
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void URewardMenu_C::OnLevelUp()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RewardMenu_C", "OnLevelUp");

	UObject::ProcessEvent(Func, nullptr);
}


// Function RewardMenu.RewardMenu_C.StartXpSound
// (Public, BlueprintCallable, BlueprintEvent)

void URewardMenu_C::StartXpSound()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RewardMenu_C", "StartXpSound");

	UObject::ProcessEvent(Func, nullptr);
}


// Function RewardMenu.RewardMenu_C.StopXpSound
// (Public, BlueprintCallable, BlueprintEvent)

void URewardMenu_C::StopXpSound()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RewardMenu_C", "StopXpSound");

	UObject::ProcessEvent(Func, nullptr);
}


// Function RewardMenu.RewardMenu_C.GetRewardWidget
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FRewardUIData                    RewardUIData                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
// class USelectableRewardWidget_C*        RewardWidget                                           (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bCreated                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void URewardMenu_C::GetRewardWidget(const struct FRewardUIData& RewardUIData, class USelectableRewardWidget_C** RewardWidget, bool* bCreated)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RewardMenu_C", "GetRewardWidget");

	Params::RewardMenu_C_GetRewardWidget Parms{};

	Parms.RewardUIData = std::move(RewardUIData);

	UObject::ProcessEvent(Func, &Parms);

	if (RewardWidget != nullptr)
		*RewardWidget = Parms.RewardWidget;

	if (bCreated != nullptr)
		*bCreated = Parms.bCreated;
}


// Function RewardMenu.RewardMenu_C.OnRewardHovered
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FRewardUIData                    Reward                                                 (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// class USelectableRewardWidget_C*        Widget                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void URewardMenu_C::OnRewardHovered(const struct FRewardUIData& Reward, class USelectableRewardWidget_C* Widget)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RewardMenu_C", "OnRewardHovered");

	Params::RewardMenu_C_OnRewardHovered Parms{};

	Parms.Reward = std::move(Reward);
	Parms.Widget = Widget;

	UObject::ProcessEvent(Func, &Parms);
}


// Function RewardMenu.RewardMenu_C.OnRewardUnhovered
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FRewardUIData                    Reward                                                 (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// class USelectableRewardWidget_C*        Widget                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void URewardMenu_C::OnRewardUnhovered(const struct FRewardUIData& Reward, class USelectableRewardWidget_C* Widget)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RewardMenu_C", "OnRewardUnhovered");

	Params::RewardMenu_C_OnRewardUnhovered Parms{};

	Parms.Reward = std::move(Reward);
	Parms.Widget = Widget;

	UObject::ProcessEvent(Func, &Parms);
}


// Function RewardMenu.RewardMenu_C.OnRewardClicked
// (Public, BlueprintCallable, BlueprintEvent)

void URewardMenu_C::OnRewardClicked()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RewardMenu_C", "OnRewardClicked");

	UObject::ProcessEvent(Func, nullptr);
}


// Function RewardMenu.RewardMenu_C.HandleRewardFocus
// (Public, BlueprintCallable, BlueprintEvent)

void URewardMenu_C::HandleRewardFocus()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RewardMenu_C", "HandleRewardFocus");

	UObject::ProcessEvent(Func, nullptr);
}


// Function RewardMenu.RewardMenu_C.SetupDescriptionText
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void URewardMenu_C::SetupDescriptionText()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RewardMenu_C", "SetupDescriptionText");

	UObject::ProcessEvent(Func, nullptr);
}


// Function RewardMenu.RewardMenu_C.SelectBackground
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void URewardMenu_C::SelectBackground()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RewardMenu_C", "SelectBackground");

	UObject::ProcessEvent(Func, nullptr);
}


// Function RewardMenu.RewardMenu_C.SetupHeaderText
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void URewardMenu_C::SetupHeaderText()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RewardMenu_C", "SetupHeaderText");

	UObject::ProcessEvent(Func, nullptr);
}


// Function RewardMenu.RewardMenu_C.OnFocusReceived
// (BlueprintCosmetic, Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry                        MyGeometry                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FFocusEvent                      InFocusEvent                                           (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FEventReply                      ReturnValue                                            (Parm, OutParm, ReturnParm)

struct FEventReply URewardMenu_C::OnFocusReceived(const struct FGeometry& MyGeometry, const struct FFocusEvent& InFocusEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RewardMenu_C", "OnFocusReceived");

	Params::RewardMenu_C_OnFocusReceived Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.InFocusEvent = std::move(InFocusEvent);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}
