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

// Function BP_NPC_AnimatedItemInterface.BP_NPC_AnimatedItemInterface_C.PlayItemAnimation
// (Public, BlueprintCallable, BlueprintEvent)
void UBP_NPC_AnimatedItemInterface_C::PlayItemAnimation()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC_AnimatedItemInterface.BP_NPC_AnimatedItemInterface_C.PlayItemAnimation");

	UBP_NPC_AnimatedItemInterface_C_PlayItemAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void UBP_NPC_AnimatedItemInterface_C::AfterRead()
{
	UInterface::AfterRead();

}

void UBP_NPC_AnimatedItemInterface_C::BeforeDelete()
{
	UInterface::BeforeDelete();

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
