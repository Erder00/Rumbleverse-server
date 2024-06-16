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
	// # Structs
	// --------------------------------------------------
	/**
	 * Function WBP_Sheik_Career_MedalSlotContainer.WBP_Sheik_Career_MedalSlotContainer_C.SetNavigationalOverrideWidgets
	 */
	struct UWBP_Sheik_Career_MedalSlotContainer_C_SetNavigationalOverrideWidgets_Params
	{	};

	/**
	 * Function WBP_Sheik_Career_MedalSlotContainer.WBP_Sheik_Career_MedalSlotContainer_C.IsMedalSlotFilled
	 */
	struct UWBP_Sheik_Career_MedalSlotContainer_C_IsMedalSlotFilled_Params
	{
	public:
		struct FIGTitleCardMedal                                   IGTitleCardMedal;                                        // 0x0000(0x0120)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		bool                                                       ReturnValue;                                             // 0x0120(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_Sheik_Career_MedalSlotContainer.WBP_Sheik_Career_MedalSlotContainer_C.UpdateSlotsWithSavedMedals
	 */
	struct UWBP_Sheik_Career_MedalSlotContainer_C_UpdateSlotsWithSavedMedals_Params
	{
	public:
		class UWBP_Sheik_Career_TitleCard_MedalSlot_C*             InMedalSlot;                                             // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Sheik_Career_MedalSlotContainer.WBP_Sheik_Career_MedalSlotContainer_C.UpdateContainerWithSavedMedals
	 */
	struct UWBP_Sheik_Career_MedalSlotContainer_C_UpdateContainerWithSavedMedals_Params
	{
	public:
		TArray<struct FIGTitleCardMedal>                           InSavedMedals;                                           // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function WBP_Sheik_Career_MedalSlotContainer.WBP_Sheik_Career_MedalSlotContainer_C.UpdateRewardSlot
	 */
	struct UWBP_Sheik_Career_MedalSlotContainer_C_UpdateRewardSlot_Params
	{
	public:
		class UWBP_Sheik_Career_TitleCard_MedalSlot_C*             InCurrentSlot;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FIGTitleCardMedal                                   InMedalData;                                             // 0x0008(0x0120)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function WBP_Sheik_Career_MedalSlotContainer.WBP_Sheik_Career_MedalSlotContainer_C.FindRewardSlot
	 */
	struct UWBP_Sheik_Career_MedalSlotContainer_C_FindRewardSlot_Params
	{
	public:
		ETitleCardStackOrder                                       InRewardSlot;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_PBCH[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UWBP_Sheik_Career_TitleCard_MedalSlot_C*             RewardSlotRef;                                           // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Sheik_Career_MedalSlotContainer.WBP_Sheik_Career_MedalSlotContainer_C.GetNavigableWidgets
	 */
	struct UWBP_Sheik_Career_MedalSlotContainer_C_GetNavigableWidgets_Params
	{
	public:
		TArray<class UIGUI_WidgetBase*>                            NavigableWidgets;                                        // 0x0000(0x0010)  (Parm, OutParm, ContainsInstancedReference)
	};

	/**
	 * Function WBP_Sheik_Career_MedalSlotContainer.WBP_Sheik_Career_MedalSlotContainer_C.HandleCurrentWidgetUpdate
	 */
	struct UWBP_Sheik_Career_MedalSlotContainer_C_HandleCurrentWidgetUpdate_Params
	{
	public:
		ETitleCardStackOrder                                       InRewardSlot;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Sheik_Career_MedalSlotContainer.WBP_Sheik_Career_MedalSlotContainer_C.FocusOnCurrentMedalSlot
	 */
	struct UWBP_Sheik_Career_MedalSlotContainer_C_FocusOnCurrentMedalSlot_Params
	{	};

	/**
	 * Function WBP_Sheik_Career_MedalSlotContainer.WBP_Sheik_Career_MedalSlotContainer_C.ClearMedalSlotFocus
	 */
	struct UWBP_Sheik_Career_MedalSlotContainer_C_ClearMedalSlotFocus_Params
	{	};

	/**
	 * Function WBP_Sheik_Career_MedalSlotContainer.WBP_Sheik_Career_MedalSlotContainer_C.SetFocusable
	 */
	struct UWBP_Sheik_Career_MedalSlotContainer_C_SetFocusable_Params
	{
	public:
		bool                                                       CanBeFocused;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_1T7G[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function WBP_Sheik_Career_MedalSlotContainer.WBP_Sheik_Career_MedalSlotContainer_C.HandleFocus
	 */
	struct UWBP_Sheik_Career_MedalSlotContainer_C_HandleFocus_Params
	{
	public:
		bool                                                       IsFocused;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_Sheik_Career_MedalSlotContainer.WBP_Sheik_Career_MedalSlotContainer_C.OnLoseFocus
	 */
	struct UWBP_Sheik_Career_MedalSlotContainer_C_OnLoseFocus_Params
	{
	public:
		int32_t                                                    UserIndex;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Sheik_Career_MedalSlotContainer.WBP_Sheik_Career_MedalSlotContainer_C.OnGainFocus
	 */
	struct UWBP_Sheik_Career_MedalSlotContainer_C_OnGainFocus_Params
	{
	public:
		int32_t                                                    UserIndex;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Sheik_Career_MedalSlotContainer.WBP_Sheik_Career_MedalSlotContainer_C.ConstructOnlyOnce
	 */
	struct UWBP_Sheik_Career_MedalSlotContainer_C_ConstructOnlyOnce_Params
	{	};

	/**
	 * Function WBP_Sheik_Career_MedalSlotContainer.WBP_Sheik_Career_MedalSlotContainer_C.BndEvt__MedalSlot_Top_K2Node_ComponentBoundEvent_0_CurrentWidgetUpdated__DelegateSignature
	 */
	struct UWBP_Sheik_Career_MedalSlotContainer_C_BndEvt__MedalSlot_Top_K2Node_ComponentBoundEvent_0_CurrentWidgetUpdated__DelegateSignature_Params
	{
	public:
		ETitleCardStackOrder                                       InRewardSlot;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Sheik_Career_MedalSlotContainer.WBP_Sheik_Career_MedalSlotContainer_C.BndEvt__MedalSlot_Top_K2Node_ComponentBoundEvent_1_RewardSlotSelected__DelegateSignature
	 */
	struct UWBP_Sheik_Career_MedalSlotContainer_C_BndEvt__MedalSlot_Top_K2Node_ComponentBoundEvent_1_RewardSlotSelected__DelegateSignature_Params
	{
	public:
		ETitleCardStackOrder                                       InRewardSlot;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Sheik_Career_MedalSlotContainer.WBP_Sheik_Career_MedalSlotContainer_C.BndEvt__MedalSlot_Middle_K2Node_ComponentBoundEvent_8_CurrentWidgetUpdated__DelegateSignature
	 */
	struct UWBP_Sheik_Career_MedalSlotContainer_C_BndEvt__MedalSlot_Middle_K2Node_ComponentBoundEvent_8_CurrentWidgetUpdated__DelegateSignature_Params
	{
	public:
		ETitleCardStackOrder                                       InRewardSlot;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Sheik_Career_MedalSlotContainer.WBP_Sheik_Career_MedalSlotContainer_C.BndEvt__MedalSlot_Middle_K2Node_ComponentBoundEvent_9_RewardSlotSelected__DelegateSignature
	 */
	struct UWBP_Sheik_Career_MedalSlotContainer_C_BndEvt__MedalSlot_Middle_K2Node_ComponentBoundEvent_9_RewardSlotSelected__DelegateSignature_Params
	{
	public:
		ETitleCardStackOrder                                       InRewardSlot;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Sheik_Career_MedalSlotContainer.WBP_Sheik_Career_MedalSlotContainer_C.BndEvt__MedalSlot_Bottom_K2Node_ComponentBoundEvent_10_CurrentWidgetUpdated__DelegateSignature
	 */
	struct UWBP_Sheik_Career_MedalSlotContainer_C_BndEvt__MedalSlot_Bottom_K2Node_ComponentBoundEvent_10_CurrentWidgetUpdated__DelegateSignature_Params
	{
	public:
		ETitleCardStackOrder                                       InRewardSlot;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Sheik_Career_MedalSlotContainer.WBP_Sheik_Career_MedalSlotContainer_C.BndEvt__MedalSlot_Bottom_K2Node_ComponentBoundEvent_11_RewardSlotSelected__DelegateSignature
	 */
	struct UWBP_Sheik_Career_MedalSlotContainer_C_BndEvt__MedalSlot_Bottom_K2Node_ComponentBoundEvent_11_RewardSlotSelected__DelegateSignature_Params
	{
	public:
		ETitleCardStackOrder                                       InRewardSlot;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Sheik_Career_MedalSlotContainer.WBP_Sheik_Career_MedalSlotContainer_C.ExecuteUbergraph_WBP_Sheik_Career_MedalSlotContainer
	 */
	struct UWBP_Sheik_Career_MedalSlotContainer_C_ExecuteUbergraph_WBP_Sheik_Career_MedalSlotContainer_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Sheik_Career_MedalSlotContainer.WBP_Sheik_Career_MedalSlotContainer_C.BindRewardToMedalSlot__DelegateSignature
	 */
	struct UWBP_Sheik_Career_MedalSlotContainer_C_BindRewardToMedalSlot__DelegateSignature_Params
	{
	public:
		ETitleCardStackOrder                                       InRewardSlot;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Sheik_Career_MedalSlotContainer.WBP_Sheik_Career_MedalSlotContainer_C.UpdateCurrentMedalSlot__DelegateSignature
	 */
	struct UWBP_Sheik_Career_MedalSlotContainer_C_UpdateCurrentMedalSlot__DelegateSignature_Params
	{
	public:
		ETitleCardStackOrder                                       InRewardSlot;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
