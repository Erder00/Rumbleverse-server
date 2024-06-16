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
	 * WidgetBlueprintGeneratedClass WBP_Sheik_ProgressionAnnouncements.WBP_Sheik_ProgressionAnnouncements_C
	 * Size -> 0x00D8 (FullSize[0x05A8] - InheritedSize[0x04D0])
	 */
	class UWBP_Sheik_ProgressionAnnouncements_C : public USheikAnnouncementManager
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x04D0(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UWBP_Sheik_FanCloutAnnouncement_C*                   FanCloutAnnouncement;                                    // 0x04D8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWBP_Sheik_RepProgressNotification_C*                RepProgressNotification;                                 // 0x04E0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USheikGameInfo_BP_C*                                 GameInfo;                                                // 0x04E8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<class USheikAnnouncementWidget*>                    ListOfAnnouncementWidgets;                               // 0x04F0(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference
		TMap<ESheikAnnouncementType, class USheikAnnouncementWidget*> AnnouncementTypeToWidgetMap;                             // 0x0500(0x0050) Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference
		int32_t                                                    CachedTime;                                              // 0x0550(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_8U9J[0x4];                                   // 0x0554(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TMap<class FName, int32_t>                                 RepProgressAnnouncementsInQueue;                         // 0x0558(0x0050) Edit, BlueprintVisible, DisableEditOnInstance

	public:
		void GenerateDebugNextCloutLevel(const struct FProgressionLevel& CurrentLevel, struct FProgressionLevel* NextLevel);
		void ConvertEReasonFansAwarded(EReasonFansAwarded Reason, class FText* DisplayMessage);
		void OnCloutLevelUpOccurred_cb(TArray<struct FProgressionLevel> OldLevels, const struct FProgressionLevel& NewLevel, int32_t OldFanCount, int32_t TotalNewFans, int32_t LeftoverFansForCurrentLevel, int32_t NewFanMail, EReasonFansAwarded ReasonForAwardingFans, bool ShouldShowAnnouncement);
		void OnCloutFansIncreasedOnlyOccurred_cb(const struct FProgressionLevel& CurrentLevel, int32_t OldFanCount, int32_t NewFansAdded, EReasonFansAwarded ReasonFansAwarded, bool ShouldShowAnnouncement);
		void OnRepProgressThresholdPassed_cb(const struct FRepUIData& NotificationRep);
		void HandleOnShowAnnouncement(const struct FSheikAnnouncement& SheikAnnouncement);
		void FindAnnouncementWidget(int32_t AnnouncementId, class USheikAnnouncementWidget** AnnouncementWidget);
		void PopulateAnnouncementsMapAndArray();
		void ConstructOnlyOnce();
		void SetSpeedFactor_BP(int32_t AnnouncementId, float NewSpeedFactor);
		void ShowAnnouncement_BP(const struct FSheikAnnouncement& AnnouncementData);
		void CloseAnnouncement_BP(int32_t AnnouncementId);
		void DeactivateAllAnnouncementWidgets();
		void ExecuteUbergraph_WBP_Sheik_ProgressionAnnouncements(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
