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

// BlueprintGeneratedClass ReadBookConditionalStatTrigger.ReadBookConditionalStatTrigger_C
// 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
class UReadBookConditionalStatTrigger_C : public UConditionalStatsTriggerType
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass ReadBookConditionalStatTrigger.ReadBookConditionalStatTrigger_C");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
