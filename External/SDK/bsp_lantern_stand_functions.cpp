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

// Function bsp_lantern_stand.bsp_lantern_stand_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
void Absp_lantern_stand_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function bsp_lantern_stand.bsp_lantern_stand_C.UserConstructionScript");

	Absp_lantern_stand_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void Absp_lantern_stand_C::AfterRead()
{
	AActor::AfterRead();

	READ_PTR_FULL(SpotLight, USpotLightComponent);
	READ_PTR_FULL(StaticMeshComponent01, UStaticMeshComponent);
	READ_PTR_FULL(StaticMeshComponent0, UStaticMeshComponent);
	READ_PTR_FULL(SharedRoot, USceneComponent);
}

void Absp_lantern_stand_C::BeforeDelete()
{
	AActor::BeforeDelete();

	DELE_PTR_FULL(SpotLight);
	DELE_PTR_FULL(StaticMeshComponent01);
	DELE_PTR_FULL(StaticMeshComponent0);
	DELE_PTR_FULL(SharedRoot);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
