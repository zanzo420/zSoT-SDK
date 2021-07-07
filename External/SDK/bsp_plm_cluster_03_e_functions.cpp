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

// Function bsp_plm_cluster_03_e.bsp_plm_cluster_03_e_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
void Absp_plm_cluster_03_e_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function bsp_plm_cluster_03_e.bsp_plm_cluster_03_e_C.UserConstructionScript");

	Absp_plm_cluster_03_e_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void Absp_plm_cluster_03_e_C::AfterRead()
{
	ABP_Placement_HeightDrop_C::AfterRead();

	READ_PTR_FULL(wsp_bush_03_a2, UStaticMeshComponent);
	READ_PTR_FULL(wsp_bush_03_a1, UStaticMeshComponent);
	READ_PTR_FULL(wsp_bush_01_a, UStaticMeshComponent);
	READ_PTR_FULL(StaticMeshComponent022, UStaticMeshComponent);
	READ_PTR_FULL(StaticMeshComponent017, UStaticMeshComponent);
	READ_PTR_FULL(StaticMeshComponent0, UStaticMeshComponent);
	READ_PTR_FULL(StaticMeshComponent029, UStaticMeshComponent);
	READ_PTR_FULL(StaticMeshComponent014, UStaticMeshComponent);
	READ_PTR_FULL(StaticMeshComponent09, UStaticMeshComponent);
	READ_PTR_FULL(StaticMeshComponent07, UStaticMeshComponent);
	READ_PTR_FULL(NonVagueNonUniqueLandmark, UNonVagueNonUniqueLandmarkComponent);
	READ_PTR_FULL(StaticMeshComponent04, UStaticMeshComponent);
	READ_PTR_FULL(StaticMeshComponent03, UStaticMeshComponent);
	READ_PTR_FULL(StaticMeshComponent01, UStaticMeshComponent);
	READ_PTR_FULL(StaticMeshComponent015, UStaticMeshComponent);
	READ_PTR_FULL(StaticMeshComponent013, UStaticMeshComponent);
}

void Absp_plm_cluster_03_e_C::BeforeDelete()
{
	ABP_Placement_HeightDrop_C::BeforeDelete();

	DELE_PTR_FULL(wsp_bush_03_a2);
	DELE_PTR_FULL(wsp_bush_03_a1);
	DELE_PTR_FULL(wsp_bush_01_a);
	DELE_PTR_FULL(StaticMeshComponent022);
	DELE_PTR_FULL(StaticMeshComponent017);
	DELE_PTR_FULL(StaticMeshComponent0);
	DELE_PTR_FULL(StaticMeshComponent029);
	DELE_PTR_FULL(StaticMeshComponent014);
	DELE_PTR_FULL(StaticMeshComponent09);
	DELE_PTR_FULL(StaticMeshComponent07);
	DELE_PTR_FULL(NonVagueNonUniqueLandmark);
	DELE_PTR_FULL(StaticMeshComponent04);
	DELE_PTR_FULL(StaticMeshComponent03);
	DELE_PTR_FULL(StaticMeshComponent01);
	DELE_PTR_FULL(StaticMeshComponent015);
	DELE_PTR_FULL(StaticMeshComponent013);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
