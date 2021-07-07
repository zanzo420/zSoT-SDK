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

// Function bsp_cma_bush_01_a.bsp_cma_bush_01_a_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
void Absp_cma_bush_01_a_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function bsp_cma_bush_01_a.bsp_cma_bush_01_a_C.UserConstructionScript");

	Absp_cma_bush_01_a_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void Absp_cma_bush_01_a_C::AfterRead()
{
	ACoveredMeshActor::AfterRead();

}

void Absp_cma_bush_01_a_C::BeforeDelete()
{
	ACoveredMeshActor::BeforeDelete();

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
