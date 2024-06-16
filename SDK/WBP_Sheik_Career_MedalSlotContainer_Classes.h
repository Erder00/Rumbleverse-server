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
	 * WidgetBlueprintGeneratedClass WBP_Sheik_Career_MedalSlotContainer.WBP_Sheik_Career_MedalSlotContainer_C
	 * Size -> 0x00C0 (FullSize[0x0578] - InheritedSize[0x04B8])
	 */
	class UWBP_Sheik_Career_MedalSlotContainer_C : public USheikWidgetBase
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x04B8(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UWBP_Sheik_Career_TitleCard_MedalSlot_C*             MedalSlot_Bottom;                                        // 0x04C0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWBP_Sheik_Career_TitleCard_MedalSlot_C*             MedalSlot_Middle;                                        // 0x04C8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWBP_Sheik_Career_TitleCard_MedalSlot_C*             MedalSlot_Top;                                           // 0x04D0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		ETitleCardStackOrder                                       CurrentStatSlot;                                         // 0x04D8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_X4GY[0x7];                                   // 0x04D9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             UpdateCurrentMedalSlot;                                  // 0x04E0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             BindRewardToMedalSlot;                                   // 0x04F0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		bool                                                       AllCurrentRewardSlotTracking;                            // 0x0500(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_TNTN[0x7];                                   // 0x0501(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UWBP_Sheik_Career_TitleCard_MedalSlot_C*>     MedalSlots;                                              // 0x0508(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference
		TMap<ETitleCardStackOrder, class UWBP_Sheik_Career_TitleCard_MedalSlot_C*> MedalSlotMap;                                            // 0x0518(0x0050) Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference
		TArray<struct FIGTitleCardMedal>                           SavedMedals;                                             // 0x0568(0x0010) Edit, BlueprintVisible, DisableEditOnInstance

	public:
		void SetNavigationalOverrideWidgets();
		bool IsMedalSlotFilled(const struct FIGTitleCardMedal& IGTitleCardMedal);
		void UpdateSlotsWithSavedMedals(class UWBP_Sheik_Career_TitleCard_MedalSlot_C* InMedalSlot);
		void UpdateContainerWithSavedMedals(TArray<struct FIGTitleCardMedal>* InSavedMedals);
		void UpdateRewardSlot(class UWBP_Sheik_Career_TitleCard_MedalSlot_C* InCurrentSlot, const struct FIGTitleCardMedal& InMedalData);
		void FindRewardSlot(ETitleCardStackOrder InRewardSlot, class UWBP_Sheik_Career_TitleCard_MedalSlot_C** RewardSlotRef);
		void GetNavigableWidgets(TArray<class UIGUI_WidgetBase*>* NavigableWidgets);
		void HandleCurrentWidgetUpdate(ETitleCardStackOrder InRewardSlot);
		void FocusOnCurrentMedalSlot();
		void ClearMedalSlotFocus();
		void SetFocusable(bool CanBeFocused);
		void HandleFocus(bool IsFocused);
		void OnLoseFocus(int32_t UserIndex);
		void OnGainFocus(int32_t UserIndex);
		void ConstructOnlyOnce();
		void BndEvt__MedalSlot_Top_K2Node_ComponentBoundEvent_0_CurrentWidgetUpdated__DelegateSignature(ETitleCardStackOrder InRewardSlot);
		void BndEvt__MedalSlot_Top_K2Node_ComponentBoundEvent_1_RewardSlotSelected__DelegateSignature(ETitleCardStackOrder InRewardSlot);
		void BndEvt__MedalSlot_Middle_K2Node_ComponentBoundEvent_8_CurrentWidgetUpdated__DelegateSignature(ETitleCardStackOrder InRewardSlot);
		void BndEvt__MedalSlot_Middle_K2Node_ComponentBoundEvent_9_RewardSlotSelected__DelegateSignature(ETitleCardStackOrder InRewardSlot);
		void BndEvt__MedalSlot_Bottom_K2Node_ComponentBoundEvent_10_CurrentWidgetUpdated__DelegateSignature(ETitleCardStackOrder InRewardSlot);
		void BndEvt__MedalSlot_Bottom_K2Node_ComponentBoundEvent_11_RewardSlotSelected__DelegateSignature(ETitleCardStackOrder InRewardSlot);
		void ExecuteUbergraph_WBP_Sheik_Career_MedalSlotContainer(int32_t EntryPoint);
		void BindRewardToMedalSlot__DelegateSignature(ETitleCardStackOrder InRewardSlot);
		void UpdateCurrentMedalSlot__DelegateSignature(ETitleCardStackOrder InRewardSlot);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
