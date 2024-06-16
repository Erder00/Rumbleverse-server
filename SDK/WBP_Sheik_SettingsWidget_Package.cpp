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
	 * 		Name   -> Function WBP_Sheik_SettingsWidget.WBP_Sheik_SettingsWidget_C.GetDescription
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        Description                                                (Parm, OutParm)
	 */
	void UWBP_Sheik_SettingsWidget_C::GetDescription(class FText* Description)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_SettingsWidget.WBP_Sheik_SettingsWidget_C.GetDescription");
		
		UWBP_Sheik_SettingsWidget_C_GetDescription_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Description != nullptr)
			*Description = params.Description;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_SettingsWidget.WBP_Sheik_SettingsWidget_C.GetName
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        Name                                                       (Parm, OutParm)
	 */
	void UWBP_Sheik_SettingsWidget_C::GetName(class FText* Name)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_SettingsWidget.WBP_Sheik_SettingsWidget_C.GetName");
		
		UWBP_Sheik_SettingsWidget_C_GetName_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Name != nullptr)
			*Name = params.Name;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_SettingsWidget.WBP_Sheik_SettingsWidget_C.SetDescription
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        Description                                                (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UWBP_Sheik_SettingsWidget_C::SetDescription(const class FText& Description)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_SettingsWidget.WBP_Sheik_SettingsWidget_C.SetDescription");
		
		UWBP_Sheik_SettingsWidget_C_SetDescription_Params params {};
		params.Description = Description;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_SettingsWidget.WBP_Sheik_SettingsWidget_C.SetName
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        Name                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UWBP_Sheik_SettingsWidget_C::SetName(const class FText& Name)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_SettingsWidget.WBP_Sheik_SettingsWidget_C.SetName");
		
		UWBP_Sheik_SettingsWidget_C_SetName_Params params {};
		params.Name = Name;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_SettingsWidget.WBP_Sheik_SettingsWidget_C.ExecuteUbergraph_WBP_Sheik_SettingsWidget
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_SettingsWidget_C::ExecuteUbergraph_WBP_Sheik_SettingsWidget(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_SettingsWidget.WBP_Sheik_SettingsWidget_C.ExecuteUbergraph_WBP_Sheik_SettingsWidget");
		
		UWBP_Sheik_SettingsWidget_C_ExecuteUbergraph_WBP_Sheik_SettingsWidget_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWBP_Sheik_SettingsWidget_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWBP_Sheik_SettingsWidget_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_Sheik_SettingsWidget.WBP_Sheik_SettingsWidget_C");
		return ptr;
	}

}


