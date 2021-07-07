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

// Function BP_BoilingWaterProjectile.BP_BoilingWaterProjectile_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
void ABP_BoilingWaterProjectile_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BoilingWaterProjectile.BP_BoilingWaterProjectile_C.UserConstructionScript");

	ABP_BoilingWaterProjectile_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void ABP_BoilingWaterProjectile_C::AfterRead()
{
	ALiquidProjectile::AfterRead();

	READ_PTR_FULL(Sphere, UStaticMeshComponent);
	READ_PTR_FULL(Collision, USphereComponent);
}

void ABP_BoilingWaterProjectile_C::BeforeDelete()
{
	ALiquidProjectile::BeforeDelete();

	DELE_PTR_FULL(Sphere);
	DELE_PTR_FULL(Collision);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
