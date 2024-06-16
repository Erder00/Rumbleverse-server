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
	 * WidgetBlueprintGeneratedClass WBP_Sheik_Social_RecentPlayers.WBP_Sheik_Social_RecentPlayers_C
	 * Size -> 0x0419 (FullSize[0x08D1] - InheritedSize[0x04B8])
	 */
	class UWBP_Sheik_Social_RecentPlayers_C : public USheikWidgetBase
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x04B8(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UWBP_Sheik_LR_GridLegendKey_C*                       CancelKey;                                               // 0x04C0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UOverlay*                                            DetailsPane;                                             // 0x04C8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UOverlay*                                            InputPrompts;                                            // 0x04D0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWBP_Sheik_Social_JoinGameCallout_C*                 JoinGameCallout;                                         // 0x04D8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              LoadingImage;                                            // 0x04E0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWBP_Sheik_Social_PlayerOptions_C*                   OptionsPanel;                                            // 0x04E8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWBP_Sheik_Social_PlayerList_C*                      RecentPlayersList;                                       // 0x04F0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWBP_Sheik_ReportPlayerForm_C*                       ReportPlayerForm;                                        // 0x04F8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWidgetSwitcher*                                     Switcher;                                                // 0x0500(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		struct FSheikPlayerSocialEntry                             SelectedSocialEntry;                                     // 0x0508(0x03C8) Edit, BlueprintVisible, DisableEditOnInstance
		bool                                                       bFirstQuery;                                             // 0x08D0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void UpdateSelectedSocialEntry(TArray<struct FSheikPlayerSocialEntry>* SocialEntries);
		class USheikFriendsManager* GetFriendsManager();
		void PlayerAccountsManager(class USheikPlayerAccountsManager** AccountsManager);
		void CloseOptions();
		void GetPlayerData(class USheikPlayerData** PlayerData);
		void SetData(TArray<struct FSheikPlayerSocialEntry>* SocialEntries);
		void ShouldBlockScreenInput(bool* ShouldBlock);
		void UpdateRecentPlayersVisibility(bool HasRecentPlayers);
		void UpdateRecentPlayers();
		void BndEvt__ReportPlayerForm_K2Node_ComponentBoundEvent_2_BackPressed__DelegateSignature();
		void BndEvt__OptionsPanel_K2Node_ComponentBoundEvent_3_OnOpenReportForm__DelegateSignature();
		void OnDeactivated();
		void BndEvt__OptionsPanel_K2Node_ComponentBoundEvent_5_OnClose__DelegateSignature();
		void BndEvt__RecentPlayersList_K2Node_ComponentBoundEvent_6_OnEntrySelected__DelegateSignature(class UIGUI_WidgetBase* Widget, int32_t UserIndex, const struct FSheikPlayerSocialEntry& PlayerSocialEntry);
		void OnGetRecentPlayers(TArray<struct FSheikPlayerSocialEntry> SocialEntries, bool bWasSuccessful);
		void OnInitialized();
		void OnBlockedPlayersUpdated();
		void OnActivated();
		void ExecuteUbergraph_WBP_Sheik_Social_RecentPlayers(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
