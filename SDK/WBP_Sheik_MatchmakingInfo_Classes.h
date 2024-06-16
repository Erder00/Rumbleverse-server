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
	 * WidgetBlueprintGeneratedClass WBP_Sheik_MatchmakingInfo.WBP_Sheik_MatchmakingInfo_C
	 * Size -> 0x01A1 (FullSize[0x05B9] - InheritedSize[0x0418])
	 */
	class UWBP_Sheik_MatchmakingInfo_C : public UIGUI_WidgetBase
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0418(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UWBP_Sheik_ButtonAction_C*                           Cancel_ButtonPrompt;                                     // 0x0420(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          MatchModeText;                                           // 0x0428(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UOverlay*                                            PromptOverlay;                                           // 0x0430(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UThrobber*                                           SearchingThrobber;                                       // 0x0438(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          TimeElapsedNumber;                                       // 0x0440(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		struct FSlateColor                                         NormalBGColor;                                           // 0x0448(0x0028) Edit, BlueprintVisible, DisableEditOnInstance
		struct FSlateColor                                         ErrorBGColor;                                            // 0x0470(0x0028) Edit, BlueprintVisible, DisableEditOnInstance
		struct FSlateColor                                         MatchFoundBGColor;                                       // 0x0498(0x0028) Edit, BlueprintVisible, DisableEditOnInstance
		struct FMargin                                             NormalInfoPadding;                                       // 0x04C0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		struct FSlateColor                                         PromptColor;                                             // 0x04D0(0x0028) Edit, BlueprintVisible, DisableEditOnInstance
		class USheikMatchmakingCallbacks*                          MatchmakingCallbacks;                                    // 0x04F8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FScriptMulticastDelegate                             CancelButtonReleased;                                    // 0x0500(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		struct FInputEventData                                     InputEvent;                                              // 0x0510(0x0038) Edit, BlueprintVisible, DisableEditOnInstance
		float                                                      TimetoWaitforMatchmakingAutoHide;                        // 0x0548(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_V5BT[0x4];                                   // 0x054C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             CancelButtonHeld;                                        // 0x0550(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class USheikPartyManager*                                  PartyManager;                                            // 0x0560(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FTimerHandle                                        UpdateMatchmakingTimerHandle;                            // 0x0568(0x0008) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		struct FTimerHandle                                        AutoHideMatchmakingUITimerHandle;                        // 0x0570(0x0008) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		class FScriptMulticastDelegate                             HandleMatchFound;                                        // 0x0578(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             HandleMatchError;                                        // 0x0588(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             HandleMatchmakingStarted;                                // 0x0598(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             HandleMatchmakingCanceled;                               // 0x05A8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		bool                                                       ReadyToCancel;                                           // 0x05B8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void ActivateCancelButton();
		void DeactivateCancelButton();
		void ShowMatchmakingCanceledWidget();
		void ShowMatchmakingErrorWidget(const class FText& ErrorText);
		void SetTimeToWaitForMatchmakingAutoHide(float InTime);
		void ShowMatchFoundWidget();
		void BindToMatchmakingCallbackBroadcasts();
		void BindToPartyManagerBroadcasts();
		void HideMatchmakingWidget();
		void ClearTimers();
		void UpdateMatchmakingWidget();
		void GetCurrentTimeElapsed(struct FTimespan* NewParam);
		void ShowMatchmakingWidget(const class FString& InMatchConfig);
		void SetMatchConfig(const class FString& MatchConfig);
		void SetElapsedTime(const struct FTimespan& Timespan);
		void SetAsNormalMatchmaking();
		void SetPromptVisibility(bool IsVisible);
		void EventHandleOnMatchmakingStarted(const class FString& MatchConfig);
		void EventHandleOnPartyMatchmakingStarted(const class FString& ConfigurationName, bool bIsLeader);
		void EventHandleOnPartyMatchmakingStopped(bool bIsLeader);
		void EventHandleOnPartyMatchmakingFound(bool bIsLeader);
		void EventHandleOnPartyMatchmakingError(const class FText& ErrorText, bool bIsPartyLeader);
		void ConstructOnlyOnce();
		void BndEvt__Cancel_ButtonPrompt_K2Node_ComponentBoundEvent_0_OnActionConfirmed__DelegateSignature();
		void OnMatchmakingComplete(bool bSuccessful, const struct FSheikError& Error);
		void OnMatchmakingCancelled(bool bSuccessful, const struct FSheikError& Error);
		void ExecuteUbergraph_WBP_Sheik_MatchmakingInfo(int32_t EntryPoint);
		void HandleMatchmakingCanceled__DelegateSignature();
		void HandleMatchmakingStarted__DelegateSignature();
		void HandleMatchError__DelegateSignature();
		void HandleMatchFound__DelegateSignature();
		void CancelButtonHeld__DelegateSignature();
		void CancelButtonReleased__DelegateSignature();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
