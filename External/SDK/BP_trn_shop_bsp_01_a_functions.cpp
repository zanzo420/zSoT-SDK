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

// Function BP_trn_shop_bsp_01_a.BP_trn_shop_bsp_01_a_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
void ABP_trn_shop_bsp_01_a_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_trn_shop_bsp_01_a.BP_trn_shop_bsp_01_a_C.UserConstructionScript");

	ABP_trn_shop_bsp_01_a_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void ABP_trn_shop_bsp_01_a_C::AfterRead()
{
	AActor::AfterRead();

	READ_PTR_FULL(PetHangoutSpot, UPetHangoutSpotComponent);
	READ_PTR_FULL(bsp_trn_shop_dressing_01_b, UStaticMeshComponent);
	READ_PTR_FULL(bsp_trn_shop_dressing_01_a, UStaticMeshComponent);
	READ_PTR_FULL(StaticMesh38, UStaticMeshComponent);
	READ_PTR_FULL(StaticMesh37, UStaticMeshComponent);
	READ_PTR_FULL(bld_trn_shop_hanging_sign_01_a, UStaticMeshComponent);
	READ_PTR_FULL(SpotLight3, USpotLightComponent);
	READ_PTR_FULL(SpotLight2, USpotLightComponent);
	READ_PTR_FULL(BP_MusicBox, UChildActorComponent);
	READ_PTR_FULL(BP_IslandEquipmentChest, UChildActorComponent);
	READ_PTR_FULL(StaticMesh36, UStaticMeshComponent);
	READ_PTR_FULL(StaticMesh35, UStaticMeshComponent);
	READ_PTR_FULL(StaticMesh34, UStaticMeshComponent);
	READ_PTR_FULL(StaticMesh29, UStaticMeshComponent);
	READ_PTR_FULL(SpotLight1, USpotLightComponent);
	READ_PTR_FULL(PostProcess, UPostProcessComponent);
	READ_PTR_FULL(Box, UBoxComponent);
	READ_PTR_FULL(StaticMesh17, UStaticMeshComponent);
	READ_PTR_FULL(StaticMesh15, UStaticMeshComponent);
	READ_PTR_FULL(SpotLight, USpotLightComponent);
	READ_PTR_FULL(PointLight3, UPointLightComponent);
	READ_PTR_FULL(ChildActor2, UChildActorComponent);
	READ_PTR_FULL(PointLight2, UPointLightComponent);
	READ_PTR_FULL(ParticleSystem3, UParticleSystemComponent);
	READ_PTR_FULL(ParticleSystem2, UParticleSystemComponent);
	READ_PTR_FULL(StaticMesh33, UStaticMeshComponent);
	READ_PTR_FULL(StaticMesh32, UStaticMeshComponent);
	READ_PTR_FULL(StaticMesh31, UStaticMeshComponent);
	READ_PTR_FULL(cmn_rope_04_c, UStaticMeshComponent);
	READ_PTR_FULL(StaticMesh30, UStaticMeshComponent);
	READ_PTR_FULL(cmn_rope_end_05_a, UStaticMeshComponent);
	READ_PTR_FULL(ParticleSystem1, UParticleSystemComponent);
	READ_PTR_FULL(ParticleSystem, UParticleSystemComponent);
	READ_PTR_FULL(ChildActor1, UChildActorComponent);
	READ_PTR_FULL(ChildActor, UChildActorComponent);
	READ_PTR_FULL(StaticMesh4, UStaticMeshComponent);
	READ_PTR_FULL(cmn_lantern_01_a, UStaticMeshComponent);
	READ_PTR_FULL(PointLight1, UPointLightComponent);
	READ_PTR_FULL(PointLight, UPointLightComponent);
	READ_PTR_FULL(bld_shop_drapes_03_a, UStaticMeshComponent);
	READ_PTR_FULL(bld_trn_shop_hanging_glass_balls_01_a, UStaticMeshComponent);
	READ_PTR_FULL(bld_trn_shop_interior_cloth_01_a, UStaticMeshComponent);
	READ_PTR_FULL(StaticMesh11, UStaticMeshComponent);
	READ_PTR_FULL(StaticMesh8, UStaticMeshComponent);
	READ_PTR_FULL(StaticMesh6, UStaticMeshComponent);
	READ_PTR_FULL(cmn_oar_01_a, UStaticMeshComponent);
	READ_PTR_FULL(cmn_wheel_01_a, UStaticMeshComponent);
	READ_PTR_FULL(shp_kitchen_shelf_02_a, UStaticMeshComponent);
	READ_PTR_FULL(cmn_looted_box_01_a, UStaticMeshComponent);
	READ_PTR_FULL(bld_shop_wood_box_03_a1, UStaticMeshComponent);
	READ_PTR_FULL(bld_shop_wood_box_03_a, UStaticMeshComponent);
	READ_PTR_FULL(StaticMesh, UStaticMeshComponent);
	READ_PTR_FULL(rug, UStaticMeshComponent);
	READ_PTR_FULL(Barrel, UStaticMeshComponent);
	READ_PTR_FULL(bld_shop_table_01_a, UStaticMeshComponent);
	READ_PTR_FULL(AudioSpace, UChildActorComponent);
	READ_PTR_FULL(bld_trn_roof_beam_01_a, UStaticMeshComponent);
	READ_PTR_FULL(bld_trn_shop_window_01_b2, UStaticMeshComponent);
	READ_PTR_FULL(bld_trn_shop_window_01_b1, UStaticMeshComponent);
	READ_PTR_FULL(bld_trn_shop_window_01_b, UStaticMeshComponent);
	READ_PTR_FULL(bld_trn_shop_door_01_a, UStaticMeshComponent);
	READ_PTR_FULL(bld_trn_shop_01_a, UStaticMeshComponent);
	READ_PTR_FULL(DefaultSceneRoot, USceneComponent);
}

void ABP_trn_shop_bsp_01_a_C::BeforeDelete()
{
	AActor::BeforeDelete();

	DELE_PTR_FULL(PetHangoutSpot);
	DELE_PTR_FULL(bsp_trn_shop_dressing_01_b);
	DELE_PTR_FULL(bsp_trn_shop_dressing_01_a);
	DELE_PTR_FULL(StaticMesh38);
	DELE_PTR_FULL(StaticMesh37);
	DELE_PTR_FULL(bld_trn_shop_hanging_sign_01_a);
	DELE_PTR_FULL(SpotLight3);
	DELE_PTR_FULL(SpotLight2);
	DELE_PTR_FULL(BP_MusicBox);
	DELE_PTR_FULL(BP_IslandEquipmentChest);
	DELE_PTR_FULL(StaticMesh36);
	DELE_PTR_FULL(StaticMesh35);
	DELE_PTR_FULL(StaticMesh34);
	DELE_PTR_FULL(StaticMesh29);
	DELE_PTR_FULL(SpotLight1);
	DELE_PTR_FULL(PostProcess);
	DELE_PTR_FULL(Box);
	DELE_PTR_FULL(StaticMesh17);
	DELE_PTR_FULL(StaticMesh15);
	DELE_PTR_FULL(SpotLight);
	DELE_PTR_FULL(PointLight3);
	DELE_PTR_FULL(ChildActor2);
	DELE_PTR_FULL(PointLight2);
	DELE_PTR_FULL(ParticleSystem3);
	DELE_PTR_FULL(ParticleSystem2);
	DELE_PTR_FULL(StaticMesh33);
	DELE_PTR_FULL(StaticMesh32);
	DELE_PTR_FULL(StaticMesh31);
	DELE_PTR_FULL(cmn_rope_04_c);
	DELE_PTR_FULL(StaticMesh30);
	DELE_PTR_FULL(cmn_rope_end_05_a);
	DELE_PTR_FULL(ParticleSystem1);
	DELE_PTR_FULL(ParticleSystem);
	DELE_PTR_FULL(ChildActor1);
	DELE_PTR_FULL(ChildActor);
	DELE_PTR_FULL(StaticMesh4);
	DELE_PTR_FULL(cmn_lantern_01_a);
	DELE_PTR_FULL(PointLight1);
	DELE_PTR_FULL(PointLight);
	DELE_PTR_FULL(bld_shop_drapes_03_a);
	DELE_PTR_FULL(bld_trn_shop_hanging_glass_balls_01_a);
	DELE_PTR_FULL(bld_trn_shop_interior_cloth_01_a);
	DELE_PTR_FULL(StaticMesh11);
	DELE_PTR_FULL(StaticMesh8);
	DELE_PTR_FULL(StaticMesh6);
	DELE_PTR_FULL(cmn_oar_01_a);
	DELE_PTR_FULL(cmn_wheel_01_a);
	DELE_PTR_FULL(shp_kitchen_shelf_02_a);
	DELE_PTR_FULL(cmn_looted_box_01_a);
	DELE_PTR_FULL(bld_shop_wood_box_03_a1);
	DELE_PTR_FULL(bld_shop_wood_box_03_a);
	DELE_PTR_FULL(StaticMesh);
	DELE_PTR_FULL(rug);
	DELE_PTR_FULL(Barrel);
	DELE_PTR_FULL(bld_shop_table_01_a);
	DELE_PTR_FULL(AudioSpace);
	DELE_PTR_FULL(bld_trn_roof_beam_01_a);
	DELE_PTR_FULL(bld_trn_shop_window_01_b2);
	DELE_PTR_FULL(bld_trn_shop_window_01_b1);
	DELE_PTR_FULL(bld_trn_shop_window_01_b);
	DELE_PTR_FULL(bld_trn_shop_door_01_a);
	DELE_PTR_FULL(bld_trn_shop_01_a);
	DELE_PTR_FULL(DefaultSceneRoot);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
