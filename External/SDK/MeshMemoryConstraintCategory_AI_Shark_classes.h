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

// BlueprintGeneratedClass MeshMemoryConstraintCategory_AI_Shark.MeshMemoryConstraintCategory_AI_Shark_C
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UMeshMemoryConstraintCategory_AI_Shark_C : public UMeshMemoryConstraintCategory
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass MeshMemoryConstraintCategory_AI_Shark.MeshMemoryConstraintCategory_AI_Shark_C");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif