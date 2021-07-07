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

// BlueprintGeneratedClass BP_Campaign005_CursedSails_ShopkeeperTom_PreCursedSails.BP_Campaign005_CursedSails_ShopkeeperTom_PreCursedSails_C
// 0x0000 (FullSize[0x05D8] - InheritedSize[0x05D8])
class ABP_Campaign005_CursedSails_ShopkeeperTom_PreCursedSails_C : public ABP_Shopkeeper_C
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_Campaign005_CursedSails_ShopkeeperTom_PreCursedSails.BP_Campaign005_CursedSails_ShopkeeperTom_PreCursedSails_C");
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
