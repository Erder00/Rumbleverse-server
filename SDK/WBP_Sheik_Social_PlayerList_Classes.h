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
	 * WidgetBlueprintGeneratedClass WBP_Sheik_Social_PlayerList.WBP_Sheik_Social_PlayerList_C
	 * Size -> 0x044A (FullSize[0x0902] - InheritedSize[0x04B8])
	 */
	class UWBP_Sheik_Social_PlayerList_C : public USheikWidgetBase
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x04B8(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UWBP_Sheik_UniformGridList_C*                        GridList;                                                // 0x04C0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UOverlay*                                            GridOverlay;                                             // 0x04C8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWBP_Sheik_Numbered_Pager_C*                         PagerTabs;                                               // 0x04D0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWBP_Sheik_LR_GridLegendKey_C*                       SelectKey;                                               // 0x04D8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		TArray<class USheikWidgetBase*>                            NavigableWidgets;                                        // 0x04E0(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference
		int32_t                                                    EntriesPerPage;                                          // 0x04F0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    SelectedTabsPageIndex;                                   // 0x04F4(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    SelectedIndex;                                           // 0x04F8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    NumberPages;                                             // 0x04FC(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<class UIGUI_WidgetBase*>                            SeparatorWidgets;                                        // 0x0500(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference
		TArray<struct FSheikPlayerSocialEntry>                     PlayerSocialEntries;                                     // 0x0510(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		struct FSheikPlayerSocialEntry                             SelectedSocialEntry;                                     // 0x0520(0x03C8) Edit, BlueprintVisible, DisableEditOnInstance
		class FScriptMulticastDelegate                             OnEntrySelected;                                         // 0x08E8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		int32_t                                                    UnblockedPlayerSocialEntries;                            // 0x08F8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       ShowBlockedPlayersList;                                  // 0x08FC(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       BlockedHeaderCurrentlyVisible;                           // 0x08FD(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       PartyHeaderCurrentlyVisible;                             // 0x08FE(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       InvitationHeaderCurrentlyVisible;                        // 0x08FF(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       OfflineHeaderCurrentlyVisible;                           // 0x0900(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       OnlineHeaderCurrentlyVisible;                            // 0x0901(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void OnFriendPresenceUpdated(const struct FSheikPlayerAccount& Account);
		void GetFriendsManager(class USheikFriendsManager** FriendsManager);
		void ResetHeaders();
		void SetHeaderTextVisibility(const struct FSheikPlayerSocialEntry& PlayerSocialEntry, class UWBP_Sheik_Social_PlayerInfo_C* SocialPlayerEntry);
		void TabPageRight(const struct FInputEventData& InputEventData);
		void TabPageLeft(const struct FInputEventData& InputEventData);
		void HandlePageIndexInputSubscribe(bool Activated);
		void CreatePagerTabs();
		void SetSocialEntryData(TArray<struct FSheikPlayerSocialEntry>* SocialEntries);
		void OnSocialEntryWidgetUnfocused(class UIGUI_WidgetBase* Widget, int32_t UserIndex);
		void OnSocialEntryWidgetFocused(class UIGUI_WidgetBase* Widget, int32_t UserIndex);
		void OnSocialEntryWidgetSelected(class UIGUI_WidgetBase* Widget, int32_t UserIndex);
		void ClearSeparators();
		void AddSeparator(class UIGUI_WidgetBase* WidgetEntry, EWBP_Sheik_Social_ListSeparatorType SeparatorType);
		void FocusSocialEntry(const struct FSheikPlayerSocialEntry& SocialEntry);
		void GetNavigableWidgets(TArray<class UIGUI_WidgetBase*>* NavigableWidgets);
		void Populate();
		void PreviousPage();
		void NextPage();
		void FindWidgetForSocialEntry(const struct FSheikPlayerSocialEntry& SocialEntry, class USheikWidgetBase** Widget);
		void RefocusSelection();
		void FindDataIndexForSelection(int32_t* ArrayIndex);
		void AdjustPaging();
		void GetRelativeIndexForSelection(int32_t* ArrayIndex);
		void ClearSelection();
		void Update();
		void BndEvt__WBP_Sheik_Social_PlayerList_PagerTabs_K2Node_ComponentBoundEvent_0_SwitchPage__DelegateSignature(int32_t PageNumber);
		void OnInitialized();
		void ExecuteUbergraph_WBP_Sheik_Social_PlayerList(int32_t EntryPoint);
		void OnEntrySelected__DelegateSignature(class UIGUI_WidgetBase* Widget, int32_t UserIndex, const struct FSheikPlayerSocialEntry& PlayerSocialEntry);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
