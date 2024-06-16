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
	 * WidgetBlueprintGeneratedClass WBP_Sheik_Social_PlayerInfo.WBP_Sheik_Social_PlayerInfo_C
	 * Size -> 0x0530 (FullSize[0x09E8] - InheritedSize[0x04B8])
	 */
	class UWBP_Sheik_Social_PlayerInfo_C : public USheikWidgetBase
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x04B8(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UWidgetAnimation*                                    SelectedAnim;                                            // 0x04C0(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UWidgetAnimation*                                    FocusAnim;                                               // 0x04C8(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UImage*                                              BlockedStatus;                                           // 0x04D0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              BorderBG;                                                // 0x04D8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              FocusBorder;                                             // 0x04E0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UHorizontalBox*                                      HeaderHoriz;                                             // 0x04E8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          HeaderText;                                              // 0x04F0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          LastSeenText;                                            // 0x04F8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UScrollBox*                                          NameScrollBar;                                           // 0x0500(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          NameText;                                                // 0x0508(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              PlatformImage;                                           // 0x0510(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          StatusText;                                              // 0x0518(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		bool                                                       IsFocused;                                               // 0x0520(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       IsDisabled;                                              // 0x0521(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_R6YG[0x2];                                   // 0x0522(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    ButtonUserIndex;                                         // 0x0524(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       AllowScroll;                                             // 0x0528(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_S1S2[0x7];                                   // 0x0529(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FSheikPlayerSocialEntry                             PlayerSocialEntry;                                       // 0x0530(0x03C8) Edit, BlueprintVisible, DisableEditOnInstance
		struct FSlateColor                                         OnlineColor;                                             // 0x08F8(0x0028) Edit, BlueprintVisible, DisableEditOnInstance
		struct FSlateColor                                         OfflineColor;                                            // 0x0920(0x0028) Edit, BlueprintVisible, DisableEditOnInstance
		struct FSlateColor                                         InPartyColor;                                            // 0x0948(0x0028) Edit, BlueprintVisible, DisableEditOnInstance
		struct FSlateColor                                         DefaultFontColor;                                        // 0x0970(0x0028) Edit, BlueprintVisible, DisableEditOnInstance
		struct FSlateColor                                         RecentPlayerColor;                                       // 0x0998(0x0028) Edit, BlueprintVisible, DisableEditOnInstance
		struct FSlateColor                                         BlockedPlayerColor;                                      // 0x09C0(0x0028) Edit, BlueprintVisible, DisableEditOnInstance

	public:
		void OnFriendPresenceUpdated(const struct FSheikPlayerAccount& Account);
		void GetFriendsManager(class USheikFriendsManager** FriendsManager);
		void UpdateHeaderVisiblity(bool IsVisible);
		void UpdateHeaderText();
		void UpdateWidgetColor(const struct FSlateColor& StatusBorderColor, const struct FSlateColor& NameColor);
		void UpdateBlockedStatus();
		void UpdateLastSeen();
		void UpdatePlatformImage();
		void UpdateStatus();
		void UpdateName();
		void SetData(const struct FSheikPlayerSocialEntry& PlayerSocialEntry);
		void OnSelectedAnimationFinished();
		void HandleSelect();
		void SetWidgetFocus(bool SkipAnimations, bool IsFocused);
		void OnSelected(int32_t UserIndex);
		void OnGainFocus(int32_t UserIndex);
		void OnLoseFocus(int32_t UserIndex);
		void PreConstruct(bool IsDesignTime);
		void ConstructOnlyOnce();
		void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
		void OnInitialized();
		void ExecuteUbergraph_WBP_Sheik_Social_PlayerInfo(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
