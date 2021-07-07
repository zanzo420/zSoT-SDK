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

// BlueprintGeneratedClass BP_Campaign005_CursedSails_ShipwrightSharon_PreCursedSails.BP_Campaign005_CursedSails_ShipwrightSharon_PreCursedSails_C
// 0x0000 (FullSize[0x0608] - InheritedSize[0x0608])
class ABP_Campaign005_CursedSails_ShipwrightSharon_PreCursedSails_C : public ABP_Shipwright_C
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_Campaign005_CursedSails_ShipwrightSharon_PreCursedSails.BP_Campaign005_CursedSails_ShipwrightSharon_PreCursedSails_C");
		return ptr;
	}



	void UserConstructionScript();
	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
