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

// Function bsp_beach_rocks_01_b.bsp_beach_rocks_01_b_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
void Absp_beach_rocks_01_b_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function bsp_beach_rocks_01_b.bsp_beach_rocks_01_b_C.UserConstructionScript");

	Absp_beach_rocks_01_b_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void Absp_beach_rocks_01_b_C::AfterRead()
{
	ABP_Placement_HeightDrop_C::AfterRead();

	READ_PTR_FULL(bsp_rock_small_01_a, UStaticMeshComponent);
	READ_PTR_FULL(bsp_rock_small_01_e, UStaticMeshComponent);
	READ_PTR_FULL(bsp_rock_small_01_d, UStaticMeshComponent);
	READ_PTR_FULL(bsp_rock_cliff_01_e, UStaticMeshComponent);
	READ_PTR_FULL(bsp_rock_cliff_01_l, UStaticMeshComponent);
	READ_PTR_FULL(bsp_rock_cliff_01_i, UStaticMeshComponent);
	READ_PTR_FULL(wsp_rock_xtra_small__c10_1, UStaticMeshComponent);
	READ_PTR_FULL(wsp_rock_xtra_small__e4_1, UStaticMeshComponent);
	READ_PTR_FULL(wsp_rock_xtra_small__c6_1, UStaticMeshComponent);
	READ_PTR_FULL(wsp_rock_xtra_small__c8_1, UStaticMeshComponent);
	READ_PTR_FULL(wsp_rock_xtra_small__c7_1, UStaticMeshComponent);
	READ_PTR_FULL(wsp_rock_xtra_small__c9_1, UStaticMeshComponent);
}

void Absp_beach_rocks_01_b_C::BeforeDelete()
{
	ABP_Placement_HeightDrop_C::BeforeDelete();

	DELE_PTR_FULL(bsp_rock_small_01_a);
	DELE_PTR_FULL(bsp_rock_small_01_e);
	DELE_PTR_FULL(bsp_rock_small_01_d);
	DELE_PTR_FULL(bsp_rock_cliff_01_e);
	DELE_PTR_FULL(bsp_rock_cliff_01_l);
	DELE_PTR_FULL(bsp_rock_cliff_01_i);
	DELE_PTR_FULL(wsp_rock_xtra_small__c10_1);
	DELE_PTR_FULL(wsp_rock_xtra_small__e4_1);
	DELE_PTR_FULL(wsp_rock_xtra_small__c6_1);
	DELE_PTR_FULL(wsp_rock_xtra_small__c8_1);
	DELE_PTR_FULL(wsp_rock_xtra_small__c7_1);
	DELE_PTR_FULL(wsp_rock_xtra_small__c9_1);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
