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

// BlueprintGeneratedClass BP_SmallShip_DamageZone_LowerDeck_00.BP_SmallShip_DamageZone_LowerDeck_00_C
// 0x0000 (FullSize[0x07D0] - InheritedSize[0x07D0])
class ABP_SmallShip_DamageZone_LowerDeck_00_C : public ABP_BaseInternalDamageZone_C
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_SmallShip_DamageZone_LowerDeck_00.BP_SmallShip_DamageZone_LowerDeck_00_C");
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
