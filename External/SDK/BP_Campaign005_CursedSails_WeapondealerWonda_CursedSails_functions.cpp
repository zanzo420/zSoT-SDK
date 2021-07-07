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

// Function BP_Campaign005_CursedSails_WeapondealerWonda_CursedSails.BP_Campaign005_CursedSails_WeapondealerWonda_CursedSails_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
void ABP_Campaign005_CursedSails_WeapondealerWonda_CursedSails_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Campaign005_CursedSails_WeapondealerWonda_CursedSails.BP_Campaign005_CursedSails_WeapondealerWonda_CursedSails_C.UserConstructionScript");

	ABP_Campaign005_CursedSails_WeapondealerWonda_CursedSails_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void ABP_Campaign005_CursedSails_WeapondealerWonda_CursedSails_C::AfterRead()
{
	ABP_Weapondealer_C::AfterRead();

	READ_PTR_FULL(SolidHits_1, UCapsuleComponent);
	READ_PTR_FULL(AnimNotifyWwiseEmitter_1, UAnimNotifyWwiseEmitterComponent);
}

void ABP_Campaign005_CursedSails_WeapondealerWonda_CursedSails_C::BeforeDelete()
{
	ABP_Weapondealer_C::BeforeDelete();

	DELE_PTR_FULL(SolidHits_1);
	DELE_PTR_FULL(AnimNotifyWwiseEmitter_1);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
