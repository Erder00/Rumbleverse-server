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
	 * 		Name   -> Function IGCozmoCommon.IGCozmoCommon.Shutdown
	 * 		Flags  -> ()
	 */
	void UIGCozmoCommon::Shutdown()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGCozmoCommon.IGCozmoCommon.Shutdown");
		
		UIGCozmoCommon_Shutdown_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGCozmoCommon.IGCozmoCommon.ShouldLogUnsupportedPlatformErrors
	 * 		Flags  -> ()
	 */
	bool UIGCozmoCommon::ShouldLogUnsupportedPlatformErrors()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGCozmoCommon.IGCozmoCommon.ShouldLogUnsupportedPlatformErrors");
		
		UIGCozmoCommon_ShouldLogUnsupportedPlatformErrors_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGCozmoCommon.IGCozmoCommon.SetLogUnsupportedPlatformErrors
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bEnable                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UIGCozmoCommon::SetLogUnsupportedPlatformErrors(bool bEnable)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGCozmoCommon.IGCozmoCommon.SetLogUnsupportedPlatformErrors");
		
		UIGCozmoCommon_SetLogUnsupportedPlatformErrors_Params params {};
		params.bEnable = bEnable;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGCozmoCommon.IGCozmoCommon.SetLoggerMode
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ECozmoLoggerMode                                   logMode                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UIGCozmoCommon::SetLoggerMode(ECozmoLoggerMode logMode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGCozmoCommon.IGCozmoCommon.SetLoggerMode");
		
		UIGCozmoCommon_SetLoggerMode_Params params {};
		params.logMode = logMode;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGCozmoCommon.IGCozmoCommon.SetIsEditor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bShouldWait                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UIGCozmoCommon::SetIsEditor(bool bShouldWait)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGCozmoCommon.IGCozmoCommon.SetIsEditor");
		
		UIGCozmoCommon_SetIsEditor_Params params {};
		params.bShouldWait = bShouldWait;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGCozmoCommon.IGCozmoCommon.SetGameVersion
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      GameVersion                                                (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UIGCozmoCommon::SetGameVersion(const class FString& GameVersion)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGCozmoCommon.IGCozmoCommon.SetGameVersion");
		
		UIGCozmoCommon_SetGameVersion_Params params {};
		params.GameVersion = GameVersion;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGCozmoCommon.IGCozmoCommon.SetEnableMemoryLogging
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bEnabled                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UIGCozmoCommon::SetEnableMemoryLogging(bool bEnabled)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGCozmoCommon.IGCozmoCommon.SetEnableMemoryLogging");
		
		UIGCozmoCommon_SetEnableMemoryLogging_Params params {};
		params.bEnabled = bEnabled;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGCozmoCommon.IGCozmoCommon.SetCozmoTimeouts
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FCozmoTimeoutConfig                         Config                                                     (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UIGCozmoCommon::SetCozmoTimeouts(const struct FCozmoTimeoutConfig& Config)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGCozmoCommon.IGCozmoCommon.SetCozmoTimeouts");
		
		UIGCozmoCommon_SetCozmoTimeouts_Params params {};
		params.Config = Config;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGCozmoCommon.IGCozmoCommon.ResetState
	 * 		Flags  -> ()
	 */
	void UIGCozmoCommon::ResetState()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGCozmoCommon.IGCozmoCommon.ResetState");
		
		UIGCozmoCommon_ResetState_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGCozmoCommon.IGCozmoCommon.IsValidCozmoRegion
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Region                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UIGCozmoCommon::IsValidCozmoRegion(int32_t Region)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGCozmoCommon.IGCozmoCommon.IsValidCozmoRegion");
		
		UIGCozmoCommon_IsValidCozmoRegion_Params params {};
		params.Region = Region;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGCozmoCommon.IGCozmoCommon.IsNullCozmoBackend
	 * 		Flags  -> ()
	 */
	bool UIGCozmoCommon::IsNullCozmoBackend()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGCozmoCommon.IGCozmoCommon.IsNullCozmoBackend");
		
		UIGCozmoCommon_IsNullCozmoBackend_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGCozmoCommon.IGCozmoCommon.IsLoggerEnabled
	 * 		Flags  -> ()
	 */
	bool UIGCozmoCommon::IsLoggerEnabled()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGCozmoCommon.IGCozmoCommon.IsLoggerEnabled");
		
		UIGCozmoCommon_IsLoggerEnabled_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGCozmoCommon.IGCozmoCommon.IsInitialized
	 * 		Flags  -> ()
	 */
	bool UIGCozmoCommon::IsInitialized()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGCozmoCommon.IGCozmoCommon.IsInitialized");
		
		UIGCozmoCommon_IsInitialized_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGCozmoCommon.IGCozmoCommon.IsEditorWorld
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UIGCozmoCommon::IsEditorWorld(class UObject* WorldContextObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGCozmoCommon.IGCozmoCommon.IsEditorWorld");
		
		UIGCozmoCommon_IsEditorWorld_Params params {};
		params.WorldContextObject = WorldContextObject;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGCozmoCommon.IGCozmoCommon.Init
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      InLogPath                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      InFilePath                                                 (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bCreateCallbackManager                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UIGCozmoCommon::Init(const class FString& InLogPath, const class FString& InFilePath, bool bCreateCallbackManager)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGCozmoCommon.IGCozmoCommon.Init");
		
		UIGCozmoCommon_Init_Params params {};
		params.InLogPath = InLogPath;
		params.InFilePath = InFilePath;
		params.bCreateCallbackManager = bCreateCallbackManager;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGCozmoCommon.IGCozmoCommon.ImportDLL
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      ErrorInfo                                                  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UIGCozmoCommon::ImportDLL(class FString* ErrorInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGCozmoCommon.IGCozmoCommon.ImportDLL");
		
		UIGCozmoCommon_ImportDLL_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ErrorInfo != nullptr)
			*ErrorInfo = params.ErrorInfo;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGCozmoCommon.IGCozmoCommon.GetServerTime
	 * 		Flags  -> ()
	 */
	struct FDateTime UIGCozmoCommon::GetServerTime()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGCozmoCommon.IGCozmoCommon.GetServerTime");
		
		UIGCozmoCommon_GetServerTime_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGCozmoCommon.IGCozmoCommon.GetRegionName
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Region                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class FString UIGCozmoCommon::GetRegionName(int32_t Region)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGCozmoCommon.IGCozmoCommon.GetRegionName");
		
		UIGCozmoCommon_GetRegionName_Params params {};
		params.Region = Region;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGCozmoCommon.IGCozmoCommon.GetRegionalLatency
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Region                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	int32_t UIGCozmoCommon::GetRegionalLatency(int32_t Region)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGCozmoCommon.IGCozmoCommon.GetRegionalLatency");
		
		UIGCozmoCommon_GetRegionalLatency_Params params {};
		params.Region = Region;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGCozmoCommon.IGCozmoCommon.GetGameSessionId
	 * 		Flags  -> ()
	 */
	class FString UIGCozmoCommon::GetGameSessionId()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGCozmoCommon.IGCozmoCommon.GetGameSessionId");
		
		UIGCozmoCommon_GetGameSessionId_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGCozmoCommon.IGCozmoCommon.GetEstimatedMemoryWatermark
	 * 		Flags  -> ()
	 */
	int32_t UIGCozmoCommon::GetEstimatedMemoryWatermark()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGCozmoCommon.IGCozmoCommon.GetEstimatedMemoryWatermark");
		
		UIGCozmoCommon_GetEstimatedMemoryWatermark_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGCozmoCommon.IGCozmoCommon.GetEstimatedMemoryUsage
	 * 		Flags  -> ()
	 */
	int32_t UIGCozmoCommon::GetEstimatedMemoryUsage()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGCozmoCommon.IGCozmoCommon.GetEstimatedMemoryUsage");
		
		UIGCozmoCommon_GetEstimatedMemoryUsage_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGCozmoCommon.IGCozmoCommon.GetConfigurationInfo
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FCozmoConfigurationInfo                     OutConfigInfo                                              (Parm, OutParm, NativeAccessSpecifierPublic)
	 */
	bool UIGCozmoCommon::GetConfigurationInfo(struct FCozmoConfigurationInfo* OutConfigInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGCozmoCommon.IGCozmoCommon.GetConfigurationInfo");
		
		UIGCozmoCommon_GetConfigurationInfo_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutConfigInfo != nullptr)
			*OutConfigInfo = params.OutConfigInfo;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGCozmoCommon.IGCozmoCommon.GetCallbackManager
	 * 		Flags  -> ()
	 */
	class UIGCozmoCommonCallbackManager* UIGCozmoCommon::GetCallbackManager()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGCozmoCommon.IGCozmoCommon.GetCallbackManager");
		
		UIGCozmoCommon_GetCallbackManager_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGCozmoCommon.IGCozmoCommon.GetAvailableRegions
	 * 		Flags  -> ()
	 */
	TArray<int32_t> UIGCozmoCommon::GetAvailableRegions()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGCozmoCommon.IGCozmoCommon.GetAvailableRegions");
		
		UIGCozmoCommon_GetAvailableRegions_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGCozmoCommon.IGCozmoCommon.FreeDLL
	 * 		Flags  -> ()
	 */
	void UIGCozmoCommon::FreeDLL()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGCozmoCommon.IGCozmoCommon.FreeDLL");
		
		UIGCozmoCommon_FreeDLL_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGCozmoCommon.IGCozmoCommon.CreateCallbackManager
	 * 		Flags  -> ()
	 */
	void UIGCozmoCommon::CreateCallbackManager()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGCozmoCommon.IGCozmoCommon.CreateCallbackManager");
		
		UIGCozmoCommon_CreateCallbackManager_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGCozmoCommon.IGCozmoCommon.CozmoHasCozmoCommon
	 * 		Flags  -> ()
	 */
	bool UIGCozmoCommon::CozmoHasCozmoCommon()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGCozmoCommon.IGCozmoCommon.CozmoHasCozmoCommon");
		
		UIGCozmoCommon_CozmoHasCozmoCommon_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UIGCozmoCommon.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UIGCozmoCommon::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class IGCozmoCommon.IGCozmoCommon");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGCozmoCommon.IGCozmoCommonAccounts.UnblockPlayer
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      UnblockedPlayer                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FString                                      ErrorString                                                (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UIGCozmoCommonAccounts::UnblockPlayer(const class FString& UnblockedPlayer, const class FScriptDelegate& Callback, class FString* ErrorString)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGCozmoCommon.IGCozmoCommonAccounts.UnblockPlayer");
		
		UIGCozmoCommonAccounts_UnblockPlayer_Params params {};
		params.UnblockedPlayer = UnblockedPlayer;
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
	 * 		Name   -> Function IGCozmoCommon.IGCozmoCommonAccounts.SetUsernameSuffix
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Suffix                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UIGCozmoCommonAccounts::SetUsernameSuffix(const class FString& Suffix)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGCozmoCommon.IGCozmoCommonAccounts.SetUsernameSuffix");
		
		UIGCozmoCommonAccounts_SetUsernameSuffix_Params params {};
		params.Suffix = Suffix;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGCozmoCommon.IGCozmoCommonAccounts.QueryBanInfo
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FQueryBanInfoRequest                        Request                                                    (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FString                                      ErrorString                                                (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UIGCozmoCommonAccounts::QueryBanInfo(const struct FQueryBanInfoRequest& Request, const class FScriptDelegate& Callback, class FString* ErrorString)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGCozmoCommon.IGCozmoCommonAccounts.QueryBanInfo");
		
		UIGCozmoCommonAccounts_QueryBanInfo_Params params {};
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
	 * 		Name   -> Function IGCozmoCommon.IGCozmoCommonAccounts.PasteCozmoIdFromClipboard
	 * 		Flags  -> ()
	 */
	class FString UIGCozmoCommonAccounts::PasteCozmoIdFromClipboard()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGCozmoCommon.IGCozmoCommonAccounts.PasteCozmoIdFromClipboard");
		
		UIGCozmoCommonAccounts_PasteCozmoIdFromClipboard_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGCozmoCommon.IGCozmoCommonAccounts.IsAuthenticated
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      ErrorString                                                (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UIGCozmoCommonAccounts::IsAuthenticated(class FString* ErrorString)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGCozmoCommon.IGCozmoCommonAccounts.IsAuthenticated");
		
		UIGCozmoCommonAccounts_IsAuthenticated_Params params {};
		
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
	 * 		Name   -> Function IGCozmoCommon.IGCozmoCommonAccounts.GetUniquePlatformUserId
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            LocalUserNum                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bCanShowLoginUI                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      UserId                                                     (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bUseNullOSS                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bAllowLocalUsers                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UIGCozmoCommonAccounts::GetUniquePlatformUserId(int32_t LocalUserNum, bool bCanShowLoginUI, class FString* UserId, bool bUseNullOSS, bool bAllowLocalUsers)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGCozmoCommon.IGCozmoCommonAccounts.GetUniquePlatformUserId");
		
		UIGCozmoCommonAccounts_GetUniquePlatformUserId_Params params {};
		params.LocalUserNum = LocalUserNum;
		params.bCanShowLoginUI = bCanShowLoginUI;
		params.bUseNullOSS = bUseNullOSS;
		params.bAllowLocalUsers = bAllowLocalUsers;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (UserId != nullptr)
			*UserId = params.UserId;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGCozmoCommon.IGCozmoCommonAccounts.GetPlatformUsername
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            LocalUserNum                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      UserName                                                   (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UIGCozmoCommonAccounts::GetPlatformUsername(int32_t LocalUserNum, class FString* UserName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGCozmoCommon.IGCozmoCommonAccounts.GetPlatformUsername");
		
		UIGCozmoCommonAccounts_GetPlatformUsername_Params params {};
		params.LocalUserNum = LocalUserNum;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (UserName != nullptr)
			*UserName = params.UserName;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGCozmoCommon.IGCozmoCommonAccounts.GetLastAuthenticationResult
	 * 		Flags  -> ()
	 */
	struct FAuthenticationResult UIGCozmoCommonAccounts::GetLastAuthenticationResult()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGCozmoCommon.IGCozmoCommonAccounts.GetLastAuthenticationResult");
		
		UIGCozmoCommonAccounts_GetLastAuthenticationResult_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGCozmoCommon.IGCozmoCommonAccounts.GetBlockedPlayers
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FString                                      ErrorString                                                (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UIGCozmoCommonAccounts::GetBlockedPlayers(const class FScriptDelegate& Callback, class FString* ErrorString)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGCozmoCommon.IGCozmoCommonAccounts.GetBlockedPlayers");
		
		UIGCozmoCommonAccounts_GetBlockedPlayers_Params params {};
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
	 * 		Name   -> Function IGCozmoCommon.IGCozmoCommonAccounts.GetAccountsInfoAsync
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGetAccountsRequest                         Request                                                    (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FString                                      ErrorString                                                (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UIGCozmoCommonAccounts::GetAccountsInfoAsync(const struct FGetAccountsRequest& Request, const class FScriptDelegate& Callback, class FString* ErrorString)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGCozmoCommon.IGCozmoCommonAccounts.GetAccountsInfoAsync");
		
		UIGCozmoCommonAccounts_GetAccountsInfoAsync_Params params {};
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
	 * 		Name   -> Function IGCozmoCommon.IGCozmoCommonAccounts.GetAccountInfoAsync
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGetAccountRequest                          Request                                                    (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FString                                      ErrorString                                                (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UIGCozmoCommonAccounts::GetAccountInfoAsync(const struct FGetAccountRequest& Request, const class FScriptDelegate& Callback, class FString* ErrorString)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGCozmoCommon.IGCozmoCommonAccounts.GetAccountInfoAsync");
		
		UIGCozmoCommonAccounts_GetAccountInfoAsync_Params params {};
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
	 * 		Name   -> Function IGCozmoCommon.IGCozmoCommonAccounts.GetAccountInfo
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FCozmoUserLoginInfo                         OutLoginInfo                                               (Parm, OutParm, NativeAccessSpecifierPublic)
	 * 		class FString                                      ErrorString                                                (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UIGCozmoCommonAccounts::GetAccountInfo(struct FCozmoUserLoginInfo* OutLoginInfo, class FString* ErrorString)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGCozmoCommon.IGCozmoCommonAccounts.GetAccountInfo");
		
		UIGCozmoCommonAccounts_GetAccountInfo_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutLoginInfo != nullptr)
			*OutLoginInfo = params.OutLoginInfo;
		if (ErrorString != nullptr)
			*ErrorString = params.ErrorString;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGCozmoCommon.IGCozmoCommonAccounts.CopyCozmoIdToClipboard
	 * 		Flags  -> ()
	 */
	void UIGCozmoCommonAccounts::CopyCozmoIdToClipboard()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGCozmoCommon.IGCozmoCommonAccounts.CopyCozmoIdToClipboard");
		
		UIGCozmoCommonAccounts_CopyCozmoIdToClipboard_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGCozmoCommon.IGCozmoCommonAccounts.BlockPlayer
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      BlockedPlayer                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FString                                      ErrorString                                                (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UIGCozmoCommonAccounts::BlockPlayer(const class FString& BlockedPlayer, const class FScriptDelegate& Callback, class FString* ErrorString)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGCozmoCommon.IGCozmoCommonAccounts.BlockPlayer");
		
		UIGCozmoCommonAccounts_BlockPlayer_Params params {};
		params.BlockedPlayer = BlockedPlayer;
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
	 * 		Name   -> Function IGCozmoCommon.IGCozmoCommonAccounts.AuthenticatePlatformToken
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FAuthenticatePlatformTokenRequest           Request                                                    (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FString                                      ErrorString                                                (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UIGCozmoCommonAccounts::AuthenticatePlatformToken(const struct FAuthenticatePlatformTokenRequest& Request, const class FScriptDelegate& Callback, class FString* ErrorString)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGCozmoCommon.IGCozmoCommonAccounts.AuthenticatePlatformToken");
		
		UIGCozmoCommonAccounts_AuthenticatePlatformToken_Params params {};
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
	 * 		Name   -> Function IGCozmoCommon.IGCozmoCommonAccounts.AuthenticateGuestAsync
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      UserName                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FString                                      ErrorString                                                (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UIGCozmoCommonAccounts::AuthenticateGuestAsync(const class FString& UserName, const class FScriptDelegate& Callback, class FString* ErrorString)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGCozmoCommon.IGCozmoCommonAccounts.AuthenticateGuestAsync");
		
		UIGCozmoCommonAccounts_AuthenticateGuestAsync_Params params {};
		params.UserName = UserName;
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
	 * 		Name   -> Function IGCozmoCommon.IGCozmoCommonAccounts.AuthenticateGuest
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      UserName                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      ErrorString                                                (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UIGCozmoCommonAccounts::AuthenticateGuest(const class FString& UserName, class FString* ErrorString)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGCozmoCommon.IGCozmoCommonAccounts.AuthenticateGuest");
		
		UIGCozmoCommonAccounts_AuthenticateGuest_Params params {};
		params.UserName = UserName;
		
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
	 * 		Name   -> PredefinedFunction UIGCozmoCommonAccounts.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UIGCozmoCommonAccounts::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class IGCozmoCommon.IGCozmoCommonAccounts");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UIGCozmoCommonCallbackManager.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UIGCozmoCommonCallbackManager::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class IGCozmoCommon.IGCozmoCommonCallbackManager");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGCozmoCommon.IGCozmoCommonEntitlements.UpdatePlatformEntitlements
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FUpdatePlatformEntitlementsRequest          Request                                                    (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FString                                      ErrorString                                                (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UIGCozmoCommonEntitlements::UpdatePlatformEntitlements(const struct FUpdatePlatformEntitlementsRequest& Request, const class FScriptDelegate& Callback, class FString* ErrorString)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGCozmoCommon.IGCozmoCommonEntitlements.UpdatePlatformEntitlements");
		
		UIGCozmoCommonEntitlements_UpdatePlatformEntitlements_Params params {};
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
	 * 		Name   -> Function IGCozmoCommon.IGCozmoCommonEntitlements.QueryEntitlements
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FQueryEntitlementsRequest                   Request                                                    (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FString                                      ErrorString                                                (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UIGCozmoCommonEntitlements::QueryEntitlements(const struct FQueryEntitlementsRequest& Request, const class FScriptDelegate& Callback, class FString* ErrorString)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGCozmoCommon.IGCozmoCommonEntitlements.QueryEntitlements");
		
		UIGCozmoCommonEntitlements_QueryEntitlements_Params params {};
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
	 * 		Name   -> Function IGCozmoCommon.IGCozmoCommonEntitlements.GetCoinBalance
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGetCoinBalanceRequest                      Request                                                    (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FString                                      ErrorString                                                (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UIGCozmoCommonEntitlements::GetCoinBalance(const struct FGetCoinBalanceRequest& Request, const class FScriptDelegate& Callback, class FString* ErrorString)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGCozmoCommon.IGCozmoCommonEntitlements.GetCoinBalance");
		
		UIGCozmoCommonEntitlements_GetCoinBalance_Params params {};
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
	 * 		Name   -> Function IGCozmoCommon.IGCozmoCommonEntitlements.DebugClearEntitlements
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FString                                      ErrorString                                                (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UIGCozmoCommonEntitlements::DebugClearEntitlements(const class FScriptDelegate& Callback, class FString* ErrorString)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGCozmoCommon.IGCozmoCommonEntitlements.DebugClearEntitlements");
		
		UIGCozmoCommonEntitlements_DebugClearEntitlements_Params params {};
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
	 * 		Name   -> Function IGCozmoCommon.IGCozmoCommonEntitlements.DebugAddEntitlement
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FDebugAddEntitlementRequest                 Request                                                    (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FString                                      ErrorString                                                (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UIGCozmoCommonEntitlements::DebugAddEntitlement(const struct FDebugAddEntitlementRequest& Request, const class FScriptDelegate& Callback, class FString* ErrorString)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGCozmoCommon.IGCozmoCommonEntitlements.DebugAddEntitlement");
		
		UIGCozmoCommonEntitlements_DebugAddEntitlement_Params params {};
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
	 * 		Name   -> Function IGCozmoCommon.IGCozmoCommonEntitlements.DebugAddCoins
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FDebugAddCoinsRequest                       Request                                                    (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FString                                      ErrorString                                                (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UIGCozmoCommonEntitlements::DebugAddCoins(const struct FDebugAddCoinsRequest& Request, const class FScriptDelegate& Callback, class FString* ErrorString)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGCozmoCommon.IGCozmoCommonEntitlements.DebugAddCoins");
		
		UIGCozmoCommonEntitlements_DebugAddCoins_Params params {};
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
	 * 		Name   -> Function IGCozmoCommon.IGCozmoCommonEntitlements.ConsumeEntitlements
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FConsumeEntitlementsRequest                 Request                                                    (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FString                                      ErrorString                                                (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UIGCozmoCommonEntitlements::ConsumeEntitlements(const struct FConsumeEntitlementsRequest& Request, const class FScriptDelegate& Callback, class FString* ErrorString)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGCozmoCommon.IGCozmoCommonEntitlements.ConsumeEntitlements");
		
		UIGCozmoCommonEntitlements_ConsumeEntitlements_Params params {};
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
	 * 		Name   -> PredefinedFunction UIGCozmoCommonEntitlements.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UIGCozmoCommonEntitlements::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class IGCozmoCommon.IGCozmoCommonEntitlements");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGCozmoCommon.IGCozmoCommonMessages.SendPlayerMessage
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      ToPlayerId                                                 (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Message                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FString                                      ErrorString                                                (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UIGCozmoCommonMessages::SendPlayerMessage(const class FString& ToPlayerId, const class FString& Message, const class FScriptDelegate& Callback, class FString* ErrorString)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGCozmoCommon.IGCozmoCommonMessages.SendPlayerMessage");
		
		UIGCozmoCommonMessages_SendPlayerMessage_Params params {};
		params.ToPlayerId = ToPlayerId;
		params.Message = Message;
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
	 * 		Name   -> Function IGCozmoCommon.IGCozmoCommonMessages.SendPartyMessage
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Message                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FString                                      ErrorString                                                (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UIGCozmoCommonMessages::SendPartyMessage(const class FString& Message, const class FScriptDelegate& Callback, class FString* ErrorString)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGCozmoCommon.IGCozmoCommonMessages.SendPartyMessage");
		
		UIGCozmoCommonMessages_SendPartyMessage_Params params {};
		params.Message = Message;
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
	 * 		Name   -> Function IGCozmoCommon.IGCozmoCommonMessages.SendGameMessage
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Message                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FString                                      ErrorString                                                (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UIGCozmoCommonMessages::SendGameMessage(const class FString& Message, const class FScriptDelegate& Callback, class FString* ErrorString)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGCozmoCommon.IGCozmoCommonMessages.SendGameMessage");
		
		UIGCozmoCommonMessages_SendGameMessage_Params params {};
		params.Message = Message;
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
	 * 		Name   -> PredefinedFunction UIGCozmoCommonMessages.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UIGCozmoCommonMessages::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class IGCozmoCommon.IGCozmoCommonMessages");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGCozmoCommon.IGCozmoCommonMessagingClient.MessagingClientEnableLogging
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bShouldEnable                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UIGCozmoCommonMessagingClient::MessagingClientEnableLogging(bool bShouldEnable)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGCozmoCommon.IGCozmoCommonMessagingClient.MessagingClientEnableLogging");
		
		UIGCozmoCommonMessagingClient_MessagingClientEnableLogging_Params params {};
		params.bShouldEnable = bShouldEnable;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGCozmoCommon.IGCozmoCommonMessagingClient.MessagingClientEcho
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FString                                      ErrorString                                                (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UIGCozmoCommonMessagingClient::MessagingClientEcho(const class FScriptDelegate& Callback, class FString* ErrorString)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGCozmoCommon.IGCozmoCommonMessagingClient.MessagingClientEcho");
		
		UIGCozmoCommonMessagingClient_MessagingClientEcho_Params params {};
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
	 * 		Name   -> PredefinedFunction UIGCozmoCommonMessagingClient.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UIGCozmoCommonMessagingClient::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class IGCozmoCommon.IGCozmoCommonMessagingClient");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGCozmoCommon.IGCozmoCommonPlayerData.UploadPlayerDataAsync
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FCozmoPlayerDataItem>                ItemsList                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FString                                      ErrorString                                                (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UIGCozmoCommonPlayerData::UploadPlayerDataAsync(TArray<struct FCozmoPlayerDataItem> ItemsList, const class FScriptDelegate& Callback, class FString* ErrorString)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGCozmoCommon.IGCozmoCommonPlayerData.UploadPlayerDataAsync");
		
		UIGCozmoCommonPlayerData_UploadPlayerDataAsync_Params params {};
		params.ItemsList = ItemsList;
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
	 * 		Name   -> Function IGCozmoCommon.IGCozmoCommonPlayerData.UploadPlayerData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FCozmoPlayerDataItem>                ItemsList                                                  (Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FString                                      ErrorString                                                (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UIGCozmoCommonPlayerData::UploadPlayerData(TArray<struct FCozmoPlayerDataItem>* ItemsList, class FString* ErrorString)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGCozmoCommon.IGCozmoCommonPlayerData.UploadPlayerData");
		
		UIGCozmoCommonPlayerData_UploadPlayerData_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ItemsList != nullptr)
			*ItemsList = params.ItemsList;
		if (ErrorString != nullptr)
			*ErrorString = params.ErrorString;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGCozmoCommon.IGCozmoCommonPlayerData.ListPlayerDataTypes
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FString                                      ErrorString                                                (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UIGCozmoCommonPlayerData::ListPlayerDataTypes(const class FScriptDelegate& Callback, class FString* ErrorString)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGCozmoCommon.IGCozmoCommonPlayerData.ListPlayerDataTypes");
		
		UIGCozmoCommonPlayerData_ListPlayerDataTypes_Params params {};
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
	 * 		Name   -> Function IGCozmoCommon.IGCozmoCommonPlayerData.DownloadPlayerDataAsync
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FCozmoPlayerDataItem>                ItemsList                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FString                                      ErrorString                                                (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UIGCozmoCommonPlayerData::DownloadPlayerDataAsync(TArray<struct FCozmoPlayerDataItem> ItemsList, const class FScriptDelegate& Callback, class FString* ErrorString)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGCozmoCommon.IGCozmoCommonPlayerData.DownloadPlayerDataAsync");
		
		UIGCozmoCommonPlayerData_DownloadPlayerDataAsync_Params params {};
		params.ItemsList = ItemsList;
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
	 * 		Name   -> Function IGCozmoCommon.IGCozmoCommonPlayerData.DownloadPlayerData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FCozmoPlayerDataItem>                ItemsList                                                  (Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FString                                      ErrorString                                                (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UIGCozmoCommonPlayerData::DownloadPlayerData(TArray<struct FCozmoPlayerDataItem>* ItemsList, class FString* ErrorString)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGCozmoCommon.IGCozmoCommonPlayerData.DownloadPlayerData");
		
		UIGCozmoCommonPlayerData_DownloadPlayerData_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ItemsList != nullptr)
			*ItemsList = params.ItemsList;
		if (ErrorString != nullptr)
			*ErrorString = params.ErrorString;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UIGCozmoCommonPlayerData.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UIGCozmoCommonPlayerData::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class IGCozmoCommon.IGCozmoCommonPlayerData");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGCozmoCommon.IGCozmoCommonPurchase.RedeemCodes
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FRedeemStoreCodesRequest                    Request                                                    (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FString                                      ErrorString                                                (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UIGCozmoCommonPurchase::RedeemCodes(const struct FRedeemStoreCodesRequest& Request, const class FScriptDelegate& Callback, class FString* ErrorString)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGCozmoCommon.IGCozmoCommonPurchase.RedeemCodes");
		
		UIGCozmoCommonPurchase_RedeemCodes_Params params {};
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
	 * 		Name   -> Function IGCozmoCommon.IGCozmoCommonPurchase.RedeemCode
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FRedeemStoreCodeRequest                     Request                                                    (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FString                                      ErrorString                                                (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UIGCozmoCommonPurchase::RedeemCode(const struct FRedeemStoreCodeRequest& Request, const class FScriptDelegate& Callback, class FString* ErrorString)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGCozmoCommon.IGCozmoCommonPurchase.RedeemCode");
		
		UIGCozmoCommonPurchase_RedeemCode_Params params {};
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
	 * 		Name   -> Function IGCozmoCommon.IGCozmoCommonPurchase.QueryReceipts
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FString                                      ErrorString                                                (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UIGCozmoCommonPurchase::QueryReceipts(const class FScriptDelegate& Callback, class FString* ErrorString)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGCozmoCommon.IGCozmoCommonPurchase.QueryReceipts");
		
		UIGCozmoCommonPurchase_QueryReceipts_Params params {};
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
	 * 		Name   -> Function IGCozmoCommon.IGCozmoCommonPurchase.Checkout
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FCheckoutRequest                            Request                                                    (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FString                                      ErrorString                                                (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UIGCozmoCommonPurchase::Checkout(const struct FCheckoutRequest& Request, const class FScriptDelegate& Callback, class FString* ErrorString)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGCozmoCommon.IGCozmoCommonPurchase.Checkout");
		
		UIGCozmoCommonPurchase_Checkout_Params params {};
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
	 * 		Name   -> Function IGCozmoCommon.IGCozmoCommonPurchase.CheckCreatorStatus
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FCheckCreatorStatusRequest                  Request                                                    (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FString                                      ErrorString                                                (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UIGCozmoCommonPurchase::CheckCreatorStatus(const struct FCheckCreatorStatusRequest& Request, const class FScriptDelegate& Callback, class FString* ErrorString)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGCozmoCommon.IGCozmoCommonPurchase.CheckCreatorStatus");
		
		UIGCozmoCommonPurchase_CheckCreatorStatus_Params params {};
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
	 * 		Name   -> PredefinedFunction UIGCozmoCommonPurchase.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UIGCozmoCommonPurchase::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class IGCozmoCommon.IGCozmoCommonPurchase");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGCozmoCommon.IGCozmoCommonStats.SetStatMin
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      StatCategory                                               (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      StatName                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              StatValue                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bIsProtected                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UIGCozmoCommonStats::SetStatMin(const class FString& StatCategory, const class FString& StatName, float StatValue, bool bIsProtected)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGCozmoCommon.IGCozmoCommonStats.SetStatMin");
		
		UIGCozmoCommonStats_SetStatMin_Params params {};
		params.StatCategory = StatCategory;
		params.StatName = StatName;
		params.StatValue = StatValue;
		params.bIsProtected = bIsProtected;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGCozmoCommon.IGCozmoCommonStats.SetStatMax
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      StatCategory                                               (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      StatName                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              StatValue                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bIsProtected                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UIGCozmoCommonStats::SetStatMax(const class FString& StatCategory, const class FString& StatName, float StatValue, bool bIsProtected)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGCozmoCommon.IGCozmoCommonStats.SetStatMax");
		
		UIGCozmoCommonStats_SetStatMax_Params params {};
		params.StatCategory = StatCategory;
		params.StatName = StatName;
		params.StatValue = StatValue;
		params.bIsProtected = bIsProtected;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGCozmoCommon.IGCozmoCommonStats.SetStat
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      StatCategory                                               (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      StatName                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              StatValue                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bIsProtected                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UIGCozmoCommonStats::SetStat(const class FString& StatCategory, const class FString& StatName, float StatValue, bool bIsProtected)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGCozmoCommon.IGCozmoCommonStats.SetStat");
		
		UIGCozmoCommonStats_SetStat_Params params {};
		params.StatCategory = StatCategory;
		params.StatName = StatName;
		params.StatValue = StatValue;
		params.bIsProtected = bIsProtected;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGCozmoCommon.IGCozmoCommonStats.ResetState
	 * 		Flags  -> ()
	 */
	void UIGCozmoCommonStats::ResetState()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGCozmoCommon.IGCozmoCommonStats.ResetState");
		
		UIGCozmoCommonStats_ResetState_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGCozmoCommon.IGCozmoCommonStats.RefreshStats
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FString                                      ErrorString                                                (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UIGCozmoCommonStats::RefreshStats(const class FScriptDelegate& Callback, class FString* ErrorString)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGCozmoCommon.IGCozmoCommonStats.RefreshStats");
		
		UIGCozmoCommonStats_RefreshStats_Params params {};
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
	 * 		Name   -> Function IGCozmoCommon.IGCozmoCommonStats.IncrementStat
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      StatCategory                                               (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      StatName                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              StatValueDelta                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bIsProtected                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UIGCozmoCommonStats::IncrementStat(const class FString& StatCategory, const class FString& StatName, float StatValueDelta, bool bIsProtected)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGCozmoCommon.IGCozmoCommonStats.IncrementStat");
		
		UIGCozmoCommonStats_IncrementStat_Params params {};
		params.StatCategory = StatCategory;
		params.StatName = StatName;
		params.StatValueDelta = StatValueDelta;
		params.bIsProtected = bIsProtected;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGCozmoCommon.IGCozmoCommonStats.HasStat
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      StatCategory                                               (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      StatName                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              StatValue                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bIsProtected                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UIGCozmoCommonStats::HasStat(const class FString& StatCategory, const class FString& StatName, float StatValue, bool bIsProtected)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGCozmoCommon.IGCozmoCommonStats.HasStat");
		
		UIGCozmoCommonStats_HasStat_Params params {};
		params.StatCategory = StatCategory;
		params.StatName = StatName;
		params.StatValue = StatValue;
		params.bIsProtected = bIsProtected;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGCozmoCommon.IGCozmoCommonStats.GetStat
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      StatCategory                                               (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      StatName                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bIsProtected                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              OutStatValue                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UIGCozmoCommonStats::GetStat(const class FString& StatCategory, const class FString& StatName, bool bIsProtected, float* OutStatValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGCozmoCommon.IGCozmoCommonStats.GetStat");
		
		UIGCozmoCommonStats_GetStat_Params params {};
		params.StatCategory = StatCategory;
		params.StatName = StatName;
		params.bIsProtected = bIsProtected;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutStatValue != nullptr)
			*OutStatValue = params.OutStatValue;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGCozmoCommon.IGCozmoCommonStats.GetAllStats
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      StatCategory                                               (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bIsProtected                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TMap<class FString, float>                         OutStats                                                   (Parm, OutParm, NativeAccessSpecifierPublic)
	 */
	bool UIGCozmoCommonStats::GetAllStats(const class FString& StatCategory, bool bIsProtected, TMap<class FString, float>* OutStats)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGCozmoCommon.IGCozmoCommonStats.GetAllStats");
		
		UIGCozmoCommonStats_GetAllStats_Params params {};
		params.StatCategory = StatCategory;
		params.bIsProtected = bIsProtected;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutStats != nullptr)
			*OutStats = params.OutStats;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGCozmoCommon.IGCozmoCommonStats.FlushStats
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bForceUpload                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FString                                      ErrorString                                                (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UIGCozmoCommonStats::FlushStats(bool bForceUpload, const class FScriptDelegate& Callback, class FString* ErrorString)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGCozmoCommon.IGCozmoCommonStats.FlushStats");
		
		UIGCozmoCommonStats_FlushStats_Params params {};
		params.bForceUpload = bForceUpload;
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
	 * 		Name   -> Function IGCozmoCommon.IGCozmoCommonStats.DeleteAllStats
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FString                                      ErrorString                                                (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UIGCozmoCommonStats::DeleteAllStats(const class FScriptDelegate& Callback, class FString* ErrorString)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGCozmoCommon.IGCozmoCommonStats.DeleteAllStats");
		
		UIGCozmoCommonStats_DeleteAllStats_Params params {};
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
	 * 		Name   -> PredefinedFunction UIGCozmoCommonStats.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UIGCozmoCommonStats::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class IGCozmoCommon.IGCozmoCommonStats");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGCozmoCommon.IGCozmoCommonStatsV2.UpdateStats
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FUpdateCozmoStatsRequest                    Request                                                    (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FString                                      ErrorString                                                (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UIGCozmoCommonStatsV2::UpdateStats(const struct FUpdateCozmoStatsRequest& Request, const class FScriptDelegate& Callback, class FString* ErrorString)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGCozmoCommon.IGCozmoCommonStatsV2.UpdateStats");
		
		UIGCozmoCommonStatsV2_UpdateStats_Params params {};
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
	 * 		Name   -> Function IGCozmoCommon.IGCozmoCommonStatsV2.GetStats
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGetCozmoStatsRequest                       Request                                                    (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FString                                      ErrorString                                                (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UIGCozmoCommonStatsV2::GetStats(const struct FGetCozmoStatsRequest& Request, const class FScriptDelegate& Callback, class FString* ErrorString)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGCozmoCommon.IGCozmoCommonStatsV2.GetStats");
		
		UIGCozmoCommonStatsV2_GetStats_Params params {};
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
	 * 		Name   -> Function IGCozmoCommon.IGCozmoCommonStatsV2.GetMaxUserIds
	 * 		Flags  -> ()
	 */
	int32_t UIGCozmoCommonStatsV2::GetMaxUserIds()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGCozmoCommon.IGCozmoCommonStatsV2.GetMaxUserIds");
		
		UIGCozmoCommonStatsV2_GetMaxUserIds_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGCozmoCommon.IGCozmoCommonStatsV2.GetMaxStatNames
	 * 		Flags  -> ()
	 */
	int32_t UIGCozmoCommonStatsV2::GetMaxStatNames()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGCozmoCommon.IGCozmoCommonStatsV2.GetMaxStatNames");
		
		UIGCozmoCommonStatsV2_GetMaxStatNames_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGCozmoCommon.IGCozmoCommonStatsV2.GetMaxStatFields
	 * 		Flags  -> ()
	 */
	int32_t UIGCozmoCommonStatsV2::GetMaxStatFields()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGCozmoCommon.IGCozmoCommonStatsV2.GetMaxStatFields");
		
		UIGCozmoCommonStatsV2_GetMaxStatFields_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UIGCozmoCommonStatsV2.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UIGCozmoCommonStatsV2::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class IGCozmoCommon.IGCozmoCommonStatsV2");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGCozmoCommon.IGCozmoCommonStore.QueryOffersById
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FQueryOffersByIdRequest                     Request                                                    (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FString                                      ErrorString                                                (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UIGCozmoCommonStore::QueryOffersById(const struct FQueryOffersByIdRequest& Request, const class FScriptDelegate& Callback, class FString* ErrorString)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGCozmoCommon.IGCozmoCommonStore.QueryOffersById");
		
		UIGCozmoCommonStore_QueryOffersById_Params params {};
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
	 * 		Name   -> Function IGCozmoCommon.IGCozmoCommonStore.QueryOffersByFilter
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FQueryOffersByFilterRequest                 Request                                                    (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FString                                      ErrorString                                                (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UIGCozmoCommonStore::QueryOffersByFilter(const struct FQueryOffersByFilterRequest& Request, const class FScriptDelegate& Callback, class FString* ErrorString)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGCozmoCommon.IGCozmoCommonStore.QueryOffersByFilter");
		
		UIGCozmoCommonStore_QueryOffersByFilter_Params params {};
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
	 * 		Name   -> Function IGCozmoCommon.IGCozmoCommonStore.QueryCodesById
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FQueryCodesByIdRequest                      Request                                                    (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FString                                      ErrorString                                                (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UIGCozmoCommonStore::QueryCodesById(const struct FQueryCodesByIdRequest& Request, const class FScriptDelegate& Callback, class FString* ErrorString)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGCozmoCommon.IGCozmoCommonStore.QueryCodesById");
		
		UIGCozmoCommonStore_QueryCodesById_Params params {};
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
	 * 		Name   -> Function IGCozmoCommon.IGCozmoCommonStore.QueryCategories
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FString                                      ErrorString                                                (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UIGCozmoCommonStore::QueryCategories(const class FScriptDelegate& Callback, class FString* ErrorString)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGCozmoCommon.IGCozmoCommonStore.QueryCategories");
		
		UIGCozmoCommonStore_QueryCategories_Params params {};
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
	 * 		Name   -> PredefinedFunction UIGCozmoCommonStore.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UIGCozmoCommonStore::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class IGCozmoCommon.IGCozmoCommonStore");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGCozmoCommon.IGCozmoCommonTelemetry.SetIsTelemetryEnabled
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bIsEnabled                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UIGCozmoCommonTelemetry::SetIsTelemetryEnabled(bool bIsEnabled)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGCozmoCommon.IGCozmoCommonTelemetry.SetIsTelemetryEnabled");
		
		UIGCozmoCommonTelemetry_SetIsTelemetryEnabled_Params params {};
		params.bIsEnabled = bIsEnabled;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGCozmoCommon.IGCozmoCommonTelemetry.PostEvent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FTelemetryEvent                             Event                                                      (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FString                                      ErrorString                                                (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UIGCozmoCommonTelemetry::PostEvent(const struct FTelemetryEvent& Event, class FString* ErrorString)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGCozmoCommon.IGCozmoCommonTelemetry.PostEvent");
		
		UIGCozmoCommonTelemetry_PostEvent_Params params {};
		params.Event = Event;
		
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
	 * 		Name   -> PredefinedFunction UIGCozmoCommonTelemetry.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UIGCozmoCommonTelemetry::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class IGCozmoCommon.IGCozmoCommonTelemetry");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IGCozmoCommon.IGCozmoCommonTitleStorage.ListFiles
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Prefix                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FString                                      ErrorString                                                (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UIGCozmoCommonTitleStorage::ListFiles(const class FString& Prefix, const class FScriptDelegate& Callback, class FString* ErrorString)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGCozmoCommon.IGCozmoCommonTitleStorage.ListFiles");
		
		UIGCozmoCommonTitleStorage_ListFiles_Params params {};
		params.Prefix = Prefix;
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
	 * 		Name   -> Function IGCozmoCommon.IGCozmoCommonTitleStorage.GenerateHash
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      LocalPath                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FString                                      ErrorString                                                (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UIGCozmoCommonTitleStorage::GenerateHash(const class FString& LocalPath, const class FScriptDelegate& Callback, class FString* ErrorString)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGCozmoCommon.IGCozmoCommonTitleStorage.GenerateHash");
		
		UIGCozmoCommonTitleStorage_GenerateHash_Params params {};
		params.LocalPath = LocalPath;
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
	 * 		Name   -> Function IGCozmoCommon.IGCozmoCommonTitleStorage.DownloadFileToMemoryAndDisk
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Filename                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      LocalPath                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FString                                      ErrorString                                                (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UIGCozmoCommonTitleStorage::DownloadFileToMemoryAndDisk(const class FString& Filename, const class FString& LocalPath, const class FScriptDelegate& Callback, class FString* ErrorString)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGCozmoCommon.IGCozmoCommonTitleStorage.DownloadFileToMemoryAndDisk");
		
		UIGCozmoCommonTitleStorage_DownloadFileToMemoryAndDisk_Params params {};
		params.Filename = Filename;
		params.LocalPath = LocalPath;
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
	 * 		Name   -> Function IGCozmoCommon.IGCozmoCommonTitleStorage.DownloadFileToMemory
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Filename                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FString                                      ErrorString                                                (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UIGCozmoCommonTitleStorage::DownloadFileToMemory(const class FString& Filename, const class FScriptDelegate& Callback, class FString* ErrorString)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGCozmoCommon.IGCozmoCommonTitleStorage.DownloadFileToMemory");
		
		UIGCozmoCommonTitleStorage_DownloadFileToMemory_Params params {};
		params.Filename = Filename;
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
	 * 		Name   -> Function IGCozmoCommon.IGCozmoCommonTitleStorage.DownloadFileToDisk
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Filename                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      LocalPath                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FString                                      ErrorString                                                (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UIGCozmoCommonTitleStorage::DownloadFileToDisk(const class FString& Filename, const class FString& LocalPath, const class FScriptDelegate& Callback, class FString* ErrorString)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IGCozmoCommon.IGCozmoCommonTitleStorage.DownloadFileToDisk");
		
		UIGCozmoCommonTitleStorage_DownloadFileToDisk_Params params {};
		params.Filename = Filename;
		params.LocalPath = LocalPath;
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
	 * 		Name   -> PredefinedFunction UIGCozmoCommonTitleStorage.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UIGCozmoCommonTitleStorage::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class IGCozmoCommon.IGCozmoCommonTitleStorage");
		return ptr;
	}

}


