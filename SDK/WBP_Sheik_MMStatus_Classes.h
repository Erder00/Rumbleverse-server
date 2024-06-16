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
	 * WidgetBlueprintGeneratedClass WBP_Sheik_MMStatus.WBP_Sheik_MMStatus_C
	 * Size -> 0x006A (FullSize[0x02CA] - InheritedSize[0x0260])
	 */
	class UWBP_Sheik_MMStatus_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0260(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UTextBlock*                                          SearchingText;                                           // 0x0268(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		struct FSlateFontInfo                                      Font;                                                    // 0x0270(0x0058) Edit, BlueprintVisible, HasGetValueTypeHash
		bool                                                       OnPersistentMenu;                                        // 0x02C8(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       AutoWrapContainedText;                                   // 0x02C9(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor

	public:
		void ErrorPopup(const struct FSheikError& Error);
		void PartyManager(class USheikPartyManager** PartyManager);
		void MatchmakingCallbacks(class USheikMatchmakingCallbacks** MatchmakingCallbacks);
		void OnInitialized();
		void EventHandleOnMatchmakingStarted(const class FString& MatchConfig);
		void OnMatchmakingStatusChanged(EMatchmakingStatus NewStatus);
		void EventHandleOnPartyMatchmakingStarted(const class FString& ConfigurationName, bool bIsLeader);
		void EventHandleOnPartyMatchmakingStopped(bool bIsLeader);
		void EventHandleOnPartyMatchmakingFound(bool bIsLeader);
		void EventHandleOnPartyMatchmakingError(const class FText& ErrorText, bool bIsPartyLeader);
		void OnPartyPlayerLeft(const class FString& PlayerId);
		void PreConstruct(bool IsDesignTime);
		void OnMatchmakingComplete(bool bSuccessful, const struct FSheikError& Error);
		void OnMatchmakingCancelled(bool bSuccessful, const struct FSheikError& Error);
		void ExecuteUbergraph_WBP_Sheik_MMStatus(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
