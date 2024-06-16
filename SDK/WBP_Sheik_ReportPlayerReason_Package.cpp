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
	 * 		Name   -> Function WBP_Sheik_ReportPlayerReason.WBP_Sheik_ReportPlayerReason_C.ClearCheckmark
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_ReportPlayerReason_C::ClearCheckmark()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_ReportPlayerReason.WBP_Sheik_ReportPlayerReason_C.ClearCheckmark");
		
		UWBP_Sheik_ReportPlayerReason_C_ClearCheckmark_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_ReportPlayerReason.WBP_Sheik_ReportPlayerReason_C.HandleSelected
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_ReportPlayerReason_C::HandleSelected()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_ReportPlayerReason.WBP_Sheik_ReportPlayerReason_C.HandleSelected");
		
		UWBP_Sheik_ReportPlayerReason_C_HandleSelected_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_ReportPlayerReason.WBP_Sheik_ReportPlayerReason_C.HandleFocus
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               SkipAnimations                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               IsFocused                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_Sheik_ReportPlayerReason_C::HandleFocus(bool SkipAnimations, bool IsFocused)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_ReportPlayerReason.WBP_Sheik_ReportPlayerReason_C.HandleFocus");
		
		UWBP_Sheik_ReportPlayerReason_C_HandleFocus_Params params {};
		params.SkipAnimations = SkipAnimations;
		params.IsFocused = IsFocused;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_ReportPlayerReason.WBP_Sheik_ReportPlayerReason_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_Sheik_ReportPlayerReason_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_ReportPlayerReason.WBP_Sheik_ReportPlayerReason_C.PreConstruct");
		
		UWBP_Sheik_ReportPlayerReason_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_ReportPlayerReason.WBP_Sheik_ReportPlayerReason_C.OnGainFocus
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            UserIndex                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_ReportPlayerReason_C::OnGainFocus(int32_t UserIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_ReportPlayerReason.WBP_Sheik_ReportPlayerReason_C.OnGainFocus");
		
		UWBP_Sheik_ReportPlayerReason_C_OnGainFocus_Params params {};
		params.UserIndex = UserIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_ReportPlayerReason.WBP_Sheik_ReportPlayerReason_C.OnLoseFocus
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            UserIndex                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_ReportPlayerReason_C::OnLoseFocus(int32_t UserIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_ReportPlayerReason.WBP_Sheik_ReportPlayerReason_C.OnLoseFocus");
		
		UWBP_Sheik_ReportPlayerReason_C_OnLoseFocus_Params params {};
		params.UserIndex = UserIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_ReportPlayerReason.WBP_Sheik_ReportPlayerReason_C.OnSelected
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            UserIndex                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_ReportPlayerReason_C::OnSelected(int32_t UserIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_ReportPlayerReason.WBP_Sheik_ReportPlayerReason_C.OnSelected");
		
		UWBP_Sheik_ReportPlayerReason_C_OnSelected_Params params {};
		params.UserIndex = UserIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_ReportPlayerReason.WBP_Sheik_ReportPlayerReason_C.ConstructOnlyOnce
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_ReportPlayerReason_C::ConstructOnlyOnce()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_ReportPlayerReason.WBP_Sheik_ReportPlayerReason_C.ConstructOnlyOnce");
		
		UWBP_Sheik_ReportPlayerReason_C_ConstructOnlyOnce_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_ReportPlayerReason.WBP_Sheik_ReportPlayerReason_C.ExecuteUbergraph_WBP_Sheik_ReportPlayerReason
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_ReportPlayerReason_C::ExecuteUbergraph_WBP_Sheik_ReportPlayerReason(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_ReportPlayerReason.WBP_Sheik_ReportPlayerReason_C.ExecuteUbergraph_WBP_Sheik_ReportPlayerReason");
		
		UWBP_Sheik_ReportPlayerReason_C_ExecuteUbergraph_WBP_Sheik_ReportPlayerReason_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_ReportPlayerReason.WBP_Sheik_ReportPlayerReason_C.UpdateReportReason__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_ReportPlayerReason_C::UpdateReportReason__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_ReportPlayerReason.WBP_Sheik_ReportPlayerReason_C.UpdateReportReason__DelegateSignature");
		
		UWBP_Sheik_ReportPlayerReason_C_UpdateReportReason__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWBP_Sheik_ReportPlayerReason_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWBP_Sheik_ReportPlayerReason_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_Sheik_ReportPlayerReason.WBP_Sheik_ReportPlayerReason_C");
		return ptr;
	}

}


