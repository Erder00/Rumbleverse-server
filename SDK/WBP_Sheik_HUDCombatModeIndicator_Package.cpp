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
	 * 		Name   -> Function WBP_Sheik_HUDCombatModeIndicator.WBP_Sheik_HUDCombatModeIndicator_C.RefreshCombatModeText
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsInCombatMode                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_Sheik_HUDCombatModeIndicator_C::RefreshCombatModeText(bool IsInCombatMode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_HUDCombatModeIndicator.WBP_Sheik_HUDCombatModeIndicator_C.RefreshCombatModeText");
		
		UWBP_Sheik_HUDCombatModeIndicator_C_RefreshCombatModeText_Params params {};
		params.IsInCombatMode = IsInCombatMode;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_HUDCombatModeIndicator.WBP_Sheik_HUDCombatModeIndicator_C.SetVisibilityByMapLoadTag
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_HUDCombatModeIndicator_C::SetVisibilityByMapLoadTag()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_HUDCombatModeIndicator.WBP_Sheik_HUDCombatModeIndicator_C.SetVisibilityByMapLoadTag");
		
		UWBP_Sheik_HUDCombatModeIndicator_C_SetVisibilityByMapLoadTag_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_HUDCombatModeIndicator.WBP_Sheik_HUDCombatModeIndicator_C.ConstructOnlyOnce
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_HUDCombatModeIndicator_C::ConstructOnlyOnce()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_HUDCombatModeIndicator.WBP_Sheik_HUDCombatModeIndicator_C.ConstructOnlyOnce");
		
		UWBP_Sheik_HUDCombatModeIndicator_C_ConstructOnlyOnce_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_HUDCombatModeIndicator.WBP_Sheik_HUDCombatModeIndicator_C.ExecuteUbergraph_WBP_Sheik_HUDCombatModeIndicator
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_HUDCombatModeIndicator_C::ExecuteUbergraph_WBP_Sheik_HUDCombatModeIndicator(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_HUDCombatModeIndicator.WBP_Sheik_HUDCombatModeIndicator_C.ExecuteUbergraph_WBP_Sheik_HUDCombatModeIndicator");
		
		UWBP_Sheik_HUDCombatModeIndicator_C_ExecuteUbergraph_WBP_Sheik_HUDCombatModeIndicator_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWBP_Sheik_HUDCombatModeIndicator_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWBP_Sheik_HUDCombatModeIndicator_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_Sheik_HUDCombatModeIndicator.WBP_Sheik_HUDCombatModeIndicator_C");
		return ptr;
	}

}


