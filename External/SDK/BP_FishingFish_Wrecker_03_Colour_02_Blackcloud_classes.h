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

// BlueprintGeneratedClass BP_FishingFish_Wrecker_03_Colour_02_Blackcloud.BP_FishingFish_Wrecker_03_Colour_02_Blackcloud_C
// 0x0000 (FullSize[0x0910] - InheritedSize[0x0910])
class ABP_FishingFish_Wrecker_03_Colour_02_Blackcloud_C : public ABP_FishingFish_Wrecker_03_C
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_FishingFish_Wrecker_03_Colour_02_Blackcloud.BP_FishingFish_Wrecker_03_Colour_02_Blackcloud_C");
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
