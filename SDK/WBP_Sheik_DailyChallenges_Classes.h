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
	 * WidgetBlueprintGeneratedClass WBP_Sheik_DailyChallenges.WBP_Sheik_DailyChallenges_C
	 * Size -> 0x009C (FullSize[0x04B4] - InheritedSize[0x0418])
	 */
	class UWBP_Sheik_DailyChallenges_C : public UIGUI_WidgetBase
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0418(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UOverlay*                                            ComingSoonPrompt;                                        // 0x0420(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UOverlay*                                            DailiesContent;                                          // 0x0428(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          DebugTextShowRerollRealtime;                             // 0x0430(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWidgetSwitcher*                                     LoadingPromptSwitcher;                                   // 0x0438(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              Preloader_Image;                                         // 0x0440(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UVerticalBox*                                        RepListVerticalBox;                                      // 0x0448(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UVerticalBox*                                        RerollInfoBox;                                           // 0x0450(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          RerollsAvailable;                                        // 0x0458(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          TimeTillNextReroll;                                      // 0x0460(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		int32_t                                                    MaxReps;                                                 // 0x0468(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_GACW[0x4];                                   // 0x046C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UWBP_Sheik_RepMenu_EmptyEntry_C*>             EmptyEntries;                                            // 0x0470(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference
		TArray<class UWBP_Sheik_RepMenuEntry_C*>                   Reps;                                                    // 0x0480(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference
		class FScriptMulticastDelegate                             NewChallengeAdded;                                       // 0x0490(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		bool                                                       bShowRerollRealTime;                                     // 0x04A0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_1JYK[0x7];                                   // 0x04A1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTimerHandle                                        UpdateCheckHandle;                                       // 0x04A8(0x0008) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		int32_t                                                    MaxRepsToShow;                                           // 0x04B0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		class USheikRepSystem* GetLocalPlayerRepSystem();
		void FilterWeeklyReps(TArray<struct FRepUIData>* AllReps, TArray<struct FRepUIData>* Out);
		void RefreshRepsLoaded(bool Successful);
		void StartLoading();
		void GetFirstDailyChallenge(class UIGUI_WidgetBase** FirstChallenge);
		void FillOutRepListWithEmptyEntries(int32_t EmptyEntryCount, int32_t StartingIndex);
		void PopulateEmptryRepList();
		void RemoveEmptyReps();
		void PrintCurrentReps();
		void IsRepAlreadyInList(const class FName& RepName, class UWBP_Sheik_RepMenuEntry_C** Out);
		void HideRerollForFirstTimerReps();
		bool HasRepEntries();
		void GetCurrentReps(TArray<struct FRepUIData>* OutReps);
		void ToggleClaimRerollOptions(bool IsHidden);
		void SetAccrualTextInfo();
		void DisplayEmptyRepEntry();
		void RefreshButtonTextAndVisibility();
		void CheckForAccrualAllowanceUpdates();
		void HandleOnRefreshAllButtonsOnRerollClick();
		void SetQueuedRepsText();
		void SetTimeTillNextRerollText();
		void SetRerollText();
		void HandleOnNewRepAcquired_cb(const struct FRepUIData& OutNewRep);
		void OnRemoveThisRepFromUI_cb(class UWBP_Sheik_RepMenuEntry_C* This);
		void SetReps();
		void ConstructOnlyOnce();
		void ToggleDebugShowRerollTimerRealTime(const class FString& Argument1, const class FString& Argument2, const class FString& Argument3, const class FString& Argument4);
		void BeginUpdateChecks();
		void StopUpdateChecks();
		void ExecuteUbergraph_WBP_Sheik_DailyChallenges(int32_t EntryPoint);
		void NewChallengeAdded__DelegateSignature();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
