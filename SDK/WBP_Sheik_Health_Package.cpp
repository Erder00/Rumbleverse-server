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
	 * 		Name   -> Function WBP_Sheik_Health.WBP_Sheik_Health_C.UpdateKOdAndHealthTextVisibility
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               ShouldShowKOdText                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_Sheik_Health_C::UpdateKOdAndHealthTextVisibility(bool ShouldShowKOdText)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Health.WBP_Sheik_Health_C.UpdateKOdAndHealthTextVisibility");
		
		UWBP_Sheik_Health_C_UpdateKOdAndHealthTextVisibility_Params params {};
		params.ShouldShowKOdText = ShouldShowKOdText;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Health.WBP_Sheik_Health_C.HandleOnSpectatorInfoChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSheikSpectatorInfo                         SpectatorInfo                                              (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UWBP_Sheik_Health_C::HandleOnSpectatorInfoChanged(struct FSheikSpectatorInfo* SpectatorInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Health.WBP_Sheik_Health_C.HandleOnSpectatorInfoChanged");
		
		UWBP_Sheik_Health_C_HandleOnSpectatorInfoChanged_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (SpectatorInfo != nullptr)
			*SpectatorInfo = params.SpectatorInfo;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Health.WBP_Sheik_Health_C.SetForPlayer
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ASheikPlayerStateCommon*                     SheikPlayerState                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_Health_C::SetForPlayer(class ASheikPlayerStateCommon* SheikPlayerState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Health.WBP_Sheik_Health_C.SetForPlayer");
		
		UWBP_Sheik_Health_C_SetForPlayer_Params params {};
		params.SheikPlayerState = SheikPlayerState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Health.WBP_Sheik_Health_C.OnHealthChanged_cb
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              LifePecentage                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              LifeMax                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bIsInDangerZone                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              DangerZoneThreshold                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_Health_C::OnHealthChanged_cb(float LifePecentage, float LifeMax, bool bIsInDangerZone, float DangerZoneThreshold)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Health.WBP_Sheik_Health_C.OnHealthChanged_cb");
		
		UWBP_Sheik_Health_C_OnHealthChanged_cb_Params params {};
		params.LifePecentage = LifePecentage;
		params.LifeMax = LifeMax;
		params.bIsInDangerZone = bIsInDangerZone;
		params.DangerZoneThreshold = DangerZoneThreshold;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Health.WBP_Sheik_Health_C.OnKnockout
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FIGKnockOutData                             KnockOutData                                               (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 */
	void UWBP_Sheik_Health_C::OnKnockout(const struct FIGKnockOutData& KnockOutData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Health.WBP_Sheik_Health_C.OnKnockout");
		
		UWBP_Sheik_Health_C_OnKnockout_Params params {};
		params.KnockOutData = KnockOutData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Health.WBP_Sheik_Health_C.KOProtection
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_Health_C::KOProtection()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Health.WBP_Sheik_Health_C.KOProtection");
		
		UWBP_Sheik_Health_C_KOProtection_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Health.WBP_Sheik_Health_C.DuosDowned
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESheikPinEventType                                 EventType                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class ASheikCharacter*                             Attacker                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class ASheikCharacter*                             Victim                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_Health_C::DuosDowned(ESheikPinEventType EventType, class ASheikCharacter* Attacker, class ASheikCharacter* Victim)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Health.WBP_Sheik_Health_C.DuosDowned");
		
		UWBP_Sheik_Health_C_DuosDowned_Params params {};
		params.EventType = EventType;
		params.Attacker = Attacker;
		params.Victim = Victim;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Health.WBP_Sheik_Health_C.ConstructOnlyOnce
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_Health_C::ConstructOnlyOnce()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Health.WBP_Sheik_Health_C.ConstructOnlyOnce");
		
		UWBP_Sheik_Health_C_ConstructOnlyOnce_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Health.WBP_Sheik_Health_C.ExecuteUbergraph_WBP_Sheik_Health
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_Health_C::ExecuteUbergraph_WBP_Sheik_Health(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Health.WBP_Sheik_Health_C.ExecuteUbergraph_WBP_Sheik_Health");
		
		UWBP_Sheik_Health_C_ExecuteUbergraph_WBP_Sheik_Health_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Health.WBP_Sheik_Health_C.DisableSuperStarMeter__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_Health_C::DisableSuperStarMeter__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Health.WBP_Sheik_Health_C.DisableSuperStarMeter__DelegateSignature");
		
		UWBP_Sheik_Health_C_DisableSuperStarMeter__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWBP_Sheik_Health_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWBP_Sheik_Health_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_Sheik_Health.WBP_Sheik_Health_C");
		return ptr;
	}

}


