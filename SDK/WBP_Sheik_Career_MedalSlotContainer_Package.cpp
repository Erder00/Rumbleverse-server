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
	 * 		Name   -> Function WBP_Sheik_Career_MedalSlotContainer.WBP_Sheik_Career_MedalSlotContainer_C.SetNavigationalOverrideWidgets
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_Career_MedalSlotContainer_C::SetNavigationalOverrideWidgets()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Career_MedalSlotContainer.WBP_Sheik_Career_MedalSlotContainer_C.SetNavigationalOverrideWidgets");
		
		UWBP_Sheik_Career_MedalSlotContainer_C_SetNavigationalOverrideWidgets_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Career_MedalSlotContainer.WBP_Sheik_Career_MedalSlotContainer_C.IsMedalSlotFilled
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FIGTitleCardMedal                           IGTitleCardMedal                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	bool UWBP_Sheik_Career_MedalSlotContainer_C::IsMedalSlotFilled(const struct FIGTitleCardMedal& IGTitleCardMedal)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Career_MedalSlotContainer.WBP_Sheik_Career_MedalSlotContainer_C.IsMedalSlotFilled");
		
		UWBP_Sheik_Career_MedalSlotContainer_C_IsMedalSlotFilled_Params params {};
		params.IGTitleCardMedal = IGTitleCardMedal;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Career_MedalSlotContainer.WBP_Sheik_Career_MedalSlotContainer_C.UpdateSlotsWithSavedMedals
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UWBP_Sheik_Career_TitleCard_MedalSlot_C*     InMedalSlot                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_Career_MedalSlotContainer_C::UpdateSlotsWithSavedMedals(class UWBP_Sheik_Career_TitleCard_MedalSlot_C* InMedalSlot)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Career_MedalSlotContainer.WBP_Sheik_Career_MedalSlotContainer_C.UpdateSlotsWithSavedMedals");
		
		UWBP_Sheik_Career_MedalSlotContainer_C_UpdateSlotsWithSavedMedals_Params params {};
		params.InMedalSlot = InMedalSlot;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Career_MedalSlotContainer.WBP_Sheik_Career_MedalSlotContainer_C.UpdateContainerWithSavedMedals
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FIGTitleCardMedal>                   InSavedMedals                                              (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UWBP_Sheik_Career_MedalSlotContainer_C::UpdateContainerWithSavedMedals(TArray<struct FIGTitleCardMedal>* InSavedMedals)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Career_MedalSlotContainer.WBP_Sheik_Career_MedalSlotContainer_C.UpdateContainerWithSavedMedals");
		
		UWBP_Sheik_Career_MedalSlotContainer_C_UpdateContainerWithSavedMedals_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (InSavedMedals != nullptr)
			*InSavedMedals = params.InSavedMedals;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Career_MedalSlotContainer.WBP_Sheik_Career_MedalSlotContainer_C.UpdateRewardSlot
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UWBP_Sheik_Career_TitleCard_MedalSlot_C*     InCurrentSlot                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FIGTitleCardMedal                           InMedalData                                                (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UWBP_Sheik_Career_MedalSlotContainer_C::UpdateRewardSlot(class UWBP_Sheik_Career_TitleCard_MedalSlot_C* InCurrentSlot, const struct FIGTitleCardMedal& InMedalData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Career_MedalSlotContainer.WBP_Sheik_Career_MedalSlotContainer_C.UpdateRewardSlot");
		
		UWBP_Sheik_Career_MedalSlotContainer_C_UpdateRewardSlot_Params params {};
		params.InCurrentSlot = InCurrentSlot;
		params.InMedalData = InMedalData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Career_MedalSlotContainer.WBP_Sheik_Career_MedalSlotContainer_C.FindRewardSlot
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ETitleCardStackOrder                               InRewardSlot                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UWBP_Sheik_Career_TitleCard_MedalSlot_C*     RewardSlotRef                                              (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_Career_MedalSlotContainer_C::FindRewardSlot(ETitleCardStackOrder InRewardSlot, class UWBP_Sheik_Career_TitleCard_MedalSlot_C** RewardSlotRef)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Career_MedalSlotContainer.WBP_Sheik_Career_MedalSlotContainer_C.FindRewardSlot");
		
		UWBP_Sheik_Career_MedalSlotContainer_C_FindRewardSlot_Params params {};
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
	 * 		Name   -> Function WBP_Sheik_Career_MedalSlotContainer.WBP_Sheik_Career_MedalSlotContainer_C.GetNavigableWidgets
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<class UIGUI_WidgetBase*>                    NavigableWidgets                                           (Parm, OutParm, ContainsInstancedReference)
	 */
	void UWBP_Sheik_Career_MedalSlotContainer_C::GetNavigableWidgets(TArray<class UIGUI_WidgetBase*>* NavigableWidgets)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Career_MedalSlotContainer.WBP_Sheik_Career_MedalSlotContainer_C.GetNavigableWidgets");
		
		UWBP_Sheik_Career_MedalSlotContainer_C_GetNavigableWidgets_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (NavigableWidgets != nullptr)
			*NavigableWidgets = params.NavigableWidgets;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Career_MedalSlotContainer.WBP_Sheik_Career_MedalSlotContainer_C.HandleCurrentWidgetUpdate
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ETitleCardStackOrder                               InRewardSlot                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_Career_MedalSlotContainer_C::HandleCurrentWidgetUpdate(ETitleCardStackOrder InRewardSlot)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Career_MedalSlotContainer.WBP_Sheik_Career_MedalSlotContainer_C.HandleCurrentWidgetUpdate");
		
		UWBP_Sheik_Career_MedalSlotContainer_C_HandleCurrentWidgetUpdate_Params params {};
		params.InRewardSlot = InRewardSlot;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Career_MedalSlotContainer.WBP_Sheik_Career_MedalSlotContainer_C.FocusOnCurrentMedalSlot
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_Career_MedalSlotContainer_C::FocusOnCurrentMedalSlot()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Career_MedalSlotContainer.WBP_Sheik_Career_MedalSlotContainer_C.FocusOnCurrentMedalSlot");
		
		UWBP_Sheik_Career_MedalSlotContainer_C_FocusOnCurrentMedalSlot_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Career_MedalSlotContainer.WBP_Sheik_Career_MedalSlotContainer_C.ClearMedalSlotFocus
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_Career_MedalSlotContainer_C::ClearMedalSlotFocus()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Career_MedalSlotContainer.WBP_Sheik_Career_MedalSlotContainer_C.ClearMedalSlotFocus");
		
		UWBP_Sheik_Career_MedalSlotContainer_C_ClearMedalSlotFocus_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Career_MedalSlotContainer.WBP_Sheik_Career_MedalSlotContainer_C.SetFocusable
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               CanBeFocused                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_Sheik_Career_MedalSlotContainer_C::SetFocusable(bool CanBeFocused)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Career_MedalSlotContainer.WBP_Sheik_Career_MedalSlotContainer_C.SetFocusable");
		
		UWBP_Sheik_Career_MedalSlotContainer_C_SetFocusable_Params params {};
		params.CanBeFocused = CanBeFocused;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Career_MedalSlotContainer.WBP_Sheik_Career_MedalSlotContainer_C.HandleFocus
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsFocused                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_Sheik_Career_MedalSlotContainer_C::HandleFocus(bool IsFocused)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Career_MedalSlotContainer.WBP_Sheik_Career_MedalSlotContainer_C.HandleFocus");
		
		UWBP_Sheik_Career_MedalSlotContainer_C_HandleFocus_Params params {};
		params.IsFocused = IsFocused;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Career_MedalSlotContainer.WBP_Sheik_Career_MedalSlotContainer_C.OnLoseFocus
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            UserIndex                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_Career_MedalSlotContainer_C::OnLoseFocus(int32_t UserIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Career_MedalSlotContainer.WBP_Sheik_Career_MedalSlotContainer_C.OnLoseFocus");
		
		UWBP_Sheik_Career_MedalSlotContainer_C_OnLoseFocus_Params params {};
		params.UserIndex = UserIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Career_MedalSlotContainer.WBP_Sheik_Career_MedalSlotContainer_C.OnGainFocus
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            UserIndex                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_Career_MedalSlotContainer_C::OnGainFocus(int32_t UserIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Career_MedalSlotContainer.WBP_Sheik_Career_MedalSlotContainer_C.OnGainFocus");
		
		UWBP_Sheik_Career_MedalSlotContainer_C_OnGainFocus_Params params {};
		params.UserIndex = UserIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Career_MedalSlotContainer.WBP_Sheik_Career_MedalSlotContainer_C.ConstructOnlyOnce
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_Career_MedalSlotContainer_C::ConstructOnlyOnce()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Career_MedalSlotContainer.WBP_Sheik_Career_MedalSlotContainer_C.ConstructOnlyOnce");
		
		UWBP_Sheik_Career_MedalSlotContainer_C_ConstructOnlyOnce_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Career_MedalSlotContainer.WBP_Sheik_Career_MedalSlotContainer_C.BndEvt__MedalSlot_Top_K2Node_ComponentBoundEvent_0_CurrentWidgetUpdated__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ETitleCardStackOrder                               InRewardSlot                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_Career_MedalSlotContainer_C::BndEvt__MedalSlot_Top_K2Node_ComponentBoundEvent_0_CurrentWidgetUpdated__DelegateSignature(ETitleCardStackOrder InRewardSlot)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Career_MedalSlotContainer.WBP_Sheik_Career_MedalSlotContainer_C.BndEvt__MedalSlot_Top_K2Node_ComponentBoundEvent_0_CurrentWidgetUpdated__DelegateSignature");
		
		UWBP_Sheik_Career_MedalSlotContainer_C_BndEvt__MedalSlot_Top_K2Node_ComponentBoundEvent_0_CurrentWidgetUpdated__DelegateSignature_Params params {};
		params.InRewardSlot = InRewardSlot;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Career_MedalSlotContainer.WBP_Sheik_Career_MedalSlotContainer_C.BndEvt__MedalSlot_Top_K2Node_ComponentBoundEvent_1_RewardSlotSelected__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ETitleCardStackOrder                               InRewardSlot                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_Career_MedalSlotContainer_C::BndEvt__MedalSlot_Top_K2Node_ComponentBoundEvent_1_RewardSlotSelected__DelegateSignature(ETitleCardStackOrder InRewardSlot)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Career_MedalSlotContainer.WBP_Sheik_Career_MedalSlotContainer_C.BndEvt__MedalSlot_Top_K2Node_ComponentBoundEvent_1_RewardSlotSelected__DelegateSignature");
		
		UWBP_Sheik_Career_MedalSlotContainer_C_BndEvt__MedalSlot_Top_K2Node_ComponentBoundEvent_1_RewardSlotSelected__DelegateSignature_Params params {};
		params.InRewardSlot = InRewardSlot;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Career_MedalSlotContainer.WBP_Sheik_Career_MedalSlotContainer_C.BndEvt__MedalSlot_Middle_K2Node_ComponentBoundEvent_8_CurrentWidgetUpdated__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ETitleCardStackOrder                               InRewardSlot                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_Career_MedalSlotContainer_C::BndEvt__MedalSlot_Middle_K2Node_ComponentBoundEvent_8_CurrentWidgetUpdated__DelegateSignature(ETitleCardStackOrder InRewardSlot)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Career_MedalSlotContainer.WBP_Sheik_Career_MedalSlotContainer_C.BndEvt__MedalSlot_Middle_K2Node_ComponentBoundEvent_8_CurrentWidgetUpdated__DelegateSignature");
		
		UWBP_Sheik_Career_MedalSlotContainer_C_BndEvt__MedalSlot_Middle_K2Node_ComponentBoundEvent_8_CurrentWidgetUpdated__DelegateSignature_Params params {};
		params.InRewardSlot = InRewardSlot;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Career_MedalSlotContainer.WBP_Sheik_Career_MedalSlotContainer_C.BndEvt__MedalSlot_Middle_K2Node_ComponentBoundEvent_9_RewardSlotSelected__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ETitleCardStackOrder                               InRewardSlot                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_Career_MedalSlotContainer_C::BndEvt__MedalSlot_Middle_K2Node_ComponentBoundEvent_9_RewardSlotSelected__DelegateSignature(ETitleCardStackOrder InRewardSlot)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Career_MedalSlotContainer.WBP_Sheik_Career_MedalSlotContainer_C.BndEvt__MedalSlot_Middle_K2Node_ComponentBoundEvent_9_RewardSlotSelected__DelegateSignature");
		
		UWBP_Sheik_Career_MedalSlotContainer_C_BndEvt__MedalSlot_Middle_K2Node_ComponentBoundEvent_9_RewardSlotSelected__DelegateSignature_Params params {};
		params.InRewardSlot = InRewardSlot;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Career_MedalSlotContainer.WBP_Sheik_Career_MedalSlotContainer_C.BndEvt__MedalSlot_Bottom_K2Node_ComponentBoundEvent_10_CurrentWidgetUpdated__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ETitleCardStackOrder                               InRewardSlot                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_Career_MedalSlotContainer_C::BndEvt__MedalSlot_Bottom_K2Node_ComponentBoundEvent_10_CurrentWidgetUpdated__DelegateSignature(ETitleCardStackOrder InRewardSlot)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Career_MedalSlotContainer.WBP_Sheik_Career_MedalSlotContainer_C.BndEvt__MedalSlot_Bottom_K2Node_ComponentBoundEvent_10_CurrentWidgetUpdated__DelegateSignature");
		
		UWBP_Sheik_Career_MedalSlotContainer_C_BndEvt__MedalSlot_Bottom_K2Node_ComponentBoundEvent_10_CurrentWidgetUpdated__DelegateSignature_Params params {};
		params.InRewardSlot = InRewardSlot;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Career_MedalSlotContainer.WBP_Sheik_Career_MedalSlotContainer_C.BndEvt__MedalSlot_Bottom_K2Node_ComponentBoundEvent_11_RewardSlotSelected__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ETitleCardStackOrder                               InRewardSlot                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_Career_MedalSlotContainer_C::BndEvt__MedalSlot_Bottom_K2Node_ComponentBoundEvent_11_RewardSlotSelected__DelegateSignature(ETitleCardStackOrder InRewardSlot)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Career_MedalSlotContainer.WBP_Sheik_Career_MedalSlotContainer_C.BndEvt__MedalSlot_Bottom_K2Node_ComponentBoundEvent_11_RewardSlotSelected__DelegateSignature");
		
		UWBP_Sheik_Career_MedalSlotContainer_C_BndEvt__MedalSlot_Bottom_K2Node_ComponentBoundEvent_11_RewardSlotSelected__DelegateSignature_Params params {};
		params.InRewardSlot = InRewardSlot;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Career_MedalSlotContainer.WBP_Sheik_Career_MedalSlotContainer_C.ExecuteUbergraph_WBP_Sheik_Career_MedalSlotContainer
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_Career_MedalSlotContainer_C::ExecuteUbergraph_WBP_Sheik_Career_MedalSlotContainer(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Career_MedalSlotContainer.WBP_Sheik_Career_MedalSlotContainer_C.ExecuteUbergraph_WBP_Sheik_Career_MedalSlotContainer");
		
		UWBP_Sheik_Career_MedalSlotContainer_C_ExecuteUbergraph_WBP_Sheik_Career_MedalSlotContainer_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Career_MedalSlotContainer.WBP_Sheik_Career_MedalSlotContainer_C.BindRewardToMedalSlot__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ETitleCardStackOrder                               InRewardSlot                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_Career_MedalSlotContainer_C::BindRewardToMedalSlot__DelegateSignature(ETitleCardStackOrder InRewardSlot)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Career_MedalSlotContainer.WBP_Sheik_Career_MedalSlotContainer_C.BindRewardToMedalSlot__DelegateSignature");
		
		UWBP_Sheik_Career_MedalSlotContainer_C_BindRewardToMedalSlot__DelegateSignature_Params params {};
		params.InRewardSlot = InRewardSlot;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Career_MedalSlotContainer.WBP_Sheik_Career_MedalSlotContainer_C.UpdateCurrentMedalSlot__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ETitleCardStackOrder                               InRewardSlot                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_Career_MedalSlotContainer_C::UpdateCurrentMedalSlot__DelegateSignature(ETitleCardStackOrder InRewardSlot)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Career_MedalSlotContainer.WBP_Sheik_Career_MedalSlotContainer_C.UpdateCurrentMedalSlot__DelegateSignature");
		
		UWBP_Sheik_Career_MedalSlotContainer_C_UpdateCurrentMedalSlot__DelegateSignature_Params params {};
		params.InRewardSlot = InRewardSlot;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWBP_Sheik_Career_MedalSlotContainer_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWBP_Sheik_Career_MedalSlotContainer_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_Sheik_Career_MedalSlotContainer.WBP_Sheik_Career_MedalSlotContainer_C");
		return ptr;
	}

}


