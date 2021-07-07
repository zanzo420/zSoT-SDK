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

// Function BP_ShovelHole.BP_ShovelHole_C.SetFadeInParameters
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          FadeTime                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_ShovelHole_C::SetFadeInParameters(float FadeTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ShovelHole.BP_ShovelHole_C.SetFadeInParameters");

	ABP_ShovelHole_C_SetFadeInParameters_Params params;
	params.FadeTime = FadeTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_ShovelHole.BP_ShovelHole_C.SetFadeOutParameters
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          FadeTime                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_ShovelHole_C::SetFadeOutParameters(float FadeTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ShovelHole.BP_ShovelHole_C.SetFadeOutParameters");

	ABP_ShovelHole_C_SetFadeOutParameters_Params params;
	params.FadeTime = FadeTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_ShovelHole.BP_ShovelHole_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
void ABP_ShovelHole_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ShovelHole.BP_ShovelHole_C.UserConstructionScript");

	ABP_ShovelHole_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_ShovelHole.BP_ShovelHole_C.OnStateChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// TEnumAsByte<Athena_EHoleState> InState                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_ShovelHole_C::OnStateChanged(TEnumAsByte<Athena_EHoleState> InState)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ShovelHole.BP_ShovelHole_C.OnStateChanged");

	ABP_ShovelHole_C_OnStateChanged_Params params;
	params.InState = InState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_ShovelHole.BP_ShovelHole_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)
void ABP_ShovelHole_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ShovelHole.BP_ShovelHole_C.ReceiveBeginPlay");

	ABP_ShovelHole_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_ShovelHole.BP_ShovelHole_C.ExecuteUbergraph_BP_ShovelHole
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_ShovelHole_C::ExecuteUbergraph_BP_ShovelHole(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ShovelHole.BP_ShovelHole_C.ExecuteUbergraph_BP_ShovelHole");

	ABP_ShovelHole_C_ExecuteUbergraph_BP_ShovelHole_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void ABP_ShovelHole_C::AfterRead()
{
	AShovelHole::AfterRead();

	READ_PTR_FULL(DirtDecal, UDecalComponent);
	READ_PTR_FULL(DirtPile, UStaticMeshComponent);
	READ_PTR_FULL(DefaultSceneRoot, USceneComponent);
	READ_PTR_FULL(MeshDynamicMaterial, UMaterialInstanceDynamic);
	READ_PTR_FULL(DecalDynamicMaterial, UMaterialInstanceDynamic);
}

void ABP_ShovelHole_C::BeforeDelete()
{
	AShovelHole::BeforeDelete();

	DELE_PTR_FULL(DirtDecal);
	DELE_PTR_FULL(DirtPile);
	DELE_PTR_FULL(DefaultSceneRoot);
	DELE_PTR_FULL(MeshDynamicMaterial);
	DELE_PTR_FULL(DecalDynamicMaterial);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
