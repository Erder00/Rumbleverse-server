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
	 * 		Name   -> Function WBP_Sheik_RepInfo_LP.WBP_Sheik_RepInfo_LP_C.SetTextColor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSlateColor                                 InColorAndOpacity                                          (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UWBP_Sheik_RepInfo_LP_C::SetTextColor(const struct FSlateColor& InColorAndOpacity)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_RepInfo_LP.WBP_Sheik_RepInfo_LP_C.SetTextColor");
		
		UWBP_Sheik_RepInfo_LP_C_SetTextColor_Params params {};
		params.InColorAndOpacity = InColorAndOpacity;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_RepInfo_LP.WBP_Sheik_RepInfo_LP_C.SetText
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        RepProgressText                                            (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UWBP_Sheik_RepInfo_LP_C::SetText(const class FText& RepProgressText)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_RepInfo_LP.WBP_Sheik_RepInfo_LP_C.SetText");
		
		UWBP_Sheik_RepInfo_LP_C_SetText_Params params {};
		params.RepProgressText = RepProgressText;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_RepInfo_LP.WBP_Sheik_RepInfo_LP_C.ConstructOnlyOnce
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_RepInfo_LP_C::ConstructOnlyOnce()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_RepInfo_LP.WBP_Sheik_RepInfo_LP_C.ConstructOnlyOnce");
		
		UWBP_Sheik_RepInfo_LP_C_ConstructOnlyOnce_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_RepInfo_LP.WBP_Sheik_RepInfo_LP_C.ExecuteUbergraph_WBP_Sheik_RepInfo_LP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_RepInfo_LP_C::ExecuteUbergraph_WBP_Sheik_RepInfo_LP(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_RepInfo_LP.WBP_Sheik_RepInfo_LP_C.ExecuteUbergraph_WBP_Sheik_RepInfo_LP");
		
		UWBP_Sheik_RepInfo_LP_C_ExecuteUbergraph_WBP_Sheik_RepInfo_LP_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWBP_Sheik_RepInfo_LP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWBP_Sheik_RepInfo_LP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_Sheik_RepInfo_LP.WBP_Sheik_RepInfo_LP_C");
		return ptr;
	}

}


