#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: InGameMenuVariatorEntry

#include "Basic.hpp"

#include "InGameMenuVariatorEntry_classes.hpp"
#include "InGameMenuVariatorEntry_parameters.hpp"


namespace SDK
{

// Function InGameMenuVariatorEntry.InGameMenuVariatorEntry_C.OnAnimationCompleted__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UInGameMenuVariatorEntry_C::OnAnimationCompleted__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("InGameMenuVariatorEntry_C", "OnAnimationCompleted__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function InGameMenuVariatorEntry.InGameMenuVariatorEntry_C.OnEntryHovered__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                             Description                                            (BlueprintVisible, BlueprintReadOnly, Parm)

void UInGameMenuVariatorEntry_C::OnEntryHovered__DelegateSignature(const class FText& Description)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("InGameMenuVariatorEntry_C", "OnEntryHovered__DelegateSignature");

	Params::InGameMenuVariatorEntry_C_OnEntryHovered__DelegateSignature Parms{};

	Parms.Description = std::move(Description);

	UObject::ProcessEvent(Func, &Parms);
}


// Function InGameMenuVariatorEntry.InGameMenuVariatorEntry_C.OnEntryUnhovered__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UInGameMenuVariatorEntry_C::OnEntryUnhovered__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("InGameMenuVariatorEntry_C", "OnEntryUnhovered__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function InGameMenuVariatorEntry.InGameMenuVariatorEntry_C.ExecuteUbergraph_InGameMenuVariatorEntry
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UInGameMenuVariatorEntry_C::ExecuteUbergraph_InGameMenuVariatorEntry(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("InGameMenuVariatorEntry_C", "ExecuteUbergraph_InGameMenuVariatorEntry");

	Params::InGameMenuVariatorEntry_C_ExecuteUbergraph_InGameMenuVariatorEntry Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function InGameMenuVariatorEntry.InGameMenuVariatorEntry_C.BndEvt__InGameMenuVariatorEntry_Button_171_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UInGameMenuVariatorEntry_C::BndEvt__InGameMenuVariatorEntry_Button_171_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("InGameMenuVariatorEntry_C", "BndEvt__InGameMenuVariatorEntry_Button_171_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function InGameMenuVariatorEntry.InGameMenuVariatorEntry_C.BndEvt__InGameMenuVariatorEntry_Button_171_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UInGameMenuVariatorEntry_C::BndEvt__InGameMenuVariatorEntry_Button_171_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("InGameMenuVariatorEntry_C", "BndEvt__InGameMenuVariatorEntry_Button_171_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function InGameMenuVariatorEntry.InGameMenuVariatorEntry_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UInGameMenuVariatorEntry_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("InGameMenuVariatorEntry_C", "PreConstruct");

	Params::InGameMenuVariatorEntry_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function InGameMenuVariatorEntry.InGameMenuVariatorEntry_C.Refresh
// (Public, BlueprintCallable, BlueprintEvent)

void UInGameMenuVariatorEntry_C::Refresh()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("InGameMenuVariatorEntry_C", "Refresh");

	UObject::ProcessEvent(Func, nullptr);
}


// Function InGameMenuVariatorEntry.InGameMenuVariatorEntry_C.InitFromDifficulty
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// EGameDifficulty                         Difficulty                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UInGameMenuVariatorEntry_C::InitFromDifficulty(EGameDifficulty Difficulty)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("InGameMenuVariatorEntry_C", "InitFromDifficulty");

	Params::InGameMenuVariatorEntry_C_InitFromDifficulty Parms{};

	Parms.Difficulty = Difficulty;

	UObject::ProcessEvent(Func, &Parms);
}


// Function InGameMenuVariatorEntry.InGameMenuVariatorEntry_C.InitFromVariatorInfo
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class URBVariatorInfo*                  VariatorInfo                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UInGameMenuVariatorEntry_C::InitFromVariatorInfo(class URBVariatorInfo* VariatorInfo)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("InGameMenuVariatorEntry_C", "InitFromVariatorInfo");

	Params::InGameMenuVariatorEntry_C_InitFromVariatorInfo Parms{};

	Parms.VariatorInfo = VariatorInfo;

	UObject::ProcessEvent(Func, &Parms);
}

}
