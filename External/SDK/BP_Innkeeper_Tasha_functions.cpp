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

// Function BP_Innkeeper_Tasha.BP_Innkeeper_Tasha_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
void ABP_Innkeeper_Tasha_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Innkeeper_Tasha.BP_Innkeeper_Tasha_C.UserConstructionScript");

	ABP_Innkeeper_Tasha_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void ABP_Innkeeper_Tasha_C::AfterRead()
{
	ABP_Innkeeper_C::AfterRead();

}

void ABP_Innkeeper_Tasha_C::BeforeDelete()
{
	ABP_Innkeeper_C::BeforeDelete();

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
