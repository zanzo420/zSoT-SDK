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

// Function NPCObject_Pistol.NPCObject_Pistol_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
void ANPCObject_Pistol_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function NPCObject_Pistol.NPCObject_Pistol_C.UserConstructionScript");

	ANPCObject_Pistol_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void ANPCObject_Pistol_C::AfterRead()
{
	AActor::AfterRead();

	READ_PTR_FULL(SkeletalMesh, USkeletalMeshComponent);
	READ_PTR_FULL(DefaultSceneRoot, USceneComponent);
}

void ANPCObject_Pistol_C::BeforeDelete()
{
	AActor::BeforeDelete();

	DELE_PTR_FULL(SkeletalMesh);
	DELE_PTR_FULL(DefaultSceneRoot);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
