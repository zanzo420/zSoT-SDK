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

// Function BP_riddle_trigger.BP_riddle_trigger_C.Destroy
// (Public, BlueprintCallable, BlueprintEvent)
void ABP_riddle_trigger_C::Destroy()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_riddle_trigger.BP_riddle_trigger_C.Destroy");

	ABP_riddle_trigger_C_Destroy_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_riddle_trigger.BP_riddle_trigger_C.UserConstructionScript
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void ABP_riddle_trigger_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_riddle_trigger.BP_riddle_trigger_C.UserConstructionScript");

	ABP_riddle_trigger_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void ABP_riddle_trigger_C::AfterRead()
{
	AActor::AfterRead();

	READ_PTR_FULL(Shockwave, UStaticMeshComponent);
	READ_PTR_FULL(DefaultSceneRoot, USceneComponent);
	READ_PTR_FULL(DynamicMaterial, UMaterialInstanceDynamic);
}

void ABP_riddle_trigger_C::BeforeDelete()
{
	AActor::BeforeDelete();

	DELE_PTR_FULL(Shockwave);
	DELE_PTR_FULL(DefaultSceneRoot);
	DELE_PTR_FULL(DynamicMaterial);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
