#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ActiveSkillCountdown

#include "Basic.hpp"

#include "ActiveSkillCountdown_classes.hpp"
#include "ActiveSkillCountdown_parameters.hpp"


namespace SDK
{

// Function ActiveSkillCountdown.ActiveSkillCountdown_C.ExecuteUbergraph_ActiveSkillCountdown
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UActiveSkillCountdown_C::ExecuteUbergraph_ActiveSkillCountdown(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ActiveSkillCountdown_C", "ExecuteUbergraph_ActiveSkillCountdown");

	Params::ActiveSkillCountdown_C_ExecuteUbergraph_ActiveSkillCountdown Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ActiveSkillCountdown.ActiveSkillCountdown_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                        MyGeometry                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                                   InDeltaTime                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UActiveSkillCountdown_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ActiveSkillCountdown_C", "Tick");

	Params::ActiveSkillCountdown_C_Tick Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ActiveSkillCountdown.ActiveSkillCountdown_C.On AS Cooldown State Changed
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    IsInCooldown                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class ARBActiveSkill*                   NewActiveSkill                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UActiveSkillCountdown_C::On_AS_Cooldown_State_Changed(bool IsInCooldown, class ARBActiveSkill* NewActiveSkill)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ActiveSkillCountdown_C", "On AS Cooldown State Changed");

	Params::ActiveSkillCountdown_C_On_AS_Cooldown_State_Changed Parms{};

	Parms.IsInCooldown = IsInCooldown;
	Parms.NewActiveSkill = NewActiveSkill;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ActiveSkillCountdown.ActiveSkillCountdown_C.UpdateCounter
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UActiveSkillCountdown_C::UpdateCounter()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ActiveSkillCountdown_C", "UpdateCounter");

	UObject::ProcessEvent(Func, nullptr);
}

}
