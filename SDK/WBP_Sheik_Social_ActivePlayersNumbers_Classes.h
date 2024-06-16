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
	 * WidgetBlueprintGeneratedClass WBP_Sheik_Social_ActivePlayersNumbers.WBP_Sheik_Social_ActivePlayersNumbers_C
	 * Size -> 0x0020 (FullSize[0x0438] - InheritedSize[0x0418])
	 */
	class UWBP_Sheik_Social_ActivePlayersNumbers_C : public UIGUI_WidgetBase
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0418(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UTextBlock*                                          FriendsOnlineText;                                       // 0x0420(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          FriendsPlayingText;                                      // 0x0428(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          TotalFriendsText;                                        // 0x0430(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash

	public:
		void SetData(TArray<struct FSheikPlayerAccount>* PlayerAccounts);
		void SetText(int32_t FriendsPlaying, int32_t FriendsOnline, int32_t TotalFriends);
		class USheikFriendsManager* GetFriendsManager();
		void OnFriendsListUpdated(bool bSuccessful);
		void Construct();
		void OnInitialized();
		void OnFriendPresenceUpdated(const struct FSheikPlayerAccount& Account);
		void ExecuteUbergraph_WBP_Sheik_Social_ActivePlayersNumbers(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
