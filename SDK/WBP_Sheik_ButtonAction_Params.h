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
	 * Function WBP_Sheik_ButtonAction.WBP_Sheik_ButtonAction_C.StopButtonHeldSound
	 */
	struct UWBP_Sheik_ButtonAction_C_StopButtonHeldSound_Params
	{	};

	/**
	 * Function WBP_Sheik_ButtonAction.WBP_Sheik_ButtonAction_C.PlayButtonHeldSound
	 */
	struct UWBP_Sheik_ButtonAction_C_PlayButtonHeldSound_Params
	{	};

	/**
	 * Function WBP_Sheik_ButtonAction.WBP_Sheik_ButtonAction_C.UpdateIsHold
	 */
	struct UWBP_Sheik_ButtonAction_C_UpdateIsHold_Params
	{
	public:
		bool                                                       IsHold;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_Sheik_ButtonAction.WBP_Sheik_ButtonAction_C.AreHoldsAllowed
	 */
	struct UWBP_Sheik_ButtonAction_C_AreHoldsAllowed_Params
	{
	public:
		bool                                                       Out;                                                     // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_DSM5[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function WBP_Sheik_ButtonAction.WBP_Sheik_ButtonAction_C.SetData
	 */
	struct UWBP_Sheik_ButtonAction_C_SetData_Params
	{
	public:
		struct FDataTableRowHandle                                 InputDataRow;                                            // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
		bool                                                       IsHold;                                                  // 0x0010(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_Sheik_ButtonAction.WBP_Sheik_ButtonAction_C.BindInput
	 */
	struct UWBP_Sheik_ButtonAction_C_BindInput_Params
	{	};

	/**
	 * Function WBP_Sheik_ButtonAction.WBP_Sheik_ButtonAction_C.SetBinding
	 */
	struct UWBP_Sheik_ButtonAction_C_SetBinding_Params
	{
	public:
		struct FDataTableRowHandle                                 InInputDataRow;                                          // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	};

	/**
	 * Function WBP_Sheik_ButtonAction.WBP_Sheik_ButtonAction_C.OnButtonDown
	 */
	struct UWBP_Sheik_ButtonAction_C_OnButtonDown_Params
	{
	public:
		struct FInputEventData                                     InputEventData;                                          // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function WBP_Sheik_ButtonAction.WBP_Sheik_ButtonAction_C.OnButtonUp
	 */
	struct UWBP_Sheik_ButtonAction_C_OnButtonUp_Params
	{
	public:
		struct FInputEventData                                     InputEventData;                                          // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function WBP_Sheik_ButtonAction.WBP_Sheik_ButtonAction_C.ButtonDownUpdate
	 */
	struct UWBP_Sheik_ButtonAction_C_ButtonDownUpdate_Params
	{	};

	/**
	 * Function WBP_Sheik_ButtonAction.WBP_Sheik_ButtonAction_C.OnDeactivated
	 */
	struct UWBP_Sheik_ButtonAction_C_OnDeactivated_Params
	{	};

	/**
	 * Function WBP_Sheik_ButtonAction.WBP_Sheik_ButtonAction_C.OnActivated
	 */
	struct UWBP_Sheik_ButtonAction_C_OnActivated_Params
	{	};

	/**
	 * Function WBP_Sheik_ButtonAction.WBP_Sheik_ButtonAction_C.OnInputSourceChanged
	 */
	struct UWBP_Sheik_ButtonAction_C_OnInputSourceChanged_Params
	{
	public:
		struct FUserControllerData                                 OldInputSource;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
		struct FUserControllerData                                 NewInputSource;                                          // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	};

	/**
	 * Function WBP_Sheik_ButtonAction.WBP_Sheik_ButtonAction_C.Construct
	 */
	struct UWBP_Sheik_ButtonAction_C_Construct_Params
	{	};

	/**
	 * Function WBP_Sheik_ButtonAction.WBP_Sheik_ButtonAction_C.PreConstruct
	 */
	struct UWBP_Sheik_ButtonAction_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_Sheik_ButtonAction.WBP_Sheik_ButtonAction_C.Set Meter Style
	 */
	struct UWBP_Sheik_ButtonAction_C_SetMeterStyle_Params
	{	};

	/**
	 * Function WBP_Sheik_ButtonAction.WBP_Sheik_ButtonAction_C.ExecuteUbergraph_WBP_Sheik_ButtonAction
	 */
	struct UWBP_Sheik_ButtonAction_C_ExecuteUbergraph_WBP_Sheik_ButtonAction_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_KJW6[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function WBP_Sheik_ButtonAction.WBP_Sheik_ButtonAction_C.OnHoldActionConfirmed__DelegateSignature
	 */
	struct UWBP_Sheik_ButtonAction_C_OnHoldActionConfirmed__DelegateSignature_Params
	{	};

	/**
	 * Function WBP_Sheik_ButtonAction.WBP_Sheik_ButtonAction_C.OnHoldActionCancelled__DelegateSignature
	 */
	struct UWBP_Sheik_ButtonAction_C_OnHoldActionCancelled__DelegateSignature_Params
	{	};

	/**
	 * Function WBP_Sheik_ButtonAction.WBP_Sheik_ButtonAction_C.OnActionConfirmed__DelegateSignature
	 */
	struct UWBP_Sheik_ButtonAction_C_OnActionConfirmed__DelegateSignature_Params
	{	};

	/**
	 * Function WBP_Sheik_ButtonAction.WBP_Sheik_ButtonAction_C.OnHoldActionStarted__DelegateSignature
	 */
	struct UWBP_Sheik_ButtonAction_C_OnHoldActionStarted__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
