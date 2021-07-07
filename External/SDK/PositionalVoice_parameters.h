#pragma once

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

// Function PositionalVoice.VoiceChatEmitterInterface.GetVoiceLocation
struct UVoiceChatEmitterInterface_GetVoiceLocation_Params
{
	struct FVector                                     ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function PositionalVoice.VoiceChatEmitterInterface.GetVoiceAudioEmitterProxy
struct UVoiceChatEmitterInterface_GetVoiceAudioEmitterProxy_Params
{
	struct FWwiseEmitter                               EmitterProxy;                                              // (Parm, OutParm)
};

// Function PositionalVoice.VoiceChatEmitterInterface.GetVoiceAttenuationScaler
struct UVoiceChatEmitterInterface_GetVoiceAttenuationScaler_Params
{
	TScriptInterface<class UVoiceChatEmitterInterface> RelativeToThisEmitter;                                     // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, UObjectWrapper)
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
