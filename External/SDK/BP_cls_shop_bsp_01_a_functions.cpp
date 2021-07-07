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

// Function BP_cls_shop_bsp_01_a.BP_cls_shop_bsp_01_a_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
void ABP_cls_shop_bsp_01_a_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_cls_shop_bsp_01_a.BP_cls_shop_bsp_01_a_C.UserConstructionScript");

	ABP_cls_shop_bsp_01_a_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void ABP_cls_shop_bsp_01_a_C::AfterRead()
{
	AActor::AfterRead();

	READ_PTR_FULL(bld_cls_shop_mannequin_01_a1, UStaticMeshComponent);
	READ_PTR_FULL(bld_cls_shop_mannequin_01_a, UStaticMeshComponent);
	READ_PTR_FULL(PetHangoutSpot, UPetHangoutSpotComponent);
	READ_PTR_FULL(bsp_cls_shop_dressing_01_b, UStaticMeshComponent);
	READ_PTR_FULL(Collision_02, UBoxComponent);
	READ_PTR_FULL(Collision_01, UBoxComponent);
	READ_PTR_FULL(bsp_cls_shop_dressing_01_a, UStaticMeshComponent);
	READ_PTR_FULL(SpotLight8, USpotLightComponent);
	READ_PTR_FULL(SpotLight7, USpotLightComponent);
	READ_PTR_FULL(BP_IslandVanityChest, UChildActorComponent);
	READ_PTR_FULL(StaticMesh7, UStaticMeshComponent);
	READ_PTR_FULL(BP_IslandStorageBarrel_Outpost3, UChildActorComponent);
	READ_PTR_FULL(BP_IslandStorageBarrel_Outpost2, UChildActorComponent);
	READ_PTR_FULL(BP_IslandStorageBarrel_Outpost1, UChildActorComponent);
	READ_PTR_FULL(BP_IslandClothingChest, UChildActorComponent);
	READ_PTR_FULL(ChildActor1, UChildActorComponent);
	READ_PTR_FULL(ChildActor, UChildActorComponent);
	READ_PTR_FULL(wsp_bottle_burner, UChildActorComponent);
	READ_PTR_FULL(NoRain_Volume5, UStaticMeshComponent);
	READ_PTR_FULL(NoRain_Volume4, UStaticMeshComponent);
	READ_PTR_FULL(NoRain_Volume3, UStaticMeshComponent);
	READ_PTR_FULL(NoRain_Volume2, UStaticMeshComponent);
	READ_PTR_FULL(NoRain_Volume, UStaticMeshComponent);
	READ_PTR_FULL(SpotLight6, USpotLightComponent);
	READ_PTR_FULL(SpotLight5, USpotLightComponent);
	READ_PTR_FULL(SpotLight4, USpotLightComponent);
	READ_PTR_FULL(SpotLight3, USpotLightComponent);
	READ_PTR_FULL(SpotLight2, USpotLightComponent);
	READ_PTR_FULL(SpotLight1, USpotLightComponent);
	READ_PTR_FULL(SpotLight, USpotLightComponent);
	READ_PTR_FULL(PointLight, UPointLightComponent);
	READ_PTR_FULL(PostProcess, UPostProcessComponent);
	READ_PTR_FULL(Box, UBoxComponent);
	READ_PTR_FULL(AudioSpace, UChildActorComponent);
	READ_PTR_FULL(StaticMesh14, UStaticMeshComponent);
	READ_PTR_FULL(cmn_moneybag_01_a, UStaticMeshComponent);
	READ_PTR_FULL(StaticMesh13, UStaticMeshComponent);
	READ_PTR_FULL(StaticMesh12, UStaticMeshComponent);
	READ_PTR_FULL(StaticMesh11, UStaticMeshComponent);
	READ_PTR_FULL(StaticMesh10, UStaticMeshComponent);
	READ_PTR_FULL(StaticMesh9, UStaticMeshComponent);
	READ_PTR_FULL(StaticMesh8, UStaticMeshComponent);
	READ_PTR_FULL(cmn_barrel_debris_02_a, UStaticMeshComponent);
	READ_PTR_FULL(cmn_barrel_debris_03_a, UStaticMeshComponent);
	READ_PTR_FULL(cmn_barrel_debris_01_a, UStaticMeshComponent);
	READ_PTR_FULL(bld_shop_drapes_02_a, UStaticMeshComponent);
	READ_PTR_FULL(bld_cls_shop_hanging_cloth_03_a, UStaticMeshComponent);
	READ_PTR_FULL(bld_enc_shop_rug_01_a, UStaticMeshComponent);
	READ_PTR_FULL(bld_cls_shop_hanging_rope_01_a, UStaticMeshComponent);
	READ_PTR_FULL(bld_cls_shop_hanging_cloth_02_a, UStaticMeshComponent);
	READ_PTR_FULL(bld_cls_shp_dye_pot_lid_01_c, UStaticMeshComponent);
	READ_PTR_FULL(bld_cls_shp_dye_pot_lid_01_b, UStaticMeshComponent);
	READ_PTR_FULL(bld_cls_shp_dye_pot_01_c, UStaticMeshComponent);
	READ_PTR_FULL(bld_cls_shp_dye_pot_01_b, UStaticMeshComponent);
	READ_PTR_FULL(bld_shop_drapes_01_a, UStaticMeshComponent);
	READ_PTR_FULL(bld_shop_rug_01_a, UStaticMeshComponent);
	READ_PTR_FULL(bld_shop_table_01_a, UStaticMeshComponent);
	READ_PTR_FULL(bld_cls_shp_sign_01_a, UStaticMeshComponent);
	READ_PTR_FULL(bld_cls_shp_porch_mat_01_a, UStaticMeshComponent);
	READ_PTR_FULL(bld_cls_shp_stairs_01_a, UStaticMeshComponent);
	READ_PTR_FULL(bld_cls_shop_door_01_a, UStaticMeshComponent);
	READ_PTR_FULL(bld_cls_shop_window_01_a2, UStaticMeshComponent);
	READ_PTR_FULL(bld_cls_shop_window_01_a1, UStaticMeshComponent);
	READ_PTR_FULL(bld_cls_shop_window_01_a, UStaticMeshComponent);
	READ_PTR_FULL(bld_cls_shp_clothes_lines_01_a, UStaticMeshComponent);
	READ_PTR_FULL(bld_cls_shp_hanging_cloth_01_a, UStaticMeshComponent);
	READ_PTR_FULL(bld_cls_shp_side_roof_01_a, UStaticMeshComponent);
	READ_PTR_FULL(bld_cls_shp_main_roof_01_a, UStaticMeshComponent);
	READ_PTR_FULL(bld_cls_shop_01_a, UStaticMeshComponent);
	READ_PTR_FULL(DefaultSceneRoot, USceneComponent);
}

void ABP_cls_shop_bsp_01_a_C::BeforeDelete()
{
	AActor::BeforeDelete();

	DELE_PTR_FULL(bld_cls_shop_mannequin_01_a1);
	DELE_PTR_FULL(bld_cls_shop_mannequin_01_a);
	DELE_PTR_FULL(PetHangoutSpot);
	DELE_PTR_FULL(bsp_cls_shop_dressing_01_b);
	DELE_PTR_FULL(Collision_02);
	DELE_PTR_FULL(Collision_01);
	DELE_PTR_FULL(bsp_cls_shop_dressing_01_a);
	DELE_PTR_FULL(SpotLight8);
	DELE_PTR_FULL(SpotLight7);
	DELE_PTR_FULL(BP_IslandVanityChest);
	DELE_PTR_FULL(StaticMesh7);
	DELE_PTR_FULL(BP_IslandStorageBarrel_Outpost3);
	DELE_PTR_FULL(BP_IslandStorageBarrel_Outpost2);
	DELE_PTR_FULL(BP_IslandStorageBarrel_Outpost1);
	DELE_PTR_FULL(BP_IslandClothingChest);
	DELE_PTR_FULL(ChildActor1);
	DELE_PTR_FULL(ChildActor);
	DELE_PTR_FULL(wsp_bottle_burner);
	DELE_PTR_FULL(NoRain_Volume5);
	DELE_PTR_FULL(NoRain_Volume4);
	DELE_PTR_FULL(NoRain_Volume3);
	DELE_PTR_FULL(NoRain_Volume2);
	DELE_PTR_FULL(NoRain_Volume);
	DELE_PTR_FULL(SpotLight6);
	DELE_PTR_FULL(SpotLight5);
	DELE_PTR_FULL(SpotLight4);
	DELE_PTR_FULL(SpotLight3);
	DELE_PTR_FULL(SpotLight2);
	DELE_PTR_FULL(SpotLight1);
	DELE_PTR_FULL(SpotLight);
	DELE_PTR_FULL(PointLight);
	DELE_PTR_FULL(PostProcess);
	DELE_PTR_FULL(Box);
	DELE_PTR_FULL(AudioSpace);
	DELE_PTR_FULL(StaticMesh14);
	DELE_PTR_FULL(cmn_moneybag_01_a);
	DELE_PTR_FULL(StaticMesh13);
	DELE_PTR_FULL(StaticMesh12);
	DELE_PTR_FULL(StaticMesh11);
	DELE_PTR_FULL(StaticMesh10);
	DELE_PTR_FULL(StaticMesh9);
	DELE_PTR_FULL(StaticMesh8);
	DELE_PTR_FULL(cmn_barrel_debris_02_a);
	DELE_PTR_FULL(cmn_barrel_debris_03_a);
	DELE_PTR_FULL(cmn_barrel_debris_01_a);
	DELE_PTR_FULL(bld_shop_drapes_02_a);
	DELE_PTR_FULL(bld_cls_shop_hanging_cloth_03_a);
	DELE_PTR_FULL(bld_enc_shop_rug_01_a);
	DELE_PTR_FULL(bld_cls_shop_hanging_rope_01_a);
	DELE_PTR_FULL(bld_cls_shop_hanging_cloth_02_a);
	DELE_PTR_FULL(bld_cls_shp_dye_pot_lid_01_c);
	DELE_PTR_FULL(bld_cls_shp_dye_pot_lid_01_b);
	DELE_PTR_FULL(bld_cls_shp_dye_pot_01_c);
	DELE_PTR_FULL(bld_cls_shp_dye_pot_01_b);
	DELE_PTR_FULL(bld_shop_drapes_01_a);
	DELE_PTR_FULL(bld_shop_rug_01_a);
	DELE_PTR_FULL(bld_shop_table_01_a);
	DELE_PTR_FULL(bld_cls_shp_sign_01_a);
	DELE_PTR_FULL(bld_cls_shp_porch_mat_01_a);
	DELE_PTR_FULL(bld_cls_shp_stairs_01_a);
	DELE_PTR_FULL(bld_cls_shop_door_01_a);
	DELE_PTR_FULL(bld_cls_shop_window_01_a2);
	DELE_PTR_FULL(bld_cls_shop_window_01_a1);
	DELE_PTR_FULL(bld_cls_shop_window_01_a);
	DELE_PTR_FULL(bld_cls_shp_clothes_lines_01_a);
	DELE_PTR_FULL(bld_cls_shp_hanging_cloth_01_a);
	DELE_PTR_FULL(bld_cls_shp_side_roof_01_a);
	DELE_PTR_FULL(bld_cls_shp_main_roof_01_a);
	DELE_PTR_FULL(bld_cls_shop_01_a);
	DELE_PTR_FULL(DefaultSceneRoot);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
