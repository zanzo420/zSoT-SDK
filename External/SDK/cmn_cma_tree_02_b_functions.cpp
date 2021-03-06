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

// Function cmn_cma_tree_02_b.cmn_cma_tree_02_b_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
void Acmn_cma_tree_02_b_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function cmn_cma_tree_02_b.cmn_cma_tree_02_b_C.UserConstructionScript");

	Acmn_cma_tree_02_b_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void Acmn_cma_tree_02_b_C::AfterRead()
{
	ACoveredMeshActor::AfterRead();

	READ_PTR_FULL(AudioEventToComponentMap, UAudioEventToComponentMapComponent);
	READ_PTR_FULL(NonVagueNonUniqueLandmark, UNonVagueNonUniqueLandmarkComponent);
	READ_PTR_FULL(wsp_trunk_01_b, UStaticMeshComponent);
}

void Acmn_cma_tree_02_b_C::BeforeDelete()
{
	ACoveredMeshActor::BeforeDelete();

	DELE_PTR_FULL(AudioEventToComponentMap);
	DELE_PTR_FULL(NonVagueNonUniqueLandmark);
	DELE_PTR_FULL(wsp_trunk_01_b);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
