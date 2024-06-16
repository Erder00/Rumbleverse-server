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
	 * 		Name   -> Function WBP_Sheik_ThrownItemIndicator.WBP_Sheik_ThrownItemIndicator_C.ShowWidget
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_ThrownItemIndicator_C::ShowWidget()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_ThrownItemIndicator.WBP_Sheik_ThrownItemIndicator_C.ShowWidget");
		
		UWBP_Sheik_ThrownItemIndicator_C_ShowWidget_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_ThrownItemIndicator.WBP_Sheik_ThrownItemIndicator_C.AutoHideWidget
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_ThrownItemIndicator_C::AutoHideWidget()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_ThrownItemIndicator.WBP_Sheik_ThrownItemIndicator_C.AutoHideWidget");
		
		UWBP_Sheik_ThrownItemIndicator_C_AutoHideWidget_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_ThrownItemIndicator.WBP_Sheik_ThrownItemIndicator_C.HandleOnThrownItemNoLongerTargetingPlayer_BP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AIGInteractablePickup*                       ThrownItem                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_ThrownItemIndicator_C::HandleOnThrownItemNoLongerTargetingPlayer_BP(class AIGInteractablePickup* ThrownItem)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_ThrownItemIndicator.WBP_Sheik_ThrownItemIndicator_C.HandleOnThrownItemNoLongerTargetingPlayer_BP");
		
		UWBP_Sheik_ThrownItemIndicator_C_HandleOnThrownItemNoLongerTargetingPlayer_BP_Params params {};
		params.ThrownItem = ThrownItem;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_ThrownItemIndicator.WBP_Sheik_ThrownItemIndicator_C.ConstructOnlyOnce
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_ThrownItemIndicator_C::ConstructOnlyOnce()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_ThrownItemIndicator.WBP_Sheik_ThrownItemIndicator_C.ConstructOnlyOnce");
		
		UWBP_Sheik_ThrownItemIndicator_C_ConstructOnlyOnce_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_ThrownItemIndicator.WBP_Sheik_ThrownItemIndicator_C.HandleOnThrownItemTargetingPlayer_BP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AIGInteractablePickup*                       ThrownItem                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_ThrownItemIndicator_C::HandleOnThrownItemTargetingPlayer_BP(class AIGInteractablePickup* ThrownItem)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_ThrownItemIndicator.WBP_Sheik_ThrownItemIndicator_C.HandleOnThrownItemTargetingPlayer_BP");
		
		UWBP_Sheik_ThrownItemIndicator_C_HandleOnThrownItemTargetingPlayer_BP_Params params {};
		params.ThrownItem = ThrownItem;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_ThrownItemIndicator.WBP_Sheik_ThrownItemIndicator_C.ExecuteUbergraph_WBP_Sheik_ThrownItemIndicator
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_ThrownItemIndicator_C::ExecuteUbergraph_WBP_Sheik_ThrownItemIndicator(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_ThrownItemIndicator.WBP_Sheik_ThrownItemIndicator_C.ExecuteUbergraph_WBP_Sheik_ThrownItemIndicator");
		
		UWBP_Sheik_ThrownItemIndicator_C_ExecuteUbergraph_WBP_Sheik_ThrownItemIndicator_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWBP_Sheik_ThrownItemIndicator_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWBP_Sheik_ThrownItemIndicator_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_Sheik_ThrownItemIndicator.WBP_Sheik_ThrownItemIndicator_C");
		return ptr;
	}

}


