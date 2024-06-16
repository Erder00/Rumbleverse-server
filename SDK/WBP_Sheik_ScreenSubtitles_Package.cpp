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
	 * 		Name   -> Function WBP_Sheik_ScreenSubtitles.WBP_Sheik_ScreenSubtitles_C.OnSetSubtitleText_cb
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        SubtitleText                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UWBP_Sheik_ScreenSubtitles_C::OnSetSubtitleText_cb(const class FText& SubtitleText)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_ScreenSubtitles.WBP_Sheik_ScreenSubtitles_C.OnSetSubtitleText_cb");
		
		UWBP_Sheik_ScreenSubtitles_C_OnSetSubtitleText_cb_Params params {};
		params.SubtitleText = SubtitleText;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_ScreenSubtitles.WBP_Sheik_ScreenSubtitles_C.Construct
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_ScreenSubtitles_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_ScreenSubtitles.WBP_Sheik_ScreenSubtitles_C.Construct");
		
		UWBP_Sheik_ScreenSubtitles_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_ScreenSubtitles.WBP_Sheik_ScreenSubtitles_C.ExecuteUbergraph_WBP_Sheik_ScreenSubtitles
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_ScreenSubtitles_C::ExecuteUbergraph_WBP_Sheik_ScreenSubtitles(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_ScreenSubtitles.WBP_Sheik_ScreenSubtitles_C.ExecuteUbergraph_WBP_Sheik_ScreenSubtitles");
		
		UWBP_Sheik_ScreenSubtitles_C_ExecuteUbergraph_WBP_Sheik_ScreenSubtitles_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWBP_Sheik_ScreenSubtitles_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWBP_Sheik_ScreenSubtitles_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_Sheik_ScreenSubtitles.WBP_Sheik_ScreenSubtitles_C");
		return ptr;
	}

}


