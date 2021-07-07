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

// Function bsp_flower_cluster_03_c.bsp_flower_cluster_03_c_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
void Absp_flower_cluster_03_c_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function bsp_flower_cluster_03_c.bsp_flower_cluster_03_c_C.UserConstructionScript");

	Absp_flower_cluster_03_c_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void Absp_flower_cluster_03_c_C::AfterRead()
{
	ABP_Placement_HeightDrop_C::AfterRead();

	READ_PTR_FULL(wsp_rock_pebbles_h_01, UStaticMeshComponent);
	READ_PTR_FULL(wsp_rock_xtra_small_a_01, UStaticMeshComponent);
	READ_PTR_FULL(wsp_rock|_pebbles_g_01, UStaticMeshComponent);
	READ_PTR_FULL(wsp_rock_pebbles_f_01, UStaticMeshComponent);
	READ_PTR_FULL(wsp_flower_06_b_01, UStaticMeshComponent);
	READ_PTR_FULL(wsp_flower_05_b_01, UStaticMeshComponent);
	READ_PTR_FULL(wsp_flower_01_a_01, UStaticMeshComponent);
	READ_PTR_FULL(SharedRoot, USceneComponent);
}

void Absp_flower_cluster_03_c_C::BeforeDelete()
{
	ABP_Placement_HeightDrop_C::BeforeDelete();

	DELE_PTR_FULL(wsp_rock_pebbles_h_01);
	DELE_PTR_FULL(wsp_rock_xtra_small_a_01);
	DELE_PTR_FULL(wsp_rock|_pebbles_g_01);
	DELE_PTR_FULL(wsp_rock_pebbles_f_01);
	DELE_PTR_FULL(wsp_flower_06_b_01);
	DELE_PTR_FULL(wsp_flower_05_b_01);
	DELE_PTR_FULL(wsp_flower_01_a_01);
	DELE_PTR_FULL(SharedRoot);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
