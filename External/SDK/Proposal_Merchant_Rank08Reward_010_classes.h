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

// BlueprintGeneratedClass Proposal_Merchant_Rank08Reward_010.Proposal_Merchant_Rank08Reward_010_C
// 0x0000 (FullSize[0x0138] - InheritedSize[0x0138])
class UProposal_Merchant_Rank08Reward_010_C : public UVoyageProposalDesc
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Proposal_Merchant_Rank08Reward_010.Proposal_Merchant_Rank08Reward_010_C");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
