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

// BlueprintGeneratedClass Title_MA_07_MerchantCommander.Title_MA_07_MerchantCommander_C
// 0x0000 (FullSize[0x00E0] - InheritedSize[0x00E0])
class UTitle_MA_07_MerchantCommander_C : public UTitleDesc
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Title_MA_07_MerchantCommander.Title_MA_07_MerchantCommander_C");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif