﻿#pragma once

// Name: SoT, Version: 2.2.0.2


/*!!DEFINE!!*/

/*!!HELPER_DEF!!*/

/*!!HELPER_INC!!*/

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
//---------------------------------------------------------------------------
// Parameters
//---------------------------------------------------------------------------

// Function BP_WaterVolume.BP_WaterVolume_C.CollectRippleGenerators
struct ABP_WaterVolume_C_CollectRippleGenerators_Params
{
};

// Function BP_WaterVolume.BP_WaterVolume_C.UserConstructionScript
struct ABP_WaterVolume_C_UserConstructionScript_Params
{
};

// Function BP_WaterVolume.BP_WaterVolume_C.ReceiveBeginPlay
struct ABP_WaterVolume_C_ReceiveBeginPlay_Params
{
};

// Function BP_WaterVolume.BP_WaterVolume_C.ReceiveActorBeginOverlap
struct ABP_WaterVolume_C_ReceiveActorBeginOverlap_Params
{
	class AActor*                                      OtherActor;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_WaterVolume.BP_WaterVolume_C.ReceiveActorEndOverlap
struct ABP_WaterVolume_C_ReceiveActorEndOverlap_Params
{
	class AActor*                                      OtherActor;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_WaterVolume.BP_WaterVolume_C.ExecuteUbergraph_BP_WaterVolume
struct ABP_WaterVolume_C_ExecuteUbergraph_BP_WaterVolume_Params
{
	int                                                EntryPoint;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
