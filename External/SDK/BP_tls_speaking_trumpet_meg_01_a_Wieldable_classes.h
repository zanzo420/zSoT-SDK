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
// Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_tls_speaking_trumpet_meg_01_a_Wieldable.BP_tls_speaking_trumpet_meg_01_a_Wieldable_C
// 0x0000 (FullSize[0x07A0] - InheritedSize[0x07A0])
class ABP_tls_speaking_trumpet_meg_01_a_Wieldable_C : public ABP_Speaking_Trumpet_C
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_tls_speaking_trumpet_meg_01_a_Wieldable.BP_tls_speaking_trumpet_meg_01_a_Wieldable_C");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
