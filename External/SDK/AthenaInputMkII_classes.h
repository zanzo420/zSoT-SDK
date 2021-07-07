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

// Class AthenaInputMkII.AthenaCharacterBaseMovementComponent
// 0x00D8 (FullSize[0x0228] - InheritedSize[0x0150])
class UAthenaCharacterBaseMovementComponent : public UInputComponent
{
public:
	unsigned char                                      UnknownData_L30G[0xD8];                                    // 0x0150(0x00D8) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AthenaInputMkII.AthenaCharacterBaseMovementComponent");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class AthenaInputMkII.AthenaCharacterBaseMovementComponentWithInterference
// 0x0008 (FullSize[0x0230] - InheritedSize[0x0228])
class UAthenaCharacterBaseMovementComponentWithInterference : public UAthenaCharacterBaseMovementComponent
{
public:
	unsigned char                                      UnknownData_274Z[0x8];                                     // 0x0228(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AthenaInputMkII.AthenaCharacterBaseMovementComponentWithInterference");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class AthenaInputMkII.MovementInterferenceComponent
// 0x0020 (FullSize[0x0170] - InheritedSize[0x0150])
class UMovementInterferenceComponent : public UInputComponent
{
public:
	unsigned char                                      UnknownData_F08S[0x20];                                    // 0x0150(0x0020) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AthenaInputMkII.MovementInterferenceComponent");
		return ptr;
	}



	void OnMoveRightInput(float Value);
	void OnMoveForwardInput(float Value);
	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
