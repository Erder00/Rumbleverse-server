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
	 * 		Name   -> Function WBP_SheikSpectatorInputPrompts.WBP_SheikSpectatorInputPrompts_C.ToggleMuteAllPrompt
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsAllMuted                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_SheikSpectatorInputPrompts_C::ToggleMuteAllPrompt(bool IsAllMuted)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_SheikSpectatorInputPrompts.WBP_SheikSpectatorInputPrompts_C.ToggleMuteAllPrompt");
		
		UWBP_SheikSpectatorInputPrompts_C_ToggleMuteAllPrompt_Params params {};
		params.IsAllMuted = IsAllMuted;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_SheikSpectatorInputPrompts.WBP_SheikSpectatorInputPrompts_C.ToggleCameraPrompt
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsControlCam                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_SheikSpectatorInputPrompts_C::ToggleCameraPrompt(bool IsControlCam)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_SheikSpectatorInputPrompts.WBP_SheikSpectatorInputPrompts_C.ToggleCameraPrompt");
		
		UWBP_SheikSpectatorInputPrompts_C_ToggleCameraPrompt_Params params {};
		params.IsControlCam = IsControlCam;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_SheikSpectatorInputPrompts.WBP_SheikSpectatorInputPrompts_C.ToggleNextPlayerPrompt
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsFollowPlayer                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_SheikSpectatorInputPrompts_C::ToggleNextPlayerPrompt(bool IsFollowPlayer)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_SheikSpectatorInputPrompts.WBP_SheikSpectatorInputPrompts_C.ToggleNextPlayerPrompt");
		
		UWBP_SheikSpectatorInputPrompts_C_ToggleNextPlayerPrompt_Params params {};
		params.IsFollowPlayer = IsFollowPlayer;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_SheikSpectatorInputPrompts.WBP_SheikSpectatorInputPrompts_C.ConstructOnlyOnce
	 * 		Flags  -> ()
	 */
	void UWBP_SheikSpectatorInputPrompts_C::ConstructOnlyOnce()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_SheikSpectatorInputPrompts.WBP_SheikSpectatorInputPrompts_C.ConstructOnlyOnce");
		
		UWBP_SheikSpectatorInputPrompts_C_ConstructOnlyOnce_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_SheikSpectatorInputPrompts.WBP_SheikSpectatorInputPrompts_C.ExecuteUbergraph_WBP_SheikSpectatorInputPrompts
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_SheikSpectatorInputPrompts_C::ExecuteUbergraph_WBP_SheikSpectatorInputPrompts(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_SheikSpectatorInputPrompts.WBP_SheikSpectatorInputPrompts_C.ExecuteUbergraph_WBP_SheikSpectatorInputPrompts");
		
		UWBP_SheikSpectatorInputPrompts_C_ExecuteUbergraph_WBP_SheikSpectatorInputPrompts_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWBP_SheikSpectatorInputPrompts_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWBP_SheikSpectatorInputPrompts_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_SheikSpectatorInputPrompts.WBP_SheikSpectatorInputPrompts_C");
		return ptr;
	}

}


