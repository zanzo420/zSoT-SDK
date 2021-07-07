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

// BlueprintGeneratedClass BP_tls_shovel_par_01_a_v02_Wieldable.BP_tls_shovel_par_01_a_v02_Wieldable_C
// 0x0000 (FullSize[0x0818] - InheritedSize[0x0818])
class ABP_tls_shovel_par_01_a_v02_Wieldable_C : public ABP_Shovel_C
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_tls_shovel_par_01_a_v02_Wieldable.BP_tls_shovel_par_01_a_v02_Wieldable_C");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
