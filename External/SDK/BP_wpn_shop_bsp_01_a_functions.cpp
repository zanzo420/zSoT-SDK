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

// Function BP_wpn_shop_bsp_01_a.BP_wpn_shop_bsp_01_a_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
void ABP_wpn_shop_bsp_01_a_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_wpn_shop_bsp_01_a.BP_wpn_shop_bsp_01_a_C.UserConstructionScript");

	ABP_wpn_shop_bsp_01_a_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void ABP_wpn_shop_bsp_01_a_C::AfterRead()
{
	AActor::AfterRead();

	READ_PTR_FULL(PetHangoutSpot, UPetHangoutSpotComponent);
	READ_PTR_FULL(bsp_wpn_shop_dressing_01_c, UStaticMeshComponent);
	READ_PTR_FULL(bsp_wpn_shop_dressing_01_b, UStaticMeshComponent);
	READ_PTR_FULL(bsp_wpn_shop_dressing_01_a, UStaticMeshComponent);
	READ_PTR_FULL(SpotLight10, USpotLightComponent);
	READ_PTR_FULL(SpotLight9, USpotLightComponent);
	READ_PTR_FULL(SpotLight8, USpotLightComponent);
	READ_PTR_FULL(BP_IslandWeaponsChest, UChildActorComponent);
	READ_PTR_FULL(cmn_wooden_crate_01_a, UStaticMeshComponent);
	READ_PTR_FULL(StaticMesh2, UStaticMeshComponent);
	READ_PTR_FULL(StaticMesh27, UStaticMeshComponent);
	READ_PTR_FULL(StaticMesh26, UStaticMeshComponent);
	READ_PTR_FULL(StaticMesh25, UStaticMeshComponent);
	READ_PTR_FULL(StaticMesh24, UStaticMeshComponent);
	READ_PTR_FULL(StaticMesh21, UStaticMeshComponent);
	READ_PTR_FULL(StaticMesh20, UStaticMeshComponent);
	READ_PTR_FULL(PointLight5, UPointLightComponent);
	READ_PTR_FULL(ChildActor1, UChildActorComponent);
	READ_PTR_FULL(ChildActor, UChildActorComponent);
	READ_PTR_FULL(SpotLight7, USpotLightComponent);
	READ_PTR_FULL(ParticleSystem4, UParticleSystemComponent);
	READ_PTR_FULL(ParticleSystem3, UParticleSystemComponent);
	READ_PTR_FULL(ParticleSystem2, UParticleSystemComponent);
	READ_PTR_FULL(SpotLight6, USpotLightComponent);
	READ_PTR_FULL(tls_lantern_01_d, UStaticMeshComponent);
	READ_PTR_FULL(SpotLight5, USpotLightComponent);
	READ_PTR_FULL(PointLight4, UPointLightComponent);
	READ_PTR_FULL(StaticMesh33, UStaticMeshComponent);
	READ_PTR_FULL(StaticMesh32, UStaticMeshComponent);
	READ_PTR_FULL(SpotLight4, USpotLightComponent);
	READ_PTR_FULL(PointLight3, UPointLightComponent);
	READ_PTR_FULL(SpotLight3, USpotLightComponent);
	READ_PTR_FULL(SpotLight2, USpotLightComponent);
	READ_PTR_FULL(PointLight1, UPointLightComponent);
	READ_PTR_FULL(PointLight, UPointLightComponent);
	READ_PTR_FULL(PostProcess, UPostProcessComponent);
	READ_PTR_FULL(Box, UBoxComponent);
	READ_PTR_FULL(ParticleSystem1, UParticleSystemComponent);
	READ_PTR_FULL(SpotLight, USpotLightComponent);
	READ_PTR_FULL(ParticleSystem, UParticleSystemComponent);
	READ_PTR_FULL(StaticMesh16, UStaticMeshComponent);
	READ_PTR_FULL(wpn_heavy_sword_02_a, UStaticMeshComponent);
	READ_PTR_FULL(StaticMesh6, UStaticMeshComponent);
	READ_PTR_FULL(AudioSpace, UChildActorComponent);
	READ_PTR_FULL(StaticMesh22, UStaticMeshComponent);
	READ_PTR_FULL(StaticMesh18, UStaticMeshComponent);
	READ_PTR_FULL(StaticMesh13, UStaticMeshComponent);
	READ_PTR_FULL(StaticMesh5, UStaticMeshComponent);
	READ_PTR_FULL(StaticMesh1, UStaticMeshComponent);
	READ_PTR_FULL(bld_wpn_shop_pillars_01_b, UStaticMeshComponent);
	READ_PTR_FULL(bld_wpn_shop_doorframe_01_a, UStaticMeshComponent);
	READ_PTR_FULL(bld_wpn_shop_01_a, UStaticMeshComponent);
	READ_PTR_FULL(bld_wpn_shop_hanging_target_01_a, UStaticMeshComponent);
	READ_PTR_FULL(bld_wpn_shop_window_01_b, UStaticMeshComponent);
	READ_PTR_FULL(bld_wpn_shop_window_01_a, UStaticMeshComponent);
	READ_PTR_FULL(bld_wpn_shop_window_01_c2, UStaticMeshComponent);
	READ_PTR_FULL(bld_wpn_shop_window_01_c, UStaticMeshComponent);
	READ_PTR_FULL(bld_wpn_shop_lantern_01_b, UStaticMeshComponent);
	READ_PTR_FULL(bld_wpn_roof_beam_01_a, UStaticMeshComponent);
	READ_PTR_FULL(bld_shop_small_balcony_01_a, UStaticMeshComponent);
	READ_PTR_FULL(bld_wpn_shop_window_01_c1, UStaticMeshComponent);
	READ_PTR_FULL(bld_wpn_shop_window_01_b1, UStaticMeshComponent);
	READ_PTR_FULL(bld_wpn_shop_window_01_a1, UStaticMeshComponent);
	READ_PTR_FULL(bld_wpn_shop_sign_01_a, UStaticMeshComponent);
	READ_PTR_FULL(bld_wpn_shop_pillars_01_a, UStaticMeshComponent);
	READ_PTR_FULL(bld_wpn_shop_door_01_a, UStaticMeshComponent);
	READ_PTR_FULL(DefaultSceneRoot, USceneComponent);
}

void ABP_wpn_shop_bsp_01_a_C::BeforeDelete()
{
	AActor::BeforeDelete();

	DELE_PTR_FULL(PetHangoutSpot);
	DELE_PTR_FULL(bsp_wpn_shop_dressing_01_c);
	DELE_PTR_FULL(bsp_wpn_shop_dressing_01_b);
	DELE_PTR_FULL(bsp_wpn_shop_dressing_01_a);
	DELE_PTR_FULL(SpotLight10);
	DELE_PTR_FULL(SpotLight9);
	DELE_PTR_FULL(SpotLight8);
	DELE_PTR_FULL(BP_IslandWeaponsChest);
	DELE_PTR_FULL(cmn_wooden_crate_01_a);
	DELE_PTR_FULL(StaticMesh2);
	DELE_PTR_FULL(StaticMesh27);
	DELE_PTR_FULL(StaticMesh26);
	DELE_PTR_FULL(StaticMesh25);
	DELE_PTR_FULL(StaticMesh24);
	DELE_PTR_FULL(StaticMesh21);
	DELE_PTR_FULL(StaticMesh20);
	DELE_PTR_FULL(PointLight5);
	DELE_PTR_FULL(ChildActor1);
	DELE_PTR_FULL(ChildActor);
	DELE_PTR_FULL(SpotLight7);
	DELE_PTR_FULL(ParticleSystem4);
	DELE_PTR_FULL(ParticleSystem3);
	DELE_PTR_FULL(ParticleSystem2);
	DELE_PTR_FULL(SpotLight6);
	DELE_PTR_FULL(tls_lantern_01_d);
	DELE_PTR_FULL(SpotLight5);
	DELE_PTR_FULL(PointLight4);
	DELE_PTR_FULL(StaticMesh33);
	DELE_PTR_FULL(StaticMesh32);
	DELE_PTR_FULL(SpotLight4);
	DELE_PTR_FULL(PointLight3);
	DELE_PTR_FULL(SpotLight3);
	DELE_PTR_FULL(SpotLight2);
	DELE_PTR_FULL(PointLight1);
	DELE_PTR_FULL(PointLight);
	DELE_PTR_FULL(PostProcess);
	DELE_PTR_FULL(Box);
	DELE_PTR_FULL(ParticleSystem1);
	DELE_PTR_FULL(SpotLight);
	DELE_PTR_FULL(ParticleSystem);
	DELE_PTR_FULL(StaticMesh16);
	DELE_PTR_FULL(wpn_heavy_sword_02_a);
	DELE_PTR_FULL(StaticMesh6);
	DELE_PTR_FULL(AudioSpace);
	DELE_PTR_FULL(StaticMesh22);
	DELE_PTR_FULL(StaticMesh18);
	DELE_PTR_FULL(StaticMesh13);
	DELE_PTR_FULL(StaticMesh5);
	DELE_PTR_FULL(StaticMesh1);
	DELE_PTR_FULL(bld_wpn_shop_pillars_01_b);
	DELE_PTR_FULL(bld_wpn_shop_doorframe_01_a);
	DELE_PTR_FULL(bld_wpn_shop_01_a);
	DELE_PTR_FULL(bld_wpn_shop_hanging_target_01_a);
	DELE_PTR_FULL(bld_wpn_shop_window_01_b);
	DELE_PTR_FULL(bld_wpn_shop_window_01_a);
	DELE_PTR_FULL(bld_wpn_shop_window_01_c2);
	DELE_PTR_FULL(bld_wpn_shop_window_01_c);
	DELE_PTR_FULL(bld_wpn_shop_lantern_01_b);
	DELE_PTR_FULL(bld_wpn_roof_beam_01_a);
	DELE_PTR_FULL(bld_shop_small_balcony_01_a);
	DELE_PTR_FULL(bld_wpn_shop_window_01_c1);
	DELE_PTR_FULL(bld_wpn_shop_window_01_b1);
	DELE_PTR_FULL(bld_wpn_shop_window_01_a1);
	DELE_PTR_FULL(bld_wpn_shop_sign_01_a);
	DELE_PTR_FULL(bld_wpn_shop_pillars_01_a);
	DELE_PTR_FULL(bld_wpn_shop_door_01_a);
	DELE_PTR_FULL(DefaultSceneRoot);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
