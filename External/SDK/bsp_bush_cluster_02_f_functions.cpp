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

// Function bsp_bush_cluster_02_f.bsp_bush_cluster_02_f_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
void Absp_bush_cluster_02_f_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function bsp_bush_cluster_02_f.bsp_bush_cluster_02_f_C.UserConstructionScript");

	Absp_bush_cluster_02_f_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void Absp_bush_cluster_02_f_C::AfterRead()
{
	ABP_Placement_HeightDrop_C::AfterRead();

	READ_PTR_FULL(StaticMeshComponent01, UStaticMeshComponent);
	READ_PTR_FULL(SharedRoot, USceneComponent);
}

void Absp_bush_cluster_02_f_C::BeforeDelete()
{
	ABP_Placement_HeightDrop_C::BeforeDelete();

	DELE_PTR_FULL(StaticMeshComponent01);
	DELE_PTR_FULL(SharedRoot);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
