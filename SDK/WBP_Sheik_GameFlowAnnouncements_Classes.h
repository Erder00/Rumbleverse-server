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
	 * WidgetBlueprintGeneratedClass WBP_Sheik_GameFlowAnnouncements.WBP_Sheik_GameFlowAnnouncements_C
	 * Size -> 0x00C8 (FullSize[0x0598] - InheritedSize[0x04D0])
	 */
	class UWBP_Sheik_GameFlowAnnouncements_C : public USheikAnnouncementManager
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x04D0(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UWBP_Sheik_CannonLaunch_C*                           CannonLaunch;                                            // 0x04D8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWBP_Sheik_CannonLaunchMasterAnnouncement_C*         CannonLaunchMasterAnnouncement;                          // 0x04E0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWBP_Sheik_GameModeObjectiveAnnouncement_C*          GameModeObjectiveAnnouncement;                           // 0x04E8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWBP_Sheik_GenericAnnouncement_C*                    GenericAnnouncement;                                     // 0x04F0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWBP_Sheik_RingNextShrink_C*                         RingNextShrink;                                          // 0x04F8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWBP_Sheik_RingStartedShrink_C*                      RingStartedShrink;                                       // 0x0500(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWBP_Sheik_RingTimeOut_C*                            RingTimeOut;                                             // 0x0508(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USheikGameInfo_BP_C*                                 GameInfo;                                                // 0x0510(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<class USheikAnnouncementWidget*>                    ListOfAnnouncementWidgets;                               // 0x0518(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference
		TMap<ESheikAnnouncementType, class USheikAnnouncementWidget*> AnnouncementTypeToWidgetMap;                             // 0x0528(0x0050) Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference
		int32_t                                                    CachedTime;                                              // 0x0578(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_KUEJ[0x4];                                   // 0x057C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class USheikGameInfo_BP_C*                                 Game;                                                    // 0x0580(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		EGameFlowState                                             GameFlowState;                                           // 0x0588(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_QZRR[0x7];                                   // 0x0589(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class ASheikPlayerControllerCommon*                        SheikPlayerController;                                   // 0x0590(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void OnTeamCannonLaunch_cb();
		void ConvertEReasonFansAwarded(EReasonFansAwarded Reason, class FString* DisplayMessage);
		void OnTeamLaunchAimStarted_cb(class ASheikCharacter* LaunchMaster, bool IsLaunchMaster);
		void HandleOnShowAnnouncement(const struct FSheikAnnouncement& SheikAnnouncement);
		void FindAnnouncementWidget(int32_t AnnouncementId, class USheikAnnouncementWidget** AnnouncementWidget);
		void PopulateAnnouncementsMapAndArray();
		void OnPinEvent_cb(ESheikPinEventType EventType, class ASheikCharacter* Attacker, class ASheikCharacter* Victim);
		void OnRingStartsWaiting_cb(int32_t WaitTime);
		void OnRingStartsShrinkingCb(float ShrinkTime);
		void OnTimeTillLaunchChanged_cb(int32_t NewTimeTillLaunch);
		void OnGameFlowStateChanged_cb(EGameFlowState GameFlowState);
		void OnRingOutTimeChanged_cb(int32_t RingOutTime);
		void ConstructOnlyOnce();
		void SetSpeedFactor_BP(int32_t AnnouncementId, float NewSpeedFactor);
		void ShowAnnouncement_BP(const struct FSheikAnnouncement& AnnouncementData);
		void CloseAnnouncement_BP(int32_t AnnouncementId);
		void DeactivateAllAnnouncementWidgets();
		void ExecuteUbergraph_WBP_Sheik_GameFlowAnnouncements(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
