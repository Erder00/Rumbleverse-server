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
	 * WidgetBlueprintGeneratedClass WBP_Sheik_Social_Settings.WBP_Sheik_Social_Settings_C
	 * Size -> 0x0138 (FullSize[0x05F8] - InheritedSize[0x04C0])
	 */
	class UWBP_Sheik_Social_Settings_C : public UWBP_Sheik_Settings_TabPage_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x04C0(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UWBP_Sheik_SettingsSectionTitle_C*                   CrossplaySectionTitle;                                   // 0x04C8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWBP_Sheik_MultiToggle_C*                            CrossplayToggle;                                         // 0x04D0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          CrossplayToggleDisabled;                                 // 0x04D8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWBP_Sheik_Settings_DescriptionPanel_C*              Description;                                             // 0x04E0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWBP_Sheik_MultiToggle_C*                            FillTeammatesToggle;                                     // 0x04E8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWBP_Sheik_SettingsSectionTitle_C*                   RestrictedMatch_SectionTitle;                            // 0x04F0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWBP_Sheik_SettingsButton_C*                         RestrictedMatchCopyInviteCode;                           // 0x04F8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWBP_Sheik_SettingsButton_C*                         RestrictedMatchCreate;                                   // 0x0500(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWBP_Sheik_SettingsButton_C*                         RestrictedMatchJoin;                                     // 0x0508(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWBP_Sheik_MultiToggle_C*                            RestrictedMatchShowHideToggle;                           // 0x0510(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWBP_Sheik_MultiToggle_C*                            SocialPrivacyToggle;                                     // 0x0518(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWBP_Sheik_ScrollableVerticalList_C*                 SocialScrollBox;                                         // 0x0520(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWBP_Sheik_MultiToggle_C*                            VoiceChatInputDevice;                                    // 0x0528(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWBP_Sheik_MultiToggle_C*                            VoiceChatMethodToggle;                                   // 0x0530(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWBP_Sheik_MultiToggle_C*                            VoiceChatOptionsToggle;                                  // 0x0538(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWBP_Sheik_MultiToggle_C*                            VoiceChatOutputDevice;                                   // 0x0540(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWBP_Sheik_Slider_C*                                 VoiceChatVolumeSlider;                                   // 0x0548(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		bool                                                       FinishedConstruct;                                       // 0x0550(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_7HD6[0x7];                                   // 0x0551(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FEOSVoiceChatDeviceInfo                             CurrentVoiceChatInputDevice;                             // 0x0558(0x0020) Edit, BlueprintVisible, DisableEditOnInstance
		struct FEOSVoiceChatDeviceInfo                             CurrentVoiceChatOutputDevice;                            // 0x0578(0x0020) Edit, BlueprintVisible, DisableEditOnInstance
		bool                                                       UpdatingVOIPDevices;                                     // 0x0598(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_RVD2[0x7];                                   // 0x0599(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             StartRestrictedMatchConfirmed;                           // 0x05A0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             JoinRestrictedMatchConfirmed;                            // 0x05B0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FString                                              RestrictedMatchInviteCode;                               // 0x05C0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash
		class USheikPartyManager*                                  PartyManager;                                            // 0x05D0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<class FString>                                      AudioInputDeviceMapping;                                 // 0x05D8(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		TArray<class FString>                                      AudioOutputDeviceMapping;                                // 0x05E8(0x0010) Edit, BlueprintVisible, DisableEditOnInstance

	public:
		void UpdateCopyRestrictedMatchCodeButton();
		void ShouldDisableRestrictedMatchCreateandJoinButtons(bool* ShouldDisable);
		void ShouldDisableCopyInviteCodeButton(bool* ShouldDisable);
		void UpdateFillTeammatesToggle(bool FillTeammates);
		void RefreshFillTeammates();
		void RefreshVoiceChatOptions();
		void DisableVoiceChatOptions();
		void VerifyVoiceChatPermissions(bool* HasPermissions);
		void HideInputOutputDeviceSettings();
		void UpdateVoiceChatOutput(int32_t OutputDeviceIndex);
		void InitializeVoiceChatOutputOptions();
		void UpdateVoiceChatInput(int32_t InputDeviceIndex);
		void InitializeVoiceChatInputOptions();
		void SetVoiceChatVolume(float Volume);
		void UpdateVoiceChatPushToTalkText(bool Enabled);
		void UpdateVoiceChatEnabledText(bool Enabled);
		void SetupCrossplayControls();
		void GetMatchmakingCallbacks(class USheikMatchmakingCallbacks** Out);
		void OnMatchmakingAttemptComplete(bool bSuccessful, const struct FSheikError& Error);
		void DisableCrossplayToggle();
		void EnableCrossplayToggle();
		void BindtoPartyUpdateEvents();
		void RefreshRestrictedMatchShowHideCode();
		void UpdateRestrictedMatchmakingCreation();
		void GetWalletSystem(class USheikWalletSystem** OutWalletSystem);
		void OpenCrossplayPopup();
		void OpenRestrictedMatchErrorPopup();
		bool IsCrossplayEnabled();
		void RefreshSocialPrivacy();
		void CheckIfPartiedButNotLeader(bool* IsPartiedButNotLeader);
		void UpdateRestrictedMatchmakingButtons();
		class USheikPartyManager* GetPartyManager();
		void GetNavigableWidgets(TArray<class UIGUI_WidgetBase*>* NavigableWidgets);
		void BndEvt__RestrictedMatchCreate_K2Node_ComponentBoundEvent_6_OnStateChangeEventWithUserIndex__DelegateSignature(class UIGUI_WidgetBase* Widget, int32_t UserIndex);
		void BndEvt__RestrictedMatchJoin_K2Node_ComponentBoundEvent_8_OnStateChangeEventWithUserIndex__DelegateSignature(class UIGUI_WidgetBase* Widget, int32_t UserIndex);
		void HandleStartRestrictedMatchConfirmed(const class FString& InviteCode, int32_t JoinTimer, bool bShouldServerBackfill, const class FString& MatchConfig);
		void OnActivated();
		void HandleJoinRestrictedMatchConfirmed(const class FString& InviteCode, const class FString& MatchConfig);
		void OnDeactivated();
		void BndEvt__WBP_Sheik_Social_Settings_RestrictedMatchShowHideToggle_K2Node_ComponentBoundEvent_7_OnOptionChanged__DelegateSignature(class UIGUI_WidgetBase* Source, const class FText& Text, int32_t index);
		void BndEvt__WBP_Sheik_Social_Settings_RestrictedMatchCopyInviteCode_K2Node_ComponentBoundEvent_9_OnStateChangeEventWithUserIndex__DelegateSignature(class UIGUI_WidgetBase* Widget, int32_t UserIndex);
		void OnRestrictedMatchHideMatchCodeChanged(bool bHideInviteCode);
		void BndEvt__WBP_Sheik_Social_Settings_CrossplayToggle_1_K2Node_ComponentBoundEvent_2_OnOptionChanged__DelegateSignature(class UIGUI_WidgetBase* Source, const class FText& Text, int32_t index);
		void HandleOnPlayerLeftParty(bool Succeeded, bool bLeftPrivate, bool bLeftTeam, bool bLeftPlatform);
		void HandleOnPartyPlayerLeftParty(const class FString& PlayerId);
		void HandleOnPlayerJoinedParty(bool bSucceeded, ESheikPartyJoinFailure FailureReason);
		void HandleOnPartyPlayerJoinedParty(const class FString& PlayerId, const class FString& MetaData, TArray<struct FMatchmakerPlayerAttribute> Attributes);
		void BndEvt__WBP_Sheik_Social_Settings_VoiceChatOptionsToggle_K2Node_ComponentBoundEvent_1_OnOptionChanged__DelegateSignature(class UIGUI_WidgetBase* Source, const class FText& Text, int32_t index);
		void BndEvt__WBP_Sheik_Social_Settings_VoiceChatMethodToggle_K2Node_ComponentBoundEvent_3_OnOptionChanged__DelegateSignature(class UIGUI_WidgetBase* Source, const class FText& Text, int32_t index);
		void BndEvt__WBP_Sheik_Social_Settings_VoiceChatVolumeSlider_K2Node_ComponentBoundEvent_4_OnValueChanged__DelegateSignature(class UIGUI_WidgetBase* Source, float RawValue, float PercentValue);
		void BndEvt__WBP_Sheik_Social_Settings_VoiceChatInputDevice_K2Node_ComponentBoundEvent_5_OnOptionChanged__DelegateSignature(class UIGUI_WidgetBase* Source, const class FText& Text, int32_t index);
		void BndEvt__WBP_Sheik_Social_Settings_VoiceChatOutputDevice_K2Node_ComponentBoundEvent_10_OnOptionChanged__DelegateSignature(class UIGUI_WidgetBase* Source, const class FText& Text, int32_t index);
		void OnVoiceChatOptionsUpdated(bool bIsEnabled, bool bIsMuted, bool bIsDeafened, bool bIsPushToTalk);
		void OnVoiceChatAvailableAudioDevicesChanged();
		void BndEvt__SocialPrivacyToggle_K2Node_ComponentBoundEvent_0_OnOptionChanged__DelegateSignature(class UIGUI_WidgetBase* Source, const class FText& Text, int32_t index);
		void ConstructOnlyOnce();
		void BndEvt__WBP_Sheik_Social_Settings_TeamFillToggle_K2Node_ComponentBoundEvent_11_OnOptionChanged__DelegateSignature(class UIGUI_WidgetBase* Source, const class FText& Text, int32_t index);
		void ExecuteUbergraph_WBP_Sheik_Social_Settings(int32_t EntryPoint);
		void JoinRestrictedMatchConfirmed__DelegateSignature(const class FString& InviteCode, const class FString& MatchConfig);
		void StartRestrictedMatchConfirmed__DelegateSignature(const class FString& InviteCode, int32_t JoinTimer, bool ShouldServerBackfill, const class FString& MatchConfig);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
