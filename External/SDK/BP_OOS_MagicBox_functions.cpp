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

// Function BP_OOS_MagicBox.BP_OOS_MagicBox_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
void ABP_OOS_MagicBox_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_OOS_MagicBox.BP_OOS_MagicBox_C.UserConstructionScript");

	ABP_OOS_MagicBox_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void ABP_OOS_MagicBox_C::AfterRead()
{
	AActor::AfterRead();

	READ_PTR_FULL(SkeletalMesh, USkeletalMeshComponent);
	READ_PTR_FULL(DefaultSceneRoot, USceneComponent);
}

void ABP_OOS_MagicBox_C::BeforeDelete()
{
	AActor::BeforeDelete();

	DELE_PTR_FULL(SkeletalMesh);
	DELE_PTR_FULL(DefaultSceneRoot);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
