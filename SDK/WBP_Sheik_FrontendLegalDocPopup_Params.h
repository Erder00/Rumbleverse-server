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
	 * Function WBP_Sheik_FrontendLegalDocPopup.WBP_Sheik_FrontendLegalDocPopup_C.OnInputScrollDown
	 */
	struct UWBP_Sheik_FrontendLegalDocPopup_C_OnInputScrollDown_Params
	{
	public:
		struct FInputEventData                                     Data;                                                    // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function WBP_Sheik_FrontendLegalDocPopup.WBP_Sheik_FrontendLegalDocPopup_C.OnInputScrollUp
	 */
	struct UWBP_Sheik_FrontendLegalDocPopup_C_OnInputScrollUp_Params
	{
	public:
		struct FInputEventData                                     Data;                                                    // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function WBP_Sheik_FrontendLegalDocPopup.WBP_Sheik_FrontendLegalDocPopup_C.SetData
	 */
	struct UWBP_Sheik_FrontendLegalDocPopup_C_SetData_Params
	{
	public:
		class FText                                                HeaderText;                                              // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		class FString                                              LocalizedDocText;                                        // 0x0018(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Sheik_FrontendLegalDocPopup.WBP_Sheik_FrontendLegalDocPopup_C.EnableInput
	 */
	struct UWBP_Sheik_FrontendLegalDocPopup_C_EnableInput_Params
	{	};

	/**
	 * Function WBP_Sheik_FrontendLegalDocPopup.WBP_Sheik_FrontendLegalDocPopup_C.PreConstruct
	 */
	struct UWBP_Sheik_FrontendLegalDocPopup_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_Sheik_FrontendLegalDocPopup.WBP_Sheik_FrontendLegalDocPopup_C.Show
	 */
	struct UWBP_Sheik_FrontendLegalDocPopup_C_Show_Params
	{	};

	/**
	 * Function WBP_Sheik_FrontendLegalDocPopup.WBP_Sheik_FrontendLegalDocPopup_C.Hide
	 */
	struct UWBP_Sheik_FrontendLegalDocPopup_C_Hide_Params
	{	};

	/**
	 * Function WBP_Sheik_FrontendLegalDocPopup.WBP_Sheik_FrontendLegalDocPopup_C.OnInputAccept
	 */
	struct UWBP_Sheik_FrontendLegalDocPopup_C_OnInputAccept_Params
	{
	public:
		struct FInputEventData                                     Data;                                                    // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function WBP_Sheik_FrontendLegalDocPopup.WBP_Sheik_FrontendLegalDocPopup_C.OnInputDecline
	 */
	struct UWBP_Sheik_FrontendLegalDocPopup_C_OnInputDecline_Params
	{
	public:
		struct FInputEventData                                     Data;                                                    // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function WBP_Sheik_FrontendLegalDocPopup.WBP_Sheik_FrontendLegalDocPopup_C.ConstructOnlyOnce
	 */
	struct UWBP_Sheik_FrontendLegalDocPopup_C_ConstructOnlyOnce_Params
	{	};

	/**
	 * Function WBP_Sheik_FrontendLegalDocPopup.WBP_Sheik_FrontendLegalDocPopup_C.OnInputPrivacyPolicy
	 */
	struct UWBP_Sheik_FrontendLegalDocPopup_C_OnInputPrivacyPolicy_Params
	{
	public:
		struct FInputEventData                                     Data;                                                    // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function WBP_Sheik_FrontendLegalDocPopup.WBP_Sheik_FrontendLegalDocPopup_C.ExecuteUbergraph_WBP_Sheik_FrontendLegalDocPopup
	 */
	struct UWBP_Sheik_FrontendLegalDocPopup_C_ExecuteUbergraph_WBP_Sheik_FrontendLegalDocPopup_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_3LUQ[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function WBP_Sheik_FrontendLegalDocPopup.WBP_Sheik_FrontendLegalDocPopup_C.OnHidden__DelegateSignature
	 */
	struct UWBP_Sheik_FrontendLegalDocPopup_C_OnHidden__DelegateSignature_Params
	{	};

	/**
	 * Function WBP_Sheik_FrontendLegalDocPopup.WBP_Sheik_FrontendLegalDocPopup_C.OnDecline__DelegateSignature
	 */
	struct UWBP_Sheik_FrontendLegalDocPopup_C_OnDecline__DelegateSignature_Params
	{	};

	/**
	 * Function WBP_Sheik_FrontendLegalDocPopup.WBP_Sheik_FrontendLegalDocPopup_C.OnAccept__DelegateSignature
	 */
	struct UWBP_Sheik_FrontendLegalDocPopup_C_OnAccept__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
