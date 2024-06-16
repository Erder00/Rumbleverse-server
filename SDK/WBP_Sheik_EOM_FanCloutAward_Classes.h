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
	 * WidgetBlueprintGeneratedClass WBP_Sheik_EOM_FanCloutAward.WBP_Sheik_EOM_FanCloutAward_C
	 * Size -> 0x02C8 (FullSize[0x0930] - InheritedSize[0x0668])
	 */
	class UWBP_Sheik_EOM_FanCloutAward_C : public USheikAnnouncementWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0668(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UWidgetAnimation*                                    DisplayCloutProgressBar;                                 // 0x0670(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UWidgetAnimation*                                    LevelUpAnim;                                             // 0x0678(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UWidgetAnimation*                                    FansAccuralAnim;                                         // 0x0680(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UWidgetAnimation*                                    FadeOutAnim;                                             // 0x0688(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UTextBlock*                                          CurrentLevelTextBlock;                                   // 0x0690(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          FanAccruedTextBlock;                                     // 0x0698(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWBP_IGUI_ProgressBar_C*                             LevelProgressBar;                                        // 0x06A0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          LevelUPTextBlock;                                        // 0x06A8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          LevelUPTextBlock_2;                                      // 0x06B0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          PreviousLevelTextBlock;                                  // 0x06B8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              ProgressBarBG;                                           // 0x06C0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          Rank;                                                    // 0x06C8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              XpBoosterIndication;                                     // 0x06D0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		float                                                      TimeBeforeFillingCloutBar;                               // 0x06D8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      TotalTimeToFillCloutBar;                                 // 0x06DC(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      TimeForShowingAllLevelUps;                               // 0x06E0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      TimeForShowingEachLevelUp;                               // 0x06E4(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FSheikPayload                                       Payload;                                                 // 0x06E8(0x01E0) Edit, BlueprintVisible, DisableEditOnInstance
		float                                                      FinalCloutBarPosition;                                   // 0x08C8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    NumberOfLevelsGained;                                    // 0x08CC(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      PlaySpeed;                                               // 0x08D0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      DelayAfterLeveling;                                      // 0x08D4(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      LevelUpLoopDelay;                                        // 0x08D8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    AwardIndex;                                              // 0x08DC(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<struct FSheikPayload>                               FansAnnouncementPayloads;                                // 0x08E0(0x0010) Edit, BlueprintVisible
		class FScriptMulticastDelegate                             OnCloutLevelSequenceComplete;                            // 0x08F0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		bool                                                       SkipAnimations;                                          // 0x0900(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_LYGK[0x3];                                   // 0x0901(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    LevelLoopIndex;                                          // 0x0904(0x0004) Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       WidgetVisible;                                           // 0x0908(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		EUISounds                                                  FansAccruedSound;                                        // 0x0909(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		EUISounds                                                  LevelUpSound;                                            // 0x090A(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		EUISounds                                                  CloutBarFillFullSound;                                   // 0x090B(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		EUISounds                                                  CloutBarFillPartialSound;                                // 0x090C(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_UHN0[0x3];                                   // 0x090D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      LevelUpSoundMinInterval;                                 // 0x0910(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bMuteSounds;                                             // 0x0914(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_WQFA[0x3];                                   // 0x0915(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    MaxCloutLevel;                                           // 0x0918(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    HighestLevelSeen;                                        // 0x091C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FString                                              HighestRankSeen;                                         // 0x0920(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash

	public:
		void SequenceEvent__ENTRYPOINTWBP_Sheik_EOM_FanCloutAward_3();
		void SequenceEvent__ENTRYPOINTWBP_Sheik_EOM_FanCloutAward_2();
		void SequenceEvent__ENTRYPOINTWBP_Sheik_EOM_FanCloutAward_1();
		void ValidateCloutUpdate(int32_t PreviousLevelId, int32_t CurrentLevelId, const class FString& Rank, bool* Valid);
		void PlayLevelUpSound();
		void HandleCloutBarFillSounds(float MinPercentChange, bool WillLevelUp);
		void PlayFansAccruedSound();
		void FinishPlacementSequence();
		void ResetAnimSequence();
		void ResetProgressBar();
		void LevelUpProgressBar();
		void CalculateLevelUpTime();
		void PlayUISound(bool PlaySound, EUISounds SoundType);
		void HandleLevelUpSound();
		void TryPlayNextAward();
		void PlayAllFanCloutAwards(TArray<struct FSheikPayload>* InFanCloutAwards);
		void SetFanText(const struct FSheikPayload& Payload);
		void SetCloutBarTexts(int32_t PreviousLevelId, int32_t CurrentLevelId, int32_t NextLevelId, const class FString& Rank);
		void UnloadPayload(const struct FSheikPayload& InPayload);
		void FadeOutAnim_Finished();
		void ExecuteUbergraph_WBP_Sheik_EOM_FanCloutAward(int32_t EntryPoint);
		void OnCloutLevelSequenceComplete__DelegateSignature();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
