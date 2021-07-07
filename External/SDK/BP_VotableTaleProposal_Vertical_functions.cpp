// Name: SoT, Version: 2.2.0.2

#include "../pch.h"

/*!!DEFINE!!*/

/*!!HELPER_DEF!!*/

/*!!HELPER_INC!!*/

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function BP_VotableTaleProposal_Vertical.BP_VotableTaleProposal_Vertical_C.PlayShowTokenAnimation
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     Token                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_VotableTaleProposal_Vertical_C::PlayShowTokenAnimation(class UPrimitiveComponent* Token)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_VotableTaleProposal_Vertical.BP_VotableTaleProposal_Vertical_C.PlayShowTokenAnimation");

	ABP_VotableTaleProposal_Vertical_C_PlayShowTokenAnimation_Params params;
	params.Token = Token;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_VotableTaleProposal_Vertical.BP_VotableTaleProposal_Vertical_C.Is Session Locked
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           IsLocked                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_VotableTaleProposal_Vertical_C::Is_Session_Locked(bool* IsLocked)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_VotableTaleProposal_Vertical.BP_VotableTaleProposal_Vertical_C.Is Session Locked");

	ABP_VotableTaleProposal_Vertical_C_Is_Session_Locked_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (IsLocked != nullptr)
		*IsLocked = params.IsLocked;

}


// Function BP_VotableTaleProposal_Vertical.BP_VotableTaleProposal_Vertical_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
void ABP_VotableTaleProposal_Vertical_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_VotableTaleProposal_Vertical.BP_VotableTaleProposal_Vertical_C.UserConstructionScript");

	ABP_VotableTaleProposal_Vertical_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_VotableTaleProposal_Vertical.BP_VotableTaleProposal_Vertical_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)
void ABP_VotableTaleProposal_Vertical_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_VotableTaleProposal_Vertical.BP_VotableTaleProposal_Vertical_C.ReceiveBeginPlay");

	ABP_VotableTaleProposal_Vertical_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_VotableTaleProposal_Vertical.BP_VotableTaleProposal_Vertical_C.OnVoteAdded
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// TScriptInterface<class UVoterInterface> Voter                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
void ABP_VotableTaleProposal_Vertical_C::OnVoteAdded(const TScriptInterface<class UVoterInterface>& Voter)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_VotableTaleProposal_Vertical.BP_VotableTaleProposal_Vertical_C.OnVoteAdded");

	ABP_VotableTaleProposal_Vertical_C_OnVoteAdded_Params params;
	params.Voter = Voter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_VotableTaleProposal_Vertical.BP_VotableTaleProposal_Vertical_C.OnVoteRemoved
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// TScriptInterface<class UVoterInterface> Voter                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
void ABP_VotableTaleProposal_Vertical_C::OnVoteRemoved(const TScriptInterface<class UVoterInterface>& Voter)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_VotableTaleProposal_Vertical.BP_VotableTaleProposal_Vertical_C.OnVoteRemoved");

	ABP_VotableTaleProposal_Vertical_C_OnVoteRemoved_Params params;
	params.Voter = Voter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_VotableTaleProposal_Vertical.BP_VotableTaleProposal_Vertical_C.ExecuteUbergraph_BP_VotableTaleProposal_Vertical
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_VotableTaleProposal_Vertical_C::ExecuteUbergraph_BP_VotableTaleProposal_Vertical(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_VotableTaleProposal_Vertical.BP_VotableTaleProposal_Vertical_C.ExecuteUbergraph_BP_VotableTaleProposal_Vertical");

	ABP_VotableTaleProposal_Vertical_C_ExecuteUbergraph_BP_VotableTaleProposal_Vertical_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void ABP_VotableTaleProposal_Vertical_C::AfterRead()
{
	AVotableObjectView::AfterRead();

	READ_PTR_FULL(Token_1, UStaticMeshComponent);
	READ_PTR_FULL(Token_4, UStaticMeshComponent);
	READ_PTR_FULL(Token_3, UStaticMeshComponent);
	READ_PTR_FULL(Token_2, UStaticMeshComponent);
	READ_PTR_FULL(Token_Asset, UStaticMesh);
	READ_PTR_FULL(Token_Material, UMaterialInterface);
}

void ABP_VotableTaleProposal_Vertical_C::BeforeDelete()
{
	AVotableObjectView::BeforeDelete();

	DELE_PTR_FULL(Token_1);
	DELE_PTR_FULL(Token_4);
	DELE_PTR_FULL(Token_3);
	DELE_PTR_FULL(Token_2);
	DELE_PTR_FULL(Token_Asset);
	DELE_PTR_FULL(Token_Material);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
