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
	 * Function WBP_Sheik_Career_StatSlotContainer.WBP_Sheik_Career_StatSlotContainer_C.DebugPrintEnemyStatInfo
	 */
	struct UWBP_Sheik_Career_StatSlotContainer_C_DebugPrintEnemyStatInfo_Params
	{	};

	/**
	 * Function WBP_Sheik_Career_StatSlotContainer.WBP_Sheik_Career_StatSlotContainer_C.SlotInits
	 */
	struct UWBP_Sheik_Career_StatSlotContainer_C_SlotInits_Params
	{	};

	/**
	 * Function WBP_Sheik_Career_StatSlotContainer.WBP_Sheik_Career_StatSlotContainer_C.Init
	 */
	struct UWBP_Sheik_Career_StatSlotContainer_C_Init_Params
	{
	public:
		class UWBP_Sheik_Career_TitleCard_C*                       InTitleCard;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Sheik_Career_StatSlotContainer.WBP_Sheik_Career_StatSlotContainer_C.SetNavigationalOverrideWidgets
	 */
	struct UWBP_Sheik_Career_StatSlotContainer_C_SetNavigationalOverrideWidgets_Params
	{	};

	/**
	 * Function WBP_Sheik_Career_StatSlotContainer.WBP_Sheik_Career_StatSlotContainer_C.IsStatSlotFilled
	 */
	struct UWBP_Sheik_Career_StatSlotContainer_C_IsStatSlotFilled_Params
	{
	public:
		struct FIGTitleCardStat                                    IGTitleCardStat;                                         // 0x0000(0x0138)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		bool                                                       ReturnValue;                                             // 0x0138(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_Sheik_Career_StatSlotContainer.WBP_Sheik_Career_StatSlotContainer_C.UpdateSlotsWithSavedStats
	 */
	struct UWBP_Sheik_Career_StatSlotContainer_C_UpdateSlotsWithSavedStats_Params
	{
	public:
		class UWBP_Sheik_Career_TitleCard_StatSlot_C*              InStatSlot;                                              // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Sheik_Career_StatSlotContainer.WBP_Sheik_Career_StatSlotContainer_C.UpdateContainerWithSavedStats
	 */
	struct UWBP_Sheik_Career_StatSlotContainer_C_UpdateContainerWithSavedStats_Params
	{
	public:
		TArray<struct FIGTitleCardStat>                            InStatRewards;                                           // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function WBP_Sheik_Career_StatSlotContainer.WBP_Sheik_Career_StatSlotContainer_C.UpdateRewardSlot
	 */
	struct UWBP_Sheik_Career_StatSlotContainer_C_UpdateRewardSlot_Params
	{
	public:
		class UWBP_Sheik_Career_TitleCard_StatSlot_C*              InCurrentSlot;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FIGTitleCardStat                                    InStatData;                                              // 0x0008(0x0138)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function WBP_Sheik_Career_StatSlotContainer.WBP_Sheik_Career_StatSlotContainer_C.FindRewardSlot
	 */
	struct UWBP_Sheik_Career_StatSlotContainer_C_FindRewardSlot_Params
	{
	public:
		ETitleCardStackOrder                                       InRewardSlot;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_WXZM[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UWBP_Sheik_Career_TitleCard_StatSlot_C*              RewardSlotRef;                                           // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Sheik_Career_StatSlotContainer.WBP_Sheik_Career_StatSlotContainer_C.GetNavigableWidgets
	 */
	struct UWBP_Sheik_Career_StatSlotContainer_C_GetNavigableWidgets_Params
	{
	public:
		TArray<class UIGUI_WidgetBase*>                            NavigableWidgets;                                        // 0x0000(0x0010)  (Parm, OutParm, ContainsInstancedReference)
	};

	/**
	 * Function WBP_Sheik_Career_StatSlotContainer.WBP_Sheik_Career_StatSlotContainer_C.HandleCurrentWidgetUpdate
	 */
	struct UWBP_Sheik_Career_StatSlotContainer_C_HandleCurrentWidgetUpdate_Params
	{
	public:
		ETitleCardStackOrder                                       InRewardSlot;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Sheik_Career_StatSlotContainer.WBP_Sheik_Career_StatSlotContainer_C.FocusOnCurrentStatSlot
	 */
	struct UWBP_Sheik_Career_StatSlotContainer_C_FocusOnCurrentStatSlot_Params
	{	};

	/**
	 * Function WBP_Sheik_Career_StatSlotContainer.WBP_Sheik_Career_StatSlotContainer_C.ClearStatSlotFocus
	 */
	struct UWBP_Sheik_Career_StatSlotContainer_C_ClearStatSlotFocus_Params
	{	};

	/**
	 * Function WBP_Sheik_Career_StatSlotContainer.WBP_Sheik_Career_StatSlotContainer_C.SetFocusable
	 */
	struct UWBP_Sheik_Career_StatSlotContainer_C_SetFocusable_Params
	{
	public:
		bool                                                       CanBeFocused;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_0L7Y[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function WBP_Sheik_Career_StatSlotContainer.WBP_Sheik_Career_StatSlotContainer_C.HandleFocus
	 */
	struct UWBP_Sheik_Career_StatSlotContainer_C_HandleFocus_Params
	{
	public:
		bool                                                       IsFocused;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_Sheik_Career_StatSlotContainer.WBP_Sheik_Career_StatSlotContainer_C.OnGainFocus
	 */
	struct UWBP_Sheik_Career_StatSlotContainer_C_OnGainFocus_Params
	{
	public:
		int32_t                                                    UserIndex;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Sheik_Career_StatSlotContainer.WBP_Sheik_Career_StatSlotContainer_C.OnLoseFocus
	 */
	struct UWBP_Sheik_Career_StatSlotContainer_C_OnLoseFocus_Params
	{
	public:
		int32_t                                                    UserIndex;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Sheik_Career_StatSlotContainer.WBP_Sheik_Career_StatSlotContainer_C.BndEvt__StatSlot_Top_K2Node_ComponentBoundEvent_2_CurrentWidgetUpdated__DelegateSignature
	 */
	struct UWBP_Sheik_Career_StatSlotContainer_C_BndEvt__StatSlot_Top_K2Node_ComponentBoundEvent_2_CurrentWidgetUpdated__DelegateSignature_Params
	{
	public:
		ETitleCardStackOrder                                       InRewardSlot;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Sheik_Career_StatSlotContainer.WBP_Sheik_Career_StatSlotContainer_C.BndEvt__StatSlot_Top_K2Node_ComponentBoundEvent_3_RewardSlotSelected__DelegateSignature
	 */
	struct UWBP_Sheik_Career_StatSlotContainer_C_BndEvt__StatSlot_Top_K2Node_ComponentBoundEvent_3_RewardSlotSelected__DelegateSignature_Params
	{
	public:
		ETitleCardStackOrder                                       InRewardSlot;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Sheik_Career_StatSlotContainer.WBP_Sheik_Career_StatSlotContainer_C.BndEvt__StatSlot_Middle_K2Node_ComponentBoundEvent_4_RewardSlotSelected__DelegateSignature
	 */
	struct UWBP_Sheik_Career_StatSlotContainer_C_BndEvt__StatSlot_Middle_K2Node_ComponentBoundEvent_4_RewardSlotSelected__DelegateSignature_Params
	{
	public:
		ETitleCardStackOrder                                       InRewardSlot;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Sheik_Career_StatSlotContainer.WBP_Sheik_Career_StatSlotContainer_C.BndEvt__StatSlot_Middle_K2Node_ComponentBoundEvent_5_CurrentWidgetUpdated__DelegateSignature
	 */
	struct UWBP_Sheik_Career_StatSlotContainer_C_BndEvt__StatSlot_Middle_K2Node_ComponentBoundEvent_5_CurrentWidgetUpdated__DelegateSignature_Params
	{
	public:
		ETitleCardStackOrder                                       InRewardSlot;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Sheik_Career_StatSlotContainer.WBP_Sheik_Career_StatSlotContainer_C.BndEvt__StatSlot_Bottom_K2Node_ComponentBoundEvent_6_RewardSlotSelected__DelegateSignature
	 */
	struct UWBP_Sheik_Career_StatSlotContainer_C_BndEvt__StatSlot_Bottom_K2Node_ComponentBoundEvent_6_RewardSlotSelected__DelegateSignature_Params
	{
	public:
		ETitleCardStackOrder                                       InRewardSlot;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Sheik_Career_StatSlotContainer.WBP_Sheik_Career_StatSlotContainer_C.BndEvt__StatSlot_Bottom_K2Node_ComponentBoundEvent_7_CurrentWidgetUpdated__DelegateSignature
	 */
	struct UWBP_Sheik_Career_StatSlotContainer_C_BndEvt__StatSlot_Bottom_K2Node_ComponentBoundEvent_7_CurrentWidgetUpdated__DelegateSignature_Params
	{
	public:
		ETitleCardStackOrder                                       InRewardSlot;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Sheik_Career_StatSlotContainer.WBP_Sheik_Career_StatSlotContainer_C.ConstructOnlyOnce
	 */
	struct UWBP_Sheik_Career_StatSlotContainer_C_ConstructOnlyOnce_Params
	{	};

	/**
	 * Function WBP_Sheik_Career_StatSlotContainer.WBP_Sheik_Career_StatSlotContainer_C.ExecuteUbergraph_WBP_Sheik_Career_StatSlotContainer
	 */
	struct UWBP_Sheik_Career_StatSlotContainer_C_ExecuteUbergraph_WBP_Sheik_Career_StatSlotContainer_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Sheik_Career_StatSlotContainer.WBP_Sheik_Career_StatSlotContainer_C.BindRewardToStatSlot__DelegateSignature
	 */
	struct UWBP_Sheik_Career_StatSlotContainer_C_BindRewardToStatSlot__DelegateSignature_Params
	{
	public:
		ETitleCardStackOrder                                       InRewardSlot;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Sheik_Career_StatSlotContainer.WBP_Sheik_Career_StatSlotContainer_C.UpdateCurrentStatSlot__DelegateSignature
	 */
	struct UWBP_Sheik_Career_StatSlotContainer_C_UpdateCurrentStatSlot__DelegateSignature_Params
	{
	public:
		ETitleCardStackOrder                                       InRewardSlot;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
