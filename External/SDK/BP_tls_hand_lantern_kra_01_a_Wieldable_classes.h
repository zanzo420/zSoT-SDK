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

// BlueprintGeneratedClass BP_tls_hand_lantern_kra_01_a_Wieldable.BP_tls_hand_lantern_kra_01_a_Wieldable_C
// 0x0000 (FullSize[0x0998] - InheritedSize[0x0998])
class ABP_tls_hand_lantern_kra_01_a_Wieldable_C : public ABP_Lantern_C
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_tls_hand_lantern_kra_01_a_Wieldable.BP_tls_hand_lantern_kra_01_a_Wieldable_C");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
