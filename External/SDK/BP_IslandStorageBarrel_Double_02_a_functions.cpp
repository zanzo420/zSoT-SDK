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

// Function BP_IslandStorageBarrel_Double_02_a.BP_IslandStorageBarrel_Double_02_a_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
void ABP_IslandStorageBarrel_Double_02_a_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_IslandStorageBarrel_Double_02_a.BP_IslandStorageBarrel_Double_02_a_C.UserConstructionScript");

	ABP_IslandStorageBarrel_Double_02_a_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void ABP_IslandStorageBarrel_Double_02_a_C::AfterRead()
{
	AActor::AfterRead();

	READ_PTR_FULL(cmn_broken_shovel_01_b, UStaticMeshComponent);
	READ_PTR_FULL(cmn_broken_shovel_01_a, UStaticMeshComponent);
	READ_PTR_FULL(shp_rope_coil_03_a, UStaticMeshComponent);
	READ_PTR_FULL(cmn_looted_box_01_a, UStaticMeshComponent);
	READ_PTR_FULL(BP_IslandStorageBarrel_02, UChildActorComponent);
	READ_PTR_FULL(BP_IslandStorageBarrel_01, UChildActorComponent);
	READ_PTR_FULL(SharedRoot, USceneComponent);
}

void ABP_IslandStorageBarrel_Double_02_a_C::BeforeDelete()
{
	AActor::BeforeDelete();

	DELE_PTR_FULL(cmn_broken_shovel_01_b);
	DELE_PTR_FULL(cmn_broken_shovel_01_a);
	DELE_PTR_FULL(shp_rope_coil_03_a);
	DELE_PTR_FULL(cmn_looted_box_01_a);
	DELE_PTR_FULL(BP_IslandStorageBarrel_02);
	DELE_PTR_FULL(BP_IslandStorageBarrel_01);
	DELE_PTR_FULL(SharedRoot);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
