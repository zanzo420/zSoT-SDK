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

// Function BP_Audio_Play_Wwise_Event.BP_Audio_Play_Wwise_Event_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
void ABP_Audio_Play_Wwise_Event_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Audio_Play_Wwise_Event.BP_Audio_Play_Wwise_Event_C.UserConstructionScript");

	ABP_Audio_Play_Wwise_Event_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Audio_Play_Wwise_Event.BP_Audio_Play_Wwise_Event_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)
void ABP_Audio_Play_Wwise_Event_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Audio_Play_Wwise_Event.BP_Audio_Play_Wwise_Event_C.ReceiveBeginPlay");

	ABP_Audio_Play_Wwise_Event_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Audio_Play_Wwise_Event.BP_Audio_Play_Wwise_Event_C.ExecuteUbergraph_BP_Audio_Play_Wwise_Event
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_Audio_Play_Wwise_Event_C::ExecuteUbergraph_BP_Audio_Play_Wwise_Event(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Audio_Play_Wwise_Event.BP_Audio_Play_Wwise_Event_C.ExecuteUbergraph_BP_Audio_Play_Wwise_Event");

	ABP_Audio_Play_Wwise_Event_C_ExecuteUbergraph_BP_Audio_Play_Wwise_Event_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void ABP_Audio_Play_Wwise_Event_C::AfterRead()
{
	AActor::AfterRead();

	READ_PTR_FULL(BPAudioEvent, UWwiseEmitterComponent);
	READ_PTR_FULL(Wwise_Object_Pool_Wrapper, UWwiseObjectPoolWrapper);
}

void ABP_Audio_Play_Wwise_Event_C::BeforeDelete()
{
	AActor::BeforeDelete();

	DELE_PTR_FULL(BPAudioEvent);
	DELE_PTR_FULL(Wwise_Object_Pool_Wrapper);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
