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
	 * 		Name   -> Function WBP_EmoteUIPage.WBP_EmoteUIPage_C.Update Emote UIPage Properties
	 * 		Flags  -> ()
	 */
	void UWBP_EmoteUIPage_C::UpdateEmoteUIPageProperties()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_EmoteUIPage.WBP_EmoteUIPage_C.Update Emote UIPage Properties");
		
		UWBP_EmoteUIPage_C_UpdateEmoteUIPageProperties_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWBP_EmoteUIPage_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWBP_EmoteUIPage_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_EmoteUIPage.WBP_EmoteUIPage_C");
		return ptr;
	}

}


