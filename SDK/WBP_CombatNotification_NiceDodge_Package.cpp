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
	 * 		Name   -> Function WBP_CombatNotification_NiceDodge.WBP_CombatNotification_NiceDodge_C.ShiftUp
	 * 		Flags  -> ()
	 */
	void UWBP_CombatNotification_NiceDodge_C::ShiftUp()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_CombatNotification_NiceDodge.WBP_CombatNotification_NiceDodge_C.ShiftUp");
		
		UWBP_CombatNotification_NiceDodge_C_ShiftUp_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_CombatNotification_NiceDodge.WBP_CombatNotification_NiceDodge_C.ShowCombatNotif
	 * 		Flags  -> ()
	 */
	void UWBP_CombatNotification_NiceDodge_C::ShowCombatNotif()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_CombatNotification_NiceDodge.WBP_CombatNotification_NiceDodge_C.ShowCombatNotif");
		
		UWBP_CombatNotification_NiceDodge_C_ShowCombatNotif_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWBP_CombatNotification_NiceDodge_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWBP_CombatNotification_NiceDodge_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_CombatNotification_NiceDodge.WBP_CombatNotification_NiceDodge_C");
		return ptr;
	}

}


