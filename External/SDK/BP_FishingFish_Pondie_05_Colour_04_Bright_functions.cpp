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

// Function BP_FishingFish_Pondie_05_Colour_04_Bright.BP_FishingFish_Pondie_05_Colour_04_Bright_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
void ABP_FishingFish_Pondie_05_Colour_04_Bright_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FishingFish_Pondie_05_Colour_04_Bright.BP_FishingFish_Pondie_05_Colour_04_Bright_C.UserConstructionScript");

	ABP_FishingFish_Pondie_05_Colour_04_Bright_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void ABP_FishingFish_Pondie_05_Colour_04_Bright_C::AfterRead()
{
	ABP_FishingFish_Pondie_05_C::AfterRead();

}

void ABP_FishingFish_Pondie_05_Colour_04_Bright_C::BeforeDelete()
{
	ABP_FishingFish_Pondie_05_C::BeforeDelete();

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
