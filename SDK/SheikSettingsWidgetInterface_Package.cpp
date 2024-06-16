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
	 * 		Name   -> Function SheikSettingsWidgetInterface.SheikSettingsWidgetInterface_C.SetDescription
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        Description                                                (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void USheikSettingsWidgetInterface_C::SetDescription(const class FText& Description)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SheikSettingsWidgetInterface.SheikSettingsWidgetInterface_C.SetDescription");
		
		USheikSettingsWidgetInterface_C_SetDescription_Params params {};
		params.Description = Description;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SheikSettingsWidgetInterface.SheikSettingsWidgetInterface_C.SetName
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        Name                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void USheikSettingsWidgetInterface_C::SetName(const class FText& Name)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SheikSettingsWidgetInterface.SheikSettingsWidgetInterface_C.SetName");
		
		USheikSettingsWidgetInterface_C_SetName_Params params {};
		params.Name = Name;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SheikSettingsWidgetInterface.SheikSettingsWidgetInterface_C.GetDescription
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        Description                                                (Parm, OutParm)
	 */
	void USheikSettingsWidgetInterface_C::GetDescription(class FText* Description)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SheikSettingsWidgetInterface.SheikSettingsWidgetInterface_C.GetDescription");
		
		USheikSettingsWidgetInterface_C_GetDescription_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Description != nullptr)
			*Description = params.Description;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SheikSettingsWidgetInterface.SheikSettingsWidgetInterface_C.GetName
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        Name                                                       (Parm, OutParm)
	 */
	void USheikSettingsWidgetInterface_C::GetName(class FText* Name)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SheikSettingsWidgetInterface.SheikSettingsWidgetInterface_C.GetName");
		
		USheikSettingsWidgetInterface_C_GetName_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Name != nullptr)
			*Name = params.Name;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USheikSettingsWidgetInterface_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USheikSettingsWidgetInterface_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass SheikSettingsWidgetInterface.SheikSettingsWidgetInterface_C");
		return ptr;
	}

}


