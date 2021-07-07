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

// Function BP_out_shop_bsp_01_a.BP_out_shop_bsp_01_a_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
void ABP_out_shop_bsp_01_a_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_out_shop_bsp_01_a.BP_out_shop_bsp_01_a_C.UserConstructionScript");

	ABP_out_shop_bsp_01_a_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void ABP_out_shop_bsp_01_a_C::AfterRead()
{
	AActor::AfterRead();

	READ_PTR_FULL(Box, UBoxComponent);
	READ_PTR_FULL(tls_lantern_01_e, UStaticMeshComponent);
	READ_PTR_FULL(PetHangoutSpot, UPetHangoutSpotComponent);
	READ_PTR_FULL(bld_out_shop_decking_01, UStaticMeshComponent);
	READ_PTR_FULL(bld_out_shop_supports_01, UStaticMeshComponent);
	READ_PTR_FULL(bld_out_shop_steps_01, UStaticMeshComponent);
	READ_PTR_FULL(bld_out_shop_roof_01, UStaticMeshComponent);
	READ_PTR_FULL(bld_out_shop_rail_01, UStaticMeshComponent);
	READ_PTR_FULL(bld_out_shop_front_sign_01_a, UStaticMeshComponent);
	READ_PTR_FULL(shp_anchor_01_a, UStaticMeshComponent);
	READ_PTR_FULL(BP_IslandStorageBarrel_Outpost_3, UChildActorComponent);
	READ_PTR_FULL(gmp_bar_stor_01_a, UStaticMeshComponent);
	READ_PTR_FULL(BP_IslandStorageBarrel_Outpost_4, UChildActorComponent);
	READ_PTR_FULL(BP_OutpostCrate_bld_shop_wood_box_01_a, UChildActorComponent);
	READ_PTR_FULL(BP_OutpostCrate_bld_shop_wood_box_02_a, UChildActorComponent);
	READ_PTR_FULL(BP_OutpostIslandCrate_bld_shop_wood_box_03_a_3, UChildActorComponent);
	READ_PTR_FULL(BP_OutpostIslandCrate_bld_shop_wood_box_03_a, UChildActorComponent);
	READ_PTR_FULL(BP_IslandStorageBarrel_Outpost_2, UChildActorComponent);
	READ_PTR_FULL(SpotLight2, USpotLightComponent);
	READ_PTR_FULL(ChildActor, UChildActorComponent);
	READ_PTR_FULL(wsp_bottle_burner, UChildActorComponent);
	READ_PTR_FULL(StaticMesh2, UStaticMeshComponent);
	READ_PTR_FULL(gmp_bar_hide_01_a_2, UStaticMeshComponent);
	READ_PTR_FULL(gmp_bar_hide_01_a_9, UStaticMeshComponent);
	READ_PTR_FULL(gmp_bar_hide_01_a_8, UStaticMeshComponent);
	READ_PTR_FULL(gmp_bar_hide_01_a_7, UStaticMeshComponent);
	READ_PTR_FULL(gmp_bar_hide_01_a_6, UStaticMeshComponent);
	READ_PTR_FULL(gmp_bar_hide_01_a_5, UStaticMeshComponent);
	READ_PTR_FULL(gmp_bar_hide_01_a_4, UStaticMeshComponent);
	READ_PTR_FULL(gmp_bar_hide_01_a_3, UStaticMeshComponent);
	READ_PTR_FULL(StaticMesh3, UStaticMeshComponent);
	READ_PTR_FULL(vfx_tavern_candle_looping_01, UParticleSystemComponent);
	READ_PTR_FULL(SpotLight1, USpotLightComponent);
	READ_PTR_FULL(PointLight2, UPointLightComponent);
	READ_PTR_FULL(PointLight, UPointLightComponent);
	READ_PTR_FULL(SpotLight, USpotLightComponent);
	READ_PTR_FULL(shp_rope_coil_03_a, UStaticMeshComponent);
	READ_PTR_FULL(bld_out_shop_workbench_01_a, UStaticMeshComponent);
	READ_PTR_FULL(cmn_lantern_01_a, UStaticMeshComponent);
	READ_PTR_FULL(cmn_bucket_01_a1, UStaticMeshComponent);
	READ_PTR_FULL(shp_rope_coil_02_a, UStaticMeshComponent);
	READ_PTR_FULL(shp_int_hook_01_a, UStaticMeshComponent);
	READ_PTR_FULL(shp_kitchen_shelf_01_a, UStaticMeshComponent);
	READ_PTR_FULL(cmn_bucket_01_a, UStaticMeshComponent);
	READ_PTR_FULL(bld_shop_wood_box_03_a1, UStaticMeshComponent);
	READ_PTR_FULL(shp_rope_coil_05_a, UStaticMeshComponent);
	READ_PTR_FULL(bld_out_shop_hatch_01_a, UStaticMeshComponent);
	READ_PTR_FULL(bld_out_shop_drapes_rear_01_a, UStaticMeshComponent);
	READ_PTR_FULL(bld_out_shop_hanging_wood_01_a, UStaticMeshComponent);
	READ_PTR_FULL(bld_out_shop_hook_bands_01_a, UStaticMeshComponent);
	READ_PTR_FULL(bld_out_shop_plank_netting_01_a, UStaticMeshComponent);
	READ_PTR_FULL(bld_out_shop_barrel_netting_01_a, UStaticMeshComponent);
	READ_PTR_FULL(bld_out_shop_drapes_front_01_a, UStaticMeshComponent);
	READ_PTR_FULL(bld_out_shop_winch_01_a, UStaticMeshComponent);
	READ_PTR_FULL(bld_out_shop_roof_beam_01_a, UStaticMeshComponent);
	READ_PTR_FULL(bld_out_shop_roof_barrels_01_a, UStaticMeshComponent);
	READ_PTR_FULL(DefaultSceneRoot, USceneComponent);
}

void ABP_out_shop_bsp_01_a_C::BeforeDelete()
{
	AActor::BeforeDelete();

	DELE_PTR_FULL(Box);
	DELE_PTR_FULL(tls_lantern_01_e);
	DELE_PTR_FULL(PetHangoutSpot);
	DELE_PTR_FULL(bld_out_shop_decking_01);
	DELE_PTR_FULL(bld_out_shop_supports_01);
	DELE_PTR_FULL(bld_out_shop_steps_01);
	DELE_PTR_FULL(bld_out_shop_roof_01);
	DELE_PTR_FULL(bld_out_shop_rail_01);
	DELE_PTR_FULL(bld_out_shop_front_sign_01_a);
	DELE_PTR_FULL(shp_anchor_01_a);
	DELE_PTR_FULL(BP_IslandStorageBarrel_Outpost_3);
	DELE_PTR_FULL(gmp_bar_stor_01_a);
	DELE_PTR_FULL(BP_IslandStorageBarrel_Outpost_4);
	DELE_PTR_FULL(BP_OutpostCrate_bld_shop_wood_box_01_a);
	DELE_PTR_FULL(BP_OutpostCrate_bld_shop_wood_box_02_a);
	DELE_PTR_FULL(BP_OutpostIslandCrate_bld_shop_wood_box_03_a_3);
	DELE_PTR_FULL(BP_OutpostIslandCrate_bld_shop_wood_box_03_a);
	DELE_PTR_FULL(BP_IslandStorageBarrel_Outpost_2);
	DELE_PTR_FULL(SpotLight2);
	DELE_PTR_FULL(ChildActor);
	DELE_PTR_FULL(wsp_bottle_burner);
	DELE_PTR_FULL(StaticMesh2);
	DELE_PTR_FULL(gmp_bar_hide_01_a_2);
	DELE_PTR_FULL(gmp_bar_hide_01_a_9);
	DELE_PTR_FULL(gmp_bar_hide_01_a_8);
	DELE_PTR_FULL(gmp_bar_hide_01_a_7);
	DELE_PTR_FULL(gmp_bar_hide_01_a_6);
	DELE_PTR_FULL(gmp_bar_hide_01_a_5);
	DELE_PTR_FULL(gmp_bar_hide_01_a_4);
	DELE_PTR_FULL(gmp_bar_hide_01_a_3);
	DELE_PTR_FULL(StaticMesh3);
	DELE_PTR_FULL(vfx_tavern_candle_looping_01);
	DELE_PTR_FULL(SpotLight1);
	DELE_PTR_FULL(PointLight2);
	DELE_PTR_FULL(PointLight);
	DELE_PTR_FULL(SpotLight);
	DELE_PTR_FULL(shp_rope_coil_03_a);
	DELE_PTR_FULL(bld_out_shop_workbench_01_a);
	DELE_PTR_FULL(cmn_lantern_01_a);
	DELE_PTR_FULL(cmn_bucket_01_a1);
	DELE_PTR_FULL(shp_rope_coil_02_a);
	DELE_PTR_FULL(shp_int_hook_01_a);
	DELE_PTR_FULL(shp_kitchen_shelf_01_a);
	DELE_PTR_FULL(cmn_bucket_01_a);
	DELE_PTR_FULL(bld_shop_wood_box_03_a1);
	DELE_PTR_FULL(shp_rope_coil_05_a);
	DELE_PTR_FULL(bld_out_shop_hatch_01_a);
	DELE_PTR_FULL(bld_out_shop_drapes_rear_01_a);
	DELE_PTR_FULL(bld_out_shop_hanging_wood_01_a);
	DELE_PTR_FULL(bld_out_shop_hook_bands_01_a);
	DELE_PTR_FULL(bld_out_shop_plank_netting_01_a);
	DELE_PTR_FULL(bld_out_shop_barrel_netting_01_a);
	DELE_PTR_FULL(bld_out_shop_drapes_front_01_a);
	DELE_PTR_FULL(bld_out_shop_winch_01_a);
	DELE_PTR_FULL(bld_out_shop_roof_beam_01_a);
	DELE_PTR_FULL(bld_out_shop_roof_barrels_01_a);
	DELE_PTR_FULL(DefaultSceneRoot);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
