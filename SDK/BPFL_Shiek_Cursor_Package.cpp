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
	 * 		Name   -> Function BPFL_Shiek_Cursor.BPFL_Shiek_Cursor_C.ForceDefaultInputSource
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPFL_Shiek_Cursor_C::ForceDefaultInputSource(class UObject* __WorldContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPFL_Shiek_Cursor.BPFL_Shiek_Cursor_C.ForceDefaultInputSource");
		
		UBPFL_Shiek_Cursor_C_ForceDefaultInputSource_Params params {};
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPFL_Shiek_Cursor.BPFL_Shiek_Cursor_C.Set Cursor Allowed For Gameplay Menus
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               UseMenuInput                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPFL_Shiek_Cursor_C::SetCursorAllowedForGameplayMenus(bool UseMenuInput, class UObject* __WorldContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPFL_Shiek_Cursor.BPFL_Shiek_Cursor_C.Set Cursor Allowed For Gameplay Menus");
		
		UBPFL_Shiek_Cursor_C_SetCursorAllowedForGameplayMenus_Params params {};
		params.UseMenuInput = UseMenuInput;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPFL_Shiek_Cursor.BPFL_Shiek_Cursor_C.SetupSoftCursorOnHUDLoad
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     Context                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               AllowCursorByDefault                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPFL_Shiek_Cursor_C::SetupSoftCursorOnHUDLoad(class UObject* Context, bool AllowCursorByDefault, class UObject* __WorldContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPFL_Shiek_Cursor.BPFL_Shiek_Cursor_C.SetupSoftCursorOnHUDLoad");
		
		UBPFL_Shiek_Cursor_C_SetupSoftCursorOnHUDLoad_Params params {};
		params.Context = Context;
		params.AllowCursorByDefault = AllowCursorByDefault;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBPFL_Shiek_Cursor_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBPFL_Shiek_Cursor_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BPFL_Shiek_Cursor.BPFL_Shiek_Cursor_C");
		return ptr;
	}

}


