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

// Function BP_TunnelOfTheDamnedPortal_WLD.BP_TunnelOfTheDamnedPortal_WLD_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
void ABP_TunnelOfTheDamnedPortal_WLD_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TunnelOfTheDamnedPortal_WLD.BP_TunnelOfTheDamnedPortal_WLD_C.UserConstructionScript");

	ABP_TunnelOfTheDamnedPortal_WLD_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void ABP_TunnelOfTheDamnedPortal_WLD_C::AfterRead()
{
	ABP_TunnelOfTheDamnedPortal_Ship_C::AfterRead();

	READ_PTR_FULL(PortalEffects, UChildActorComponent);
}

void ABP_TunnelOfTheDamnedPortal_WLD_C::BeforeDelete()
{
	ABP_TunnelOfTheDamnedPortal_Ship_C::BeforeDelete();

	DELE_PTR_FULL(PortalEffects);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
