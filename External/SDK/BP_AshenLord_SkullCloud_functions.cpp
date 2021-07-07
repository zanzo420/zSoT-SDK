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

// Function BP_AshenLord_SkullCloud.BP_AshenLord_SkullCloud_C.CollectMaterials
// (Public, BlueprintCallable, BlueprintEvent)
void ABP_AshenLord_SkullCloud_C::CollectMaterials()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AshenLord_SkullCloud.BP_AshenLord_SkullCloud_C.CollectMaterials");

	ABP_AshenLord_SkullCloud_C_CollectMaterials_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_AshenLord_SkullCloud.BP_AshenLord_SkullCloud_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
void ABP_AshenLord_SkullCloud_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AshenLord_SkullCloud.BP_AshenLord_SkullCloud_C.UserConstructionScript");

	ABP_AshenLord_SkullCloud_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_AshenLord_SkullCloud.BP_AshenLord_SkullCloud_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)
void ABP_AshenLord_SkullCloud_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AshenLord_SkullCloud.BP_AshenLord_SkullCloud_C.ReceiveBeginPlay");

	ABP_AshenLord_SkullCloud_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_AshenLord_SkullCloud.BP_AshenLord_SkullCloud_C.UpdateMaterialVisibility
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor            SignalVisibilityLerpValue      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_AshenLord_SkullCloud_C::UpdateMaterialVisibility(const struct FLinearColor& SignalVisibilityLerpValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AshenLord_SkullCloud.BP_AshenLord_SkullCloud_C.UpdateMaterialVisibility");

	ABP_AshenLord_SkullCloud_C_UpdateMaterialVisibility_Params params;
	params.SignalVisibilityLerpValue = SignalVisibilityLerpValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_AshenLord_SkullCloud.BP_AshenLord_SkullCloud_C.ExecuteUbergraph_BP_AshenLord_SkullCloud
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_AshenLord_SkullCloud_C::ExecuteUbergraph_BP_AshenLord_SkullCloud(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AshenLord_SkullCloud.BP_AshenLord_SkullCloud_C.ExecuteUbergraph_BP_AshenLord_SkullCloud");

	ABP_AshenLord_SkullCloud_C_ExecuteUbergraph_BP_AshenLord_SkullCloud_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void ABP_AshenLord_SkullCloud_C::AfterRead()
{
	ABP_NonRotatableSignalCloud_C::AfterRead();

	READ_PTR_FULL(lightning_bolt_03_a, UStaticMeshComponent);
	READ_PTR_FULL(lightning_bolt_02_a, UStaticMeshComponent);
	READ_PTR_FULL(lightning_bolt_01_a, UStaticMeshComponent);
	READ_PTR_FULL(vfx_tornado_ribbons, UStaticMeshComponent);
}

void ABP_AshenLord_SkullCloud_C::BeforeDelete()
{
	ABP_NonRotatableSignalCloud_C::BeforeDelete();

	DELE_PTR_FULL(lightning_bolt_03_a);
	DELE_PTR_FULL(lightning_bolt_02_a);
	DELE_PTR_FULL(lightning_bolt_01_a);
	DELE_PTR_FULL(vfx_tornado_ribbons);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
