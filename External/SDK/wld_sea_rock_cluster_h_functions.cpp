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

// Function wld_sea_rock_cluster_h.wld_sea_rock_cluster_h_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
void Awld_sea_rock_cluster_h_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function wld_sea_rock_cluster_h.wld_sea_rock_cluster_h_C.UserConstructionScript");

	Awld_sea_rock_cluster_h_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void Awld_sea_rock_cluster_h_C::AfterRead()
{
	AActor::AfterRead();

	READ_PTR_FULL(StaticMeshComponent07, UStaticMeshComponent);
	READ_PTR_FULL(StaticMeshComponent05, UStaticMeshComponent);
	READ_PTR_FULL(StaticMeshComponent09, UStaticMeshComponent);
	READ_PTR_FULL(StaticMeshComponent04, UStaticMeshComponent);
	READ_PTR_FULL(StaticMeshComponent01, UStaticMeshComponent);
	READ_PTR_FULL(StaticMeshComponent08, UStaticMeshComponent);
	READ_PTR_FULL(StaticMeshComponent06, UStaticMeshComponent);
	READ_PTR_FULL(StaticMeshComponent03, UStaticMeshComponent);
	READ_PTR_FULL(StaticMeshComponent02, UStaticMeshComponent);
	READ_PTR_FULL(StaticMeshComponent0, UStaticMeshComponent);
	READ_PTR_FULL(SharedRoot, USceneComponent);
}

void Awld_sea_rock_cluster_h_C::BeforeDelete()
{
	AActor::BeforeDelete();

	DELE_PTR_FULL(StaticMeshComponent07);
	DELE_PTR_FULL(StaticMeshComponent05);
	DELE_PTR_FULL(StaticMeshComponent09);
	DELE_PTR_FULL(StaticMeshComponent04);
	DELE_PTR_FULL(StaticMeshComponent01);
	DELE_PTR_FULL(StaticMeshComponent08);
	DELE_PTR_FULL(StaticMeshComponent06);
	DELE_PTR_FULL(StaticMeshComponent03);
	DELE_PTR_FULL(StaticMeshComponent02);
	DELE_PTR_FULL(StaticMeshComponent0);
	DELE_PTR_FULL(SharedRoot);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
