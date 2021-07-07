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

// Function bp_lantern_hook_01_a.bp_lantern_hook_01_a_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
void Abp_lantern_hook_01_a_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function bp_lantern_hook_01_a.bp_lantern_hook_01_a_C.UserConstructionScript");

	Abp_lantern_hook_01_a_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void Abp_lantern_hook_01_a_C::AfterRead()
{
	AActor::AfterRead();

	READ_PTR_FULL(tls_lantern_01_d, UStaticMeshComponent);
	READ_PTR_FULL(StaticMeshComponent0, UStaticMeshComponent);
	READ_PTR_FULL(SharedRoot, USceneComponent);
}

void Abp_lantern_hook_01_a_C::BeforeDelete()
{
	AActor::BeforeDelete();

	DELE_PTR_FULL(tls_lantern_01_d);
	DELE_PTR_FULL(StaticMeshComponent0);
	DELE_PTR_FULL(SharedRoot);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
