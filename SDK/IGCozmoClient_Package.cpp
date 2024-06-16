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
	 * 		Name   -> Function IGCozmoClient.IGCozmoClientFriends.SendFriendRequest
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      PlayerId                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FString                                      ErrorString                                                (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UIGCozmoClientFriends::SendFriendRequest(const class FString& PlayerId, const class FScriptDelegate& Callback, class FString* ErrorString)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGCozmoClient.IGCozmoClientFriends.SendFriendRequest");
		
		UIGCozmoClientFriends_SendFriendRequest_Params params {};
		params.PlayerId = PlayerId;
		params.Callback = Callback;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ErrorString != nullptr)
			*ErrorString = params.ErrorString;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGCozmoClient.IGCozmoClientFriends.RemoveFriend
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      PlayerId                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FString                                      ErrorString                                                (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UIGCozmoClientFriends::RemoveFriend(const class FString& PlayerId, const class FScriptDelegate& Callback, class FString* ErrorString)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGCozmoClient.IGCozmoClientFriends.RemoveFriend");
		
		UIGCozmoClientFriends_RemoveFriend_Params params {};
		params.PlayerId = PlayerId;
		params.Callback = Callback;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ErrorString != nullptr)
			*ErrorString = params.ErrorString;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGCozmoClient.IGCozmoClientFriends.GetFriends
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FString                                      ErrorString                                                (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UIGCozmoClientFriends::GetFriends(const class FScriptDelegate& Callback, class FString* ErrorString)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGCozmoClient.IGCozmoClientFriends.GetFriends");
		
		UIGCozmoClientFriends_GetFriends_Params params {};
		params.Callback = Callback;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ErrorString != nullptr)
			*ErrorString = params.ErrorString;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGCozmoClient.IGCozmoClientFriends.DeclineFriendRequest
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      PlayerId                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FString                                      ErrorString                                                (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UIGCozmoClientFriends::DeclineFriendRequest(const class FString& PlayerId, const class FScriptDelegate& Callback, class FString* ErrorString)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGCozmoClient.IGCozmoClientFriends.DeclineFriendRequest");
		
		UIGCozmoClientFriends_DeclineFriendRequest_Params params {};
		params.PlayerId = PlayerId;
		params.Callback = Callback;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ErrorString != nullptr)
			*ErrorString = params.ErrorString;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGCozmoClient.IGCozmoClientFriends.AcceptFriendRequest
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      PlayerId                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FString                                      ErrorString                                                (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UIGCozmoClientFriends::AcceptFriendRequest(const class FString& PlayerId, const class FScriptDelegate& Callback, class FString* ErrorString)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGCozmoClient.IGCozmoClientFriends.AcceptFriendRequest");
		
		UIGCozmoClientFriends_AcceptFriendRequest_Params params {};
		params.PlayerId = PlayerId;
		params.Callback = Callback;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ErrorString != nullptr)
			*ErrorString = params.ErrorString;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UIGCozmoClientFriends.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UIGCozmoClientFriends::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class IGCozmoClient.IGCozmoClientFriends");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGCozmoClient.IGCozmoClientGameClient.StopMatchmakingAsync
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FString                                      ErrorString                                                (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UIGCozmoClientGameClient::StopMatchmakingAsync(const class FScriptDelegate& Callback, class FString* ErrorString)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGCozmoClient.IGCozmoClientGameClient.StopMatchmakingAsync");
		
		UIGCozmoClientGameClient_StopMatchmakingAsync_Params params {};
		params.Callback = Callback;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ErrorString != nullptr)
			*ErrorString = params.ErrorString;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGCozmoClient.IGCozmoClientGameClient.StopMatchmaking
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      ErrorString                                                (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UIGCozmoClientGameClient::StopMatchmaking(class FString* ErrorString)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGCozmoClient.IGCozmoClientGameClient.StopMatchmaking");
		
		UIGCozmoClientGameClient_StopMatchmaking_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ErrorString != nullptr)
			*ErrorString = params.ErrorString;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGCozmoClient.IGCozmoClientGameClient.StartMatchmakingAsync
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FStartMatchmakingRequest                    Request                                                    (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FString                                      ErrorString                                                (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UIGCozmoClientGameClient::StartMatchmakingAsync(const struct FStartMatchmakingRequest& Request, const class FScriptDelegate& Callback, class FString* ErrorString)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGCozmoClient.IGCozmoClientGameClient.StartMatchmakingAsync");
		
		UIGCozmoClientGameClient_StartMatchmakingAsync_Params params {};
		params.Request = Request;
		params.Callback = Callback;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ErrorString != nullptr)
			*ErrorString = params.ErrorString;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGCozmoClient.IGCozmoClientGameClient.StartMatchmaking
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FStartMatchmakingRequest                    Request                                                    (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FString                                      ErrorString                                                (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UIGCozmoClientGameClient::StartMatchmaking(const struct FStartMatchmakingRequest& Request, class FString* ErrorString)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGCozmoClient.IGCozmoClientGameClient.StartMatchmaking");
		
		UIGCozmoClientGameClient_StartMatchmaking_Params params {};
		params.Request = Request;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ErrorString != nullptr)
			*ErrorString = params.ErrorString;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGCozmoClient.IGCozmoClientGameClient.SetServerType
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EServerHostType                                    Type                                                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UIGCozmoClientGameClient::SetServerType(EServerHostType Type)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGCozmoClient.IGCozmoClientGameClient.SetServerType");
		
		UIGCozmoClientGameClient_SetServerType_Params params {};
		params.Type = Type;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGCozmoClient.IGCozmoClientGameClient.SetPlayerAttributes
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FMatchmakerPlayerAttribute>          AttributeList                                              (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FString                                      MetaData                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FString                                      ErrorString                                                (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UIGCozmoClientGameClient::SetPlayerAttributes(TArray<struct FMatchmakerPlayerAttribute> AttributeList, const class FString& MetaData, const class FScriptDelegate& Callback, class FString* ErrorString)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGCozmoClient.IGCozmoClientGameClient.SetPlayerAttributes");
		
		UIGCozmoClientGameClient_SetPlayerAttributes_Params params {};
		params.AttributeList = AttributeList;
		params.MetaData = MetaData;
		params.Callback = Callback;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ErrorString != nullptr)
			*ErrorString = params.ErrorString;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGCozmoClient.IGCozmoClientGameClient.SearchGameSessionsAsync
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSearchGameSessionsRequest                  Request                                                    (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FString                                      ErrorString                                                (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UIGCozmoClientGameClient::SearchGameSessionsAsync(const struct FSearchGameSessionsRequest& Request, const class FScriptDelegate& Callback, class FString* ErrorString)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGCozmoClient.IGCozmoClientGameClient.SearchGameSessionsAsync");
		
		UIGCozmoClientGameClient_SearchGameSessionsAsync_Params params {};
		params.Request = Request;
		params.Callback = Callback;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ErrorString != nullptr)
			*ErrorString = params.ErrorString;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGCozmoClient.IGCozmoClientGameClient.SearchGameSessions
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSearchGameSessionsRequest                  Request                                                    (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		TArray<struct FCozmoGameSession>                   GameSessionList                                            (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 * 		class FString                                      ErrorString                                                (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UIGCozmoClientGameClient::SearchGameSessions(const struct FSearchGameSessionsRequest& Request, TArray<struct FCozmoGameSession>* GameSessionList, class FString* ErrorString)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGCozmoClient.IGCozmoClientGameClient.SearchGameSessions");
		
		UIGCozmoClientGameClient_SearchGameSessions_Params params {};
		params.Request = Request;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (GameSessionList != nullptr)
			*GameSessionList = params.GameSessionList;
		if (ErrorString != nullptr)
			*ErrorString = params.ErrorString;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGCozmoClient.IGCozmoClientGameClient.ResetState
	 * 		Flags  -> ()
	 */
	void UIGCozmoClientGameClient::ResetState()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGCozmoClient.IGCozmoClientGameClient.ResetState");
		
		UIGCozmoClientGameClient_ResetState_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGCozmoClient.IGCozmoClientGameClient.ListTaskDefinitionsAsync
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FString                                      ErrorString                                                (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UIGCozmoClientGameClient::ListTaskDefinitionsAsync(const class FScriptDelegate& Callback, class FString* ErrorString)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGCozmoClient.IGCozmoClientGameClient.ListTaskDefinitionsAsync");
		
		UIGCozmoClientGameClient_ListTaskDefinitionsAsync_Params params {};
		params.Callback = Callback;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ErrorString != nullptr)
			*ErrorString = params.ErrorString;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGCozmoClient.IGCozmoClientGameClient.ListTaskDefinitions
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<class FString>                              TaskDefinitions                                            (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 * 		class FString                                      ErrorString                                                (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UIGCozmoClientGameClient::ListTaskDefinitions(TArray<class FString>* TaskDefinitions, class FString* ErrorString)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGCozmoClient.IGCozmoClientGameClient.ListTaskDefinitions");
		
		UIGCozmoClientGameClient_ListTaskDefinitions_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (TaskDefinitions != nullptr)
			*TaskDefinitions = params.TaskDefinitions;
		if (ErrorString != nullptr)
			*ErrorString = params.ErrorString;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGCozmoClient.IGCozmoClientGameClient.ListMatchmakingConfigurationsAsync
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FString                                      ErrorString                                                (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UIGCozmoClientGameClient::ListMatchmakingConfigurationsAsync(const class FScriptDelegate& Callback, class FString* ErrorString)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGCozmoClient.IGCozmoClientGameClient.ListMatchmakingConfigurationsAsync");
		
		UIGCozmoClientGameClient_ListMatchmakingConfigurationsAsync_Params params {};
		params.Callback = Callback;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ErrorString != nullptr)
			*ErrorString = params.ErrorString;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGCozmoClient.IGCozmoClientGameClient.ListMatchmakingConfigurations
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FMatchmakingConfiguration>           ConfigurationList                                          (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 * 		class FString                                      ErrorString                                                (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UIGCozmoClientGameClient::ListMatchmakingConfigurations(TArray<struct FMatchmakingConfiguration>* ConfigurationList, class FString* ErrorString)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGCozmoClient.IGCozmoClientGameClient.ListMatchmakingConfigurations");
		
		UIGCozmoClientGameClient_ListMatchmakingConfigurations_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ConfigurationList != nullptr)
			*ConfigurationList = params.ConfigurationList;
		if (ErrorString != nullptr)
			*ErrorString = params.ErrorString;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGCozmoClient.IGCozmoClientGameClient.Init
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      GameVersionString                                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FIGCozmoUnifiedServerClientParams           ClientParams                                               (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	bool UIGCozmoClientGameClient::Init(const class FString& GameVersionString, const struct FIGCozmoUnifiedServerClientParams& ClientParams)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGCozmoClient.IGCozmoClientGameClient.Init");
		
		UIGCozmoClientGameClient_Init_Params params {};
		params.GameVersionString = GameVersionString;
		params.ClientParams = ClientParams;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGCozmoClient.IGCozmoClientGameClient.HasActiveMatchmakingRequest
	 * 		Flags  -> ()
	 */
	bool UIGCozmoClientGameClient::HasActiveMatchmakingRequest()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGCozmoClient.IGCozmoClientGameClient.HasActiveMatchmakingRequest");
		
		UIGCozmoClientGameClient_HasActiveMatchmakingRequest_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGCozmoClient.IGCozmoClientGameClient.DescribePlayerSessionsAsync
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FDescribePlayerSessionsRequest              Request                                                    (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FString                                      ErrorString                                                (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UIGCozmoClientGameClient::DescribePlayerSessionsAsync(const struct FDescribePlayerSessionsRequest& Request, const class FScriptDelegate& Callback, class FString* ErrorString)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGCozmoClient.IGCozmoClientGameClient.DescribePlayerSessionsAsync");
		
		UIGCozmoClientGameClient_DescribePlayerSessionsAsync_Params params {};
		params.Request = Request;
		params.Callback = Callback;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ErrorString != nullptr)
			*ErrorString = params.ErrorString;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGCozmoClient.IGCozmoClientGameClient.DescribePlayerSessions
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FDescribePlayerSessionsRequest              Request                                                    (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		TArray<struct FPlayerSession>                      PlayerSessionList                                          (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 * 		class FString                                      ErrorString                                                (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UIGCozmoClientGameClient::DescribePlayerSessions(const struct FDescribePlayerSessionsRequest& Request, TArray<struct FPlayerSession>* PlayerSessionList, class FString* ErrorString)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGCozmoClient.IGCozmoClientGameClient.DescribePlayerSessions");
		
		UIGCozmoClientGameClient_DescribePlayerSessions_Params params {};
		params.Request = Request;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (PlayerSessionList != nullptr)
			*PlayerSessionList = params.PlayerSessionList;
		if (ErrorString != nullptr)
			*ErrorString = params.ErrorString;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGCozmoClient.IGCozmoClientGameClient.DescribeGameSessionsAsync
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FDescribeGameSessionsRequest                Request                                                    (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FString                                      ErrorString                                                (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UIGCozmoClientGameClient::DescribeGameSessionsAsync(const struct FDescribeGameSessionsRequest& Request, const class FScriptDelegate& Callback, class FString* ErrorString)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGCozmoClient.IGCozmoClientGameClient.DescribeGameSessionsAsync");
		
		UIGCozmoClientGameClient_DescribeGameSessionsAsync_Params params {};
		params.Request = Request;
		params.Callback = Callback;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ErrorString != nullptr)
			*ErrorString = params.ErrorString;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGCozmoClient.IGCozmoClientGameClient.DescribeGameSessions
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FDescribeGameSessionsRequest                Request                                                    (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		TArray<struct FCozmoGameSession>                   GameSessionList                                            (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 * 		class FString                                      ErrorString                                                (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UIGCozmoClientGameClient::DescribeGameSessions(const struct FDescribeGameSessionsRequest& Request, TArray<struct FCozmoGameSession>* GameSessionList, class FString* ErrorString)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGCozmoClient.IGCozmoClientGameClient.DescribeGameSessions");
		
		UIGCozmoClientGameClient_DescribeGameSessions_Params params {};
		params.Request = Request;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (GameSessionList != nullptr)
			*GameSessionList = params.GameSessionList;
		if (ErrorString != nullptr)
			*ErrorString = params.ErrorString;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGCozmoClient.IGCozmoClientGameClient.CreatePlayerSessionAsync
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FCreatePlayerSessionsRequest                Request                                                    (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FString                                      ErrorString                                                (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UIGCozmoClientGameClient::CreatePlayerSessionAsync(const struct FCreatePlayerSessionsRequest& Request, const class FScriptDelegate& Callback, class FString* ErrorString)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGCozmoClient.IGCozmoClientGameClient.CreatePlayerSessionAsync");
		
		UIGCozmoClientGameClient_CreatePlayerSessionAsync_Params params {};
		params.Request = Request;
		params.Callback = Callback;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ErrorString != nullptr)
			*ErrorString = params.ErrorString;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGCozmoClient.IGCozmoClientGameClient.CreatePlayerSession
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FCreatePlayerSessionsRequest                Request                                                    (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		struct FPlayerSession                              CreatedPlayerSession                                       (Parm, OutParm, NativeAccessSpecifierPublic)
	 * 		class FString                                      ErrorString                                                (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UIGCozmoClientGameClient::CreatePlayerSession(const struct FCreatePlayerSessionsRequest& Request, struct FPlayerSession* CreatedPlayerSession, class FString* ErrorString)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGCozmoClient.IGCozmoClientGameClient.CreatePlayerSession");
		
		UIGCozmoClientGameClient_CreatePlayerSession_Params params {};
		params.Request = Request;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (CreatedPlayerSession != nullptr)
			*CreatedPlayerSession = params.CreatedPlayerSession;
		if (ErrorString != nullptr)
			*ErrorString = params.ErrorString;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGCozmoClient.IGCozmoClientGameClient.CreateGameSessionAsync
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FCreateGameSessionsRequest                  Request                                                    (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FString                                      ErrorString                                                (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UIGCozmoClientGameClient::CreateGameSessionAsync(const struct FCreateGameSessionsRequest& Request, const class FScriptDelegate& Callback, class FString* ErrorString)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGCozmoClient.IGCozmoClientGameClient.CreateGameSessionAsync");
		
		UIGCozmoClientGameClient_CreateGameSessionAsync_Params params {};
		params.Request = Request;
		params.Callback = Callback;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ErrorString != nullptr)
			*ErrorString = params.ErrorString;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGCozmoClient.IGCozmoClientGameClient.CreateGameSession
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FCreateGameSessionsRequest                  Request                                                    (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		struct FCozmoGameSession                           CreatedGameSession                                         (Parm, OutParm, NativeAccessSpecifierPublic)
	 * 		class FString                                      ErrorString                                                (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UIGCozmoClientGameClient::CreateGameSession(const struct FCreateGameSessionsRequest& Request, struct FCozmoGameSession* CreatedGameSession, class FString* ErrorString)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGCozmoClient.IGCozmoClientGameClient.CreateGameSession");
		
		UIGCozmoClientGameClient_CreateGameSession_Params params {};
		params.Request = Request;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (CreatedGameSession != nullptr)
			*CreatedGameSession = params.CreatedGameSession;
		if (ErrorString != nullptr)
			*ErrorString = params.ErrorString;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGCozmoClient.IGCozmoClientGameClient.CozmoHasGameClient
	 * 		Flags  -> ()
	 */
	bool UIGCozmoClientGameClient::CozmoHasGameClient()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGCozmoClient.IGCozmoClientGameClient.CozmoHasGameClient");
		
		UIGCozmoClientGameClient_CozmoHasGameClient_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGCozmoClient.IGCozmoClientGameClient.ClearGameSession
	 * 		Flags  -> ()
	 */
	void UIGCozmoClientGameClient::ClearGameSession()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGCozmoClient.IGCozmoClientGameClient.ClearGameSession");
		
		UIGCozmoClientGameClient_ClearGameSession_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UIGCozmoClientGameClient.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UIGCozmoClientGameClient::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class IGCozmoClient.IGCozmoClientGameClient");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGCozmoClient.IGCozmoClientLegalDocs.GetRequiredLegalDocs
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Country                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Language                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FString                                      ErrorString                                                (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UIGCozmoClientLegalDocs::GetRequiredLegalDocs(const class FString& Country, const class FString& Language, const class FScriptDelegate& Callback, class FString* ErrorString)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGCozmoClient.IGCozmoClientLegalDocs.GetRequiredLegalDocs");
		
		UIGCozmoClientLegalDocs_GetRequiredLegalDocs_Params params {};
		params.Country = Country;
		params.Language = Language;
		params.Callback = Callback;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ErrorString != nullptr)
			*ErrorString = params.ErrorString;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGCozmoClient.IGCozmoClientLegalDocs.ClearAcceptedLegalDocs
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FString                                      ErrorString                                                (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UIGCozmoClientLegalDocs::ClearAcceptedLegalDocs(const class FScriptDelegate& Callback, class FString* ErrorString)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGCozmoClient.IGCozmoClientLegalDocs.ClearAcceptedLegalDocs");
		
		UIGCozmoClientLegalDocs_ClearAcceptedLegalDocs_Params params {};
		params.Callback = Callback;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ErrorString != nullptr)
			*ErrorString = params.ErrorString;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGCozmoClient.IGCozmoClientLegalDocs.AcceptLegalDoc
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      DocName                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FString                                      ErrorString                                                (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UIGCozmoClientLegalDocs::AcceptLegalDoc(const class FString& DocName, const class FScriptDelegate& Callback, class FString* ErrorString)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGCozmoClient.IGCozmoClientLegalDocs.AcceptLegalDoc");
		
		UIGCozmoClientLegalDocs_AcceptLegalDoc_Params params {};
		params.DocName = DocName;
		params.Callback = Callback;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ErrorString != nullptr)
			*ErrorString = params.ErrorString;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UIGCozmoClientLegalDocs.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UIGCozmoClientLegalDocs::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class IGCozmoClient.IGCozmoClientLegalDocs");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGCozmoClient.IGCozmoClientLogin.GetLoginTicket
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGetLoginTicketRequest                      Request                                                    (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FString                                      ErrorString                                                (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UIGCozmoClientLogin::GetLoginTicket(const struct FGetLoginTicketRequest& Request, const class FScriptDelegate& Callback, class FString* ErrorString)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGCozmoClient.IGCozmoClientLogin.GetLoginTicket");
		
		UIGCozmoClientLogin_GetLoginTicket_Params params {};
		params.Request = Request;
		params.Callback = Callback;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ErrorString != nullptr)
			*ErrorString = params.ErrorString;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UIGCozmoClientLogin.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UIGCozmoClientLogin::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class IGCozmoClient.IGCozmoClientLogin");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGCozmoClient.IGCozmoClientParty.LeaveParty
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FString                                      ErrorString                                                (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UIGCozmoClientParty::LeaveParty(const class FScriptDelegate& Callback, class FString* ErrorString)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGCozmoClient.IGCozmoClientParty.LeaveParty");
		
		UIGCozmoClientParty_LeaveParty_Params params {};
		params.Callback = Callback;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ErrorString != nullptr)
			*ErrorString = params.ErrorString;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGCozmoClient.IGCozmoClientParty.KickPlayer
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      PlayerId                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FString                                      ErrorString                                                (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UIGCozmoClientParty::KickPlayer(const class FString& PlayerId, const class FScriptDelegate& Callback, class FString* ErrorString)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGCozmoClient.IGCozmoClientParty.KickPlayer");
		
		UIGCozmoClientParty_KickPlayer_Params params {};
		params.PlayerId = PlayerId;
		params.Callback = Callback;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ErrorString != nullptr)
			*ErrorString = params.ErrorString;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGCozmoClient.IGCozmoClientParty.JoinParty
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      PartyId                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FString                                      ErrorString                                                (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UIGCozmoClientParty::JoinParty(const class FString& PartyId, const class FScriptDelegate& Callback, class FString* ErrorString)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGCozmoClient.IGCozmoClientParty.JoinParty");
		
		UIGCozmoClientParty_JoinParty_Params params {};
		params.PartyId = PartyId;
		params.Callback = Callback;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ErrorString != nullptr)
			*ErrorString = params.ErrorString;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGCozmoClient.IGCozmoClientParty.IsPartyLeader
	 * 		Flags  -> ()
	 */
	bool UIGCozmoClientParty::IsPartyLeader()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGCozmoClient.IGCozmoClientParty.IsPartyLeader");
		
		UIGCozmoClientParty_IsPartyLeader_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGCozmoClient.IGCozmoClientParty.IsInParty
	 * 		Flags  -> ()
	 */
	bool UIGCozmoClientParty::IsInParty()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGCozmoClient.IGCozmoClientParty.IsInParty");
		
		UIGCozmoClientParty_IsInParty_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGCozmoClient.IGCozmoClientParty.InvitePlayer
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      PlayerId                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FString                                      ErrorString                                                (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UIGCozmoClientParty::InvitePlayer(const class FString& PlayerId, const class FScriptDelegate& Callback, class FString* ErrorString)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGCozmoClient.IGCozmoClientParty.InvitePlayer");
		
		UIGCozmoClientParty_InvitePlayer_Params params {};
		params.PlayerId = PlayerId;
		params.Callback = Callback;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ErrorString != nullptr)
			*ErrorString = params.ErrorString;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGCozmoClient.IGCozmoClientParty.IgnoreInvitation
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      PartyId                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UIGCozmoClientParty::IgnoreInvitation(const class FString& PartyId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGCozmoClient.IGCozmoClientParty.IgnoreInvitation");
		
		UIGCozmoClientParty_IgnoreInvitation_Params params {};
		params.PartyId = PartyId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGCozmoClient.IGCozmoClientParty.GetPartyMembers
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bIncludeCurrentPlayer                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	TArray<struct FPartyMemberInfo> UIGCozmoClientParty::GetPartyMembers(bool bIncludeCurrentPlayer)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGCozmoClient.IGCozmoClientParty.GetPartyMembers");
		
		UIGCozmoClientParty_GetPartyMembers_Params params {};
		params.bIncludeCurrentPlayer = bIncludeCurrentPlayer;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGCozmoClient.IGCozmoClientParty.GetPartyLeaderId
	 * 		Flags  -> ()
	 */
	class FString UIGCozmoClientParty::GetPartyLeaderId()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGCozmoClient.IGCozmoClientParty.GetPartyLeaderId");
		
		UIGCozmoClientParty_GetPartyLeaderId_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGCozmoClient.IGCozmoClientParty.GetPartyID
	 * 		Flags  -> ()
	 */
	class FString UIGCozmoClientParty::GetPartyID()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGCozmoClient.IGCozmoClientParty.GetPartyID");
		
		UIGCozmoClientParty_GetPartyID_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGCozmoClient.IGCozmoClientParty.GetInvitations
	 * 		Flags  -> ()
	 */
	TArray<struct FPartyInvitation> UIGCozmoClientParty::GetInvitations()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGCozmoClient.IGCozmoClientParty.GetInvitations");
		
		UIGCozmoClientParty_GetInvitations_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGCozmoClient.IGCozmoClientParty.CreateParty
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            MaxPlayers                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FString                                      ErrorString                                                (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UIGCozmoClientParty::CreateParty(int32_t MaxPlayers, const class FScriptDelegate& Callback, class FString* ErrorString)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGCozmoClient.IGCozmoClientParty.CreateParty");
		
		UIGCozmoClientParty_CreateParty_Params params {};
		params.MaxPlayers = MaxPlayers;
		params.Callback = Callback;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ErrorString != nullptr)
			*ErrorString = params.ErrorString;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGCozmoClient.IGCozmoClientParty.ChangeLeader
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      PlayerId                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FString                                      ErrorString                                                (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UIGCozmoClientParty::ChangeLeader(const class FString& PlayerId, const class FScriptDelegate& Callback, class FString* ErrorString)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGCozmoClient.IGCozmoClientParty.ChangeLeader");
		
		UIGCozmoClientParty_ChangeLeader_Params params {};
		params.PlayerId = PlayerId;
		params.Callback = Callback;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ErrorString != nullptr)
			*ErrorString = params.ErrorString;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGCozmoClient.IGCozmoClientParty.BroadcastToParty
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Content                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FString                                      ErrorString                                                (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UIGCozmoClientParty::BroadcastToParty(const class FString& Content, const class FScriptDelegate& Callback, class FString* ErrorString)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGCozmoClient.IGCozmoClientParty.BroadcastToParty");
		
		UIGCozmoClientParty_BroadcastToParty_Params params {};
		params.Content = Content;
		params.Callback = Callback;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ErrorString != nullptr)
			*ErrorString = params.ErrorString;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UIGCozmoClientParty.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UIGCozmoClientParty::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class IGCozmoClient.IGCozmoClientParty");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGCozmoClient.IGCozmoClientPlayerPresence.SetPresence
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FPlayerPresence                             PlayerPresence                                             (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FString                                      ErrorString                                                (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UIGCozmoClientPlayerPresence::SetPresence(const struct FPlayerPresence& PlayerPresence, const class FScriptDelegate& Callback, class FString* ErrorString)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGCozmoClient.IGCozmoClientPlayerPresence.SetPresence");
		
		UIGCozmoClientPlayerPresence_SetPresence_Params params {};
		params.PlayerPresence = PlayerPresence;
		params.Callback = Callback;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ErrorString != nullptr)
			*ErrorString = params.ErrorString;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGCozmoClient.IGCozmoClientPlayerPresence.RefreshPresence
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<class FString>                              PlayerIds                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FString                                      ErrorString                                                (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UIGCozmoClientPlayerPresence::RefreshPresence(TArray<class FString> PlayerIds, class FString* ErrorString)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGCozmoClient.IGCozmoClientPlayerPresence.RefreshPresence");
		
		UIGCozmoClientPlayerPresence_RefreshPresence_Params params {};
		params.PlayerIds = PlayerIds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ErrorString != nullptr)
			*ErrorString = params.ErrorString;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGCozmoClient.IGCozmoClientPlayerPresence.GetPresence
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      PlayerId                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FString                                      ErrorString                                                (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UIGCozmoClientPlayerPresence::GetPresence(const class FString& PlayerId, const class FScriptDelegate& Callback, class FString* ErrorString)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGCozmoClient.IGCozmoClientPlayerPresence.GetPresence");
		
		UIGCozmoClientPlayerPresence_GetPresence_Params params {};
		params.PlayerId = PlayerId;
		params.Callback = Callback;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ErrorString != nullptr)
			*ErrorString = params.ErrorString;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UIGCozmoClientPlayerPresence.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UIGCozmoClientPlayerPresence::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class IGCozmoClient.IGCozmoClientPlayerPresence");
		return ptr;
	}

}


