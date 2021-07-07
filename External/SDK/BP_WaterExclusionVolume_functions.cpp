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

// Function BP_WaterExclusionVolume.BP_WaterExclusionVolume_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
void ABP_WaterExclusionVolume_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WaterExclusionVolume.BP_WaterExclusionVolume_C.UserConstructionScript");

	ABP_WaterExclusionVolume_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void ABP_WaterExclusionVolume_C::AfterRead()
{
	AStaticMeshActor::AfterRead();

	READ_PTR_FULL(WaterPlaneExclusion, UWaterPlaneExclusionComponent);
}

void ABP_WaterExclusionVolume_C::BeforeDelete()
{
	AStaticMeshActor::BeforeDelete();

	DELE_PTR_FULL(WaterPlaneExclusion);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
