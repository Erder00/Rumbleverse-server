/**
 * Name: Rumbleverse
 * Version: Latest
 */

#include "pch.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Career_StatSlotContainer.WBP_Sheik_Career_StatSlotContainer_C.DebugPrintEnemyStatInfo
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_Career_StatSlotContainer_C::DebugPrintEnemyStatInfo()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Career_StatSlotContainer.WBP_Sheik_Career_StatSlotContainer_C.DebugPrintEnemyStatInfo");
		
		UWBP_Sheik_Career_StatSlotContainer_C_DebugPrintEnemyStatInfo_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Career_StatSlotContainer.WBP_Sheik_Career_StatSlotContainer_C.SlotInits
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_Career_StatSlotContainer_C::SlotInits()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Career_StatSlotContainer.WBP_Sheik_Career_StatSlotContainer_C.SlotInits");
		
		UWBP_Sheik_Career_StatSlotContainer_C_SlotInits_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Career_StatSlotContainer.WBP_Sheik_Career_StatSlotContainer_C.Init
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UWBP_Sheik_Career_TitleCard_C*               InTitleCard                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_Career_StatSlotContainer_C::Init(class UWBP_Sheik_Career_TitleCard_C* InTitleCard)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Career_StatSlotContainer.WBP_Sheik_Career_StatSlotContainer_C.Init");
		
		UWBP_Sheik_Career_StatSlotContainer_C_Init_Params params {};
		params.InTitleCard = InTitleCard;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Career_StatSlotContainer.WBP_Sheik_Career_StatSlotContainer_C.SetNavigationalOverrideWidgets
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_Career_StatSlotContainer_C::SetNavigationalOverrideWidgets()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Career_StatSlotContainer.WBP_Sheik_Career_StatSlotContainer_C.SetNavigationalOverrideWidgets");
		
		UWBP_Sheik_Career_StatSlotContainer_C_SetNavigationalOverrideWidgets_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Career_StatSlotContainer.WBP_Sheik_Career_StatSlotContainer_C.IsStatSlotFilled
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FIGTitleCardStat                            IGTitleCardStat                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	bool UWBP_Sheik_Career_StatSlotContainer_C::IsStatSlotFilled(const struct FIGTitleCardStat& IGTitleCardStat)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Career_StatSlotContainer.WBP_Sheik_Career_StatSlotContainer_C.IsStatSlotFilled");
		
		UWBP_Sheik_Career_StatSlotContainer_C_IsStatSlotFilled_Params params {};
		params.IGTitleCardStat = IGTitleCardStat;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Career_StatSlotContainer.WBP_Sheik_Career_StatSlotContainer_C.UpdateSlotsWithSavedStats
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UWBP_Sheik_Career_TitleCard_StatSlot_C*      InStatSlot                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_Career_StatSlotContainer_C::UpdateSlotsWithSavedStats(class UWBP_Sheik_Career_TitleCard_StatSlot_C* InStatSlot)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Career_StatSlotContainer.WBP_Sheik_Career_StatSlotContainer_C.UpdateSlotsWithSavedStats");
		
		UWBP_Sheik_Career_StatSlotContainer_C_UpdateSlotsWithSavedStats_Params params {};
		params.InStatSlot = InStatSlot;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Career_StatSlotContainer.WBP_Sheik_Career_StatSlotContainer_C.UpdateContainerWithSavedStats
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FIGTitleCardStat>                    InStatRewards                                              (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UWBP_Sheik_Career_StatSlotContainer_C::UpdateContainerWithSavedStats(TArray<struct FIGTitleCardStat>* InStatRewards)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Career_StatSlotContainer.WBP_Sheik_Career_StatSlotContainer_C.UpdateContainerWithSavedStats");
		
		UWBP_Sheik_Career_StatSlotContainer_C_UpdateContainerWithSavedStats_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (InStatRewards != nullptr)
			*InStatRewards = params.InStatRewards;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Career_StatSlotContainer.WBP_Sheik_Career_StatSlotContainer_C.UpdateRewardSlot
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UWBP_Sheik_Career_TitleCard_StatSlot_C*      InCurrentSlot                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FIGTitleCardStat                            InStatData                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UWBP_Sheik_Career_StatSlotContainer_C::UpdateRewardSlot(class UWBP_Sheik_Career_TitleCard_StatSlot_C* InCurrentSlot, const struct FIGTitleCardStat& InStatData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Career_StatSlotContainer.WBP_Sheik_Career_StatSlotContainer_C.UpdateRewardSlot");
		
		UWBP_Sheik_Career_StatSlotContainer_C_UpdateRewardSlot_Params params {};
		params.InCurrentSlot = InCurrentSlot;
		params.InStatData = InStatData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Career_StatSlotContainer.WBP_Sheik_Career_StatSlotContainer_C.FindRewardSlot
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ETitleCardStackOrder                               InRewardSlot                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UWBP_Sheik_Career_TitleCard_StatSlot_C*      RewardSlotRef                                              (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_Career_StatSlotContainer_C::FindRewardSlot(ETitleCardStackOrder InRewardSlot, class UWBP_Sheik_Career_TitleCard_StatSlot_C** RewardSlotRef)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Career_StatSlotContainer.WBP_Sheik_Career_StatSlotContainer_C.FindRewardSlot");
		
		UWBP_Sheik_Career_StatSlotContainer_C_FindRewardSlot_Params params {};
		params.InRewardSlot = InRewardSlot;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (RewardSlotRef != nullptr)
			*RewardSlotRef = params.RewardSlotRef;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Career_StatSlotContainer.WBP_Sheik_Career_StatSlotContainer_C.GetNavigableWidgets
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<class UIGUI_WidgetBase*>                    NavigableWidgets                                           (Parm, OutParm, ContainsInstancedReference)
	 */
	void UWBP_Sheik_Career_StatSlotContainer_C::GetNavigableWidgets(TArray<class UIGUI_WidgetBase*>* NavigableWidgets)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Career_StatSlotContainer.WBP_Sheik_Career_StatSlotContainer_C.GetNavigableWidgets");
		
		UWBP_Sheik_Career_StatSlotContainer_C_GetNavigableWidgets_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (NavigableWidgets != nullptr)
			*NavigableWidgets = params.NavigableWidgets;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Career_StatSlotContainer.WBP_Sheik_Career_StatSlotContainer_C.HandleCurrentWidgetUpdate
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ETitleCardStackOrder                               InRewardSlot                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_Career_StatSlotContainer_C::HandleCurrentWidgetUpdate(ETitleCardStackOrder InRewardSlot)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Career_StatSlotContainer.WBP_Sheik_Career_StatSlotContainer_C.HandleCurrentWidgetUpdate");
		
		UWBP_Sheik_Career_StatSlotContainer_C_HandleCurrentWidgetUpdate_Params params {};
		params.InRewardSlot = InRewardSlot;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Career_StatSlotContainer.WBP_Sheik_Career_StatSlotContainer_C.FocusOnCurrentStatSlot
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_Career_StatSlotContainer_C::FocusOnCurrentStatSlot()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Career_StatSlotContainer.WBP_Sheik_Career_StatSlotContainer_C.FocusOnCurrentStatSlot");
		
		UWBP_Sheik_Career_StatSlotContainer_C_FocusOnCurrentStatSlot_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Career_StatSlotContainer.WBP_Sheik_Career_StatSlotContainer_C.ClearStatSlotFocus
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_Career_StatSlotContainer_C::ClearStatSlotFocus()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Career_StatSlotContainer.WBP_Sheik_Career_StatSlotContainer_C.ClearStatSlotFocus");
		
		UWBP_Sheik_Career_StatSlotContainer_C_ClearStatSlotFocus_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Career_StatSlotContainer.WBP_Sheik_Career_StatSlotContainer_C.SetFocusable
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               CanBeFocused                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_Sheik_Career_StatSlotContainer_C::SetFocusable(bool CanBeFocused)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Career_StatSlotContainer.WBP_Sheik_Career_StatSlotContainer_C.SetFocusable");
		
		UWBP_Sheik_Career_StatSlotContainer_C_SetFocusable_Params params {};
		params.CanBeFocused = CanBeFocused;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Career_StatSlotContainer.WBP_Sheik_Career_StatSlotContainer_C.HandleFocus
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsFocused                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_Sheik_Career_StatSlotContainer_C::HandleFocus(bool IsFocused)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Career_StatSlotContainer.WBP_Sheik_Career_StatSlotContainer_C.HandleFocus");
		
		UWBP_Sheik_Career_StatSlotContainer_C_HandleFocus_Params params {};
		params.IsFocused = IsFocused;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Career_StatSlotContainer.WBP_Sheik_Career_StatSlotContainer_C.OnGainFocus
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            UserIndex                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_Career_StatSlotContainer_C::OnGainFocus(int32_t UserIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Career_StatSlotContainer.WBP_Sheik_Career_StatSlotContainer_C.OnGainFocus");
		
		UWBP_Sheik_Career_StatSlotContainer_C_OnGainFocus_Params params {};
		params.UserIndex = UserIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Career_StatSlotContainer.WBP_Sheik_Career_StatSlotContainer_C.OnLoseFocus
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            UserIndex                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_Career_StatSlotContainer_C::OnLoseFocus(int32_t UserIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Career_StatSlotContainer.WBP_Sheik_Career_StatSlotContainer_C.OnLoseFocus");
		
		UWBP_Sheik_Career_StatSlotContainer_C_OnLoseFocus_Params params {};
		params.UserIndex = UserIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Career_StatSlotContainer.WBP_Sheik_Career_StatSlotContainer_C.BndEvt__StatSlot_Top_K2Node_ComponentBoundEvent_2_CurrentWidgetUpdated__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ETitleCardStackOrder                               InRewardSlot                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_Career_StatSlotContainer_C::BndEvt__StatSlot_Top_K2Node_ComponentBoundEvent_2_CurrentWidgetUpdated__DelegateSignature(ETitleCardStackOrder InRewardSlot)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Career_StatSlotContainer.WBP_Sheik_Career_StatSlotContainer_C.BndEvt__StatSlot_Top_K2Node_ComponentBoundEvent_2_CurrentWidgetUpdated__DelegateSignature");
		
		UWBP_Sheik_Career_StatSlotContainer_C_BndEvt__StatSlot_Top_K2Node_ComponentBoundEvent_2_CurrentWidgetUpdated__DelegateSignature_Params params {};
		params.InRewardSlot = InRewardSlot;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Career_StatSlotContainer.WBP_Sheik_Career_StatSlotContainer_C.BndEvt__StatSlot_Top_K2Node_ComponentBoundEvent_3_RewardSlotSelected__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ETitleCardStackOrder                               InRewardSlot                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_Career_StatSlotContainer_C::BndEvt__StatSlot_Top_K2Node_ComponentBoundEvent_3_RewardSlotSelected__DelegateSignature(ETitleCardStackOrder InRewardSlot)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Career_StatSlotContainer.WBP_Sheik_Career_StatSlotContainer_C.BndEvt__StatSlot_Top_K2Node_ComponentBoundEvent_3_RewardSlotSelected__DelegateSignature");
		
		UWBP_Sheik_Career_StatSlotContainer_C_BndEvt__StatSlot_Top_K2Node_ComponentBoundEvent_3_RewardSlotSelected__DelegateSignature_Params params {};
		params.InRewardSlot = InRewardSlot;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Career_StatSlotContainer.WBP_Sheik_Career_StatSlotContainer_C.BndEvt__StatSlot_Middle_K2Node_ComponentBoundEvent_4_RewardSlotSelected__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ETitleCardStackOrder                               InRewardSlot                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_Career_StatSlotContainer_C::BndEvt__StatSlot_Middle_K2Node_ComponentBoundEvent_4_RewardSlotSelected__DelegateSignature(ETitleCardStackOrder InRewardSlot)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Career_StatSlotContainer.WBP_Sheik_Career_StatSlotContainer_C.BndEvt__StatSlot_Middle_K2Node_ComponentBoundEvent_4_RewardSlotSelected__DelegateSignature");
		
		UWBP_Sheik_Career_StatSlotContainer_C_BndEvt__StatSlot_Middle_K2Node_ComponentBoundEvent_4_RewardSlotSelected__DelegateSignature_Params params {};
		params.InRewardSlot = InRewardSlot;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Career_StatSlotContainer.WBP_Sheik_Career_StatSlotContainer_C.BndEvt__StatSlot_Middle_K2Node_ComponentBoundEvent_5_CurrentWidgetUpdated__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ETitleCardStackOrder                               InRewardSlot                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_Career_StatSlotContainer_C::BndEvt__StatSlot_Middle_K2Node_ComponentBoundEvent_5_CurrentWidgetUpdated__DelegateSignature(ETitleCardStackOrder InRewardSlot)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Career_StatSlotContainer.WBP_Sheik_Career_StatSlotContainer_C.BndEvt__StatSlot_Middle_K2Node_ComponentBoundEvent_5_CurrentWidgetUpdated__DelegateSignature");
		
		UWBP_Sheik_Career_StatSlotContainer_C_BndEvt__StatSlot_Middle_K2Node_ComponentBoundEvent_5_CurrentWidgetUpdated__DelegateSignature_Params params {};
		params.InRewardSlot = InRewardSlot;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Career_StatSlotContainer.WBP_Sheik_Career_StatSlotContainer_C.BndEvt__StatSlot_Bottom_K2Node_ComponentBoundEvent_6_RewardSlotSelected__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ETitleCardStackOrder                               InRewardSlot                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_Career_StatSlotContainer_C::BndEvt__StatSlot_Bottom_K2Node_ComponentBoundEvent_6_RewardSlotSelected__DelegateSignature(ETitleCardStackOrder InRewardSlot)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Career_StatSlotContainer.WBP_Sheik_Career_StatSlotContainer_C.BndEvt__StatSlot_Bottom_K2Node_ComponentBoundEvent_6_RewardSlotSelected__DelegateSignature");
		
		UWBP_Sheik_Career_StatSlotContainer_C_BndEvt__StatSlot_Bottom_K2Node_ComponentBoundEvent_6_RewardSlotSelected__DelegateSignature_Params params {};
		params.InRewardSlot = InRewardSlot;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Career_StatSlotContainer.WBP_Sheik_Career_StatSlotContainer_C.BndEvt__StatSlot_Bottom_K2Node_ComponentBoundEvent_7_CurrentWidgetUpdated__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ETitleCardStackOrder                               InRewardSlot                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_Career_StatSlotContainer_C::BndEvt__StatSlot_Bottom_K2Node_ComponentBoundEvent_7_CurrentWidgetUpdated__DelegateSignature(ETitleCardStackOrder InRewardSlot)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Career_StatSlotContainer.WBP_Sheik_Career_StatSlotContainer_C.BndEvt__StatSlot_Bottom_K2Node_ComponentBoundEvent_7_CurrentWidgetUpdated__DelegateSignature");
		
		UWBP_Sheik_Career_StatSlotContainer_C_BndEvt__StatSlot_Bottom_K2Node_ComponentBoundEvent_7_CurrentWidgetUpdated__DelegateSignature_Params params {};
		params.InRewardSlot = InRewardSlot;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Career_StatSlotContainer.WBP_Sheik_Career_StatSlotContainer_C.ConstructOnlyOnce
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_Career_StatSlotContainer_C::ConstructOnlyOnce()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Career_StatSlotContainer.WBP_Sheik_Career_StatSlotContainer_C.ConstructOnlyOnce");
		
		UWBP_Sheik_Career_StatSlotContainer_C_ConstructOnlyOnce_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Career_StatSlotContainer.WBP_Sheik_Career_StatSlotContainer_C.ExecuteUbergraph_WBP_Sheik_Career_StatSlotContainer
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_Career_StatSlotContainer_C::ExecuteUbergraph_WBP_Sheik_Career_StatSlotContainer(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Career_StatSlotContainer.WBP_Sheik_Career_StatSlotContainer_C.ExecuteUbergraph_WBP_Sheik_Career_StatSlotContainer");
		
		UWBP_Sheik_Career_StatSlotContainer_C_ExecuteUbergraph_WBP_Sheik_Career_StatSlotContainer_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Career_StatSlotContainer.WBP_Sheik_Career_StatSlotContainer_C.BindRewardToStatSlot__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ETitleCardStackOrder                               InRewardSlot                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_Career_StatSlotContainer_C::BindRewardToStatSlot__DelegateSignature(ETitleCardStackOrder InRewardSlot)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Career_StatSlotContainer.WBP_Sheik_Career_StatSlotContainer_C.BindRewardToStatSlot__DelegateSignature");
		
		UWBP_Sheik_Career_StatSlotContainer_C_BindRewardToStatSlot__DelegateSignature_Params params {};
		params.InRewardSlot = InRewardSlot;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Career_StatSlotContainer.WBP_Sheik_Career_StatSlotContainer_C.UpdateCurrentStatSlot__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ETitleCardStackOrder                               InRewardSlot                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_Career_StatSlotContainer_C::UpdateCurrentStatSlot__DelegateSignature(ETitleCardStackOrder InRewardSlot)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Career_StatSlotContainer.WBP_Sheik_Career_StatSlotContainer_C.UpdateCurrentStatSlot__DelegateSignature");
		
		UWBP_Sheik_Career_StatSlotContainer_C_UpdateCurrentStatSlot__DelegateSignature_Params params {};
		params.InRewardSlot = InRewardSlot;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWBP_Sheik_Career_StatSlotContainer_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWBP_Sheik_Career_StatSlotContainer_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_Sheik_Career_StatSlotContainer.WBP_Sheik_Career_StatSlotContainer_C");
		return ptr;
	}

}


