#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: CustomizationItemGrid

#include "Basic.hpp"

#include "CustomizationItemGrid_classes.hpp"
#include "CustomizationItemGrid_parameters.hpp"


namespace SDK
{

// Function CustomizationItemGrid.CustomizationItemGrid_C.EventOnItemClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FUICustomizationItem             Item                                                   (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)

void UCustomizationItemGrid_C::EventOnItemClicked__DelegateSignature(const struct FUICustomizationItem& Item)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CustomizationItemGrid_C", "EventOnItemClicked__DelegateSignature");

	Params::CustomizationItemGrid_C_EventOnItemClicked__DelegateSignature Parms{};

	Parms.Item = std::move(Item);

	UObject::ProcessEvent(Func, &Parms);
}


// Function CustomizationItemGrid.CustomizationItemGrid_C.EventOnItemHovered__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FUICustomizationItem             Item                                                   (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)

void UCustomizationItemGrid_C::EventOnItemHovered__DelegateSignature(const struct FUICustomizationItem& Item)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CustomizationItemGrid_C", "EventOnItemHovered__DelegateSignature");

	Params::CustomizationItemGrid_C_EventOnItemHovered__DelegateSignature Parms{};

	Parms.Item = std::move(Item);

	UObject::ProcessEvent(Func, &Parms);
}


// Function CustomizationItemGrid.CustomizationItemGrid_C.EventOnItemUnhovered__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FUICustomizationItem             Item                                                   (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)

void UCustomizationItemGrid_C::EventOnItemUnhovered__DelegateSignature(const struct FUICustomizationItem& Item)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CustomizationItemGrid_C", "EventOnItemUnhovered__DelegateSignature");

	Params::CustomizationItemGrid_C_EventOnItemUnhovered__DelegateSignature Parms{};

	Parms.Item = std::move(Item);

	UObject::ProcessEvent(Func, &Parms);
}


// Function CustomizationItemGrid.CustomizationItemGrid_C.EventOnItemPressed__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FUICustomizationItem             Item                                                   (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)

void UCustomizationItemGrid_C::EventOnItemPressed__DelegateSignature(const struct FUICustomizationItem& Item)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CustomizationItemGrid_C", "EventOnItemPressed__DelegateSignature");

	Params::CustomizationItemGrid_C_EventOnItemPressed__DelegateSignature Parms{};

	Parms.Item = std::move(Item);

	UObject::ProcessEvent(Func, &Parms);
}


// Function CustomizationItemGrid.CustomizationItemGrid_C.EventOnItemReleased__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FUICustomizationItem             Item                                                   (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)

void UCustomizationItemGrid_C::EventOnItemReleased__DelegateSignature(const struct FUICustomizationItem& Item)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CustomizationItemGrid_C", "EventOnItemReleased__DelegateSignature");

	Params::CustomizationItemGrid_C_EventOnItemReleased__DelegateSignature Parms{};

	Parms.Item = std::move(Item);

	UObject::ProcessEvent(Func, &Parms);
}


// Function CustomizationItemGrid.CustomizationItemGrid_C.ExecuteUbergraph_CustomizationItemGrid
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCustomizationItemGrid_C::ExecuteUbergraph_CustomizationItemGrid(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CustomizationItemGrid_C", "ExecuteUbergraph_CustomizationItemGrid");

	Params::CustomizationItemGrid_C_ExecuteUbergraph_CustomizationItemGrid Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CustomizationItemGrid.CustomizationItemGrid_C.Event_InputSourceChanged
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                                    bIsGamepad                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UCustomizationItemGrid_C::Event_InputSourceChanged(bool bIsGamepad)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CustomizationItemGrid_C", "Event_InputSourceChanged");

	Params::CustomizationItemGrid_C_Event_InputSourceChanged Parms{};

	Parms.bIsGamepad = bIsGamepad;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CustomizationItemGrid.CustomizationItemGrid_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UCustomizationItemGrid_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CustomizationItemGrid_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CustomizationItemGrid.CustomizationItemGrid_C.SetEquippedOptionWidget
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCustomizationOptionThumbnail_C*  Widget                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCustomizationItemGrid_C::SetEquippedOptionWidget(class UCustomizationOptionThumbnail_C* Widget)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CustomizationItemGrid_C", "SetEquippedOptionWidget");

	Params::CustomizationItemGrid_C_SetEquippedOptionWidget Parms{};

	Parms.Widget = Widget;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CustomizationItemGrid.CustomizationItemGrid_C.GetLastEmptyItemIndex
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                                   Index_0                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCustomizationItemGrid_C::GetLastEmptyItemIndex(int32* Index_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CustomizationItemGrid_C", "GetLastEmptyItemIndex");

	Params::CustomizationItemGrid_C_GetLastEmptyItemIndex Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Index_0 != nullptr)
		*Index_0 = Parms.Index_0;
}


// Function CustomizationItemGrid.CustomizationItemGrid_C.ManageEmptyThumbnails
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UCustomizationItemGrid_C::ManageEmptyThumbnails()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CustomizationItemGrid_C", "ManageEmptyThumbnails");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CustomizationItemGrid.CustomizationItemGrid_C.RefreshItemInfos
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FUICustomizationItem>     Items                                                  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UCustomizationItemGrid_C::RefreshItemInfos(TArray<struct FUICustomizationItem>& Items)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CustomizationItemGrid_C", "RefreshItemInfos");

	Params::CustomizationItemGrid_C_RefreshItemInfos Parms{};

	Parms.Items = std::move(Items);

	UObject::ProcessEvent(Func, &Parms);

	Items = std::move(Parms.Items);
}


// Function CustomizationItemGrid.CustomizationItemGrid_C.OnItemClicked
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCustomizationOptionThumbnail_C*  Widget                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCustomizationItemGrid_C::OnItemClicked(class UCustomizationOptionThumbnail_C* Widget)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CustomizationItemGrid_C", "OnItemClicked");

	Params::CustomizationItemGrid_C_OnItemClicked Parms{};

	Parms.Widget = Widget;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CustomizationItemGrid.CustomizationItemGrid_C.OnItemHovered
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCustomizationOptionThumbnail_C*  Widget                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCustomizationItemGrid_C::OnItemHovered(class UCustomizationOptionThumbnail_C* Widget)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CustomizationItemGrid_C", "OnItemHovered");

	Params::CustomizationItemGrid_C_OnItemHovered Parms{};

	Parms.Widget = Widget;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CustomizationItemGrid.CustomizationItemGrid_C.OnItemUnhovered
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCustomizationOptionThumbnail_C*  Widget                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCustomizationItemGrid_C::OnItemUnhovered(class UCustomizationOptionThumbnail_C* Widget)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CustomizationItemGrid_C", "OnItemUnhovered");

	Params::CustomizationItemGrid_C_OnItemUnhovered Parms{};

	Parms.Widget = Widget;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CustomizationItemGrid.CustomizationItemGrid_C.OnItemPressed
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCustomizationOptionThumbnail_C*  Button                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCustomizationItemGrid_C::OnItemPressed(class UCustomizationOptionThumbnail_C* Button)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CustomizationItemGrid_C", "OnItemPressed");

	Params::CustomizationItemGrid_C_OnItemPressed Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CustomizationItemGrid.CustomizationItemGrid_C.OnItemReleased
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCustomizationOptionThumbnail_C*  Button                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCustomizationItemGrid_C::OnItemReleased(class UCustomizationOptionThumbnail_C* Button)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CustomizationItemGrid_C", "OnItemReleased");

	Params::CustomizationItemGrid_C_OnItemReleased Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CustomizationItemGrid.CustomizationItemGrid_C.AddItems
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FUICustomizationItem>     Items                                                  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// ECustomizationMenuCategory              Category_0                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCustomizationItemGrid_C::AddItems(TArray<struct FUICustomizationItem>& Items, ECustomizationMenuCategory Category_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CustomizationItemGrid_C", "AddItems");

	Params::CustomizationItemGrid_C_AddItems Parms{};

	Parms.Items = std::move(Items);
	Parms.Category_0 = Category_0;

	UObject::ProcessEvent(Func, &Parms);

	Items = std::move(Parms.Items);
}


// Function CustomizationItemGrid.CustomizationItemGrid_C.GamepadNav_HandleGridNavigation
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// EUINavigation                           Navigation_0                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                          ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class UWidget* UCustomizationItemGrid_C::GamepadNav_HandleGridNavigation(EUINavigation Navigation_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CustomizationItemGrid_C", "GamepadNav_HandleGridNavigation");

	Params::CustomizationItemGrid_C_GamepadNav_HandleGridNavigation Parms{};

	Parms.Navigation_0 = Navigation_0;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function CustomizationItemGrid.CustomizationItemGrid_C.TryUpdateEquippedOptionWidget
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCustomizationOptionThumbnail_C*  New_Option                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCustomizationItemGrid_C::TryUpdateEquippedOptionWidget(class UCustomizationOptionThumbnail_C* New_Option)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CustomizationItemGrid_C", "TryUpdateEquippedOptionWidget");

	Params::CustomizationItemGrid_C_TryUpdateEquippedOptionWidget Parms{};

	Parms.New_Option = New_Option;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CustomizationItemGrid.CustomizationItemGrid_C.OnItemEquipped
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FUICustomizationItem             New_Equipped_Item                                      (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)

void UCustomizationItemGrid_C::OnItemEquipped(struct FUICustomizationItem& New_Equipped_Item)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CustomizationItemGrid_C", "OnItemEquipped");

	Params::CustomizationItemGrid_C_OnItemEquipped Parms{};

	Parms.New_Equipped_Item = std::move(New_Equipped_Item);

	UObject::ProcessEvent(Func, &Parms);

	New_Equipped_Item = std::move(Parms.New_Equipped_Item);
}


// Function CustomizationItemGrid.CustomizationItemGrid_C.OnItemBought
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FUICustomizationItem             ItemBought                                             (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)

void UCustomizationItemGrid_C::OnItemBought(struct FUICustomizationItem& ItemBought)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CustomizationItemGrid_C", "OnItemBought");

	Params::CustomizationItemGrid_C_OnItemBought Parms{};

	Parms.ItemBought = std::move(ItemBought);

	UObject::ProcessEvent(Func, &Parms);

	ItemBought = std::move(Parms.ItemBought);
}


// Function CustomizationItemGrid.CustomizationItemGrid_C.GetThumbnailWidget
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCustomizationOptionThumbnail_C*  Thumbnail                                              (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCustomizationItemGrid_C::GetThumbnailWidget(class UCustomizationOptionThumbnail_C** Thumbnail)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CustomizationItemGrid_C", "GetThumbnailWidget");

	Params::CustomizationItemGrid_C_GetThumbnailWidget Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Thumbnail != nullptr)
		*Thumbnail = Parms.Thumbnail;
}


// Function CustomizationItemGrid.CustomizationItemGrid_C.OnInputSourceChanged
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bIsGamepad                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UCustomizationItemGrid_C::OnInputSourceChanged(bool bIsGamepad)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CustomizationItemGrid_C", "OnInputSourceChanged");

	Params::CustomizationItemGrid_C_OnInputSourceChanged Parms{};

	Parms.bIsGamepad = bIsGamepad;

	UObject::ProcessEvent(Func, &Parms);
}

}
