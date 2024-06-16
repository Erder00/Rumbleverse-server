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
	 * 		Name   -> Function WBP_Sheik_Career_TitleCard_TitleSlot.WBP_Sheik_Career_TitleCard_TitleSlot_C.UpdateTitleSlotInfo
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FIGTitleCardPlayerTitle                     TitleInfo                                                  (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UWBP_Sheik_Career_TitleCard_TitleSlot_C::UpdateTitleSlotInfo(const struct FIGTitleCardPlayerTitle& TitleInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Career_TitleCard_TitleSlot.WBP_Sheik_Career_TitleCard_TitleSlot_C.UpdateTitleSlotInfo");
		
		UWBP_Sheik_Career_TitleCard_TitleSlot_C_UpdateTitleSlotInfo_Params params {};
		params.TitleInfo = TitleInfo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWBP_Sheik_Career_TitleCard_TitleSlot_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWBP_Sheik_Career_TitleCard_TitleSlot_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_Sheik_Career_TitleCard_TitleSlot.WBP_Sheik_Career_TitleCard_TitleSlot_C");
		return ptr;
	}

}


