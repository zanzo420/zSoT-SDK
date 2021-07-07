﻿// Name: SoT, Version: 2.2.0.2

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

// Function BP_Lantern_LargeShip_MapDeck_MapTable.BP_Lantern_LargeShip_MapDeck_MapTable_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
void ABP_Lantern_LargeShip_MapDeck_MapTable_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Lantern_LargeShip_MapDeck_MapTable.BP_Lantern_LargeShip_MapDeck_MapTable_C.UserConstructionScript");

	ABP_Lantern_LargeShip_MapDeck_MapTable_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void ABP_Lantern_LargeShip_MapDeck_MapTable_C::AfterRead()
{
	ABP_InteractableShipLantern_C::AfterRead();

}

void ABP_Lantern_LargeShip_MapDeck_MapTable_C::BeforeDelete()
{
	ABP_InteractableShipLantern_C::BeforeDelete();

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
