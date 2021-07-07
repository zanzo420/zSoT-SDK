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

// Function BP_audio_wpn_shop_bsp.BP_audio_wpn_shop_bsp_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
void ABP_audio_wpn_shop_bsp_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_audio_wpn_shop_bsp.BP_audio_wpn_shop_bsp_C.UserConstructionScript");

	ABP_audio_wpn_shop_bsp_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_audio_wpn_shop_bsp.BP_audio_wpn_shop_bsp_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)
void ABP_audio_wpn_shop_bsp_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_audio_wpn_shop_bsp.BP_audio_wpn_shop_bsp_C.ReceiveBeginPlay");

	ABP_audio_wpn_shop_bsp_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_audio_wpn_shop_bsp.BP_audio_wpn_shop_bsp_C.ExecuteUbergraph_BP_audio_wpn_shop_bsp
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_audio_wpn_shop_bsp_C::ExecuteUbergraph_BP_audio_wpn_shop_bsp(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_audio_wpn_shop_bsp.BP_audio_wpn_shop_bsp_C.ExecuteUbergraph_BP_audio_wpn_shop_bsp");

	ABP_audio_wpn_shop_bsp_C_ExecuteUbergraph_BP_audio_wpn_shop_bsp_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void ABP_audio_wpn_shop_bsp_C::AfterRead()
{
	AActor::AfterRead();

	READ_PTR_FULL(Triton, UTritonComponent);
	READ_PTR_FULL(AudioPortal, UAudioPortalComponent);
	READ_PTR_FULL(WwiseEmitter, UWwiseEmitterComponent);
	READ_PTR_FULL(AudioSpace, UAudioSpaceComponent);
	READ_PTR_FULL(Scene, USceneComponent);
}

void ABP_audio_wpn_shop_bsp_C::BeforeDelete()
{
	AActor::BeforeDelete();

	DELE_PTR_FULL(Triton);
	DELE_PTR_FULL(AudioPortal);
	DELE_PTR_FULL(WwiseEmitter);
	DELE_PTR_FULL(AudioSpace);
	DELE_PTR_FULL(Scene);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
