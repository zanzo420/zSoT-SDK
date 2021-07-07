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

// Function BP_Anim_OceanCrawler_Eel.BP_Anim_OceanCrawler_Eel_C.AnimNotify_NewAttack
// (BlueprintCallable, BlueprintEvent)
void UBP_Anim_OceanCrawler_Eel_C::AnimNotify_NewAttack()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Anim_OceanCrawler_Eel.BP_Anim_OceanCrawler_Eel_C.AnimNotify_NewAttack");

	UBP_Anim_OceanCrawler_Eel_C_AnimNotify_NewAttack_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Anim_OceanCrawler_Eel.BP_Anim_OceanCrawler_Eel_C.AnimNotify_AttackCompleted
// (BlueprintCallable, BlueprintEvent)
void UBP_Anim_OceanCrawler_Eel_C::AnimNotify_AttackCompleted()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Anim_OceanCrawler_Eel.BP_Anim_OceanCrawler_Eel_C.AnimNotify_AttackCompleted");

	UBP_Anim_OceanCrawler_Eel_C_AnimNotify_AttackCompleted_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Anim_OceanCrawler_Eel.BP_Anim_OceanCrawler_Eel_C.AnimNotify_StartingHitReact
// (BlueprintCallable, BlueprintEvent)
void UBP_Anim_OceanCrawler_Eel_C::AnimNotify_StartingHitReact()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Anim_OceanCrawler_Eel.BP_Anim_OceanCrawler_Eel_C.AnimNotify_StartingHitReact");

	UBP_Anim_OceanCrawler_Eel_C_AnimNotify_StartingHitReact_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Anim_OceanCrawler_Eel.BP_Anim_OceanCrawler_Eel_C.ExecuteUbergraph_BP_Anim_OceanCrawler_Eel
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UBP_Anim_OceanCrawler_Eel_C::ExecuteUbergraph_BP_Anim_OceanCrawler_Eel(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Anim_OceanCrawler_Eel.BP_Anim_OceanCrawler_Eel_C.ExecuteUbergraph_BP_Anim_OceanCrawler_Eel");

	UBP_Anim_OceanCrawler_Eel_C_ExecuteUbergraph_BP_Anim_OceanCrawler_Eel_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void UBP_Anim_OceanCrawler_Eel_C::AfterRead()
{
	UOceanCrawlerAnimationInstance::AfterRead();

}

void UBP_Anim_OceanCrawler_Eel_C::BeforeDelete()
{
	UOceanCrawlerAnimationInstance::BeforeDelete();

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
