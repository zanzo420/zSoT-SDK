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

// Function BP_CylinderLightingZone.BP_CylinderLightingZone_C.DrawCylinder
// (Public, BlueprintCallable, BlueprintEvent)
void ABP_CylinderLightingZone_C::DrawCylinder()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CylinderLightingZone.BP_CylinderLightingZone_C.DrawCylinder");

	ABP_CylinderLightingZone_C_DrawCylinder_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_CylinderLightingZone.BP_CylinderLightingZone_C.Update 3D Lighting Zone
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void ABP_CylinderLightingZone_C::Update_3D_Lighting_Zone()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CylinderLightingZone.BP_CylinderLightingZone_C.Update 3D Lighting Zone");

	ABP_CylinderLightingZone_C_Update_3D_Lighting_Zone_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_CylinderLightingZone.BP_CylinderLightingZone_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
void ABP_CylinderLightingZone_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CylinderLightingZone.BP_CylinderLightingZone_C.UserConstructionScript");

	ABP_CylinderLightingZone_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_CylinderLightingZone.BP_CylinderLightingZone_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)
void ABP_CylinderLightingZone_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CylinderLightingZone.BP_CylinderLightingZone_C.ReceiveBeginPlay");

	ABP_CylinderLightingZone_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_CylinderLightingZone.BP_CylinderLightingZone_C.DrawDebugCylinder
// (BlueprintCallable, BlueprintEvent)
void ABP_CylinderLightingZone_C::DrawDebugCylinder()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CylinderLightingZone.BP_CylinderLightingZone_C.DrawDebugCylinder");

	ABP_CylinderLightingZone_C_DrawDebugCylinder_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_CylinderLightingZone.BP_CylinderLightingZone_C.ClearDebugCylinder
// (BlueprintCallable, BlueprintEvent)
void ABP_CylinderLightingZone_C::ClearDebugCylinder()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CylinderLightingZone.BP_CylinderLightingZone_C.ClearDebugCylinder");

	ABP_CylinderLightingZone_C_ClearDebugCylinder_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_CylinderLightingZone.BP_CylinderLightingZone_C.ExecuteUbergraph_BP_CylinderLightingZone
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_CylinderLightingZone_C::ExecuteUbergraph_BP_CylinderLightingZone(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CylinderLightingZone.BP_CylinderLightingZone_C.ExecuteUbergraph_BP_CylinderLightingZone");

	ABP_CylinderLightingZone_C_ExecuteUbergraph_BP_CylinderLightingZone_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void ABP_CylinderLightingZone_C::AfterRead()
{
	AActor::AfterRead();

	READ_PTR_FULL(InnerCapsule, UCapsuleComponent);
	READ_PTR_FULL(OuterCapsule, UCapsuleComponent);
	READ_PTR_FULL(LightingZone, ULightingZoneComponent);
	READ_PTR_FULL(DefaultSceneRoot, USceneComponent);
}

void ABP_CylinderLightingZone_C::BeforeDelete()
{
	AActor::BeforeDelete();

	DELE_PTR_FULL(InnerCapsule);
	DELE_PTR_FULL(OuterCapsule);
	DELE_PTR_FULL(LightingZone);
	DELE_PTR_FULL(DefaultSceneRoot);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
