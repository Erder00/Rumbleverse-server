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
	 * 		Name   -> Function SheikGenericVFXHandler_BP.SheikGenericVFXHandler_BP_C.GetBasicPingingEnabled
	 * 		Flags  -> ()
	 */
	bool ASheikGenericVFXHandler_BP_C::GetBasicPingingEnabled()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SheikGenericVFXHandler_BP.SheikGenericVFXHandler_BP_C.GetBasicPingingEnabled");
		
		ASheikGenericVFXHandler_BP_C_GetBasicPingingEnabled_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SheikGenericVFXHandler_BP.SheikGenericVFXHandler_BP_C.SpawnHealthNumberVFX
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     TargetHealed                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              HealedAmount                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ASheikGenericVFXHandler_BP_C::SpawnHealthNumberVFX(class UObject* TargetHealed, float HealedAmount)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SheikGenericVFXHandler_BP.SheikGenericVFXHandler_BP_C.SpawnHealthNumberVFX");
		
		ASheikGenericVFXHandler_BP_C_SpawnHealthNumberVFX_Params params {};
		params.TargetHealed = TargetHealed;
		params.HealedAmount = HealedAmount;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SheikGenericVFXHandler_BP.SheikGenericVFXHandler_BP_C.OnPingExpired
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            PartyMemberID                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ASheikGenericVFXHandler_BP_C::OnPingExpired(int32_t PartyMemberID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SheikGenericVFXHandler_BP.SheikGenericVFXHandler_BP_C.OnPingExpired");
		
		ASheikGenericVFXHandler_BP_C_OnPingExpired_Params params {};
		params.PartyMemberID = PartyMemberID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SheikGenericVFXHandler_BP.SheikGenericVFXHandler_BP_C.OnPingAtLocation
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EIGPingType                                        PingType                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            PartyMemberID                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     PingLocation                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     PingNormal                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ASheikGenericVFXHandler_BP_C::OnPingAtLocation(EIGPingType PingType, int32_t PartyMemberID, const struct FVector& PingLocation, const struct FVector& PingNormal)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SheikGenericVFXHandler_BP.SheikGenericVFXHandler_BP_C.OnPingAtLocation");
		
		ASheikGenericVFXHandler_BP_C_OnPingAtLocation_Params params {};
		params.PingType = PingType;
		params.PartyMemberID = PartyMemberID;
		params.PingLocation = PingLocation;
		params.PingNormal = PingNormal;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SheikGenericVFXHandler_BP.SheikGenericVFXHandler_BP_C.PostProcessSetup
	 * 		Flags  -> ()
	 */
	void ASheikGenericVFXHandler_BP_C::PostProcessSetup()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SheikGenericVFXHandler_BP.SheikGenericVFXHandler_BP_C.PostProcessSetup");
		
		ASheikGenericVFXHandler_BP_C_PostProcessSetup_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SheikGenericVFXHandler_BP.SheikGenericVFXHandler_BP_C.EventWon
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<class ASheikCharacter*>                     WinningCharacters                                          (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void ASheikGenericVFXHandler_BP_C::EventWon(TArray<class ASheikCharacter*>* WinningCharacters)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SheikGenericVFXHandler_BP.SheikGenericVFXHandler_BP_C.EventWon");
		
		ASheikGenericVFXHandler_BP_C_EventWon_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (WinningCharacters != nullptr)
			*WinningCharacters = params.WinningCharacters;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SheikGenericVFXHandler_BP.SheikGenericVFXHandler_BP_C.HandlePerkGainedNotifyVFXBP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FIGVFXPerkNotifyInfo                        EventInfo                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	 */
	void ASheikGenericVFXHandler_BP_C::HandlePerkGainedNotifyVFXBP(const struct FIGVFXPerkNotifyInfo& EventInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SheikGenericVFXHandler_BP.SheikGenericVFXHandler_BP_C.HandlePerkGainedNotifyVFXBP");
		
		ASheikGenericVFXHandler_BP_C_HandlePerkGainedNotifyVFXBP_Params params {};
		params.EventInfo = EventInfo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SheikGenericVFXHandler_BP.SheikGenericVFXHandler_BP_C.HandlePerkActivateNotifyVFXBP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FIGVFXPerkNotifyInfo                        EventInfo                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	 */
	void ASheikGenericVFXHandler_BP_C::HandlePerkActivateNotifyVFXBP(const struct FIGVFXPerkNotifyInfo& EventInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SheikGenericVFXHandler_BP.SheikGenericVFXHandler_BP_C.HandlePerkActivateNotifyVFXBP");
		
		ASheikGenericVFXHandler_BP_C_HandlePerkActivateNotifyVFXBP_Params params {};
		params.EventInfo = EventInfo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SheikGenericVFXHandler_BP.SheikGenericVFXHandler_BP_C.HandlePerkRemovedNotifyVFXBP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FIGVFXPerkNotifyInfo                        EventInfo                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	 */
	void ASheikGenericVFXHandler_BP_C::HandlePerkRemovedNotifyVFXBP(const struct FIGVFXPerkNotifyInfo& EventInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SheikGenericVFXHandler_BP.SheikGenericVFXHandler_BP_C.HandlePerkRemovedNotifyVFXBP");
		
		ASheikGenericVFXHandler_BP_C_HandlePerkRemovedNotifyVFXBP_Params params {};
		params.EventInfo = EventInfo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SheikGenericVFXHandler_BP.SheikGenericVFXHandler_BP_C.HandlePerkDeactivateNotifyVFXBP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FIGVFXPerkNotifyInfo                        EventInfo                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	 */
	void ASheikGenericVFXHandler_BP_C::HandlePerkDeactivateNotifyVFXBP(const struct FIGVFXPerkNotifyInfo& EventInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SheikGenericVFXHandler_BP.SheikGenericVFXHandler_BP_C.HandlePerkDeactivateNotifyVFXBP");
		
		ASheikGenericVFXHandler_BP_C_HandlePerkDeactivateNotifyVFXBP_Params params {};
		params.EventInfo = EventInfo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SheikGenericVFXHandler_BP.SheikGenericVFXHandler_BP_C.HandleFallEndNotifyVFXBP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        EventName                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FIGVFXFallEndNotifyInfo                     EventInfo                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void ASheikGenericVFXHandler_BP_C::HandleFallEndNotifyVFXBP(const class FName& EventName, const struct FIGVFXFallEndNotifyInfo& EventInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SheikGenericVFXHandler_BP.SheikGenericVFXHandler_BP_C.HandleFallEndNotifyVFXBP");
		
		ASheikGenericVFXHandler_BP_C_HandleFallEndNotifyVFXBP_Params params {};
		params.EventName = EventName;
		params.EventInfo = EventInfo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SheikGenericVFXHandler_BP.SheikGenericVFXHandler_BP_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void ASheikGenericVFXHandler_BP_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SheikGenericVFXHandler_BP.SheikGenericVFXHandler_BP_C.ReceiveBeginPlay");
		
		ASheikGenericVFXHandler_BP_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SheikGenericVFXHandler_BP.SheikGenericVFXHandler_BP_C.HandleFallTierNotifyVFXBP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FIGVFXFallTierNotifyInfo                    EventInfo                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
	 */
	void ASheikGenericVFXHandler_BP_C::HandleFallTierNotifyVFXBP(const struct FIGVFXFallTierNotifyInfo& EventInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SheikGenericVFXHandler_BP.SheikGenericVFXHandler_BP_C.HandleFallTierNotifyVFXBP");
		
		ASheikGenericVFXHandler_BP_C_HandleFallTierNotifyVFXBP_Params params {};
		params.EventInfo = EventInfo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SheikGenericVFXHandler_BP.SheikGenericVFXHandler_BP_C.HandleRemoteCharacterDisplaySecondsChangeVFXBP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Value                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AIGCharacter*                                Target                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ASheikGenericVFXHandler_BP_C::HandleRemoteCharacterDisplaySecondsChangeVFXBP(int32_t Value, class AIGCharacter* Target)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SheikGenericVFXHandler_BP.SheikGenericVFXHandler_BP_C.HandleRemoteCharacterDisplaySecondsChangeVFXBP");
		
		ASheikGenericVFXHandler_BP_C_HandleRemoteCharacterDisplaySecondsChangeVFXBP_Params params {};
		params.Value = Value;
		params.Target = Target;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SheikGenericVFXHandler_BP.SheikGenericVFXHandler_BP_C.OnEventVictoryRewarded
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      WinnerName                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		class FString                                      RewardText                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		bool                                               bLocalPlayerParticipated                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bLocalPlayerWon                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		TArray<class ASheikCharacter*>                     WinningCharacters                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void ASheikGenericVFXHandler_BP_C::OnEventVictoryRewarded(const class FString& WinnerName, const class FString& RewardText, bool bLocalPlayerParticipated, bool bLocalPlayerWon, TArray<class ASheikCharacter*> WinningCharacters)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SheikGenericVFXHandler_BP.SheikGenericVFXHandler_BP_C.OnEventVictoryRewarded");
		
		ASheikGenericVFXHandler_BP_C_OnEventVictoryRewarded_Params params {};
		params.WinnerName = WinnerName;
		params.RewardText = RewardText;
		params.bLocalPlayerParticipated = bLocalPlayerParticipated;
		params.bLocalPlayerWon = bLocalPlayerWon;
		params.WinningCharacters = WinningCharacters;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SheikGenericVFXHandler_BP.SheikGenericVFXHandler_BP_C.HandleVictimStatusNotificationBP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      Attacker                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      Victim                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		EQueuedAttackVictimStatus                          Status                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ASheikGenericVFXHandler_BP_C::HandleVictimStatusNotificationBP(class AActor* Attacker, class AActor* Victim, EQueuedAttackVictimStatus Status)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SheikGenericVFXHandler_BP.SheikGenericVFXHandler_BP_C.HandleVictimStatusNotificationBP");
		
		ASheikGenericVFXHandler_BP_C_HandleVictimStatusNotificationBP_Params params {};
		params.Attacker = Attacker;
		params.Victim = Victim;
		params.Status = Status;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SheikGenericVFXHandler_BP.SheikGenericVFXHandler_BP_C.HandleHealingNotifyVFXBP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      TargetHealed                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              HealedAmount                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ASheikGenericVFXHandler_BP_C::HandleHealingNotifyVFXBP(class AActor* TargetHealed, float HealedAmount)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SheikGenericVFXHandler_BP.SheikGenericVFXHandler_BP_C.HandleHealingNotifyVFXBP");
		
		ASheikGenericVFXHandler_BP_C_HandleHealingNotifyVFXBP_Params params {};
		params.TargetHealed = TargetHealed;
		params.HealedAmount = HealedAmount;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SheikGenericVFXHandler_BP.SheikGenericVFXHandler_BP_C.HandleResetAllFallVFXBP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      Character                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ASheikGenericVFXHandler_BP_C::HandleResetAllFallVFXBP(class AActor* Character)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SheikGenericVFXHandler_BP.SheikGenericVFXHandler_BP_C.HandleResetAllFallVFXBP");
		
		ASheikGenericVFXHandler_BP_C_HandleResetAllFallVFXBP_Params params {};
		params.Character = Character;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SheikGenericVFXHandler_BP.SheikGenericVFXHandler_BP_C.ExecuteUbergraph_SheikGenericVFXHandler_BP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ASheikGenericVFXHandler_BP_C::ExecuteUbergraph_SheikGenericVFXHandler_BP(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SheikGenericVFXHandler_BP.SheikGenericVFXHandler_BP_C.ExecuteUbergraph_SheikGenericVFXHandler_BP");
		
		ASheikGenericVFXHandler_BP_C_ExecuteUbergraph_SheikGenericVFXHandler_BP_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ASheikGenericVFXHandler_BP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ASheikGenericVFXHandler_BP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass SheikGenericVFXHandler_BP.SheikGenericVFXHandler_BP_C");
		return ptr;
	}

}


