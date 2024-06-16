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
	 * 		Name   -> Function WBP_CombatNotification_TeammateDown.WBP_CombatNotification_TeammateDown_C.SetTeammateInfo
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        Name                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		EKnockoutType                                      KnockoutType                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_CombatNotification_TeammateDown_C::SetTeammateInfo(const class FText& Name, EKnockoutType KnockoutType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_CombatNotification_TeammateDown.WBP_CombatNotification_TeammateDown_C.SetTeammateInfo");
		
		UWBP_CombatNotification_TeammateDown_C_SetTeammateInfo_Params params {};
		params.Name = Name;
		params.KnockoutType = KnockoutType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_CombatNotification_TeammateDown.WBP_CombatNotification_TeammateDown_C.ShiftDown
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        Name                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		EKnockoutType                                      KnockoutType                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_CombatNotification_TeammateDown_C::ShiftDown(const class FText& Name, EKnockoutType KnockoutType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_CombatNotification_TeammateDown.WBP_CombatNotification_TeammateDown_C.ShiftDown");
		
		UWBP_CombatNotification_TeammateDown_C_ShiftDown_Params params {};
		params.Name = Name;
		params.KnockoutType = KnockoutType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_CombatNotification_TeammateDown.WBP_CombatNotification_TeammateDown_C.ShowTeammateNotif
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        TeammateName                                               (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		EKnockoutType                                      KnockoutType                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_CombatNotification_TeammateDown_C::ShowTeammateNotif(const class FText& TeammateName, EKnockoutType KnockoutType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_CombatNotification_TeammateDown.WBP_CombatNotification_TeammateDown_C.ShowTeammateNotif");
		
		UWBP_CombatNotification_TeammateDown_C_ShowTeammateNotif_Params params {};
		params.TeammateName = TeammateName;
		params.KnockoutType = KnockoutType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_CombatNotification_TeammateDown.WBP_CombatNotification_TeammateDown_C.ConstructOnlyOnce
	 * 		Flags  -> ()
	 */
	void UWBP_CombatNotification_TeammateDown_C::ConstructOnlyOnce()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_CombatNotification_TeammateDown.WBP_CombatNotification_TeammateDown_C.ConstructOnlyOnce");
		
		UWBP_CombatNotification_TeammateDown_C_ConstructOnlyOnce_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_CombatNotification_TeammateDown.WBP_CombatNotification_TeammateDown_C.ExecuteUbergraph_WBP_CombatNotification_TeammateDown
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_CombatNotification_TeammateDown_C::ExecuteUbergraph_WBP_CombatNotification_TeammateDown(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_CombatNotification_TeammateDown.WBP_CombatNotification_TeammateDown_C.ExecuteUbergraph_WBP_CombatNotification_TeammateDown");
		
		UWBP_CombatNotification_TeammateDown_C_ExecuteUbergraph_WBP_CombatNotification_TeammateDown_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWBP_CombatNotification_TeammateDown_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWBP_CombatNotification_TeammateDown_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_CombatNotification_TeammateDown.WBP_CombatNotification_TeammateDown_C");
		return ptr;
	}

}


