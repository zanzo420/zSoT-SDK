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

// BlueprintGeneratedClass BP_SunkenKingdomDeepSeaRegion.BP_SunkenKingdomDeepSeaRegion_C
// 0x0008 (FullSize[0x0400] - InheritedSize[0x03F8])
class ABP_SunkenKingdomDeepSeaRegion_C : public ADeepSeaRegion
{
public:
	class UCapsuleComponent*                           Capsule;                                                   // 0x03F8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_SunkenKingdomDeepSeaRegion.BP_SunkenKingdomDeepSeaRegion_C");
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
