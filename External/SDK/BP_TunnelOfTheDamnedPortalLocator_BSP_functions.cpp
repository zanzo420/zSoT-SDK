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

// Function BP_TunnelOfTheDamnedPortalLocator_BSP.BP_TunnelOfTheDamnedPortalLocator_BSP_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
void ABP_TunnelOfTheDamnedPortalLocator_BSP_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TunnelOfTheDamnedPortalLocator_BSP.BP_TunnelOfTheDamnedPortalLocator_BSP_C.UserConstructionScript");

	ABP_TunnelOfTheDamnedPortalLocator_BSP_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void ABP_TunnelOfTheDamnedPortalLocator_BSP_C::AfterRead()
{
	APortalLocatorActor::AfterRead();

	READ_PTR_FULL(SignalAnchor, UChildActorComponent);
	READ_PTR_FULL(CalmWater, UChildActorComponent);
	READ_PTR_FULL(Visuals, UChildActorComponent);
}

void ABP_TunnelOfTheDamnedPortalLocator_BSP_C::BeforeDelete()
{
	APortalLocatorActor::BeforeDelete();

	DELE_PTR_FULL(SignalAnchor);
	DELE_PTR_FULL(CalmWater);
	DELE_PTR_FULL(Visuals);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
