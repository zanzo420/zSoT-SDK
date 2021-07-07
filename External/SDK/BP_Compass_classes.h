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

// BlueprintGeneratedClass BP_Compass.BP_Compass_C
// 0x0010 (FullSize[0x0858] - InheritedSize[0x0848])
class ABP_Compass_C : public ACompass
{
public:
	unsigned char                                      UnknownData_2H59[0x8];                                     // 0x0848(0x0008) Fix Super Size
	class UInventoryItemComponent*                     InventoryItem;                                             // 0x0850(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_Compass.BP_Compass_C");
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
