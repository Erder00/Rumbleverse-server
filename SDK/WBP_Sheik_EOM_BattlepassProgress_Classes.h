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
	 * WidgetBlueprintGeneratedClass WBP_Sheik_EOM_BattlepassProgress.WBP_Sheik_EOM_BattlepassProgress_C
	 * Size -> 0x0088 (FullSize[0x0540] - InheritedSize[0x04B8])
	 */
	class UWBP_Sheik_EOM_BattlepassProgress_C : public USheikWidgetBase
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x04B8(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UWidgetAnimation*                                    ShowBattlePass;                                          // 0x04C0(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UWidgetAnimation*                                    FadeOut;                                                 // 0x04C8(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UImage*                                              Image_63;                                                // 0x04D0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UHorizontalBox*                                      TierList;                                                // 0x04D8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          TitleTextBlock;                                          // 0x04E0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UHorizontalBox*                                      UnlockedItemsList;                                       // 0x04E8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		int32_t                                                    StartingFanCount;                                        // 0x04F0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    TotalFansOverCourseOfMatch;                              // 0x04F4(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    RemainingFans;                                           // 0x04F8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_GDIT[0x4];                                   // 0x04FC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FBattlePassTier>                             TierData;                                                // 0x0500(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		class FScriptMulticastDelegate                             BattlePassProgressAnimsFinished;                         // 0x0510(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		bool                                                       SkipAnimations;                                          // 0x0520(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       IsBattlePassOwned;                                       // 0x0521(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_XDY4[0x6];                                   // 0x0522(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             BattlePassSequenceComplete;                              // 0x0528(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		int32_t                                                    CurrentTierID;                                           // 0x0538(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    FinalTierId;                                             // 0x053C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void SequenceEvent__ENTRYPOINTWBP_Sheik_EOM_BattlepassProgress_4();
		void SequenceEvent__ENTRYPOINTWBP_Sheik_EOM_BattlepassProgress_3();
		void SequenceEvent__ENTRYPOINTWBP_Sheik_EOM_BattlepassProgress_2();
		void SequenceEvent__ENTRYPOINTWBP_Sheik_EOM_BattlepassProgress_1();
		void IsCurrentPassCompleted(bool* IsCompleted);
		void TierCelebrationFinished(int32_t NextTierID);
		void PlayUISound(bool PlaySound, EUISounds SoundType);
		void ResetAnimSequence();
		void UpdateTierProgressBar();
		void UpdateTotalFansRemaining(const struct FBattlePassTier& InTier);
		void DebugPrintTierData();
		void StartNextTierCelebration(int32_t NextTierID);
		void BeginBattlePassSequenceAnims();
		void CreateTierWidgetAndPopulate(const struct FBattlePassTier& InTier, int32_t index);
		void GetMatchAccumulationData();
		void SetDisplayInfoAndBeginSequence();
		void ShowBattlePassAnim_Finished();
		void FadeOutAnim_Finished();
		void PreConstruct(bool IsDesignTime);
		void ConstructOnlyOnce();
		void BattlePassAnimComplete();
		void ExecuteUbergraph_WBP_Sheik_EOM_BattlepassProgress(int32_t EntryPoint);
		void BattlePassSequenceComplete__DelegateSignature();
		void BattlePassProgressAnimsFinished__DelegateSignature();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
