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

// Function BP_NPC_ReapersBones_Skeleton_InCage.BP_NPC_ReapersBones_Skeleton_InCage_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
void ABP_NPC_ReapersBones_Skeleton_InCage_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC_ReapersBones_Skeleton_InCage.BP_NPC_ReapersBones_Skeleton_InCage_C.UserConstructionScript");

	ABP_NPC_ReapersBones_Skeleton_InCage_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void ABP_NPC_ReapersBones_Skeleton_InCage_C::AfterRead()
{
	ANPC::AfterRead();

	READ_PTR_FULL(AnimNotifyWwiseEmitter, UAnimNotifyWwiseEmitterComponent);
	READ_PTR_FULL(SolidHits, UCapsuleComponent);
}

void ABP_NPC_ReapersBones_Skeleton_InCage_C::BeforeDelete()
{
	ANPC::BeforeDelete();

	DELE_PTR_FULL(AnimNotifyWwiseEmitter);
	DELE_PTR_FULL(SolidHits);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
