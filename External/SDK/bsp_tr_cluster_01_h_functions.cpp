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

// Function bsp_tr_cluster_01_h.bsp_tr_cluster_01_h_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
void Absp_tr_cluster_01_h_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function bsp_tr_cluster_01_h.bsp_tr_cluster_01_h_C.UserConstructionScript");

	Absp_tr_cluster_01_h_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void Absp_tr_cluster_01_h_C::AfterRead()
{
	ABP_Placement_HeightDrop_C::AfterRead();

	READ_PTR_FULL(wsp_bush_01_a25_1, UStaticMeshComponent);
	READ_PTR_FULL(NonVagueNonUniqueLandmark, UNonVagueNonUniqueLandmarkComponent);
	READ_PTR_FULL(wsp_tree_palm_01_b10_1, UStaticMeshComponent);
	READ_PTR_FULL(wsp_tree_palm_01_a_1, UStaticMeshComponent);
	READ_PTR_FULL(wsp_bush_01_a20_1, UStaticMeshComponent);
	READ_PTR_FULL(wsp_bush_06_b11_1, UStaticMeshComponent);
	READ_PTR_FULL(Scene, USceneComponent);
}

void Absp_tr_cluster_01_h_C::BeforeDelete()
{
	ABP_Placement_HeightDrop_C::BeforeDelete();

	DELE_PTR_FULL(wsp_bush_01_a25_1);
	DELE_PTR_FULL(NonVagueNonUniqueLandmark);
	DELE_PTR_FULL(wsp_tree_palm_01_b10_1);
	DELE_PTR_FULL(wsp_tree_palm_01_a_1);
	DELE_PTR_FULL(wsp_bush_01_a20_1);
	DELE_PTR_FULL(wsp_bush_06_b11_1);
	DELE_PTR_FULL(Scene);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
