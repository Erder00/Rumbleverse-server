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
	 * 		Name   -> Function WBP_ItemMagazinePickup_DescriptionText.WBP_ItemMagazinePickup_DescriptionText_C.SetDescriptionText
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        DescriptionText                                            (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UWBP_ItemMagazinePickup_DescriptionText_C::SetDescriptionText(const class FText& DescriptionText)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_ItemMagazinePickup_DescriptionText.WBP_ItemMagazinePickup_DescriptionText_C.SetDescriptionText");
		
		UWBP_ItemMagazinePickup_DescriptionText_C_SetDescriptionText_Params params {};
		params.DescriptionText = DescriptionText;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWBP_ItemMagazinePickup_DescriptionText_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWBP_ItemMagazinePickup_DescriptionText_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_ItemMagazinePickup_DescriptionText.WBP_ItemMagazinePickup_DescriptionText_C");
		return ptr;
	}

}


