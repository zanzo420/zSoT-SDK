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

// Function BP_Campaign005_CursedSails_ClothingCecil_PreCursedSails.BP_Campaign005_CursedSails_ClothingCecil_PreCursedSails_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
void ABP_Campaign005_CursedSails_ClothingCecil_PreCursedSails_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Campaign005_CursedSails_ClothingCecil_PreCursedSails.BP_Campaign005_CursedSails_ClothingCecil_PreCursedSails_C.UserConstructionScript");

	ABP_Campaign005_CursedSails_ClothingCecil_PreCursedSails_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void ABP_Campaign005_CursedSails_ClothingCecil_PreCursedSails_C::AfterRead()
{
	ABP_Clothing_C::AfterRead();

}

void ABP_Campaign005_CursedSails_ClothingCecil_PreCursedSails_C::BeforeDelete()
{
	ABP_Clothing_C::BeforeDelete();

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
