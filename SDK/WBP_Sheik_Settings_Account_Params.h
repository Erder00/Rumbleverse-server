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
	 * Function WBP_Sheik_Settings_Account.WBP_Sheik_Settings_Account_C.GetEulaBtn
	 */
	struct UWBP_Sheik_Settings_Account_C_GetEulaBtn_Params
	{
	public:
		class UWBP_Sheik_SettingsButton_C*                         NewParam;                                                // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Sheik_Settings_Account.WBP_Sheik_Settings_Account_C.Configure Account Section
	 */
	struct UWBP_Sheik_Settings_Account_C_ConfigureAccountSection_Params
	{	};

	/**
	 * Function WBP_Sheik_Settings_Account.WBP_Sheik_Settings_Account_C.GetEulaDocumentPath
	 */
	struct UWBP_Sheik_Settings_Account_C_GetEulaDocumentPath_Params
	{
	public:
		class FString                                              OutPath;                                                 // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Sheik_Settings_Account.WBP_Sheik_Settings_Account_C.GetTitleStorage
	 */
	struct UWBP_Sheik_Settings_Account_C_GetTitleStorage_Params
	{
	public:
		class USheikUITitleStorageInterface*                       ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Sheik_Settings_Account.WBP_Sheik_Settings_Account_C.GetNavigableWidgets
	 */
	struct UWBP_Sheik_Settings_Account_C_GetNavigableWidgets_Params
	{
	public:
		TArray<class UIGUI_WidgetBase*>                            NavigableWidgets;                                        // 0x0000(0x0010)  (Parm, OutParm, ContainsInstancedReference)
	};

	/**
	 * Function WBP_Sheik_Settings_Account.WBP_Sheik_Settings_Account_C.Get Localized EULADoc Text
	 */
	struct UWBP_Sheik_Settings_Account_C_GetLocalizedEULADocText_Params
	{
	public:
		class FString                                              LocalizedEULA;                                           // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Sheik_Settings_Account.WBP_Sheik_Settings_Account_C.ConfigureLanaguagesToggle
	 */
	struct UWBP_Sheik_Settings_Account_C_ConfigureLanaguagesToggle_Params
	{	};

	/**
	 * Function WBP_Sheik_Settings_Account.WBP_Sheik_Settings_Account_C.HideEULA
	 */
	struct UWBP_Sheik_Settings_Account_C_HideEULA_Params
	{	};

	/**
	 * Function WBP_Sheik_Settings_Account.WBP_Sheik_Settings_Account_C.IsEULA_Visible
	 */
	struct UWBP_Sheik_Settings_Account_C_IsEULA_Visible_Params
	{
	public:
		bool                                                       IsEULA_Visible;                                          // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_Sheik_Settings_Account.WBP_Sheik_Settings_Account_C.BndEvt__LanguageToggle_K2Node_ComponentBoundEvent_2_OnOptionChanged__DelegateSignature
	 */
	struct UWBP_Sheik_Settings_Account_C_BndEvt__LanguageToggle_K2Node_ComponentBoundEvent_2_OnOptionChanged__DelegateSignature_Params
	{
	public:
		class UIGUI_WidgetBase*                                    Source;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FText                                                Text;                                                    // 0x0008(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		int32_t                                                    index;                                                   // 0x0020(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Sheik_Settings_Account.WBP_Sheik_Settings_Account_C.BndEvt__EulaBtn_K2Node_ComponentBoundEvent_1_OnStateChangeEventWithUserIndex__DelegateSignature
	 */
	struct UWBP_Sheik_Settings_Account_C_BndEvt__EulaBtn_K2Node_ComponentBoundEvent_1_OnStateChangeEventWithUserIndex__DelegateSignature_Params
	{
	public:
		class UIGUI_WidgetBase*                                    Widget;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    UserIndex;                                               // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Sheik_Settings_Account.WBP_Sheik_Settings_Account_C.BndEvt__CopyBtn_K2Node_ComponentBoundEvent_4_OnStateChangeEventWithUserIndex__DelegateSignature
	 */
	struct UWBP_Sheik_Settings_Account_C_BndEvt__CopyBtn_K2Node_ComponentBoundEvent_4_OnStateChangeEventWithUserIndex__DelegateSignature_Params
	{
	public:
		class UIGUI_WidgetBase*                                    Widget;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    UserIndex;                                               // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Sheik_Settings_Account.WBP_Sheik_Settings_Account_C.TryGetEULA
	 */
	struct UWBP_Sheik_Settings_Account_C_TryGetEULA_Params
	{	};

	/**
	 * Function WBP_Sheik_Settings_Account.WBP_Sheik_Settings_Account_C.OnEULAFound
	 */
	struct UWBP_Sheik_Settings_Account_C_OnEULAFound_Params
	{	};

	/**
	 * Function WBP_Sheik_Settings_Account.WBP_Sheik_Settings_Account_C.OnEULANotFound
	 */
	struct UWBP_Sheik_Settings_Account_C_OnEULANotFound_Params
	{	};

	/**
	 * Function WBP_Sheik_Settings_Account.WBP_Sheik_Settings_Account_C.OnTitleStorageDataRetrieved
	 */
	struct UWBP_Sheik_Settings_Account_C_OnTitleStorageDataRetrieved_Params
	{
	public:
		bool                                                       bSuccessful;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_EKVH[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FSheikError                                         Error;                                                   // 0x0004(0x000C)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	};

	/**
	 * Function WBP_Sheik_Settings_Account.WBP_Sheik_Settings_Account_C.ConstructOnlyOnce
	 */
	struct UWBP_Sheik_Settings_Account_C_ConstructOnlyOnce_Params
	{	};

	/**
	 * Function WBP_Sheik_Settings_Account.WBP_Sheik_Settings_Account_C.RequestEULA
	 */
	struct UWBP_Sheik_Settings_Account_C_RequestEULA_Params
	{	};

	/**
	 * Function WBP_Sheik_Settings_Account.WBP_Sheik_Settings_Account_C.EULAHideComplete
	 */
	struct UWBP_Sheik_Settings_Account_C_EULAHideComplete_Params
	{	};

	/**
	 * Function WBP_Sheik_Settings_Account.WBP_Sheik_Settings_Account_C.OnActivated
	 */
	struct UWBP_Sheik_Settings_Account_C_OnActivated_Params
	{	};

	/**
	 * Function WBP_Sheik_Settings_Account.WBP_Sheik_Settings_Account_C.BndEvt__WBP_Sheik_Settings_Account_CreditsButton_K2Node_ComponentBoundEvent_3_OnStateChangeEventWithUserIndex__DelegateSignature
	 */
	struct UWBP_Sheik_Settings_Account_C_BndEvt__WBP_Sheik_Settings_Account_CreditsButton_K2Node_ComponentBoundEvent_3_OnStateChangeEventWithUserIndex__DelegateSignature_Params
	{
	public:
		class UIGUI_WidgetBase*                                    Widget;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    UserIndex;                                               // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Sheik_Settings_Account.WBP_Sheik_Settings_Account_C.CreditsClosed
	 */
	struct UWBP_Sheik_Settings_Account_C_CreditsClosed_Params
	{	};

	/**
	 * Function WBP_Sheik_Settings_Account.WBP_Sheik_Settings_Account_C.ExecuteUbergraph_WBP_Sheik_Settings_Account
	 */
	struct UWBP_Sheik_Settings_Account_C_ExecuteUbergraph_WBP_Sheik_Settings_Account_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_MDEK[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function WBP_Sheik_Settings_Account.WBP_Sheik_Settings_Account_C.OnEulaPopupHidden__DelegateSignature
	 */
	struct UWBP_Sheik_Settings_Account_C_OnEulaPopupHidden__DelegateSignature_Params
	{	};

	/**
	 * Function WBP_Sheik_Settings_Account.WBP_Sheik_Settings_Account_C.OnEulaPopupShown__DelegateSignature
	 */
	struct UWBP_Sheik_Settings_Account_C_OnEulaPopupShown__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
