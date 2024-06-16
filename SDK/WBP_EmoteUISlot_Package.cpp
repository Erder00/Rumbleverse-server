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
	 * 		Name   -> Function WBP_EmoteUISlot.WBP_EmoteUISlot_C.PlayEmoteSelectSound
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FInputEventData                             InputEventData                                             (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UWBP_EmoteUISlot_C::PlayEmoteSelectSound(const struct FInputEventData& InputEventData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_EmoteUISlot.WBP_EmoteUISlot_C.PlayEmoteSelectSound");
		
		UWBP_EmoteUISlot_C_PlayEmoteSelectSound_Params params {};
		params.InputEventData = InputEventData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_EmoteUISlot.WBP_EmoteUISlot_C.UpdateEmoteUISlotProperties
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        DisplayName                                                (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UWBP_EmoteUISlot_C::UpdateEmoteUISlotProperties(const class FText& DisplayName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_EmoteUISlot.WBP_EmoteUISlot_C.UpdateEmoteUISlotProperties");
		
		UWBP_EmoteUISlot_C_UpdateEmoteUISlotProperties_Params params {};
		params.DisplayName = DisplayName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_EmoteUISlot.WBP_EmoteUISlot_C.ConstructOnlyOnce
	 * 		Flags  -> ()
	 */
	void UWBP_EmoteUISlot_C::ConstructOnlyOnce()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_EmoteUISlot.WBP_EmoteUISlot_C.ConstructOnlyOnce");
		
		UWBP_EmoteUISlot_C_ConstructOnlyOnce_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_EmoteUISlot.WBP_EmoteUISlot_C.ExecuteUbergraph_WBP_EmoteUISlot
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_EmoteUISlot_C::ExecuteUbergraph_WBP_EmoteUISlot(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_EmoteUISlot.WBP_EmoteUISlot_C.ExecuteUbergraph_WBP_EmoteUISlot");
		
		UWBP_EmoteUISlot_C_ExecuteUbergraph_WBP_EmoteUISlot_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWBP_EmoteUISlot_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWBP_EmoteUISlot_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_EmoteUISlot.WBP_EmoteUISlot_C");
		return ptr;
	}

}


