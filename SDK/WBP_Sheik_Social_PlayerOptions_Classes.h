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
	 * WidgetBlueprintGeneratedClass WBP_Sheik_Social_PlayerOptions.WBP_Sheik_Social_PlayerOptions_C
	 * Size -> 0x0868 (FullSize[0x0D20] - InheritedSize[0x04B8])
	 */
	class UWBP_Sheik_Social_PlayerOptions_C : public USheikWidgetBase
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x04B8(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UWidgetAnimation*                                    Show;                                                    // 0x04C0(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UWBP_Sheik_ContextualMenuButton_C*                   AcceptInvitationOption;                                  // 0x04C8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWBP_Sheik_ContextualMenuButton_C*                   BlockPlayerOption;                                       // 0x04D0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWBP_Sheik_ContextualMenuButton_C*                   DeclineInvitationOption;                                 // 0x04D8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWBP_Sheik_ContextualMenuButton_C*                   JoinOption;                                              // 0x04E0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWBP_Sheik_ContextualMenuButton_C*                   KickFromPartyOption;                                     // 0x04E8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWBP_Sheik_ContextualMenuButton_C*                   LeavePartyOption;                                        // 0x04F0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWBP_Sheik_ContextualMenuButton_C*                   MuteOption;                                              // 0x04F8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UScrollBox*                                          NameScrollBar;                                           // 0x0500(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UVerticalBox*                                        OptionsBox;                                              // 0x0508(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWBP_Sheik_ContextualMenuButton_C*                   PartyInviteOption;                                       // 0x0510(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              PlatformImage;                                           // 0x0518(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          PlayerUsername;                                          // 0x0520(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWBP_Sheik_ContextualMenuButton_C*                   PromoteToPartyLeaderOption;                              // 0x0528(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWBP_Sheik_ContextualMenuButton_C*                   ReportPlayerOption;                                      // 0x0530(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              SpeakerIcon;                                             // 0x0538(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              SpeakerIconTalking;                                      // 0x0540(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWBP_Sheik_ContextualMenuButton_C*                   UnblockPlayerOption;                                     // 0x0548(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWBP_Sheik_ContextualMenuButton_C*                   ViewProfileOption;                                       // 0x0550(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		struct FSheikPlayerSocialEntry                             PlayerSocialEntry;                                       // 0x0558(0x03C8) Edit, BlueprintVisible, DisableEditOnInstance
		struct FSheikPlayerAccount                                 Account;                                                 // 0x0920(0x02F0) Edit, BlueprintVisible, DisableEditOnInstance
		struct FPartyInvitation                                    PartyInvitation;                                         // 0x0C10(0x0030) Edit, BlueprintVisible, DisableEditOnInstance
		struct FPartyMemberInfo                                    PartyMember;                                             // 0x0C40(0x0090) Edit, BlueprintVisible, DisableEditOnInstance
		class FScriptMulticastDelegate                             OnClose;                                                 // 0x0CD0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             OnOpenReportForm;                                        // 0x0CE0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		bool                                                       AllowScroll;                                             // 0x0CF0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_P3Z5[0x7];                                   // 0x0CF1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              CozmoId;                                                 // 0x0CF8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash
		TArray<class FString>                                      PendingBlockChangeIds;                                   // 0x0D08(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		class USheikButtonBase*                                    FocusedButton;                                           // 0x0D18(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void OnFriendPresenceUpdated(const struct FSheikPlayerAccount& InAccount);
		void IsPresenceInFrontend(bool* IsPresenceInFrontend);
		void GetProductId(class FString* EOSProductId);
		void PromoteSelfToPartyLeader();
		void UpdatePromoteToPartyLeaderOption();
		void IsOnSamePlatform(bool* Out);
		bool IsPendingBlockChange();
		void OpenJoinPlayerConfirmationPopup();
		void OpenAcceptInviteConfirmationPopup();
		void LeavePartyWithBlockedPlayer(const class FString& PlayerId);
		void UpdateVoiceChatIcon(bool IsEnabled, bool IsMuted);
		void UpdateVoiceChatTalking(bool IsTalking);
		void OpenCrossplayMismatchErrorPopup();
		void OnVoiceChatPlayerTalking(const class FString& ChannelName, const class FString& ProductUserId, bool bIsTalking, bool bIsLocalPlayer);
		void OnVoiceChatMuteListChanged();
		void CloseBlockPlayerPrompt(int32_t PopupId, const class FName& BindingName);
		void OpenBlockPlayerPrompt(bool Unblocking);
		void UpdateUnblockPlayerOption();
		void UpdateBlockPlayerOption();
		bool HasVoiceChatPermissions();
		void UpdateMuteOption();
		void UpdateReportPlayerOption();
		void UpdateJoinPlayerOption();
		void UpdateLeavePartyOption();
		void UpdateKickFromPartyOption();
		void GetFirstVisibleOption(class UIGUI_WidgetBase** Widget);
		void UpdateDeclineInviteOption();
		void UpdateAcceptInviteOption();
		void UpdatePartyInviteOption();
		void GetPartyManager(class USheikPartyManager** PartyManager);
		void GetFriendsManager(class USheikFriendsManager** FriendsManager);
		void UpdateViewProfileOption();
		void UpdateOptions();
		void UpdatePlatformImage();
		void UpdateName();
		void SetPlayerSocialEntry(const struct FSheikPlayerSocialEntry& PlayerSocialEntry);
		void OnInputBack(const struct FInputEventData& InputEventData);
		void GetNavigableWidgets(TArray<class UIGUI_WidgetBase*>* NavigableWidgets);
		void OnActivated();
		void OnDeactivated();
		void OnInitialized();
		void PreConstruct(bool IsDesignTime);
		void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
		void OnPartyUpdated();
		void BindPartyManagerDelegates();
		void ConfirmBlockPlayer(int32_t PopupId, const class FName& BindingName);
		void ConfirmUnblockPlayer(int32_t PopupId, const class FName& BindingName);
		void CloseErrorPopup(int32_t PopupId, const class FName& BindingName);
		void OnConfirmAcceptInvite(int32_t PopupId, const class FName& BindingName);
		void OnCancelAcceptInvite(int32_t PopupId, const class FName& BindingName);
		void OnConfirmJoinPlayer(int32_t PopupId, const class FName& BindingName);
		void OnCancelJoinPlayer(int32_t PopupId, const class FName& BindingName);
		void BndEvt__MuteOption_K2Node_ComponentBoundEvent_5_OnStateChangeEventWithUserIndex__DelegateSignature(class UIGUI_WidgetBase* Widget, int32_t UserIndex);
		void BndEvt__PartyInviteOption_K2Node_ComponentBoundEvent_18_OnStateChangeEventWithUserIndex__DelegateSignature(class UIGUI_WidgetBase* Widget, int32_t UserIndex);
		void BndEvt__PartyInviteOption_1_K2Node_ComponentBoundEvent_20_OnStateChangeEventWithUserIndex__DelegateSignature(class UIGUI_WidgetBase* Widget, int32_t UserIndex);
		void BndEvt__ViewProfileOption_K2Node_ComponentBoundEvent_22_OnStateChangeEventWithUserIndex__DelegateSignature(class UIGUI_WidgetBase* Widget, int32_t UserIndex);
		void BndEvt__AcceptInvitationOption_K2Node_ComponentBoundEvent_25_OnStateChangeEventWithUserIndex__DelegateSignature(class UIGUI_WidgetBase* Widget, int32_t UserIndex);
		void BndEvt__ViewProfileOption_2_K2Node_ComponentBoundEvent_26_OnStateChangeEventWithUserIndex__DelegateSignature(class UIGUI_WidgetBase* Widget, int32_t UserIndex);
		void BndEvt__KickFromPartyOption_K2Node_ComponentBoundEvent_27_OnStateChangeEventWithUserIndex__DelegateSignature(class UIGUI_WidgetBase* Widget, int32_t UserIndex);
		void BndEvt__LeavePartyOption_K2Node_ComponentBoundEvent_28_OnStateChangeEventWithUserIndex__DelegateSignature(class UIGUI_WidgetBase* Widget, int32_t UserIndex);
		void BndEvt__ReportPlayerOption_K2Node_ComponentBoundEvent_29_OnStateChangeEventWithUserIndex__DelegateSignature(class UIGUI_WidgetBase* Widget, int32_t UserIndex);
		void BndEvt__BlockPlayerOption_K2Node_ComponentBoundEvent_30_OnStateChangeEventWithUserIndex__DelegateSignature(class UIGUI_WidgetBase* Widget, int32_t UserIndex);
		void BndEvt__UnblockPlayerOption_K2Node_ComponentBoundEvent_31_OnStateChangeEventWithUserIndex__DelegateSignature(class UIGUI_WidgetBase* Widget, int32_t UserIndex);
		void OnBlockPlayer(bool bWasSuccessful, const struct FSheikError& Error, const class FString& CozmoId);
		void OnUnblockPlayer(bool bWasSuccessful, const struct FSheikError& Error, const class FString& CozmoId);
		void BndEvt__WBP_Sheik_Social_PlayerOptions_PromoteToPartyLeaderOption_K2Node_ComponentBoundEvent_0_OnStateChangeEventWithUserIndex__DelegateSignature(class UIGUI_WidgetBase* Widget, int32_t UserIndex);
		void ShowErrorMessage(const class FString& ErrorString);
		void OnOptionsButtonFocused(class UIGUI_WidgetBase* Widget, int32_t UserIndex);
		void ExecuteUbergraph_WBP_Sheik_Social_PlayerOptions(int32_t EntryPoint);
		void OnClose__DelegateSignature();
		void OnOpenReportForm__DelegateSignature();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
