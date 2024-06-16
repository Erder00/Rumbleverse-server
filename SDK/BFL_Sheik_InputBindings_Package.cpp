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
	 * 		Name   -> Function BFL_Sheik_InputBindings.BFL_Sheik_InputBindings_C.GetPlatformDefaultGamepad
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESheikPlatform                                     Platform                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		EInputSource                                       Out                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBFL_Sheik_InputBindings_C::GetPlatformDefaultGamepad(ESheikPlatform Platform, class UObject* __WorldContext, EInputSource* Out)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BFL_Sheik_InputBindings.BFL_Sheik_InputBindings_C.GetPlatformDefaultGamepad");
		
		UBFL_Sheik_InputBindings_C_GetPlatformDefaultGamepad_Params params {};
		params.Platform = Platform;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Out != nullptr)
			*Out = params.Out;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BFL_Sheik_InputBindings.BFL_Sheik_InputBindings_C.GetKeysForComboAction
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        InActionName                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		TArray<class FName>                                Out                                                        (Parm, OutParm)
	 */
	void UBFL_Sheik_InputBindings_C::GetKeysForComboAction(const class FName& InActionName, class UObject* __WorldContext, TArray<class FName>* Out)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BFL_Sheik_InputBindings.BFL_Sheik_InputBindings_C.GetKeysForComboAction");
		
		UBFL_Sheik_InputBindings_C_GetKeysForComboAction_Params params {};
		params.InActionName = InActionName;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Out != nullptr)
			*Out = params.Out;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BFL_Sheik_InputBindings.BFL_Sheik_InputBindings_C.IsComboAction
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        InActionName                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Out                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBFL_Sheik_InputBindings_C::IsComboAction(const class FName& InActionName, class UObject* __WorldContext, bool* Out)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BFL_Sheik_InputBindings.BFL_Sheik_InputBindings_C.IsComboAction");
		
		UBFL_Sheik_InputBindings_C_IsComboAction_Params params {};
		params.InActionName = InActionName;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Out != nullptr)
			*Out = params.Out;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BFL_Sheik_InputBindings.BFL_Sheik_InputBindings_C.GetSecondaryKeyFromBoundKeyInfo
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FBoundKeyInfo                               InBoundInfo                                                (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FKey                                        OutKey                                                     (Parm, OutParm, HasGetValueTypeHash)
	 */
	void UBFL_Sheik_InputBindings_C::GetSecondaryKeyFromBoundKeyInfo(const struct FBoundKeyInfo& InBoundInfo, class UObject* __WorldContext, struct FKey* OutKey)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BFL_Sheik_InputBindings.BFL_Sheik_InputBindings_C.GetSecondaryKeyFromBoundKeyInfo");
		
		UBFL_Sheik_InputBindings_C_GetSecondaryKeyFromBoundKeyInfo_Params params {};
		params.InBoundInfo = InBoundInfo;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutKey != nullptr)
			*OutKey = params.OutKey;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BFL_Sheik_InputBindings.BFL_Sheik_InputBindings_C.GetPrimaryKeyFromBoundKeyInfo
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FBoundKeyInfo                               InBoundInfo                                                (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FKey                                        OutKey                                                     (Parm, OutParm, HasGetValueTypeHash)
	 */
	void UBFL_Sheik_InputBindings_C::GetPrimaryKeyFromBoundKeyInfo(const struct FBoundKeyInfo& InBoundInfo, class UObject* __WorldContext, struct FKey* OutKey)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BFL_Sheik_InputBindings.BFL_Sheik_InputBindings_C.GetPrimaryKeyFromBoundKeyInfo");
		
		UBFL_Sheik_InputBindings_C_GetPrimaryKeyFromBoundKeyInfo_Params params {};
		params.InBoundInfo = InBoundInfo;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutKey != nullptr)
			*OutKey = params.OutKey;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BFL_Sheik_InputBindings.BFL_Sheik_InputBindings_C.GetDisplayNameForAction
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        InActionName                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FText                                        OutDisplayName                                             (Parm, OutParm)
	 */
	void UBFL_Sheik_InputBindings_C::GetDisplayNameForAction(const class FName& InActionName, class UObject* __WorldContext, class FText* OutDisplayName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BFL_Sheik_InputBindings.BFL_Sheik_InputBindings_C.GetDisplayNameForAction");
		
		UBFL_Sheik_InputBindings_C_GetDisplayNameForAction_Params params {};
		params.InActionName = InActionName;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutDisplayName != nullptr)
			*OutDisplayName = params.OutDisplayName;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BFL_Sheik_InputBindings.BFL_Sheik_InputBindings_C.IsKeyBannedFromAssignment
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FKey                                        InKey                                                      (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               OutBanned                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBFL_Sheik_InputBindings_C::IsKeyBannedFromAssignment(const struct FKey& InKey, class UObject* __WorldContext, bool* OutBanned)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BFL_Sheik_InputBindings.BFL_Sheik_InputBindings_C.IsKeyBannedFromAssignment");
		
		UBFL_Sheik_InputBindings_C_IsKeyBannedFromAssignment_Params params {};
		params.InKey = InKey;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutBanned != nullptr)
			*OutBanned = params.OutBanned;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBFL_Sheik_InputBindings_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBFL_Sheik_InputBindings_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BFL_Sheik_InputBindings.BFL_Sheik_InputBindings_C");
		return ptr;
	}

}


