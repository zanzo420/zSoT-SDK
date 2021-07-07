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

// Function cmn_candle_group_03.cmn_candle_group_03_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
void Acmn_candle_group_03_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function cmn_candle_group_03.cmn_candle_group_03_C.UserConstructionScript");

	Acmn_candle_group_03_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void Acmn_candle_group_03_C::AfterRead()
{
	AActor::AfterRead();

	READ_PTR_FULL(ParticleSystemComponent0, UParticleSystemComponent);
	READ_PTR_FULL(StaticMeshComponent0, UStaticMeshComponent);
	READ_PTR_FULL(SharedRoot, USceneComponent);
}

void Acmn_candle_group_03_C::BeforeDelete()
{
	AActor::BeforeDelete();

	DELE_PTR_FULL(ParticleSystemComponent0);
	DELE_PTR_FULL(StaticMeshComponent0);
	DELE_PTR_FULL(SharedRoot);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
