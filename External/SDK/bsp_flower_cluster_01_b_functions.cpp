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

// Function bsp_flower_cluster_01_b.bsp_flower_cluster_01_b_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
void Absp_flower_cluster_01_b_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function bsp_flower_cluster_01_b.bsp_flower_cluster_01_b_C.UserConstructionScript");

	Absp_flower_cluster_01_b_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void Absp_flower_cluster_01_b_C::AfterRead()
{
	ABP_Placement_HeightDrop_C::AfterRead();

	READ_PTR_FULL(wsp_rock_xtra_small__b, UStaticMeshComponent);
	READ_PTR_FULL(wsp_rock_pebbles__e, UStaticMeshComponent);
	READ_PTR_FULL(wsp_rock_pebbles__b, UStaticMeshComponent);
	READ_PTR_FULL(wsp_rock_pebbles__d, UStaticMeshComponent);
	READ_PTR_FULL(wsp_rock_pebbles__c, UStaticMeshComponent);
	READ_PTR_FULL(wsp_rock_xtra_small__d, UStaticMeshComponent);
	READ_PTR_FULL(wsp_rock_xtra_small__c, UStaticMeshComponent);
	READ_PTR_FULL(StaticMesh, UStaticMeshComponent);
	READ_PTR_FULL(StaticMeshComponent02, UStaticMeshComponent);
	READ_PTR_FULL(StaticMeshComponent01, UStaticMeshComponent);
	READ_PTR_FULL(SharedRoot, USceneComponent);
}

void Absp_flower_cluster_01_b_C::BeforeDelete()
{
	ABP_Placement_HeightDrop_C::BeforeDelete();

	DELE_PTR_FULL(wsp_rock_xtra_small__b);
	DELE_PTR_FULL(wsp_rock_pebbles__e);
	DELE_PTR_FULL(wsp_rock_pebbles__b);
	DELE_PTR_FULL(wsp_rock_pebbles__d);
	DELE_PTR_FULL(wsp_rock_pebbles__c);
	DELE_PTR_FULL(wsp_rock_xtra_small__d);
	DELE_PTR_FULL(wsp_rock_xtra_small__c);
	DELE_PTR_FULL(StaticMesh);
	DELE_PTR_FULL(StaticMeshComponent02);
	DELE_PTR_FULL(StaticMeshComponent01);
	DELE_PTR_FULL(SharedRoot);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
