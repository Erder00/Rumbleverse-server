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
	 * 		Name   -> Function WBP_Sheik_PlaygroundPopup.WBP_Sheik_PlaygroundPopup_C.OnAssetLoadedFailed
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<class FString>                              FailedAssetListPaths                                       (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UWBP_Sheik_PlaygroundPopup_C::OnAssetLoadedFailed(TArray<class FString>* FailedAssetListPaths)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_PlaygroundPopup.WBP_Sheik_PlaygroundPopup_C.OnAssetLoadedFailed");
		
		UWBP_Sheik_PlaygroundPopup_C_OnAssetLoadedFailed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (FailedAssetListPaths != nullptr)
			*FailedAssetListPaths = params.FailedAssetListPaths;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_PlaygroundPopup.WBP_Sheik_PlaygroundPopup_C.OnDismissWithoutCombat
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FInputEventData                             InputEventData                                             (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UWBP_Sheik_PlaygroundPopup_C::OnDismissWithoutCombat(const struct FInputEventData& InputEventData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_PlaygroundPopup.WBP_Sheik_PlaygroundPopup_C.OnDismissWithoutCombat");
		
		UWBP_Sheik_PlaygroundPopup_C_OnDismissWithoutCombat_Params params {};
		params.InputEventData = InputEventData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_PlaygroundPopup.WBP_Sheik_PlaygroundPopup_C.OnDismissWithCombat
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FInputEventData                             InputEventData                                             (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UWBP_Sheik_PlaygroundPopup_C::OnDismissWithCombat(const struct FInputEventData& InputEventData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_PlaygroundPopup.WBP_Sheik_PlaygroundPopup_C.OnDismissWithCombat");
		
		UWBP_Sheik_PlaygroundPopup_C_OnDismissWithCombat_Params params {};
		params.InputEventData = InputEventData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_PlaygroundPopup.WBP_Sheik_PlaygroundPopup_C.ConfigureDismissOptions
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               ShowCombatModeToggles                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_Sheik_PlaygroundPopup_C::ConfigureDismissOptions(bool ShowCombatModeToggles)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_PlaygroundPopup.WBP_Sheik_PlaygroundPopup_C.ConfigureDismissOptions");
		
		UWBP_Sheik_PlaygroundPopup_C_ConfigureDismissOptions_Params params {};
		params.ShowCombatModeToggles = ShowCombatModeToggles;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_PlaygroundPopup.WBP_Sheik_PlaygroundPopup_C.HideControlLinePrompt
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               HidePrompt                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_Sheik_PlaygroundPopup_C::HideControlLinePrompt(bool HidePrompt)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_PlaygroundPopup.WBP_Sheik_PlaygroundPopup_C.HideControlLinePrompt");
		
		UWBP_Sheik_PlaygroundPopup_C_HideControlLinePrompt_Params params {};
		params.HidePrompt = HidePrompt;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_PlaygroundPopup.WBP_Sheik_PlaygroundPopup_C.DisplayPopupImage
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     LoadedObject                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_PlaygroundPopup_C::DisplayPopupImage(class UObject* LoadedObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_PlaygroundPopup.WBP_Sheik_PlaygroundPopup_C.DisplayPopupImage");
		
		UWBP_Sheik_PlaygroundPopup_C_DisplayPopupImage_Params params {};
		params.LoadedObject = LoadedObject;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_PlaygroundPopup.WBP_Sheik_PlaygroundPopup_C.DisplayPopupMovie
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     LoadedObject                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_PlaygroundPopup_C::DisplayPopupMovie(class UObject* LoadedObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_PlaygroundPopup.WBP_Sheik_PlaygroundPopup_C.DisplayPopupMovie");
		
		UWBP_Sheik_PlaygroundPopup_C_DisplayPopupMovie_Params params {};
		params.LoadedObject = LoadedObject;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_PlaygroundPopup.WBP_Sheik_PlaygroundPopup_C.IsControlLineValid
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSheikPlaygroundPopupControlLine            InControlLine                                              (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		bool                                               OutValid                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_Sheik_PlaygroundPopup_C::IsControlLineValid(const struct FSheikPlaygroundPopupControlLine& InControlLine, bool* OutValid)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_PlaygroundPopup.WBP_Sheik_PlaygroundPopup_C.IsControlLineValid");
		
		UWBP_Sheik_PlaygroundPopup_C_IsControlLineValid_Params params {};
		params.InControlLine = InControlLine;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutValid != nullptr)
			*OutValid = params.OutValid;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_PlaygroundPopup.WBP_Sheik_PlaygroundPopup_C.SetControlLine
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSheikPlaygroundPopupControlLine            InControlLine                                              (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UWBP_Sheik_PlaygroundPopup_C::SetControlLine(const struct FSheikPlaygroundPopupControlLine& InControlLine)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_PlaygroundPopup.WBP_Sheik_PlaygroundPopup_C.SetControlLine");
		
		UWBP_Sheik_PlaygroundPopup_C_SetControlLine_Params params {};
		params.InControlLine = InControlLine;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_PlaygroundPopup.WBP_Sheik_PlaygroundPopup_C.SetData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSheikPlaygroundPopupDefinitionRow          InPopupDefinition                                          (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UWBP_Sheik_PlaygroundPopup_C::SetData(const struct FSheikPlaygroundPopupDefinitionRow& InPopupDefinition)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_PlaygroundPopup.WBP_Sheik_PlaygroundPopup_C.SetData");
		
		UWBP_Sheik_PlaygroundPopup_C_SetData_Params params {};
		params.InPopupDefinition = InPopupDefinition;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_PlaygroundPopup.WBP_Sheik_PlaygroundPopup_C.OnBackPressed
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FInputEventData                             InputEventData                                             (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UWBP_Sheik_PlaygroundPopup_C::OnBackPressed(const struct FInputEventData& InputEventData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_PlaygroundPopup.WBP_Sheik_PlaygroundPopup_C.OnBackPressed");
		
		UWBP_Sheik_PlaygroundPopup_C_OnBackPressed_Params params {};
		params.InputEventData = InputEventData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_PlaygroundPopup.WBP_Sheik_PlaygroundPopup_C.ConstructOnlyOnce
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_PlaygroundPopup_C::ConstructOnlyOnce()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_PlaygroundPopup.WBP_Sheik_PlaygroundPopup_C.ConstructOnlyOnce");
		
		UWBP_Sheik_PlaygroundPopup_C_ConstructOnlyOnce_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_PlaygroundPopup.WBP_Sheik_PlaygroundPopup_C.ClosePlaygroundPopupScreen
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_PlaygroundPopup_C::ClosePlaygroundPopupScreen()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_PlaygroundPopup.WBP_Sheik_PlaygroundPopup_C.ClosePlaygroundPopupScreen");
		
		UWBP_Sheik_PlaygroundPopup_C_ClosePlaygroundPopupScreen_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_PlaygroundPopup.WBP_Sheik_PlaygroundPopup_C.ShowNewPlaygroundPopup
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FDataTableRowHandle                         InPopupRowHandle                                           (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 */
	void UWBP_Sheik_PlaygroundPopup_C::ShowNewPlaygroundPopup(const struct FDataTableRowHandle& InPopupRowHandle)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_PlaygroundPopup.WBP_Sheik_PlaygroundPopup_C.ShowNewPlaygroundPopup");
		
		UWBP_Sheik_PlaygroundPopup_C_ShowNewPlaygroundPopup_Params params {};
		params.InPopupRowHandle = InPopupRowHandle;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_PlaygroundPopup.WBP_Sheik_PlaygroundPopup_C.FocusGained
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_PlaygroundPopup_C::FocusGained()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_PlaygroundPopup.WBP_Sheik_PlaygroundPopup_C.FocusGained");
		
		UWBP_Sheik_PlaygroundPopup_C_FocusGained_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_PlaygroundPopup.WBP_Sheik_PlaygroundPopup_C.FocusLost
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_PlaygroundPopup_C::FocusLost()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_PlaygroundPopup.WBP_Sheik_PlaygroundPopup_C.FocusLost");
		
		UWBP_Sheik_PlaygroundPopup_C_FocusLost_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_PlaygroundPopup.WBP_Sheik_PlaygroundPopup_C.CleanUp
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_PlaygroundPopup_C::CleanUp()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_PlaygroundPopup.WBP_Sheik_PlaygroundPopup_C.CleanUp");
		
		UWBP_Sheik_PlaygroundPopup_C_CleanUp_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_PlaygroundPopup.WBP_Sheik_PlaygroundPopup_C.ExecuteUbergraph_WBP_Sheik_PlaygroundPopup
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_PlaygroundPopup_C::ExecuteUbergraph_WBP_Sheik_PlaygroundPopup(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_PlaygroundPopup.WBP_Sheik_PlaygroundPopup_C.ExecuteUbergraph_WBP_Sheik_PlaygroundPopup");
		
		UWBP_Sheik_PlaygroundPopup_C_ExecuteUbergraph_WBP_Sheik_PlaygroundPopup_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_PlaygroundPopup.WBP_Sheik_PlaygroundPopup_C.OnClosePopup__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_PlaygroundPopup_C::OnClosePopup__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_PlaygroundPopup.WBP_Sheik_PlaygroundPopup_C.OnClosePopup__DelegateSignature");
		
		UWBP_Sheik_PlaygroundPopup_C_OnClosePopup__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWBP_Sheik_PlaygroundPopup_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWBP_Sheik_PlaygroundPopup_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_Sheik_PlaygroundPopup.WBP_Sheik_PlaygroundPopup_C");
		return ptr;
	}

}


