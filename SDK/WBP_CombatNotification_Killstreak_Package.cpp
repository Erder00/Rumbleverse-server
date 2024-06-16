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
	 * 		Name   -> Function WBP_CombatNotification_Killstreak.WBP_CombatNotification_Killstreak_C.SetStreakAmount
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            StreakAmount                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_CombatNotification_Killstreak_C::SetStreakAmount(int32_t StreakAmount)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_CombatNotification_Killstreak.WBP_CombatNotification_Killstreak_C.SetStreakAmount");
		
		UWBP_CombatNotification_Killstreak_C_SetStreakAmount_Params params {};
		params.StreakAmount = StreakAmount;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_CombatNotification_Killstreak.WBP_CombatNotification_Killstreak_C.ShiftDown
	 * 		Flags  -> ()
	 */
	void UWBP_CombatNotification_Killstreak_C::ShiftDown()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_CombatNotification_Killstreak.WBP_CombatNotification_Killstreak_C.ShiftDown");
		
		UWBP_CombatNotification_Killstreak_C_ShiftDown_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_CombatNotification_Killstreak.WBP_CombatNotification_Killstreak_C.ShowCombatNotif
	 * 		Flags  -> ()
	 */
	void UWBP_CombatNotification_Killstreak_C::ShowCombatNotif()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_CombatNotification_Killstreak.WBP_CombatNotification_Killstreak_C.ShowCombatNotif");
		
		UWBP_CombatNotification_Killstreak_C_ShowCombatNotif_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_CombatNotification_Killstreak.WBP_CombatNotification_Killstreak_C.ConstructOnlyOnce
	 * 		Flags  -> ()
	 */
	void UWBP_CombatNotification_Killstreak_C::ConstructOnlyOnce()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_CombatNotification_Killstreak.WBP_CombatNotification_Killstreak_C.ConstructOnlyOnce");
		
		UWBP_CombatNotification_Killstreak_C_ConstructOnlyOnce_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_CombatNotification_Killstreak.WBP_CombatNotification_Killstreak_C.ExecuteUbergraph_WBP_CombatNotification_Killstreak
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_CombatNotification_Killstreak_C::ExecuteUbergraph_WBP_CombatNotification_Killstreak(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_CombatNotification_Killstreak.WBP_CombatNotification_Killstreak_C.ExecuteUbergraph_WBP_CombatNotification_Killstreak");
		
		UWBP_CombatNotification_Killstreak_C_ExecuteUbergraph_WBP_CombatNotification_Killstreak_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWBP_CombatNotification_Killstreak_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWBP_CombatNotification_Killstreak_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_CombatNotification_Killstreak.WBP_CombatNotification_Killstreak_C");
		return ptr;
	}

}


