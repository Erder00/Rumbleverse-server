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
	 * 		Name   -> Function WBP_Sheik_Title_KidsWebServicesDOBEntry.WBP_Sheik_Title_KidsWebServicesDOBEntry_C.ResetCombos
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_Title_KidsWebServicesDOBEntry_C::ResetCombos()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Title_KidsWebServicesDOBEntry.WBP_Sheik_Title_KidsWebServicesDOBEntry_C.ResetCombos");
		
		UWBP_Sheik_Title_KidsWebServicesDOBEntry_C_ResetCombos_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Title_KidsWebServicesDOBEntry.WBP_Sheik_Title_KidsWebServicesDOBEntry_C.GetAccountsManager
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class USheikPlayerAccountsManager*                 AccountsManager                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_Title_KidsWebServicesDOBEntry_C::GetAccountsManager(class USheikPlayerAccountsManager** AccountsManager)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Title_KidsWebServicesDOBEntry.WBP_Sheik_Title_KidsWebServicesDOBEntry_C.GetAccountsManager");
		
		UWBP_Sheik_Title_KidsWebServicesDOBEntry_C_GetAccountsManager_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AccountsManager != nullptr)
			*AccountsManager = params.AccountsManager;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Title_KidsWebServicesDOBEntry.WBP_Sheik_Title_KidsWebServicesDOBEntry_C.ValidateDay
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_Title_KidsWebServicesDOBEntry_C::ValidateDay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Title_KidsWebServicesDOBEntry.WBP_Sheik_Title_KidsWebServicesDOBEntry_C.ValidateDay");
		
		UWBP_Sheik_Title_KidsWebServicesDOBEntry_C_ValidateDay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Title_KidsWebServicesDOBEntry.WBP_Sheik_Title_KidsWebServicesDOBEntry_C.UpdateButton
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_Title_KidsWebServicesDOBEntry_C::UpdateButton()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Title_KidsWebServicesDOBEntry.WBP_Sheik_Title_KidsWebServicesDOBEntry_C.UpdateButton");
		
		UWBP_Sheik_Title_KidsWebServicesDOBEntry_C_UpdateButton_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Title_KidsWebServicesDOBEntry.WBP_Sheik_Title_KidsWebServicesDOBEntry_C.GetSelectedDay
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Month                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_Title_KidsWebServicesDOBEntry_C::GetSelectedDay(int32_t* Month)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Title_KidsWebServicesDOBEntry.WBP_Sheik_Title_KidsWebServicesDOBEntry_C.GetSelectedDay");
		
		UWBP_Sheik_Title_KidsWebServicesDOBEntry_C_GetSelectedDay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Month != nullptr)
			*Month = params.Month;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Title_KidsWebServicesDOBEntry.WBP_Sheik_Title_KidsWebServicesDOBEntry_C.GetSelectedMonth
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Month                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_Title_KidsWebServicesDOBEntry_C::GetSelectedMonth(int32_t* Month)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Title_KidsWebServicesDOBEntry.WBP_Sheik_Title_KidsWebServicesDOBEntry_C.GetSelectedMonth");
		
		UWBP_Sheik_Title_KidsWebServicesDOBEntry_C_GetSelectedMonth_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Month != nullptr)
			*Month = params.Month;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Title_KidsWebServicesDOBEntry.WBP_Sheik_Title_KidsWebServicesDOBEntry_C.GetSelectedYear
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Year                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_Title_KidsWebServicesDOBEntry_C::GetSelectedYear(int32_t* Year)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Title_KidsWebServicesDOBEntry.WBP_Sheik_Title_KidsWebServicesDOBEntry_C.GetSelectedYear");
		
		UWBP_Sheik_Title_KidsWebServicesDOBEntry_C_GetSelectedYear_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Year != nullptr)
			*Year = params.Year;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Title_KidsWebServicesDOBEntry.WBP_Sheik_Title_KidsWebServicesDOBEntry_C.PopulateDays
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_Title_KidsWebServicesDOBEntry_C::PopulateDays()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Title_KidsWebServicesDOBEntry.WBP_Sheik_Title_KidsWebServicesDOBEntry_C.PopulateDays");
		
		UWBP_Sheik_Title_KidsWebServicesDOBEntry_C_PopulateDays_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Title_KidsWebServicesDOBEntry.WBP_Sheik_Title_KidsWebServicesDOBEntry_C.PopulateMonths
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_Title_KidsWebServicesDOBEntry_C::PopulateMonths()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Title_KidsWebServicesDOBEntry.WBP_Sheik_Title_KidsWebServicesDOBEntry_C.PopulateMonths");
		
		UWBP_Sheik_Title_KidsWebServicesDOBEntry_C_PopulateMonths_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Title_KidsWebServicesDOBEntry.WBP_Sheik_Title_KidsWebServicesDOBEntry_C.PopulateYears
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_Title_KidsWebServicesDOBEntry_C::PopulateYears()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Title_KidsWebServicesDOBEntry.WBP_Sheik_Title_KidsWebServicesDOBEntry_C.PopulateYears");
		
		UWBP_Sheik_Title_KidsWebServicesDOBEntry_C_PopulateYears_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Title_KidsWebServicesDOBEntry.WBP_Sheik_Title_KidsWebServicesDOBEntry_C.OnActivated
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_Title_KidsWebServicesDOBEntry_C::OnActivated()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Title_KidsWebServicesDOBEntry.WBP_Sheik_Title_KidsWebServicesDOBEntry_C.OnActivated");
		
		UWBP_Sheik_Title_KidsWebServicesDOBEntry_C_OnActivated_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Title_KidsWebServicesDOBEntry.WBP_Sheik_Title_KidsWebServicesDOBEntry_C.OnDeactivated
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_Title_KidsWebServicesDOBEntry_C::OnDeactivated()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Title_KidsWebServicesDOBEntry.WBP_Sheik_Title_KidsWebServicesDOBEntry_C.OnDeactivated");
		
		UWBP_Sheik_Title_KidsWebServicesDOBEntry_C_OnDeactivated_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Title_KidsWebServicesDOBEntry.WBP_Sheik_Title_KidsWebServicesDOBEntry_C.BndEvt__WBP_Sheik_Title_KidsWebServicesDOBEntry_SubmitDOBButton_K2Node_ComponentBoundEvent_0_OnActionConfirmed__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_Title_KidsWebServicesDOBEntry_C::BndEvt__WBP_Sheik_Title_KidsWebServicesDOBEntry_SubmitDOBButton_K2Node_ComponentBoundEvent_0_OnActionConfirmed__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Title_KidsWebServicesDOBEntry.WBP_Sheik_Title_KidsWebServicesDOBEntry_C.BndEvt__WBP_Sheik_Title_KidsWebServicesDOBEntry_SubmitDOBButton_K2Node_ComponentBoundEvent_0_OnActionConfirmed__DelegateSignature");
		
		UWBP_Sheik_Title_KidsWebServicesDOBEntry_C_BndEvt__WBP_Sheik_Title_KidsWebServicesDOBEntry_SubmitDOBButton_K2Node_ComponentBoundEvent_0_OnActionConfirmed__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Title_KidsWebServicesDOBEntry.WBP_Sheik_Title_KidsWebServicesDOBEntry_C.BndEvt__WBP_Sheik_Title_KidsWebServicesDOBEntry_MonthCombo_K2Node_ComponentBoundEvent_8_OnComboSelectionChanged__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Selection                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_Title_KidsWebServicesDOBEntry_C::BndEvt__WBP_Sheik_Title_KidsWebServicesDOBEntry_MonthCombo_K2Node_ComponentBoundEvent_8_OnComboSelectionChanged__DelegateSignature(const class FString& Selection)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Title_KidsWebServicesDOBEntry.WBP_Sheik_Title_KidsWebServicesDOBEntry_C.BndEvt__WBP_Sheik_Title_KidsWebServicesDOBEntry_MonthCombo_K2Node_ComponentBoundEvent_8_OnComboSelectionChanged__DelegateSignature");
		
		UWBP_Sheik_Title_KidsWebServicesDOBEntry_C_BndEvt__WBP_Sheik_Title_KidsWebServicesDOBEntry_MonthCombo_K2Node_ComponentBoundEvent_8_OnComboSelectionChanged__DelegateSignature_Params params {};
		params.Selection = Selection;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Title_KidsWebServicesDOBEntry.WBP_Sheik_Title_KidsWebServicesDOBEntry_C.BndEvt__WBP_Sheik_Title_KidsWebServicesDOBEntry_MonthCombo_K2Node_ComponentBoundEvent_9_OnComboOpening__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UComboBoxString*                             ComboBox                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_Title_KidsWebServicesDOBEntry_C::BndEvt__WBP_Sheik_Title_KidsWebServicesDOBEntry_MonthCombo_K2Node_ComponentBoundEvent_9_OnComboOpening__DelegateSignature(class UComboBoxString* ComboBox)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Title_KidsWebServicesDOBEntry.WBP_Sheik_Title_KidsWebServicesDOBEntry_C.BndEvt__WBP_Sheik_Title_KidsWebServicesDOBEntry_MonthCombo_K2Node_ComponentBoundEvent_9_OnComboOpening__DelegateSignature");
		
		UWBP_Sheik_Title_KidsWebServicesDOBEntry_C_BndEvt__WBP_Sheik_Title_KidsWebServicesDOBEntry_MonthCombo_K2Node_ComponentBoundEvent_9_OnComboOpening__DelegateSignature_Params params {};
		params.ComboBox = ComboBox;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Title_KidsWebServicesDOBEntry.WBP_Sheik_Title_KidsWebServicesDOBEntry_C.BndEvt__WBP_Sheik_Title_KidsWebServicesDOBEntry_DayCombo_K2Node_ComponentBoundEvent_11_OnComboOpening__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UComboBoxString*                             ComboBox                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_Title_KidsWebServicesDOBEntry_C::BndEvt__WBP_Sheik_Title_KidsWebServicesDOBEntry_DayCombo_K2Node_ComponentBoundEvent_11_OnComboOpening__DelegateSignature(class UComboBoxString* ComboBox)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Title_KidsWebServicesDOBEntry.WBP_Sheik_Title_KidsWebServicesDOBEntry_C.BndEvt__WBP_Sheik_Title_KidsWebServicesDOBEntry_DayCombo_K2Node_ComponentBoundEvent_11_OnComboOpening__DelegateSignature");
		
		UWBP_Sheik_Title_KidsWebServicesDOBEntry_C_BndEvt__WBP_Sheik_Title_KidsWebServicesDOBEntry_DayCombo_K2Node_ComponentBoundEvent_11_OnComboOpening__DelegateSignature_Params params {};
		params.ComboBox = ComboBox;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Title_KidsWebServicesDOBEntry.WBP_Sheik_Title_KidsWebServicesDOBEntry_C.BndEvt__WBP_Sheik_Title_KidsWebServicesDOBEntry_YearCombo_K2Node_ComponentBoundEvent_13_OnComboOpening__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UComboBoxString*                             ComboBox                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_Title_KidsWebServicesDOBEntry_C::BndEvt__WBP_Sheik_Title_KidsWebServicesDOBEntry_YearCombo_K2Node_ComponentBoundEvent_13_OnComboOpening__DelegateSignature(class UComboBoxString* ComboBox)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Title_KidsWebServicesDOBEntry.WBP_Sheik_Title_KidsWebServicesDOBEntry_C.BndEvt__WBP_Sheik_Title_KidsWebServicesDOBEntry_YearCombo_K2Node_ComponentBoundEvent_13_OnComboOpening__DelegateSignature");
		
		UWBP_Sheik_Title_KidsWebServicesDOBEntry_C_BndEvt__WBP_Sheik_Title_KidsWebServicesDOBEntry_YearCombo_K2Node_ComponentBoundEvent_13_OnComboOpening__DelegateSignature_Params params {};
		params.ComboBox = ComboBox;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Title_KidsWebServicesDOBEntry.WBP_Sheik_Title_KidsWebServicesDOBEntry_C.BndEvt__WBP_Sheik_Title_KidsWebServicesDOBEntry_BackButton_K2Node_ComponentBoundEvent_1_OnActionConfirmed__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_Title_KidsWebServicesDOBEntry_C::BndEvt__WBP_Sheik_Title_KidsWebServicesDOBEntry_BackButton_K2Node_ComponentBoundEvent_1_OnActionConfirmed__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Title_KidsWebServicesDOBEntry.WBP_Sheik_Title_KidsWebServicesDOBEntry_C.BndEvt__WBP_Sheik_Title_KidsWebServicesDOBEntry_BackButton_K2Node_ComponentBoundEvent_1_OnActionConfirmed__DelegateSignature");
		
		UWBP_Sheik_Title_KidsWebServicesDOBEntry_C_BndEvt__WBP_Sheik_Title_KidsWebServicesDOBEntry_BackButton_K2Node_ComponentBoundEvent_1_OnActionConfirmed__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Title_KidsWebServicesDOBEntry.WBP_Sheik_Title_KidsWebServicesDOBEntry_C.BndEvt__WBP_Sheik_Title_KidsWebServicesDOBEntry_MonthCombo_K2Node_ComponentBoundEvent_2_OnComboClosing__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UComboBoxString*                             ComboBox                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_Title_KidsWebServicesDOBEntry_C::BndEvt__WBP_Sheik_Title_KidsWebServicesDOBEntry_MonthCombo_K2Node_ComponentBoundEvent_2_OnComboClosing__DelegateSignature(class UComboBoxString* ComboBox)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Title_KidsWebServicesDOBEntry.WBP_Sheik_Title_KidsWebServicesDOBEntry_C.BndEvt__WBP_Sheik_Title_KidsWebServicesDOBEntry_MonthCombo_K2Node_ComponentBoundEvent_2_OnComboClosing__DelegateSignature");
		
		UWBP_Sheik_Title_KidsWebServicesDOBEntry_C_BndEvt__WBP_Sheik_Title_KidsWebServicesDOBEntry_MonthCombo_K2Node_ComponentBoundEvent_2_OnComboClosing__DelegateSignature_Params params {};
		params.ComboBox = ComboBox;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Title_KidsWebServicesDOBEntry.WBP_Sheik_Title_KidsWebServicesDOBEntry_C.BndEvt__WBP_Sheik_Title_KidsWebServicesDOBEntry_DayCombo_K2Node_ComponentBoundEvent_3_OnComboClosing__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UComboBoxString*                             ComboBox                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_Title_KidsWebServicesDOBEntry_C::BndEvt__WBP_Sheik_Title_KidsWebServicesDOBEntry_DayCombo_K2Node_ComponentBoundEvent_3_OnComboClosing__DelegateSignature(class UComboBoxString* ComboBox)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Title_KidsWebServicesDOBEntry.WBP_Sheik_Title_KidsWebServicesDOBEntry_C.BndEvt__WBP_Sheik_Title_KidsWebServicesDOBEntry_DayCombo_K2Node_ComponentBoundEvent_3_OnComboClosing__DelegateSignature");
		
		UWBP_Sheik_Title_KidsWebServicesDOBEntry_C_BndEvt__WBP_Sheik_Title_KidsWebServicesDOBEntry_DayCombo_K2Node_ComponentBoundEvent_3_OnComboClosing__DelegateSignature_Params params {};
		params.ComboBox = ComboBox;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Title_KidsWebServicesDOBEntry.WBP_Sheik_Title_KidsWebServicesDOBEntry_C.BndEvt__WBP_Sheik_Title_KidsWebServicesDOBEntry_YearCombo_K2Node_ComponentBoundEvent_4_OnComboClosing__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UComboBoxString*                             ComboBox                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_Title_KidsWebServicesDOBEntry_C::BndEvt__WBP_Sheik_Title_KidsWebServicesDOBEntry_YearCombo_K2Node_ComponentBoundEvent_4_OnComboClosing__DelegateSignature(class UComboBoxString* ComboBox)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Title_KidsWebServicesDOBEntry.WBP_Sheik_Title_KidsWebServicesDOBEntry_C.BndEvt__WBP_Sheik_Title_KidsWebServicesDOBEntry_YearCombo_K2Node_ComponentBoundEvent_4_OnComboClosing__DelegateSignature");
		
		UWBP_Sheik_Title_KidsWebServicesDOBEntry_C_BndEvt__WBP_Sheik_Title_KidsWebServicesDOBEntry_YearCombo_K2Node_ComponentBoundEvent_4_OnComboClosing__DelegateSignature_Params params {};
		params.ComboBox = ComboBox;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Title_KidsWebServicesDOBEntry.WBP_Sheik_Title_KidsWebServicesDOBEntry_C.BndEvt__WBP_Sheik_Title_KidsWebServicesDOBEntry_YearCombo_K2Node_ComponentBoundEvent_5_OnComboSelectionChanged__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Selection                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_Title_KidsWebServicesDOBEntry_C::BndEvt__WBP_Sheik_Title_KidsWebServicesDOBEntry_YearCombo_K2Node_ComponentBoundEvent_5_OnComboSelectionChanged__DelegateSignature(const class FString& Selection)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Title_KidsWebServicesDOBEntry.WBP_Sheik_Title_KidsWebServicesDOBEntry_C.BndEvt__WBP_Sheik_Title_KidsWebServicesDOBEntry_YearCombo_K2Node_ComponentBoundEvent_5_OnComboSelectionChanged__DelegateSignature");
		
		UWBP_Sheik_Title_KidsWebServicesDOBEntry_C_BndEvt__WBP_Sheik_Title_KidsWebServicesDOBEntry_YearCombo_K2Node_ComponentBoundEvent_5_OnComboSelectionChanged__DelegateSignature_Params params {};
		params.Selection = Selection;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Title_KidsWebServicesDOBEntry.WBP_Sheik_Title_KidsWebServicesDOBEntry_C.ExecuteUbergraph_WBP_Sheik_Title_KidsWebServicesDOBEntry
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_Title_KidsWebServicesDOBEntry_C::ExecuteUbergraph_WBP_Sheik_Title_KidsWebServicesDOBEntry(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Title_KidsWebServicesDOBEntry.WBP_Sheik_Title_KidsWebServicesDOBEntry_C.ExecuteUbergraph_WBP_Sheik_Title_KidsWebServicesDOBEntry");
		
		UWBP_Sheik_Title_KidsWebServicesDOBEntry_C_ExecuteUbergraph_WBP_Sheik_Title_KidsWebServicesDOBEntry_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Title_KidsWebServicesDOBEntry.WBP_Sheik_Title_KidsWebServicesDOBEntry_C.OnBack__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_Title_KidsWebServicesDOBEntry_C::OnBack__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Title_KidsWebServicesDOBEntry.WBP_Sheik_Title_KidsWebServicesDOBEntry_C.OnBack__DelegateSignature");
		
		UWBP_Sheik_Title_KidsWebServicesDOBEntry_C_OnBack__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Title_KidsWebServicesDOBEntry.WBP_Sheik_Title_KidsWebServicesDOBEntry_C.OnDateOfBirthCommited__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FDateTime                                   DateOfBirth                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_Title_KidsWebServicesDOBEntry_C::OnDateOfBirthCommited__DelegateSignature(const struct FDateTime& DateOfBirth)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Title_KidsWebServicesDOBEntry.WBP_Sheik_Title_KidsWebServicesDOBEntry_C.OnDateOfBirthCommited__DelegateSignature");
		
		UWBP_Sheik_Title_KidsWebServicesDOBEntry_C_OnDateOfBirthCommited__DelegateSignature_Params params {};
		params.DateOfBirth = DateOfBirth;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWBP_Sheik_Title_KidsWebServicesDOBEntry_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWBP_Sheik_Title_KidsWebServicesDOBEntry_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_Sheik_Title_KidsWebServicesDOBEntry.WBP_Sheik_Title_KidsWebServicesDOBEntry_C");
		return ptr;
	}

}


