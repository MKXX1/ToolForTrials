#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: CustomizationContentWidget_V2

#include "Basic.hpp"

#include "CustomizationContentWidget_V2_classes.hpp"
#include "CustomizationContentWidget_V2_parameters.hpp"


namespace SDK
{

// Function CustomizationContentWidget_V2.CustomizationContentWidget_V2_C.OnItemPreviewed__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FUICustomizationItem             Custo_Item                                             (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)

void UCustomizationContentWidget_V2_C::OnItemPreviewed__DelegateSignature(const struct FUICustomizationItem& Custo_Item)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CustomizationContentWidget_V2_C", "OnItemPreviewed__DelegateSignature");

	Params::CustomizationContentWidget_V2_C_OnItemPreviewed__DelegateSignature Parms{};

	Parms.Custo_Item = std::move(Custo_Item);

	UObject::ProcessEvent(Func, &Parms);
}


// Function CustomizationContentWidget_V2.CustomizationContentWidget_V2_C.OnStoppedPreview__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class URBPlayerIconCustomizationOption* CustoItem                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCustomizationContentWidget_V2_C::OnStoppedPreview__DelegateSignature(class URBPlayerIconCustomizationOption* CustoItem)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CustomizationContentWidget_V2_C", "OnStoppedPreview__DelegateSignature");

	Params::CustomizationContentWidget_V2_C_OnStoppedPreview__DelegateSignature Parms{};

	Parms.CustoItem = CustoItem;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CustomizationContentWidget_V2.CustomizationContentWidget_V2_C.UpdatePaletteDisplay__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    ShouldShowPalette                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UCustomizationContentWidget_V2_C::UpdatePaletteDisplay__DelegateSignature(bool ShouldShowPalette)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CustomizationContentWidget_V2_C", "UpdatePaletteDisplay__DelegateSignature");

	Params::CustomizationContentWidget_V2_C_UpdatePaletteDisplay__DelegateSignature Parms{};

	Parms.ShouldShowPalette = ShouldShowPalette;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CustomizationContentWidget_V2.CustomizationContentWidget_V2_C.OnCategoryChangeRequested__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UCustomizationContentWidget_V2_C::OnCategoryChangeRequested__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CustomizationContentWidget_V2_C", "OnCategoryChangeRequested__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CustomizationContentWidget_V2.CustomizationContentWidget_V2_C.OnItemEquippedEvent__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FUICustomizationItem             Item                                                   (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)

void UCustomizationContentWidget_V2_C::OnItemEquippedEvent__DelegateSignature(const struct FUICustomizationItem& Item)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CustomizationContentWidget_V2_C", "OnItemEquippedEvent__DelegateSignature");

	Params::CustomizationContentWidget_V2_C_OnItemEquippedEvent__DelegateSignature Parms{};

	Parms.Item = std::move(Item);

	UObject::ProcessEvent(Func, &Parms);
}


// Function CustomizationContentWidget_V2.CustomizationContentWidget_V2_C.OnItemsAdded__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Amount                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCustomizationContentWidget_V2_C::OnItemsAdded__DelegateSignature(int32 Amount)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CustomizationContentWidget_V2_C", "OnItemsAdded__DelegateSignature");

	Params::CustomizationContentWidget_V2_C_OnItemsAdded__DelegateSignature Parms{};

	Parms.Amount = Amount;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CustomizationContentWidget_V2.CustomizationContentWidget_V2_C.OnItemHoveredEvent__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FUICustomizationItem             CustoItem                                              (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)

void UCustomizationContentWidget_V2_C::OnItemHoveredEvent__DelegateSignature(const struct FUICustomizationItem& CustoItem)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CustomizationContentWidget_V2_C", "OnItemHoveredEvent__DelegateSignature");

	Params::CustomizationContentWidget_V2_C_OnItemHoveredEvent__DelegateSignature Parms{};

	Parms.CustoItem = std::move(CustoItem);

	UObject::ProcessEvent(Func, &Parms);
}


// Function CustomizationContentWidget_V2.CustomizationContentWidget_V2_C.ExecuteUbergraph_CustomizationContentWidget_V2
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCustomizationContentWidget_V2_C::ExecuteUbergraph_CustomizationContentWidget_V2(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CustomizationContentWidget_V2_C", "ExecuteUbergraph_CustomizationContentWidget_V2");

	Params::CustomizationContentWidget_V2_C_ExecuteUbergraph_CustomizationContentWidget_V2 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CustomizationContentWidget_V2.CustomizationContentWidget_V2_C.SetupBindings
// (BlueprintCallable, BlueprintEvent)

void UCustomizationContentWidget_V2_C::SetupBindings()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CustomizationContentWidget_V2_C", "SetupBindings");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CustomizationContentWidget_V2.CustomizationContentWidget_V2_C.OnCycleSorting
// (BlueprintCallable, BlueprintEvent)

void UCustomizationContentWidget_V2_C::OnCycleSorting()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CustomizationContentWidget_V2_C", "OnCycleSorting");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CustomizationContentWidget_V2.CustomizationContentWidget_V2_C.CycleCategoriesLeft
// (BlueprintCallable, BlueprintEvent)

void UCustomizationContentWidget_V2_C::CycleCategoriesLeft()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CustomizationContentWidget_V2_C", "CycleCategoriesLeft");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CustomizationContentWidget_V2.CustomizationContentWidget_V2_C.CycleCategoriesRight
// (BlueprintCallable, BlueprintEvent)

void UCustomizationContentWidget_V2_C::CycleCategoriesRight()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CustomizationContentWidget_V2_C", "CycleCategoriesRight");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CustomizationContentWidget_V2.CustomizationContentWidget_V2_C.OnChangeFocusRequested
// (BlueprintCallable, BlueprintEvent)

void UCustomizationContentWidget_V2_C::OnChangeFocusRequested()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CustomizationContentWidget_V2_C", "OnChangeFocusRequested");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CustomizationContentWidget_V2.CustomizationContentWidget_V2_C.Setup
// (BlueprintCallable, BlueprintEvent)

void UCustomizationContentWidget_V2_C::Setup()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CustomizationContentWidget_V2_C", "Setup");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CustomizationContentWidget_V2.CustomizationContentWidget_V2_C.Event_OnSortingCycled
// (Event, Public, BlueprintEvent)

void UCustomizationContentWidget_V2_C::Event_OnSortingCycled()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CustomizationContentWidget_V2_C", "Event_OnSortingCycled");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CustomizationContentWidget_V2.CustomizationContentWidget_V2_C.OnSortingButtonClicked
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class URBMenuButton_C*                  Button                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCustomizationContentWidget_V2_C::OnSortingButtonClicked(class URBMenuButton_C* Button)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CustomizationContentWidget_V2_C", "OnSortingButtonClicked");

	Params::CustomizationContentWidget_V2_C_OnSortingButtonClicked Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CustomizationContentWidget_V2.CustomizationContentWidget_V2_C.ResetPreview
// (BlueprintCallable, BlueprintEvent)

void UCustomizationContentWidget_V2_C::ResetPreview()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CustomizationContentWidget_V2_C", "ResetPreview");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CustomizationContentWidget_V2.CustomizationContentWidget_V2_C.UpdatePageSpecificButtons
// (BlueprintCallable, BlueprintEvent)

void UCustomizationContentWidget_V2_C::UpdatePageSpecificButtons()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CustomizationContentWidget_V2_C", "UpdatePageSpecificButtons");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CustomizationContentWidget_V2.CustomizationContentWidget_V2_C.OnInputSourceChanged
// (BlueprintCallable, BlueprintEvent)

void UCustomizationContentWidget_V2_C::OnInputSourceChanged()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CustomizationContentWidget_V2_C", "OnInputSourceChanged");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CustomizationContentWidget_V2.CustomizationContentWidget_V2_C.Event_CycleFocus
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class URBMenuButton_C*                  Button                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCustomizationContentWidget_V2_C::Event_CycleFocus(class URBMenuButton_C* Button)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CustomizationContentWidget_V2_C", "Event_CycleFocus");

	Params::CustomizationContentWidget_V2_C_Event_CycleFocus Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CustomizationContentWidget_V2.CustomizationContentWidget_V2_C.Event_RefreshItemInfos
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// TArray<struct FUICustomizationItem>     Items                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UCustomizationContentWidget_V2_C::Event_RefreshItemInfos(const TArray<struct FUICustomizationItem>& Items)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CustomizationContentWidget_V2_C", "Event_RefreshItemInfos");

	Params::CustomizationContentWidget_V2_C_Event_RefreshItemInfos Parms{};

	Parms.Items = std::move(Items);

	UObject::ProcessEvent(Func, &Parms);
}


// Function CustomizationContentWidget_V2.CustomizationContentWidget_V2_C.Event_PlayerCustomizationUpdated
// (Event, Public, BlueprintEvent)

void UCustomizationContentWidget_V2_C::Event_PlayerCustomizationUpdated()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CustomizationContentWidget_V2_C", "Event_PlayerCustomizationUpdated");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CustomizationContentWidget_V2.CustomizationContentWidget_V2_C.StartTransition
// (BlueprintCallable, BlueprintEvent)

void UCustomizationContentWidget_V2_C::StartTransition()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CustomizationContentWidget_V2_C", "StartTransition");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CustomizationContentWidget_V2.CustomizationContentWidget_V2_C.EventOnItemReleased_Event_0
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FUICustomizationItem             Item                                                   (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)

void UCustomizationContentWidget_V2_C::EventOnItemReleased_Event_0(const struct FUICustomizationItem& Item)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CustomizationContentWidget_V2_C", "EventOnItemReleased_Event_0");

	Params::CustomizationContentWidget_V2_C_EventOnItemReleased_Event_0 Parms{};

	Parms.Item = std::move(Item);

	UObject::ProcessEvent(Func, &Parms);
}


// Function CustomizationContentWidget_V2.CustomizationContentWidget_V2_C.EventOnItemPressed_Event_0
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FUICustomizationItem             Item                                                   (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)

void UCustomizationContentWidget_V2_C::EventOnItemPressed_Event_0(const struct FUICustomizationItem& Item)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CustomizationContentWidget_V2_C", "EventOnItemPressed_Event_0");

	Params::CustomizationContentWidget_V2_C_EventOnItemPressed_Event_0 Parms{};

	Parms.Item = std::move(Item);

	UObject::ProcessEvent(Func, &Parms);
}


// Function CustomizationContentWidget_V2.CustomizationContentWidget_V2_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UCustomizationContentWidget_V2_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CustomizationContentWidget_V2_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CustomizationContentWidget_V2.CustomizationContentWidget_V2_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UCustomizationContentWidget_V2_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CustomizationContentWidget_V2_C", "Destruct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CustomizationContentWidget_V2.CustomizationContentWidget_V2_C.Event OnItemClicked
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FUICustomizationItem             Item                                                   (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)

void UCustomizationContentWidget_V2_C::Event_OnItemClicked(const struct FUICustomizationItem& Item)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CustomizationContentWidget_V2_C", "Event OnItemClicked");

	Params::CustomizationContentWidget_V2_C_Event_OnItemClicked Parms{};

	Parms.Item = std::move(Item);

	UObject::ProcessEvent(Func, &Parms);
}


// Function CustomizationContentWidget_V2.CustomizationContentWidget_V2_C.Event_AddCustomizationItems
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// TArray<struct FUICustomizationItem>     Items                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UCustomizationContentWidget_V2_C::Event_AddCustomizationItems(const TArray<struct FUICustomizationItem>& Items)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CustomizationContentWidget_V2_C", "Event_AddCustomizationItems");

	Params::CustomizationContentWidget_V2_C_Event_AddCustomizationItems Parms{};

	Parms.Items = std::move(Items);

	UObject::ProcessEvent(Func, &Parms);
}


// Function CustomizationContentWidget_V2.CustomizationContentWidget_V2_C.Event_LoadingStarted
// (Event, Public, BlueprintEvent)

void UCustomizationContentWidget_V2_C::Event_LoadingStarted()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CustomizationContentWidget_V2_C", "Event_LoadingStarted");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CustomizationContentWidget_V2.CustomizationContentWidget_V2_C.RotateButtonReleased
// (BlueprintCallable, BlueprintEvent)

void UCustomizationContentWidget_V2_C::RotateButtonReleased()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CustomizationContentWidget_V2_C", "RotateButtonReleased");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CustomizationContentWidget_V2.CustomizationContentWidget_V2_C.RotateButtonPressed
// (BlueprintCallable, BlueprintEvent)

void UCustomizationContentWidget_V2_C::RotateButtonPressed()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CustomizationContentWidget_V2_C", "RotateButtonPressed");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CustomizationContentWidget_V2.CustomizationContentWidget_V2_C.Initialize
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    IsTutorial                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class AMenuCharacter_C*                 _MenuCharacter                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                           ViewerReturnTarget                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACellCustomizationCameraActor_C*  CellCustomizationActor_0                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCustomizationContentWidget_V2_C::Initialize(bool IsTutorial, class AMenuCharacter_C* _MenuCharacter, class AActor* ViewerReturnTarget, class ACellCustomizationCameraActor_C* CellCustomizationActor_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CustomizationContentWidget_V2_C", "Initialize");

	Params::CustomizationContentWidget_V2_C_Initialize Parms{};

	Parms.IsTutorial = IsTutorial;
	Parms._MenuCharacter = _MenuCharacter;
	Parms.ViewerReturnTarget = ViewerReturnTarget;
	Parms.CellCustomizationActor_0 = CellCustomizationActor_0;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CustomizationContentWidget_V2.CustomizationContentWidget_V2_C.RotateViewer
// (BlueprintCallable, BlueprintEvent)

void UCustomizationContentWidget_V2_C::RotateViewer()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CustomizationContentWidget_V2_C", "RotateViewer");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CustomizationContentWidget_V2.CustomizationContentWidget_V2_C.Finished_21144A754E101553B7E45DA67E7780FE
// (BlueprintCallable, BlueprintEvent)

void UCustomizationContentWidget_V2_C::Finished_21144A754E101553B7E45DA67E7780FE()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CustomizationContentWidget_V2_C", "Finished_21144A754E101553B7E45DA67E7780FE");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CustomizationContentWidget_V2.CustomizationContentWidget_V2_C.OnItemHovered
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FUICustomizationItem             CustoItem                                              (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)

void UCustomizationContentWidget_V2_C::OnItemHovered(const struct FUICustomizationItem& CustoItem)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CustomizationContentWidget_V2_C", "OnItemHovered");

	Params::CustomizationContentWidget_V2_C_OnItemHovered Parms{};

	Parms.CustoItem = std::move(CustoItem);

	UObject::ProcessEvent(Func, &Parms);
}


// Function CustomizationContentWidget_V2.CustomizationContentWidget_V2_C.OnItemUnhovered
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FUICustomizationItem             CustoItem                                              (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)

void UCustomizationContentWidget_V2_C::OnItemUnhovered(const struct FUICustomizationItem& CustoItem)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CustomizationContentWidget_V2_C", "OnItemUnhovered");

	Params::CustomizationContentWidget_V2_C_OnItemUnhovered Parms{};

	Parms.CustoItem = std::move(CustoItem);

	UObject::ProcessEvent(Func, &Parms);
}


// Function CustomizationContentWidget_V2.CustomizationContentWidget_V2_C.OnCategoryClicked
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// ECustomizationMenuCategory              CustoCategory                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCustomizationContentWidget_V2_C::OnCategoryClicked(ECustomizationMenuCategory CustoCategory)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CustomizationContentWidget_V2_C", "OnCategoryClicked");

	Params::CustomizationContentWidget_V2_C_OnCategoryClicked Parms{};

	Parms.CustoCategory = CustoCategory;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CustomizationContentWidget_V2.CustomizationContentWidget_V2_C.ChangeCategory
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// ECustomizationMenuCategory              CustoCategory                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCustomizationContentWidget_V2_C::ChangeCategory(ECustomizationMenuCategory CustoCategory)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CustomizationContentWidget_V2_C", "ChangeCategory");

	Params::CustomizationContentWidget_V2_C_ChangeCategory Parms{};

	Parms.CustoCategory = CustoCategory;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CustomizationContentWidget_V2.CustomizationContentWidget_V2_C.AddCustomizationItems
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FUICustomizationItem>     Items                                                  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UCustomizationContentWidget_V2_C::AddCustomizationItems(TArray<struct FUICustomizationItem>& Items)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CustomizationContentWidget_V2_C", "AddCustomizationItems");

	Params::CustomizationContentWidget_V2_C_AddCustomizationItems Parms{};

	Parms.Items = std::move(Items);

	UObject::ProcessEvent(Func, &Parms);

	Items = std::move(Parms.Items);
}


// Function CustomizationContentWidget_V2.CustomizationContentWidget_V2_C.AddCategoriesItems
// (Public, BlueprintCallable, BlueprintEvent)

void UCustomizationContentWidget_V2_C::AddCategoriesItems()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CustomizationContentWidget_V2_C", "AddCategoriesItems");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CustomizationContentWidget_V2.CustomizationContentWidget_V2_C.PlayPreviewVoiceline
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class URBVoiceCustomizationOption*      VoiceOption                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCustomizationContentWidget_V2_C::PlayPreviewVoiceline(class URBVoiceCustomizationOption* VoiceOption)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CustomizationContentWidget_V2_C", "PlayPreviewVoiceline");

	Params::CustomizationContentWidget_V2_C_PlayPreviewVoiceline Parms{};

	Parms.VoiceOption = VoiceOption;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CustomizationContentWidget_V2.CustomizationContentWidget_V2_C.Event_ItemEquipped
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FUICustomizationItem             Item                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)

void UCustomizationContentWidget_V2_C::Event_ItemEquipped(const struct FUICustomizationItem& Item)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CustomizationContentWidget_V2_C", "Event_ItemEquipped");

	Params::CustomizationContentWidget_V2_C_Event_ItemEquipped Parms{};

	Parms.Item = std::move(Item);

	UObject::ProcessEvent(Func, &Parms);
}


// Function CustomizationContentWidget_V2.CustomizationContentWidget_V2_C.CycleFocus
// (Public, BlueprintCallable, BlueprintEvent)

void UCustomizationContentWidget_V2_C::CycleFocus()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CustomizationContentWidget_V2_C", "CycleFocus");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CustomizationContentWidget_V2.CustomizationContentWidget_V2_C.UpdateCategories
// (Public, BlueprintCallable, BlueprintEvent)

void UCustomizationContentWidget_V2_C::UpdateCategories()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CustomizationContentWidget_V2_C", "UpdateCategories");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CustomizationContentWidget_V2.CustomizationContentWidget_V2_C.PreviewCellItem
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// ECustomizationMenuCategory              Category                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class URBPlayerCellItemDefinition*      ItemDefinition                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCustomizationContentWidget_V2_C::PreviewCellItem(ECustomizationMenuCategory Category, class URBPlayerCellItemDefinition* ItemDefinition)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CustomizationContentWidget_V2_C", "PreviewCellItem");

	Params::CustomizationContentWidget_V2_C_PreviewCellItem Parms{};

	Parms.Category = Category;
	Parms.ItemDefinition = ItemDefinition;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CustomizationContentWidget_V2.CustomizationContentWidget_V2_C.GetCellCustomizationActor
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class ACellCustomizationCameraActor_C*  NewParam                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCustomizationContentWidget_V2_C::GetCellCustomizationActor(class ACellCustomizationCameraActor_C** NewParam)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CustomizationContentWidget_V2_C", "GetCellCustomizationActor");

	Params::CustomizationContentWidget_V2_C_GetCellCustomizationActor Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (NewParam != nullptr)
		*NewParam = Parms.NewParam;
}


// Function CustomizationContentWidget_V2.CustomizationContentWidget_V2_C.CycleCategories
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    CycleRight                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UCustomizationContentWidget_V2_C::CycleCategories(bool CycleRight)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CustomizationContentWidget_V2_C", "CycleCategories");

	Params::CustomizationContentWidget_V2_C_CycleCategories Parms{};

	Parms.CycleRight = CycleRight;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CustomizationContentWidget_V2.CustomizationContentWidget_V2_C.TransmitFocusToCustoOption
// (Public, BlueprintCallable, BlueprintEvent)

void UCustomizationContentWidget_V2_C::TransmitFocusToCustoOption()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CustomizationContentWidget_V2_C", "TransmitFocusToCustoOption");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CustomizationContentWidget_V2.CustomizationContentWidget_V2_C.OnFocusReceived
// (BlueprintCosmetic, Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry                        MyGeometry                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FFocusEvent                      InFocusEvent                                           (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FEventReply                      ReturnValue                                            (Parm, OutParm, ReturnParm)

struct FEventReply UCustomizationContentWidget_V2_C::OnFocusReceived(const struct FGeometry& MyGeometry, const struct FFocusEvent& InFocusEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CustomizationContentWidget_V2_C", "OnFocusReceived");

	Params::CustomizationContentWidget_V2_C_OnFocusReceived Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.InFocusEvent = std::move(InFocusEvent);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function CustomizationContentWidget_V2.CustomizationContentWidget_V2_C.RefreshBoughtItem
// (Public, BlueprintCallable, BlueprintEvent)

void UCustomizationContentWidget_V2_C::RefreshBoughtItem()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CustomizationContentWidget_V2_C", "RefreshBoughtItem");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CustomizationContentWidget_V2.CustomizationContentWidget_V2_C.NotifyMenuCharacterCategoryClicked
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// ECustomizationMenuCategory              Category                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCustomizationContentWidget_V2_C::NotifyMenuCharacterCategoryClicked(ECustomizationMenuCategory Category)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CustomizationContentWidget_V2_C", "NotifyMenuCharacterCategoryClicked");

	Params::CustomizationContentWidget_V2_C_NotifyMenuCharacterCategoryClicked Parms{};

	Parms.Category = Category;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CustomizationContentWidget_V2.CustomizationContentWidget_V2_C.SetMenuCharacterCusto
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FRBPlayerCustomizationInfo       Custo                                                  (BlueprintVisible, BlueprintReadOnly, Parm)

void UCustomizationContentWidget_V2_C::SetMenuCharacterCusto(const struct FRBPlayerCustomizationInfo& Custo)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CustomizationContentWidget_V2_C", "SetMenuCharacterCusto");

	Params::CustomizationContentWidget_V2_C_SetMenuCharacterCusto Parms{};

	Parms.Custo = std::move(Custo);

	UObject::ProcessEvent(Func, &Parms);
}


// Function CustomizationContentWidget_V2.CustomizationContentWidget_V2_C.Event_ItemBought
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FUICustomizationItem             Item                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)

void UCustomizationContentWidget_V2_C::Event_ItemBought(const struct FUICustomizationItem& Item)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CustomizationContentWidget_V2_C", "Event_ItemBought");

	Params::CustomizationContentWidget_V2_C_Event_ItemBought Parms{};

	Parms.Item = std::move(Item);

	UObject::ProcessEvent(Func, &Parms);
}


// Function CustomizationContentWidget_V2.CustomizationContentWidget_V2_C.UpdateSortingButton
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UCustomizationContentWidget_V2_C::UpdateSortingButton()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CustomizationContentWidget_V2_C", "UpdateSortingButton");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CustomizationContentWidget_V2.CustomizationContentWidget_V2_C.GetPageButtons
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UUserWidget*>              OutButtons                                             (Parm, OutParm, ContainsInstancedReference)

void UCustomizationContentWidget_V2_C::GetPageButtons(TArray<class UUserWidget*>* OutButtons)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CustomizationContentWidget_V2_C", "GetPageButtons");

	Params::CustomizationContentWidget_V2_C_GetPageButtons Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (OutButtons != nullptr)
		*OutButtons = std::move(Parms.OutButtons);
}

}
