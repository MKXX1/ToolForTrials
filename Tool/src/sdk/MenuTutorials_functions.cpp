#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: MenuTutorials

#include "Basic.hpp"

#include "MenuTutorials_classes.hpp"
#include "MenuTutorials_parameters.hpp"


namespace SDK
{

// Function MenuTutorials.MenuTutorials_C.ExecuteUbergraph_MenuTutorials
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMenuTutorials_C::ExecuteUbergraph_MenuTutorials(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MenuTutorials_C", "ExecuteUbergraph_MenuTutorials");

	Params::MenuTutorials_C_ExecuteUbergraph_MenuTutorials Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MenuTutorials.MenuTutorials_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UMenuTutorials_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MenuTutorials_C", "Destruct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MenuTutorials.MenuTutorials_C.OnMenuConfirm
// (BlueprintCallable, BlueprintEvent)

void UMenuTutorials_C::OnMenuConfirm()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MenuTutorials_C", "OnMenuConfirm");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MenuTutorials.MenuTutorials_C.HideMenu
// (BlueprintCallable, BlueprintEvent)

void UMenuTutorials_C::HideMenu()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MenuTutorials_C", "HideMenu");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MenuTutorials.MenuTutorials_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                        MyGeometry                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                                   InDeltaTime                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMenuTutorials_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MenuTutorials_C", "Tick");

	Params::MenuTutorials_C_Tick Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MenuTutorials.MenuTutorials_C.OnMenuOpenChanged_Event_0
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bIsOpen                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UMenuTutorials_C::OnMenuOpenChanged_Event_0(bool bIsOpen)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MenuTutorials_C", "OnMenuOpenChanged_Event_0");

	Params::MenuTutorials_C_OnMenuOpenChanged_Event_0 Parms{};

	Parms.bIsOpen = bIsOpen;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MenuTutorials.MenuTutorials_C.Event_OnPush
// (Event, Public, BlueprintEvent)

void UMenuTutorials_C::Event_OnPush()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MenuTutorials_C", "Event_OnPush");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MenuTutorials.MenuTutorials_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UMenuTutorials_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MenuTutorials_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MenuTutorials.MenuTutorials_C.Finished_FAE44480483B6DD5E75A0BA71A890721
// (BlueprintCallable, BlueprintEvent)

void UMenuTutorials_C::Finished_FAE44480483B6DD5E75A0BA71A890721()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MenuTutorials_C", "Finished_FAE44480483B6DD5E75A0BA71A890721");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MenuTutorials.MenuTutorials_C.Finished_5E4AE732454933DB073342A872BDF217
// (BlueprintCallable, BlueprintEvent)

void UMenuTutorials_C::Finished_5E4AE732454933DB073342A872BDF217()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MenuTutorials_C", "Finished_5E4AE732454933DB073342A872BDF217");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MenuTutorials.MenuTutorials_C.Initialize
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                             TutorialText                                           (BlueprintVisible, BlueprintReadOnly, Parm)
// class UWidget*                          PopUpAnchorInfo                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// EMenuPlacement                          PopupPlacement                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                          FocusAnchorInfo                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    ShowBorder                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UMenuTutorials_C::Initialize(const class FText& TutorialText, class UWidget* PopUpAnchorInfo, EMenuPlacement PopupPlacement, class UWidget* FocusAnchorInfo, bool ShowBorder)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MenuTutorials_C", "Initialize");

	Params::MenuTutorials_C_Initialize Parms{};

	Parms.TutorialText = std::move(TutorialText);
	Parms.PopUpAnchorInfo = PopUpAnchorInfo;
	Parms.PopupPlacement = PopupPlacement;
	Parms.FocusAnchorInfo = FocusAnchorInfo;
	Parms.ShowBorder = ShowBorder;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MenuTutorials.MenuTutorials_C.OnGetUserMenuContent_0
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUserWidget*                      ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class UUserWidget* UMenuTutorials_C::OnGetUserMenuContent_0()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MenuTutorials_C", "OnGetUserMenuContent_0");

	Params::MenuTutorials_C_OnGetUserMenuContent_0 Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function MenuTutorials.MenuTutorials_C.SetAnchorInfo
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                          AnchorInfo                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCanvasPanelSlot*                 Slot_0                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMenuTutorials_C::SetAnchorInfo(class UWidget* AnchorInfo, class UCanvasPanelSlot* Slot_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MenuTutorials_C", "SetAnchorInfo");

	Params::MenuTutorials_C_SetAnchorInfo Parms{};

	Parms.AnchorInfo = AnchorInfo;
	Parms.Slot_0 = Slot_0;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MenuTutorials.MenuTutorials_C.Refresh
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                             TutorialText                                           (BlueprintVisible, BlueprintReadOnly, Parm)
// class UWidget*                          PopUpAnchorInfo                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// EMenuPlacement                          PopupPlacement                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                          FocusAnchorInfo                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    ShowBorder                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UMenuTutorials_C::Refresh(const class FText& TutorialText, class UWidget* PopUpAnchorInfo, EMenuPlacement PopupPlacement, class UWidget* FocusAnchorInfo, bool ShowBorder)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MenuTutorials_C", "Refresh");

	Params::MenuTutorials_C_Refresh Parms{};

	Parms.TutorialText = std::move(TutorialText);
	Parms.PopUpAnchorInfo = PopUpAnchorInfo;
	Parms.PopupPlacement = PopupPlacement;
	Parms.FocusAnchorInfo = FocusAnchorInfo;
	Parms.ShowBorder = ShowBorder;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MenuTutorials.MenuTutorials_C.isShowingTutorial
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    IsShowingTutorial_0                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UMenuTutorials_C::IsShowingTutorial(bool* IsShowingTutorial_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MenuTutorials_C", "isShowingTutorial");

	Params::MenuTutorials_C_IsShowingTutorial Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (IsShowingTutorial_0 != nullptr)
		*IsShowingTutorial_0 = Parms.IsShowingTutorial_0;
}


// Function MenuTutorials.MenuTutorials_C.MenuTutorials_AutoGenFunc
// (Public, BlueprintCallable, BlueprintEvent)

void UMenuTutorials_C::MenuTutorials_AutoGenFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MenuTutorials_C", "MenuTutorials_AutoGenFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MenuTutorials.MenuTutorials_C.UpdateMaterialParams
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   DeltaTime                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMenuTutorials_C::UpdateMaterialParams(float DeltaTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MenuTutorials_C", "UpdateMaterialParams");

	Params::MenuTutorials_C_UpdateMaterialParams Parms{};

	Parms.DeltaTime = DeltaTime;

	UObject::ProcessEvent(Func, &Parms);
}

}
