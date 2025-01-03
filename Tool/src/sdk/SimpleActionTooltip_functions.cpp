#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: SimpleActionTooltip

#include "Basic.hpp"

#include "SimpleActionTooltip_classes.hpp"
#include "SimpleActionTooltip_parameters.hpp"


namespace SDK
{

// Function SimpleActionTooltip.SimpleActionTooltip_C.ExecuteUbergraph_SimpleActionTooltip
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USimpleActionTooltip_C::ExecuteUbergraph_SimpleActionTooltip(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SimpleActionTooltip_C", "ExecuteUbergraph_SimpleActionTooltip");

	Params::SimpleActionTooltip_C_ExecuteUbergraph_SimpleActionTooltip Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function SimpleActionTooltip.SimpleActionTooltip_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void USimpleActionTooltip_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SimpleActionTooltip_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function SimpleActionTooltip.SimpleActionTooltip_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void USimpleActionTooltip_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SimpleActionTooltip_C", "PreConstruct");

	Params::SimpleActionTooltip_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function SimpleActionTooltip.SimpleActionTooltip_C.UpdateText
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                             DesiredText_0                                          (BlueprintVisible, BlueprintReadOnly, Parm)

void USimpleActionTooltip_C::UpdateText(const class FText& DesiredText_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SimpleActionTooltip_C", "UpdateText");

	Params::SimpleActionTooltip_C_UpdateText Parms{};

	Parms.DesiredText_0 = std::move(DesiredText_0);

	UObject::ProcessEvent(Func, &Parms);
}

}

