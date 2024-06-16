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
	 * WidgetBlueprintGeneratedClass WBP_SheikPopupSystem.WBP_SheikPopupSystem_C
	 * Size -> 0x0064 (FullSize[0x051C] - InheritedSize[0x04B8])
	 */
	class UWBP_SheikPopupSystem_C : public USheikPopupSystem
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x04B8(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UOverlay*                                            MainOverlay;                                             // 0x04C0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		TMap<EPopupType, class UClass*>                            PopupTypeMap;                                            // 0x04C8(0x0050) Edit, BlueprintVisible, DisableEditOnInstance
		int32_t                                                    ActivePopupId;                                           // 0x0518(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void AddNewCustomPopup(const struct FPopupQueueData& PopupQueueData);
		void DestroyPopup(int32_t ID);
		void CreateNewPopup(const struct FPopupQueueData& PopupQueueData);
		void HandleOnPopupInfoUpdated(int32_t PopupId);
		void ConstructOnlyOnce();
		void ShowPopup(const struct FPopupQueueData& PopupData);
		void ClosePopup_BP(int32_t ID);
		void ExecuteUbergraph_WBP_SheikPopupSystem(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
