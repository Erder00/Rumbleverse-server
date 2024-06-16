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
	 * 		Name   -> Function WBP_Sheik_Login_DevStep.WBP_Sheik_Login_DevStep_C.IsEditing
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsEditing                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_Sheik_Login_DevStep_C::IsEditing(bool* IsEditing)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Login_DevStep.WBP_Sheik_Login_DevStep_C.IsEditing");
		
		UWBP_Sheik_Login_DevStep_C_IsEditing_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (IsEditing != nullptr)
			*IsEditing = params.IsEditing;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Login_DevStep.WBP_Sheik_Login_DevStep_C.GetInputData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      ID                                                         (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	 * 		class FString                                      Token                                                      (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_Login_DevStep_C::GetInputData(class FString* ID, class FString* Token)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Login_DevStep.WBP_Sheik_Login_DevStep_C.GetInputData");
		
		UWBP_Sheik_Login_DevStep_C_GetInputData_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ID != nullptr)
			*ID = params.ID;
		if (Token != nullptr)
			*Token = params.Token;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWBP_Sheik_Login_DevStep_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWBP_Sheik_Login_DevStep_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_Sheik_Login_DevStep.WBP_Sheik_Login_DevStep_C");
		return ptr;
	}

}


