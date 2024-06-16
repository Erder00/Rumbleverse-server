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
	 * 		Name   -> Function WBP_CombatNotification_Comeback.WBP_CombatNotification_Comeback_C.ShiftUp
	 * 		Flags  -> ()
	 */
	void UWBP_CombatNotification_Comeback_C::ShiftUp()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_CombatNotification_Comeback.WBP_CombatNotification_Comeback_C.ShiftUp");
		
		UWBP_CombatNotification_Comeback_C_ShiftUp_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_CombatNotification_Comeback.WBP_CombatNotification_Comeback_C.ShowComebackNotif
	 * 		Flags  -> ()
	 */
	void UWBP_CombatNotification_Comeback_C::ShowComebackNotif()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_CombatNotification_Comeback.WBP_CombatNotification_Comeback_C.ShowComebackNotif");
		
		UWBP_CombatNotification_Comeback_C_ShowComebackNotif_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_CombatNotification_Comeback.WBP_CombatNotification_Comeback_C.ConstructOnlyOnce
	 * 		Flags  -> ()
	 */
	void UWBP_CombatNotification_Comeback_C::ConstructOnlyOnce()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_CombatNotification_Comeback.WBP_CombatNotification_Comeback_C.ConstructOnlyOnce");
		
		UWBP_CombatNotification_Comeback_C_ConstructOnlyOnce_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_CombatNotification_Comeback.WBP_CombatNotification_Comeback_C.ExecuteUbergraph_WBP_CombatNotification_Comeback
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_CombatNotification_Comeback_C::ExecuteUbergraph_WBP_CombatNotification_Comeback(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_CombatNotification_Comeback.WBP_CombatNotification_Comeback_C.ExecuteUbergraph_WBP_CombatNotification_Comeback");
		
		UWBP_CombatNotification_Comeback_C_ExecuteUbergraph_WBP_CombatNotification_Comeback_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWBP_CombatNotification_Comeback_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWBP_CombatNotification_Comeback_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_CombatNotification_Comeback.WBP_CombatNotification_Comeback_C");
		return ptr;
	}

}


