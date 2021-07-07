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

// Function bsp_bch_rocks_02_b.bsp_bch_rocks_02_b_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
void Absp_bch_rocks_02_b_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function bsp_bch_rocks_02_b.bsp_bch_rocks_02_b_C.UserConstructionScript");

	Absp_bch_rocks_02_b_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void Absp_bch_rocks_02_b_C::AfterRead()
{
	ABP_Placement_HeightDrop_C::AfterRead();

	READ_PTR_FULL(bsp_rock_cliff_01_j, UStaticMeshComponent);
	READ_PTR_FULL(bsp_rock_medium_01_d, UStaticMeshComponent);
	READ_PTR_FULL(bsp_rock_medium_01_b, UStaticMeshComponent);
	READ_PTR_FULL(wsp_rock_xtra_small__c10_1, UStaticMeshComponent);
	READ_PTR_FULL(wsp_rock_xtra_small__e4_1, UStaticMeshComponent);
	READ_PTR_FULL(wsp_rock_xtra_small__e2_1, UStaticMeshComponent);
	READ_PTR_FULL(wsp_rock_xtra_small__c6_1, UStaticMeshComponent);
	READ_PTR_FULL(wsp_rock_xtra_small__c5_1, UStaticMeshComponent);
	READ_PTR_FULL(wsp_rock_xtra_small__c9_1, UStaticMeshComponent);
	READ_PTR_FULL(wsp_rock_xtra_small__c8_1, UStaticMeshComponent);
	READ_PTR_FULL(wsp_rock_xtra_small__e3_1, UStaticMeshComponent);
}

void Absp_bch_rocks_02_b_C::BeforeDelete()
{
	ABP_Placement_HeightDrop_C::BeforeDelete();

	DELE_PTR_FULL(bsp_rock_cliff_01_j);
	DELE_PTR_FULL(bsp_rock_medium_01_d);
	DELE_PTR_FULL(bsp_rock_medium_01_b);
	DELE_PTR_FULL(wsp_rock_xtra_small__c10_1);
	DELE_PTR_FULL(wsp_rock_xtra_small__e4_1);
	DELE_PTR_FULL(wsp_rock_xtra_small__e2_1);
	DELE_PTR_FULL(wsp_rock_xtra_small__c6_1);
	DELE_PTR_FULL(wsp_rock_xtra_small__c5_1);
	DELE_PTR_FULL(wsp_rock_xtra_small__c9_1);
	DELE_PTR_FULL(wsp_rock_xtra_small__c8_1);
	DELE_PTR_FULL(wsp_rock_xtra_small__e3_1);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
