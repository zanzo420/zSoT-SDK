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

// BlueprintGeneratedClass BP_AnimationStateID_DeadFirstPerson.BP_AnimationStateID_DeadFirstPerson_C
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UBP_AnimationStateID_DeadFirstPerson_C : public UAnimationStateId
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_AnimationStateID_DeadFirstPerson.BP_AnimationStateID_DeadFirstPerson_C");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
