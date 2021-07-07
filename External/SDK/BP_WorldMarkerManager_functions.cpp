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

// Function BP_WorldMarkerManager.BP_WorldMarkerManager_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
void ABP_WorldMarkerManager_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WorldMarkerManager.BP_WorldMarkerManager_C.UserConstructionScript");

	ABP_WorldMarkerManager_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void ABP_WorldMarkerManager_C::AfterRead()
{
	AActor::AfterRead();

	READ_PTR_FULL(WorldMarkerManager, UWorldMarkerManagerComponent);
	READ_PTR_FULL(DefaultSceneRoot, USceneComponent);
}

void ABP_WorldMarkerManager_C::BeforeDelete()
{
	AActor::BeforeDelete();

	DELE_PTR_FULL(WorldMarkerManager);
	DELE_PTR_FULL(DefaultSceneRoot);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
