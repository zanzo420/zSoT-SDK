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

// Function bsp_bch_rocks_05_b.bsp_bch_rocks_05_b_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
void Absp_bch_rocks_05_b_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function bsp_bch_rocks_05_b.bsp_bch_rocks_05_b_C.UserConstructionScript");

	Absp_bch_rocks_05_b_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void Absp_bch_rocks_05_b_C::AfterRead()
{
	ABP_Placement_HeightDrop_C::AfterRead();

	READ_PTR_FULL(bsp_rock_cliff_01_j, UStaticMeshComponent);
	READ_PTR_FULL(bsp_rock_medium_01_d1, UStaticMeshComponent);
	READ_PTR_FULL(bsp_rock_medium_01_d, UStaticMeshComponent);
	READ_PTR_FULL(StaticMesh16, UStaticMeshComponent);
	READ_PTR_FULL(StaticMesh14, UStaticMeshComponent);
	READ_PTR_FULL(StaticMesh6, UStaticMeshComponent);
	READ_PTR_FULL(StaticMesh11, UStaticMeshComponent);
	READ_PTR_FULL(StaticMesh10, UStaticMeshComponent);
	READ_PTR_FULL(StaticMesh8, UStaticMeshComponent);
	READ_PTR_FULL(StaticMesh7, UStaticMeshComponent);
	READ_PTR_FULL(StaticMesh12, UStaticMeshComponent);
}

void Absp_bch_rocks_05_b_C::BeforeDelete()
{
	ABP_Placement_HeightDrop_C::BeforeDelete();

	DELE_PTR_FULL(bsp_rock_cliff_01_j);
	DELE_PTR_FULL(bsp_rock_medium_01_d1);
	DELE_PTR_FULL(bsp_rock_medium_01_d);
	DELE_PTR_FULL(StaticMesh16);
	DELE_PTR_FULL(StaticMesh14);
	DELE_PTR_FULL(StaticMesh6);
	DELE_PTR_FULL(StaticMesh11);
	DELE_PTR_FULL(StaticMesh10);
	DELE_PTR_FULL(StaticMesh8);
	DELE_PTR_FULL(StaticMesh7);
	DELE_PTR_FULL(StaticMesh12);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
