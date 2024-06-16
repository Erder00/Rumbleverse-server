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
	 * 		Name   -> Function WBP_Sheik_TeammateLocationPrompt.WBP_Sheik_TeammateLocationPrompt_C.OnTeammateHPAlert_cb
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AIGPlayerState*                              InTeammateState                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bIsTeammateLowHealth                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_Sheik_TeammateLocationPrompt_C::OnTeammateHPAlert_cb(class AIGPlayerState* InTeammateState, bool bIsTeammateLowHealth)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_TeammateLocationPrompt.WBP_Sheik_TeammateLocationPrompt_C.OnTeammateHPAlert_cb");
		
		UWBP_Sheik_TeammateLocationPrompt_C_OnTeammateHPAlert_cb_Params params {};
		params.InTeammateState = InTeammateState;
		params.bIsTeammateLowHealth = bIsTeammateLowHealth;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_TeammateLocationPrompt.WBP_Sheik_TeammateLocationPrompt_C.OnTeammateLeftServer_cb
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AIGPlayerState*                              ExitingTeammate                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_TeammateLocationPrompt_C::OnTeammateLeftServer_cb(class AIGPlayerState* ExitingTeammate)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_TeammateLocationPrompt.WBP_Sheik_TeammateLocationPrompt_C.OnTeammateLeftServer_cb");
		
		UWBP_Sheik_TeammateLocationPrompt_C_OnTeammateLeftServer_cb_Params params {};
		params.ExitingTeammate = ExitingTeammate;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_TeammateLocationPrompt.WBP_Sheik_TeammateLocationPrompt_C.UpdateDownedTimer
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESheikPinEventType                                 EventType                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class ASheikCharacter*                             Attacker                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class ASheikCharacter*                             Victim                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_TeammateLocationPrompt_C::UpdateDownedTimer(ESheikPinEventType EventType, class ASheikCharacter* Attacker, class ASheikCharacter* Victim)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_TeammateLocationPrompt.WBP_Sheik_TeammateLocationPrompt_C.UpdateDownedTimer");
		
		UWBP_Sheik_TeammateLocationPrompt_C_UpdateDownedTimer_Params params {};
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
	 * 		Name   -> Function WBP_Sheik_TeammateLocationPrompt.WBP_Sheik_TeammateLocationPrompt_C.ShowDownedTimer
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FIGKnockOutData                             KnockOutData                                               (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 */
	void UWBP_Sheik_TeammateLocationPrompt_C::ShowDownedTimer(const struct FIGKnockOutData& KnockOutData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_TeammateLocationPrompt.WBP_Sheik_TeammateLocationPrompt_C.ShowDownedTimer");
		
		UWBP_Sheik_TeammateLocationPrompt_C_ShowDownedTimer_Params params {};
		params.KnockOutData = KnockOutData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_TeammateLocationPrompt.WBP_Sheik_TeammateLocationPrompt_C.SetUpForNewTeammate
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ASheikPlayerStateCommon*                     NewTeammateState                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_TeammateLocationPrompt_C::SetUpForNewTeammate(class ASheikPlayerStateCommon* NewTeammateState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_TeammateLocationPrompt.WBP_Sheik_TeammateLocationPrompt_C.SetUpForNewTeammate");
		
		UWBP_Sheik_TeammateLocationPrompt_C_SetUpForNewTeammate_Params params {};
		params.NewTeammateState = NewTeammateState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_TeammateLocationPrompt.WBP_Sheik_TeammateLocationPrompt_C.OnTeammateDied_cb
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AIGPlayerState*                              TeammatePlayerState                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_TeammateLocationPrompt_C::OnTeammateDied_cb(class AIGPlayerState* TeammatePlayerState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_TeammateLocationPrompt.WBP_Sheik_TeammateLocationPrompt_C.OnTeammateDied_cb");
		
		UWBP_Sheik_TeammateLocationPrompt_C_OnTeammateDied_cb_Params params {};
		params.TeammatePlayerState = TeammatePlayerState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_TeammateLocationPrompt.WBP_Sheik_TeammateLocationPrompt_C.ConstructOnlyOnce
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_TeammateLocationPrompt_C::ConstructOnlyOnce()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_TeammateLocationPrompt.WBP_Sheik_TeammateLocationPrompt_C.ConstructOnlyOnce");
		
		UWBP_Sheik_TeammateLocationPrompt_C_ConstructOnlyOnce_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_TeammateLocationPrompt.WBP_Sheik_TeammateLocationPrompt_C.ExecuteUbergraph_WBP_Sheik_TeammateLocationPrompt
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_TeammateLocationPrompt_C::ExecuteUbergraph_WBP_Sheik_TeammateLocationPrompt(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_TeammateLocationPrompt.WBP_Sheik_TeammateLocationPrompt_C.ExecuteUbergraph_WBP_Sheik_TeammateLocationPrompt");
		
		UWBP_Sheik_TeammateLocationPrompt_C_ExecuteUbergraph_WBP_Sheik_TeammateLocationPrompt_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWBP_Sheik_TeammateLocationPrompt_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWBP_Sheik_TeammateLocationPrompt_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_Sheik_TeammateLocationPrompt.WBP_Sheik_TeammateLocationPrompt_C");
		return ptr;
	}

}


