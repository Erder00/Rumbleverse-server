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
	 * 		Name   -> Function WBP_Sheik_EOM_TeammateInfo.WBP_Sheik_EOM_TeammateInfo_C.OnNameChanged_cb
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_EOM_TeammateInfo_C::OnNameChanged_cb()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_EOM_TeammateInfo.WBP_Sheik_EOM_TeammateInfo_C.OnNameChanged_cb");
		
		UWBP_Sheik_EOM_TeammateInfo_C_OnNameChanged_cb_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_EOM_TeammateInfo.WBP_Sheik_EOM_TeammateInfo_C.GetPartyManager
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class USheikPartyManager*                          PartyManager                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_EOM_TeammateInfo_C::GetPartyManager(class USheikPartyManager** PartyManager)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_EOM_TeammateInfo.WBP_Sheik_EOM_TeammateInfo_C.GetPartyManager");
		
		UWBP_Sheik_EOM_TeammateInfo_C_GetPartyManager_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (PartyManager != nullptr)
			*PartyManager = params.PartyManager;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_EOM_TeammateInfo.WBP_Sheik_EOM_TeammateInfo_C.HandleInfoUpdated
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSheikSpectatorInfo                         SpectatorInfo                                              (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UWBP_Sheik_EOM_TeammateInfo_C::HandleInfoUpdated(struct FSheikSpectatorInfo* SpectatorInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_EOM_TeammateInfo.WBP_Sheik_EOM_TeammateInfo_C.HandleInfoUpdated");
		
		UWBP_Sheik_EOM_TeammateInfo_C_HandleInfoUpdated_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (SpectatorInfo != nullptr)
			*SpectatorInfo = params.SpectatorInfo;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_EOM_TeammateInfo.WBP_Sheik_EOM_TeammateInfo_C.SetForPlayer
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ASheikPlayerStateCommon*                     SheikPlayerState                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_EOM_TeammateInfo_C::SetForPlayer(class ASheikPlayerStateCommon* SheikPlayerState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_EOM_TeammateInfo.WBP_Sheik_EOM_TeammateInfo_C.SetForPlayer");
		
		UWBP_Sheik_EOM_TeammateInfo_C_SetForPlayer_Params params {};
		params.SheikPlayerState = SheikPlayerState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_EOM_TeammateInfo.WBP_Sheik_EOM_TeammateInfo_C.UpdatePartyIcon
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsInParty                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_Sheik_EOM_TeammateInfo_C::UpdatePartyIcon(bool IsInParty)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_EOM_TeammateInfo.WBP_Sheik_EOM_TeammateInfo_C.UpdatePartyIcon");
		
		UWBP_Sheik_EOM_TeammateInfo_C_UpdatePartyIcon_Params params {};
		params.IsInParty = IsInParty;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_EOM_TeammateInfo.WBP_Sheik_EOM_TeammateInfo_C.UpdatePlayerMuted
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_EOM_TeammateInfo_C::UpdatePlayerMuted()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_EOM_TeammateInfo.WBP_Sheik_EOM_TeammateInfo_C.UpdatePlayerMuted");
		
		UWBP_Sheik_EOM_TeammateInfo_C_UpdatePlayerMuted_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_EOM_TeammateInfo.WBP_Sheik_EOM_TeammateInfo_C.UpdateVoiceChatSpeakingIcon
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsTalking                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_Sheik_EOM_TeammateInfo_C::UpdateVoiceChatSpeakingIcon(bool IsTalking)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_EOM_TeammateInfo.WBP_Sheik_EOM_TeammateInfo_C.UpdateVoiceChatSpeakingIcon");
		
		UWBP_Sheik_EOM_TeammateInfo_C_UpdateVoiceChatSpeakingIcon_Params params {};
		params.IsTalking = IsTalking;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_EOM_TeammateInfo.WBP_Sheik_EOM_TeammateInfo_C.OnVoiceChatMuteListChanged
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_EOM_TeammateInfo_C::OnVoiceChatMuteListChanged()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_EOM_TeammateInfo.WBP_Sheik_EOM_TeammateInfo_C.OnVoiceChatMuteListChanged");
		
		UWBP_Sheik_EOM_TeammateInfo_C_OnVoiceChatMuteListChanged_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_EOM_TeammateInfo.WBP_Sheik_EOM_TeammateInfo_C.OnVoiceChatOptionsUpdated
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bIsLocalVOIPEnabled                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bIsLocalVOIPMuted                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bIsLocalVOIPDeafened                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bIsLocalVOIPPushToTalk                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_Sheik_EOM_TeammateInfo_C::OnVoiceChatOptionsUpdated(bool bIsLocalVOIPEnabled, bool bIsLocalVOIPMuted, bool bIsLocalVOIPDeafened, bool bIsLocalVOIPPushToTalk)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_EOM_TeammateInfo.WBP_Sheik_EOM_TeammateInfo_C.OnVoiceChatOptionsUpdated");
		
		UWBP_Sheik_EOM_TeammateInfo_C_OnVoiceChatOptionsUpdated_Params params {};
		params.bIsLocalVOIPEnabled = bIsLocalVOIPEnabled;
		params.bIsLocalVOIPMuted = bIsLocalVOIPMuted;
		params.bIsLocalVOIPDeafened = bIsLocalVOIPDeafened;
		params.bIsLocalVOIPPushToTalk = bIsLocalVOIPPushToTalk;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_EOM_TeammateInfo.WBP_Sheik_EOM_TeammateInfo_C.OnVoiceChatPlayerTalkingUpdated
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      ChannelName                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		class FString                                      ProductUserId                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		bool                                               bIsTalking                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bIsLocalPlayer                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_Sheik_EOM_TeammateInfo_C::OnVoiceChatPlayerTalkingUpdated(const class FString& ChannelName, const class FString& ProductUserId, bool bIsTalking, bool bIsLocalPlayer)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_EOM_TeammateInfo.WBP_Sheik_EOM_TeammateInfo_C.OnVoiceChatPlayerTalkingUpdated");
		
		UWBP_Sheik_EOM_TeammateInfo_C_OnVoiceChatPlayerTalkingUpdated_Params params {};
		params.ChannelName = ChannelName;
		params.ProductUserId = ProductUserId;
		params.bIsTalking = bIsTalking;
		params.bIsLocalPlayer = bIsLocalPlayer;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_EOM_TeammateInfo.WBP_Sheik_EOM_TeammateInfo_C.ConstructOnlyOnce
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_EOM_TeammateInfo_C::ConstructOnlyOnce()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_EOM_TeammateInfo.WBP_Sheik_EOM_TeammateInfo_C.ConstructOnlyOnce");
		
		UWBP_Sheik_EOM_TeammateInfo_C_ConstructOnlyOnce_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_EOM_TeammateInfo.WBP_Sheik_EOM_TeammateInfo_C.ExecuteUbergraph_WBP_Sheik_EOM_TeammateInfo
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_EOM_TeammateInfo_C::ExecuteUbergraph_WBP_Sheik_EOM_TeammateInfo(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_EOM_TeammateInfo.WBP_Sheik_EOM_TeammateInfo_C.ExecuteUbergraph_WBP_Sheik_EOM_TeammateInfo");
		
		UWBP_Sheik_EOM_TeammateInfo_C_ExecuteUbergraph_WBP_Sheik_EOM_TeammateInfo_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWBP_Sheik_EOM_TeammateInfo_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWBP_Sheik_EOM_TeammateInfo_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_Sheik_EOM_TeammateInfo.WBP_Sheik_EOM_TeammateInfo_C");
		return ptr;
	}

}


