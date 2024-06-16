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
	 * 		Name   -> PredefinedFunction UHotFixManagerSettings.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHotFixManagerSettings::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class PINGLEHotFixPlugin.HotFixManagerSettings");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PINGLEHotFixPlugin.HotfixManager.RequestPatchFromBackend
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EPatchType                                         InPatchType                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bSaveLocallyAfterLoad                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UPatchRequestProxy* UHotfixManager::RequestPatchFromBackend(EPatchType InPatchType, bool bSaveLocallyAfterLoad)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PINGLEHotFixPlugin.HotfixManager.RequestPatchFromBackend");
		
		UHotfixManager_RequestPatchFromBackend_Params params {};
		params.InPatchType = InPatchType;
		params.bSaveLocallyAfterLoad = bSaveLocallyAfterLoad;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PINGLEHotFixPlugin.HotfixManager.MakeActorWorldPath
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     Object                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class FString UHotfixManager::MakeActorWorldPath(class UObject* Object)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PINGLEHotFixPlugin.HotfixManager.MakeActorWorldPath");
		
		UHotfixManager_MakeActorWorldPath_Params params {};
		params.Object = Object;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PINGLEHotFixPlugin.HotfixManager.IsPatchLoaded
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EPatchType                                         InPatchType                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UHotfixManager::IsPatchLoaded(EPatchType InPatchType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PINGLEHotFixPlugin.HotfixManager.IsPatchLoaded");
		
		UHotfixManager_IsPatchLoaded_Params params {};
		params.InPatchType = InPatchType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PINGLEHotFixPlugin.HotfixManager.Get
	 * 		Flags  -> ()
	 */
	class UHotfixManager* UHotfixManager::Get()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PINGLEHotFixPlugin.HotfixManager.Get");
		
		UHotfixManager_Get_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PINGLEHotFixPlugin.HotfixManager.ApplyPatchLocalization
	 * 		Flags  -> ()
	 */
	bool UHotfixManager::ApplyPatchLocalization()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PINGLEHotFixPlugin.HotfixManager.ApplyPatchLocalization");
		
		UHotfixManager_ApplyPatchLocalization_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PINGLEHotFixPlugin.HotfixManager.ApplyPatchForUObject
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     InObjectPtr                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UHotfixManager::ApplyPatchForUObject(class UObject* InObjectPtr)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PINGLEHotFixPlugin.HotfixManager.ApplyPatchForUObject");
		
		UHotfixManager_ApplyPatchForUObject_Params params {};
		params.InObjectPtr = InObjectPtr;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UHotfixManager.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHotfixManager::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class PINGLEHotFixPlugin.HotfixManager");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPatchInfo.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPatchInfo::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class PINGLEHotFixPlugin.PatchInfo");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPatchInfoSaveGame.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPatchInfoSaveGame::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class PINGLEHotFixPlugin.PatchInfoSaveGame");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPatchRequestProxy.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPatchRequestProxy::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class PINGLEHotFixPlugin.PatchRequestProxy");
		return ptr;
	}

}


