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

// BlueprintGeneratedClass BP_PetPreview_Dog.BP_PetPreview_Dog_C
// 0x0000 (FullSize[0x04C0] - InheritedSize[0x04C0])
class ABP_PetPreview_Dog_C : public ABP_PetPreview_Base_C
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_PetPreview_Dog.BP_PetPreview_Dog_C");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
