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
	 * 		Name   -> Function WBP_CombatNotification_PriorityCrush.WBP_CombatNotification_PriorityCrush_C.Set Crush Text and Font
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EIGClashPriorityTier                               AttackPriority                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		EIGClashPriorityTier                               VictimPriority                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_CombatNotification_PriorityCrush_C::SetCrushTextandFont(EIGClashPriorityTier AttackPriority, EIGClashPriorityTier VictimPriority)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_CombatNotification_PriorityCrush.WBP_CombatNotification_PriorityCrush_C.Set Crush Text and Font");
		
		UWBP_CombatNotification_PriorityCrush_C_SetCrushTextandFont_Params params {};
		params.AttackPriority = AttackPriority;
		params.VictimPriority = VictimPriority;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_CombatNotification_PriorityCrush.WBP_CombatNotification_PriorityCrush_C.ShiftUp
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        CombatCrushText                                            (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UWBP_CombatNotification_PriorityCrush_C::ShiftUp(const class FText& CombatCrushText)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_CombatNotification_PriorityCrush.WBP_CombatNotification_PriorityCrush_C.ShiftUp");
		
		UWBP_CombatNotification_PriorityCrush_C_ShiftUp_Params params {};
		params.CombatCrushText = CombatCrushText;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_CombatNotification_PriorityCrush.WBP_CombatNotification_PriorityCrush_C.ShowPriorityCrushNotif
	 * 		Flags  -> ()
	 */
	void UWBP_CombatNotification_PriorityCrush_C::ShowPriorityCrushNotif()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_CombatNotification_PriorityCrush.WBP_CombatNotification_PriorityCrush_C.ShowPriorityCrushNotif");
		
		UWBP_CombatNotification_PriorityCrush_C_ShowPriorityCrushNotif_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_CombatNotification_PriorityCrush.WBP_CombatNotification_PriorityCrush_C.ConstructOnlyOnce
	 * 		Flags  -> ()
	 */
	void UWBP_CombatNotification_PriorityCrush_C::ConstructOnlyOnce()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_CombatNotification_PriorityCrush.WBP_CombatNotification_PriorityCrush_C.ConstructOnlyOnce");
		
		UWBP_CombatNotification_PriorityCrush_C_ConstructOnlyOnce_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_CombatNotification_PriorityCrush.WBP_CombatNotification_PriorityCrush_C.ExecuteUbergraph_WBP_CombatNotification_PriorityCrush
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_CombatNotification_PriorityCrush_C::ExecuteUbergraph_WBP_CombatNotification_PriorityCrush(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_CombatNotification_PriorityCrush.WBP_CombatNotification_PriorityCrush_C.ExecuteUbergraph_WBP_CombatNotification_PriorityCrush");
		
		UWBP_CombatNotification_PriorityCrush_C_ExecuteUbergraph_WBP_CombatNotification_PriorityCrush_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWBP_CombatNotification_PriorityCrush_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWBP_CombatNotification_PriorityCrush_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_CombatNotification_PriorityCrush.WBP_CombatNotification_PriorityCrush_C");
		return ptr;
	}

}


