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
	 * 		Name   -> Function WBP_Sheik_RepInfo.WBP_Sheik_RepInfo_C.SetText
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        RepName                                                    (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		class FText                                        RepDescription                                             (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UWBP_Sheik_RepInfo_C::SetText(const class FText& RepName, const class FText& RepDescription)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_RepInfo.WBP_Sheik_RepInfo_C.SetText");
		
		UWBP_Sheik_RepInfo_C_SetText_Params params {};
		params.RepName = RepName;
		params.RepDescription = RepDescription;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_RepInfo.WBP_Sheik_RepInfo_C.ConstructOnlyOnce
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_RepInfo_C::ConstructOnlyOnce()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_RepInfo.WBP_Sheik_RepInfo_C.ConstructOnlyOnce");
		
		UWBP_Sheik_RepInfo_C_ConstructOnlyOnce_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_RepInfo.WBP_Sheik_RepInfo_C.ExecuteUbergraph_WBP_Sheik_RepInfo
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_RepInfo_C::ExecuteUbergraph_WBP_Sheik_RepInfo(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_RepInfo.WBP_Sheik_RepInfo_C.ExecuteUbergraph_WBP_Sheik_RepInfo");
		
		UWBP_Sheik_RepInfo_C_ExecuteUbergraph_WBP_Sheik_RepInfo_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWBP_Sheik_RepInfo_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWBP_Sheik_RepInfo_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_Sheik_RepInfo.WBP_Sheik_RepInfo_C");
		return ptr;
	}

}


