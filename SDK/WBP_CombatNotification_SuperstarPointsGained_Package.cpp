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
	 * 		Name   -> Function WBP_CombatNotification_SuperstarPointsGained.WBP_CombatNotification_SuperstarPointsGained_C.ClearAccumulatedFame
	 * 		Flags  -> ()
	 */
	void UWBP_CombatNotification_SuperstarPointsGained_C::ClearAccumulatedFame()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_CombatNotification_SuperstarPointsGained.WBP_CombatNotification_SuperstarPointsGained_C.ClearAccumulatedFame");
		
		UWBP_CombatNotification_SuperstarPointsGained_C_ClearAccumulatedFame_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_CombatNotification_SuperstarPointsGained.WBP_CombatNotification_SuperstarPointsGained_C.OnStarPowerEvent_cb
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              FameAmount                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              FameMax                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              FamePercentage                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		EFameSource                                        FameSource                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_CombatNotification_SuperstarPointsGained_C::OnStarPowerEvent_cb(float FameAmount, float FameMax, float FamePercentage, EFameSource FameSource)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_CombatNotification_SuperstarPointsGained.WBP_CombatNotification_SuperstarPointsGained_C.OnStarPowerEvent_cb");
		
		UWBP_CombatNotification_SuperstarPointsGained_C_OnStarPowerEvent_cb_Params params {};
		params.FameAmount = FameAmount;
		params.FameMax = FameMax;
		params.FamePercentage = FamePercentage;
		params.FameSource = FameSource;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_CombatNotification_SuperstarPointsGained.WBP_CombatNotification_SuperstarPointsGained_C.SetForPlayer
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ASheikPlayerStateCommon*                     PlayerState                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_CombatNotification_SuperstarPointsGained_C::SetForPlayer(class ASheikPlayerStateCommon* PlayerState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_CombatNotification_SuperstarPointsGained.WBP_CombatNotification_SuperstarPointsGained_C.SetForPlayer");
		
		UWBP_CombatNotification_SuperstarPointsGained_C_SetForPlayer_Params params {};
		params.PlayerState = PlayerState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_CombatNotification_SuperstarPointsGained.WBP_CombatNotification_SuperstarPointsGained_C.ShowSuperstarGainedPointsAnimation
	 * 		Flags  -> ()
	 */
	void UWBP_CombatNotification_SuperstarPointsGained_C::ShowSuperstarGainedPointsAnimation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_CombatNotification_SuperstarPointsGained.WBP_CombatNotification_SuperstarPointsGained_C.ShowSuperstarGainedPointsAnimation");
		
		UWBP_CombatNotification_SuperstarPointsGained_C_ShowSuperstarGainedPointsAnimation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_CombatNotification_SuperstarPointsGained.WBP_CombatNotification_SuperstarPointsGained_C.ShiftUp
	 * 		Flags  -> ()
	 */
	void UWBP_CombatNotification_SuperstarPointsGained_C::ShiftUp()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_CombatNotification_SuperstarPointsGained.WBP_CombatNotification_SuperstarPointsGained_C.ShiftUp");
		
		UWBP_CombatNotification_SuperstarPointsGained_C_ShiftUp_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_CombatNotification_SuperstarPointsGained.WBP_CombatNotification_SuperstarPointsGained_C.SetStarPointsIncreaseNumber
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              StarPoints                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_CombatNotification_SuperstarPointsGained_C::SetStarPointsIncreaseNumber(float StarPoints)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_CombatNotification_SuperstarPointsGained.WBP_CombatNotification_SuperstarPointsGained_C.SetStarPointsIncreaseNumber");
		
		UWBP_CombatNotification_SuperstarPointsGained_C_SetStarPointsIncreaseNumber_Params params {};
		params.StarPoints = StarPoints;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_CombatNotification_SuperstarPointsGained.WBP_CombatNotification_SuperstarPointsGained_C.ConstructOnlyOnce
	 * 		Flags  -> ()
	 */
	void UWBP_CombatNotification_SuperstarPointsGained_C::ConstructOnlyOnce()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_CombatNotification_SuperstarPointsGained.WBP_CombatNotification_SuperstarPointsGained_C.ConstructOnlyOnce");
		
		UWBP_CombatNotification_SuperstarPointsGained_C_ConstructOnlyOnce_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_CombatNotification_SuperstarPointsGained.WBP_CombatNotification_SuperstarPointsGained_C.ExecuteUbergraph_WBP_CombatNotification_SuperstarPointsGained
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_CombatNotification_SuperstarPointsGained_C::ExecuteUbergraph_WBP_CombatNotification_SuperstarPointsGained(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_CombatNotification_SuperstarPointsGained.WBP_CombatNotification_SuperstarPointsGained_C.ExecuteUbergraph_WBP_CombatNotification_SuperstarPointsGained");
		
		UWBP_CombatNotification_SuperstarPointsGained_C_ExecuteUbergraph_WBP_CombatNotification_SuperstarPointsGained_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWBP_CombatNotification_SuperstarPointsGained_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWBP_CombatNotification_SuperstarPointsGained_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_CombatNotification_SuperstarPointsGained.WBP_CombatNotification_SuperstarPointsGained_C");
		return ptr;
	}

}


