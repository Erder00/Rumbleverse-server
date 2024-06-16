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
	 * WidgetBlueprintGeneratedClass WBP_Sheik_CannonLaunchMasterAnnouncement.WBP_Sheik_CannonLaunchMasterAnnouncement_C
	 * Size -> 0x0018 (FullSize[0x0680] - InheritedSize[0x0668])
	 */
	class UWBP_Sheik_CannonLaunchMasterAnnouncement_C : public USheikAnnouncementWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0668(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UWidgetAnimation*                                    PlayAnim;                                                // 0x0670(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class URichTextBlock*                                      CannonLaunchMasterAnnouncement;                          // 0x0678(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash

	public:
		void SetAnnouncementText(bool IsLaunchMaster, const class FString& LaunchMasterName);
		void ConstructOnlyOnce();
		void HandleOnAnimationFinished();
		void StartAnnouncement_BP(const struct FSheikAnnouncement& SheikAnnouncementData);
		void CloseAnnouncement_BP();
		void SetSpeedFactor_BP(float NewSpeedFactor);
		void PreConstruct(bool IsDesignTime);
		void ExecuteUbergraph_WBP_Sheik_CannonLaunchMasterAnnouncement(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
