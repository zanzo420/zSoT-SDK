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

// Function BP_FirePropagationActor_SmallShip.BP_FirePropagationActor_SmallShip_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
void ABP_FirePropagationActor_SmallShip_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FirePropagationActor_SmallShip.BP_FirePropagationActor_SmallShip_C.UserConstructionScript");

	ABP_FirePropagationActor_SmallShip_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void ABP_FirePropagationActor_SmallShip_C::AfterRead()
{
	AActor::AfterRead();

	READ_PTR_FULL(ShipFirePropagation, UShipFirePropagationComponent);
	READ_PTR_FULL(DefaultSceneRoot, USceneComponent);
}

void ABP_FirePropagationActor_SmallShip_C::BeforeDelete()
{
	AActor::BeforeDelete();

	DELE_PTR_FULL(ShipFirePropagation);
	DELE_PTR_FULL(DefaultSceneRoot);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
