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
	 * 		Name   -> Function WBP_CombatNotification_Unblockable.WBP_CombatNotification_Unblockable_C.ShiftUp
	 * 		Flags  -> ()
	 */
	void UWBP_CombatNotification_Unblockable_C::ShiftUp()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_CombatNotification_Unblockable.WBP_CombatNotification_Unblockable_C.ShiftUp");
		
		UWBP_CombatNotification_Unblockable_C_ShiftUp_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_CombatNotification_Unblockable.WBP_CombatNotification_Unblockable_C.ShowUnblockableNotif
	 * 		Flags  -> ()
	 */
	void UWBP_CombatNotification_Unblockable_C::ShowUnblockableNotif()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_CombatNotification_Unblockable.WBP_CombatNotification_Unblockable_C.ShowUnblockableNotif");
		
		UWBP_CombatNotification_Unblockable_C_ShowUnblockableNotif_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_CombatNotification_Unblockable.WBP_CombatNotification_Unblockable_C.ConstructOnlyOnce
	 * 		Flags  -> ()
	 */
	void UWBP_CombatNotification_Unblockable_C::ConstructOnlyOnce()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_CombatNotification_Unblockable.WBP_CombatNotification_Unblockable_C.ConstructOnlyOnce");
		
		UWBP_CombatNotification_Unblockable_C_ConstructOnlyOnce_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_CombatNotification_Unblockable.WBP_CombatNotification_Unblockable_C.ExecuteUbergraph_WBP_CombatNotification_Unblockable
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_CombatNotification_Unblockable_C::ExecuteUbergraph_WBP_CombatNotification_Unblockable(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_CombatNotification_Unblockable.WBP_CombatNotification_Unblockable_C.ExecuteUbergraph_WBP_CombatNotification_Unblockable");
		
		UWBP_CombatNotification_Unblockable_C_ExecuteUbergraph_WBP_CombatNotification_Unblockable_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWBP_CombatNotification_Unblockable_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWBP_CombatNotification_Unblockable_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_CombatNotification_Unblockable.WBP_CombatNotification_Unblockable_C");
		return ptr;
	}

}


