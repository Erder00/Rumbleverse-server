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
	 * 		Name   -> Function WBP_Sheik_FullScreenFade.WBP_Sheik_FullScreenFade_C.FadeInOut
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               FadeIn                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_Sheik_FullScreenFade_C::FadeInOut(bool FadeIn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_FullScreenFade.WBP_Sheik_FullScreenFade_C.FadeInOut");
		
		UWBP_Sheik_FullScreenFade_C_FadeInOut_Params params {};
		params.FadeIn = FadeIn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_FullScreenFade.WBP_Sheik_FullScreenFade_C.WidgetAnimationEvt_Fade_K2Node_WidgetAnimationEvent_1
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_FullScreenFade_C::WidgetAnimationEvt_Fade_K2Node_WidgetAnimationEvent_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_FullScreenFade.WBP_Sheik_FullScreenFade_C.WidgetAnimationEvt_Fade_K2Node_WidgetAnimationEvent_1");
		
		UWBP_Sheik_FullScreenFade_C_WidgetAnimationEvt_Fade_K2Node_WidgetAnimationEvent_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_FullScreenFade.WBP_Sheik_FullScreenFade_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_Sheik_FullScreenFade_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_FullScreenFade.WBP_Sheik_FullScreenFade_C.PreConstruct");
		
		UWBP_Sheik_FullScreenFade_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_FullScreenFade.WBP_Sheik_FullScreenFade_C.ExecuteUbergraph_WBP_Sheik_FullScreenFade
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_FullScreenFade_C::ExecuteUbergraph_WBP_Sheik_FullScreenFade(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_FullScreenFade.WBP_Sheik_FullScreenFade_C.ExecuteUbergraph_WBP_Sheik_FullScreenFade");
		
		UWBP_Sheik_FullScreenFade_C_ExecuteUbergraph_WBP_Sheik_FullScreenFade_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWBP_Sheik_FullScreenFade_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWBP_Sheik_FullScreenFade_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_Sheik_FullScreenFade.WBP_Sheik_FullScreenFade_C");
		return ptr;
	}

}


