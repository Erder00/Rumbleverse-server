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
	 * 		Name   -> Function WBP_Sheik_Social_PlayerListSeparator.WBP_Sheik_Social_PlayerListSeparator_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_Sheik_Social_PlayerListSeparator_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Social_PlayerListSeparator.WBP_Sheik_Social_PlayerListSeparator_C.PreConstruct");
		
		UWBP_Sheik_Social_PlayerListSeparator_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Social_PlayerListSeparator.WBP_Sheik_Social_PlayerListSeparator_C.Construct
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_Social_PlayerListSeparator_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Social_PlayerListSeparator.WBP_Sheik_Social_PlayerListSeparator_C.Construct");
		
		UWBP_Sheik_Social_PlayerListSeparator_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Social_PlayerListSeparator.WBP_Sheik_Social_PlayerListSeparator_C.ExecuteUbergraph_WBP_Sheik_Social_PlayerListSeparator
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_Social_PlayerListSeparator_C::ExecuteUbergraph_WBP_Sheik_Social_PlayerListSeparator(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Social_PlayerListSeparator.WBP_Sheik_Social_PlayerListSeparator_C.ExecuteUbergraph_WBP_Sheik_Social_PlayerListSeparator");
		
		UWBP_Sheik_Social_PlayerListSeparator_C_ExecuteUbergraph_WBP_Sheik_Social_PlayerListSeparator_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWBP_Sheik_Social_PlayerListSeparator_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWBP_Sheik_Social_PlayerListSeparator_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_Sheik_Social_PlayerListSeparator.WBP_Sheik_Social_PlayerListSeparator_C");
		return ptr;
	}

}


