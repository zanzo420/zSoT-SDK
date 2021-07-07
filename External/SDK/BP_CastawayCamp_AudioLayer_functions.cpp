// Name: SoT, Version: 2.2.0.2

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

// Function BP_CastawayCamp_AudioLayer.BP_CastawayCamp_AudioLayer_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
void ABP_CastawayCamp_AudioLayer_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CastawayCamp_AudioLayer.BP_CastawayCamp_AudioLayer_C.UserConstructionScript");

	ABP_CastawayCamp_AudioLayer_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_CastawayCamp_AudioLayer.BP_CastawayCamp_AudioLayer_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)
void ABP_CastawayCamp_AudioLayer_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CastawayCamp_AudioLayer.BP_CastawayCamp_AudioLayer_C.ReceiveBeginPlay");

	ABP_CastawayCamp_AudioLayer_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_CastawayCamp_AudioLayer.BP_CastawayCamp_AudioLayer_C.ReceiveEndPlay
// (Event, Public, BlueprintEvent)
// Parameters:
// TEnumAsByte<Engine_EEndPlayReason> EndPlayReason                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_CastawayCamp_AudioLayer_C::ReceiveEndPlay(TEnumAsByte<Engine_EEndPlayReason> EndPlayReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CastawayCamp_AudioLayer.BP_CastawayCamp_AudioLayer_C.ReceiveEndPlay");

	ABP_CastawayCamp_AudioLayer_C_ReceiveEndPlay_Params params;
	params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_CastawayCamp_AudioLayer.BP_CastawayCamp_AudioLayer_C.ExecuteUbergraph_BP_CastawayCamp_AudioLayer
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_CastawayCamp_AudioLayer_C::ExecuteUbergraph_BP_CastawayCamp_AudioLayer(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CastawayCamp_AudioLayer.BP_CastawayCamp_AudioLayer_C.ExecuteUbergraph_BP_CastawayCamp_AudioLayer");

	ABP_CastawayCamp_AudioLayer_C_ExecuteUbergraph_BP_CastawayCamp_AudioLayer_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void ABP_CastawayCamp_AudioLayer_C::AfterRead()
{
	AActor::AfterRead();

	READ_PTR_FULL(Flapping, UWwiseEmitterComponent);
	READ_PTR_FULL(Campfire, UWwiseEmitterComponent);
	READ_PTR_FULL(CastawayCamp_Audio, UWwiseEmitterComponent);
	READ_PTR_FULL(Campfire_Play, UWwiseEvent);
	READ_PTR_FULL(Campfire_Stop, UWwiseEvent);
	READ_PTR_FULL(Flapping_Play, UWwiseEvent);
	READ_PTR_FULL(Flapping_Stop, UWwiseEvent);
}

void ABP_CastawayCamp_AudioLayer_C::BeforeDelete()
{
	AActor::BeforeDelete();

	DELE_PTR_FULL(Flapping);
	DELE_PTR_FULL(Campfire);
	DELE_PTR_FULL(CastawayCamp_Audio);
	DELE_PTR_FULL(Campfire_Play);
	DELE_PTR_FULL(Campfire_Stop);
	DELE_PTR_FULL(Flapping_Play);
	DELE_PTR_FULL(Flapping_Stop);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
