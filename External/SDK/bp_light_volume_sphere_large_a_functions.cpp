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

// Function bp_light_volume_sphere_large_a.bp_light_volume_sphere_large_a_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
void Abp_light_volume_sphere_large_a_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function bp_light_volume_sphere_large_a.bp_light_volume_sphere_large_a_C.UserConstructionScript");

	Abp_light_volume_sphere_large_a_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void Abp_light_volume_sphere_large_a_C::AfterRead()
{
	AActor::AfterRead();

	READ_PTR_FULL(Billboard, UBillboardComponent);
	READ_PTR_FULL(StaticMeshComponent0, UStaticMeshComponent);
}

void Abp_light_volume_sphere_large_a_C::BeforeDelete()
{
	AActor::BeforeDelete();

	DELE_PTR_FULL(Billboard);
	DELE_PTR_FULL(StaticMeshComponent0);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
