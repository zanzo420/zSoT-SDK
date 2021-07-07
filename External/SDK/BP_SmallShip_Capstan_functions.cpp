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

// Function BP_SmallShip_Capstan.BP_SmallShip_Capstan_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
void ABP_SmallShip_Capstan_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SmallShip_Capstan.BP_SmallShip_Capstan_C.UserConstructionScript");

	ABP_SmallShip_Capstan_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void ABP_SmallShip_Capstan_C::AfterRead()
{
	ABP_Base_Capstan_C::AfterRead();

	READ_PTR_FULL(Arm1, UChildActorComponent);
	READ_PTR_FULL(Arm2, UChildActorComponent);
}

void ABP_SmallShip_Capstan_C::BeforeDelete()
{
	ABP_Base_Capstan_C::BeforeDelete();

	DELE_PTR_FULL(Arm1);
	DELE_PTR_FULL(Arm2);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
