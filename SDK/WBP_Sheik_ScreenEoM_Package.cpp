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
	 * 		Name   -> Function WBP_Sheik_ScreenEoM.WBP_Sheik_ScreenEOM_C.SequenceEvent__ENTRYPOINTWBP_Sheik_ScreenEOM_1
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_ScreenEOM_C::SequenceEvent__ENTRYPOINTWBP_Sheik_ScreenEOM_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_ScreenEoM.WBP_Sheik_ScreenEOM_C.SequenceEvent__ENTRYPOINTWBP_Sheik_ScreenEOM_1");
		
		UWBP_Sheik_ScreenEOM_C_SequenceEvent__ENTRYPOINTWBP_Sheik_ScreenEOM_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_ScreenEoM.WBP_Sheik_ScreenEOM_C.RefreshVoiceChatWidgets
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_ScreenEOM_C::RefreshVoiceChatWidgets()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_ScreenEoM.WBP_Sheik_ScreenEOM_C.RefreshVoiceChatWidgets");
		
		UWBP_Sheik_ScreenEOM_C_RefreshVoiceChatWidgets_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_ScreenEoM.WBP_Sheik_ScreenEOM_C.UpdateVoiceChatDelegates
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Subscribe                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_Sheik_ScreenEOM_C::UpdateVoiceChatDelegates(bool Subscribe)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_ScreenEoM.WBP_Sheik_ScreenEOM_C.UpdateVoiceChatDelegates");
		
		UWBP_Sheik_ScreenEOM_C_UpdateVoiceChatDelegates_Params params {};
		params.Subscribe = Subscribe;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_ScreenEoM.WBP_Sheik_ScreenEOM_C.OnVoiceChatMuteListChanged
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_ScreenEOM_C::OnVoiceChatMuteListChanged()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_ScreenEoM.WBP_Sheik_ScreenEOM_C.OnVoiceChatMuteListChanged");
		
		UWBP_Sheik_ScreenEOM_C_OnVoiceChatMuteListChanged_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_ScreenEoM.WBP_Sheik_ScreenEOM_C.UpdateSpecatorHudSubscription
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_ScreenEOM_C::UpdateSpecatorHudSubscription()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_ScreenEoM.WBP_Sheik_ScreenEOM_C.UpdateSpecatorHudSubscription");
		
		UWBP_Sheik_ScreenEOM_C_UpdateSpecatorHudSubscription_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_ScreenEoM.WBP_Sheik_ScreenEOM_C.PlayChampionNotification
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_ScreenEOM_C::PlayChampionNotification()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_ScreenEoM.WBP_Sheik_ScreenEOM_C.PlayChampionNotification");
		
		UWBP_Sheik_ScreenEOM_C_PlayChampionNotification_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_ScreenEoM.WBP_Sheik_ScreenEOM_C.OnMuteAllPressed
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FInputEventData                             InputEventData                                             (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UWBP_Sheik_ScreenEOM_C::OnMuteAllPressed(const struct FInputEventData& InputEventData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_ScreenEoM.WBP_Sheik_ScreenEOM_C.OnMuteAllPressed");
		
		UWBP_Sheik_ScreenEOM_C_OnMuteAllPressed_Params params {};
		params.InputEventData = InputEventData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_ScreenEoM.WBP_Sheik_ScreenEOM_C.IsInRestrictedMatch
	 * 		Flags  -> ()
	 */
	bool UWBP_Sheik_ScreenEOM_C::IsInRestrictedMatch()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_ScreenEoM.WBP_Sheik_ScreenEOM_C.IsInRestrictedMatch");
		
		UWBP_Sheik_ScreenEOM_C_IsInRestrictedMatch_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_ScreenEoM.WBP_Sheik_ScreenEOM_C.GetPlayerPlatformIcon
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class APlayerState*                                PlayerState                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FText                                        PlatformIcon                                               (Parm, OutParm)
	 */
	void UWBP_Sheik_ScreenEOM_C::GetPlayerPlatformIcon(class APlayerState* PlayerState, class FText* PlatformIcon)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_ScreenEoM.WBP_Sheik_ScreenEOM_C.GetPlayerPlatformIcon");
		
		UWBP_Sheik_ScreenEOM_C_GetPlayerPlatformIcon_Params params {};
		params.PlayerState = PlayerState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (PlatformIcon != nullptr)
			*PlatformIcon = params.PlatformIcon;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_ScreenEoM.WBP_Sheik_ScreenEOM_C.SetMutePromptText
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsAllMuted                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_Sheik_ScreenEOM_C::SetMutePromptText(bool IsAllMuted)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_ScreenEoM.WBP_Sheik_ScreenEOM_C.SetMutePromptText");
		
		UWBP_Sheik_ScreenEOM_C_SetMutePromptText_Params params {};
		params.IsAllMuted = IsAllMuted;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_ScreenEoM.WBP_Sheik_ScreenEOM_C.HasVoiceChatPermissions
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               HasPermissions                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_Sheik_ScreenEOM_C::HasVoiceChatPermissions(bool* HasPermissions)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_ScreenEoM.WBP_Sheik_ScreenEOM_C.HasVoiceChatPermissions");
		
		UWBP_Sheik_ScreenEOM_C_HasVoiceChatPermissions_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (HasPermissions != nullptr)
			*HasPermissions = params.HasPermissions;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_ScreenEoM.WBP_Sheik_ScreenEOM_C.OnSocialMenuPressed
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FInputEventData                             InputEventData                                             (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UWBP_Sheik_ScreenEOM_C::OnSocialMenuPressed(const struct FInputEventData& InputEventData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_ScreenEoM.WBP_Sheik_ScreenEOM_C.OnSocialMenuPressed");
		
		UWBP_Sheik_ScreenEOM_C_OnSocialMenuPressed_Params params {};
		params.InputEventData = InputEventData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_ScreenEoM.WBP_Sheik_ScreenEOM_C.SetupSocialInputSubscriptions
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_ScreenEOM_C::SetupSocialInputSubscriptions()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_ScreenEoM.WBP_Sheik_ScreenEOM_C.SetupSocialInputSubscriptions");
		
		UWBP_Sheik_ScreenEOM_C_SetupSocialInputSubscriptions_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_ScreenEoM.WBP_Sheik_ScreenEOM_C.GetPlayerStateThatKilledMe
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_ScreenEOM_C::GetPlayerStateThatKilledMe()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_ScreenEoM.WBP_Sheik_ScreenEOM_C.GetPlayerStateThatKilledMe");
		
		UWBP_Sheik_ScreenEOM_C_GetPlayerStateThatKilledMe_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_ScreenEoM.WBP_Sheik_ScreenEOM_C.OnTeammateLeftServer
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AIGPlayerState*                              ExitingTeammate                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_ScreenEOM_C::OnTeammateLeftServer(class AIGPlayerState* ExitingTeammate)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_ScreenEoM.WBP_Sheik_ScreenEOM_C.OnTeammateLeftServer");
		
		UWBP_Sheik_ScreenEOM_C_OnTeammateLeftServer_Params params {};
		params.ExitingTeammate = ExitingTeammate;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_ScreenEoM.WBP_Sheik_ScreenEOM_C.Set Clout Sounds Playback
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bShouldPlaySound                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_Sheik_ScreenEOM_C::SetCloutSoundsPlayback(bool bShouldPlaySound)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_ScreenEoM.WBP_Sheik_ScreenEOM_C.Set Clout Sounds Playback");
		
		UWBP_Sheik_ScreenEOM_C_SetCloutSoundsPlayback_Params params {};
		params.bShouldPlaySound = bShouldPlaySound;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_ScreenEoM.WBP_Sheik_ScreenEOM_C.ShouldShowTitleCard
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               ShouldShowTitleCard                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_Sheik_ScreenEOM_C::ShouldShowTitleCard(bool* ShouldShowTitleCard)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_ScreenEoM.WBP_Sheik_ScreenEOM_C.ShouldShowTitleCard");
		
		UWBP_Sheik_ScreenEOM_C_ShouldShowTitleCard_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ShouldShowTitleCard != nullptr)
			*ShouldShowTitleCard = params.ShouldShowTitleCard;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_ScreenEoM.WBP_Sheik_ScreenEOM_C.SkipSequence-BattlePass
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_ScreenEOM_C::SkipSequenceBattlePass()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_ScreenEoM.WBP_Sheik_ScreenEOM_C.SkipSequence-BattlePass");
		
		UWBP_Sheik_ScreenEOM_C_SkipSequenceBattlePass_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_ScreenEoM.WBP_Sheik_ScreenEOM_C.SkipSequence-FanMail
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_ScreenEOM_C::SkipSequenceFanMail()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_ScreenEoM.WBP_Sheik_ScreenEOM_C.SkipSequence-FanMail");
		
		UWBP_Sheik_ScreenEOM_C_SkipSequenceFanMail_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_ScreenEoM.WBP_Sheik_ScreenEOM_C.OnSkipSequencePressed
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FInputEventData                             InputEventData                                             (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UWBP_Sheik_ScreenEOM_C::OnSkipSequencePressed(const struct FInputEventData& InputEventData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_ScreenEoM.WBP_Sheik_ScreenEOM_C.OnSkipSequencePressed");
		
		UWBP_Sheik_ScreenEOM_C_OnSkipSequencePressed_Params params {};
		params.InputEventData = InputEventData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_ScreenEoM.WBP_Sheik_ScreenEOM_C.OnChallengesAnimsCompleted
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_ScreenEOM_C::OnChallengesAnimsCompleted()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_ScreenEoM.WBP_Sheik_ScreenEOM_C.OnChallengesAnimsCompleted");
		
		UWBP_Sheik_ScreenEOM_C_OnChallengesAnimsCompleted_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_ScreenEoM.WBP_Sheik_ScreenEOM_C.BindMatchmakingCallbacks
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_ScreenEOM_C::BindMatchmakingCallbacks()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_ScreenEoM.WBP_Sheik_ScreenEOM_C.BindMatchmakingCallbacks");
		
		UWBP_Sheik_ScreenEOM_C_BindMatchmakingCallbacks_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_ScreenEoM.WBP_Sheik_ScreenEOM_C.SetKeyVariables
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_ScreenEOM_C::SetKeyVariables()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_ScreenEoM.WBP_Sheik_ScreenEOM_C.SetKeyVariables");
		
		UWBP_Sheik_ScreenEOM_C_SetKeyVariables_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_ScreenEoM.WBP_Sheik_ScreenEOM_C.CleanupNonleaderHotfixCallbacks
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_ScreenEOM_C::CleanupNonleaderHotfixCallbacks()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_ScreenEoM.WBP_Sheik_ScreenEOM_C.CleanupNonleaderHotfixCallbacks");
		
		UWBP_Sheik_ScreenEOM_C_CleanupNonleaderHotfixCallbacks_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_ScreenEoM.WBP_Sheik_ScreenEOM_C.CleanupLeaderHotfixCallbacks
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_ScreenEOM_C::CleanupLeaderHotfixCallbacks()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_ScreenEoM.WBP_Sheik_ScreenEOM_C.CleanupLeaderHotfixCallbacks");
		
		UWBP_Sheik_ScreenEOM_C_CleanupLeaderHotfixCallbacks_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_ScreenEoM.WBP_Sheik_ScreenEOM_C.SyncPartyToHotfixVersion
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_ScreenEOM_C::SyncPartyToHotfixVersion()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_ScreenEoM.WBP_Sheik_ScreenEOM_C.SyncPartyToHotfixVersion");
		
		UWBP_Sheik_ScreenEOM_C_SyncPartyToHotfixVersion_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_ScreenEoM.WBP_Sheik_ScreenEOM_C.FinishDeferredHotfixCheck
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_ScreenEOM_C::FinishDeferredHotfixCheck()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_ScreenEoM.WBP_Sheik_ScreenEOM_C.FinishDeferredHotfixCheck");
		
		UWBP_Sheik_ScreenEOM_C_FinishDeferredHotfixCheck_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_ScreenEoM.WBP_Sheik_ScreenEOM_C.HandleHotfixCallback
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bShouldStartMatchmaking                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_Sheik_ScreenEOM_C::HandleHotfixCallback(bool bShouldStartMatchmaking)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_ScreenEoM.WBP_Sheik_ScreenEOM_C.HandleHotfixCallback");
		
		UWBP_Sheik_ScreenEOM_C_HandleHotfixCallback_Params params {};
		params.bShouldStartMatchmaking = bShouldStartMatchmaking;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_ScreenEoM.WBP_Sheik_ScreenEOM_C.StartMatchmaking
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_ScreenEOM_C::StartMatchmaking()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_ScreenEoM.WBP_Sheik_ScreenEOM_C.StartMatchmaking");
		
		UWBP_Sheik_ScreenEOM_C_StartMatchmaking_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_ScreenEoM.WBP_Sheik_ScreenEOM_C.UpdateChallengesVisual
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_ScreenEOM_C::UpdateChallengesVisual()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_ScreenEoM.WBP_Sheik_ScreenEOM_C.UpdateChallengesVisual");
		
		UWBP_Sheik_ScreenEOM_C_UpdateChallengesVisual_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_ScreenEoM.WBP_Sheik_ScreenEOM_C.UpdateFanMailVisual
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               EOMSkip                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_Sheik_ScreenEOM_C::UpdateFanMailVisual(bool EOMSkip)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_ScreenEoM.WBP_Sheik_ScreenEOM_C.UpdateFanMailVisual");
		
		UWBP_Sheik_ScreenEOM_C_UpdateFanMailVisual_Params params {};
		params.EOMSkip = EOMSkip;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_ScreenEoM.WBP_Sheik_ScreenEOM_C.CheckIfPartyOfOne
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               PlayerIsPartyOfOne                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_Sheik_ScreenEOM_C::CheckIfPartyOfOne(bool* PlayerIsPartyOfOne)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_ScreenEoM.WBP_Sheik_ScreenEOM_C.CheckIfPartyOfOne");
		
		UWBP_Sheik_ScreenEOM_C_CheckIfPartyOfOne_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (PlayerIsPartyOfOne != nullptr)
			*PlayerIsPartyOfOne = params.PlayerIsPartyOfOne;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_ScreenEoM.WBP_Sheik_ScreenEOM_C.CheckIfPartiedTeammatesAreStillPlaying
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               PartiedTeammatesAreStillPlaying                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_Sheik_ScreenEOM_C::CheckIfPartiedTeammatesAreStillPlaying(bool* PartiedTeammatesAreStillPlaying)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_ScreenEoM.WBP_Sheik_ScreenEOM_C.CheckIfPartiedTeammatesAreStillPlaying");
		
		UWBP_Sheik_ScreenEOM_C_CheckIfPartiedTeammatesAreStillPlaying_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (PartiedTeammatesAreStillPlaying != nullptr)
			*PartiedTeammatesAreStillPlaying = params.PartiedTeammatesAreStillPlaying;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_ScreenEoM.WBP_Sheik_ScreenEOM_C.CheckIfPartiedButNotLeader
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsPartiedButNotLeader                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_Sheik_ScreenEOM_C::CheckIfPartiedButNotLeader(bool* IsPartiedButNotLeader)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_ScreenEoM.WBP_Sheik_ScreenEOM_C.CheckIfPartiedButNotLeader");
		
		UWBP_Sheik_ScreenEOM_C_CheckIfPartiedButNotLeader_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (IsPartiedButNotLeader != nullptr)
			*IsPartiedButNotLeader = params.IsPartiedButNotLeader;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_ScreenEoM.WBP_Sheik_ScreenEOM_C.UpdateMatchmakingPromptLabels
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_ScreenEOM_C::UpdateMatchmakingPromptLabels()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_ScreenEoM.WBP_Sheik_ScreenEOM_C.UpdateMatchmakingPromptLabels");
		
		UWBP_Sheik_ScreenEOM_C_UpdateMatchmakingPromptLabels_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_ScreenEoM.WBP_Sheik_ScreenEOM_C.GetMatchType
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      MatchConfig                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		class FText                                        NewParam                                                   (Parm, OutParm)
	 */
	void UWBP_Sheik_ScreenEOM_C::GetMatchType(const class FString& MatchConfig, class FText* NewParam)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_ScreenEoM.WBP_Sheik_ScreenEOM_C.GetMatchType");
		
		UWBP_Sheik_ScreenEOM_C_GetMatchType_Params params {};
		params.MatchConfig = MatchConfig;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (NewParam != nullptr)
			*NewParam = params.NewParam;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_ScreenEoM.WBP_Sheik_ScreenEOM_C.SetPlayerSpawnInfo
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_ScreenEOM_C::SetPlayerSpawnInfo()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_ScreenEoM.WBP_Sheik_ScreenEOM_C.SetPlayerSpawnInfo");
		
		UWBP_Sheik_ScreenEOM_C_SetPlayerSpawnInfo_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_ScreenEoM.WBP_Sheik_ScreenEOM_C.BeginEOMSkip
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_ScreenEOM_C::BeginEOMSkip()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_ScreenEoM.WBP_Sheik_ScreenEOM_C.BeginEOMSkip");
		
		UWBP_Sheik_ScreenEOM_C_BeginEOMSkip_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_ScreenEoM.WBP_Sheik_ScreenEOM_C.UpdateAllInputSubscriptions
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Subscribe                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_Sheik_ScreenEOM_C::UpdateAllInputSubscriptions(bool Subscribe)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_ScreenEoM.WBP_Sheik_ScreenEOM_C.UpdateAllInputSubscriptions");
		
		UWBP_Sheik_ScreenEOM_C_UpdateAllInputSubscriptions_Params params {};
		params.Subscribe = Subscribe;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_ScreenEoM.WBP_Sheik_ScreenEOM_C.UpdateRespawnSubscription
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_ScreenEOM_C::UpdateRespawnSubscription()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_ScreenEoM.WBP_Sheik_ScreenEOM_C.UpdateRespawnSubscription");
		
		UWBP_Sheik_ScreenEOM_C_UpdateRespawnSubscription_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_ScreenEoM.WBP_Sheik_ScreenEOM_C.PlayOrDelayEOMSequence
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_ScreenEOM_C::PlayOrDelayEOMSequence()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_ScreenEoM.WBP_Sheik_ScreenEOM_C.PlayOrDelayEOMSequence");
		
		UWBP_Sheik_ScreenEOM_C_PlayOrDelayEOMSequence_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_ScreenEoM.WBP_Sheik_ScreenEOM_C.SetRoundEndInfo
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               RoundAlreadyEnded                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               LocalPlayerIsWinner                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		TArray<class AIGPlayerState*>                      ListOfWinners                                              (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UWBP_Sheik_ScreenEOM_C::SetRoundEndInfo(bool RoundAlreadyEnded, bool LocalPlayerIsWinner, TArray<class AIGPlayerState*>* ListOfWinners)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_ScreenEoM.WBP_Sheik_ScreenEOM_C.SetRoundEndInfo");
		
		UWBP_Sheik_ScreenEOM_C_SetRoundEndInfo_Params params {};
		params.RoundAlreadyEnded = RoundAlreadyEnded;
		params.LocalPlayerIsWinner = LocalPlayerIsWinner;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ListOfWinners != nullptr)
			*ListOfWinners = params.ListOfWinners;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_ScreenEoM.WBP_Sheik_ScreenEOM_C.OnRoundFinished_cb
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<class AIGPlayerState*>                      WinningPlayers                                             (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		bool                                               IsWinner                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               isSpectator                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_Sheik_ScreenEOM_C::OnRoundFinished_cb(TArray<class AIGPlayerState*>* WinningPlayers, bool IsWinner, bool isSpectator)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_ScreenEoM.WBP_Sheik_ScreenEOM_C.OnRoundFinished_cb");
		
		UWBP_Sheik_ScreenEOM_C_OnRoundFinished_cb_Params params {};
		params.IsWinner = IsWinner;
		params.isSpectator = isSpectator;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (WinningPlayers != nullptr)
			*WinningPlayers = params.WinningPlayers;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_ScreenEoM.WBP_Sheik_ScreenEOM_C.UpdateScreenToggleSubscription
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_ScreenEOM_C::UpdateScreenToggleSubscription()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_ScreenEoM.WBP_Sheik_ScreenEOM_C.UpdateScreenToggleSubscription");
		
		UWBP_Sheik_ScreenEOM_C_UpdateScreenToggleSubscription_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_ScreenEoM.WBP_Sheik_ScreenEOM_C.OnDebugHideHUDPressed
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FInputEventData                             InputEventData                                             (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UWBP_Sheik_ScreenEOM_C::OnDebugHideHUDPressed(const struct FInputEventData& InputEventData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_ScreenEoM.WBP_Sheik_ScreenEOM_C.OnDebugHideHUDPressed");
		
		UWBP_Sheik_ScreenEOM_C_OnDebugHideHUDPressed_Params params {};
		params.InputEventData = InputEventData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_ScreenEoM.WBP_Sheik_ScreenEOM_C.UpdateMatchmakeAndExitSubscriptions
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_ScreenEOM_C::UpdateMatchmakeAndExitSubscriptions()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_ScreenEoM.WBP_Sheik_ScreenEOM_C.UpdateMatchmakeAndExitSubscriptions");
		
		UWBP_Sheik_ScreenEOM_C_UpdateMatchmakeAndExitSubscriptions_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_ScreenEoM.WBP_Sheik_ScreenEOM_C.OnGameFlowStateChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EGameFlowState                                     GameFlowState                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_ScreenEOM_C::OnGameFlowStateChanged(EGameFlowState GameFlowState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_ScreenEoM.WBP_Sheik_ScreenEOM_C.OnGameFlowStateChanged");
		
		UWBP_Sheik_ScreenEOM_C_OnGameFlowStateChanged_Params params {};
		params.GameFlowState = GameFlowState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_ScreenEoM.WBP_Sheik_ScreenEOM_C.SetInitialStates
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_ScreenEOM_C::SetInitialStates()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_ScreenEoM.WBP_Sheik_ScreenEOM_C.SetInitialStates");
		
		UWBP_Sheik_ScreenEOM_C_SetInitialStates_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_ScreenEoM.WBP_Sheik_ScreenEOM_C.OnDevRespawnPressed
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FInputEventData                             InputEventData                                             (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UWBP_Sheik_ScreenEOM_C::OnDevRespawnPressed(const struct FInputEventData& InputEventData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_ScreenEoM.WBP_Sheik_ScreenEOM_C.OnDevRespawnPressed");
		
		UWBP_Sheik_ScreenEOM_C_OnDevRespawnPressed_Params params {};
		params.InputEventData = InputEventData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_ScreenEoM.WBP_Sheik_ScreenEOM_C.OnGoToFrontEndCanceled
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            ID                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FName                                        Name                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_ScreenEOM_C::OnGoToFrontEndCanceled(int32_t ID, const class FName& Name)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_ScreenEoM.WBP_Sheik_ScreenEOM_C.OnGoToFrontEndCanceled");
		
		UWBP_Sheik_ScreenEOM_C_OnGoToFrontEndCanceled_Params params {};
		params.ID = ID;
		params.Name = Name;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_ScreenEoM.WBP_Sheik_ScreenEOM_C.OnGoToFrontEndConfirmed
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            ID                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FName                                        Name                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_ScreenEOM_C::OnGoToFrontEndConfirmed(int32_t ID, const class FName& Name)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_ScreenEoM.WBP_Sheik_ScreenEOM_C.OnGoToFrontEndConfirmed");
		
		UWBP_Sheik_ScreenEOM_C_OnGoToFrontEndConfirmed_Params params {};
		params.ID = ID;
		params.Name = Name;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_ScreenEoM.WBP_Sheik_ScreenEOM_C.OnGoToFrontEndPressed
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FInputEventData                             InputEventData                                             (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UWBP_Sheik_ScreenEOM_C::OnGoToFrontEndPressed(const struct FInputEventData& InputEventData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_ScreenEoM.WBP_Sheik_ScreenEOM_C.OnGoToFrontEndPressed");
		
		UWBP_Sheik_ScreenEOM_C_OnGoToFrontEndPressed_Params params {};
		params.InputEventData = InputEventData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_ScreenEoM.WBP_Sheik_ScreenEOM_C.OnMatchmakingPressed
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FInputEventData                             InputEventData                                             (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UWBP_Sheik_ScreenEOM_C::OnMatchmakingPressed(const struct FInputEventData& InputEventData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_ScreenEoM.WBP_Sheik_ScreenEOM_C.OnMatchmakingPressed");
		
		UWBP_Sheik_ScreenEOM_C_OnMatchmakingPressed_Params params {};
		params.InputEventData = InputEventData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_ScreenEoM.WBP_Sheik_ScreenEOM_C.OnSpectatePressed
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FInputEventData                             InputEventData                                             (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UWBP_Sheik_ScreenEOM_C::OnSpectatePressed(const struct FInputEventData& InputEventData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_ScreenEoM.WBP_Sheik_ScreenEOM_C.OnSpectatePressed");
		
		UWBP_Sheik_ScreenEOM_C_OnSpectatePressed_Params params {};
		params.InputEventData = InputEventData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_ScreenEoM.WBP_Sheik_ScreenEOM_C.UpdateToggleStatsPanelSubscription
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_ScreenEOM_C::UpdateToggleStatsPanelSubscription()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_ScreenEoM.WBP_Sheik_ScreenEOM_C.UpdateToggleStatsPanelSubscription");
		
		UWBP_Sheik_ScreenEOM_C_UpdateToggleStatsPanelSubscription_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_ScreenEoM.WBP_Sheik_ScreenEOM_C.OnPartyMatchmakingFound
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bIsPartyLeader                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_Sheik_ScreenEOM_C::OnPartyMatchmakingFound(bool bIsPartyLeader)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_ScreenEoM.WBP_Sheik_ScreenEOM_C.OnPartyMatchmakingFound");
		
		UWBP_Sheik_ScreenEOM_C_OnPartyMatchmakingFound_Params params {};
		params.bIsPartyLeader = bIsPartyLeader;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_ScreenEoM.WBP_Sheik_ScreenEOM_C.OnPartyPlayerLeft
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      PlayerId                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_ScreenEOM_C::OnPartyPlayerLeft(const class FString& PlayerId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_ScreenEoM.WBP_Sheik_ScreenEOM_C.OnPartyPlayerLeft");
		
		UWBP_Sheik_ScreenEOM_C_OnPartyPlayerLeft_Params params {};
		params.PlayerId = PlayerId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_ScreenEoM.WBP_Sheik_ScreenEOM_C.OnPartyMatchmakingError
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        ErrorText                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		bool                                               bIsPartyLeader                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_Sheik_ScreenEOM_C::OnPartyMatchmakingError(const class FText& ErrorText, bool bIsPartyLeader)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_ScreenEoM.WBP_Sheik_ScreenEOM_C.OnPartyMatchmakingError");
		
		UWBP_Sheik_ScreenEOM_C_OnPartyMatchmakingError_Params params {};
		params.ErrorText = ErrorText;
		params.bIsPartyLeader = bIsPartyLeader;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_ScreenEoM.WBP_Sheik_ScreenEOM_C.OnHotfixingComplete
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EUpdateCompletionStatus                            HotfixResult                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_ScreenEOM_C::OnHotfixingComplete(EUpdateCompletionStatus HotfixResult)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_ScreenEoM.WBP_Sheik_ScreenEOM_C.OnHotfixingComplete");
		
		UWBP_Sheik_ScreenEOM_C_OnHotfixingComplete_Params params {};
		params.HotfixResult = HotfixResult;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_ScreenEoM.WBP_Sheik_ScreenEOM_C.OnHotfixingDefer
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<int32_t>                                    AvailableVersions                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UWBP_Sheik_ScreenEOM_C::OnHotfixingDefer(TArray<int32_t> AvailableVersions)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_ScreenEoM.WBP_Sheik_ScreenEOM_C.OnHotfixingDefer");
		
		UWBP_Sheik_ScreenEOM_C_OnHotfixingDefer_Params params {};
		params.AvailableVersions = AvailableVersions;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_ScreenEoM.WBP_Sheik_ScreenEOM_C.OnJoiningMatch
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_ScreenEOM_C::OnJoiningMatch()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_ScreenEoM.WBP_Sheik_ScreenEOM_C.OnJoiningMatch");
		
		UWBP_Sheik_ScreenEOM_C_OnJoiningMatch_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_ScreenEoM.WBP_Sheik_ScreenEOM_C.OnPartyMemberAttributeUpdated
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      PlayerId                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		struct FPlayerPartyAttributesInfo                  UpdatedPlayerInfo                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UWBP_Sheik_ScreenEOM_C::OnPartyMemberAttributeUpdated(const class FString& PlayerId, const struct FPlayerPartyAttributesInfo& UpdatedPlayerInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_ScreenEoM.WBP_Sheik_ScreenEOM_C.OnPartyMemberAttributeUpdated");
		
		UWBP_Sheik_ScreenEOM_C_OnPartyMemberAttributeUpdated_Params params {};
		params.PlayerId = PlayerId;
		params.UpdatedPlayerInfo = UpdatedPlayerInfo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_ScreenEoM.WBP_Sheik_ScreenEOM_C.OnNonLeaderHotfixComplete
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EUpdateCompletionStatus                            UpdateStatus                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_ScreenEOM_C::OnNonLeaderHotfixComplete(EUpdateCompletionStatus UpdateStatus)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_ScreenEoM.WBP_Sheik_ScreenEOM_C.OnNonLeaderHotfixComplete");
		
		UWBP_Sheik_ScreenEOM_C_OnNonLeaderHotfixComplete_Params params {};
		params.UpdateStatus = UpdateStatus;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_ScreenEoM.WBP_Sheik_ScreenEOM_C.OnNonLeaderHotfixDefer
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<int32_t>                                    AvailableVersions                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UWBP_Sheik_ScreenEOM_C::OnNonLeaderHotfixDefer(TArray<int32_t> AvailableVersions)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_ScreenEoM.WBP_Sheik_ScreenEOM_C.OnNonLeaderHotfixDefer");
		
		UWBP_Sheik_ScreenEOM_C_OnNonLeaderHotfixDefer_Params params {};
		params.AvailableVersions = AvailableVersions;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_ScreenEoM.WBP_Sheik_ScreenEOM_C.OnVersionUpdated
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            NewVersion                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_ScreenEOM_C::OnVersionUpdated(int32_t NewVersion)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_ScreenEoM.WBP_Sheik_ScreenEOM_C.OnVersionUpdated");
		
		UWBP_Sheik_ScreenEOM_C_OnVersionUpdated_Params params {};
		params.NewVersion = NewVersion;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_ScreenEoM.WBP_Sheik_ScreenEOM_C.OnPartyMatchmakingStopped
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bIsPartyLeader                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_Sheik_ScreenEOM_C::OnPartyMatchmakingStopped(bool bIsPartyLeader)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_ScreenEoM.WBP_Sheik_ScreenEOM_C.OnPartyMatchmakingStopped");
		
		UWBP_Sheik_ScreenEOM_C_OnPartyMatchmakingStopped_Params params {};
		params.bIsPartyLeader = bIsPartyLeader;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_ScreenEoM.WBP_Sheik_ScreenEOM_C.OnHotfixSyncComplete
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bWasSuccessful                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FSheikError                                 Error                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	 */
	void UWBP_Sheik_ScreenEOM_C::OnHotfixSyncComplete(bool bWasSuccessful, const struct FSheikError& Error)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_ScreenEoM.WBP_Sheik_ScreenEOM_C.OnHotfixSyncComplete");
		
		UWBP_Sheik_ScreenEOM_C_OnHotfixSyncComplete_Params params {};
		params.bWasSuccessful = bWasSuccessful;
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_ScreenEoM.WBP_Sheik_ScreenEOM_C.OnPartyMatchmakingStarted
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      ConfigurationName                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		bool                                               bIsPartyLeader                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_Sheik_ScreenEOM_C::OnPartyMatchmakingStarted(const class FString& ConfigurationName, bool bIsPartyLeader)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_ScreenEoM.WBP_Sheik_ScreenEOM_C.OnPartyMatchmakingStarted");
		
		UWBP_Sheik_ScreenEOM_C_OnPartyMatchmakingStarted_Params params {};
		params.ConfigurationName = ConfigurationName;
		params.bIsPartyLeader = bIsPartyLeader;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_ScreenEoM.WBP_Sheik_ScreenEOM_C.OnPushToTalkReleased
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FInputEventData                             InputEventData                                             (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UWBP_Sheik_ScreenEOM_C::OnPushToTalkReleased(const struct FInputEventData& InputEventData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_ScreenEoM.WBP_Sheik_ScreenEOM_C.OnPushToTalkReleased");
		
		UWBP_Sheik_ScreenEOM_C_OnPushToTalkReleased_Params params {};
		params.InputEventData = InputEventData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_ScreenEoM.WBP_Sheik_ScreenEOM_C.OnPushToTalkPressed
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FInputEventData                             InputEventData                                             (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UWBP_Sheik_ScreenEOM_C::OnPushToTalkPressed(const struct FInputEventData& InputEventData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_ScreenEoM.WBP_Sheik_ScreenEOM_C.OnPushToTalkPressed");
		
		UWBP_Sheik_ScreenEOM_C_OnPushToTalkPressed_Params params {};
		params.InputEventData = InputEventData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_ScreenEoM.WBP_Sheik_ScreenEOM_C.EnablePushToTalk
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsEnabled                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_Sheik_ScreenEOM_C::EnablePushToTalk(bool IsEnabled)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_ScreenEoM.WBP_Sheik_ScreenEOM_C.EnablePushToTalk");
		
		UWBP_Sheik_ScreenEOM_C_EnablePushToTalk_Params params {};
		params.IsEnabled = IsEnabled;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_ScreenEoM.WBP_Sheik_ScreenEOM_C.OnMatchmakingComplete
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bSuccessful                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FSheikError                                 Error                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	 */
	void UWBP_Sheik_ScreenEOM_C::OnMatchmakingComplete(bool bSuccessful, const struct FSheikError& Error)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_ScreenEoM.WBP_Sheik_ScreenEOM_C.OnMatchmakingComplete");
		
		UWBP_Sheik_ScreenEOM_C_OnMatchmakingComplete_Params params {};
		params.bSuccessful = bSuccessful;
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_ScreenEoM.WBP_Sheik_ScreenEOM_C.OnCloutLevelSequenceComplete
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_ScreenEOM_C::OnCloutLevelSequenceComplete()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_ScreenEoM.WBP_Sheik_ScreenEOM_C.OnCloutLevelSequenceComplete");
		
		UWBP_Sheik_ScreenEOM_C_OnCloutLevelSequenceComplete_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_ScreenEoM.WBP_Sheik_ScreenEOM_C.BeginChallengesSequence
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_ScreenEOM_C::BeginChallengesSequence()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_ScreenEoM.WBP_Sheik_ScreenEOM_C.BeginChallengesSequence");
		
		UWBP_Sheik_ScreenEOM_C_BeginChallengesSequence_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_ScreenEoM.WBP_Sheik_ScreenEOM_C.OnTagTeamSurvived
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<class AIGPlayerState*>                      WinningPlayers                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		bool                                               isLocalPlayer                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               isSpectator                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_Sheik_ScreenEOM_C::OnTagTeamSurvived(TArray<class AIGPlayerState*> WinningPlayers, bool isLocalPlayer, bool isSpectator)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_ScreenEoM.WBP_Sheik_ScreenEOM_C.OnTagTeamSurvived");
		
		UWBP_Sheik_ScreenEOM_C_OnTagTeamSurvived_Params params {};
		params.WinningPlayers = WinningPlayers;
		params.isLocalPlayer = isLocalPlayer;
		params.isSpectator = isSpectator;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_ScreenEoM.WBP_Sheik_ScreenEOM_C.OnChallengesSequenceComplete
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_ScreenEOM_C::OnChallengesSequenceComplete()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_ScreenEoM.WBP_Sheik_ScreenEOM_C.OnChallengesSequenceComplete");
		
		UWBP_Sheik_ScreenEOM_C_OnChallengesSequenceComplete_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_ScreenEoM.WBP_Sheik_ScreenEOM_C.OnFanMailSequenceComplete
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_ScreenEOM_C::OnFanMailSequenceComplete()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_ScreenEoM.WBP_Sheik_ScreenEOM_C.OnFanMailSequenceComplete");
		
		UWBP_Sheik_ScreenEOM_C_OnFanMailSequenceComplete_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_ScreenEoM.WBP_Sheik_ScreenEOM_C.OnBattlePassSequenceComplete
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_ScreenEOM_C::OnBattlePassSequenceComplete()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_ScreenEoM.WBP_Sheik_ScreenEOM_C.OnBattlePassSequenceComplete");
		
		UWBP_Sheik_ScreenEOM_C_OnBattlePassSequenceComplete_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_ScreenEoM.WBP_Sheik_ScreenEOM_C.OnMatchmakingCancelled
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bSuccessful                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FSheikError                                 Error                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	 */
	void UWBP_Sheik_ScreenEOM_C::OnMatchmakingCancelled(bool bSuccessful, const struct FSheikError& Error)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_ScreenEoM.WBP_Sheik_ScreenEOM_C.OnMatchmakingCancelled");
		
		UWBP_Sheik_ScreenEOM_C_OnMatchmakingCancelled_Params params {};
		params.bSuccessful = bSuccessful;
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_ScreenEoM.WBP_Sheik_ScreenEOM_C.OnMatchmakingStarted
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      MatchConfig                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_ScreenEOM_C::OnMatchmakingStarted(const class FString& MatchConfig)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_ScreenEoM.WBP_Sheik_ScreenEOM_C.OnMatchmakingStarted");
		
		UWBP_Sheik_ScreenEOM_C_OnMatchmakingStarted_Params params {};
		params.MatchConfig = MatchConfig;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_ScreenEoM.WBP_Sheik_ScreenEOM_C.BeginEOMSequence
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_ScreenEOM_C::BeginEOMSequence()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_ScreenEoM.WBP_Sheik_ScreenEOM_C.BeginEOMSequence");
		
		UWBP_Sheik_ScreenEOM_C_BeginEOMSequence_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_ScreenEoM.WBP_Sheik_ScreenEOM_C.ConstructOnlyOnce
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_ScreenEOM_C::ConstructOnlyOnce()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_ScreenEoM.WBP_Sheik_ScreenEOM_C.ConstructOnlyOnce");
		
		UWBP_Sheik_ScreenEOM_C_ConstructOnlyOnce_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_ScreenEoM.WBP_Sheik_ScreenEOM_C.OnProgressionStatsSequenceComplete
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_ScreenEOM_C::OnProgressionStatsSequenceComplete()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_ScreenEoM.WBP_Sheik_ScreenEOM_C.OnProgressionStatsSequenceComplete");
		
		UWBP_Sheik_ScreenEOM_C_OnProgressionStatsSequenceComplete_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_ScreenEoM.WBP_Sheik_ScreenEOM_C.OnLegendShown
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_ScreenEOM_C::OnLegendShown()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_ScreenEoM.WBP_Sheik_ScreenEOM_C.OnLegendShown");
		
		UWBP_Sheik_ScreenEOM_C_OnLegendShown_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_ScreenEoM.WBP_Sheik_ScreenEOM_C.OnGainFocus
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            UserIndex                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_ScreenEOM_C::OnGainFocus(int32_t UserIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_ScreenEoM.WBP_Sheik_ScreenEOM_C.OnGainFocus");
		
		UWBP_Sheik_ScreenEOM_C_OnGainFocus_Params params {};
		params.UserIndex = UserIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_ScreenEoM.WBP_Sheik_ScreenEOM_C.OnLoseFocus
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            UserIndex                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_ScreenEOM_C::OnLoseFocus(int32_t UserIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_ScreenEoM.WBP_Sheik_ScreenEOM_C.OnLoseFocus");
		
		UWBP_Sheik_ScreenEOM_C_OnLoseFocus_Params params {};
		params.UserIndex = UserIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_ScreenEoM.WBP_Sheik_ScreenEOM_C.EventSkipEOMSequence
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_ScreenEOM_C::EventSkipEOMSequence()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_ScreenEoM.WBP_Sheik_ScreenEOM_C.EventSkipEOMSequence");
		
		UWBP_Sheik_ScreenEOM_C_EventSkipEOMSequence_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_ScreenEoM.WBP_Sheik_ScreenEOM_C.OnPlacementSequenceComplete
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UIGUI_WidgetBase*                            Source                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_ScreenEOM_C::OnPlacementSequenceComplete(class UIGUI_WidgetBase* Source)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_ScreenEoM.WBP_Sheik_ScreenEOM_C.OnPlacementSequenceComplete");
		
		UWBP_Sheik_ScreenEOM_C_OnPlacementSequenceComplete_Params params {};
		params.Source = Source;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_ScreenEoM.WBP_Sheik_ScreenEOM_C.EventFinishSkipSequence
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_ScreenEOM_C::EventFinishSkipSequence()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_ScreenEoM.WBP_Sheik_ScreenEOM_C.EventFinishSkipSequence");
		
		UWBP_Sheik_ScreenEOM_C_EventFinishSkipSequence_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_ScreenEoM.WBP_Sheik_ScreenEOM_C.OnTeammateEliminated
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_ScreenEOM_C::OnTeammateEliminated()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_ScreenEoM.WBP_Sheik_ScreenEOM_C.OnTeammateEliminated");
		
		UWBP_Sheik_ScreenEOM_C_OnTeammateEliminated_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_ScreenEoM.WBP_Sheik_ScreenEOM_C.SkipEOMAutomatically
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_ScreenEOM_C::SkipEOMAutomatically()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_ScreenEoM.WBP_Sheik_ScreenEOM_C.SkipEOMAutomatically");
		
		UWBP_Sheik_ScreenEOM_C_SkipEOMAutomatically_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_ScreenEoM.WBP_Sheik_ScreenEOM_C.OnVoiceChatOptionsUpdated
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bIsEnabled                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bIsMuted                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bIsDeafened                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bIsPushToTalk                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_Sheik_ScreenEOM_C::OnVoiceChatOptionsUpdated(bool bIsEnabled, bool bIsMuted, bool bIsDeafened, bool bIsPushToTalk)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_ScreenEoM.WBP_Sheik_ScreenEOM_C.OnVoiceChatOptionsUpdated");
		
		UWBP_Sheik_ScreenEOM_C_OnVoiceChatOptionsUpdated_Params params {};
		params.bIsEnabled = bIsEnabled;
		params.bIsMuted = bIsMuted;
		params.bIsDeafened = bIsDeafened;
		params.bIsPushToTalk = bIsPushToTalk;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_ScreenEoM.WBP_Sheik_ScreenEOM_C.ShowChallengesAnim_Finished
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_ScreenEOM_C::ShowChallengesAnim_Finished()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_ScreenEoM.WBP_Sheik_ScreenEOM_C.ShowChallengesAnim_Finished");
		
		UWBP_Sheik_ScreenEOM_C_ShowChallengesAnim_Finished_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_ScreenEoM.WBP_Sheik_ScreenEOM_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_Sheik_ScreenEOM_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_ScreenEoM.WBP_Sheik_ScreenEOM_C.PreConstruct");
		
		UWBP_Sheik_ScreenEOM_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_ScreenEoM.WBP_Sheik_ScreenEOM_C.ExecuteUbergraph_WBP_Sheik_ScreenEOM
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_ScreenEOM_C::ExecuteUbergraph_WBP_Sheik_ScreenEOM(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_ScreenEoM.WBP_Sheik_ScreenEOM_C.ExecuteUbergraph_WBP_Sheik_ScreenEOM");
		
		UWBP_Sheik_ScreenEOM_C_ExecuteUbergraph_WBP_Sheik_ScreenEOM_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_ScreenEoM.WBP_Sheik_ScreenEOM_C.ChallengesSequenceComplete__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_ScreenEOM_C::ChallengesSequenceComplete__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_ScreenEoM.WBP_Sheik_ScreenEOM_C.ChallengesSequenceComplete__DelegateSignature");
		
		UWBP_Sheik_ScreenEOM_C_ChallengesSequenceComplete__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWBP_Sheik_ScreenEOM_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWBP_Sheik_ScreenEOM_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_Sheik_ScreenEoM.WBP_Sheik_ScreenEOM_C");
		return ptr;
	}

}


