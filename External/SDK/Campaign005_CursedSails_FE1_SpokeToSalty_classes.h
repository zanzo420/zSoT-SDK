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
// Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Campaign005_CursedSails_FE1_SpokeToSalty.Campaign005_CursedSails_FE1_SpokeToSalty_C
// 0x0000 (FullSize[0x00D8] - InheritedSize[0x00D8])
class UCampaign005_CursedSails_FE1_SpokeToSalty_C : public UEntitlementDesc
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Campaign005_CursedSails_FE1_SpokeToSalty.Campaign005_CursedSails_FE1_SpokeToSalty_C");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
