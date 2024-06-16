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
	 * 		Name   -> Function SheikCharacterAIController_BP.SheikCharacterAIController_BP_C.IsWithinRadiusOfPathTarget
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              AcceptanceRadius                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Output                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ASheikCharacterAIController_BP_C::IsWithinRadiusOfPathTarget(float AcceptanceRadius, bool* Output)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SheikCharacterAIController_BP.SheikCharacterAIController_BP_C.IsWithinRadiusOfPathTarget");
		
		ASheikCharacterAIController_BP_C_IsWithinRadiusOfPathTarget_Params params {};
		params.AcceptanceRadius = AcceptanceRadius;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Output != nullptr)
			*Output = params.Output;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SheikCharacterAIController_BP.SheikCharacterAIController_BP_C.GetCombatPossible
	 * 		Flags  -> ()
	 */
	bool ASheikCharacterAIController_BP_C::GetCombatPossible()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SheikCharacterAIController_BP.SheikCharacterAIController_BP_C.GetCombatPossible");
		
		ASheikCharacterAIController_BP_C_GetCombatPossible_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SheikCharacterAIController_BP.SheikCharacterAIController_BP_C.IsCheckForBlockingTargetsEnabled
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               CheckForBlockingTargetsEnabled                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ASheikCharacterAIController_BP_C::IsCheckForBlockingTargetsEnabled(bool* CheckForBlockingTargetsEnabled)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SheikCharacterAIController_BP.SheikCharacterAIController_BP_C.IsCheckForBlockingTargetsEnabled");
		
		ASheikCharacterAIController_BP_C_IsCheckForBlockingTargetsEnabled_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (CheckForBlockingTargetsEnabled != nullptr)
			*CheckForBlockingTargetsEnabled = params.CheckForBlockingTargetsEnabled;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SheikCharacterAIController_BP.SheikCharacterAIController_BP_C.CheckForNewTargetBlockingPath
	 * 		Flags  -> ()
	 */
	void ASheikCharacterAIController_BP_C::CheckForNewTargetBlockingPath()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SheikCharacterAIController_BP.SheikCharacterAIController_BP_C.CheckForNewTargetBlockingPath");
		
		ASheikCharacterAIController_BP_C_CheckForNewTargetBlockingPath_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SheikCharacterAIController_BP.SheikCharacterAIController_BP_C.CheckCanSprintWhileTargetStunned
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               CanSprint                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ASheikCharacterAIController_BP_C::CheckCanSprintWhileTargetStunned(bool* CanSprint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SheikCharacterAIController_BP.SheikCharacterAIController_BP_C.CheckCanSprintWhileTargetStunned");
		
		ASheikCharacterAIController_BP_C_CheckCanSprintWhileTargetStunned_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (CanSprint != nullptr)
			*CanSprint = params.CanSprint;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SheikCharacterAIController_BP.SheikCharacterAIController_BP_C.SetTrapped
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EBotTrappedSource                                  TrappedReason                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ASheikCharacterAIController_BP_C::SetTrapped(EBotTrappedSource TrappedReason)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SheikCharacterAIController_BP.SheikCharacterAIController_BP_C.SetTrapped");
		
		ASheikCharacterAIController_BP_C_SetTrapped_Params params {};
		params.TrappedReason = TrappedReason;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SheikCharacterAIController_BP.SheikCharacterAIController_BP_C.PlaygroundBotDamaged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FIGInstanceHitData                          HitData                                                    (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 */
	void ASheikCharacterAIController_BP_C::PlaygroundBotDamaged(const struct FIGInstanceHitData& HitData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SheikCharacterAIController_BP.SheikCharacterAIController_BP_C.PlaygroundBotDamaged");
		
		ASheikCharacterAIController_BP_C_PlaygroundBotDamaged_Params params {};
		params.HitData = HitData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SheikCharacterAIController_BP.SheikCharacterAIController_BP_C.GetCharacterOTG
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ASheikCharacter*                             Character                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	bool ASheikCharacterAIController_BP_C::GetCharacterOTG(class ASheikCharacter* Character)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SheikCharacterAIController_BP.SheikCharacterAIController_BP_C.GetCharacterOTG");
		
		ASheikCharacterAIController_BP_C_GetCharacterOTG_Params params {};
		params.Character = Character;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SheikCharacterAIController_BP.SheikCharacterAIController_BP_C.IsPlaygroundBot
	 * 		Flags  -> ()
	 */
	bool ASheikCharacterAIController_BP_C::IsPlaygroundBot()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SheikCharacterAIController_BP.SheikCharacterAIController_BP_C.IsPlaygroundBot");
		
		ASheikCharacterAIController_BP_C_IsPlaygroundBot_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SheikCharacterAIController_BP.SheikCharacterAIController_BP_C.InitPlaygroundBot
	 * 		Flags  -> ()
	 */
	void ASheikCharacterAIController_BP_C::InitPlaygroundBot()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SheikCharacterAIController_BP.SheikCharacterAIController_BP_C.InitPlaygroundBot");
		
		ASheikCharacterAIController_BP_C_InitPlaygroundBot_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SheikCharacterAIController_BP.SheikCharacterAIController_BP_C.CharacterEnteredCircle
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ASheikCharacter*                             Character                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ASheikCharacterAIController_BP_C::CharacterEnteredCircle(class ASheikCharacter* Character)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SheikCharacterAIController_BP.SheikCharacterAIController_BP_C.CharacterEnteredCircle");
		
		ASheikCharacterAIController_BP_C_CharacterEnteredCircle_Params params {};
		params.Character = Character;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SheikCharacterAIController_BP.SheikCharacterAIController_BP_C.BotExitedCircle
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ASheikCharacter*                             Bot                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ASheikCharacterAIController_BP_C::BotExitedCircle(class ASheikCharacter* Bot)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SheikCharacterAIController_BP.SheikCharacterAIController_BP_C.BotExitedCircle");
		
		ASheikCharacterAIController_BP_C_BotExitedCircle_Params params {};
		params.Bot = Bot;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SheikCharacterAIController_BP.SheikCharacterAIController_BP_C.GetClosestTeammateInCombat
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ASheikCharacter*                             ClosestTeammate                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ASheikCharacterAIController_BP_C::GetClosestTeammateInCombat(class ASheikCharacter** ClosestTeammate)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SheikCharacterAIController_BP.SheikCharacterAIController_BP_C.GetClosestTeammateInCombat");
		
		ASheikCharacterAIController_BP_C_GetClosestTeammateInCombat_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ClosestTeammate != nullptr)
			*ClosestTeammate = params.ClosestTeammate;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SheikCharacterAIController_BP.SheikCharacterAIController_BP_C.GetAnyTeammateInCombat
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               TeammateInCombat                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ASheikCharacterAIController_BP_C::GetAnyTeammateInCombat(bool* TeammateInCombat)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SheikCharacterAIController_BP.SheikCharacterAIController_BP_C.GetAnyTeammateInCombat");
		
		ASheikCharacterAIController_BP_C_GetAnyTeammateInCombat_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (TeammateInCombat != nullptr)
			*TeammateInCombat = params.TeammateInCombat;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SheikCharacterAIController_BP.SheikCharacterAIController_BP_C.GetAllCharactersTargetedByTeammates
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               OnlyIncludeCombatTargets                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		TArray<class AActor*>                              TargetedCharacters                                         (Parm, OutParm)
	 */
	void ASheikCharacterAIController_BP_C::GetAllCharactersTargetedByTeammates(bool OnlyIncludeCombatTargets, TArray<class AActor*>* TargetedCharacters)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SheikCharacterAIController_BP.SheikCharacterAIController_BP_C.GetAllCharactersTargetedByTeammates");
		
		ASheikCharacterAIController_BP_C_GetAllCharactersTargetedByTeammates_Params params {};
		params.OnlyIncludeCombatTargets = OnlyIncludeCombatTargets;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (TargetedCharacters != nullptr)
			*TargetedCharacters = params.TargetedCharacters;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SheikCharacterAIController_BP.SheikCharacterAIController_BP_C.GetCurrentDestination
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                                     Destination                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ASheikCharacterAIController_BP_C::GetCurrentDestination(struct FVector* Destination)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SheikCharacterAIController_BP.SheikCharacterAIController_BP_C.GetCurrentDestination");
		
		ASheikCharacterAIController_BP_C_GetCurrentDestination_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Destination != nullptr)
			*Destination = params.Destination;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SheikCharacterAIController_BP.SheikCharacterAIController_BP_C.GetAllItemsTargetedByTeammates
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<class AActor*>                              TargetedItems                                              (Parm, OutParm)
	 */
	void ASheikCharacterAIController_BP_C::GetAllItemsTargetedByTeammates(TArray<class AActor*>* TargetedItems)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SheikCharacterAIController_BP.SheikCharacterAIController_BP_C.GetAllItemsTargetedByTeammates");
		
		ASheikCharacterAIController_BP_C_GetAllItemsTargetedByTeammates_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (TargetedItems != nullptr)
			*TargetedItems = params.TargetedItems;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SheikCharacterAIController_BP.SheikCharacterAIController_BP_C.IsTeammate
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ASheikCharacter*                             SheikCharacter                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               IncludeSelfOnTeam                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               Teammate                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ASheikCharacterAIController_BP_C::IsTeammate(class ASheikCharacter* SheikCharacter, bool IncludeSelfOnTeam, bool* Teammate)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SheikCharacterAIController_BP.SheikCharacterAIController_BP_C.IsTeammate");
		
		ASheikCharacterAIController_BP_C_IsTeammate_Params params {};
		params.SheikCharacter = SheikCharacter;
		params.IncludeSelfOnTeam = IncludeSelfOnTeam;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Teammate != nullptr)
			*Teammate = params.Teammate;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SheikCharacterAIController_BP.SheikCharacterAIController_BP_C.GetTeamLeader
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ASheikCharacter*                             TeamLeader                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	 * 		bool                                               IsSelf                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ASheikCharacterAIController_BP_C::GetTeamLeader(class ASheikCharacter** TeamLeader, bool* IsSelf)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SheikCharacterAIController_BP.SheikCharacterAIController_BP_C.GetTeamLeader");
		
		ASheikCharacterAIController_BP_C_GetTeamLeader_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (TeamLeader != nullptr)
			*TeamLeader = params.TeamLeader;
		if (IsSelf != nullptr)
			*IsSelf = params.IsSelf;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SheikCharacterAIController_BP.SheikCharacterAIController_BP_C.GetNumLivingTeammates
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               HasLivingTeammates                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            NumLivingTeammates                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ASheikCharacterAIController_BP_C::GetNumLivingTeammates(bool* HasLivingTeammates, int32_t* NumLivingTeammates)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SheikCharacterAIController_BP.SheikCharacterAIController_BP_C.GetNumLivingTeammates");
		
		ASheikCharacterAIController_BP_C_GetNumLivingTeammates_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (HasLivingTeammates != nullptr)
			*HasLivingTeammates = params.HasLivingTeammates;
		if (NumLivingTeammates != nullptr)
			*NumLivingTeammates = params.NumLivingTeammates;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SheikCharacterAIController_BP.SheikCharacterAIController_BP_C.CheckTeamBotExpected
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               TeamBotExpected                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ASheikCharacterAIController_BP_C::CheckTeamBotExpected(bool* TeamBotExpected)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SheikCharacterAIController_BP.SheikCharacterAIController_BP_C.CheckTeamBotExpected");
		
		ASheikCharacterAIController_BP_C_CheckTeamBotExpected_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (TeamBotExpected != nullptr)
			*TeamBotExpected = params.TeamBotExpected;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SheikCharacterAIController_BP.SheikCharacterAIController_BP_C.UpdateTeamLeader
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ASheikCharacter*                             NewTeamLeader                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ASheikCharacterAIController_BP_C::UpdateTeamLeader(class ASheikCharacter* NewTeamLeader)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SheikCharacterAIController_BP.SheikCharacterAIController_BP_C.UpdateTeamLeader");
		
		ASheikCharacterAIController_BP_C_UpdateTeamLeader_Params params {};
		params.NewTeamLeader = NewTeamLeader;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SheikCharacterAIController_BP.SheikCharacterAIController_BP_C.UpdateBehaviorTreeByLeaderStatus
	 * 		Flags  -> ()
	 */
	void ASheikCharacterAIController_BP_C::UpdateBehaviorTreeByLeaderStatus()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SheikCharacterAIController_BP.SheikCharacterAIController_BP_C.UpdateBehaviorTreeByLeaderStatus");
		
		ASheikCharacterAIController_BP_C_UpdateBehaviorTreeByLeaderStatus_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SheikCharacterAIController_BP.SheikCharacterAIController_BP_C.InitializeTeamLeader
	 * 		Flags  -> ()
	 */
	void ASheikCharacterAIController_BP_C::InitializeTeamLeader()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SheikCharacterAIController_BP.SheikCharacterAIController_BP_C.InitializeTeamLeader");
		
		ASheikCharacterAIController_BP_C_InitializeTeamLeader_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SheikCharacterAIController_BP.SheikCharacterAIController_BP_C.HandleTeammateDowned
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AIGCharacter*                                Victim                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ASheikCharacterAIController_BP_C::HandleTeammateDowned(class AIGCharacter* Victim)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SheikCharacterAIController_BP.SheikCharacterAIController_BP_C.HandleTeammateDowned");
		
		ASheikCharacterAIController_BP_C_HandleTeammateDowned_Params params {};
		params.Victim = Victim;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SheikCharacterAIController_BP.SheikCharacterAIController_BP_C.HandleTeammateDied
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ECauseOfDeath                                      Cause                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ASheikCharacterAIController_BP_C::HandleTeammateDied(ECauseOfDeath Cause)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SheikCharacterAIController_BP.SheikCharacterAIController_BP_C.HandleTeammateDied");
		
		ASheikCharacterAIController_BP_C_HandleTeammateDied_Params params {};
		params.Cause = Cause;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SheikCharacterAIController_BP.SheikCharacterAIController_BP_C.ChooseNewTeamLeader
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ECauseOfDeath                                      Cause                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ASheikCharacterAIController_BP_C::ChooseNewTeamLeader(ECauseOfDeath Cause)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SheikCharacterAIController_BP.SheikCharacterAIController_BP_C.ChooseNewTeamLeader");
		
		ASheikCharacterAIController_BP_C_ChooseNewTeamLeader_Params params {};
		params.Cause = Cause;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SheikCharacterAIController_BP.SheikCharacterAIController_BP_C.CheckLivingTeammates
	 * 		Flags  -> ()
	 */
	void ASheikCharacterAIController_BP_C::CheckLivingTeammates()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SheikCharacterAIController_BP.SheikCharacterAIController_BP_C.CheckLivingTeammates");
		
		ASheikCharacterAIController_BP_C_CheckLivingTeammates_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SheikCharacterAIController_BP.SheikCharacterAIController_BP_C.GetCharacterWavingAtUs
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               PlayerCharactersOnly                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class ASheikCharacter*                             WavingCharacter                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Found                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ASheikCharacterAIController_BP_C::GetCharacterWavingAtUs(bool PlayerCharactersOnly, class ASheikCharacter** WavingCharacter, bool* Found)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SheikCharacterAIController_BP.SheikCharacterAIController_BP_C.GetCharacterWavingAtUs");
		
		ASheikCharacterAIController_BP_C_GetCharacterWavingAtUs_Params params {};
		params.PlayerCharactersOnly = PlayerCharactersOnly;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (WavingCharacter != nullptr)
			*WavingCharacter = params.WavingCharacter;
		if (Found != nullptr)
			*Found = params.Found;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SheikCharacterAIController_BP.SheikCharacterAIController_BP_C.SetCurrentAction
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EBotAction                                         CurrentAction                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ASheikCharacterAIController_BP_C::SetCurrentAction(EBotAction CurrentAction)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SheikCharacterAIController_BP.SheikCharacterAIController_BP_C.SetCurrentAction");
		
		ASheikCharacterAIController_BP_C_SetCurrentAction_Params params {};
		params.CurrentAction = CurrentAction;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SheikCharacterAIController_BP.SheikCharacterAIController_BP_C.GetCurrentAction
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EBotAction                                         CurrentAction                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ASheikCharacterAIController_BP_C::GetCurrentAction(EBotAction* CurrentAction)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SheikCharacterAIController_BP.SheikCharacterAIController_BP_C.GetCurrentAction");
		
		ASheikCharacterAIController_BP_C_GetCurrentAction_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (CurrentAction != nullptr)
			*CurrentAction = params.CurrentAction;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SheikCharacterAIController_BP.SheikCharacterAIController_BP_C.GetPerceivedCharacters
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               ExcludeTeammate                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		TArray<class ASheikCharacter*>                     PerceivedCharacters                                        (Parm, OutParm)
	 */
	void ASheikCharacterAIController_BP_C::GetPerceivedCharacters(bool ExcludeTeammate, TArray<class ASheikCharacter*>* PerceivedCharacters)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SheikCharacterAIController_BP.SheikCharacterAIController_BP_C.GetPerceivedCharacters");
		
		ASheikCharacterAIController_BP_C_GetPerceivedCharacters_Params params {};
		params.ExcludeTeammate = ExcludeTeammate;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (PerceivedCharacters != nullptr)
			*PerceivedCharacters = params.PerceivedCharacters;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SheikCharacterAIController_BP.SheikCharacterAIController_BP_C.GetCanSprint
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               CanSprint                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ASheikCharacterAIController_BP_C::GetCanSprint(bool* CanSprint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SheikCharacterAIController_BP.SheikCharacterAIController_BP_C.GetCanSprint");
		
		ASheikCharacterAIController_BP_C_GetCanSprint_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (CanSprint != nullptr)
			*CanSprint = params.CanSprint;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SheikCharacterAIController_BP.SheikCharacterAIController_BP_C.UpdateSprintStatus
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               SprintStatus                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ASheikCharacterAIController_BP_C::UpdateSprintStatus(bool SprintStatus)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SheikCharacterAIController_BP.SheikCharacterAIController_BP_C.UpdateSprintStatus");
		
		ASheikCharacterAIController_BP_C_UpdateSprintStatus_Params params {};
		params.SprintStatus = SprintStatus;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SheikCharacterAIController_BP.SheikCharacterAIController_BP_C.ResetSprintStatus
	 * 		Flags  -> ()
	 */
	void ASheikCharacterAIController_BP_C::ResetSprintStatus()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SheikCharacterAIController_BP.SheikCharacterAIController_BP_C.ResetSprintStatus");
		
		ASheikCharacterAIController_BP_C_ResetSprintStatus_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SheikCharacterAIController_BP.SheikCharacterAIController_BP_C.GetDesiredSprintStatus
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               DesiredSprintStatus                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               InputChangeRequested                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ASheikCharacterAIController_BP_C::GetDesiredSprintStatus(bool* DesiredSprintStatus, bool* InputChangeRequested)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SheikCharacterAIController_BP.SheikCharacterAIController_BP_C.GetDesiredSprintStatus");
		
		ASheikCharacterAIController_BP_C_GetDesiredSprintStatus_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (DesiredSprintStatus != nullptr)
			*DesiredSprintStatus = params.DesiredSprintStatus;
		if (InputChangeRequested != nullptr)
			*InputChangeRequested = params.InputChangeRequested;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SheikCharacterAIController_BP.SheikCharacterAIController_BP_C.GetNearbyEnemyCount
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            NearbyEnemyCount                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ASheikCharacterAIController_BP_C::GetNearbyEnemyCount(int32_t* NearbyEnemyCount)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SheikCharacterAIController_BP.SheikCharacterAIController_BP_C.GetNearbyEnemyCount");
		
		ASheikCharacterAIController_BP_C_GetNearbyEnemyCount_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (NearbyEnemyCount != nullptr)
			*NearbyEnemyCount = params.NearbyEnemyCount;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SheikCharacterAIController_BP.SheikCharacterAIController_BP_C.MovementModeChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ACharacter*                                  Character                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		EMovementMode                                      PrevMovementMode                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		unsigned char                                      PreviousCustomMode                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ASheikCharacterAIController_BP_C::MovementModeChanged(class ACharacter* Character, EMovementMode PrevMovementMode, unsigned char PreviousCustomMode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SheikCharacterAIController_BP.SheikCharacterAIController_BP_C.MovementModeChanged");
		
		ASheikCharacterAIController_BP_C_MovementModeChanged_Params params {};
		params.Character = Character;
		params.PrevMovementMode = PrevMovementMode;
		params.PreviousCustomMode = PreviousCustomMode;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SheikCharacterAIController_BP.SheikCharacterAIController_BP_C.GetUsingJumpOrFallNavLink
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               UsingJumpOrFallNavLink                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ASheikCharacterAIController_BP_C::GetUsingJumpOrFallNavLink(bool* UsingJumpOrFallNavLink)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SheikCharacterAIController_BP.SheikCharacterAIController_BP_C.GetUsingJumpOrFallNavLink");
		
		ASheikCharacterAIController_BP_C_GetUsingJumpOrFallNavLink_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (UsingJumpOrFallNavLink != nullptr)
			*UsingJumpOrFallNavLink = params.UsingJumpOrFallNavLink;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SheikCharacterAIController_BP.SheikCharacterAIController_BP_C.GetInitialPassivePhaseEnded
	 * 		Flags  -> ()
	 */
	bool ASheikCharacterAIController_BP_C::GetInitialPassivePhaseEnded()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SheikCharacterAIController_BP.SheikCharacterAIController_BP_C.GetInitialPassivePhaseEnded");
		
		ASheikCharacterAIController_BP_C_GetInitialPassivePhaseEnded_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SheikCharacterAIController_BP.SheikCharacterAIController_BP_C.GetUsingClimbNavLink
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               UsingClimbNavLink                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ASheikCharacterAIController_BP_C::GetUsingClimbNavLink(bool* UsingClimbNavLink)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SheikCharacterAIController_BP.SheikCharacterAIController_BP_C.GetUsingClimbNavLink");
		
		ASheikCharacterAIController_BP_C_GetUsingClimbNavLink_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (UsingClimbNavLink != nullptr)
			*UsingClimbNavLink = params.UsingClimbNavLink;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SheikCharacterAIController_BP.SheikCharacterAIController_BP_C.IsBattleRoyaleBot
	 * 		Flags  -> ()
	 */
	bool ASheikCharacterAIController_BP_C::IsBattleRoyaleBot()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SheikCharacterAIController_BP.SheikCharacterAIController_BP_C.IsBattleRoyaleBot");
		
		ASheikCharacterAIController_BP_C_IsBattleRoyaleBot_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SheikCharacterAIController_BP.SheikCharacterAIController_BP_C.BotUsesTargeting
	 * 		Flags  -> ()
	 */
	bool ASheikCharacterAIController_BP_C::BotUsesTargeting()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SheikCharacterAIController_BP.SheikCharacterAIController_BP_C.BotUsesTargeting");
		
		ASheikCharacterAIController_BP_C_BotUsesTargeting_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SheikCharacterAIController_BP.SheikCharacterAIController_BP_C.SetLastZLocation
	 * 		Flags  -> ()
	 */
	void ASheikCharacterAIController_BP_C::SetLastZLocation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SheikCharacterAIController_BP.SheikCharacterAIController_BP_C.SetLastZLocation");
		
		ASheikCharacterAIController_BP_C_SetLastZLocation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SheikCharacterAIController_BP.SheikCharacterAIController_BP_C.BPNavArea1HandleFollowPathSegment
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UIGCharacterMovementComponent*               MoveComp                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              DeltaTime                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	bool ASheikCharacterAIController_BP_C::BPNavArea1HandleFollowPathSegment(class UIGCharacterMovementComponent* MoveComp, float DeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SheikCharacterAIController_BP.SheikCharacterAIController_BP_C.BPNavArea1HandleFollowPathSegment");
		
		ASheikCharacterAIController_BP_C_BPNavArea1HandleFollowPathSegment_Params params {};
		params.MoveComp = MoveComp;
		params.DeltaTime = DeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SheikCharacterAIController_BP.SheikCharacterAIController_BP_C.BPNavArea1HandleEnteringNavLinkSegment
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            SegmentStartIndex                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	bool ASheikCharacterAIController_BP_C::BPNavArea1HandleEnteringNavLinkSegment(int32_t SegmentStartIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SheikCharacterAIController_BP.SheikCharacterAIController_BP_C.BPNavArea1HandleEnteringNavLinkSegment");
		
		ASheikCharacterAIController_BP_C_BPNavArea1HandleEnteringNavLinkSegment_Params params {};
		params.SegmentStartIndex = SegmentStartIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SheikCharacterAIController_BP.SheikCharacterAIController_BP_C.BPNavAreaHandleEnteringEdgeNavLinkSegment
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            SegmentStartIndex                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		ESheikNavAreaFlag                                  NavLinkType                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	bool ASheikCharacterAIController_BP_C::BPNavAreaHandleEnteringEdgeNavLinkSegment(int32_t SegmentStartIndex, ESheikNavAreaFlag NavLinkType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SheikCharacterAIController_BP.SheikCharacterAIController_BP_C.BPNavAreaHandleEnteringEdgeNavLinkSegment");
		
		ASheikCharacterAIController_BP_C_BPNavAreaHandleEnteringEdgeNavLinkSegment_Params params {};
		params.SegmentStartIndex = SegmentStartIndex;
		params.NavLinkType = NavLinkType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SheikCharacterAIController_BP.SheikCharacterAIController_BP_C.UpdateSpecialHitsOTG
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EBotAttackOption                                   Special                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ASheikCharacterAIController_BP_C::UpdateSpecialHitsOTG(EBotAttackOption Special)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SheikCharacterAIController_BP.SheikCharacterAIController_BP_C.UpdateSpecialHitsOTG");
		
		ASheikCharacterAIController_BP_C_UpdateSpecialHitsOTG_Params params {};
		params.Special = Special;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SheikCharacterAIController_BP.SheikCharacterAIController_BP_C.GetClimbCompleted
	 * 		Flags  -> ()
	 */
	bool ASheikCharacterAIController_BP_C::GetClimbCompleted()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SheikCharacterAIController_BP.SheikCharacterAIController_BP_C.GetClimbCompleted");
		
		ASheikCharacterAIController_BP_C_GetClimbCompleted_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SheikCharacterAIController_BP.SheikCharacterAIController_BP_C.WanderLimitReached
	 * 		Flags  -> ()
	 */
	bool ASheikCharacterAIController_BP_C::WanderLimitReached()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SheikCharacterAIController_BP.SheikCharacterAIController_BP_C.WanderLimitReached");
		
		ASheikCharacterAIController_BP_C_WanderLimitReached_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SheikCharacterAIController_BP.SheikCharacterAIController_BP_C.SetAIPerceptionHandlingEnabled
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Enabled                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ASheikCharacterAIController_BP_C::SetAIPerceptionHandlingEnabled(bool Enabled)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SheikCharacterAIController_BP.SheikCharacterAIController_BP_C.SetAIPerceptionHandlingEnabled");
		
		ASheikCharacterAIController_BP_C_SetAIPerceptionHandlingEnabled_Params params {};
		params.Enabled = Enabled;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SheikCharacterAIController_BP.SheikCharacterAIController_BP_C.ClearAndFindNewReviveTarget
	 * 		Flags  -> ()
	 */
	void ASheikCharacterAIController_BP_C::ClearAndFindNewReviveTarget()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SheikCharacterAIController_BP.SheikCharacterAIController_BP_C.ClearAndFindNewReviveTarget");
		
		ASheikCharacterAIController_BP_C_ClearAndFindNewReviveTarget_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SheikCharacterAIController_BP.SheikCharacterAIController_BP_C.SpecialMoveEquipped
	 * 		Flags  -> ()
	 */
	void ASheikCharacterAIController_BP_C::SpecialMoveEquipped()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SheikCharacterAIController_BP.SheikCharacterAIController_BP_C.SpecialMoveEquipped");
		
		ASheikCharacterAIController_BP_C_SpecialMoveEquipped_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SheikCharacterAIController_BP.SheikCharacterAIController_BP_C.RefreshWakeUpAttackOptions
	 * 		Flags  -> ()
	 */
	void ASheikCharacterAIController_BP_C::RefreshWakeUpAttackOptions()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SheikCharacterAIController_BP.SheikCharacterAIController_BP_C.RefreshWakeUpAttackOptions");
		
		ASheikCharacterAIController_BP_C_RefreshWakeUpAttackOptions_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SheikCharacterAIController_BP.SheikCharacterAIController_BP_C.ResetTrappedVariables
	 * 		Flags  -> ()
	 */
	void ASheikCharacterAIController_BP_C::ResetTrappedVariables()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SheikCharacterAIController_BP.SheikCharacterAIController_BP_C.ResetTrappedVariables");
		
		ASheikCharacterAIController_BP_C_ResetTrappedVariables_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SheikCharacterAIController_BP.SheikCharacterAIController_BP_C.DetectTrapped
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Trapped                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ASheikCharacterAIController_BP_C::DetectTrapped(bool* Trapped)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SheikCharacterAIController_BP.SheikCharacterAIController_BP_C.DetectTrapped");
		
		ASheikCharacterAIController_BP_C_DetectTrapped_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Trapped != nullptr)
			*Trapped = params.Trapped;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SheikCharacterAIController_BP.SheikCharacterAIController_BP_C.AttemptChangeTargets
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      PotentialTarget                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ASheikCharacterAIController_BP_C::AttemptChangeTargets(class AActor* PotentialTarget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SheikCharacterAIController_BP.SheikCharacterAIController_BP_C.AttemptChangeTargets");
		
		ASheikCharacterAIController_BP_C_AttemptChangeTargets_Params params {};
		params.PotentialTarget = PotentialTarget;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SheikCharacterAIController_BP.SheikCharacterAIController_BP_C.RefreshGroundAttackOptions
	 * 		Flags  -> ()
	 */
	void ASheikCharacterAIController_BP_C::RefreshGroundAttackOptions()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SheikCharacterAIController_BP.SheikCharacterAIController_BP_C.RefreshGroundAttackOptions");
		
		ASheikCharacterAIController_BP_C_RefreshGroundAttackOptions_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SheikCharacterAIController_BP.SheikCharacterAIController_BP_C.RefreshAttackOptions
	 * 		Flags  -> ()
	 */
	void ASheikCharacterAIController_BP_C::RefreshAttackOptions()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SheikCharacterAIController_BP.SheikCharacterAIController_BP_C.RefreshAttackOptions");
		
		ASheikCharacterAIController_BP_C_RefreshAttackOptions_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SheikCharacterAIController_BP.SheikCharacterAIController_BP_C.GetMoveTier
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EBotAttackOption                                   Move                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		EMoveTier                                          Tier                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ASheikCharacterAIController_BP_C::GetMoveTier(EBotAttackOption Move, EMoveTier* Tier)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SheikCharacterAIController_BP.SheikCharacterAIController_BP_C.GetMoveTier");
		
		ASheikCharacterAIController_BP_C_GetMoveTier_Params params {};
		params.Move = Move;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Tier != nullptr)
			*Tier = params.Tier;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SheikCharacterAIController_BP.SheikCharacterAIController_BP_C.GetMoveAttackRange
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EBotAttackOption                                   Attack                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              AttackRange                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ASheikCharacterAIController_BP_C::GetMoveAttackRange(EBotAttackOption Attack, float* AttackRange)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SheikCharacterAIController_BP.SheikCharacterAIController_BP_C.GetMoveAttackRange");
		
		ASheikCharacterAIController_BP_C_GetMoveAttackRange_Params params {};
		params.Attack = Attack;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AttackRange != nullptr)
			*AttackRange = params.AttackRange;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SheikCharacterAIController_BP.SheikCharacterAIController_BP_C.GetMontageAttackRange
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UIGMoveMontage*                              Montage                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               RangeFound                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              AttackRange                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ASheikCharacterAIController_BP_C::GetMontageAttackRange(class UIGMoveMontage* Montage, bool* RangeFound, float* AttackRange)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SheikCharacterAIController_BP.SheikCharacterAIController_BP_C.GetMontageAttackRange");
		
		ASheikCharacterAIController_BP_C_GetMontageAttackRange_Params params {};
		params.Montage = Montage;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (RangeFound != nullptr)
			*RangeFound = params.RangeFound;
		if (AttackRange != nullptr)
			*AttackRange = params.AttackRange;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SheikCharacterAIController_BP.SheikCharacterAIController_BP_C.GetComboStringInitialAttackRange
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FIGBotComboString                           IGBotComboString                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		float                                              AttackRange                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ASheikCharacterAIController_BP_C::GetComboStringInitialAttackRange(const struct FIGBotComboString& IGBotComboString, float* AttackRange)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SheikCharacterAIController_BP.SheikCharacterAIController_BP_C.GetComboStringInitialAttackRange");
		
		ASheikCharacterAIController_BP_C_GetComboStringInitialAttackRange_Params params {};
		params.IGBotComboString = IGBotComboString;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AttackRange != nullptr)
			*AttackRange = params.AttackRange;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SheikCharacterAIController_BP.SheikCharacterAIController_BP_C.ChooseWeaponAttack
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               AttackChosen                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FIGBotComboString                           Attack                                                     (Parm, OutParm)
	 * 		float                                              AttackRange                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ASheikCharacterAIController_BP_C::ChooseWeaponAttack(bool* AttackChosen, struct FIGBotComboString* Attack, float* AttackRange)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SheikCharacterAIController_BP.SheikCharacterAIController_BP_C.ChooseWeaponAttack");
		
		ASheikCharacterAIController_BP_C_ChooseWeaponAttack_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AttackChosen != nullptr)
			*AttackChosen = params.AttackChosen;
		if (Attack != nullptr)
			*Attack = params.Attack;
		if (AttackRange != nullptr)
			*AttackRange = params.AttackRange;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SheikCharacterAIController_BP.SheikCharacterAIController_BP_C.ChooseWakeUpAttack
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EBotAttackOption                                   Attack                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ASheikCharacterAIController_BP_C::ChooseWakeUpAttack(EBotAttackOption* Attack)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SheikCharacterAIController_BP.SheikCharacterAIController_BP_C.ChooseWakeUpAttack");
		
		ASheikCharacterAIController_BP_C_ChooseWakeUpAttack_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Attack != nullptr)
			*Attack = params.Attack;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SheikCharacterAIController_BP.SheikCharacterAIController_BP_C.ChooseAttack
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               TargetKnockedDown                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		EBotAttackOption                                   ChosenAttack                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              AttackRange                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ASheikCharacterAIController_BP_C::ChooseAttack(bool TargetKnockedDown, EBotAttackOption* ChosenAttack, float* AttackRange)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SheikCharacterAIController_BP.SheikCharacterAIController_BP_C.ChooseAttack");
		
		ASheikCharacterAIController_BP_C_ChooseAttack_Params params {};
		params.TargetKnockedDown = TargetKnockedDown;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ChosenAttack != nullptr)
			*ChosenAttack = params.ChosenAttack;
		if (AttackRange != nullptr)
			*AttackRange = params.AttackRange;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SheikCharacterAIController_BP.SheikCharacterAIController_BP_C.CheckAttackStillValid
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EBotAttackOption                                   Attack                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               TargetKnockedDown                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool ASheikCharacterAIController_BP_C::CheckAttackStillValid(EBotAttackOption Attack, bool TargetKnockedDown)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SheikCharacterAIController_BP.SheikCharacterAIController_BP_C.CheckAttackStillValid");
		
		ASheikCharacterAIController_BP_C_CheckAttackStillValid_Params params {};
		params.Attack = Attack;
		params.TargetKnockedDown = TargetKnockedDown;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SheikCharacterAIController_BP.SheikCharacterAIController_BP_C.AttackExecuted
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EBotAttackOption                                   Attack                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               IsWakeUpAttack                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ASheikCharacterAIController_BP_C::AttackExecuted(EBotAttackOption Attack, bool IsWakeUpAttack)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SheikCharacterAIController_BP.SheikCharacterAIController_BP_C.AttackExecuted");
		
		ASheikCharacterAIController_BP_C_AttackExecuted_Params params {};
		params.Attack = Attack;
		params.IsWakeUpAttack = IsWakeUpAttack;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SheikCharacterAIController_BP.SheikCharacterAIController_BP_C.ReleaseAndClearTargetItem
	 * 		Flags  -> ()
	 */
	void ASheikCharacterAIController_BP_C::ReleaseAndClearTargetItem()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SheikCharacterAIController_BP.SheikCharacterAIController_BP_C.ReleaseAndClearTargetItem");
		
		ASheikCharacterAIController_BP_C_ReleaseAndClearTargetItem_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SheikCharacterAIController_BP.SheikCharacterAIController_BP_C.UpdateFreefallDistanceThreshold
	 * 		Flags  -> ()
	 */
	void ASheikCharacterAIController_BP_C::UpdateFreefallDistanceThreshold()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SheikCharacterAIController_BP.SheikCharacterAIController_BP_C.UpdateFreefallDistanceThreshold");
		
		ASheikCharacterAIController_BP_C_UpdateFreefallDistanceThreshold_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SheikCharacterAIController_BP.SheikCharacterAIController_BP_C.CompareToCurrentTarget
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      PotentialTarget                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               PotentialIsBetter                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ASheikCharacterAIController_BP_C::CompareToCurrentTarget(class AActor* PotentialTarget, bool* PotentialIsBetter)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SheikCharacterAIController_BP.SheikCharacterAIController_BP_C.CompareToCurrentTarget");
		
		ASheikCharacterAIController_BP_C_CompareToCurrentTarget_Params params {};
		params.PotentialTarget = PotentialTarget;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (PotentialIsBetter != nullptr)
			*PotentialIsBetter = params.PotentialIsBetter;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SheikCharacterAIController_BP.SheikCharacterAIController_BP_C.GetCharacterSensed
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      Character                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               CurrentlySeen                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               RecentlySeen                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ASheikCharacterAIController_BP_C::GetCharacterSensed(class AActor* Character, bool* CurrentlySeen, bool* RecentlySeen)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SheikCharacterAIController_BP.SheikCharacterAIController_BP_C.GetCharacterSensed");
		
		ASheikCharacterAIController_BP_C_GetCharacterSensed_Params params {};
		params.Character = Character;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (CurrentlySeen != nullptr)
			*CurrentlySeen = params.CurrentlySeen;
		if (RecentlySeen != nullptr)
			*RecentlySeen = params.RecentlySeen;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SheikCharacterAIController_BP.SheikCharacterAIController_BP_C.IsVictimSmokeBot
	 * 		Flags  -> ()
	 */
	bool ASheikCharacterAIController_BP_C::IsVictimSmokeBot()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SheikCharacterAIController_BP.SheikCharacterAIController_BP_C.IsVictimSmokeBot");
		
		ASheikCharacterAIController_BP_C_IsVictimSmokeBot_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SheikCharacterAIController_BP.SheikCharacterAIController_BP_C.IsSmokeBot
	 * 		Flags  -> ()
	 */
	bool ASheikCharacterAIController_BP_C::IsSmokeBot()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SheikCharacterAIController_BP.SheikCharacterAIController_BP_C.IsSmokeBot");
		
		ASheikCharacterAIController_BP_C_IsSmokeBot_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SheikCharacterAIController_BP.SheikCharacterAIController_BP_C.IsClimberSmokeBot
	 * 		Flags  -> ()
	 */
	bool ASheikCharacterAIController_BP_C::IsClimberSmokeBot()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SheikCharacterAIController_BP.SheikCharacterAIController_BP_C.IsClimberSmokeBot");
		
		ASheikCharacterAIController_BP_C_IsClimberSmokeBot_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SheikCharacterAIController_BP.SheikCharacterAIController_BP_C.IsAttackerSmokeBot
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Striker                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool ASheikCharacterAIController_BP_C::IsAttackerSmokeBot(bool* Striker)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SheikCharacterAIController_BP.SheikCharacterAIController_BP_C.IsAttackerSmokeBot");
		
		ASheikCharacterAIController_BP_C_IsAttackerSmokeBot_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Striker != nullptr)
			*Striker = params.Striker;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SheikCharacterAIController_BP.SheikCharacterAIController_BP_C.UpdateHasSpecialMoves
	 * 		Flags  -> ()
	 */
	void ASheikCharacterAIController_BP_C::UpdateHasSpecialMoves()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SheikCharacterAIController_BP.SheikCharacterAIController_BP_C.UpdateHasSpecialMoves");
		
		ASheikCharacterAIController_BP_C_UpdateHasSpecialMoves_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SheikCharacterAIController_BP.SheikCharacterAIController_BP_C.LookForWall
	 * 		Flags  -> ()
	 */
	void ASheikCharacterAIController_BP_C::LookForWall()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SheikCharacterAIController_BP.SheikCharacterAIController_BP_C.LookForWall");
		
		ASheikCharacterAIController_BP_C_LookForWall_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SheikCharacterAIController_BP.SheikCharacterAIController_BP_C.LookForAttackVictim
	 * 		Flags  -> ()
	 */
	void ASheikCharacterAIController_BP_C::LookForAttackVictim()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SheikCharacterAIController_BP.SheikCharacterAIController_BP_C.LookForAttackVictim");
		
		ASheikCharacterAIController_BP_C_LookForAttackVictim_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SheikCharacterAIController_BP.SheikCharacterAIController_BP_C.InitSmokeBot
	 * 		Flags  -> ()
	 */
	void ASheikCharacterAIController_BP_C::InitSmokeBot()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SheikCharacterAIController_BP.SheikCharacterAIController_BP_C.InitSmokeBot");
		
		ASheikCharacterAIController_BP_C_InitSmokeBot_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SheikCharacterAIController_BP.SheikCharacterAIController_BP_C.FindTargetForSmokeBot
	 * 		Flags  -> ()
	 */
	void ASheikCharacterAIController_BP_C::FindTargetForSmokeBot()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SheikCharacterAIController_BP.SheikCharacterAIController_BP_C.FindTargetForSmokeBot");
		
		ASheikCharacterAIController_BP_C_FindTargetForSmokeBot_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SheikCharacterAIController_BP.SheikCharacterAIController_BP_C.UpdateTargetActor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ASheikCharacter*                             TargetActor                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ASheikCharacterAIController_BP_C::UpdateTargetActor(class ASheikCharacter* TargetActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SheikCharacterAIController_BP.SheikCharacterAIController_BP_C.UpdateTargetActor");
		
		ASheikCharacterAIController_BP_C_UpdateTargetActor_Params params {};
		params.TargetActor = TargetActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SheikCharacterAIController_BP.SheikCharacterAIController_BP_C.UpdateDamagedFlag
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Damaged                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ASheikCharacterAIController_BP_C::UpdateDamagedFlag(bool Damaged)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SheikCharacterAIController_BP.SheikCharacterAIController_BP_C.UpdateDamagedFlag");
		
		ASheikCharacterAIController_BP_C_UpdateDamagedFlag_Params params {};
		params.Damaged = Damaged;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SheikCharacterAIController_BP.SheikCharacterAIController_BP_C.CharacterDamaged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FIGInstanceHitData                          HitData                                                    (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 */
	void ASheikCharacterAIController_BP_C::CharacterDamaged(const struct FIGInstanceHitData& HitData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SheikCharacterAIController_BP.SheikCharacterAIController_BP_C.CharacterDamaged");
		
		ASheikCharacterAIController_BP_C_CharacterDamaged_Params params {};
		params.HitData = HitData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SheikCharacterAIController_BP.SheikCharacterAIController_BP_C.ReceivePossess
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class APawn*                                       PossessedPawn                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ASheikCharacterAIController_BP_C::ReceivePossess(class APawn* PossessedPawn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SheikCharacterAIController_BP.SheikCharacterAIController_BP_C.ReceivePossess");
		
		ASheikCharacterAIController_BP_C_ReceivePossess_Params params {};
		params.PossessedPawn = PossessedPawn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SheikCharacterAIController_BP.SheikCharacterAIController_BP_C.ReceiveTick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ASheikCharacterAIController_BP_C::ReceiveTick(float DeltaSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SheikCharacterAIController_BP.SheikCharacterAIController_BP_C.ReceiveTick");
		
		ASheikCharacterAIController_BP_C_ReceiveTick_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SheikCharacterAIController_BP.SheikCharacterAIController_BP_C.OnFreeFallEnabled
	 * 		Flags  -> ()
	 */
	void ASheikCharacterAIController_BP_C::OnFreeFallEnabled()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SheikCharacterAIController_BP.SheikCharacterAIController_BP_C.OnFreeFallEnabled");
		
		ASheikCharacterAIController_BP_C_OnFreeFallEnabled_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SheikCharacterAIController_BP.SheikCharacterAIController_BP_C.ReceiveUnPossess
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class APawn*                                       UnpossessedPawn                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ASheikCharacterAIController_BP_C::ReceiveUnPossess(class APawn* UnpossessedPawn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SheikCharacterAIController_BP.SheikCharacterAIController_BP_C.ReceiveUnPossess");
		
		ASheikCharacterAIController_BP_C_ReceiveUnPossess_Params params {};
		params.UnpossessedPawn = UnpossessedPawn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SheikCharacterAIController_BP.SheikCharacterAIController_BP_C.BPOnAttackResultDetermined
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EQueuedAttackResult                                AttackResult                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      AttackedActor                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ASheikCharacterAIController_BP_C::BPOnAttackResultDetermined(EQueuedAttackResult AttackResult, class AActor* AttackedActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SheikCharacterAIController_BP.SheikCharacterAIController_BP_C.BPOnAttackResultDetermined");
		
		ASheikCharacterAIController_BP_C_BPOnAttackResultDetermined_Params params {};
		params.AttackResult = AttackResult;
		params.AttackedActor = AttackedActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SheikCharacterAIController_BP.SheikCharacterAIController_BP_C.BPOnMoveMontageFinished
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UAnimMontage*                                MoveMontage                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bInterrupted                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ASheikCharacterAIController_BP_C::BPOnMoveMontageFinished(class UAnimMontage* MoveMontage, bool bInterrupted)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SheikCharacterAIController_BP.SheikCharacterAIController_BP_C.BPOnMoveMontageFinished");
		
		ASheikCharacterAIController_BP_C_BPOnMoveMontageFinished_Params params {};
		params.MoveMontage = MoveMontage;
		params.bInterrupted = bInterrupted;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SheikCharacterAIController_BP.SheikCharacterAIController_BP_C.OnCharacterInputToggled
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bIsEnabled                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ASheikCharacterAIController_BP_C::OnCharacterInputToggled(bool bIsEnabled)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SheikCharacterAIController_BP.SheikCharacterAIController_BP_C.OnCharacterInputToggled");
		
		ASheikCharacterAIController_BP_C_OnCharacterInputToggled_Params params {};
		params.bIsEnabled = bIsEnabled;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SheikCharacterAIController_BP.SheikCharacterAIController_BP_C.On Target Perception Updated
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      Actor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FAIStimulus                                 Stimulus                                                   (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 */
	void ASheikCharacterAIController_BP_C::OnTargetPerceptionUpdated(class AActor* Actor, const struct FAIStimulus& Stimulus)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SheikCharacterAIController_BP.SheikCharacterAIController_BP_C.On Target Perception Updated");
		
		ASheikCharacterAIController_BP_C_OnTargetPerceptionUpdated_Params params {};
		params.Actor = Actor;
		params.Stimulus = Stimulus;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SheikCharacterAIController_BP.SheikCharacterAIController_BP_C.OnSpringboardLaunched
	 * 		Flags  -> ()
	 */
	void ASheikCharacterAIController_BP_C::OnSpringboardLaunched()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SheikCharacterAIController_BP.SheikCharacterAIController_BP_C.OnSpringboardLaunched");
		
		ASheikCharacterAIController_BP_C_OnSpringboardLaunched_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SheikCharacterAIController_BP.SheikCharacterAIController_BP_C.BPOnWakeupWindowStarted
	 * 		Flags  -> ()
	 */
	void ASheikCharacterAIController_BP_C::BPOnWakeupWindowStarted()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SheikCharacterAIController_BP.SheikCharacterAIController_BP_C.BPOnWakeupWindowStarted");
		
		ASheikCharacterAIController_BP_C_BPOnWakeupWindowStarted_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SheikCharacterAIController_BP.SheikCharacterAIController_BP_C.PostTeleport
	 * 		Flags  -> ()
	 */
	void ASheikCharacterAIController_BP_C::PostTeleport()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SheikCharacterAIController_BP.SheikCharacterAIController_BP_C.PostTeleport");
		
		ASheikCharacterAIController_BP_C_PostTeleport_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SheikCharacterAIController_BP.SheikCharacterAIController_BP_C.ExecuteUbergraph_SheikCharacterAIController_BP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ASheikCharacterAIController_BP_C::ExecuteUbergraph_SheikCharacterAIController_BP(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SheikCharacterAIController_BP.SheikCharacterAIController_BP_C.ExecuteUbergraph_SheikCharacterAIController_BP");
		
		ASheikCharacterAIController_BP_C_ExecuteUbergraph_SheikCharacterAIController_BP_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SheikCharacterAIController_BP.SheikCharacterAIController_BP_C.TeamLeaderReplaced__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ASheikCharacter*                             NewTeamLeader                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ASheikCharacterAIController_BP_C::TeamLeaderReplaced__DelegateSignature(class ASheikCharacter* NewTeamLeader)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SheikCharacterAIController_BP.SheikCharacterAIController_BP_C.TeamLeaderReplaced__DelegateSignature");
		
		ASheikCharacterAIController_BP_C_TeamLeaderReplaced__DelegateSignature_Params params {};
		params.NewTeamLeader = NewTeamLeader;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SheikCharacterAIController_BP.SheikCharacterAIController_BP_C.MoveMontageEnded__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Interrupted                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ASheikCharacterAIController_BP_C::MoveMontageEnded__DelegateSignature(bool Interrupted)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SheikCharacterAIController_BP.SheikCharacterAIController_BP_C.MoveMontageEnded__DelegateSignature");
		
		ASheikCharacterAIController_BP_C_MoveMontageEnded__DelegateSignature_Params params {};
		params.Interrupted = Interrupted;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ASheikCharacterAIController_BP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ASheikCharacterAIController_BP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass SheikCharacterAIController_BP.SheikCharacterAIController_BP_C");
		return ptr;
	}

}


