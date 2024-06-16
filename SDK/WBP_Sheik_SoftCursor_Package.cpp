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
	 * 		Name   -> Function WBP_Sheik_SoftCursor.WBP_Sheik_SoftCursor_C.OnInputSourceChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FUserControllerData                         OldInputSource                                             (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 * 		struct FUserControllerData                         NewInputSource                                             (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 */
	void UWBP_Sheik_SoftCursor_C::OnInputSourceChanged(const struct FUserControllerData& OldInputSource, const struct FUserControllerData& NewInputSource)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_SoftCursor.WBP_Sheik_SoftCursor_C.OnInputSourceChanged");
		
		UWBP_Sheik_SoftCursor_C_OnInputSourceChanged_Params params {};
		params.OldInputSource = OldInputSource;
		params.NewInputSource = NewInputSource;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_SoftCursor.WBP_Sheik_SoftCursor_C.ConstructOnlyOnce
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_SoftCursor_C::ConstructOnlyOnce()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_SoftCursor.WBP_Sheik_SoftCursor_C.ConstructOnlyOnce");
		
		UWBP_Sheik_SoftCursor_C_ConstructOnlyOnce_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_SoftCursor.WBP_Sheik_SoftCursor_C.OnAllowCursorChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               UseMenuInput                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_Sheik_SoftCursor_C::OnAllowCursorChanged(bool UseMenuInput)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_SoftCursor.WBP_Sheik_SoftCursor_C.OnAllowCursorChanged");
		
		UWBP_Sheik_SoftCursor_C_OnAllowCursorChanged_Params params {};
		params.UseMenuInput = UseMenuInput;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_SoftCursor.WBP_Sheik_SoftCursor_C.RefreshCursorVisibility
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_SoftCursor_C::RefreshCursorVisibility()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_SoftCursor.WBP_Sheik_SoftCursor_C.RefreshCursorVisibility");
		
		UWBP_Sheik_SoftCursor_C_RefreshCursorVisibility_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_SoftCursor.WBP_Sheik_SoftCursor_C.ExecuteUbergraph_WBP_Sheik_SoftCursor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_SoftCursor_C::ExecuteUbergraph_WBP_Sheik_SoftCursor(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_SoftCursor.WBP_Sheik_SoftCursor_C.ExecuteUbergraph_WBP_Sheik_SoftCursor");
		
		UWBP_Sheik_SoftCursor_C_ExecuteUbergraph_WBP_Sheik_SoftCursor_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWBP_Sheik_SoftCursor_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWBP_Sheik_SoftCursor_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_Sheik_SoftCursor.WBP_Sheik_SoftCursor_C");
		return ptr;
	}

}


