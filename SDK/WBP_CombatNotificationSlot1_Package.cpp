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
	 * 		Name   -> Function WBP_CombatNotificationSlot1.WBP_CombatNotificationSlot1_C.OnPerkAcquired
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FIGPerkHUDInfo                              PerkInfo                                                   (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UWBP_CombatNotificationSlot1_C::OnPerkAcquired(const struct FIGPerkHUDInfo& PerkInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_CombatNotificationSlot1.WBP_CombatNotificationSlot1_C.OnPerkAcquired");
		
		UWBP_CombatNotificationSlot1_C_OnPerkAcquired_Params params {};
		params.PerkInfo = PerkInfo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_CombatNotificationSlot1.WBP_CombatNotificationSlot1_C.GetTextForPriority
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            RawPriority                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FText                                        OutputText                                                 (Parm, OutParm)
	 */
	void UWBP_CombatNotificationSlot1_C::GetTextForPriority(int32_t RawPriority, class FText* OutputText)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_CombatNotificationSlot1.WBP_CombatNotificationSlot1_C.GetTextForPriority");
		
		UWBP_CombatNotificationSlot1_C_GetTextForPriority_Params params {};
		params.RawPriority = RawPriority;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutputText != nullptr)
			*OutputText = params.OutputText;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_CombatNotificationSlot1.WBP_CombatNotificationSlot1_C.OnModValueChanged_cb
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESheikModValueType                                 Type                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Value                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_CombatNotificationSlot1_C::OnModValueChanged_cb(ESheikModValueType Type, float Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_CombatNotificationSlot1.WBP_CombatNotificationSlot1_C.OnModValueChanged_cb");
		
		UWBP_CombatNotificationSlot1_C_OnModValueChanged_cb_Params params {};
		params.Type = Type;
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_CombatNotificationSlot1.WBP_CombatNotificationSlot1_C.On KOInsurance Activate
	 * 		Flags  -> ()
	 */
	void UWBP_CombatNotificationSlot1_C::OnKOInsuranceActivate()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_CombatNotificationSlot1.WBP_CombatNotificationSlot1_C.On KOInsurance Activate");
		
		UWBP_CombatNotificationSlot1_C_OnKOInsuranceActivate_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_CombatNotificationSlot1.WBP_CombatNotificationSlot1_C.OnWinded
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              StaminaPercentage                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_CombatNotificationSlot1_C::OnWinded(float StaminaPercentage)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_CombatNotificationSlot1.WBP_CombatNotificationSlot1_C.OnWinded");
		
		UWBP_CombatNotificationSlot1_C_OnWinded_Params params {};
		params.StaminaPercentage = StaminaPercentage;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_CombatNotificationSlot1.WBP_CombatNotificationSlot1_C.OnSuperstarActivated
	 * 		Flags  -> ()
	 */
	void UWBP_CombatNotificationSlot1_C::OnSuperstarActivated()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_CombatNotificationSlot1.WBP_CombatNotificationSlot1_C.OnSuperstarActivated");
		
		UWBP_CombatNotificationSlot1_C_OnSuperstarActivated_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_CombatNotificationSlot1.WBP_CombatNotificationSlot1_C.OnMyAttackHit_cb
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bClashed                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bCrushed                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bStaminaBreak                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bUnblockable                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              BaseDamage                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              FinalDamage                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		EIGClashPriorityTier                               AttackerPriority                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		EIGClashPriorityTier                               VictimPriority                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_CombatNotificationSlot1_C::OnMyAttackHit_cb(bool bClashed, bool bCrushed, bool bStaminaBreak, bool bUnblockable, float BaseDamage, float FinalDamage, EIGClashPriorityTier AttackerPriority, EIGClashPriorityTier VictimPriority)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_CombatNotificationSlot1.WBP_CombatNotificationSlot1_C.OnMyAttackHit_cb");
		
		UWBP_CombatNotificationSlot1_C_OnMyAttackHit_cb_Params params {};
		params.bClashed = bClashed;
		params.bCrushed = bCrushed;
		params.bStaminaBreak = bStaminaBreak;
		params.bUnblockable = bUnblockable;
		params.BaseDamage = BaseDamage;
		params.FinalDamage = FinalDamage;
		params.AttackerPriority = AttackerPriority;
		params.VictimPriority = VictimPriority;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_CombatNotificationSlot1.WBP_CombatNotificationSlot1_C.OnStarPowerEvent_cb
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              FameAmount                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              FameMax                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              FamePercentage                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		EFameSource                                        FameSource                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_CombatNotificationSlot1_C::OnStarPowerEvent_cb(float FameAmount, float FameMax, float FamePercentage, EFameSource FameSource)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_CombatNotificationSlot1.WBP_CombatNotificationSlot1_C.OnStarPowerEvent_cb");
		
		UWBP_CombatNotificationSlot1_C_OnStarPowerEvent_cb_Params params {};
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
	 * 		Name   -> Function WBP_CombatNotificationSlot1.WBP_CombatNotificationSlot1_C.SetForPlayer
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ASheikPlayerStateCommon*                     PlayerState                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_CombatNotificationSlot1_C::SetForPlayer(class ASheikPlayerStateCommon* PlayerState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_CombatNotificationSlot1.WBP_CombatNotificationSlot1_C.SetForPlayer");
		
		UWBP_CombatNotificationSlot1_C_SetForPlayer_Params params {};
		params.PlayerState = PlayerState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_CombatNotificationSlot1.WBP_CombatNotificationSlot1_C.ConstructOnlyOnce
	 * 		Flags  -> ()
	 */
	void UWBP_CombatNotificationSlot1_C::ConstructOnlyOnce()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_CombatNotificationSlot1.WBP_CombatNotificationSlot1_C.ConstructOnlyOnce");
		
		UWBP_CombatNotificationSlot1_C_ConstructOnlyOnce_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_CombatNotificationSlot1.WBP_CombatNotificationSlot1_C.ExecuteUbergraph_WBP_CombatNotificationSlot1
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_CombatNotificationSlot1_C::ExecuteUbergraph_WBP_CombatNotificationSlot1(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_CombatNotificationSlot1.WBP_CombatNotificationSlot1_C.ExecuteUbergraph_WBP_CombatNotificationSlot1");
		
		UWBP_CombatNotificationSlot1_C_ExecuteUbergraph_WBP_CombatNotificationSlot1_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWBP_CombatNotificationSlot1_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWBP_CombatNotificationSlot1_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_CombatNotificationSlot1.WBP_CombatNotificationSlot1_C");
		return ptr;
	}

}


