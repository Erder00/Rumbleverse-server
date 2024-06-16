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
	 * 		Name   -> Function WBP_CombatNotification_StatIncrease.WBP_CombatNotification_StatIncrease_C.SetStaminaFontAndIcon
	 * 		Flags  -> ()
	 */
	void UWBP_CombatNotification_StatIncrease_C::SetStaminaFontAndIcon()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_CombatNotification_StatIncrease.WBP_CombatNotification_StatIncrease_C.SetStaminaFontAndIcon");
		
		UWBP_CombatNotification_StatIncrease_C_SetStaminaFontAndIcon_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_CombatNotification_StatIncrease.WBP_CombatNotification_StatIncrease_C.SetAttackFontAndIcon
	 * 		Flags  -> ()
	 */
	void UWBP_CombatNotification_StatIncrease_C::SetAttackFontAndIcon()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_CombatNotification_StatIncrease.WBP_CombatNotification_StatIncrease_C.SetAttackFontAndIcon");
		
		UWBP_CombatNotification_StatIncrease_C_SetAttackFontAndIcon_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_CombatNotification_StatIncrease.WBP_CombatNotification_StatIncrease_C.SetHealthFontAndIcon
	 * 		Flags  -> ()
	 */
	void UWBP_CombatNotification_StatIncrease_C::SetHealthFontAndIcon()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_CombatNotification_StatIncrease.WBP_CombatNotification_StatIncrease_C.SetHealthFontAndIcon");
		
		UWBP_CombatNotification_StatIncrease_C_SetHealthFontAndIcon_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_CombatNotification_StatIncrease.WBP_CombatNotification_StatIncrease_C.SetStatIncreaseInformationText
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        StatType                                                   (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		float                                              StatPercentage                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_CombatNotification_StatIncrease_C::SetStatIncreaseInformationText(const class FText& StatType, float StatPercentage)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_CombatNotification_StatIncrease.WBP_CombatNotification_StatIncrease_C.SetStatIncreaseInformationText");
		
		UWBP_CombatNotification_StatIncrease_C_SetStatIncreaseInformationText_Params params {};
		params.StatType = StatType;
		params.StatPercentage = StatPercentage;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_CombatNotification_StatIncrease.WBP_CombatNotification_StatIncrease_C.ShiftUp
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        StatType                                                   (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		float                                              StatIncrease                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_CombatNotification_StatIncrease_C::ShiftUp(const class FText& StatType, float StatIncrease)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_CombatNotification_StatIncrease.WBP_CombatNotification_StatIncrease_C.ShiftUp");
		
		UWBP_CombatNotification_StatIncrease_C_ShiftUp_Params params {};
		params.StatType = StatType;
		params.StatIncrease = StatIncrease;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_CombatNotification_StatIncrease.WBP_CombatNotification_StatIncrease_C.ShowStatIncreaseNotif
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        StatType                                                   (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		float                                              StatPercentageIncrease                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_CombatNotification_StatIncrease_C::ShowStatIncreaseNotif(const class FText& StatType, float StatPercentageIncrease)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_CombatNotification_StatIncrease.WBP_CombatNotification_StatIncrease_C.ShowStatIncreaseNotif");
		
		UWBP_CombatNotification_StatIncrease_C_ShowStatIncreaseNotif_Params params {};
		params.StatType = StatType;
		params.StatPercentageIncrease = StatPercentageIncrease;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_CombatNotification_StatIncrease.WBP_CombatNotification_StatIncrease_C.ConstructOnlyOnce
	 * 		Flags  -> ()
	 */
	void UWBP_CombatNotification_StatIncrease_C::ConstructOnlyOnce()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_CombatNotification_StatIncrease.WBP_CombatNotification_StatIncrease_C.ConstructOnlyOnce");
		
		UWBP_CombatNotification_StatIncrease_C_ConstructOnlyOnce_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_CombatNotification_StatIncrease.WBP_CombatNotification_StatIncrease_C.ExecuteUbergraph_WBP_CombatNotification_StatIncrease
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_CombatNotification_StatIncrease_C::ExecuteUbergraph_WBP_CombatNotification_StatIncrease(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_CombatNotification_StatIncrease.WBP_CombatNotification_StatIncrease_C.ExecuteUbergraph_WBP_CombatNotification_StatIncrease");
		
		UWBP_CombatNotification_StatIncrease_C_ExecuteUbergraph_WBP_CombatNotification_StatIncrease_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWBP_CombatNotification_StatIncrease_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWBP_CombatNotification_StatIncrease_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_CombatNotification_StatIncrease.WBP_CombatNotification_StatIncrease_C");
		return ptr;
	}

}


