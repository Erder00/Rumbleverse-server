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
	 * 		Name   -> Function WBP_Sheik_TeammateInfo_Playground.WBP_Sheik_TeammateInfo_Playground_C.SetupWidgetInfo
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      PlayerProductID                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		class FString                                      PlayerName                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		class FString                                      PlayerCozmoId                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		ESheikPlatformService                              PlatformService                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_TeammateInfo_Playground_C::SetupWidgetInfo(const class FString& PlayerProductID, const class FString& PlayerName, const class FString& PlayerCozmoId, ESheikPlatformService PlatformService)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_TeammateInfo_Playground.WBP_Sheik_TeammateInfo_Playground_C.SetupWidgetInfo");
		
		UWBP_Sheik_TeammateInfo_Playground_C_SetupWidgetInfo_Params params {};
		params.PlayerProductID = PlayerProductID;
		params.PlayerName = PlayerName;
		params.PlayerCozmoId = PlayerCozmoId;
		params.PlatformService = PlatformService;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_TeammateInfo_Playground.WBP_Sheik_TeammateInfo_Playground_C.GetPartyManager
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class USheikPartyManager*                          PartyManager                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_TeammateInfo_Playground_C::GetPartyManager(class USheikPartyManager** PartyManager)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_TeammateInfo_Playground.WBP_Sheik_TeammateInfo_Playground_C.GetPartyManager");
		
		UWBP_Sheik_TeammateInfo_Playground_C_GetPartyManager_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (PartyManager != nullptr)
			*PartyManager = params.PartyManager;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_TeammateInfo_Playground.WBP_Sheik_TeammateInfo_Playground_C.OnVoiceChatOptionsUpdated
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bIsEnabled                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bIsMuted                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bIsDeafened                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bIsPushToTalk                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_Sheik_TeammateInfo_Playground_C::OnVoiceChatOptionsUpdated(bool bIsEnabled, bool bIsMuted, bool bIsDeafened, bool bIsPushToTalk)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_TeammateInfo_Playground.WBP_Sheik_TeammateInfo_Playground_C.OnVoiceChatOptionsUpdated");
		
		UWBP_Sheik_TeammateInfo_Playground_C_OnVoiceChatOptionsUpdated_Params params {};
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
	 * 		Name   -> Function WBP_Sheik_TeammateInfo_Playground.WBP_Sheik_TeammateInfo_Playground_C.OnVoiceChatMuteListChanged
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_TeammateInfo_Playground_C::OnVoiceChatMuteListChanged()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_TeammateInfo_Playground.WBP_Sheik_TeammateInfo_Playground_C.OnVoiceChatMuteListChanged");
		
		UWBP_Sheik_TeammateInfo_Playground_C_OnVoiceChatMuteListChanged_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_TeammateInfo_Playground.WBP_Sheik_TeammateInfo_Playground_C.OnVoiceChatPlayerTalkingUpdated
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      ChannelName                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		class FString                                      PlayerName                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		bool                                               bIsTalking                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bIsLocalPlayer                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_Sheik_TeammateInfo_Playground_C::OnVoiceChatPlayerTalkingUpdated(const class FString& ChannelName, const class FString& PlayerName, bool bIsTalking, bool bIsLocalPlayer)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_TeammateInfo_Playground.WBP_Sheik_TeammateInfo_Playground_C.OnVoiceChatPlayerTalkingUpdated");
		
		UWBP_Sheik_TeammateInfo_Playground_C_OnVoiceChatPlayerTalkingUpdated_Params params {};
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
	 * 		Name   -> Function WBP_Sheik_TeammateInfo_Playground.WBP_Sheik_TeammateInfo_Playground_C.UpdatePlayerMuted
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_TeammateInfo_Playground_C::UpdatePlayerMuted()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_TeammateInfo_Playground.WBP_Sheik_TeammateInfo_Playground_C.UpdatePlayerMuted");
		
		UWBP_Sheik_TeammateInfo_Playground_C_UpdatePlayerMuted_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_TeammateInfo_Playground.WBP_Sheik_TeammateInfo_Playground_C.UpdateVoiceChatSpeakingIcon
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsTalking                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_Sheik_TeammateInfo_Playground_C::UpdateVoiceChatSpeakingIcon(bool IsTalking)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_TeammateInfo_Playground.WBP_Sheik_TeammateInfo_Playground_C.UpdateVoiceChatSpeakingIcon");
		
		UWBP_Sheik_TeammateInfo_Playground_C_UpdateVoiceChatSpeakingIcon_Params params {};
		params.IsTalking = IsTalking;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_TeammateInfo_Playground.WBP_Sheik_TeammateInfo_Playground_C.ConstructOnlyOnce
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_TeammateInfo_Playground_C::ConstructOnlyOnce()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_TeammateInfo_Playground.WBP_Sheik_TeammateInfo_Playground_C.ConstructOnlyOnce");
		
		UWBP_Sheik_TeammateInfo_Playground_C_ConstructOnlyOnce_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_TeammateInfo_Playground.WBP_Sheik_TeammateInfo_Playground_C.ExecuteUbergraph_WBP_Sheik_TeammateInfo_Playground
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_TeammateInfo_Playground_C::ExecuteUbergraph_WBP_Sheik_TeammateInfo_Playground(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_TeammateInfo_Playground.WBP_Sheik_TeammateInfo_Playground_C.ExecuteUbergraph_WBP_Sheik_TeammateInfo_Playground");
		
		UWBP_Sheik_TeammateInfo_Playground_C_ExecuteUbergraph_WBP_Sheik_TeammateInfo_Playground_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWBP_Sheik_TeammateInfo_Playground_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWBP_Sheik_TeammateInfo_Playground_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_Sheik_TeammateInfo_Playground.WBP_Sheik_TeammateInfo_Playground_C");
		return ptr;
	}

}


