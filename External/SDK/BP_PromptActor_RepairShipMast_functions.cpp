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

// Function BP_PromptActor_RepairShipMast.BP_PromptActor_RepairShipMast_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
void ABP_PromptActor_RepairShipMast_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PromptActor_RepairShipMast.BP_PromptActor_RepairShipMast_C.UserConstructionScript");

	ABP_PromptActor_RepairShipMast_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PromptActor_RepairShipMast.BP_PromptActor_RepairShipMast_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)
void ABP_PromptActor_RepairShipMast_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PromptActor_RepairShipMast.BP_PromptActor_RepairShipMast_C.ReceiveBeginPlay");

	ABP_PromptActor_RepairShipMast_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PromptActor_RepairShipMast.BP_PromptActor_RepairShipMast_C.ReceiveEndPlay
// (Event, Public, BlueprintEvent)
// Parameters:
// TEnumAsByte<Engine_EEndPlayReason> EndPlayReason                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_PromptActor_RepairShipMast_C::ReceiveEndPlay(TEnumAsByte<Engine_EEndPlayReason> EndPlayReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PromptActor_RepairShipMast.BP_PromptActor_RepairShipMast_C.ReceiveEndPlay");

	ABP_PromptActor_RepairShipMast_C_ReceiveEndPlay_Params params;
	params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PromptActor_RepairShipMast.BP_PromptActor_RepairShipMast_C.ExecuteUbergraph_BP_PromptActor_RepairShipMast
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_PromptActor_RepairShipMast_C::ExecuteUbergraph_BP_PromptActor_RepairShipMast(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PromptActor_RepairShipMast.BP_PromptActor_RepairShipMast_C.ExecuteUbergraph_BP_PromptActor_RepairShipMast");

	ABP_PromptActor_RepairShipMast_C_ExecuteUbergraph_BP_PromptActor_RepairShipMast_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void ABP_PromptActor_RepairShipMast_C::AfterRead()
{
	ABP_PromptActorBase_C::AfterRead();

	READ_PTR_FULL(PromptCoordinator, UBP_Prompt_RepairShipMast_C);
}

void ABP_PromptActor_RepairShipMast_C::BeforeDelete()
{
	ABP_PromptActorBase_C::BeforeDelete();

	DELE_PTR_FULL(PromptCoordinator);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
