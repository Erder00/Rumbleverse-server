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
	 * WidgetBlueprintGeneratedClass WBP_Sheik_Social_Friends.WBP_Sheik_Social_Friends_C
	 * Size -> 0x0449 (FullSize[0x0901] - InheritedSize[0x04B8])
	 */
	class UWBP_Sheik_Social_Friends_C : public USheikWidgetBase
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x04B8(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UWBP_Sheik_Social_AddFriendCallout_C*                AddFriendCallout;                                        // 0x04C0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWBP_Sheik_LR_GridLegendKey_C*                       BackKey;                                                 // 0x04C8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UOverlay*                                            DetailsPane;                                             // 0x04D0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UOverlay*                                            InputPrompts;                                            // 0x04D8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              LoadingImage;                                            // 0x04E0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWBP_Sheik_Social_PlayerOptions_C*                   OptionsPanel;                                            // 0x04E8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWBP_Sheik_Social_PlayerList_C*                      PlayerList;                                              // 0x04F0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWBP_Sheik_ReportPlayerForm_C*                       ReportPlayerForm;                                        // 0x04F8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWidgetSwitcher*                                     Switcher;                                                // 0x0500(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              Tint;                                                    // 0x0508(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		TArray<struct FSheikPlayerSocialEntry>                     TestFriendsArray;                                        // 0x0510(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		bool                                                       TestingFriends;                                          // 0x0520(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_CFJF[0x7];                                   // 0x0521(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FSheikPlayerSocialEntry                             SelectedSocialEntry;                                     // 0x0528(0x03C8) Edit, BlueprintVisible, DisableEditOnInstance
		TArray<struct FSheikPlayerSocialEntry>                     TestPartyInvitesArray;                                   // 0x08F0(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		bool                                                       bFirstQuery;                                             // 0x0900(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void SetTintVisibility(bool TintVisible);
		void UpdateSelectedSocialEntry(TArray<struct FSheikPlayerSocialEntry>* SocialEntries);
		void GetPlayerAccountsManager(class USheikPlayerAccountsManager** PlayerAccountsManager);
		void TrySelectPartyMember();
		void CloseOptions();
		void TestGeneratePartyInvitations();
		void GetPartyManager(class USheikPartyManager** PartyManager);
		void ShouldBlockScreenInput(bool* ShouldBlock);
		void UpdateFriendsListVisibility(bool HasFriends);
		void TestGenerateFriends();
		class USheikFriendsManager* GetFriendsManager();
		void FriendsContinuousPopulateRandom(const class FString& Argument1, const class FString& Argument2, const class FString& Argument3, const class FString& Argument4);
		void RegisterTestCalls();
		void FriendsPopulateRandom(const class FString& Argument1, const class FString& Argument2, const class FString& Argument3, const class FString& Argument4);
		void FriendsClearFriendsList(const class FString& Argument1, const class FString& Argument2, const class FString& Argument3, const class FString& Argument4);
		void FriendsCancelTestingFriendsList(const class FString& Argument1, const class FString& Argument2, const class FString& Argument3, const class FString& Argument4);
		void FriendsPopulateRandomInvites(const class FString& Argument1, const class FString& Argument2, const class FString& Argument3, const class FString& Argument4);
		void OnInitialized();
		void OnFriendsListUpdated(bool bSuccessful);
		void FriendsContinuousPopulateRandomTimer();
		void UpdateFriends();
		void OnActivated();
		void OnDeactivated();
		void BindPartyManagerDelegates();
		void UpdateParty();
		void BndEvt__ReportPlayerForm_K2Node_ComponentBoundEvent_2_BackPressed__DelegateSignature();
		void BndEvt__OptionsPanel_K2Node_ComponentBoundEvent_3_OnOpenReportForm__DelegateSignature();
		void HandleTeamInfoUpdate();
		void OnPartyUpdated();
		void BndEvt__PlayerList_K2Node_ComponentBoundEvent_4_OnEntrySelected__DelegateSignature(class UIGUI_WidgetBase* Widget, int32_t UserIndex, const struct FSheikPlayerSocialEntry& PlayerSocialEntry);
		void BndEvt__OptionsPanel_K2Node_ComponentBoundEvent_5_OnClose__DelegateSignature();
		void OnGetSocialData(TArray<struct FSheikPlayerSocialEntry> SocialEntries, bool bWasSuccessful);
		void ExecuteUbergraph_WBP_Sheik_Social_Friends(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
