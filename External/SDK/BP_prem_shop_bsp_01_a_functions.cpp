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

// Function BP_prem_shop_bsp_01_a.BP_prem_shop_bsp_01_a_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
void ABP_prem_shop_bsp_01_a_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_prem_shop_bsp_01_a.BP_prem_shop_bsp_01_a_C.UserConstructionScript");

	ABP_prem_shop_bsp_01_a_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void ABP_prem_shop_bsp_01_a_C::AfterRead()
{
	AActor::AfterRead();

	READ_PTR_FULL(StaticMesh8, UStaticMeshComponent);
	READ_PTR_FULL(StaticMesh2, UStaticMeshComponent);
	READ_PTR_FULL(cap_cabin_books_02_a1, UStaticMeshComponent);
	READ_PTR_FULL(StaticMesh1, UStaticMeshComponent);
	READ_PTR_FULL(tls_lantern_01_e, UStaticMeshComponent);
	READ_PTR_FULL(cap_skull_candle_01_a, UStaticMeshComponent);
	READ_PTR_FULL(PointLight6, UPointLightComponent);
	READ_PTR_FULL(gmp_prm_reroll_01_a, UStaticMeshComponent);
	READ_PTR_FULL(bld_prem_shop_plinth_01_a, UStaticMeshComponent);
	READ_PTR_FULL(PetHangoutSpot, UPetHangoutSpotComponent);
	READ_PTR_FULL(CompanyRegion, UCompanyRegionComponent);
	READ_PTR_FULL(StaticMesh, UStaticMeshComponent);
	READ_PTR_FULL(PointLight9, UPointLightComponent);
	READ_PTR_FULL(PointLight8, UPointLightComponent);
	READ_PTR_FULL(PointLight14, UPointLightComponent);
	READ_PTR_FULL(PointLight10, UPointLightComponent);
	READ_PTR_FULL(SpotLight5, USpotLightComponent);
	READ_PTR_FULL(SpotLight4, USpotLightComponent);
	READ_PTR_FULL(PointLight7, UPointLightComponent);
	READ_PTR_FULL(SpotLight3, USpotLightComponent);
	READ_PTR_FULL(PointLight5, UPointLightComponent);
	READ_PTR_FULL(SpotLight2, USpotLightComponent);
	READ_PTR_FULL(PointLight4, UPointLightComponent);
	READ_PTR_FULL(PointLight3, UPointLightComponent);
	READ_PTR_FULL(PointLight2, UPointLightComponent);
	READ_PTR_FULL(PointLight, UPointLightComponent);
	READ_PTR_FULL(Book3, UStaticMeshComponent);
	READ_PTR_FULL(Book2, UStaticMeshComponent);
	READ_PTR_FULL(cap_model_01_a, UStaticMeshComponent);
	READ_PTR_FULL(ChildActor, UChildActorComponent);
	READ_PTR_FULL(cmn_rope_end_03_a, UStaticMeshComponent);
	READ_PTR_FULL(Book1, UStaticMeshComponent);
	READ_PTR_FULL(ParticleSystem, UParticleSystemComponent);
	READ_PTR_FULL(Candle2, UStaticMeshComponent);
	READ_PTR_FULL(cmn_driftwood_03_a, UStaticMeshComponent);
	READ_PTR_FULL(Bottle6, UStaticMeshComponent);
	READ_PTR_FULL(Mannequin1, UStaticMeshComponent);
	READ_PTR_FULL(bld_int_small_sideboard_01_a, UStaticMeshComponent);
	READ_PTR_FULL(Bottle3, UStaticMeshComponent);
	READ_PTR_FULL(Moneybag1, UStaticMeshComponent);
	READ_PTR_FULL(cmn_moneybag_ancient_01_a, UStaticMeshComponent);
	READ_PTR_FULL(Dreamcatcher3, UStaticMeshComponent);
	READ_PTR_FULL(Dreamcatcher2, UStaticMeshComponent);
	READ_PTR_FULL(Pole1, UStaticMeshComponent);
	READ_PTR_FULL(shp_int_map_ceiling_beam_01_a, UStaticMeshComponent);
	READ_PTR_FULL(bld_shop_bird_ladder_prm_01_c, UStaticMeshComponent);
	READ_PTR_FULL(shp_small_mast_bell_support_01_a, UStaticMeshComponent);
	READ_PTR_FULL(cmn_banana_bunch_01_a, UStaticMeshComponent);
	READ_PTR_FULL(Dreamcatcher1, UStaticMeshComponent);
	READ_PTR_FULL(PetCollar3, UStaticMeshComponent);
	READ_PTR_FULL(Ladder2, UStaticMeshComponent);
	READ_PTR_FULL(bld_shop_bird_ladder_prm_01_b, UStaticMeshComponent);
	READ_PTR_FULL(bld_out_shop_hanging_wood_01_a, UStaticMeshComponent);
	READ_PTR_FULL(Ladder1, UStaticMeshComponent);
	READ_PTR_FULL(PetCollar2, UStaticMeshComponent);
	READ_PTR_FULL(PetCollar1, UStaticMeshComponent);
	READ_PTR_FULL(Hooks1, UStaticMeshComponent);
	READ_PTR_FULL(bld_int_wall_coat_rack_03_a, UStaticMeshComponent);
	READ_PTR_FULL(bld_shop_wind_chime_prm_01_a, UStaticMeshComponent);
	READ_PTR_FULL(trs_money_sack_medium_01_a3, UStaticMeshComponent);
	READ_PTR_FULL(trs_money_sack_medium_01_a1, UStaticMeshComponent);
	READ_PTR_FULL(trs_money_sack_medium_01_a2, UStaticMeshComponent);
	READ_PTR_FULL(trs_money_sack_medium_01_a, UStaticMeshComponent);
	READ_PTR_FULL(cmn_mannequin_parrot_01_a, UStaticMeshComponent);
	READ_PTR_FULL(bld_prem_shop_drapes_01_a, UStaticMeshComponent);
	READ_PTR_FULL(BP_wil_monkey_02, UChildActorComponent);
	READ_PTR_FULL(BP_wil_parrot_01, UChildActorComponent);
	READ_PTR_FULL(bld_shop_sign_ancient_01_a, UStaticMeshComponent);
	READ_PTR_FULL(bld_shop_cloth_ancient_01_a, UStaticMeshComponent);
	READ_PTR_FULL(gmp_bar_stor_01_a1, UStaticMeshComponent);
	READ_PTR_FULL(StaticMesh7, UStaticMeshComponent);
	READ_PTR_FULL(StaticMesh5, UStaticMeshComponent);
	READ_PTR_FULL(cmn_bird_cage_01_a, UStaticMeshComponent);
	READ_PTR_FULL(cap_cage_01_a, UStaticMeshComponent);
	READ_PTR_FULL(ptn_cure_01_d, UStaticMeshComponent);
	READ_PTR_FULL(bld_cls_shop_bird_cage_01_a, UStaticMeshComponent);
	READ_PTR_FULL(bld_prem_shop_rope_details_01_d, UStaticMeshComponent);
	READ_PTR_FULL(cmn_petCollar_01_a, UStaticMeshComponent);
	READ_PTR_FULL(SpotLight7, USpotLightComponent);
	READ_PTR_FULL(SpotLight6, USpotLightComponent);
	READ_PTR_FULL(ParticleSystem3, UParticleSystemComponent);
	READ_PTR_FULL(ParticleSystem2, UParticleSystemComponent);
	READ_PTR_FULL(ParticleSystem1, UParticleSystemComponent);
	READ_PTR_FULL(PostProcess, UPostProcessComponent);
	READ_PTR_FULL(Box, UBoxComponent);
	READ_PTR_FULL(PointLight1, UPointLightComponent);
	READ_PTR_FULL(StaticMesh6, UStaticMeshComponent);
	READ_PTR_FULL(StaticMesh4, UStaticMeshComponent);
	READ_PTR_FULL(StaticMesh3, UStaticMeshComponent);
	READ_PTR_FULL(Pot, UStaticMeshComponent);
	READ_PTR_FULL(Candle1, UStaticMeshComponent);
	READ_PTR_FULL(AudioSpace, UChildActorComponent);
	READ_PTR_FULL(bld_tvn_post_01_d, UStaticMeshComponent);
	READ_PTR_FULL(bld_par_weathervane_01_c, UStaticMeshComponent);
	READ_PTR_FULL(cmn_candle_01_c1, UStaticMeshComponent);
	READ_PTR_FULL(cmn_clay_vase_02_a, UStaticMeshComponent);
	READ_PTR_FULL(bld_pot_shop_table_bsp_01_a, UStaticMeshComponent);
	READ_PTR_FULL(bld_prem_shop_01_a, UStaticMeshComponent);
	READ_PTR_FULL(cmn_animal_cage_01_a, UStaticMeshComponent);
	READ_PTR_FULL(cmn_candle_01_e1, UStaticMeshComponent);
	READ_PTR_FULL(gmp_bar_stor_01_a, UStaticMeshComponent);
	READ_PTR_FULL(cap_cabin_trunk_cloth_01_a, UStaticMeshComponent);
	READ_PTR_FULL(bld_shop_wood_box_03_a1, UStaticMeshComponent);
	READ_PTR_FULL(bld_shop_wood_box_02_a, UStaticMeshComponent);
	READ_PTR_FULL(bld_shop_wood_box_03_a, UStaticMeshComponent);
	READ_PTR_FULL(cap_cabin_books_aged_03_a, UStaticMeshComponent);
	READ_PTR_FULL(cap_cabin_books_02_a, UStaticMeshComponent);
	READ_PTR_FULL(cap_cabin_books_03_a, UStaticMeshComponent);
	READ_PTR_FULL(cmn_moneybag_01_a1, UStaticMeshComponent);
	READ_PTR_FULL(cmn_clay_vase_01_b, UStaticMeshComponent);
	READ_PTR_FULL(bld_enc_shop_pin_board_01_a, UStaticMeshComponent);
	READ_PTR_FULL(bld_int_large_sideboard_03_a, UStaticMeshComponent);
	READ_PTR_FULL(cmn_clay_pot_01_a, UStaticMeshComponent);
	READ_PTR_FULL(cap_cabin_map_rolls_01_a, UStaticMeshComponent);
	READ_PTR_FULL(bld_tvn_animal_rug_01_a, UStaticMeshComponent);
	READ_PTR_FULL(cap_cabin_curtain_03_a, UStaticMeshComponent);
	READ_PTR_FULL(bld_prem_shop_plenty_details_01_a, UStaticMeshComponent);
	READ_PTR_FULL(bld_pot_shop_door_frame_01_a, UStaticMeshComponent);
	READ_PTR_FULL(bld_pot_shop_roof_beam_01_a, UStaticMeshComponent);
	READ_PTR_FULL(bld_pot_shop_chimney_01_a, UStaticMeshComponent);
	READ_PTR_FULL(bld_pot_gate_01_a, UStaticMeshComponent);
	READ_PTR_FULL(bld_pot_fence_01_a, UStaticMeshComponent);
	READ_PTR_FULL(bld_pot_shop_window_01_a3, UStaticMeshComponent);
	READ_PTR_FULL(bld_pot_hatch_01_a, UStaticMeshComponent);
	READ_PTR_FULL(bld_pot_shop_door_01_a, UStaticMeshComponent);
	READ_PTR_FULL(bld_pot_shop_window_01_a2, UStaticMeshComponent);
	READ_PTR_FULL(bld_pot_shop_window_01_a1, UStaticMeshComponent);
	READ_PTR_FULL(bld_pot_shop_window_01_a, UStaticMeshComponent);
	READ_PTR_FULL(DefaultSceneRoot, USceneComponent);
}

void ABP_prem_shop_bsp_01_a_C::BeforeDelete()
{
	AActor::BeforeDelete();

	DELE_PTR_FULL(StaticMesh8);
	DELE_PTR_FULL(StaticMesh2);
	DELE_PTR_FULL(cap_cabin_books_02_a1);
	DELE_PTR_FULL(StaticMesh1);
	DELE_PTR_FULL(tls_lantern_01_e);
	DELE_PTR_FULL(cap_skull_candle_01_a);
	DELE_PTR_FULL(PointLight6);
	DELE_PTR_FULL(gmp_prm_reroll_01_a);
	DELE_PTR_FULL(bld_prem_shop_plinth_01_a);
	DELE_PTR_FULL(PetHangoutSpot);
	DELE_PTR_FULL(CompanyRegion);
	DELE_PTR_FULL(StaticMesh);
	DELE_PTR_FULL(PointLight9);
	DELE_PTR_FULL(PointLight8);
	DELE_PTR_FULL(PointLight14);
	DELE_PTR_FULL(PointLight10);
	DELE_PTR_FULL(SpotLight5);
	DELE_PTR_FULL(SpotLight4);
	DELE_PTR_FULL(PointLight7);
	DELE_PTR_FULL(SpotLight3);
	DELE_PTR_FULL(PointLight5);
	DELE_PTR_FULL(SpotLight2);
	DELE_PTR_FULL(PointLight4);
	DELE_PTR_FULL(PointLight3);
	DELE_PTR_FULL(PointLight2);
	DELE_PTR_FULL(PointLight);
	DELE_PTR_FULL(Book3);
	DELE_PTR_FULL(Book2);
	DELE_PTR_FULL(cap_model_01_a);
	DELE_PTR_FULL(ChildActor);
	DELE_PTR_FULL(cmn_rope_end_03_a);
	DELE_PTR_FULL(Book1);
	DELE_PTR_FULL(ParticleSystem);
	DELE_PTR_FULL(Candle2);
	DELE_PTR_FULL(cmn_driftwood_03_a);
	DELE_PTR_FULL(Bottle6);
	DELE_PTR_FULL(Mannequin1);
	DELE_PTR_FULL(bld_int_small_sideboard_01_a);
	DELE_PTR_FULL(Bottle3);
	DELE_PTR_FULL(Moneybag1);
	DELE_PTR_FULL(cmn_moneybag_ancient_01_a);
	DELE_PTR_FULL(Dreamcatcher3);
	DELE_PTR_FULL(Dreamcatcher2);
	DELE_PTR_FULL(Pole1);
	DELE_PTR_FULL(shp_int_map_ceiling_beam_01_a);
	DELE_PTR_FULL(bld_shop_bird_ladder_prm_01_c);
	DELE_PTR_FULL(shp_small_mast_bell_support_01_a);
	DELE_PTR_FULL(cmn_banana_bunch_01_a);
	DELE_PTR_FULL(Dreamcatcher1);
	DELE_PTR_FULL(PetCollar3);
	DELE_PTR_FULL(Ladder2);
	DELE_PTR_FULL(bld_shop_bird_ladder_prm_01_b);
	DELE_PTR_FULL(bld_out_shop_hanging_wood_01_a);
	DELE_PTR_FULL(Ladder1);
	DELE_PTR_FULL(PetCollar2);
	DELE_PTR_FULL(PetCollar1);
	DELE_PTR_FULL(Hooks1);
	DELE_PTR_FULL(bld_int_wall_coat_rack_03_a);
	DELE_PTR_FULL(bld_shop_wind_chime_prm_01_a);
	DELE_PTR_FULL(trs_money_sack_medium_01_a3);
	DELE_PTR_FULL(trs_money_sack_medium_01_a1);
	DELE_PTR_FULL(trs_money_sack_medium_01_a2);
	DELE_PTR_FULL(trs_money_sack_medium_01_a);
	DELE_PTR_FULL(cmn_mannequin_parrot_01_a);
	DELE_PTR_FULL(bld_prem_shop_drapes_01_a);
	DELE_PTR_FULL(BP_wil_monkey_02);
	DELE_PTR_FULL(BP_wil_parrot_01);
	DELE_PTR_FULL(bld_shop_sign_ancient_01_a);
	DELE_PTR_FULL(bld_shop_cloth_ancient_01_a);
	DELE_PTR_FULL(gmp_bar_stor_01_a1);
	DELE_PTR_FULL(StaticMesh7);
	DELE_PTR_FULL(StaticMesh5);
	DELE_PTR_FULL(cmn_bird_cage_01_a);
	DELE_PTR_FULL(cap_cage_01_a);
	DELE_PTR_FULL(ptn_cure_01_d);
	DELE_PTR_FULL(bld_cls_shop_bird_cage_01_a);
	DELE_PTR_FULL(bld_prem_shop_rope_details_01_d);
	DELE_PTR_FULL(cmn_petCollar_01_a);
	DELE_PTR_FULL(SpotLight7);
	DELE_PTR_FULL(SpotLight6);
	DELE_PTR_FULL(ParticleSystem3);
	DELE_PTR_FULL(ParticleSystem2);
	DELE_PTR_FULL(ParticleSystem1);
	DELE_PTR_FULL(PostProcess);
	DELE_PTR_FULL(Box);
	DELE_PTR_FULL(PointLight1);
	DELE_PTR_FULL(StaticMesh6);
	DELE_PTR_FULL(StaticMesh4);
	DELE_PTR_FULL(StaticMesh3);
	DELE_PTR_FULL(Pot);
	DELE_PTR_FULL(Candle1);
	DELE_PTR_FULL(AudioSpace);
	DELE_PTR_FULL(bld_tvn_post_01_d);
	DELE_PTR_FULL(bld_par_weathervane_01_c);
	DELE_PTR_FULL(cmn_candle_01_c1);
	DELE_PTR_FULL(cmn_clay_vase_02_a);
	DELE_PTR_FULL(bld_pot_shop_table_bsp_01_a);
	DELE_PTR_FULL(bld_prem_shop_01_a);
	DELE_PTR_FULL(cmn_animal_cage_01_a);
	DELE_PTR_FULL(cmn_candle_01_e1);
	DELE_PTR_FULL(gmp_bar_stor_01_a);
	DELE_PTR_FULL(cap_cabin_trunk_cloth_01_a);
	DELE_PTR_FULL(bld_shop_wood_box_03_a1);
	DELE_PTR_FULL(bld_shop_wood_box_02_a);
	DELE_PTR_FULL(bld_shop_wood_box_03_a);
	DELE_PTR_FULL(cap_cabin_books_aged_03_a);
	DELE_PTR_FULL(cap_cabin_books_02_a);
	DELE_PTR_FULL(cap_cabin_books_03_a);
	DELE_PTR_FULL(cmn_moneybag_01_a1);
	DELE_PTR_FULL(cmn_clay_vase_01_b);
	DELE_PTR_FULL(bld_enc_shop_pin_board_01_a);
	DELE_PTR_FULL(bld_int_large_sideboard_03_a);
	DELE_PTR_FULL(cmn_clay_pot_01_a);
	DELE_PTR_FULL(cap_cabin_map_rolls_01_a);
	DELE_PTR_FULL(bld_tvn_animal_rug_01_a);
	DELE_PTR_FULL(cap_cabin_curtain_03_a);
	DELE_PTR_FULL(bld_prem_shop_plenty_details_01_a);
	DELE_PTR_FULL(bld_pot_shop_door_frame_01_a);
	DELE_PTR_FULL(bld_pot_shop_roof_beam_01_a);
	DELE_PTR_FULL(bld_pot_shop_chimney_01_a);
	DELE_PTR_FULL(bld_pot_gate_01_a);
	DELE_PTR_FULL(bld_pot_fence_01_a);
	DELE_PTR_FULL(bld_pot_shop_window_01_a3);
	DELE_PTR_FULL(bld_pot_hatch_01_a);
	DELE_PTR_FULL(bld_pot_shop_door_01_a);
	DELE_PTR_FULL(bld_pot_shop_window_01_a2);
	DELE_PTR_FULL(bld_pot_shop_window_01_a1);
	DELE_PTR_FULL(bld_pot_shop_window_01_a);
	DELE_PTR_FULL(DefaultSceneRoot);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
