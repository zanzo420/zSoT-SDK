﻿// Name: SoT, Version: 2.2.0.2

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

// Function bsp_plm_cluster_02_a.bsp_plm_cluster_02_a_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
void Absp_plm_cluster_02_a_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function bsp_plm_cluster_02_a.bsp_plm_cluster_02_a_C.UserConstructionScript");

	Absp_plm_cluster_02_a_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void Absp_plm_cluster_02_a_C::AfterRead()
{
	ABP_Placement_HeightDrop_C::AfterRead();

	READ_PTR_FULL(NonVagueNonUniqueLandmark, UNonVagueNonUniqueLandmarkComponent);
	READ_PTR_FULL(StaticMesh2, UStaticMeshComponent);
	READ_PTR_FULL(Scene, USceneComponent);
}

void Absp_plm_cluster_02_a_C::BeforeDelete()
{
	ABP_Placement_HeightDrop_C::BeforeDelete();

	DELE_PTR_FULL(NonVagueNonUniqueLandmark);
	DELE_PTR_FULL(StaticMesh2);
	DELE_PTR_FULL(Scene);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
