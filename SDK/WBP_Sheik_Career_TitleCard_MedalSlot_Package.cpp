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
	 * 		Name   -> Function WBP_Sheik_Career_TitleCard_MedalSlot.WBP_Sheik_Career_TitleCard_MedalSlot_C.UpdateMedalSlotInfo
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FIGTitleCardMedal                           RewardInfo                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UWBP_Sheik_Career_TitleCard_MedalSlot_C::UpdateMedalSlotInfo(const struct FIGTitleCardMedal& RewardInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Career_TitleCard_MedalSlot.WBP_Sheik_Career_TitleCard_MedalSlot_C.UpdateMedalSlotInfo");
		
		UWBP_Sheik_Career_TitleCard_MedalSlot_C_UpdateMedalSlotInfo_Params params {};
		params.RewardInfo = RewardInfo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Career_TitleCard_MedalSlot.WBP_Sheik_Career_TitleCard_MedalSlot_C.HandleFocus
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Focus                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_Sheik_Career_TitleCard_MedalSlot_C::HandleFocus(bool Focus)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Career_TitleCard_MedalSlot.WBP_Sheik_Career_TitleCard_MedalSlot_C.HandleFocus");
		
		UWBP_Sheik_Career_TitleCard_MedalSlot_C_HandleFocus_Params params {};
		params.Focus = Focus;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Career_TitleCard_MedalSlot.WBP_Sheik_Career_TitleCard_MedalSlot_C.OnSelect
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FInputEventData                             InputEventData                                             (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UWBP_Sheik_Career_TitleCard_MedalSlot_C::OnSelect(const struct FInputEventData& InputEventData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Career_TitleCard_MedalSlot.WBP_Sheik_Career_TitleCard_MedalSlot_C.OnSelect");
		
		UWBP_Sheik_Career_TitleCard_MedalSlot_C_OnSelect_Params params {};
		params.InputEventData = InputEventData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Career_TitleCard_MedalSlot.WBP_Sheik_Career_TitleCard_MedalSlot_C.SetVisuals
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsEmpty                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_Sheik_Career_TitleCard_MedalSlot_C::SetVisuals(bool IsEmpty)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Career_TitleCard_MedalSlot.WBP_Sheik_Career_TitleCard_MedalSlot_C.SetVisuals");
		
		UWBP_Sheik_Career_TitleCard_MedalSlot_C_SetVisuals_Params params {};
		params.IsEmpty = IsEmpty;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Career_TitleCard_MedalSlot.WBP_Sheik_Career_TitleCard_MedalSlot_C.ConstructOnlyOnce
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_Career_TitleCard_MedalSlot_C::ConstructOnlyOnce()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Career_TitleCard_MedalSlot.WBP_Sheik_Career_TitleCard_MedalSlot_C.ConstructOnlyOnce");
		
		UWBP_Sheik_Career_TitleCard_MedalSlot_C_ConstructOnlyOnce_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Career_TitleCard_MedalSlot.WBP_Sheik_Career_TitleCard_MedalSlot_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_Sheik_Career_TitleCard_MedalSlot_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Career_TitleCard_MedalSlot.WBP_Sheik_Career_TitleCard_MedalSlot_C.PreConstruct");
		
		UWBP_Sheik_Career_TitleCard_MedalSlot_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Career_TitleCard_MedalSlot.WBP_Sheik_Career_TitleCard_MedalSlot_C.OnGainFocus
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            UserIndex                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_Career_TitleCard_MedalSlot_C::OnGainFocus(int32_t UserIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Career_TitleCard_MedalSlot.WBP_Sheik_Career_TitleCard_MedalSlot_C.OnGainFocus");
		
		UWBP_Sheik_Career_TitleCard_MedalSlot_C_OnGainFocus_Params params {};
		params.UserIndex = UserIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Career_TitleCard_MedalSlot.WBP_Sheik_Career_TitleCard_MedalSlot_C.OnLoseFocus
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            UserIndex                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_Career_TitleCard_MedalSlot_C::OnLoseFocus(int32_t UserIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Career_TitleCard_MedalSlot.WBP_Sheik_Career_TitleCard_MedalSlot_C.OnLoseFocus");
		
		UWBP_Sheik_Career_TitleCard_MedalSlot_C_OnLoseFocus_Params params {};
		params.UserIndex = UserIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Career_TitleCard_MedalSlot.WBP_Sheik_Career_TitleCard_MedalSlot_C.ExecuteUbergraph_WBP_Sheik_Career_TitleCard_MedalSlot
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_Career_TitleCard_MedalSlot_C::ExecuteUbergraph_WBP_Sheik_Career_TitleCard_MedalSlot(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Career_TitleCard_MedalSlot.WBP_Sheik_Career_TitleCard_MedalSlot_C.ExecuteUbergraph_WBP_Sheik_Career_TitleCard_MedalSlot");
		
		UWBP_Sheik_Career_TitleCard_MedalSlot_C_ExecuteUbergraph_WBP_Sheik_Career_TitleCard_MedalSlot_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Career_TitleCard_MedalSlot.WBP_Sheik_Career_TitleCard_MedalSlot_C.RewardSlotSelected__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ETitleCardStackOrder                               InRewardSlot                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_Career_TitleCard_MedalSlot_C::RewardSlotSelected__DelegateSignature(ETitleCardStackOrder InRewardSlot)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Career_TitleCard_MedalSlot.WBP_Sheik_Career_TitleCard_MedalSlot_C.RewardSlotSelected__DelegateSignature");
		
		UWBP_Sheik_Career_TitleCard_MedalSlot_C_RewardSlotSelected__DelegateSignature_Params params {};
		params.InRewardSlot = InRewardSlot;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Career_TitleCard_MedalSlot.WBP_Sheik_Career_TitleCard_MedalSlot_C.CurrentWidgetUpdated__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ETitleCardStackOrder                               InRewardSlot                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_Career_TitleCard_MedalSlot_C::CurrentWidgetUpdated__DelegateSignature(ETitleCardStackOrder InRewardSlot)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Career_TitleCard_MedalSlot.WBP_Sheik_Career_TitleCard_MedalSlot_C.CurrentWidgetUpdated__DelegateSignature");
		
		UWBP_Sheik_Career_TitleCard_MedalSlot_C_CurrentWidgetUpdated__DelegateSignature_Params params {};
		params.InRewardSlot = InRewardSlot;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWBP_Sheik_Career_TitleCard_MedalSlot_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWBP_Sheik_Career_TitleCard_MedalSlot_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_Sheik_Career_TitleCard_MedalSlot.WBP_Sheik_Career_TitleCard_MedalSlot_C");
		return ptr;
	}

}


