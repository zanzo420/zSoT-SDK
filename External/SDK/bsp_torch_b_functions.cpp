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

// Function bsp_torch_b.bsp_torch_b_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
void Absp_torch_b_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function bsp_torch_b.bsp_torch_b_C.UserConstructionScript");

	Absp_torch_b_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function bsp_torch_b.bsp_torch_b_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)
void Absp_torch_b_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function bsp_torch_b.bsp_torch_b_C.ReceiveBeginPlay");

	Absp_torch_b_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function bsp_torch_b.bsp_torch_b_C.ExecuteUbergraph_bsp_torch_b
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void Absp_torch_b_C::ExecuteUbergraph_bsp_torch_b(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function bsp_torch_b.bsp_torch_b_C.ExecuteUbergraph_bsp_torch_b");

	Absp_torch_b_C_ExecuteUbergraph_bsp_torch_b_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void Absp_torch_b_C::AfterRead()
{
	AStaticMeshActor::AfterRead();

	READ_PTR_FULL(vfx_fire_torch, UParticleSystemComponent);
	READ_PTR_FULL(PointLight, UPointLightComponent);
}

void Absp_torch_b_C::BeforeDelete()
{
	AStaticMeshActor::BeforeDelete();

	DELE_PTR_FULL(vfx_fire_torch);
	DELE_PTR_FULL(PointLight);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
