#pragma once

/**
 * Name: Rumbleverse
 * Version: Latest
 */

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
	// --------------------------------------------------
	// # Classes
	// --------------------------------------------------
	/**
	 * BlueprintGeneratedClass BP_InGameHUD.BP_InGameHUD_C
	 * Size -> 0x0010 (FullSize[0x0700] - InheritedSize[0x06F0])
	 */
	class ABP_InGameHUD_C : public ASheikHUD
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x06F0(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class USceneComponent*                                     DefaultSceneRoot;                                        // 0x06F8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash

	public:
		void DebugStartMinigame(float StartingPosition, float TargetPosition, float TargetSize, float GradientSize, float Speed, bool BounceBackOnHit, int32_t NumOfBounces);
		void DebugOnMinigameResults(const struct FSheikMinigameResults& MinigameResults);
		void ReceiveDrawHUD(int32_t SizeX, int32_t SizeY);
		void NotifyReadyToInitialize();
		void OnAttemptComplete(int32_t LocalUserNum, bool bWasSuccessful, const struct FSheikError& Error, ESheikLoginResultType OutType);
		void ReceiveBeginPlay();
		void OpenPlaygroundPopup(const class FString& Argument1, const class FString& Argument2, const class FString& Argument3, const class FString& Argument4);
		void ExecuteUbergraph_BP_InGameHUD(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
