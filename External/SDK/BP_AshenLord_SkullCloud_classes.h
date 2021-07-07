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

// BlueprintGeneratedClass BP_AshenLord_SkullCloud.BP_AshenLord_SkullCloud_C
// 0x0038 (FullSize[0x04F0] - InheritedSize[0x04B8])
class ABP_AshenLord_SkullCloud_C : public ABP_NonRotatableSignalCloud_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x04B8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UStaticMeshComponent*                        lightning_bolt_03_a;                                       // 0x04C0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UStaticMeshComponent*                        lightning_bolt_02_a;                                       // 0x04C8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UStaticMeshComponent*                        lightning_bolt_01_a;                                       // 0x04D0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UStaticMeshComponent*                        vfx_tornado_ribbons;                                       // 0x04D8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	TArray<class UMaterialInstanceDynamic*>            DynamicMaterials;                                          // 0x04E0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_AshenLord_SkullCloud.BP_AshenLord_SkullCloud_C");
		return ptr;
	}



	void CollectMaterials();
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void UpdateMaterialVisibility(const struct FLinearColor& SignalVisibilityLerpValue);
	void ExecuteUbergraph_BP_AshenLord_SkullCloud(int EntryPoint);
	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
