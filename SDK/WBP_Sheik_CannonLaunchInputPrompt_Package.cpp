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
	 * 		Name   -> Function WBP_Sheik_CannonLaunchInputPrompt.WBP_Sheik_CannonLaunchInputPrompt_C.OnCannonFired_cb
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_CannonLaunchInputPrompt_C::OnCannonFired_cb()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_CannonLaunchInputPrompt.WBP_Sheik_CannonLaunchInputPrompt_C.OnCannonFired_cb");
		
		UWBP_Sheik_CannonLaunchInputPrompt_C_OnCannonFired_cb_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_CannonLaunchInputPrompt.WBP_Sheik_CannonLaunchInputPrompt_C.OnCannonIsAiming_cb
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsAimingCannon                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_Sheik_CannonLaunchInputPrompt_C::OnCannonIsAiming_cb(bool IsAimingCannon)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_CannonLaunchInputPrompt.WBP_Sheik_CannonLaunchInputPrompt_C.OnCannonIsAiming_cb");
		
		UWBP_Sheik_CannonLaunchInputPrompt_C_OnCannonIsAiming_cb_Params params {};
		params.IsAimingCannon = IsAimingCannon;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_CannonLaunchInputPrompt.WBP_Sheik_CannonLaunchInputPrompt_C.OnLaunchInputPressed
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_CannonLaunchInputPrompt_C::OnLaunchInputPressed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_CannonLaunchInputPrompt.WBP_Sheik_CannonLaunchInputPrompt_C.OnLaunchInputPressed");
		
		UWBP_Sheik_CannonLaunchInputPrompt_C_OnLaunchInputPressed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_CannonLaunchInputPrompt.WBP_Sheik_CannonLaunchInputPrompt_C.ConstructOnlyOnce
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_CannonLaunchInputPrompt_C::ConstructOnlyOnce()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_CannonLaunchInputPrompt.WBP_Sheik_CannonLaunchInputPrompt_C.ConstructOnlyOnce");
		
		UWBP_Sheik_CannonLaunchInputPrompt_C_ConstructOnlyOnce_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_CannonLaunchInputPrompt.WBP_Sheik_CannonLaunchInputPrompt_C.ExecuteUbergraph_WBP_Sheik_CannonLaunchInputPrompt
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_CannonLaunchInputPrompt_C::ExecuteUbergraph_WBP_Sheik_CannonLaunchInputPrompt(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_CannonLaunchInputPrompt.WBP_Sheik_CannonLaunchInputPrompt_C.ExecuteUbergraph_WBP_Sheik_CannonLaunchInputPrompt");
		
		UWBP_Sheik_CannonLaunchInputPrompt_C_ExecuteUbergraph_WBP_Sheik_CannonLaunchInputPrompt_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWBP_Sheik_CannonLaunchInputPrompt_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWBP_Sheik_CannonLaunchInputPrompt_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_Sheik_CannonLaunchInputPrompt.WBP_Sheik_CannonLaunchInputPrompt_C");
		return ptr;
	}

}


