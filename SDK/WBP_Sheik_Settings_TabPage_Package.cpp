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
	 * 		Name   -> Function WBP_Sheik_Settings_TabPage.WBP_Sheik_Settings_TabPage_C.GetSavedSettings
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class USheikSavedSettings*                         OutSettings                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_Settings_TabPage_C::GetSavedSettings(class USheikSavedSettings** OutSettings)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Settings_TabPage.WBP_Sheik_Settings_TabPage_C.GetSavedSettings");
		
		UWBP_Sheik_Settings_TabPage_C_GetSavedSettings_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutSettings != nullptr)
			*OutSettings = params.OutSettings;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Settings_TabPage.WBP_Sheik_Settings_TabPage_C.OnWidgetFocused_cb
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UIGUI_WidgetBase*                            Widget                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            UserIndex                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_Settings_TabPage_C::OnWidgetFocused_cb(class UIGUI_WidgetBase* Widget, int32_t UserIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Settings_TabPage.WBP_Sheik_Settings_TabPage_C.OnWidgetFocused_cb");
		
		UWBP_Sheik_Settings_TabPage_C_OnWidgetFocused_cb_Params params {};
		params.Widget = Widget;
		params.UserIndex = UserIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Settings_TabPage.WBP_Sheik_Settings_TabPage_C.BindAllOnWidgetFocused
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UWBP_Sheik_Settings_DescriptionPanel_C*      DescriptionPanel                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_Settings_TabPage_C::BindAllOnWidgetFocused(class UWBP_Sheik_Settings_DescriptionPanel_C* DescriptionPanel)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Settings_TabPage.WBP_Sheik_Settings_TabPage_C.BindAllOnWidgetFocused");
		
		UWBP_Sheik_Settings_TabPage_C_BindAllOnWidgetFocused_Params params {};
		params.DescriptionPanel = DescriptionPanel;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWBP_Sheik_Settings_TabPage_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWBP_Sheik_Settings_TabPage_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_Sheik_Settings_TabPage.WBP_Sheik_Settings_TabPage_C");
		return ptr;
	}

}


