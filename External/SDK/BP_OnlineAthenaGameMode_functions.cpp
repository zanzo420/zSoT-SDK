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

// Function BP_OnlineAthenaGameMode.BP_OnlineAthenaGameMode_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
void ABP_OnlineAthenaGameMode_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_OnlineAthenaGameMode.BP_OnlineAthenaGameMode_C.UserConstructionScript");

	ABP_OnlineAthenaGameMode_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void ABP_OnlineAthenaGameMode_C::AfterRead()
{
	AOnlineAthenaGameMode::AfterRead();

	READ_PTR_FULL(DefaultSceneRoot, USceneComponent);
}

void ABP_OnlineAthenaGameMode_C::BeforeDelete()
{
	AOnlineAthenaGameMode::BeforeDelete();

	DELE_PTR_FULL(DefaultSceneRoot);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif