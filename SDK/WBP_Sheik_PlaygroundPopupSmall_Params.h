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
	 * Function WBP_Sheik_PlaygroundPopupSmall.WBP_Sheik_PlaygroundPopupSmall_C.HideControlLinePrompt
	 */
	struct UWBP_Sheik_PlaygroundPopupSmall_C_HideControlLinePrompt_Params
	{
	public:
		bool                                                       HidePrompt;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_Sheik_PlaygroundPopupSmall.WBP_Sheik_PlaygroundPopupSmall_C.IsControlLineValid
	 */
	struct UWBP_Sheik_PlaygroundPopupSmall_C_IsControlLineValid_Params
	{
	public:
		struct FSheikPlaygroundPopupControlLine                    InControlLine;                                           // 0x0000(0x0068)  (BlueprintVisible, BlueprintReadOnly, Parm)
		bool                                                       OutValid;                                                // 0x0068(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_HC9E[0x3];                                   // 0x0069(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function WBP_Sheik_PlaygroundPopupSmall.WBP_Sheik_PlaygroundPopupSmall_C.SetControlLine
	 */
	struct UWBP_Sheik_PlaygroundPopupSmall_C_SetControlLine_Params
	{
	public:
		struct FSheikPlaygroundPopupControlLine                    InControlLine;                                           // 0x0000(0x0068)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function WBP_Sheik_PlaygroundPopupSmall.WBP_Sheik_PlaygroundPopupSmall_C.SetData
	 */
	struct UWBP_Sheik_PlaygroundPopupSmall_C_SetData_Params
	{
	public:
		struct FSheikPlaygroundPopupDefinitionRow                  InPopupDefinition;                                       // 0x0000(0x00F8)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function WBP_Sheik_PlaygroundPopupSmall.WBP_Sheik_PlaygroundPopupSmall_C.OnBackPressed
	 */
	struct UWBP_Sheik_PlaygroundPopupSmall_C_OnBackPressed_Params
	{
	public:
		struct FInputEventData                                     InputEventData;                                          // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function WBP_Sheik_PlaygroundPopupSmall.WBP_Sheik_PlaygroundPopupSmall_C.ConstructOnlyOnce
	 */
	struct UWBP_Sheik_PlaygroundPopupSmall_C_ConstructOnlyOnce_Params
	{	};

	/**
	 * Function WBP_Sheik_PlaygroundPopupSmall.WBP_Sheik_PlaygroundPopupSmall_C.ShowNewPlaygroundPopup
	 */
	struct UWBP_Sheik_PlaygroundPopupSmall_C_ShowNewPlaygroundPopup_Params
	{
	public:
		struct FDataTableRowHandle                                 InPopupRowHandle;                                        // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	};

	/**
	 * Function WBP_Sheik_PlaygroundPopupSmall.WBP_Sheik_PlaygroundPopupSmall_C.TutorialPopupClosed
	 */
	struct UWBP_Sheik_PlaygroundPopupSmall_C_TutorialPopupClosed_Params
	{
	public:
		struct FDataTableRowHandle                                 ReadableContent;                                         // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	};

	/**
	 * Function WBP_Sheik_PlaygroundPopupSmall.WBP_Sheik_PlaygroundPopupSmall_C.HideSmallPopup
	 */
	struct UWBP_Sheik_PlaygroundPopupSmall_C_HideSmallPopup_Params
	{
	public:
		struct FDataTableRowHandle                                 PopupRowHandle;                                          // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	};

	/**
	 * Function WBP_Sheik_PlaygroundPopupSmall.WBP_Sheik_PlaygroundPopupSmall_C.ExecuteUbergraph_WBP_Sheik_PlaygroundPopupSmall
	 */
	struct UWBP_Sheik_PlaygroundPopupSmall_C_ExecuteUbergraph_WBP_Sheik_PlaygroundPopupSmall_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_OGJU[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function WBP_Sheik_PlaygroundPopupSmall.WBP_Sheik_PlaygroundPopupSmall_C.OnClosePopup__DelegateSignature
	 */
	struct UWBP_Sheik_PlaygroundPopupSmall_C_OnClosePopup__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
