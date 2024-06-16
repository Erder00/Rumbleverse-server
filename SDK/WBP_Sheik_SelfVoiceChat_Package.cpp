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
	 * 		Name   -> Function WBP_Sheik_SelfVoiceChat.WBP_Sheik_SelfVoiceChat_C.OnTeammateLeftServer
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AIGPlayerState*                              ExitingTeammate                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_SelfVoiceChat_C::OnTeammateLeftServer(class AIGPlayerState* ExitingTeammate)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_SelfVoiceChat.WBP_Sheik_SelfVoiceChat_C.OnTeammateLeftServer");
		
		UWBP_Sheik_SelfVoiceChat_C_OnTeammateLeftServer_Params params {};
		params.ExitingTeammate = ExitingTeammate;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_SelfVoiceChat.WBP_Sheik_SelfVoiceChat_C.OnTeamInfoUpdated
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_SelfVoiceChat_C::OnTeamInfoUpdated()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_SelfVoiceChat.WBP_Sheik_SelfVoiceChat_C.OnTeamInfoUpdated");
		
		UWBP_Sheik_SelfVoiceChat_C_OnTeamInfoUpdated_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_SelfVoiceChat.WBP_Sheik_SelfVoiceChat_C.OnVoiceChatPlayerTalkingUpdated
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      ChannelName                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		class FString                                      ProductUserId                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		bool                                               bIsTalking                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bIsLocalPlayer                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_Sheik_SelfVoiceChat_C::OnVoiceChatPlayerTalkingUpdated(const class FString& ChannelName, const class FString& ProductUserId, bool bIsTalking, bool bIsLocalPlayer)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_SelfVoiceChat.WBP_Sheik_SelfVoiceChat_C.OnVoiceChatPlayerTalkingUpdated");
		
		UWBP_Sheik_SelfVoiceChat_C_OnVoiceChatPlayerTalkingUpdated_Params params {};
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
	 * 		Name   -> Function WBP_Sheik_SelfVoiceChat.WBP_Sheik_SelfVoiceChat_C.OnVoiceChatOptionsUpdated
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bIsEnabled                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bIsMuted                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bIsDeafened                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bIsPushToTalk                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_Sheik_SelfVoiceChat_C::OnVoiceChatOptionsUpdated(bool bIsEnabled, bool bIsMuted, bool bIsDeafened, bool bIsPushToTalk)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_SelfVoiceChat.WBP_Sheik_SelfVoiceChat_C.OnVoiceChatOptionsUpdated");
		
		UWBP_Sheik_SelfVoiceChat_C_OnVoiceChatOptionsUpdated_Params params {};
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
	 * 		Name   -> Function WBP_Sheik_SelfVoiceChat.WBP_Sheik_SelfVoiceChat_C.ConstructOnlyOnce
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_SelfVoiceChat_C::ConstructOnlyOnce()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_SelfVoiceChat.WBP_Sheik_SelfVoiceChat_C.ConstructOnlyOnce");
		
		UWBP_Sheik_SelfVoiceChat_C_ConstructOnlyOnce_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_SelfVoiceChat.WBP_Sheik_SelfVoiceChat_C.ExecuteUbergraph_WBP_Sheik_SelfVoiceChat
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_SelfVoiceChat_C::ExecuteUbergraph_WBP_Sheik_SelfVoiceChat(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_SelfVoiceChat.WBP_Sheik_SelfVoiceChat_C.ExecuteUbergraph_WBP_Sheik_SelfVoiceChat");
		
		UWBP_Sheik_SelfVoiceChat_C_ExecuteUbergraph_WBP_Sheik_SelfVoiceChat_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWBP_Sheik_SelfVoiceChat_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWBP_Sheik_SelfVoiceChat_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_Sheik_SelfVoiceChat.WBP_Sheik_SelfVoiceChat_C");
		return ptr;
	}

}


