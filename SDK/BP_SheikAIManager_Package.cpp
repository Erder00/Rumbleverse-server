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
	 * 		Name   -> Function BP_SheikAIManager.BP_SheikAIManager_C.GetSprintingEnabled
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               SprintingEnabled                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_SheikAIManager_C::GetSprintingEnabled(bool* SprintingEnabled)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SheikAIManager.BP_SheikAIManager_C.GetSprintingEnabled");
		
		UBP_SheikAIManager_C_GetSprintingEnabled_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (SprintingEnabled != nullptr)
			*SprintingEnabled = params.SprintingEnabled;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_SheikAIManager.BP_SheikAIManager_C.GetBotName
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      OutName                                                    (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UBP_SheikAIManager_C::GetBotName(class FString* OutName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SheikAIManager.BP_SheikAIManager_C.GetBotName");
		
		UBP_SheikAIManager_C_GetBotName_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutName != nullptr)
			*OutName = params.OutName;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_SheikAIManager.BP_SheikAIManager_C.RequestNamesFromTable
	 * 		Flags  -> ()
	 */
	void UBP_SheikAIManager_C::RequestNamesFromTable()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SheikAIManager.BP_SheikAIManager_C.RequestNamesFromTable");
		
		UBP_SheikAIManager_C_RequestNamesFromTable_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBP_SheikAIManager_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_SheikAIManager_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_SheikAIManager.BP_SheikAIManager_C");
		return ptr;
	}

}


