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

// Function BP_TheSunkenCrystal_DiveDownDebrisSpawner.BP_TheSunkenCrystal_DiveDownDebrisSpawner_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
void ABP_TheSunkenCrystal_DiveDownDebrisSpawner_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TheSunkenCrystal_DiveDownDebrisSpawner.BP_TheSunkenCrystal_DiveDownDebrisSpawner_C.UserConstructionScript");

	ABP_TheSunkenCrystal_DiveDownDebrisSpawner_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_TheSunkenCrystal_DiveDownDebrisSpawner.BP_TheSunkenCrystal_DiveDownDebrisSpawner_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)
void ABP_TheSunkenCrystal_DiveDownDebrisSpawner_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TheSunkenCrystal_DiveDownDebrisSpawner.BP_TheSunkenCrystal_DiveDownDebrisSpawner_C.ReceiveBeginPlay");

	ABP_TheSunkenCrystal_DiveDownDebrisSpawner_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_TheSunkenCrystal_DiveDownDebrisSpawner.BP_TheSunkenCrystal_DiveDownDebrisSpawner_C.ExecuteUbergraph_BP_TheSunkenCrystal_DiveDownDebrisSpawner
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_TheSunkenCrystal_DiveDownDebrisSpawner_C::ExecuteUbergraph_BP_TheSunkenCrystal_DiveDownDebrisSpawner(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TheSunkenCrystal_DiveDownDebrisSpawner.BP_TheSunkenCrystal_DiveDownDebrisSpawner_C.ExecuteUbergraph_BP_TheSunkenCrystal_DiveDownDebrisSpawner");

	ABP_TheSunkenCrystal_DiveDownDebrisSpawner_C_ExecuteUbergraph_BP_TheSunkenCrystal_DiveDownDebrisSpawner_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void ABP_TheSunkenCrystal_DiveDownDebrisSpawner_C::AfterRead()
{
	AActor::AfterRead();

	READ_PTR_FULL(NamedPoints, UNamedPointsComponent);
	READ_PTR_FULL(DefaultSceneRoot, USceneComponent);
}

void ABP_TheSunkenCrystal_DiveDownDebrisSpawner_C::BeforeDelete()
{
	AActor::BeforeDelete();

	DELE_PTR_FULL(NamedPoints);
	DELE_PTR_FULL(DefaultSceneRoot);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
