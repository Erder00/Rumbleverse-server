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
	 * 		Name   -> Function WBP_CombatNotificationSlot2.WBP_CombatNotificationSlot2_C.OnKnockedOut_cb
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FIGKnockOutData                             KnockOutData                                               (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 */
	void UWBP_CombatNotificationSlot2_C::OnKnockedOut_cb(const struct FIGKnockOutData& KnockOutData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_CombatNotificationSlot2.WBP_CombatNotificationSlot2_C.OnKnockedOut_cb");
		
		UWBP_CombatNotificationSlot2_C_OnKnockedOut_cb_Params params {};
		params.KnockOutData = KnockOutData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_CombatNotificationSlot2.WBP_CombatNotificationSlot2_C.SetCurrentCharacter
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ASheikPlayerStateCommon*                     PlayerState                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_CombatNotificationSlot2_C::SetCurrentCharacter(class ASheikPlayerStateCommon* PlayerState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_CombatNotificationSlot2.WBP_CombatNotificationSlot2_C.SetCurrentCharacter");
		
		UWBP_CombatNotificationSlot2_C_SetCurrentCharacter_Params params {};
		params.PlayerState = PlayerState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_CombatNotificationSlot2.WBP_CombatNotificationSlot2_C.AddTextToNotifLine
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        PlayerName                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		class FText                                        PlayerStatus                                               (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		EKnockoutType                                      KnockoutType                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_CombatNotificationSlot2_C::AddTextToNotifLine(const class FText& PlayerName, const class FText& PlayerStatus, EKnockoutType KnockoutType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_CombatNotificationSlot2.WBP_CombatNotificationSlot2_C.AddTextToNotifLine");
		
		UWBP_CombatNotificationSlot2_C_AddTextToNotifLine_Params params {};
		params.PlayerName = PlayerName;
		params.PlayerStatus = PlayerStatus;
		params.KnockoutType = KnockoutType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_CombatNotificationSlot2.WBP_CombatNotificationSlot2_C.SetupEnemyNotifLines
	 * 		Flags  -> ()
	 */
	void UWBP_CombatNotificationSlot2_C::SetupEnemyNotifLines()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_CombatNotificationSlot2.WBP_CombatNotificationSlot2_C.SetupEnemyNotifLines");
		
		UWBP_CombatNotificationSlot2_C_SetupEnemyNotifLines_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_CombatNotificationSlot2.WBP_CombatNotificationSlot2_C.ConstructOnlyOnce
	 * 		Flags  -> ()
	 */
	void UWBP_CombatNotificationSlot2_C::ConstructOnlyOnce()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_CombatNotificationSlot2.WBP_CombatNotificationSlot2_C.ConstructOnlyOnce");
		
		UWBP_CombatNotificationSlot2_C_ConstructOnlyOnce_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_CombatNotificationSlot2.WBP_CombatNotificationSlot2_C.ExecuteUbergraph_WBP_CombatNotificationSlot2
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_CombatNotificationSlot2_C::ExecuteUbergraph_WBP_CombatNotificationSlot2(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_CombatNotificationSlot2.WBP_CombatNotificationSlot2_C.ExecuteUbergraph_WBP_CombatNotificationSlot2");
		
		UWBP_CombatNotificationSlot2_C_ExecuteUbergraph_WBP_CombatNotificationSlot2_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWBP_CombatNotificationSlot2_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWBP_CombatNotificationSlot2_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_CombatNotificationSlot2.WBP_CombatNotificationSlot2_C");
		return ptr;
	}

}


