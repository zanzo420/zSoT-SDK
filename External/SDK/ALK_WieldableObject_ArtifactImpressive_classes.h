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

// BlueprintGeneratedClass ALK_WieldableObject_ArtifactImpressive.ALK_WieldableObject_ArtifactImpressive_C
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UALK_WieldableObject_ArtifactImpressive_C : public UWieldableItemAnimationStoreId
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass ALK_WieldableObject_ArtifactImpressive.ALK_WieldableObject_ArtifactImpressive_C");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
