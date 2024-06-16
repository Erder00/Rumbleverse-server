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
	 * 		Name   -> Function IGCozmoServer.IGCozmoServerDedicatedServer.RemovePlayerSessionAsync
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      PlayerSessionId                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FString                                      ErrorString                                                (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UIGCozmoServerDedicatedServer::RemovePlayerSessionAsync(const class FString& PlayerSessionId, const class FScriptDelegate& Callback, class FString* ErrorString)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGCozmoServer.IGCozmoServerDedicatedServer.RemovePlayerSessionAsync");
		
		UIGCozmoServerDedicatedServer_RemovePlayerSessionAsync_Params params {};
		params.PlayerSessionId = PlayerSessionId;
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
	 * 		Name   -> Function IGCozmoServer.IGCozmoServerDedicatedServer.RemovePlayerSession
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      PlayerSessionId                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      ErrorString                                                (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UIGCozmoServerDedicatedServer::RemovePlayerSession(const class FString& PlayerSessionId, class FString* ErrorString)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGCozmoServer.IGCozmoServerDedicatedServer.RemovePlayerSession");
		
		UIGCozmoServerDedicatedServer_RemovePlayerSession_Params params {};
		params.PlayerSessionId = PlayerSessionId;
		
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
	 * 		Name   -> Function IGCozmoServer.IGCozmoServerDedicatedServer.HasFinishedPreauthorization
	 * 		Flags  -> ()
	 */
	bool UIGCozmoServerDedicatedServer::HasFinishedPreauthorization()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGCozmoServer.IGCozmoServerDedicatedServer.HasFinishedPreauthorization");
		
		UIGCozmoServerDedicatedServer_HasFinishedPreauthorization_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGCozmoServer.IGCozmoServerDedicatedServer.GrantCode
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FCozmoGrantCodeRequest                      Request                                                    (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FString                                      ErrorString                                                (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UIGCozmoServerDedicatedServer::GrantCode(const struct FCozmoGrantCodeRequest& Request, const class FScriptDelegate& Callback, class FString* ErrorString)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGCozmoServer.IGCozmoServerDedicatedServer.GrantCode");
		
		UIGCozmoServerDedicatedServer_GrantCode_Params params {};
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
	 * 		Name   -> Function IGCozmoServer.IGCozmoServerDedicatedServer.CozmoHasDedicatedServer
	 * 		Flags  -> ()
	 */
	bool UIGCozmoServerDedicatedServer::CozmoHasDedicatedServer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGCozmoServer.IGCozmoServerDedicatedServer.CozmoHasDedicatedServer");
		
		UIGCozmoServerDedicatedServer_CozmoHasDedicatedServer_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGCozmoServer.IGCozmoServerDedicatedServer.AcceptPlayerSessionAsync
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      PlayerSessionId                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FString                                      ErrorString                                                (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UIGCozmoServerDedicatedServer::AcceptPlayerSessionAsync(const class FString& PlayerSessionId, const class FScriptDelegate& Callback, class FString* ErrorString)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGCozmoServer.IGCozmoServerDedicatedServer.AcceptPlayerSessionAsync");
		
		UIGCozmoServerDedicatedServer_AcceptPlayerSessionAsync_Params params {};
		params.PlayerSessionId = PlayerSessionId;
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
	 * 		Name   -> Function IGCozmoServer.IGCozmoServerDedicatedServer.AcceptPlayerSession
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      PlayerSessionId                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      ErrorString                                                (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UIGCozmoServerDedicatedServer::AcceptPlayerSession(const class FString& PlayerSessionId, class FString* ErrorString)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGCozmoServer.IGCozmoServerDedicatedServer.AcceptPlayerSession");
		
		UIGCozmoServerDedicatedServer_AcceptPlayerSession_Params params {};
		params.PlayerSessionId = PlayerSessionId;
		
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
	 * 		Name   -> PredefinedFunction UIGCozmoServerDedicatedServer.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UIGCozmoServerDedicatedServer::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class IGCozmoServer.IGCozmoServerDedicatedServer");
		return ptr;
	}

}


