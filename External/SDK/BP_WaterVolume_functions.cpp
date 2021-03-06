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

// Function BP_WaterVolume.BP_WaterVolume_C.CollectRippleGenerators
// (Public, BlueprintCallable, BlueprintEvent)
void ABP_WaterVolume_C::CollectRippleGenerators()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WaterVolume.BP_WaterVolume_C.CollectRippleGenerators");

	ABP_WaterVolume_C_CollectRippleGenerators_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_WaterVolume.BP_WaterVolume_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
void ABP_WaterVolume_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WaterVolume.BP_WaterVolume_C.UserConstructionScript");

	ABP_WaterVolume_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_WaterVolume.BP_WaterVolume_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)
void ABP_WaterVolume_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WaterVolume.BP_WaterVolume_C.ReceiveBeginPlay");

	ABP_WaterVolume_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_WaterVolume.BP_WaterVolume_C.ReceiveActorBeginOverlap
// (Event, Public, BlueprintEvent)
// Parameters:
// class AActor*                  OtherActor                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_WaterVolume_C::ReceiveActorBeginOverlap(class AActor* OtherActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WaterVolume.BP_WaterVolume_C.ReceiveActorBeginOverlap");

	ABP_WaterVolume_C_ReceiveActorBeginOverlap_Params params;
	params.OtherActor = OtherActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_WaterVolume.BP_WaterVolume_C.ReceiveActorEndOverlap
// (Event, Public, BlueprintEvent)
// Parameters:
// class AActor*                  OtherActor                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_WaterVolume_C::ReceiveActorEndOverlap(class AActor* OtherActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WaterVolume.BP_WaterVolume_C.ReceiveActorEndOverlap");

	ABP_WaterVolume_C_ReceiveActorEndOverlap_Params params;
	params.OtherActor = OtherActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_WaterVolume.BP_WaterVolume_C.ExecuteUbergraph_BP_WaterVolume
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_WaterVolume_C::ExecuteUbergraph_BP_WaterVolume(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WaterVolume.BP_WaterVolume_C.ExecuteUbergraph_BP_WaterVolume");

	ABP_WaterVolume_C_ExecuteUbergraph_BP_WaterVolume_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void ABP_WaterVolume_C::AfterRead()
{
	AWaterVolume::AfterRead();

	READ_PTR_FULL(WaterPlaneActivatationVolume, UStaticMeshComponent);
	READ_PTR_FULL(DynamicFlow, UDynamicFlowComponent);
	READ_PTR_FULL(FlatWaterPlane, UFlatWaterPlaneComponent);
	READ_PTR_FULL(FlatWaterMesh, UFlatWaterMeshComponent);
	READ_PTR_FULL(Root, USceneComponent);
}

void ABP_WaterVolume_C::BeforeDelete()
{
	AWaterVolume::BeforeDelete();

	DELE_PTR_FULL(WaterPlaneActivatationVolume);
	DELE_PTR_FULL(DynamicFlow);
	DELE_PTR_FULL(FlatWaterPlane);
	DELE_PTR_FULL(FlatWaterMesh);
	DELE_PTR_FULL(Root);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
