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
	 * 		Name   -> Function WBP_Sheik_FrontendStatusSpinner.WBP_Sheik_FrontendStatusSpinner_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_Sheik_FrontendStatusSpinner_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_FrontendStatusSpinner.WBP_Sheik_FrontendStatusSpinner_C.PreConstruct");
		
		UWBP_Sheik_FrontendStatusSpinner_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_FrontendStatusSpinner.WBP_Sheik_FrontendStatusSpinner_C.ExecuteUbergraph_WBP_Sheik_FrontendStatusSpinner
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_FrontendStatusSpinner_C::ExecuteUbergraph_WBP_Sheik_FrontendStatusSpinner(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_FrontendStatusSpinner.WBP_Sheik_FrontendStatusSpinner_C.ExecuteUbergraph_WBP_Sheik_FrontendStatusSpinner");
		
		UWBP_Sheik_FrontendStatusSpinner_C_ExecuteUbergraph_WBP_Sheik_FrontendStatusSpinner_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWBP_Sheik_FrontendStatusSpinner_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWBP_Sheik_FrontendStatusSpinner_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_Sheik_FrontendStatusSpinner.WBP_Sheik_FrontendStatusSpinner_C");
		return ptr;
	}

}


