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

// Function bsp_bsh_cluster_01_b.bsp_bsh_cluster_01_b_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
void Absp_bsh_cluster_01_b_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function bsp_bsh_cluster_01_b.bsp_bsh_cluster_01_b_C.UserConstructionScript");

	Absp_bsh_cluster_01_b_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void Absp_bsh_cluster_01_b_C::AfterRead()
{
	ABP_Placement_HeightDrop_C::AfterRead();

	READ_PTR_FULL(wsp_rock_cliff_l_01, UStaticMeshComponent);
	READ_PTR_FULL(wsp_bush_01_a2_1, UStaticMeshComponent);
	READ_PTR_FULL(wsp_bush_06_b2_1, UStaticMeshComponent);
	READ_PTR_FULL(Scene1, USceneComponent);
}

void Absp_bsh_cluster_01_b_C::BeforeDelete()
{
	ABP_Placement_HeightDrop_C::BeforeDelete();

	DELE_PTR_FULL(wsp_rock_cliff_l_01);
	DELE_PTR_FULL(wsp_bush_01_a2_1);
	DELE_PTR_FULL(wsp_bush_06_b2_1);
	DELE_PTR_FULL(Scene1);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
