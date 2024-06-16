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
	 * 		Name   -> Function WBP_Sheik_TeammateInfo.WBP_Sheik_TeammateInfo_C.UpdateLocalPlayerInfoVisibility
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_TeammateInfo_C::UpdateLocalPlayerInfoVisibility()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_TeammateInfo.WBP_Sheik_TeammateInfo_C.UpdateLocalPlayerInfoVisibility");
		
		UWBP_Sheik_TeammateInfo_C_UpdateLocalPlayerInfoVisibility_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_TeammateInfo.WBP_Sheik_TeammateInfo_C.OnVoiceChatMuteListChanged
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_TeammateInfo_C::OnVoiceChatMuteListChanged()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_TeammateInfo.WBP_Sheik_TeammateInfo_C.OnVoiceChatMuteListChanged");
		
		UWBP_Sheik_TeammateInfo_C_OnVoiceChatMuteListChanged_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_TeammateInfo.WBP_Sheik_TeammateInfo_C.UpdatePlayerMuted
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_TeammateInfo_C::UpdatePlayerMuted()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_TeammateInfo.WBP_Sheik_TeammateInfo_C.UpdatePlayerMuted");
		
		UWBP_Sheik_TeammateInfo_C_UpdatePlayerMuted_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_TeammateInfo.WBP_Sheik_TeammateInfo_C.GetPartyManager
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class USheikPartyManager*                          PartyManager                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_TeammateInfo_C::GetPartyManager(class USheikPartyManager** PartyManager)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_TeammateInfo.WBP_Sheik_TeammateInfo_C.GetPartyManager");
		
		UWBP_Sheik_TeammateInfo_C_GetPartyManager_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (PartyManager != nullptr)
			*PartyManager = params.PartyManager;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_TeammateInfo.WBP_Sheik_TeammateInfo_C.UpdatePartyIcon
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsInParty                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_Sheik_TeammateInfo_C::UpdatePartyIcon(bool IsInParty)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_TeammateInfo.WBP_Sheik_TeammateInfo_C.UpdatePartyIcon");
		
		UWBP_Sheik_TeammateInfo_C_UpdatePartyIcon_Params params {};
		params.IsInParty = IsInParty;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_TeammateInfo.WBP_Sheik_TeammateInfo_C.OnNameChanged_cb
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_TeammateInfo_C::OnNameChanged_cb()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_TeammateInfo.WBP_Sheik_TeammateInfo_C.OnNameChanged_cb");
		
		UWBP_Sheik_TeammateInfo_C_OnNameChanged_cb_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_TeammateInfo.WBP_Sheik_TeammateInfo_C.OnVoiceChatOptionsUpdated
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bIsEnabled                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bIsMuted                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bIsDeafened                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bIsPushToTalk                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_Sheik_TeammateInfo_C::OnVoiceChatOptionsUpdated(bool bIsEnabled, bool bIsMuted, bool bIsDeafened, bool bIsPushToTalk)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_TeammateInfo.WBP_Sheik_TeammateInfo_C.OnVoiceChatOptionsUpdated");
		
		UWBP_Sheik_TeammateInfo_C_OnVoiceChatOptionsUpdated_Params params {};
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
	 * 		Name   -> Function WBP_Sheik_TeammateInfo.WBP_Sheik_TeammateInfo_C.OnVoiceChatPlayerTalkingUpdated
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      ChannelName                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		class FString                                      PlayerName                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		bool                                               bIsTalking                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bIsLocalPlayer                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_Sheik_TeammateInfo_C::OnVoiceChatPlayerTalkingUpdated(const class FString& ChannelName, const class FString& PlayerName, bool bIsTalking, bool bIsLocalPlayer)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_TeammateInfo.WBP_Sheik_TeammateInfo_C.OnVoiceChatPlayerTalkingUpdated");
		
		UWBP_Sheik_TeammateInfo_C_OnVoiceChatPlayerTalkingUpdated_Params params {};
		params.ChannelName = ChannelName;
		params.PlayerName = PlayerName;
		params.bIsTalking = bIsTalking;
		params.bIsLocalPlayer = bIsLocalPlayer;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_TeammateInfo.WBP_Sheik_TeammateInfo_C.UpdateVoiceChatSpeakingIcon
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsTalking                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_Sheik_TeammateInfo_C::UpdateVoiceChatSpeakingIcon(bool IsTalking)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_TeammateInfo.WBP_Sheik_TeammateInfo_C.UpdateVoiceChatSpeakingIcon");
		
		UWBP_Sheik_TeammateInfo_C_UpdateVoiceChatSpeakingIcon_Params params {};
		params.IsTalking = IsTalking;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_TeammateInfo.WBP_Sheik_TeammateInfo_C.UpdateDownedTimer
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              DownedTimer                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_TeammateInfo_C::UpdateDownedTimer(float DownedTimer)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_TeammateInfo.WBP_Sheik_TeammateInfo_C.UpdateDownedTimer");
		
		UWBP_Sheik_TeammateInfo_C_UpdateDownedTimer_Params params {};
		params.DownedTimer = DownedTimer;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_TeammateInfo.WBP_Sheik_TeammateInfo_C.OnTeamLeaderUpdated_cb
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bIsTeamLeader                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_Sheik_TeammateInfo_C::OnTeamLeaderUpdated_cb(bool bIsTeamLeader)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_TeammateInfo.WBP_Sheik_TeammateInfo_C.OnTeamLeaderUpdated_cb");
		
		UWBP_Sheik_TeammateInfo_C_OnTeamLeaderUpdated_cb_Params params {};
		params.bIsTeamLeader = bIsTeamLeader;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_TeammateInfo.WBP_Sheik_TeammateInfo_C.UpdateHealth
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              HealthPercentage                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              HealthMax                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_TeammateInfo_C::UpdateHealth(float HealthPercentage, float HealthMax)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_TeammateInfo.WBP_Sheik_TeammateInfo_C.UpdateHealth");
		
		UWBP_Sheik_TeammateInfo_C_UpdateHealth_Params params {};
		params.HealthPercentage = HealthPercentage;
		params.HealthMax = HealthMax;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_TeammateInfo.WBP_Sheik_TeammateInfo_C.HandleInfoUpdated
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSheikSpectatorInfo                         SpectatorInfo                                              (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UWBP_Sheik_TeammateInfo_C::HandleInfoUpdated(struct FSheikSpectatorInfo* SpectatorInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_TeammateInfo.WBP_Sheik_TeammateInfo_C.HandleInfoUpdated");
		
		UWBP_Sheik_TeammateInfo_C_HandleInfoUpdated_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (SpectatorInfo != nullptr)
			*SpectatorInfo = params.SpectatorInfo;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_TeammateInfo.WBP_Sheik_TeammateInfo_C.SetForPlayer
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ASheikPlayerStateCommon*                     SheikPlayerState                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_TeammateInfo_C::SetForPlayer(class ASheikPlayerStateCommon* SheikPlayerState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_TeammateInfo.WBP_Sheik_TeammateInfo_C.SetForPlayer");
		
		UWBP_Sheik_TeammateInfo_C_SetForPlayer_Params params {};
		params.SheikPlayerState = SheikPlayerState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_TeammateInfo.WBP_Sheik_TeammateInfo_C.DuosDowned
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESheikPinEventType                                 EventType                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class ASheikCharacter*                             Attacker                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class ASheikCharacter*                             Victim                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_TeammateInfo_C::DuosDowned(ESheikPinEventType EventType, class ASheikCharacter* Attacker, class ASheikCharacter* Victim)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_TeammateInfo.WBP_Sheik_TeammateInfo_C.DuosDowned");
		
		UWBP_Sheik_TeammateInfo_C_DuosDowned_Params params {};
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
	 * 		Name   -> Function WBP_Sheik_TeammateInfo.WBP_Sheik_TeammateInfo_C.OnKnockdown
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FIGKnockOutData                             KnockOutData                                               (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 */
	void UWBP_Sheik_TeammateInfo_C::OnKnockdown(const struct FIGKnockOutData& KnockOutData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_TeammateInfo.WBP_Sheik_TeammateInfo_C.OnKnockdown");
		
		UWBP_Sheik_TeammateInfo_C_OnKnockdown_Params params {};
		params.KnockOutData = KnockOutData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_TeammateInfo.WBP_Sheik_TeammateInfo_C.TeammateDied
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AIGPlayerState*                              TeammateState                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_TeammateInfo_C::TeammateDied(class AIGPlayerState* TeammateState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_TeammateInfo.WBP_Sheik_TeammateInfo_C.TeammateDied");
		
		UWBP_Sheik_TeammateInfo_C_TeammateDied_Params params {};
		params.TeammateState = TeammateState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_TeammateInfo.WBP_Sheik_TeammateInfo_C.ConstructOnlyOnce
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_TeammateInfo_C::ConstructOnlyOnce()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_TeammateInfo.WBP_Sheik_TeammateInfo_C.ConstructOnlyOnce");
		
		UWBP_Sheik_TeammateInfo_C_ConstructOnlyOnce_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_TeammateInfo.WBP_Sheik_TeammateInfo_C.ExecuteUbergraph_WBP_Sheik_TeammateInfo
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_TeammateInfo_C::ExecuteUbergraph_WBP_Sheik_TeammateInfo(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_TeammateInfo.WBP_Sheik_TeammateInfo_C.ExecuteUbergraph_WBP_Sheik_TeammateInfo");
		
		UWBP_Sheik_TeammateInfo_C_ExecuteUbergraph_WBP_Sheik_TeammateInfo_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWBP_Sheik_TeammateInfo_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWBP_Sheik_TeammateInfo_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_Sheik_TeammateInfo.WBP_Sheik_TeammateInfo_C");
		return ptr;
	}

}


