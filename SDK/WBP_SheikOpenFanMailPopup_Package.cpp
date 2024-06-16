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
	 * 		Name   -> Function WBP_SheikOpenFanMailPopup.WBP_SheikOpenFanMailPopup_C.PlayShowAnim
	 * 		Flags  -> ()
	 */
	void UWBP_SheikOpenFanMailPopup_C::PlayShowAnim()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_SheikOpenFanMailPopup.WBP_SheikOpenFanMailPopup_C.PlayShowAnim");
		
		UWBP_SheikOpenFanMailPopup_C_PlayShowAnim_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_SheikOpenFanMailPopup.WBP_SheikOpenFanMailPopup_C.SetHeaderText
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        HeaderText                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UWBP_SheikOpenFanMailPopup_C::SetHeaderText(const class FText& HeaderText)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_SheikOpenFanMailPopup.WBP_SheikOpenFanMailPopup_C.SetHeaderText");
		
		UWBP_SheikOpenFanMailPopup_C_SetHeaderText_Params params {};
		params.HeaderText = HeaderText;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_SheikOpenFanMailPopup.WBP_SheikOpenFanMailPopup_C.SetBodyText
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        BodyText                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		bool                                               bUseDefaultFormatting                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_SheikOpenFanMailPopup_C::SetBodyText(const class FText& BodyText, bool bUseDefaultFormatting)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_SheikOpenFanMailPopup.WBP_SheikOpenFanMailPopup_C.SetBodyText");
		
		UWBP_SheikOpenFanMailPopup_C_SetBodyText_Params params {};
		params.BodyText = BodyText;
		params.bUseDefaultFormatting = bUseDefaultFormatting;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_SheikOpenFanMailPopup.WBP_SheikOpenFanMailPopup_C.SetDimBackground
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               DimBackground                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_SheikOpenFanMailPopup_C::SetDimBackground(bool DimBackground)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_SheikOpenFanMailPopup.WBP_SheikOpenFanMailPopup_C.SetDimBackground");
		
		UWBP_SheikOpenFanMailPopup_C_SetDimBackground_Params params {};
		params.DimBackground = DimBackground;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_SheikOpenFanMailPopup.WBP_SheikOpenFanMailPopup_C.AddLegend
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FLegendData>                         LegendPrompts                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	 */
	void UWBP_SheikOpenFanMailPopup_C::AddLegend(TArray<struct FLegendData> LegendPrompts)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_SheikOpenFanMailPopup.WBP_SheikOpenFanMailPopup_C.AddLegend");
		
		UWBP_SheikOpenFanMailPopup_C_AddLegend_Params params {};
		params.LegendPrompts = LegendPrompts;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_SheikOpenFanMailPopup.WBP_SheikOpenFanMailPopup_C.ExecuteUbergraph_WBP_SheikOpenFanMailPopup
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_SheikOpenFanMailPopup_C::ExecuteUbergraph_WBP_SheikOpenFanMailPopup(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_SheikOpenFanMailPopup.WBP_SheikOpenFanMailPopup_C.ExecuteUbergraph_WBP_SheikOpenFanMailPopup");
		
		UWBP_SheikOpenFanMailPopup_C_ExecuteUbergraph_WBP_SheikOpenFanMailPopup_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWBP_SheikOpenFanMailPopup_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWBP_SheikOpenFanMailPopup_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_SheikOpenFanMailPopup.WBP_SheikOpenFanMailPopup_C");
		return ptr;
	}

}


