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

// Function bsp_beach_rocks_09.bsp_beach_rocks_09_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
void Absp_beach_rocks_09_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function bsp_beach_rocks_09.bsp_beach_rocks_09_C.UserConstructionScript");

	Absp_beach_rocks_09_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void Absp_beach_rocks_09_C::AfterRead()
{
	ABP_Placement_HeightDrop_C::AfterRead();

	READ_PTR_FULL(bsp_rock_medium_01_b, UStaticMeshComponent);
	READ_PTR_FULL(bsp_rock_small_01_b, UStaticMeshComponent);
	READ_PTR_FULL(wsp_rock_pebbles_a_02, UStaticMeshComponent);
	READ_PTR_FULL(wsp_rock_pebbles_c_02, UStaticMeshComponent);
	READ_PTR_FULL(wsp_rock_xtra_small_e_01, UStaticMeshComponent);
	READ_PTR_FULL(wsp_rock_pebbles_f_02, UStaticMeshComponent);
	READ_PTR_FULL(wsp_rock_pebbles_d_02, UStaticMeshComponent);
	READ_PTR_FULL(wsp_rock_pebbles_e_02, UStaticMeshComponent);
	READ_PTR_FULL(wsp_rock_pebbles_b_02, UStaticMeshComponent);
	READ_PTR_FULL(wsp_rock_pebbles_e_01, UStaticMeshComponent);
	READ_PTR_FULL(wsp_rock_xtra_small_d_01, UStaticMeshComponent);
	READ_PTR_FULL(wsp_rock_xtra_small_a_01, UStaticMeshComponent);
	READ_PTR_FULL(SharedRoot, USceneComponent);
}

void Absp_beach_rocks_09_C::BeforeDelete()
{
	ABP_Placement_HeightDrop_C::BeforeDelete();

	DELE_PTR_FULL(bsp_rock_medium_01_b);
	DELE_PTR_FULL(bsp_rock_small_01_b);
	DELE_PTR_FULL(wsp_rock_pebbles_a_02);
	DELE_PTR_FULL(wsp_rock_pebbles_c_02);
	DELE_PTR_FULL(wsp_rock_xtra_small_e_01);
	DELE_PTR_FULL(wsp_rock_pebbles_f_02);
	DELE_PTR_FULL(wsp_rock_pebbles_d_02);
	DELE_PTR_FULL(wsp_rock_pebbles_e_02);
	DELE_PTR_FULL(wsp_rock_pebbles_b_02);
	DELE_PTR_FULL(wsp_rock_pebbles_e_01);
	DELE_PTR_FULL(wsp_rock_xtra_small_d_01);
	DELE_PTR_FULL(wsp_rock_xtra_small_a_01);
	DELE_PTR_FULL(SharedRoot);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
