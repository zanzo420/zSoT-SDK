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

// Function bsp_bch_rocks_06.bsp_bch_rocks_06_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
void Absp_bch_rocks_06_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function bsp_bch_rocks_06.bsp_bch_rocks_06_C.UserConstructionScript");

	Absp_bch_rocks_06_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void Absp_bch_rocks_06_C::AfterRead()
{
	ABP_Placement_HeightDrop_C::AfterRead();

	READ_PTR_FULL(wsp_rock_pebbles__b4_1, UStaticMeshComponent);
	READ_PTR_FULL(wsp_rock_pebbles__c13_1, UStaticMeshComponent);
	READ_PTR_FULL(wsp_rock_xtra_small__a14_1, UStaticMeshComponent);
	READ_PTR_FULL(wsp_rock_pebbles__g_1, UStaticMeshComponent);
	READ_PTR_FULL(wsp_rock_xtra_small__b17_1, UStaticMeshComponent);
	READ_PTR_FULL(wsp_rock_xtra_small__b14_1, UStaticMeshComponent);
	READ_PTR_FULL(wsp_rock_pebbles__h_1, UStaticMeshComponent);
	READ_PTR_FULL(wsp_rock_pebbles__d13_1, UStaticMeshComponent);
	READ_PTR_FULL(wsp_rock_xtra_small__e12_1, UStaticMeshComponent);
	READ_PTR_FULL(wsp_rock_xtra_small__a17_1, UStaticMeshComponent);
	READ_PTR_FULL(wsp_rock_xtra_small__e11_1, UStaticMeshComponent);
	READ_PTR_FULL(wsp_rock_xtra_small__d23_1, UStaticMeshComponent);
	READ_PTR_FULL(wsp_rock_pebbles__d10_1, UStaticMeshComponent);
	READ_PTR_FULL(wsp_rock_pebbles__e12_1, UStaticMeshComponent);
	READ_PTR_FULL(StaticMesh2, UStaticMeshComponent);
}

void Absp_bch_rocks_06_C::BeforeDelete()
{
	ABP_Placement_HeightDrop_C::BeforeDelete();

	DELE_PTR_FULL(wsp_rock_pebbles__b4_1);
	DELE_PTR_FULL(wsp_rock_pebbles__c13_1);
	DELE_PTR_FULL(wsp_rock_xtra_small__a14_1);
	DELE_PTR_FULL(wsp_rock_pebbles__g_1);
	DELE_PTR_FULL(wsp_rock_xtra_small__b17_1);
	DELE_PTR_FULL(wsp_rock_xtra_small__b14_1);
	DELE_PTR_FULL(wsp_rock_pebbles__h_1);
	DELE_PTR_FULL(wsp_rock_pebbles__d13_1);
	DELE_PTR_FULL(wsp_rock_xtra_small__e12_1);
	DELE_PTR_FULL(wsp_rock_xtra_small__a17_1);
	DELE_PTR_FULL(wsp_rock_xtra_small__e11_1);
	DELE_PTR_FULL(wsp_rock_xtra_small__d23_1);
	DELE_PTR_FULL(wsp_rock_pebbles__d10_1);
	DELE_PTR_FULL(wsp_rock_pebbles__e12_1);
	DELE_PTR_FULL(StaticMesh2);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
