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
	 * Function WBP_Sheik_Slider.WBP_Sheik_Slider_C.QueueTelemetryUpdate
	 */
	struct UWBP_Sheik_Slider_C_QueueTelemetryUpdate_Params
	{
	public:
		float                                                      OldValue;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      NewValue;                                                // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Sheik_Slider.WBP_Sheik_Slider_C.SetDisabled
	 */
	struct UWBP_Sheik_Slider_C_SetDisabled_Params
	{
	public:
		bool                                                       IsDisabled;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_Sheik_Slider.WBP_Sheik_Slider_C.SetLabel
	 */
	struct UWBP_Sheik_Slider_C_SetLabel_Params
	{
	public:
		class FText                                                InText;                                                  // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function WBP_Sheik_Slider.WBP_Sheik_Slider_C.EnableHeldInput
	 */
	struct UWBP_Sheik_Slider_C_EnableHeldInput_Params
	{	};

	/**
	 * Function WBP_Sheik_Slider.WBP_Sheik_Slider_C.NavHorizontal
	 */
	struct UWBP_Sheik_Slider_C_NavHorizontal_Params
	{
	public:
		struct FInputEventData                                     InputEventData;                                          // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm)
		bool                                                       IsLeft;                                                  // 0x0038(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_K15Y[0x3];                                   // 0x0039(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function WBP_Sheik_Slider.WBP_Sheik_Slider_C.RoundToNearestStep
	 */
	struct UWBP_Sheik_Slider_C_RoundToNearestStep_Params
	{
	public:
		float                                                      Value;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      NearestStep;                                             // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Sheik_Slider.WBP_Sheik_Slider_C.SetPercentStepSize
	 */
	struct UWBP_Sheik_Slider_C_SetPercentStepSize_Params
	{
	public:
		float                                                      StepSize;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Sheik_Slider.WBP_Sheik_Slider_C.SetRawStepSize
	 */
	struct UWBP_Sheik_Slider_C_SetRawStepSize_Params
	{
	public:
		float                                                      StepSize;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Sheik_Slider.WBP_Sheik_Slider_C.SetMinMax
	 */
	struct UWBP_Sheik_Slider_C_SetMinMax_Params
	{
	public:
		float                                                      MinValue;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      MaxValue;                                                // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Sheik_Slider.WBP_Sheik_Slider_C.GetStepSize
	 */
	struct UWBP_Sheik_Slider_C_GetStepSize_Params
	{
	public:
		float                                                      RawValue;                                                // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      PercentValue;                                            // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Sheik_Slider.WBP_Sheik_Slider_C.GetMinMax
	 */
	struct UWBP_Sheik_Slider_C_GetMinMax_Params
	{
	public:
		float                                                      MinValue;                                                // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      MaxValue;                                                // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Sheik_Slider.WBP_Sheik_Slider_C.DetermineStepDecimalPlace
	 */
	struct UWBP_Sheik_Slider_C_DetermineStepDecimalPlace_Params
	{	};

	/**
	 * Function WBP_Sheik_Slider.WBP_Sheik_Slider_C.SetPercentValue
	 */
	struct UWBP_Sheik_Slider_C_SetPercentValue_Params
	{
	public:
		float                                                      Value;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       CallValueChangedEvent;                                   // 0x0004(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_YWXV[0x3];                                   // 0x0005(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function WBP_Sheik_Slider.WBP_Sheik_Slider_C.GetCurrentValue
	 */
	struct UWBP_Sheik_Slider_C_GetCurrentValue_Params
	{
	public:
		float                                                      RawValue;                                                // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      PercentValue;                                            // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Sheik_Slider.WBP_Sheik_Slider_C.RoundPercentToClosestStep
	 */
	struct UWBP_Sheik_Slider_C_RoundPercentToClosestStep_Params
	{
	public:
		float                                                      PercentValue;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      ReturnValue;                                             // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Sheik_Slider.WBP_Sheik_Slider_C.SetRawValue
	 */
	struct UWBP_Sheik_Slider_C_SetRawValue_Params
	{
	public:
		float                                                      Value;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       CallValueChangedEvent;                                   // 0x0004(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_ZKYL[0x3];                                   // 0x0005(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function WBP_Sheik_Slider.WBP_Sheik_Slider_C.UpdateCurrentValueText
	 */
	struct UWBP_Sheik_Slider_C_UpdateCurrentValueText_Params
	{	};

	/**
	 * Function WBP_Sheik_Slider.WBP_Sheik_Slider_C.Set Widget Focus
	 */
	struct UWBP_Sheik_Slider_C_SetWidgetFocus_Params
	{
	public:
		bool                                                       IsFocused;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_Sheik_Slider.WBP_Sheik_Slider_C.NavRight
	 */
	struct UWBP_Sheik_Slider_C_NavRight_Params
	{
	public:
		struct FInputEventData                                     InputEventData;                                          // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function WBP_Sheik_Slider.WBP_Sheik_Slider_C.NavLeft
	 */
	struct UWBP_Sheik_Slider_C_NavLeft_Params
	{
	public:
		struct FInputEventData                                     InputEventData;                                          // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function WBP_Sheik_Slider.WBP_Sheik_Slider_C.PreConstruct
	 */
	struct UWBP_Sheik_Slider_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_Sheik_Slider.WBP_Sheik_Slider_C.ConstructOnlyOnce
	 */
	struct UWBP_Sheik_Slider_C_ConstructOnlyOnce_Params
	{	};

	/**
	 * Function WBP_Sheik_Slider.WBP_Sheik_Slider_C.OnGainFocus
	 */
	struct UWBP_Sheik_Slider_C_OnGainFocus_Params
	{
	public:
		int32_t                                                    UserIndex;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Sheik_Slider.WBP_Sheik_Slider_C.OnLoseFocus
	 */
	struct UWBP_Sheik_Slider_C_OnLoseFocus_Params
	{
	public:
		int32_t                                                    UserIndex;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Sheik_Slider.WBP_Sheik_Slider_C.BndEvt__Slider_0_K2Node_ComponentBoundEvent_0_OnFloatValueChangedEvent__DelegateSignature
	 */
	struct UWBP_Sheik_Slider_C_BndEvt__Slider_0_K2Node_ComponentBoundEvent_0_OnFloatValueChangedEvent__DelegateSignature_Params
	{
	public:
		float                                                      Value;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Sheik_Slider.WBP_Sheik_Slider_C.BndEvt__SliderWBP_K2Node_ComponentBoundEvent_1_OnMouseCaptureBeginEvent__DelegateSignature
	 */
	struct UWBP_Sheik_Slider_C_BndEvt__SliderWBP_K2Node_ComponentBoundEvent_1_OnMouseCaptureBeginEvent__DelegateSignature_Params
	{	};

	/**
	 * Function WBP_Sheik_Slider.WBP_Sheik_Slider_C.BndEvt__SliderWBP_K2Node_ComponentBoundEvent_2_OnMouseCaptureEndEvent__DelegateSignature
	 */
	struct UWBP_Sheik_Slider_C_BndEvt__SliderWBP_K2Node_ComponentBoundEvent_2_OnMouseCaptureEndEvent__DelegateSignature_Params
	{	};

	/**
	 * Function WBP_Sheik_Slider.WBP_Sheik_Slider_C.OnDisabled
	 */
	struct UWBP_Sheik_Slider_C_OnDisabled_Params
	{	};

	/**
	 * Function WBP_Sheik_Slider.WBP_Sheik_Slider_C.ExecuteUbergraph_WBP_Sheik_Slider
	 */
	struct UWBP_Sheik_Slider_C_ExecuteUbergraph_WBP_Sheik_Slider_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Sheik_Slider.WBP_Sheik_Slider_C.OnValueChanged__DelegateSignature
	 */
	struct UWBP_Sheik_Slider_C_OnValueChanged__DelegateSignature_Params
	{
	public:
		class UIGUI_WidgetBase*                                    Source;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      RawValue;                                                // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      PercentValue;                                            // 0x000C(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
