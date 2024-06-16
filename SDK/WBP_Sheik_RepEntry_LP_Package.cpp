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
	 * 		Name   -> Function WBP_Sheik_RepEntry_LP.WBP_Sheik_RepEntry_LP_C.HandleIconLoadSuccess
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     LoadedObject                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_RepEntry_LP_C::HandleIconLoadSuccess(class UObject* LoadedObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_RepEntry_LP.WBP_Sheik_RepEntry_LP_C.HandleIconLoadSuccess");
		
		UWBP_Sheik_RepEntry_LP_C_HandleIconLoadSuccess_Params params {};
		params.LoadedObject = LoadedObject;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_RepEntry_LP.WBP_Sheik_RepEntry_LP_C.SetChallengeBackground
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_RepEntry_LP_C::SetChallengeBackground()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_RepEntry_LP.WBP_Sheik_RepEntry_LP_C.SetChallengeBackground");
		
		UWBP_Sheik_RepEntry_LP_C_SetChallengeBackground_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_RepEntry_LP.WBP_Sheik_RepEntry_LP_C.SetComplete
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_RepEntry_LP_C::SetComplete()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_RepEntry_LP.WBP_Sheik_RepEntry_LP_C.SetComplete");
		
		UWBP_Sheik_RepEntry_LP_C_SetComplete_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_RepEntry_LP.WBP_Sheik_RepEntry_LP_C.SetRewardDisplay
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FRepReward>                          RewardStructArray                                          (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UWBP_Sheik_RepEntry_LP_C::SetRewardDisplay(TArray<struct FRepReward>* RewardStructArray)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_RepEntry_LP.WBP_Sheik_RepEntry_LP_C.SetRewardDisplay");
		
		UWBP_Sheik_RepEntry_LP_C_SetRewardDisplay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (RewardStructArray != nullptr)
			*RewardStructArray = params.RewardStructArray;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_RepEntry_LP.WBP_Sheik_RepEntry_LP_C.SetProgressBar
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_RepEntry_LP_C::SetProgressBar()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_RepEntry_LP.WBP_Sheik_RepEntry_LP_C.SetProgressBar");
		
		UWBP_Sheik_RepEntry_LP_C_SetProgressBar_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_RepEntry_LP.WBP_Sheik_RepEntry_LP_C.SetChallengeText
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_RepEntry_LP_C::SetChallengeText()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_RepEntry_LP.WBP_Sheik_RepEntry_LP_C.SetChallengeText");
		
		UWBP_Sheik_RepEntry_LP_C_SetChallengeText_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_RepEntry_LP.WBP_Sheik_RepEntry_LP_C.SetProgressText
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_RepEntry_LP_C::SetProgressText()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_RepEntry_LP.WBP_Sheik_RepEntry_LP_C.SetProgressText");
		
		UWBP_Sheik_RepEntry_LP_C_SetProgressText_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_RepEntry_LP.WBP_Sheik_RepEntry_LP_C.CreateChallengeLine
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FRepUIData                                  RepUIItem                                                  (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UWBP_Sheik_RepEntry_LP_C::CreateChallengeLine(const struct FRepUIData& RepUIItem)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_RepEntry_LP.WBP_Sheik_RepEntry_LP_C.CreateChallengeLine");
		
		UWBP_Sheik_RepEntry_LP_C_CreateChallengeLine_Params params {};
		params.RepUIItem = RepUIItem;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_RepEntry_LP.WBP_Sheik_RepEntry_LP_C.RefreshAllButtonsOnRerollClick__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_RepEntry_LP_C::RefreshAllButtonsOnRerollClick__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_RepEntry_LP.WBP_Sheik_RepEntry_LP_C.RefreshAllButtonsOnRerollClick__DelegateSignature");
		
		UWBP_Sheik_RepEntry_LP_C_RefreshAllButtonsOnRerollClick__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_RepEntry_LP.WBP_Sheik_RepEntry_LP_C.RemoveThisRepFromUI__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UWBP_Sheik_RepMenuEntry_C*                   This                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_RepEntry_LP_C::RemoveThisRepFromUI__DelegateSignature(class UWBP_Sheik_RepMenuEntry_C* This)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_RepEntry_LP.WBP_Sheik_RepEntry_LP_C.RemoveThisRepFromUI__DelegateSignature");
		
		UWBP_Sheik_RepEntry_LP_C_RemoveThisRepFromUI__DelegateSignature_Params params {};
		params.This = This;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWBP_Sheik_RepEntry_LP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWBP_Sheik_RepEntry_LP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_Sheik_RepEntry_LP.WBP_Sheik_RepEntry_LP_C");
		return ptr;
	}

}


