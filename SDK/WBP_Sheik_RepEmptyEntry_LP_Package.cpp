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
	 * 		Name   -> Function WBP_Sheik_RepEmptyEntry_LP.WBP_Sheik_RepEmptyEntry_LP_C.SetPrompt
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Daily                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_Sheik_RepEmptyEntry_LP_C::SetPrompt(bool Daily)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_RepEmptyEntry_LP.WBP_Sheik_RepEmptyEntry_LP_C.SetPrompt");
		
		UWBP_Sheik_RepEmptyEntry_LP_C_SetPrompt_Params params {};
		params.Daily = Daily;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_RepEmptyEntry_LP.WBP_Sheik_RepEmptyEntry_LP_C.SetTimeTilNextChallenge
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_RepEmptyEntry_LP_C::SetTimeTilNextChallenge()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_RepEmptyEntry_LP.WBP_Sheik_RepEmptyEntry_LP_C.SetTimeTilNextChallenge");
		
		UWBP_Sheik_RepEmptyEntry_LP_C_SetTimeTilNextChallenge_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_RepEmptyEntry_LP.WBP_Sheik_RepEmptyEntry_LP_C.ConstructOnlyOnce
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_RepEmptyEntry_LP_C::ConstructOnlyOnce()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_RepEmptyEntry_LP.WBP_Sheik_RepEmptyEntry_LP_C.ConstructOnlyOnce");
		
		UWBP_Sheik_RepEmptyEntry_LP_C_ConstructOnlyOnce_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_RepEmptyEntry_LP.WBP_Sheik_RepEmptyEntry_LP_C.ExecuteUbergraph_WBP_Sheik_RepEmptyEntry_LP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_RepEmptyEntry_LP_C::ExecuteUbergraph_WBP_Sheik_RepEmptyEntry_LP(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_RepEmptyEntry_LP.WBP_Sheik_RepEmptyEntry_LP_C.ExecuteUbergraph_WBP_Sheik_RepEmptyEntry_LP");
		
		UWBP_Sheik_RepEmptyEntry_LP_C_ExecuteUbergraph_WBP_Sheik_RepEmptyEntry_LP_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_RepEmptyEntry_LP.WBP_Sheik_RepEmptyEntry_LP_C.RefreshAllButtonsOnRerollClick__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_RepEmptyEntry_LP_C::RefreshAllButtonsOnRerollClick__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_RepEmptyEntry_LP.WBP_Sheik_RepEmptyEntry_LP_C.RefreshAllButtonsOnRerollClick__DelegateSignature");
		
		UWBP_Sheik_RepEmptyEntry_LP_C_RefreshAllButtonsOnRerollClick__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_RepEmptyEntry_LP.WBP_Sheik_RepEmptyEntry_LP_C.RemoveThisRepFromUI__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UWBP_Sheik_RepMenuEntry_C*                   This                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_RepEmptyEntry_LP_C::RemoveThisRepFromUI__DelegateSignature(class UWBP_Sheik_RepMenuEntry_C* This)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_RepEmptyEntry_LP.WBP_Sheik_RepEmptyEntry_LP_C.RemoveThisRepFromUI__DelegateSignature");
		
		UWBP_Sheik_RepEmptyEntry_LP_C_RemoveThisRepFromUI__DelegateSignature_Params params {};
		params.This = This;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWBP_Sheik_RepEmptyEntry_LP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWBP_Sheik_RepEmptyEntry_LP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_Sheik_RepEmptyEntry_LP.WBP_Sheik_RepEmptyEntry_LP_C");
		return ptr;
	}

}


