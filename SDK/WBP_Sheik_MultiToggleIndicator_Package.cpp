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
	 * 		Name   -> Function WBP_Sheik_MultiToggleIndicator.WBP_Sheik_MultiToggleIndicator_C.PlayChangedAnimation
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bInIsSelected                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_Sheik_MultiToggleIndicator_C::PlayChangedAnimation(bool bInIsSelected)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_MultiToggleIndicator.WBP_Sheik_MultiToggleIndicator_C.PlayChangedAnimation");
		
		UWBP_Sheik_MultiToggleIndicator_C_PlayChangedAnimation_Params params {};
		params.bInIsSelected = bInIsSelected;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_MultiToggleIndicator.WBP_Sheik_MultiToggleIndicator_C.SetUnselected
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_MultiToggleIndicator_C::SetUnselected()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_MultiToggleIndicator.WBP_Sheik_MultiToggleIndicator_C.SetUnselected");
		
		UWBP_Sheik_MultiToggleIndicator_C_SetUnselected_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWBP_Sheik_MultiToggleIndicator_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWBP_Sheik_MultiToggleIndicator_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_Sheik_MultiToggleIndicator.WBP_Sheik_MultiToggleIndicator_C");
		return ptr;
	}

}


