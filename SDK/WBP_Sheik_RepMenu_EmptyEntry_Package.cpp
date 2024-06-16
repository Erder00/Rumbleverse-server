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
	 * 		Name   -> Function WBP_Sheik_RepMenu_EmptyEntry.WBP_Sheik_RepMenu_EmptyEntry_C.SetWidgetFocus
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsFocused                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_Sheik_RepMenu_EmptyEntry_C::SetWidgetFocus(bool IsFocused)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_RepMenu_EmptyEntry.WBP_Sheik_RepMenu_EmptyEntry_C.SetWidgetFocus");
		
		UWBP_Sheik_RepMenu_EmptyEntry_C_SetWidgetFocus_Params params {};
		params.IsFocused = IsFocused;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_RepMenu_EmptyEntry.WBP_Sheik_RepMenu_EmptyEntry_C.HideTime
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Hide                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_Sheik_RepMenu_EmptyEntry_C::HideTime(bool Hide)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_RepMenu_EmptyEntry.WBP_Sheik_RepMenu_EmptyEntry_C.HideTime");
		
		UWBP_Sheik_RepMenu_EmptyEntry_C_HideTime_Params params {};
		params.Hide = Hide;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_RepMenu_EmptyEntry.WBP_Sheik_RepMenu_EmptyEntry_C.HideMotivation
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Hide                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_Sheik_RepMenu_EmptyEntry_C::HideMotivation(bool Hide)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_RepMenu_EmptyEntry.WBP_Sheik_RepMenu_EmptyEntry_C.HideMotivation");
		
		UWBP_Sheik_RepMenu_EmptyEntry_C_HideMotivation_Params params {};
		params.Hide = Hide;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_RepMenu_EmptyEntry.WBP_Sheik_RepMenu_EmptyEntry_C.HideHint
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Hide                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_Sheik_RepMenu_EmptyEntry_C::HideHint(bool Hide)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_RepMenu_EmptyEntry.WBP_Sheik_RepMenu_EmptyEntry_C.HideHint");
		
		UWBP_Sheik_RepMenu_EmptyEntry_C_HideHint_Params params {};
		params.Hide = Hide;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_RepMenu_EmptyEntry.WBP_Sheik_RepMenu_EmptyEntry_C.SetHintText
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_RepMenu_EmptyEntry_C::SetHintText()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_RepMenu_EmptyEntry.WBP_Sheik_RepMenu_EmptyEntry_C.SetHintText");
		
		UWBP_Sheik_RepMenu_EmptyEntry_C_SetHintText_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_RepMenu_EmptyEntry.WBP_Sheik_RepMenu_EmptyEntry_C.SetTimeTillNewRep
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_RepMenu_EmptyEntry_C::SetTimeTillNewRep()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_RepMenu_EmptyEntry.WBP_Sheik_RepMenu_EmptyEntry_C.SetTimeTillNewRep");
		
		UWBP_Sheik_RepMenu_EmptyEntry_C_SetTimeTillNewRep_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_RepMenu_EmptyEntry.WBP_Sheik_RepMenu_EmptyEntry_C.DisplayMotivationalText
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_RepMenu_EmptyEntry_C::DisplayMotivationalText()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_RepMenu_EmptyEntry.WBP_Sheik_RepMenu_EmptyEntry_C.DisplayMotivationalText");
		
		UWBP_Sheik_RepMenu_EmptyEntry_C_DisplayMotivationalText_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_RepMenu_EmptyEntry.WBP_Sheik_RepMenu_EmptyEntry_C.SpawnDisplay
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            DisplayIndex                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_RepMenu_EmptyEntry_C::SpawnDisplay(int32_t DisplayIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_RepMenu_EmptyEntry.WBP_Sheik_RepMenu_EmptyEntry_C.SpawnDisplay");
		
		UWBP_Sheik_RepMenu_EmptyEntry_C_SpawnDisplay_Params params {};
		params.DisplayIndex = DisplayIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_RepMenu_EmptyEntry.WBP_Sheik_RepMenu_EmptyEntry_C.DisplayHint
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_RepMenu_EmptyEntry_C::DisplayHint()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_RepMenu_EmptyEntry.WBP_Sheik_RepMenu_EmptyEntry_C.DisplayHint");
		
		UWBP_Sheik_RepMenu_EmptyEntry_C_DisplayHint_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_RepMenu_EmptyEntry.WBP_Sheik_RepMenu_EmptyEntry_C.ConstructOnlyOnce
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_RepMenu_EmptyEntry_C::ConstructOnlyOnce()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_RepMenu_EmptyEntry.WBP_Sheik_RepMenu_EmptyEntry_C.ConstructOnlyOnce");
		
		UWBP_Sheik_RepMenu_EmptyEntry_C_ConstructOnlyOnce_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_RepMenu_EmptyEntry.WBP_Sheik_RepMenu_EmptyEntry_C.OnGainFocus
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            UserIndex                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_RepMenu_EmptyEntry_C::OnGainFocus(int32_t UserIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_RepMenu_EmptyEntry.WBP_Sheik_RepMenu_EmptyEntry_C.OnGainFocus");
		
		UWBP_Sheik_RepMenu_EmptyEntry_C_OnGainFocus_Params params {};
		params.UserIndex = UserIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_RepMenu_EmptyEntry.WBP_Sheik_RepMenu_EmptyEntry_C.OnLoseFocus
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            UserIndex                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_RepMenu_EmptyEntry_C::OnLoseFocus(int32_t UserIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_RepMenu_EmptyEntry.WBP_Sheik_RepMenu_EmptyEntry_C.OnLoseFocus");
		
		UWBP_Sheik_RepMenu_EmptyEntry_C_OnLoseFocus_Params params {};
		params.UserIndex = UserIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_RepMenu_EmptyEntry.WBP_Sheik_RepMenu_EmptyEntry_C.DisplayTimeTillNewRep
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_RepMenu_EmptyEntry_C::DisplayTimeTillNewRep()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_RepMenu_EmptyEntry.WBP_Sheik_RepMenu_EmptyEntry_C.DisplayTimeTillNewRep");
		
		UWBP_Sheik_RepMenu_EmptyEntry_C_DisplayTimeTillNewRep_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_RepMenu_EmptyEntry.WBP_Sheik_RepMenu_EmptyEntry_C.ExecuteUbergraph_WBP_Sheik_RepMenu_EmptyEntry
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_RepMenu_EmptyEntry_C::ExecuteUbergraph_WBP_Sheik_RepMenu_EmptyEntry(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_RepMenu_EmptyEntry.WBP_Sheik_RepMenu_EmptyEntry_C.ExecuteUbergraph_WBP_Sheik_RepMenu_EmptyEntry");
		
		UWBP_Sheik_RepMenu_EmptyEntry_C_ExecuteUbergraph_WBP_Sheik_RepMenu_EmptyEntry_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_RepMenu_EmptyEntry.WBP_Sheik_RepMenu_EmptyEntry_C.RefreshAllButtonsOnRerollClick__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_RepMenu_EmptyEntry_C::RefreshAllButtonsOnRerollClick__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_RepMenu_EmptyEntry.WBP_Sheik_RepMenu_EmptyEntry_C.RefreshAllButtonsOnRerollClick__DelegateSignature");
		
		UWBP_Sheik_RepMenu_EmptyEntry_C_RefreshAllButtonsOnRerollClick__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_RepMenu_EmptyEntry.WBP_Sheik_RepMenu_EmptyEntry_C.RemoveThisRepFromUI__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UWBP_Sheik_RepMenuEntry_C*                   This                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_RepMenu_EmptyEntry_C::RemoveThisRepFromUI__DelegateSignature(class UWBP_Sheik_RepMenuEntry_C* This)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_RepMenu_EmptyEntry.WBP_Sheik_RepMenu_EmptyEntry_C.RemoveThisRepFromUI__DelegateSignature");
		
		UWBP_Sheik_RepMenu_EmptyEntry_C_RemoveThisRepFromUI__DelegateSignature_Params params {};
		params.This = This;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWBP_Sheik_RepMenu_EmptyEntry_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWBP_Sheik_RepMenu_EmptyEntry_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_Sheik_RepMenu_EmptyEntry.WBP_Sheik_RepMenu_EmptyEntry_C");
		return ptr;
	}

}


