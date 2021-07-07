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

// Function BP_FishCreature.BP_FishCreature_C.ConfigureMaterialInstance
// (Public, BlueprintCallable, BlueprintEvent)
void ABP_FishCreature_C::ConfigureMaterialInstance()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FishCreature.BP_FishCreature_C.ConfigureMaterialInstance");

	ABP_FishCreature_C_ConfigureMaterialInstance_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_FishCreature.BP_FishCreature_C.CreateCreature
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void ABP_FishCreature_C::CreateCreature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FishCreature.BP_FishCreature_C.CreateCreature");

	ABP_FishCreature_C_CreateCreature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_FishCreature.BP_FishCreature_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
void ABP_FishCreature_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FishCreature.BP_FishCreature_C.UserConstructionScript");

	ABP_FishCreature_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void ABP_FishCreature_C::AfterRead()
{
	AActor::AfterRead();

	READ_PTR_FULL(DefaultSceneRoot, USceneComponent);
	READ_PTR_FULL(StaticMeshComponent, UStaticMeshComponent);
	READ_PTR_FULL(currMaterial, UMaterialInstanceDynamic);
}

void ABP_FishCreature_C::BeforeDelete()
{
	AActor::BeforeDelete();

	DELE_PTR_FULL(DefaultSceneRoot);
	DELE_PTR_FULL(StaticMeshComponent);
	DELE_PTR_FULL(currMaterial);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
