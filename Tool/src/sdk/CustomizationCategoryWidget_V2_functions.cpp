#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: CustomizationCategoryWidget_V2

#include "Basic.hpp"

#include "CustomizationCategoryWidget_V2_classes.hpp"
#include "CustomizationCategoryWidget_V2_parameters.hpp"


namespace SDK
{

// Function CustomizationCategoryWidget_V2.CustomizationCategoryWidget_V2_C.Event_OnClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCustomizationCategoryWidget_V2_C*buttonClicked                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCustomizationCategoryWidget_V2_C::Event_OnClicked__DelegateSignature(class UCustomizationCategoryWidget_V2_C* buttonClicked)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CustomizationCategoryWidget_V2_C", "Event_OnClicked__DelegateSignature");

	Params::CustomizationCategoryWidget_V2_C_Event_OnClicked__DelegateSignature Parms{};

	Parms.buttonClicked = buttonClicked;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CustomizationCategoryWidget_V2.CustomizationCategoryWidget_V2_C.ExecuteUbergraph_CustomizationCategoryWidget_V2
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCustomizationCategoryWidget_V2_C::ExecuteUbergraph_CustomizationCategoryWidget_V2(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CustomizationCategoryWidget_V2_C", "ExecuteUbergraph_CustomizationCategoryWidget_V2");

	Params::CustomizationCategoryWidget_V2_C_ExecuteUbergraph_CustomizationCategoryWidget_V2 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CustomizationCategoryWidget_V2.CustomizationCategoryWidget_V2_C.OnButtonUnhovered
// (BlueprintCallable, BlueprintEvent)

void UCustomizationCategoryWidget_V2_C::OnButtonUnhovered()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CustomizationCategoryWidget_V2_C", "OnButtonUnhovered");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CustomizationCategoryWidget_V2.CustomizationCategoryWidget_V2_C.OnButtonHovered
// (BlueprintCallable, BlueprintEvent)

void UCustomizationCategoryWidget_V2_C::OnButtonHovered()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CustomizationCategoryWidget_V2_C", "OnButtonHovered");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CustomizationCategoryWidget_V2.CustomizationCategoryWidget_V2_C.BndEvt__CategoryButtonWidget_K2Node_ComponentBoundEvent_0_Event_OnClicked__DelegateSignature
// (BlueprintEvent)

void UCustomizationCategoryWidget_V2_C::BndEvt__CategoryButtonWidget_K2Node_ComponentBoundEvent_0_Event_OnClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CustomizationCategoryWidget_V2_C", "BndEvt__CategoryButtonWidget_K2Node_ComponentBoundEvent_0_Event_OnClicked__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CustomizationCategoryWidget_V2.CustomizationCategoryWidget_V2_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UCustomizationCategoryWidget_V2_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CustomizationCategoryWidget_V2_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CustomizationCategoryWidget_V2.CustomizationCategoryWidget_V2_C.SetSelected
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    IsSelected_0                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UCustomizationCategoryWidget_V2_C::SetSelected(bool IsSelected_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CustomizationCategoryWidget_V2_C", "SetSelected");

	Params::CustomizationCategoryWidget_V2_C_SetSelected Parms{};

	Parms.IsSelected_0 = IsSelected_0;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CustomizationCategoryWidget_V2.CustomizationCategoryWidget_V2_C.UpdateNewStatus
// (Public, BlueprintCallable, BlueprintEvent)

void UCustomizationCategoryWidget_V2_C::UpdateNewStatus()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CustomizationCategoryWidget_V2_C", "UpdateNewStatus");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CustomizationCategoryWidget_V2.CustomizationCategoryWidget_V2_C.GetToolTipWidget_0
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UWidget*                          ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class UWidget* UCustomizationCategoryWidget_V2_C::GetToolTipWidget_0()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CustomizationCategoryWidget_V2_C", "GetToolTipWidget_0");

	Params::CustomizationCategoryWidget_V2_C_GetToolTipWidget_0 Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}
