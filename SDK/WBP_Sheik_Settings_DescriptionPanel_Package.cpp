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
	 * 		Name   -> Function WBP_Sheik_Settings_DescriptionPanel.WBP_Sheik_Settings_DescriptionPanel_C.UpdateDescriptions
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_Settings_DescriptionPanel_C::UpdateDescriptions()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Settings_DescriptionPanel.WBP_Sheik_Settings_DescriptionPanel_C.UpdateDescriptions");
		
		UWBP_Sheik_Settings_DescriptionPanel_C_UpdateDescriptions_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWBP_Sheik_Settings_DescriptionPanel_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWBP_Sheik_Settings_DescriptionPanel_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_Sheik_Settings_DescriptionPanel.WBP_Sheik_Settings_DescriptionPanel_C");
		return ptr;
	}

}


