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
	 * Function WBP_Sheik_PlaygroundPopup.WBP_Sheik_PlaygroundPopup_C.OnAssetLoadedFailed
	 */
	struct UWBP_Sheik_PlaygroundPopup_C_OnAssetLoadedFailed_Params
	{
	public:
		TArray<class FString>                                      FailedAssetListPaths;                                    // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function WBP_Sheik_PlaygroundPopup.WBP_Sheik_PlaygroundPopup_C.OnDismissWithoutCombat
	 */
	struct UWBP_Sheik_PlaygroundPopup_C_OnDismissWithoutCombat_Params
	{
	public:
		struct FInputEventData                                     InputEventData;                                          // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function WBP_Sheik_PlaygroundPopup.WBP_Sheik_PlaygroundPopup_C.OnDismissWithCombat
	 */
	struct UWBP_Sheik_PlaygroundPopup_C_OnDismissWithCombat_Params
	{
	public:
		struct FInputEventData                                     InputEventData;                                          // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function WBP_Sheik_PlaygroundPopup.WBP_Sheik_PlaygroundPopup_C.ConfigureDismissOptions
	 */
	struct UWBP_Sheik_PlaygroundPopup_C_ConfigureDismissOptions_Params
	{
	public:
		bool                                                       ShowCombatModeToggles;                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_FEIN[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function WBP_Sheik_PlaygroundPopup.WBP_Sheik_PlaygroundPopup_C.HideControlLinePrompt
	 */
	struct UWBP_Sheik_PlaygroundPopup_C_HideControlLinePrompt_Params
	{
	public:
		bool                                                       HidePrompt;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_Sheik_PlaygroundPopup.WBP_Sheik_PlaygroundPopup_C.DisplayPopupImage
	 */
	struct UWBP_Sheik_PlaygroundPopup_C_DisplayPopupImage_Params
	{
	public:
		class UObject*                                             LoadedObject;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Sheik_PlaygroundPopup.WBP_Sheik_PlaygroundPopup_C.DisplayPopupMovie
	 */
	struct UWBP_Sheik_PlaygroundPopup_C_DisplayPopupMovie_Params
	{
	public:
		class UObject*                                             LoadedObject;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Sheik_PlaygroundPopup.WBP_Sheik_PlaygroundPopup_C.IsControlLineValid
	 */
	struct UWBP_Sheik_PlaygroundPopup_C_IsControlLineValid_Params
	{
	public:
		struct FSheikPlaygroundPopupControlLine                    InControlLine;                                           // 0x0000(0x0068)  (BlueprintVisible, BlueprintReadOnly, Parm)
		bool                                                       OutValid;                                                // 0x0068(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_AFD1[0x3];                                   // 0x0069(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function WBP_Sheik_PlaygroundPopup.WBP_Sheik_PlaygroundPopup_C.SetControlLine
	 */
	struct UWBP_Sheik_PlaygroundPopup_C_SetControlLine_Params
	{
	public:
		struct FSheikPlaygroundPopupControlLine                    InControlLine;                                           // 0x0000(0x0068)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function WBP_Sheik_PlaygroundPopup.WBP_Sheik_PlaygroundPopup_C.SetData
	 */
	struct UWBP_Sheik_PlaygroundPopup_C_SetData_Params
	{
	public:
		struct FSheikPlaygroundPopupDefinitionRow                  InPopupDefinition;                                       // 0x0000(0x00F8)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function WBP_Sheik_PlaygroundPopup.WBP_Sheik_PlaygroundPopup_C.OnBackPressed
	 */
	struct UWBP_Sheik_PlaygroundPopup_C_OnBackPressed_Params
	{
	public:
		struct FInputEventData                                     InputEventData;                                          // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function WBP_Sheik_PlaygroundPopup.WBP_Sheik_PlaygroundPopup_C.ConstructOnlyOnce
	 */
	struct UWBP_Sheik_PlaygroundPopup_C_ConstructOnlyOnce_Params
	{	};

	/**
	 * Function WBP_Sheik_PlaygroundPopup.WBP_Sheik_PlaygroundPopup_C.ClosePlaygroundPopupScreen
	 */
	struct UWBP_Sheik_PlaygroundPopup_C_ClosePlaygroundPopupScreen_Params
	{	};

	/**
	 * Function WBP_Sheik_PlaygroundPopup.WBP_Sheik_PlaygroundPopup_C.ShowNewPlaygroundPopup
	 */
	struct UWBP_Sheik_PlaygroundPopup_C_ShowNewPlaygroundPopup_Params
	{
	public:
		struct FDataTableRowHandle                                 InPopupRowHandle;                                        // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	};

	/**
	 * Function WBP_Sheik_PlaygroundPopup.WBP_Sheik_PlaygroundPopup_C.FocusGained
	 */
	struct UWBP_Sheik_PlaygroundPopup_C_FocusGained_Params
	{	};

	/**
	 * Function WBP_Sheik_PlaygroundPopup.WBP_Sheik_PlaygroundPopup_C.FocusLost
	 */
	struct UWBP_Sheik_PlaygroundPopup_C_FocusLost_Params
	{	};

	/**
	 * Function WBP_Sheik_PlaygroundPopup.WBP_Sheik_PlaygroundPopup_C.CleanUp
	 */
	struct UWBP_Sheik_PlaygroundPopup_C_CleanUp_Params
	{	};

	/**
	 * Function WBP_Sheik_PlaygroundPopup.WBP_Sheik_PlaygroundPopup_C.ExecuteUbergraph_WBP_Sheik_PlaygroundPopup
	 */
	struct UWBP_Sheik_PlaygroundPopup_C_ExecuteUbergraph_WBP_Sheik_PlaygroundPopup_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_JIM5[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function WBP_Sheik_PlaygroundPopup.WBP_Sheik_PlaygroundPopup_C.OnClosePopup__DelegateSignature
	 */
	struct UWBP_Sheik_PlaygroundPopup_C_OnClosePopup__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
