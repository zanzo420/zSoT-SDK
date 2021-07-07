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

// Function bsp_bush_cluster_04_c.bsp_bush_cluster_04_c_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
void Absp_bush_cluster_04_c_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function bsp_bush_cluster_04_c.bsp_bush_cluster_04_c_C.UserConstructionScript");

	Absp_bush_cluster_04_c_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void Absp_bush_cluster_04_c_C::AfterRead()
{
	ABP_Placement_HeightDrop_C::AfterRead();

	READ_PTR_FULL(StaticMesh2, UStaticMeshComponent);
	READ_PTR_FULL(wsp_bush_01_a25_1, UStaticMeshComponent);
	READ_PTR_FULL(Scene1, USceneComponent);
}

void Absp_bush_cluster_04_c_C::BeforeDelete()
{
	ABP_Placement_HeightDrop_C::BeforeDelete();

	DELE_PTR_FULL(StaticMesh2);
	DELE_PTR_FULL(wsp_bush_01_a25_1);
	DELE_PTR_FULL(Scene1);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
