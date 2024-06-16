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
	 * 		Name   -> Function WBP_Sheik_DownedCountdown.WBP_Sheik_DownedCountdown_C.OnPinEvent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESheikPinEventType                                 EventType                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class ASheikCharacter*                             Attacker                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class ASheikCharacter*                             Victim                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_DownedCountdown_C::OnPinEvent(ESheikPinEventType EventType, class ASheikCharacter* Attacker, class ASheikCharacter* Victim)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_DownedCountdown.WBP_Sheik_DownedCountdown_C.OnPinEvent");
		
		UWBP_Sheik_DownedCountdown_C_OnPinEvent_Params params {};
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
	 * 		Name   -> Function WBP_Sheik_DownedCountdown.WBP_Sheik_DownedCountdown_C.HandleOnDownedTimeChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              RecoverTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_DownedCountdown_C::HandleOnDownedTimeChanged(float RecoverTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_DownedCountdown.WBP_Sheik_DownedCountdown_C.HandleOnDownedTimeChanged");
		
		UWBP_Sheik_DownedCountdown_C_HandleOnDownedTimeChanged_Params params {};
		params.RecoverTime = RecoverTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_DownedCountdown.WBP_Sheik_DownedCountdown_C.KoInsuranceActivated
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_DownedCountdown_C::KoInsuranceActivated()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_DownedCountdown.WBP_Sheik_DownedCountdown_C.KoInsuranceActivated");
		
		UWBP_Sheik_DownedCountdown_C_KoInsuranceActivated_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_DownedCountdown.WBP_Sheik_DownedCountdown_C.UpdateDownedCountdown
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              DownedTimeLeft                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_DownedCountdown_C::UpdateDownedCountdown(float DownedTimeLeft)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_DownedCountdown.WBP_Sheik_DownedCountdown_C.UpdateDownedCountdown");
		
		UWBP_Sheik_DownedCountdown_C_UpdateDownedCountdown_Params params {};
		params.DownedTimeLeft = DownedTimeLeft;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_DownedCountdown.WBP_Sheik_DownedCountdown_C.HandleOnSpectatorInfoChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSheikSpectatorInfo                         NewSpectatorInfo                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UWBP_Sheik_DownedCountdown_C::HandleOnSpectatorInfoChanged(const struct FSheikSpectatorInfo& NewSpectatorInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_DownedCountdown.WBP_Sheik_DownedCountdown_C.HandleOnSpectatorInfoChanged");
		
		UWBP_Sheik_DownedCountdown_C_HandleOnSpectatorInfoChanged_Params params {};
		params.NewSpectatorInfo = NewSpectatorInfo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_DownedCountdown.WBP_Sheik_DownedCountdown_C.SetForPlayer
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ASheikPlayerStateCommon*                     SheikPlayerState                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_DownedCountdown_C::SetForPlayer(class ASheikPlayerStateCommon* SheikPlayerState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_DownedCountdown.WBP_Sheik_DownedCountdown_C.SetForPlayer");
		
		UWBP_Sheik_DownedCountdown_C_SetForPlayer_Params params {};
		params.SheikPlayerState = SheikPlayerState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_DownedCountdown.WBP_Sheik_DownedCountdown_C.OnKnockoutOccured
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FIGKnockOutData                             KnockOutData                                               (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 */
	void UWBP_Sheik_DownedCountdown_C::OnKnockoutOccured(const struct FIGKnockOutData& KnockOutData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_DownedCountdown.WBP_Sheik_DownedCountdown_C.OnKnockoutOccured");
		
		UWBP_Sheik_DownedCountdown_C_OnKnockoutOccured_Params params {};
		params.KnockOutData = KnockOutData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_DownedCountdown.WBP_Sheik_DownedCountdown_C.ShowCountdown
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               ShowCountdown                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_Sheik_DownedCountdown_C::ShowCountdown(bool ShowCountdown)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_DownedCountdown.WBP_Sheik_DownedCountdown_C.ShowCountdown");
		
		UWBP_Sheik_DownedCountdown_C_ShowCountdown_Params params {};
		params.ShowCountdown = ShowCountdown;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_DownedCountdown.WBP_Sheik_DownedCountdown_C.UpdatePromptPosition
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_DownedCountdown_C::UpdatePromptPosition()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_DownedCountdown.WBP_Sheik_DownedCountdown_C.UpdatePromptPosition");
		
		UWBP_Sheik_DownedCountdown_C_UpdatePromptPosition_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_DownedCountdown.WBP_Sheik_DownedCountdown_C.ConstructOnlyOnce
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_DownedCountdown_C::ConstructOnlyOnce()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_DownedCountdown.WBP_Sheik_DownedCountdown_C.ConstructOnlyOnce");
		
		UWBP_Sheik_DownedCountdown_C_ConstructOnlyOnce_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_DownedCountdown.WBP_Sheik_DownedCountdown_C.Tick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_DownedCountdown_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_DownedCountdown.WBP_Sheik_DownedCountdown_C.Tick");
		
		UWBP_Sheik_DownedCountdown_C_Tick_Params params {};
		params.MyGeometry = MyGeometry;
		params.InDeltaTime = InDeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_DownedCountdown.WBP_Sheik_DownedCountdown_C.ExecuteUbergraph_WBP_Sheik_DownedCountdown
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_DownedCountdown_C::ExecuteUbergraph_WBP_Sheik_DownedCountdown(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_DownedCountdown.WBP_Sheik_DownedCountdown_C.ExecuteUbergraph_WBP_Sheik_DownedCountdown");
		
		UWBP_Sheik_DownedCountdown_C_ExecuteUbergraph_WBP_Sheik_DownedCountdown_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWBP_Sheik_DownedCountdown_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWBP_Sheik_DownedCountdown_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_Sheik_DownedCountdown.WBP_Sheik_DownedCountdown_C");
		return ptr;
	}

}


