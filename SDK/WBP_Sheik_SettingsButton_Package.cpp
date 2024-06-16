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
	 * 		Name   -> Function WBP_Sheik_SettingsButton.WBP_Sheik_SettingsButton_C.GetDescription
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        Description                                                (Parm, OutParm)
	 */
	void UWBP_Sheik_SettingsButton_C::GetDescription(class FText* Description)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_SettingsButton.WBP_Sheik_SettingsButton_C.GetDescription");
		
		UWBP_Sheik_SettingsButton_C_GetDescription_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Description != nullptr)
			*Description = params.Description;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_SettingsButton.WBP_Sheik_SettingsButton_C.GetName
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        Name                                                       (Parm, OutParm)
	 */
	void UWBP_Sheik_SettingsButton_C::GetName(class FText* Name)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_SettingsButton.WBP_Sheik_SettingsButton_C.GetName");
		
		UWBP_Sheik_SettingsButton_C_GetName_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Name != nullptr)
			*Name = params.Name;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_SettingsButton.WBP_Sheik_SettingsButton_C.HandleDisabling
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Condition                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_Sheik_SettingsButton_C::HandleDisabling(bool Condition)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_SettingsButton.WBP_Sheik_SettingsButton_C.HandleDisabling");
		
		UWBP_Sheik_SettingsButton_C_HandleDisabling_Params params {};
		params.Condition = Condition;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_SettingsButton.WBP_Sheik_SettingsButton_C.ShowLoading
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Show                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_Sheik_SettingsButton_C::ShowLoading(bool Show)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_SettingsButton.WBP_Sheik_SettingsButton_C.ShowLoading");
		
		UWBP_Sheik_SettingsButton_C_ShowLoading_Params params {};
		params.Show = Show;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_SettingsButton.WBP_Sheik_SettingsButton_C.OnGainFocus
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            UserIndex                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_SettingsButton_C::OnGainFocus(int32_t UserIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_SettingsButton.WBP_Sheik_SettingsButton_C.OnGainFocus");
		
		UWBP_Sheik_SettingsButton_C_OnGainFocus_Params params {};
		params.UserIndex = UserIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_SettingsButton.WBP_Sheik_SettingsButton_C.OnLoseFocus
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            UserIndex                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_SettingsButton_C::OnLoseFocus(int32_t UserIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_SettingsButton.WBP_Sheik_SettingsButton_C.OnLoseFocus");
		
		UWBP_Sheik_SettingsButton_C_OnLoseFocus_Params params {};
		params.UserIndex = UserIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_SettingsButton.WBP_Sheik_SettingsButton_C.OnSelected
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            UserIndex                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_SettingsButton_C::OnSelected(int32_t UserIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_SettingsButton.WBP_Sheik_SettingsButton_C.OnSelected");
		
		UWBP_Sheik_SettingsButton_C_OnSelected_Params params {};
		params.UserIndex = UserIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_SettingsButton.WBP_Sheik_SettingsButton_C.SetDescription
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        Description                                                (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UWBP_Sheik_SettingsButton_C::SetDescription(const class FText& Description)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_SettingsButton.WBP_Sheik_SettingsButton_C.SetDescription");
		
		UWBP_Sheik_SettingsButton_C_SetDescription_Params params {};
		params.Description = Description;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_SettingsButton.WBP_Sheik_SettingsButton_C.SetName
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        Name                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UWBP_Sheik_SettingsButton_C::SetName(const class FText& Name)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_SettingsButton.WBP_Sheik_SettingsButton_C.SetName");
		
		UWBP_Sheik_SettingsButton_C_SetName_Params params {};
		params.Name = Name;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_SettingsButton.WBP_Sheik_SettingsButton_C.SetDisabled
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bDisabled                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_Sheik_SettingsButton_C::SetDisabled(bool bDisabled)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_SettingsButton.WBP_Sheik_SettingsButton_C.SetDisabled");
		
		UWBP_Sheik_SettingsButton_C_SetDisabled_Params params {};
		params.bDisabled = bDisabled;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_SettingsButton.WBP_Sheik_SettingsButton_C.SetDisabledWithoutAnimation
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bDisabled                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_Sheik_SettingsButton_C::SetDisabledWithoutAnimation(bool bDisabled)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_SettingsButton.WBP_Sheik_SettingsButton_C.SetDisabledWithoutAnimation");
		
		UWBP_Sheik_SettingsButton_C_SetDisabledWithoutAnimation_Params params {};
		params.bDisabled = bDisabled;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_SettingsButton.WBP_Sheik_SettingsButton_C.ExecuteUbergraph_WBP_Sheik_SettingsButton
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_SettingsButton_C::ExecuteUbergraph_WBP_Sheik_SettingsButton(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_SettingsButton.WBP_Sheik_SettingsButton_C.ExecuteUbergraph_WBP_Sheik_SettingsButton");
		
		UWBP_Sheik_SettingsButton_C_ExecuteUbergraph_WBP_Sheik_SettingsButton_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWBP_Sheik_SettingsButton_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWBP_Sheik_SettingsButton_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_Sheik_SettingsButton.WBP_Sheik_SettingsButton_C");
		return ptr;
	}

}


