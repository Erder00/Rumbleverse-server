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
	 * 		Name   -> Function WBP_Sheik_CreditsText.WBP_Sheik_CreditsText_C.SetTextPadding
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              InTop                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              InBottom                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_CreditsText_C::SetTextPadding(float InTop, float InBottom)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_CreditsText.WBP_Sheik_CreditsText_C.SetTextPadding");
		
		UWBP_Sheik_CreditsText_C_SetTextPadding_Params params {};
		params.InTop = InTop;
		params.InBottom = InBottom;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_CreditsText.WBP_Sheik_CreditsText_C.SetHorizontalAlignment
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EHorizontalAlignment                               InAlign                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_CreditsText_C::SetHorizontalAlignment(EHorizontalAlignment InAlign)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_CreditsText.WBP_Sheik_CreditsText_C.SetHorizontalAlignment");
		
		UWBP_Sheik_CreditsText_C_SetHorizontalAlignment_Params params {};
		params.InAlign = InAlign;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_CreditsText.WBP_Sheik_CreditsText_C.ApplyDisplayStyle
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSlateFontInfo                              InStyle                                                    (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 * 		struct FLinearColor                                InColor                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_CreditsText_C::ApplyDisplayStyle(const struct FSlateFontInfo& InStyle, const struct FLinearColor& InColor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_CreditsText.WBP_Sheik_CreditsText_C.ApplyDisplayStyle");
		
		UWBP_Sheik_CreditsText_C_ApplyDisplayStyle_Params params {};
		params.InStyle = InStyle;
		params.InColor = InColor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_CreditsText.WBP_Sheik_CreditsText_C.SetDisplayString
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      inString                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_CreditsText_C::SetDisplayString(const class FString& inString)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_CreditsText.WBP_Sheik_CreditsText_C.SetDisplayString");
		
		UWBP_Sheik_CreditsText_C_SetDisplayString_Params params {};
		params.inString = inString;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_CreditsText.WBP_Sheik_CreditsText_C.SetDisplayText
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        InText                                                     (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UWBP_Sheik_CreditsText_C::SetDisplayText(const class FText& InText)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_CreditsText.WBP_Sheik_CreditsText_C.SetDisplayText");
		
		UWBP_Sheik_CreditsText_C_SetDisplayText_Params params {};
		params.InText = InText;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWBP_Sheik_CreditsText_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWBP_Sheik_CreditsText_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_Sheik_CreditsText.WBP_Sheik_CreditsText_C");
		return ptr;
	}

}


