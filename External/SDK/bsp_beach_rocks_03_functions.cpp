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

// Function bsp_beach_rocks_03.bsp_beach_rocks_03_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
void Absp_beach_rocks_03_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function bsp_beach_rocks_03.bsp_beach_rocks_03_C.UserConstructionScript");

	Absp_beach_rocks_03_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void Absp_beach_rocks_03_C::AfterRead()
{
	ABP_Placement_HeightDrop_C::AfterRead();

	READ_PTR_FULL(StaticMeshComponent019, UStaticMeshComponent);
	READ_PTR_FULL(StaticMeshComponent018, UStaticMeshComponent);
	READ_PTR_FULL(StaticMeshComponent017, UStaticMeshComponent);
	READ_PTR_FULL(StaticMeshComponent016, UStaticMeshComponent);
	READ_PTR_FULL(StaticMeshComponent015, UStaticMeshComponent);
	READ_PTR_FULL(StaticMeshComponent014, UStaticMeshComponent);
	READ_PTR_FULL(StaticMeshComponent013, UStaticMeshComponent);
	READ_PTR_FULL(StaticMeshComponent012, UStaticMeshComponent);
	READ_PTR_FULL(StaticMeshComponent011, UStaticMeshComponent);
	READ_PTR_FULL(StaticMeshComponent0, UStaticMeshComponent);
	READ_PTR_FULL(StaticMeshComponent09, UStaticMeshComponent);
	READ_PTR_FULL(StaticMeshComponent08, UStaticMeshComponent);
	READ_PTR_FULL(StaticMeshComponent07, UStaticMeshComponent);
	READ_PTR_FULL(StaticMeshComponent06, UStaticMeshComponent);
	READ_PTR_FULL(StaticMeshComponent05, UStaticMeshComponent);
	READ_PTR_FULL(StaticMeshComponent04, UStaticMeshComponent);
	READ_PTR_FULL(StaticMeshComponent03, UStaticMeshComponent);
	READ_PTR_FULL(StaticMeshComponent02, UStaticMeshComponent);
	READ_PTR_FULL(StaticMeshComponent01, UStaticMeshComponent);
	READ_PTR_FULL(StaticMeshComponent010, UStaticMeshComponent);
}

void Absp_beach_rocks_03_C::BeforeDelete()
{
	ABP_Placement_HeightDrop_C::BeforeDelete();

	DELE_PTR_FULL(StaticMeshComponent019);
	DELE_PTR_FULL(StaticMeshComponent018);
	DELE_PTR_FULL(StaticMeshComponent017);
	DELE_PTR_FULL(StaticMeshComponent016);
	DELE_PTR_FULL(StaticMeshComponent015);
	DELE_PTR_FULL(StaticMeshComponent014);
	DELE_PTR_FULL(StaticMeshComponent013);
	DELE_PTR_FULL(StaticMeshComponent012);
	DELE_PTR_FULL(StaticMeshComponent011);
	DELE_PTR_FULL(StaticMeshComponent0);
	DELE_PTR_FULL(StaticMeshComponent09);
	DELE_PTR_FULL(StaticMeshComponent08);
	DELE_PTR_FULL(StaticMeshComponent07);
	DELE_PTR_FULL(StaticMeshComponent06);
	DELE_PTR_FULL(StaticMeshComponent05);
	DELE_PTR_FULL(StaticMeshComponent04);
	DELE_PTR_FULL(StaticMeshComponent03);
	DELE_PTR_FULL(StaticMeshComponent02);
	DELE_PTR_FULL(StaticMeshComponent01);
	DELE_PTR_FULL(StaticMeshComponent010);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
