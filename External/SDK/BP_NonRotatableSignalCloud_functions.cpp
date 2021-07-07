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

// Function BP_NonRotatableSignalCloud.BP_NonRotatableSignalCloud_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
void ABP_NonRotatableSignalCloud_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_NonRotatableSignalCloud.BP_NonRotatableSignalCloud_C.UserConstructionScript");

	ABP_NonRotatableSignalCloud_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_NonRotatableSignalCloud.BP_NonRotatableSignalCloud_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)
void ABP_NonRotatableSignalCloud_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_NonRotatableSignalCloud.BP_NonRotatableSignalCloud_C.ReceiveBeginPlay");

	ABP_NonRotatableSignalCloud_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_NonRotatableSignalCloud.BP_NonRotatableSignalCloud_C.ExecuteUbergraph_BP_NonRotatableSignalCloud
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_NonRotatableSignalCloud_C::ExecuteUbergraph_BP_NonRotatableSignalCloud(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_NonRotatableSignalCloud.BP_NonRotatableSignalCloud_C.ExecuteUbergraph_BP_NonRotatableSignalCloud");

	ABP_NonRotatableSignalCloud_C_ExecuteUbergraph_BP_NonRotatableSignalCloud_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void ABP_NonRotatableSignalCloud_C::AfterRead()
{
	AGameplayEventSignal_StaticMesh::AfterRead();

}

void ABP_NonRotatableSignalCloud_C::BeforeDelete()
{
	AGameplayEventSignal_StaticMesh::BeforeDelete();

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
