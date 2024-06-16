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
	 * Function WBP_Sheik_NonNavigableButton.WBP_Sheik_NonNavigableButton_C.SetText
	 */
	struct UWBP_Sheik_NonNavigableButton_C_SetText_Params
	{
	public:
		class FText                                                Text;                                                    // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function WBP_Sheik_NonNavigableButton.WBP_Sheik_NonNavigableButton_C.IsAnimationBusy
	 */
	struct UWBP_Sheik_NonNavigableButton_C_IsAnimationBusy_Params
	{
	public:
		bool                                                       IsBusy;                                                  // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_Sheik_NonNavigableButton.WBP_Sheik_NonNavigableButton_C.OnMouseButtonDown
	 */
	struct UWBP_Sheik_NonNavigableButton_C_OnMouseButtonDown_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FPointerEvent                                       MouseEvent;                                              // 0x0038(0x0070)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		struct FEventReply                                         ReturnValue;                                             // 0x00A8(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function WBP_Sheik_NonNavigableButton.WBP_Sheik_NonNavigableButton_C.OnActivated
	 */
	struct UWBP_Sheik_NonNavigableButton_C_OnActivated_Params
	{	};

	/**
	 * Function WBP_Sheik_NonNavigableButton.WBP_Sheik_NonNavigableButton_C.OnDeactivated
	 */
	struct UWBP_Sheik_NonNavigableButton_C_OnDeactivated_Params
	{	};

	/**
	 * Function WBP_Sheik_NonNavigableButton.WBP_Sheik_NonNavigableButton_C.OnMouseEnter
	 */
	struct UWBP_Sheik_NonNavigableButton_C_OnMouseEnter_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FPointerEvent                                       MouseEvent;                                              // 0x0038(0x0070)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function WBP_Sheik_NonNavigableButton.WBP_Sheik_NonNavigableButton_C.OnMouseLeave
	 */
	struct UWBP_Sheik_NonNavigableButton_C_OnMouseLeave_Params
	{
	public:
		struct FPointerEvent                                       MouseEvent;                                              // 0x0000(0x0070)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function WBP_Sheik_NonNavigableButton.WBP_Sheik_NonNavigableButton_C.BndEvt__ButtonAction_K2Node_ComponentBoundEvent_1_OnActionConfirmed__DelegateSignature
	 */
	struct UWBP_Sheik_NonNavigableButton_C_BndEvt__ButtonAction_K2Node_ComponentBoundEvent_1_OnActionConfirmed__DelegateSignature_Params
	{	};

	/**
	 * Function WBP_Sheik_NonNavigableButton.WBP_Sheik_NonNavigableButton_C.OnInitialized
	 */
	struct UWBP_Sheik_NonNavigableButton_C_OnInitialized_Params
	{	};

	/**
	 * Function WBP_Sheik_NonNavigableButton.WBP_Sheik_NonNavigableButton_C.OnSelectFinished
	 */
	struct UWBP_Sheik_NonNavigableButton_C_OnSelectFinished_Params
	{	};

	/**
	 * Function WBP_Sheik_NonNavigableButton.WBP_Sheik_NonNavigableButton_C.BndEvt__ButtonAction_K2Node_ComponentBoundEvent_3_OnHoldActionStarted__DelegateSignature
	 */
	struct UWBP_Sheik_NonNavigableButton_C_BndEvt__ButtonAction_K2Node_ComponentBoundEvent_3_OnHoldActionStarted__DelegateSignature_Params
	{	};

	/**
	 * Function WBP_Sheik_NonNavigableButton.WBP_Sheik_NonNavigableButton_C.BndEvt__ButtonAction_K2Node_ComponentBoundEvent_4_OnHoldActionCancelled__DelegateSignature
	 */
	struct UWBP_Sheik_NonNavigableButton_C_BndEvt__ButtonAction_K2Node_ComponentBoundEvent_4_OnHoldActionCancelled__DelegateSignature_Params
	{	};

	/**
	 * Function WBP_Sheik_NonNavigableButton.WBP_Sheik_NonNavigableButton_C.PreConstruct
	 */
	struct UWBP_Sheik_NonNavigableButton_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_Sheik_NonNavigableButton.WBP_Sheik_NonNavigableButton_C.Construct
	 */
	struct UWBP_Sheik_NonNavigableButton_C_Construct_Params
	{	};

	/**
	 * Function WBP_Sheik_NonNavigableButton.WBP_Sheik_NonNavigableButton_C.OnActionConfirmedMouse
	 */
	struct UWBP_Sheik_NonNavigableButton_C_OnActionConfirmedMouse_Params
	{	};

	/**
	 * Function WBP_Sheik_NonNavigableButton.WBP_Sheik_NonNavigableButton_C.ExecuteUbergraph_WBP_Sheik_NonNavigableButton
	 */
	struct UWBP_Sheik_NonNavigableButton_C_ExecuteUbergraph_WBP_Sheik_NonNavigableButton_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Sheik_NonNavigableButton.WBP_Sheik_NonNavigableButton_C.OnHoldActionCancelled__DelegateSignature
	 */
	struct UWBP_Sheik_NonNavigableButton_C_OnHoldActionCancelled__DelegateSignature_Params
	{	};

	/**
	 * Function WBP_Sheik_NonNavigableButton.WBP_Sheik_NonNavigableButton_C.OnActionConfirmed__DelegateSignature
	 */
	struct UWBP_Sheik_NonNavigableButton_C_OnActionConfirmed__DelegateSignature_Params
	{	};

	/**
	 * Function WBP_Sheik_NonNavigableButton.WBP_Sheik_NonNavigableButton_C.OnHoldActionStarted__DelegateSignature
	 */
	struct UWBP_Sheik_NonNavigableButton_C_OnHoldActionStarted__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
