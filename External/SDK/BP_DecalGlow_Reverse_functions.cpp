﻿// Name: SoT, Version: 2.2.0.2

#include "../pch.h"

/*!!DEFINE!!*/

/*!!HELPER_DEF!!*/

/*!!HELPER_INC!!*/

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function BP_DecalGlow_Reverse.BP_DecalGlow_Reverse_C.StartGlowEffect
// (Public, BlueprintCallable, BlueprintEvent)
void ABP_DecalGlow_Reverse_C::StartGlowEffect()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DecalGlow_Reverse.BP_DecalGlow_Reverse_C.StartGlowEffect");

	ABP_DecalGlow_Reverse_C_StartGlowEffect_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_DecalGlow_Reverse.BP_DecalGlow_Reverse_C.StartReaction
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool ABP_DecalGlow_Reverse_C::StartReaction()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DecalGlow_Reverse.BP_DecalGlow_Reverse_C.StartReaction");

	ABP_DecalGlow_Reverse_C_StartReaction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function BP_DecalGlow_Reverse.BP_DecalGlow_Reverse_C.StopReaction
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool ABP_DecalGlow_Reverse_C::StopReaction()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DecalGlow_Reverse.BP_DecalGlow_Reverse_C.StopReaction");

	ABP_DecalGlow_Reverse_C_StopReaction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function BP_DecalGlow_Reverse.BP_DecalGlow_Reverse_C.CollectDecalMaterials
// (Public, BlueprintCallable, BlueprintEvent)
void ABP_DecalGlow_Reverse_C::CollectDecalMaterials()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DecalGlow_Reverse.BP_DecalGlow_Reverse_C.CollectDecalMaterials");

	ABP_DecalGlow_Reverse_C_CollectDecalMaterials_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_DecalGlow_Reverse.BP_DecalGlow_Reverse_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
void ABP_DecalGlow_Reverse_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DecalGlow_Reverse.BP_DecalGlow_Reverse_C.UserConstructionScript");

	ABP_DecalGlow_Reverse_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_DecalGlow_Reverse.BP_DecalGlow_Reverse_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)
void ABP_DecalGlow_Reverse_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DecalGlow_Reverse.BP_DecalGlow_Reverse_C.ReceiveBeginPlay");

	ABP_DecalGlow_Reverse_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_DecalGlow_Reverse.BP_DecalGlow_Reverse_C.ExecuteUbergraph_BP_DecalGlow_Reverse
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_DecalGlow_Reverse_C::ExecuteUbergraph_BP_DecalGlow_Reverse(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DecalGlow_Reverse.BP_DecalGlow_Reverse_C.ExecuteUbergraph_BP_DecalGlow_Reverse");

	ABP_DecalGlow_Reverse_C_ExecuteUbergraph_BP_DecalGlow_Reverse_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void ABP_DecalGlow_Reverse_C::AfterRead()
{
	ALandmarkReactionActor::AfterRead();

	READ_PTR_FULL(DefaultSceneRoot, USceneComponent);
	READ_PTR_FULL(StepsTriggerActor, ABP_StepsTrigger_C);
	READ_PTR_FULL(StarterActor, ABP_DecalGlow_Longer_C);
}

void ABP_DecalGlow_Reverse_C::BeforeDelete()
{
	ALandmarkReactionActor::BeforeDelete();

	DELE_PTR_FULL(DefaultSceneRoot);
	DELE_PTR_FULL(StepsTriggerActor);
	DELE_PTR_FULL(StarterActor);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
