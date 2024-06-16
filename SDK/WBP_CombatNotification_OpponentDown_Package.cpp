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
	 * 		Name   -> Function WBP_CombatNotification_OpponentDown.WBP_CombatNotification_OpponentDown_C.ShowNotifComplete
	 * 		Flags  -> ()
	 */
	void UWBP_CombatNotification_OpponentDown_C::ShowNotifComplete()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_CombatNotification_OpponentDown.WBP_CombatNotification_OpponentDown_C.ShowNotifComplete");
		
		UWBP_CombatNotification_OpponentDown_C_ShowNotifComplete_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_CombatNotification_OpponentDown.WBP_CombatNotification_OpponentDown_C.SetPlayerInfo
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        PlayerName                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		class FText                                        PlayerKnockout                                             (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		EKnockoutType                                      KnockoutType                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_CombatNotification_OpponentDown_C::SetPlayerInfo(const class FText& PlayerName, const class FText& PlayerKnockout, EKnockoutType KnockoutType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_CombatNotification_OpponentDown.WBP_CombatNotification_OpponentDown_C.SetPlayerInfo");
		
		UWBP_CombatNotification_OpponentDown_C_SetPlayerInfo_Params params {};
		params.PlayerName = PlayerName;
		params.PlayerKnockout = PlayerKnockout;
		params.KnockoutType = KnockoutType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_CombatNotification_OpponentDown.WBP_CombatNotification_OpponentDown_C.ShiftDown
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        Name                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		class FText                                        Status                                                     (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		EKnockoutType                                      KnockoutType                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_CombatNotification_OpponentDown_C::ShiftDown(const class FText& Name, const class FText& Status, EKnockoutType KnockoutType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_CombatNotification_OpponentDown.WBP_CombatNotification_OpponentDown_C.ShiftDown");
		
		UWBP_CombatNotification_OpponentDown_C_ShiftDown_Params params {};
		params.Name = Name;
		params.Status = Status;
		params.KnockoutType = KnockoutType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_CombatNotification_OpponentDown.WBP_CombatNotification_OpponentDown_C.ShowCombatNotif
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        Name                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		class FText                                        PlayerStatus                                               (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		EKnockoutType                                      KnockoutType                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_CombatNotification_OpponentDown_C::ShowCombatNotif(const class FText& Name, const class FText& PlayerStatus, EKnockoutType KnockoutType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_CombatNotification_OpponentDown.WBP_CombatNotification_OpponentDown_C.ShowCombatNotif");
		
		UWBP_CombatNotification_OpponentDown_C_ShowCombatNotif_Params params {};
		params.Name = Name;
		params.PlayerStatus = PlayerStatus;
		params.KnockoutType = KnockoutType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_CombatNotification_OpponentDown.WBP_CombatNotification_OpponentDown_C.ConstructOnlyOnce
	 * 		Flags  -> ()
	 */
	void UWBP_CombatNotification_OpponentDown_C::ConstructOnlyOnce()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_CombatNotification_OpponentDown.WBP_CombatNotification_OpponentDown_C.ConstructOnlyOnce");
		
		UWBP_CombatNotification_OpponentDown_C_ConstructOnlyOnce_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_CombatNotification_OpponentDown.WBP_CombatNotification_OpponentDown_C.ExecuteUbergraph_WBP_CombatNotification_OpponentDown
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_CombatNotification_OpponentDown_C::ExecuteUbergraph_WBP_CombatNotification_OpponentDown(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_CombatNotification_OpponentDown.WBP_CombatNotification_OpponentDown_C.ExecuteUbergraph_WBP_CombatNotification_OpponentDown");
		
		UWBP_CombatNotification_OpponentDown_C_ExecuteUbergraph_WBP_CombatNotification_OpponentDown_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWBP_CombatNotification_OpponentDown_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWBP_CombatNotification_OpponentDown_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_CombatNotification_OpponentDown.WBP_CombatNotification_OpponentDown_C");
		return ptr;
	}

}


