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
	 * 		Name   -> Function SheikHotfix.SheikHotfixManager.OnFinishHotfixing
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EHotfixResult                                      Result                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USheikHotfixManager::OnFinishHotfixing(EHotfixResult Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SheikHotfix.SheikHotfixManager.OnFinishHotfixing");
		
		USheikHotfixManager_OnFinishHotfixing_Params params {};
		params.Result = Result;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USheikHotfixManager.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USheikHotfixManager::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SheikHotfix.SheikHotfixManager");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SheikHotfix.SheikHotfixSystem.StartHotfixCheckToSpecifiedVersion
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            DesiredVersion                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USheikHotfixSystem::StartHotfixCheckToSpecifiedVersion(int32_t DesiredVersion)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SheikHotfix.SheikHotfixSystem.StartHotfixCheckToSpecifiedVersion");
		
		USheikHotfixSystem_StartHotfixCheckToSpecifiedVersion_Params params {};
		params.DesiredVersion = DesiredVersion;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SheikHotfix.SheikHotfixSystem.StartHotfixCheck
	 * 		Flags  -> ()
	 */
	void USheikHotfixSystem::StartHotfixCheck()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SheikHotfix.SheikHotfixSystem.StartHotfixCheck");
		
		USheikHotfixSystem_StartHotfixCheck_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SheikHotfix.SheikHotfixSystem.StartDeferredHotfixCheck
	 * 		Flags  -> ()
	 */
	void USheikHotfixSystem::StartDeferredHotfixCheck()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SheikHotfix.SheikHotfixSystem.StartDeferredHotfixCheck");
		
		USheikHotfixSystem_StartDeferredHotfixCheck_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SheikHotfix.SheikHotfixSystem.OverrideHotfixVersion
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            InVersion                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USheikHotfixSystem::OverrideHotfixVersion(int32_t InVersion)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SheikHotfix.SheikHotfixSystem.OverrideHotfixVersion");
		
		USheikHotfixSystem_OverrideHotfixVersion_Params params {};
		params.InVersion = InVersion;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SheikHotfix.SheikHotfixSystem.IsOnHotfixVersion
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            InVersion                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool USheikHotfixSystem::IsOnHotfixVersion(int32_t InVersion)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SheikHotfix.SheikHotfixSystem.IsOnHotfixVersion");
		
		USheikHotfixSystem_IsOnHotfixVersion_Params params {};
		params.InVersion = InVersion;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SheikHotfix.SheikHotfixSystem.IsHotfixCheckRunning
	 * 		Flags  -> ()
	 */
	bool USheikHotfixSystem::IsHotfixCheckRunning()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SheikHotfix.SheikHotfixSystem.IsHotfixCheckRunning");
		
		USheikHotfixSystem_IsHotfixCheckRunning_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SheikHotfix.SheikHotfixSystem.IsDeferredCheckRunning
	 * 		Flags  -> ()
	 */
	bool USheikHotfixSystem::IsDeferredCheckRunning()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SheikHotfix.SheikHotfixSystem.IsDeferredCheckRunning");
		
		USheikHotfixSystem_IsDeferredCheckRunning_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SheikHotfix.SheikHotfixSystem.GetHotfixLatestVersionValue
	 * 		Flags  -> ()
	 */
	int32_t USheikHotfixSystem::GetHotfixLatestVersionValue()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SheikHotfix.SheikHotfixSystem.GetHotfixLatestVersionValue");
		
		USheikHotfixSystem_GetHotfixLatestVersionValue_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SheikHotfix.SheikHotfixSystem.GetCurrentHotfixVersion
	 * 		Flags  -> ()
	 */
	int32_t USheikHotfixSystem::GetCurrentHotfixVersion()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SheikHotfix.SheikHotfixSystem.GetCurrentHotfixVersion");
		
		USheikHotfixSystem_GetCurrentHotfixVersion_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SheikHotfix.SheikHotfixSystem.FinishDeferredHotfixCheck
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            DesiredVersion                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USheikHotfixSystem::FinishDeferredHotfixCheck(int32_t DesiredVersion)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SheikHotfix.SheikHotfixSystem.FinishDeferredHotfixCheck");
		
		USheikHotfixSystem_FinishDeferredHotfixCheck_Params params {};
		params.DesiredVersion = DesiredVersion;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USheikHotfixSystem.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USheikHotfixSystem::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SheikHotfix.SheikHotfixSystem");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UIGHotfixInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UIGHotfixInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SheikHotfix.IGHotfixInterface");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SheikHotfix.SheikUpdateManager.OnHotfixManagerDeferred
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<int32_t>                                    OutVersions                                                (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void USheikUpdateManager::OnHotfixManagerDeferred(TArray<int32_t> OutVersions)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SheikHotfix.SheikUpdateManager.OnHotfixManagerDeferred");
		
		USheikUpdateManager_OnHotfixManagerDeferred_Params params {};
		params.OutVersions = OutVersions;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USheikUpdateManager.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USheikUpdateManager::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SheikHotfix.SheikUpdateManager");
		return ptr;
	}

}


