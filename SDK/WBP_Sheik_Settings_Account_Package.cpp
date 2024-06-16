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
	 * 		Name   -> Function WBP_Sheik_Settings_Account.WBP_Sheik_Settings_Account_C.GetEulaBtn
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UWBP_Sheik_SettingsButton_C*                 NewParam                                                   (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_Settings_Account_C::GetEulaBtn(class UWBP_Sheik_SettingsButton_C** NewParam)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Settings_Account.WBP_Sheik_Settings_Account_C.GetEulaBtn");
		
		UWBP_Sheik_Settings_Account_C_GetEulaBtn_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (NewParam != nullptr)
			*NewParam = params.NewParam;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Settings_Account.WBP_Sheik_Settings_Account_C.Configure Account Section
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_Settings_Account_C::ConfigureAccountSection()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Settings_Account.WBP_Sheik_Settings_Account_C.Configure Account Section");
		
		UWBP_Sheik_Settings_Account_C_ConfigureAccountSection_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Settings_Account.WBP_Sheik_Settings_Account_C.GetEulaDocumentPath
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      OutPath                                                    (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_Settings_Account_C::GetEulaDocumentPath(class FString* OutPath)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Settings_Account.WBP_Sheik_Settings_Account_C.GetEulaDocumentPath");
		
		UWBP_Sheik_Settings_Account_C_GetEulaDocumentPath_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutPath != nullptr)
			*OutPath = params.OutPath;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Settings_Account.WBP_Sheik_Settings_Account_C.GetTitleStorage
	 * 		Flags  -> ()
	 */
	class USheikUITitleStorageInterface* UWBP_Sheik_Settings_Account_C::GetTitleStorage()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Settings_Account.WBP_Sheik_Settings_Account_C.GetTitleStorage");
		
		UWBP_Sheik_Settings_Account_C_GetTitleStorage_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Settings_Account.WBP_Sheik_Settings_Account_C.GetNavigableWidgets
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<class UIGUI_WidgetBase*>                    NavigableWidgets                                           (Parm, OutParm, ContainsInstancedReference)
	 */
	void UWBP_Sheik_Settings_Account_C::GetNavigableWidgets(TArray<class UIGUI_WidgetBase*>* NavigableWidgets)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Settings_Account.WBP_Sheik_Settings_Account_C.GetNavigableWidgets");
		
		UWBP_Sheik_Settings_Account_C_GetNavigableWidgets_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (NavigableWidgets != nullptr)
			*NavigableWidgets = params.NavigableWidgets;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Settings_Account.WBP_Sheik_Settings_Account_C.Get Localized EULADoc Text
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      LocalizedEULA                                              (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_Settings_Account_C::GetLocalizedEULADocText(class FString* LocalizedEULA)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Settings_Account.WBP_Sheik_Settings_Account_C.Get Localized EULADoc Text");
		
		UWBP_Sheik_Settings_Account_C_GetLocalizedEULADocText_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (LocalizedEULA != nullptr)
			*LocalizedEULA = params.LocalizedEULA;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Settings_Account.WBP_Sheik_Settings_Account_C.ConfigureLanaguagesToggle
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_Settings_Account_C::ConfigureLanaguagesToggle()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Settings_Account.WBP_Sheik_Settings_Account_C.ConfigureLanaguagesToggle");
		
		UWBP_Sheik_Settings_Account_C_ConfigureLanaguagesToggle_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Settings_Account.WBP_Sheik_Settings_Account_C.HideEULA
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_Settings_Account_C::HideEULA()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Settings_Account.WBP_Sheik_Settings_Account_C.HideEULA");
		
		UWBP_Sheik_Settings_Account_C_HideEULA_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Settings_Account.WBP_Sheik_Settings_Account_C.IsEULA_Visible
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsEULA_Visible                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_Sheik_Settings_Account_C::IsEULA_Visible(bool* IsEULA_Visible)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Settings_Account.WBP_Sheik_Settings_Account_C.IsEULA_Visible");
		
		UWBP_Sheik_Settings_Account_C_IsEULA_Visible_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (IsEULA_Visible != nullptr)
			*IsEULA_Visible = params.IsEULA_Visible;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Settings_Account.WBP_Sheik_Settings_Account_C.BndEvt__LanguageToggle_K2Node_ComponentBoundEvent_2_OnOptionChanged__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UIGUI_WidgetBase*                            Source                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FText                                        Text                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		int32_t                                            index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_Settings_Account_C::BndEvt__LanguageToggle_K2Node_ComponentBoundEvent_2_OnOptionChanged__DelegateSignature(class UIGUI_WidgetBase* Source, const class FText& Text, int32_t index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Settings_Account.WBP_Sheik_Settings_Account_C.BndEvt__LanguageToggle_K2Node_ComponentBoundEvent_2_OnOptionChanged__DelegateSignature");
		
		UWBP_Sheik_Settings_Account_C_BndEvt__LanguageToggle_K2Node_ComponentBoundEvent_2_OnOptionChanged__DelegateSignature_Params params {};
		params.Source = Source;
		params.Text = Text;
		params.index = index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Settings_Account.WBP_Sheik_Settings_Account_C.BndEvt__EulaBtn_K2Node_ComponentBoundEvent_1_OnStateChangeEventWithUserIndex__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UIGUI_WidgetBase*                            Widget                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            UserIndex                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_Settings_Account_C::BndEvt__EulaBtn_K2Node_ComponentBoundEvent_1_OnStateChangeEventWithUserIndex__DelegateSignature(class UIGUI_WidgetBase* Widget, int32_t UserIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Settings_Account.WBP_Sheik_Settings_Account_C.BndEvt__EulaBtn_K2Node_ComponentBoundEvent_1_OnStateChangeEventWithUserIndex__DelegateSignature");
		
		UWBP_Sheik_Settings_Account_C_BndEvt__EulaBtn_K2Node_ComponentBoundEvent_1_OnStateChangeEventWithUserIndex__DelegateSignature_Params params {};
		params.Widget = Widget;
		params.UserIndex = UserIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Settings_Account.WBP_Sheik_Settings_Account_C.BndEvt__CopyBtn_K2Node_ComponentBoundEvent_4_OnStateChangeEventWithUserIndex__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UIGUI_WidgetBase*                            Widget                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            UserIndex                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_Settings_Account_C::BndEvt__CopyBtn_K2Node_ComponentBoundEvent_4_OnStateChangeEventWithUserIndex__DelegateSignature(class UIGUI_WidgetBase* Widget, int32_t UserIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Settings_Account.WBP_Sheik_Settings_Account_C.BndEvt__CopyBtn_K2Node_ComponentBoundEvent_4_OnStateChangeEventWithUserIndex__DelegateSignature");
		
		UWBP_Sheik_Settings_Account_C_BndEvt__CopyBtn_K2Node_ComponentBoundEvent_4_OnStateChangeEventWithUserIndex__DelegateSignature_Params params {};
		params.Widget = Widget;
		params.UserIndex = UserIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Settings_Account.WBP_Sheik_Settings_Account_C.TryGetEULA
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_Settings_Account_C::TryGetEULA()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Settings_Account.WBP_Sheik_Settings_Account_C.TryGetEULA");
		
		UWBP_Sheik_Settings_Account_C_TryGetEULA_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Settings_Account.WBP_Sheik_Settings_Account_C.OnEULAFound
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_Settings_Account_C::OnEULAFound()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Settings_Account.WBP_Sheik_Settings_Account_C.OnEULAFound");
		
		UWBP_Sheik_Settings_Account_C_OnEULAFound_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Settings_Account.WBP_Sheik_Settings_Account_C.OnEULANotFound
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_Settings_Account_C::OnEULANotFound()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Settings_Account.WBP_Sheik_Settings_Account_C.OnEULANotFound");
		
		UWBP_Sheik_Settings_Account_C_OnEULANotFound_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Settings_Account.WBP_Sheik_Settings_Account_C.OnTitleStorageDataRetrieved
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bSuccessful                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FSheikError                                 Error                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	 */
	void UWBP_Sheik_Settings_Account_C::OnTitleStorageDataRetrieved(bool bSuccessful, const struct FSheikError& Error)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Settings_Account.WBP_Sheik_Settings_Account_C.OnTitleStorageDataRetrieved");
		
		UWBP_Sheik_Settings_Account_C_OnTitleStorageDataRetrieved_Params params {};
		params.bSuccessful = bSuccessful;
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Settings_Account.WBP_Sheik_Settings_Account_C.ConstructOnlyOnce
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_Settings_Account_C::ConstructOnlyOnce()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Settings_Account.WBP_Sheik_Settings_Account_C.ConstructOnlyOnce");
		
		UWBP_Sheik_Settings_Account_C_ConstructOnlyOnce_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Settings_Account.WBP_Sheik_Settings_Account_C.RequestEULA
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_Settings_Account_C::RequestEULA()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Settings_Account.WBP_Sheik_Settings_Account_C.RequestEULA");
		
		UWBP_Sheik_Settings_Account_C_RequestEULA_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Settings_Account.WBP_Sheik_Settings_Account_C.EULAHideComplete
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_Settings_Account_C::EULAHideComplete()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Settings_Account.WBP_Sheik_Settings_Account_C.EULAHideComplete");
		
		UWBP_Sheik_Settings_Account_C_EULAHideComplete_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Settings_Account.WBP_Sheik_Settings_Account_C.OnActivated
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_Settings_Account_C::OnActivated()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Settings_Account.WBP_Sheik_Settings_Account_C.OnActivated");
		
		UWBP_Sheik_Settings_Account_C_OnActivated_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Settings_Account.WBP_Sheik_Settings_Account_C.BndEvt__WBP_Sheik_Settings_Account_CreditsButton_K2Node_ComponentBoundEvent_3_OnStateChangeEventWithUserIndex__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UIGUI_WidgetBase*                            Widget                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            UserIndex                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_Settings_Account_C::BndEvt__WBP_Sheik_Settings_Account_CreditsButton_K2Node_ComponentBoundEvent_3_OnStateChangeEventWithUserIndex__DelegateSignature(class UIGUI_WidgetBase* Widget, int32_t UserIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Settings_Account.WBP_Sheik_Settings_Account_C.BndEvt__WBP_Sheik_Settings_Account_CreditsButton_K2Node_ComponentBoundEvent_3_OnStateChangeEventWithUserIndex__DelegateSignature");
		
		UWBP_Sheik_Settings_Account_C_BndEvt__WBP_Sheik_Settings_Account_CreditsButton_K2Node_ComponentBoundEvent_3_OnStateChangeEventWithUserIndex__DelegateSignature_Params params {};
		params.Widget = Widget;
		params.UserIndex = UserIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Settings_Account.WBP_Sheik_Settings_Account_C.CreditsClosed
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_Settings_Account_C::CreditsClosed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Settings_Account.WBP_Sheik_Settings_Account_C.CreditsClosed");
		
		UWBP_Sheik_Settings_Account_C_CreditsClosed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Settings_Account.WBP_Sheik_Settings_Account_C.ExecuteUbergraph_WBP_Sheik_Settings_Account
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_Settings_Account_C::ExecuteUbergraph_WBP_Sheik_Settings_Account(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Settings_Account.WBP_Sheik_Settings_Account_C.ExecuteUbergraph_WBP_Sheik_Settings_Account");
		
		UWBP_Sheik_Settings_Account_C_ExecuteUbergraph_WBP_Sheik_Settings_Account_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Settings_Account.WBP_Sheik_Settings_Account_C.OnEulaPopupHidden__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_Settings_Account_C::OnEulaPopupHidden__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Settings_Account.WBP_Sheik_Settings_Account_C.OnEulaPopupHidden__DelegateSignature");
		
		UWBP_Sheik_Settings_Account_C_OnEulaPopupHidden__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Settings_Account.WBP_Sheik_Settings_Account_C.OnEulaPopupShown__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_Settings_Account_C::OnEulaPopupShown__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Settings_Account.WBP_Sheik_Settings_Account_C.OnEulaPopupShown__DelegateSignature");
		
		UWBP_Sheik_Settings_Account_C_OnEulaPopupShown__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWBP_Sheik_Settings_Account_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWBP_Sheik_Settings_Account_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_Sheik_Settings_Account.WBP_Sheik_Settings_Account_C");
		return ptr;
	}

}


