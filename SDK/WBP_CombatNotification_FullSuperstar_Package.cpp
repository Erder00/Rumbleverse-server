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
	 * 		Name   -> Function WBP_CombatNotification_FullSuperstar.WBP_CombatNotification_FullSuperstar_C.ShiftUp
	 * 		Flags  -> ()
	 */
	void UWBP_CombatNotification_FullSuperstar_C::ShiftUp()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_CombatNotification_FullSuperstar.WBP_CombatNotification_FullSuperstar_C.ShiftUp");
		
		UWBP_CombatNotification_FullSuperstar_C_ShiftUp_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_CombatNotification_FullSuperstar.WBP_CombatNotification_FullSuperstar_C.ShowFullSuperstarNotif
	 * 		Flags  -> ()
	 */
	void UWBP_CombatNotification_FullSuperstar_C::ShowFullSuperstarNotif()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_CombatNotification_FullSuperstar.WBP_CombatNotification_FullSuperstar_C.ShowFullSuperstarNotif");
		
		UWBP_CombatNotification_FullSuperstar_C_ShowFullSuperstarNotif_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_CombatNotification_FullSuperstar.WBP_CombatNotification_FullSuperstar_C.ConstructOnlyOnce
	 * 		Flags  -> ()
	 */
	void UWBP_CombatNotification_FullSuperstar_C::ConstructOnlyOnce()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_CombatNotification_FullSuperstar.WBP_CombatNotification_FullSuperstar_C.ConstructOnlyOnce");
		
		UWBP_CombatNotification_FullSuperstar_C_ConstructOnlyOnce_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_CombatNotification_FullSuperstar.WBP_CombatNotification_FullSuperstar_C.ExecuteUbergraph_WBP_CombatNotification_FullSuperstar
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_CombatNotification_FullSuperstar_C::ExecuteUbergraph_WBP_CombatNotification_FullSuperstar(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_CombatNotification_FullSuperstar.WBP_CombatNotification_FullSuperstar_C.ExecuteUbergraph_WBP_CombatNotification_FullSuperstar");
		
		UWBP_CombatNotification_FullSuperstar_C_ExecuteUbergraph_WBP_CombatNotification_FullSuperstar_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWBP_CombatNotification_FullSuperstar_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWBP_CombatNotification_FullSuperstar_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_CombatNotification_FullSuperstar.WBP_CombatNotification_FullSuperstar_C");
		return ptr;
	}

}


