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

// BlueprintGeneratedClass BP_cmn_cannonball_Grenade_Scatter_ItemDesc.BP_cmn_cannonball_Grenade_Scatter_ItemDesc_C
// 0x0000 (FullSize[0x0130] - InheritedSize[0x0130])
class UBP_cmn_cannonball_Grenade_Scatter_ItemDesc_C : public UItemDesc
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_cmn_cannonball_Grenade_Scatter_ItemDesc.BP_cmn_cannonball_Grenade_Scatter_ItemDesc_C");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
