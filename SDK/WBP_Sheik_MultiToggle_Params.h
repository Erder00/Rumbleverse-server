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
	 * Function WBP_Sheik_MultiToggle.WBP_Sheik_MultiToggle_C.RefreshOptionIndicators
	 */
	struct UWBP_Sheik_MultiToggle_C_RefreshOptionIndicators_Params
	{	};

	/**
	 * Function WBP_Sheik_MultiToggle.WBP_Sheik_MultiToggle_C.QueueTelemetryUpdate
	 */
	struct UWBP_Sheik_MultiToggle_C_QueueTelemetryUpdate_Params
	{
	public:
		int32_t                                                    OldValue;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    NewValue;                                                // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Sheik_MultiToggle.WBP_Sheik_MultiToggle_C.SetDisabled
	 */
	struct UWBP_Sheik_MultiToggle_C_SetDisabled_Params
	{
	public:
		bool                                                       IsDisabled;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_Sheik_MultiToggle.WBP_Sheik_MultiToggle_C.EnableHeldInput
	 */
	struct UWBP_Sheik_MultiToggle_C_EnableHeldInput_Params
	{	};

	/**
	 * Function WBP_Sheik_MultiToggle.WBP_Sheik_MultiToggle_C.NavHorizontal
	 */
	struct UWBP_Sheik_MultiToggle_C_NavHorizontal_Params
	{
	public:
		struct FInputEventData                                     InputEventData;                                          // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm)
		bool                                                       IsLeft;                                                  // 0x0038(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_Sheik_MultiToggle.WBP_Sheik_MultiToggle_C.UpdateArrowsDisabled
	 */
	struct UWBP_Sheik_MultiToggle_C_UpdateArrowsDisabled_Params
	{	};

	/**
	 * Function WBP_Sheik_MultiToggle.WBP_Sheik_MultiToggle_C.UpdateCurrentOptionText
	 */
	struct UWBP_Sheik_MultiToggle_C_UpdateCurrentOptionText_Params
	{	};

	/**
	 * Function WBP_Sheik_MultiToggle.WBP_Sheik_MultiToggle_C.GetOptionByIndex
	 */
	struct UWBP_Sheik_MultiToggle_C_GetOptionByIndex_Params
	{
	public:
		int32_t                                                    index;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_52VL[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FText                                                Text;                                                    // 0x0008(0x0018)  (Parm, OutParm)
	};

	/**
	 * Function WBP_Sheik_MultiToggle.WBP_Sheik_MultiToggle_C.GetOptionByText
	 */
	struct UWBP_Sheik_MultiToggle_C_GetOptionByText_Params
	{
	public:
		class FText                                                Text;                                                    // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		int32_t                                                    index;                                                   // 0x0018(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Sheik_MultiToggle.WBP_Sheik_MultiToggle_C.GetOptionsLength
	 */
	struct UWBP_Sheik_MultiToggle_C_GetOptionsLength_Params
	{
	public:
		int32_t                                                    Length;                                                  // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Sheik_MultiToggle.WBP_Sheik_MultiToggle_C.GetCurrentOption
	 */
	struct UWBP_Sheik_MultiToggle_C_GetCurrentOption_Params
	{
	public:
		class FText                                                Text;                                                    // 0x0000(0x0018)  (Parm, OutParm)
		int32_t                                                    index;                                                   // 0x0018(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Sheik_MultiToggle.WBP_Sheik_MultiToggle_C.SetCurrentOptionByIndex
	 */
	struct UWBP_Sheik_MultiToggle_C_SetCurrentOptionByIndex_Params
	{
	public:
		int32_t                                                    OptionIndex;                                             // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       CallSelectionChangedEvent;                               // 0x0004(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_OXLJ[0x3];                                   // 0x0005(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function WBP_Sheik_MultiToggle.WBP_Sheik_MultiToggle_C.SetCurrentOptionByText
	 */
	struct UWBP_Sheik_MultiToggle_C_SetCurrentOptionByText_Params
	{
	public:
		class FText                                                OptionText;                                              // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		bool                                                       CallSelectionChangedEvent;                               // 0x0018(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_WKJH[0x3];                                   // 0x0019(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function WBP_Sheik_MultiToggle.WBP_Sheik_MultiToggle_C.SetCurrentOption
	 */
	struct UWBP_Sheik_MultiToggle_C_SetCurrentOption_Params
	{
	public:
		class FText                                                OptionText;                                              // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		int32_t                                                    OptionIndex;                                             // 0x0018(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       CallSelectionChangedEvent;                               // 0x001C(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_Sheik_MultiToggle.WBP_Sheik_MultiToggle_C.ForceCurrentOptionUpdate
	 */
	struct UWBP_Sheik_MultiToggle_C_ForceCurrentOptionUpdate_Params
	{
	public:
		bool                                                       CallSelectionChangedEvent;                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_Sheik_MultiToggle.WBP_Sheik_MultiToggle_C.RemoveAllOptions
	 */
	struct UWBP_Sheik_MultiToggle_C_RemoveAllOptions_Params
	{
	public:
		bool                                                       CallForceCurrentOptionUpdate;                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_Sheik_MultiToggle.WBP_Sheik_MultiToggle_C.RemoveOptionByText
	 */
	struct UWBP_Sheik_MultiToggle_C_RemoveOptionByText_Params
	{
	public:
		class FText                                                OptionText;                                              // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function WBP_Sheik_MultiToggle.WBP_Sheik_MultiToggle_C.RemoveOptionByIndex
	 */
	struct UWBP_Sheik_MultiToggle_C_RemoveOptionByIndex_Params
	{
	public:
		int32_t                                                    OptionIndex;                                             // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       CallSelectionChangedEvent;                               // 0x0004(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_Sheik_MultiToggle.WBP_Sheik_MultiToggle_C.AddOptions
	 */
	struct UWBP_Sheik_MultiToggle_C_AddOptions_Params
	{
	public:
		TArray<class FText>                                        Options;                                                 // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function WBP_Sheik_MultiToggle.WBP_Sheik_MultiToggle_C.AddOption
	 */
	struct UWBP_Sheik_MultiToggle_C_AddOption_Params
	{
	public:
		class FText                                                Option;                                                  // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		bool                                                       CallSelectionChangedEvent;                               // 0x0018(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_MPBQ[0x3];                                   // 0x0019(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function WBP_Sheik_MultiToggle.WBP_Sheik_MultiToggle_C.Set Widget Focus
	 */
	struct UWBP_Sheik_MultiToggle_C_SetWidgetFocus_Params
	{
	public:
		bool                                                       IsFocused;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_Sheik_MultiToggle.WBP_Sheik_MultiToggle_C.NavRight
	 */
	struct UWBP_Sheik_MultiToggle_C_NavRight_Params
	{
	public:
		struct FInputEventData                                     InputEventData;                                          // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function WBP_Sheik_MultiToggle.WBP_Sheik_MultiToggle_C.NavLeft
	 */
	struct UWBP_Sheik_MultiToggle_C_NavLeft_Params
	{
	public:
		struct FInputEventData                                     InputEventData;                                          // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function WBP_Sheik_MultiToggle.WBP_Sheik_MultiToggle_C.PreConstruct
	 */
	struct UWBP_Sheik_MultiToggle_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_Sheik_MultiToggle.WBP_Sheik_MultiToggle_C.ConstructOnlyOnce
	 */
	struct UWBP_Sheik_MultiToggle_C_ConstructOnlyOnce_Params
	{	};

	/**
	 * Function WBP_Sheik_MultiToggle.WBP_Sheik_MultiToggle_C.NavRightChangeText
	 */
	struct UWBP_Sheik_MultiToggle_C_NavRightChangeText_Params
	{	};

	/**
	 * Function WBP_Sheik_MultiToggle.WBP_Sheik_MultiToggle_C.NavLeftChangeText
	 */
	struct UWBP_Sheik_MultiToggle_C_NavLeftChangeText_Params
	{	};

	/**
	 * Function WBP_Sheik_MultiToggle.WBP_Sheik_MultiToggle_C.OnGainFocus
	 */
	struct UWBP_Sheik_MultiToggle_C_OnGainFocus_Params
	{
	public:
		int32_t                                                    UserIndex;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Sheik_MultiToggle.WBP_Sheik_MultiToggle_C.OnLoseFocus
	 */
	struct UWBP_Sheik_MultiToggle_C_OnLoseFocus_Params
	{
	public:
		int32_t                                                    UserIndex;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Sheik_MultiToggle.WBP_Sheik_MultiToggle_C.BndEvt__ArrowRightButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 */
	struct UWBP_Sheik_MultiToggle_C_BndEvt__ArrowRightButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function WBP_Sheik_MultiToggle.WBP_Sheik_MultiToggle_C.BndEvt__ArrowRightButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
	 */
	struct UWBP_Sheik_MultiToggle_C_BndEvt__ArrowRightButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function WBP_Sheik_MultiToggle.WBP_Sheik_MultiToggle_C.BndEvt__ArrowRightButton_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature
	 */
	struct UWBP_Sheik_MultiToggle_C_BndEvt__ArrowRightButton_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function WBP_Sheik_MultiToggle.WBP_Sheik_MultiToggle_C.BndEvt__ArrowLeftButton_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature
	 */
	struct UWBP_Sheik_MultiToggle_C_BndEvt__ArrowLeftButton_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function WBP_Sheik_MultiToggle.WBP_Sheik_MultiToggle_C.BndEvt__ArrowLeftButton_K2Node_ComponentBoundEvent_12_OnButtonHoverEvent__DelegateSignature
	 */
	struct UWBP_Sheik_MultiToggle_C_BndEvt__ArrowLeftButton_K2Node_ComponentBoundEvent_12_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function WBP_Sheik_MultiToggle.WBP_Sheik_MultiToggle_C.BndEvt__ArrowLeftButton_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature
	 */
	struct UWBP_Sheik_MultiToggle_C_BndEvt__ArrowLeftButton_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function WBP_Sheik_MultiToggle.WBP_Sheik_MultiToggle_C.OnDisabled
	 */
	struct UWBP_Sheik_MultiToggle_C_OnDisabled_Params
	{	};

	/**
	 * Function WBP_Sheik_MultiToggle.WBP_Sheik_MultiToggle_C.Update Crossplay Enabled
	 */
	struct UWBP_Sheik_MultiToggle_C_UpdateCrossplayEnabled_Params
	{
	public:
		bool                                                       IsCrossplayEnabled;                                      // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_Sheik_MultiToggle.WBP_Sheik_MultiToggle_C.ExecuteUbergraph_WBP_Sheik_MultiToggle
	 */
	struct UWBP_Sheik_MultiToggle_C_ExecuteUbergraph_WBP_Sheik_MultiToggle_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Sheik_MultiToggle.WBP_Sheik_MultiToggle_C.OnOptionChanged__DelegateSignature
	 */
	struct UWBP_Sheik_MultiToggle_C_OnOptionChanged__DelegateSignature_Params
	{
	public:
		class UIGUI_WidgetBase*                                    Source;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FText                                                Text;                                                    // 0x0008(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		int32_t                                                    index;                                                   // 0x0020(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
