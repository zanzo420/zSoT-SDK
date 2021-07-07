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

// Function BP_CoralFortress_WeatherZone.BP_CoralFortress_WeatherZone_C.OnRep_Opacity
// (BlueprintCallable, BlueprintEvent)
void ABP_CoralFortress_WeatherZone_C::OnRep_Opacity()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CoralFortress_WeatherZone.BP_CoralFortress_WeatherZone_C.OnRep_Opacity");

	ABP_CoralFortress_WeatherZone_C_OnRep_Opacity_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_CoralFortress_WeatherZone.BP_CoralFortress_WeatherZone_C.CreateDynamicMaterialAtSlot0
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UPrimitiveComponent*     Primitive                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UMaterialInstanceDynamic* Material                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_CoralFortress_WeatherZone_C::CreateDynamicMaterialAtSlot0(class UPrimitiveComponent* Primitive, class UMaterialInstanceDynamic** Material)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CoralFortress_WeatherZone.BP_CoralFortress_WeatherZone_C.CreateDynamicMaterialAtSlot0");

	ABP_CoralFortress_WeatherZone_C_CreateDynamicMaterialAtSlot0_Params params;
	params.Primitive = Primitive;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Material != nullptr)
		*Material = params.Material;

}


// Function BP_CoralFortress_WeatherZone.BP_CoralFortress_WeatherZone_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
void ABP_CoralFortress_WeatherZone_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CoralFortress_WeatherZone.BP_CoralFortress_WeatherZone_C.UserConstructionScript");

	ABP_CoralFortress_WeatherZone_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_CoralFortress_WeatherZone.BP_CoralFortress_WeatherZone_C.RainBlend__FinishedFunc
// (BlueprintEvent)
void ABP_CoralFortress_WeatherZone_C::RainBlend__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CoralFortress_WeatherZone.BP_CoralFortress_WeatherZone_C.RainBlend__FinishedFunc");

	ABP_CoralFortress_WeatherZone_C_RainBlend__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_CoralFortress_WeatherZone.BP_CoralFortress_WeatherZone_C.RainBlend__UpdateFunc
// (BlueprintEvent)
void ABP_CoralFortress_WeatherZone_C::RainBlend__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CoralFortress_WeatherZone.BP_CoralFortress_WeatherZone_C.RainBlend__UpdateFunc");

	ABP_CoralFortress_WeatherZone_C_RainBlend__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_CoralFortress_WeatherZone.BP_CoralFortress_WeatherZone_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)
void ABP_CoralFortress_WeatherZone_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CoralFortress_WeatherZone.BP_CoralFortress_WeatherZone_C.ReceiveBeginPlay");

	ABP_CoralFortress_WeatherZone_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_CoralFortress_WeatherZone.BP_CoralFortress_WeatherZone_C.StartRainBlend
// (BlueprintCallable, BlueprintEvent)
void ABP_CoralFortress_WeatherZone_C::StartRainBlend()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CoralFortress_WeatherZone.BP_CoralFortress_WeatherZone_C.StartRainBlend");

	ABP_CoralFortress_WeatherZone_C_StartRainBlend_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_CoralFortress_WeatherZone.BP_CoralFortress_WeatherZone_C.ReceiveEndPlay
// (Event, Public, BlueprintEvent)
// Parameters:
// TEnumAsByte<Engine_EEndPlayReason> EndPlayReason                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_CoralFortress_WeatherZone_C::ReceiveEndPlay(TEnumAsByte<Engine_EEndPlayReason> EndPlayReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CoralFortress_WeatherZone.BP_CoralFortress_WeatherZone_C.ReceiveEndPlay");

	ABP_CoralFortress_WeatherZone_C_ReceiveEndPlay_Params params;
	params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_CoralFortress_WeatherZone.BP_CoralFortress_WeatherZone_C.StopRainBlend
// (BlueprintCallable, BlueprintEvent)
void ABP_CoralFortress_WeatherZone_C::StopRainBlend()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CoralFortress_WeatherZone.BP_CoralFortress_WeatherZone_C.StopRainBlend");

	ABP_CoralFortress_WeatherZone_C_StopRainBlend_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_CoralFortress_WeatherZone.BP_CoralFortress_WeatherZone_C.ExecuteUbergraph_BP_CoralFortress_WeatherZone
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_CoralFortress_WeatherZone_C::ExecuteUbergraph_BP_CoralFortress_WeatherZone(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CoralFortress_WeatherZone.BP_CoralFortress_WeatherZone_C.ExecuteUbergraph_BP_CoralFortress_WeatherZone");

	ABP_CoralFortress_WeatherZone_C_ExecuteUbergraph_BP_CoralFortress_WeatherZone_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void ABP_CoralFortress_WeatherZone_C::AfterRead()
{
	AActor::AfterRead();

	READ_PTR_FULL(Explosion, UExplosionComponent);
	READ_PTR_FULL(LightningManager, ULightningManagerComponent);
	READ_PTR_FULL(Lightning, ULightningComponent);
	READ_PTR_FULL(AtmosphericPressureZone, UAtmosphericPressureZoneComponent);
	READ_PTR_FULL(BlendedPostProcessingRainZone, UBlendedPostProcessingRainZoneComponent);
	READ_PTR_FULL(TopCloudMeshComponent, UStaticMeshComponent);
	READ_PTR_FULL(RingCloudMeshComponent, UStaticMeshComponent);
	READ_PTR_FULL(Lightning4, UStaticMeshComponent);
	READ_PTR_FULL(Lightning3, UStaticMeshComponent);
	READ_PTR_FULL(Lightning2, UStaticMeshComponent);
	READ_PTR_FULL(Lightning1, UStaticMeshComponent);
	READ_PTR_FULL(OuterRainSheet, UStaticMeshComponent);
	READ_PTR_FULL(RainRoot, USceneComponent);
	READ_PTR_FULL(DefaultSceneRoot, USceneComponent);
	READ_PTR_FULL(RainBlend, UTimelineComponent);
}

void ABP_CoralFortress_WeatherZone_C::BeforeDelete()
{
	AActor::BeforeDelete();

	DELE_PTR_FULL(Explosion);
	DELE_PTR_FULL(LightningManager);
	DELE_PTR_FULL(Lightning);
	DELE_PTR_FULL(AtmosphericPressureZone);
	DELE_PTR_FULL(BlendedPostProcessingRainZone);
	DELE_PTR_FULL(TopCloudMeshComponent);
	DELE_PTR_FULL(RingCloudMeshComponent);
	DELE_PTR_FULL(Lightning4);
	DELE_PTR_FULL(Lightning3);
	DELE_PTR_FULL(Lightning2);
	DELE_PTR_FULL(Lightning1);
	DELE_PTR_FULL(OuterRainSheet);
	DELE_PTR_FULL(RainRoot);
	DELE_PTR_FULL(DefaultSceneRoot);
	DELE_PTR_FULL(RainBlend);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
