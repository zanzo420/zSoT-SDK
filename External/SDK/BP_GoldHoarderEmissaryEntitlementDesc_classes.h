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

// BlueprintGeneratedClass BP_GoldHoarderEmissaryEntitlementDesc.BP_GoldHoarderEmissaryEntitlementDesc_C
// 0x0000 (FullSize[0x00D8] - InheritedSize[0x00D8])
class UBP_GoldHoarderEmissaryEntitlementDesc_C : public UBP_EmissaryEntitlementDesc_C
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_GoldHoarderEmissaryEntitlementDesc.BP_GoldHoarderEmissaryEntitlementDesc_C");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
