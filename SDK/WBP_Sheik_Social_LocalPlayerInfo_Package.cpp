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
	 * 		Name   -> Function WBP_Sheik_Social_LocalPlayerInfo.WBP_Sheik_Social_LocalPlayerInfo_C.UpdateText
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_Social_LocalPlayerInfo_C::UpdateText()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Social_LocalPlayerInfo.WBP_Sheik_Social_LocalPlayerInfo_C.UpdateText");
		
		UWBP_Sheik_Social_LocalPlayerInfo_C_UpdateText_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Social_LocalPlayerInfo.WBP_Sheik_Social_LocalPlayerInfo_C.Construct
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_Social_LocalPlayerInfo_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Social_LocalPlayerInfo.WBP_Sheik_Social_LocalPlayerInfo_C.Construct");
		
		UWBP_Sheik_Social_LocalPlayerInfo_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Social_LocalPlayerInfo.WBP_Sheik_Social_LocalPlayerInfo_C.ExecuteUbergraph_WBP_Sheik_Social_LocalPlayerInfo
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_Social_LocalPlayerInfo_C::ExecuteUbergraph_WBP_Sheik_Social_LocalPlayerInfo(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Social_LocalPlayerInfo.WBP_Sheik_Social_LocalPlayerInfo_C.ExecuteUbergraph_WBP_Sheik_Social_LocalPlayerInfo");
		
		UWBP_Sheik_Social_LocalPlayerInfo_C_ExecuteUbergraph_WBP_Sheik_Social_LocalPlayerInfo_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWBP_Sheik_Social_LocalPlayerInfo_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWBP_Sheik_Social_LocalPlayerInfo_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_Sheik_Social_LocalPlayerInfo.WBP_Sheik_Social_LocalPlayerInfo_C");
		return ptr;
	}

}


