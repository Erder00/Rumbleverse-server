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
	 * WidgetBlueprintGeneratedClass WBP_Sheik_Career_StatSlotContainer.WBP_Sheik_Career_StatSlotContainer_C
	 * Size -> 0x00E8 (FullSize[0x05A0] - InheritedSize[0x04B8])
	 */
	class UWBP_Sheik_Career_StatSlotContainer_C : public USheikWidgetBase
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x04B8(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UWBP_Sheik_Career_TitleCard_StatSlot_C*              StatSlot_Bottom;                                         // 0x04C0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWBP_Sheik_Career_TitleCard_StatSlot_C*              StatSlot_Middle;                                         // 0x04C8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWBP_Sheik_Career_TitleCard_StatSlot_C*              StatSlot_Top;                                            // 0x04D0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		TArray<class UWBP_Sheik_Career_TitleCard_StatSlot_C*>      StatSlots;                                               // 0x04D8(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference
		ETitleCardStackOrder                                       CurrentStatSlot;                                         // 0x04E8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_UXUS[0x7];                                   // 0x04E9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TMap<ETitleCardStackOrder, class UWBP_Sheik_Career_TitleCard_StatSlot_C*> StatSlotMap;                                             // 0x04F0(0x0050) Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference
		class FScriptMulticastDelegate                             UpdateCurrentStatSlot;                                   // 0x0540(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             BindRewardToStatSlot;                                    // 0x0550(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		bool                                                       AllCurrentRewardSlotTracking;                            // 0x0560(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_WTCC[0x7];                                   // 0x0561(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FIGTitleCardStat>                            StatRewards;                                             // 0x0568(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		TArray<float>                                              StatValues;                                              // 0x0578(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		class UWBP_Sheik_Career_TitleCard_C*                       TitleCardRef;                                            // 0x0588(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<class FText>                                        StatDisplayNames;                                        // 0x0590(0x0010) Edit, BlueprintVisible, DisableEditOnInstance

	public:
		void DebugPrintEnemyStatInfo();
		void SlotInits();
		void Init(class UWBP_Sheik_Career_TitleCard_C* InTitleCard);
		void SetNavigationalOverrideWidgets();
		bool IsStatSlotFilled(const struct FIGTitleCardStat& IGTitleCardStat);
		void UpdateSlotsWithSavedStats(class UWBP_Sheik_Career_TitleCard_StatSlot_C* InStatSlot);
		void UpdateContainerWithSavedStats(TArray<struct FIGTitleCardStat>* InStatRewards);
		void UpdateRewardSlot(class UWBP_Sheik_Career_TitleCard_StatSlot_C* InCurrentSlot, const struct FIGTitleCardStat& InStatData);
		void FindRewardSlot(ETitleCardStackOrder InRewardSlot, class UWBP_Sheik_Career_TitleCard_StatSlot_C** RewardSlotRef);
		void GetNavigableWidgets(TArray<class UIGUI_WidgetBase*>* NavigableWidgets);
		void HandleCurrentWidgetUpdate(ETitleCardStackOrder InRewardSlot);
		void FocusOnCurrentStatSlot();
		void ClearStatSlotFocus();
		void SetFocusable(bool CanBeFocused);
		void HandleFocus(bool IsFocused);
		void OnGainFocus(int32_t UserIndex);
		void OnLoseFocus(int32_t UserIndex);
		void BndEvt__StatSlot_Top_K2Node_ComponentBoundEvent_2_CurrentWidgetUpdated__DelegateSignature(ETitleCardStackOrder InRewardSlot);
		void BndEvt__StatSlot_Top_K2Node_ComponentBoundEvent_3_RewardSlotSelected__DelegateSignature(ETitleCardStackOrder InRewardSlot);
		void BndEvt__StatSlot_Middle_K2Node_ComponentBoundEvent_4_RewardSlotSelected__DelegateSignature(ETitleCardStackOrder InRewardSlot);
		void BndEvt__StatSlot_Middle_K2Node_ComponentBoundEvent_5_CurrentWidgetUpdated__DelegateSignature(ETitleCardStackOrder InRewardSlot);
		void BndEvt__StatSlot_Bottom_K2Node_ComponentBoundEvent_6_RewardSlotSelected__DelegateSignature(ETitleCardStackOrder InRewardSlot);
		void BndEvt__StatSlot_Bottom_K2Node_ComponentBoundEvent_7_CurrentWidgetUpdated__DelegateSignature(ETitleCardStackOrder InRewardSlot);
		void ConstructOnlyOnce();
		void ExecuteUbergraph_WBP_Sheik_Career_StatSlotContainer(int32_t EntryPoint);
		void BindRewardToStatSlot__DelegateSignature(ETitleCardStackOrder InRewardSlot);
		void UpdateCurrentStatSlot__DelegateSignature(ETitleCardStackOrder InRewardSlot);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
