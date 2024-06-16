#pragma once

/**
 * Name: Rumbleverse
 * Version: Latest
 */

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * Function WBP_Sheik_Title_KidsWebServicesDOBEntry.WBP_Sheik_Title_KidsWebServicesDOBEntry_C.ResetCombos
	 */
	struct UWBP_Sheik_Title_KidsWebServicesDOBEntry_C_ResetCombos_Params
	{	};

	/**
	 * Function WBP_Sheik_Title_KidsWebServicesDOBEntry.WBP_Sheik_Title_KidsWebServicesDOBEntry_C.GetAccountsManager
	 */
	struct UWBP_Sheik_Title_KidsWebServicesDOBEntry_C_GetAccountsManager_Params
	{
	public:
		class USheikPlayerAccountsManager*                         AccountsManager;                                         // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Sheik_Title_KidsWebServicesDOBEntry.WBP_Sheik_Title_KidsWebServicesDOBEntry_C.ValidateDay
	 */
	struct UWBP_Sheik_Title_KidsWebServicesDOBEntry_C_ValidateDay_Params
	{	};

	/**
	 * Function WBP_Sheik_Title_KidsWebServicesDOBEntry.WBP_Sheik_Title_KidsWebServicesDOBEntry_C.UpdateButton
	 */
	struct UWBP_Sheik_Title_KidsWebServicesDOBEntry_C_UpdateButton_Params
	{	};

	/**
	 * Function WBP_Sheik_Title_KidsWebServicesDOBEntry.WBP_Sheik_Title_KidsWebServicesDOBEntry_C.GetSelectedDay
	 */
	struct UWBP_Sheik_Title_KidsWebServicesDOBEntry_C_GetSelectedDay_Params
	{
	public:
		int32_t                                                    Month;                                                   // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_13KU[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function WBP_Sheik_Title_KidsWebServicesDOBEntry.WBP_Sheik_Title_KidsWebServicesDOBEntry_C.GetSelectedMonth
	 */
	struct UWBP_Sheik_Title_KidsWebServicesDOBEntry_C_GetSelectedMonth_Params
	{
	public:
		int32_t                                                    Month;                                                   // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_CUVE[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function WBP_Sheik_Title_KidsWebServicesDOBEntry.WBP_Sheik_Title_KidsWebServicesDOBEntry_C.GetSelectedYear
	 */
	struct UWBP_Sheik_Title_KidsWebServicesDOBEntry_C_GetSelectedYear_Params
	{
	public:
		int32_t                                                    Year;                                                    // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_3QCS[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function WBP_Sheik_Title_KidsWebServicesDOBEntry.WBP_Sheik_Title_KidsWebServicesDOBEntry_C.PopulateDays
	 */
	struct UWBP_Sheik_Title_KidsWebServicesDOBEntry_C_PopulateDays_Params
	{	};

	/**
	 * Function WBP_Sheik_Title_KidsWebServicesDOBEntry.WBP_Sheik_Title_KidsWebServicesDOBEntry_C.PopulateMonths
	 */
	struct UWBP_Sheik_Title_KidsWebServicesDOBEntry_C_PopulateMonths_Params
	{	};

	/**
	 * Function WBP_Sheik_Title_KidsWebServicesDOBEntry.WBP_Sheik_Title_KidsWebServicesDOBEntry_C.PopulateYears
	 */
	struct UWBP_Sheik_Title_KidsWebServicesDOBEntry_C_PopulateYears_Params
	{	};

	/**
	 * Function WBP_Sheik_Title_KidsWebServicesDOBEntry.WBP_Sheik_Title_KidsWebServicesDOBEntry_C.OnActivated
	 */
	struct UWBP_Sheik_Title_KidsWebServicesDOBEntry_C_OnActivated_Params
	{	};

	/**
	 * Function WBP_Sheik_Title_KidsWebServicesDOBEntry.WBP_Sheik_Title_KidsWebServicesDOBEntry_C.OnDeactivated
	 */
	struct UWBP_Sheik_Title_KidsWebServicesDOBEntry_C_OnDeactivated_Params
	{	};

	/**
	 * Function WBP_Sheik_Title_KidsWebServicesDOBEntry.WBP_Sheik_Title_KidsWebServicesDOBEntry_C.BndEvt__WBP_Sheik_Title_KidsWebServicesDOBEntry_SubmitDOBButton_K2Node_ComponentBoundEvent_0_OnActionConfirmed__DelegateSignature
	 */
	struct UWBP_Sheik_Title_KidsWebServicesDOBEntry_C_BndEvt__WBP_Sheik_Title_KidsWebServicesDOBEntry_SubmitDOBButton_K2Node_ComponentBoundEvent_0_OnActionConfirmed__DelegateSignature_Params
	{	};

	/**
	 * Function WBP_Sheik_Title_KidsWebServicesDOBEntry.WBP_Sheik_Title_KidsWebServicesDOBEntry_C.BndEvt__WBP_Sheik_Title_KidsWebServicesDOBEntry_MonthCombo_K2Node_ComponentBoundEvent_8_OnComboSelectionChanged__DelegateSignature
	 */
	struct UWBP_Sheik_Title_KidsWebServicesDOBEntry_C_BndEvt__WBP_Sheik_Title_KidsWebServicesDOBEntry_MonthCombo_K2Node_ComponentBoundEvent_8_OnComboSelectionChanged__DelegateSignature_Params
	{
	public:
		class FString                                              Selection;                                               // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Sheik_Title_KidsWebServicesDOBEntry.WBP_Sheik_Title_KidsWebServicesDOBEntry_C.BndEvt__WBP_Sheik_Title_KidsWebServicesDOBEntry_MonthCombo_K2Node_ComponentBoundEvent_9_OnComboOpening__DelegateSignature
	 */
	struct UWBP_Sheik_Title_KidsWebServicesDOBEntry_C_BndEvt__WBP_Sheik_Title_KidsWebServicesDOBEntry_MonthCombo_K2Node_ComponentBoundEvent_9_OnComboOpening__DelegateSignature_Params
	{
	public:
		class UComboBoxString*                                     ComboBox;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Sheik_Title_KidsWebServicesDOBEntry.WBP_Sheik_Title_KidsWebServicesDOBEntry_C.BndEvt__WBP_Sheik_Title_KidsWebServicesDOBEntry_DayCombo_K2Node_ComponentBoundEvent_11_OnComboOpening__DelegateSignature
	 */
	struct UWBP_Sheik_Title_KidsWebServicesDOBEntry_C_BndEvt__WBP_Sheik_Title_KidsWebServicesDOBEntry_DayCombo_K2Node_ComponentBoundEvent_11_OnComboOpening__DelegateSignature_Params
	{
	public:
		class UComboBoxString*                                     ComboBox;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Sheik_Title_KidsWebServicesDOBEntry.WBP_Sheik_Title_KidsWebServicesDOBEntry_C.BndEvt__WBP_Sheik_Title_KidsWebServicesDOBEntry_YearCombo_K2Node_ComponentBoundEvent_13_OnComboOpening__DelegateSignature
	 */
	struct UWBP_Sheik_Title_KidsWebServicesDOBEntry_C_BndEvt__WBP_Sheik_Title_KidsWebServicesDOBEntry_YearCombo_K2Node_ComponentBoundEvent_13_OnComboOpening__DelegateSignature_Params
	{
	public:
		class UComboBoxString*                                     ComboBox;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Sheik_Title_KidsWebServicesDOBEntry.WBP_Sheik_Title_KidsWebServicesDOBEntry_C.BndEvt__WBP_Sheik_Title_KidsWebServicesDOBEntry_BackButton_K2Node_ComponentBoundEvent_1_OnActionConfirmed__DelegateSignature
	 */
	struct UWBP_Sheik_Title_KidsWebServicesDOBEntry_C_BndEvt__WBP_Sheik_Title_KidsWebServicesDOBEntry_BackButton_K2Node_ComponentBoundEvent_1_OnActionConfirmed__DelegateSignature_Params
	{	};

	/**
	 * Function WBP_Sheik_Title_KidsWebServicesDOBEntry.WBP_Sheik_Title_KidsWebServicesDOBEntry_C.BndEvt__WBP_Sheik_Title_KidsWebServicesDOBEntry_MonthCombo_K2Node_ComponentBoundEvent_2_OnComboClosing__DelegateSignature
	 */
	struct UWBP_Sheik_Title_KidsWebServicesDOBEntry_C_BndEvt__WBP_Sheik_Title_KidsWebServicesDOBEntry_MonthCombo_K2Node_ComponentBoundEvent_2_OnComboClosing__DelegateSignature_Params
	{
	public:
		class UComboBoxString*                                     ComboBox;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Sheik_Title_KidsWebServicesDOBEntry.WBP_Sheik_Title_KidsWebServicesDOBEntry_C.BndEvt__WBP_Sheik_Title_KidsWebServicesDOBEntry_DayCombo_K2Node_ComponentBoundEvent_3_OnComboClosing__DelegateSignature
	 */
	struct UWBP_Sheik_Title_KidsWebServicesDOBEntry_C_BndEvt__WBP_Sheik_Title_KidsWebServicesDOBEntry_DayCombo_K2Node_ComponentBoundEvent_3_OnComboClosing__DelegateSignature_Params
	{
	public:
		class UComboBoxString*                                     ComboBox;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Sheik_Title_KidsWebServicesDOBEntry.WBP_Sheik_Title_KidsWebServicesDOBEntry_C.BndEvt__WBP_Sheik_Title_KidsWebServicesDOBEntry_YearCombo_K2Node_ComponentBoundEvent_4_OnComboClosing__DelegateSignature
	 */
	struct UWBP_Sheik_Title_KidsWebServicesDOBEntry_C_BndEvt__WBP_Sheik_Title_KidsWebServicesDOBEntry_YearCombo_K2Node_ComponentBoundEvent_4_OnComboClosing__DelegateSignature_Params
	{
	public:
		class UComboBoxString*                                     ComboBox;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Sheik_Title_KidsWebServicesDOBEntry.WBP_Sheik_Title_KidsWebServicesDOBEntry_C.BndEvt__WBP_Sheik_Title_KidsWebServicesDOBEntry_YearCombo_K2Node_ComponentBoundEvent_5_OnComboSelectionChanged__DelegateSignature
	 */
	struct UWBP_Sheik_Title_KidsWebServicesDOBEntry_C_BndEvt__WBP_Sheik_Title_KidsWebServicesDOBEntry_YearCombo_K2Node_ComponentBoundEvent_5_OnComboSelectionChanged__DelegateSignature_Params
	{
	public:
		class FString                                              Selection;                                               // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Sheik_Title_KidsWebServicesDOBEntry.WBP_Sheik_Title_KidsWebServicesDOBEntry_C.ExecuteUbergraph_WBP_Sheik_Title_KidsWebServicesDOBEntry
	 */
	struct UWBP_Sheik_Title_KidsWebServicesDOBEntry_C_ExecuteUbergraph_WBP_Sheik_Title_KidsWebServicesDOBEntry_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Sheik_Title_KidsWebServicesDOBEntry.WBP_Sheik_Title_KidsWebServicesDOBEntry_C.OnBack__DelegateSignature
	 */
	struct UWBP_Sheik_Title_KidsWebServicesDOBEntry_C_OnBack__DelegateSignature_Params
	{	};

	/**
	 * Function WBP_Sheik_Title_KidsWebServicesDOBEntry.WBP_Sheik_Title_KidsWebServicesDOBEntry_C.OnDateOfBirthCommited__DelegateSignature
	 */
	struct UWBP_Sheik_Title_KidsWebServicesDOBEntry_C_OnDateOfBirthCommited__DelegateSignature_Params
	{
	public:
		struct FDateTime                                           DateOfBirth;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
