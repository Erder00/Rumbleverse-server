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
	 * WidgetBlueprintGeneratedClass WBP_Sheik_RepProgressNotification.WBP_Sheik_RepProgressNotification_C
	 * Size -> 0x0019 (FullSize[0x0681] - InheritedSize[0x0668])
	 */
	class UWBP_Sheik_RepProgressNotification_C : public USheikAnnouncementWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0668(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UWidgetAnimation*                                    PlayAnim;                                                // 0x0670(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UWBP_Sheik_RepInfo_C*                                WBP_Sheik_RepInfo;                                       // 0x0678(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		EUISounds                                                  RepProgressSound;                                        // 0x0680(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void UpdateRepProgress(const class FText& NewRepProgressText);
		void SetRepProgressSound(bool RepIsComplete);
		void OnRepProgressThresholdPassed_cb(const struct FRepUIData& NotificationRep);
		void ShowRepProgress(const class FText& RepProgressText);
		void ShowRepProgressAnimFinished();
		void ConstructOnlyOnce();
		void CloseAnnouncement_BP();
		void SetSpeedFactor_BP(float NewSpeedFactor);
		void StartAnnouncement_BP(const struct FSheikAnnouncement& SheikAnnouncementData);
		void ExecuteUbergraph_WBP_Sheik_RepProgressNotification(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
