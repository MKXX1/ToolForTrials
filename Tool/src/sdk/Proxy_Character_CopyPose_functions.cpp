#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Proxy_Character_CopyPose

#include "Basic.hpp"

#include "Proxy_Character_CopyPose_classes.hpp"
#include "Proxy_Character_CopyPose_parameters.hpp"


namespace SDK
{

// Function Proxy_Character_CopyPose.Proxy_Character_CopyPose_C.ExecuteUbergraph_Proxy_Character_CopyPose
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UProxy_Character_CopyPose_C::ExecuteUbergraph_Proxy_Character_CopyPose(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Proxy_Character_CopyPose_C", "ExecuteUbergraph_Proxy_Character_CopyPose");

	Params::Proxy_Character_CopyPose_C_ExecuteUbergraph_Proxy_Character_CopyPose Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Proxy_Character_CopyPose.Proxy_Character_CopyPose_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                        AnimGraph_0                                            (Parm, OutParm, NoDestructor)

void UProxy_Character_CopyPose_C::AnimGraph(struct FPoseLink* AnimGraph_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Proxy_Character_CopyPose_C", "AnimGraph");

	Params::Proxy_Character_CopyPose_C_AnimGraph Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (AnimGraph_0 != nullptr)
		*AnimGraph_0 = std::move(Parms.AnimGraph_0);
}

}
