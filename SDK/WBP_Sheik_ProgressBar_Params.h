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
	 * Function WBP_Sheik_ProgressBar.WBP_Sheik_ProgressBar_C.GetProgressAnimationTimeRemaining
	 */
	struct UWBP_Sheik_ProgressBar_C_GetProgressAnimationTimeRemaining_Params
	{
	public:
		float                                                      TimeRemaining;                                           // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Sheik_ProgressBar.WBP_Sheik_ProgressBar_C.GetIsProgressAnimationPlaying
	 */
	struct UWBP_Sheik_ProgressBar_C_GetIsProgressAnimationPlaying_Params
	{
	public:
		bool                                                       IsPlaying;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_Sheik_ProgressBar.WBP_Sheik_ProgressBar_C.GetPotentialValue
	 */
	struct UWBP_Sheik_ProgressBar_C_GetPotentialValue_Params
	{
	public:
		float                                                      RawValue;                                                // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      PercentValue;                                            // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Sheik_ProgressBar.WBP_Sheik_ProgressBar_C.StartDelayFinished
	 */
	struct UWBP_Sheik_ProgressBar_C_StartDelayFinished_Params
	{	};

	/**
	 * Function WBP_Sheik_ProgressBar.WBP_Sheik_ProgressBar_C.GetPotentialColor
	 */
	struct UWBP_Sheik_ProgressBar_C_GetPotentialColor_Params
	{
	public:
		struct FLinearColor                                        Color;                                                   // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Sheik_ProgressBar.WBP_Sheik_ProgressBar_C.GetFillColor
	 */
	struct UWBP_Sheik_ProgressBar_C_GetFillColor_Params
	{
	public:
		struct FLinearColor                                        Color;                                                   // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Sheik_ProgressBar.WBP_Sheik_ProgressBar_C.GetFillImage
	 */
	struct UWBP_Sheik_ProgressBar_C_GetFillImage_Params
	{
	public:
		class UTexture*                                            Image;                                                   // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Sheik_ProgressBar.WBP_Sheik_ProgressBar_C.GetGradientImage
	 */
	struct UWBP_Sheik_ProgressBar_C_GetGradientImage_Params
	{
	public:
		class UTexture*                                            Image;                                                   // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Sheik_ProgressBar.WBP_Sheik_ProgressBar_C.GetMinMax
	 */
	struct UWBP_Sheik_ProgressBar_C_GetMinMax_Params
	{
	public:
		float                                                      MinValue;                                                // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      MaxValue;                                                // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Sheik_ProgressBar.WBP_Sheik_ProgressBar_C.GetCurrentValue
	 */
	struct UWBP_Sheik_ProgressBar_C_GetCurrentValue_Params
	{
	public:
		float                                                      RawValue;                                                // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      PercentValue;                                            // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Sheik_ProgressBar.WBP_Sheik_ProgressBar_C.SetMinMax
	 */
	struct UWBP_Sheik_ProgressBar_C_SetMinMax_Params
	{
	public:
		float                                                      MinValue;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      MaxValue;                                                // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Sheik_ProgressBar.WBP_Sheik_ProgressBar_C.SetGradientReferenceImage
	 */
	struct UWBP_Sheik_ProgressBar_C_SetGradientReferenceImage_Params
	{
	public:
		class UTexture*                                            Value;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Sheik_ProgressBar.WBP_Sheik_ProgressBar_C.SetFillImage
	 */
	struct UWBP_Sheik_ProgressBar_C_SetFillImage_Params
	{
	public:
		class UTexture*                                            Value;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Sheik_ProgressBar.WBP_Sheik_ProgressBar_C.SetPotentialColor
	 */
	struct UWBP_Sheik_ProgressBar_C_SetPotentialColor_Params
	{
	public:
		struct FLinearColor                                        Color;                                                   // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Sheik_ProgressBar.WBP_Sheik_ProgressBar_C.SetFillColor
	 */
	struct UWBP_Sheik_ProgressBar_C_SetFillColor_Params
	{
	public:
		struct FLinearColor                                        Color;                                                   // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Sheik_ProgressBar.WBP_Sheik_ProgressBar_C.SetRawPotentialValue
	 */
	struct UWBP_Sheik_ProgressBar_C_SetRawPotentialValue_Params
	{
	public:
		float                                                      Value;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Sheik_ProgressBar.WBP_Sheik_ProgressBar_C.SetPercentPotentialValue
	 */
	struct UWBP_Sheik_ProgressBar_C_SetPercentPotentialValue_Params
	{
	public:
		float                                                      Value;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Sheik_ProgressBar.WBP_Sheik_ProgressBar_C.UpdateRawValue
	 */
	struct UWBP_Sheik_ProgressBar_C_UpdateRawValue_Params
	{
	public:
		float                                                      PotentialValue;                                          // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      Time;                                                    // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      StartDelay;                                              // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Sheik_ProgressBar.WBP_Sheik_ProgressBar_C.TimerFinished
	 */
	struct UWBP_Sheik_ProgressBar_C_TimerFinished_Params
	{	};

	/**
	 * Function WBP_Sheik_ProgressBar.WBP_Sheik_ProgressBar_C.TimerUpdateTick
	 */
	struct UWBP_Sheik_ProgressBar_C_TimerUpdateTick_Params
	{	};

	/**
	 * Function WBP_Sheik_ProgressBar.WBP_Sheik_ProgressBar_C.UpdatePercentValue
	 */
	struct UWBP_Sheik_ProgressBar_C_UpdatePercentValue_Params
	{
	public:
		float                                                      PotentialValue;                                          // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      Time;                                                    // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      DelayStart;                                              // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Sheik_ProgressBar.WBP_Sheik_ProgressBar_C.ResumeDebugProgressAnim
	 */
	struct UWBP_Sheik_ProgressBar_C_ResumeDebugProgressAnim_Params
	{	};

	/**
	 * Function WBP_Sheik_ProgressBar.WBP_Sheik_ProgressBar_C.PauseDebugProgressAnim
	 */
	struct UWBP_Sheik_ProgressBar_C_PauseDebugProgressAnim_Params
	{	};

	/**
	 * Function WBP_Sheik_ProgressBar.WBP_Sheik_ProgressBar_C.PlayDebugProgressAnim
	 */
	struct UWBP_Sheik_ProgressBar_C_PlayDebugProgressAnim_Params
	{	};

	/**
	 * Function WBP_Sheik_ProgressBar.WBP_Sheik_ProgressBar_C.SetRawValue
	 */
	struct UWBP_Sheik_ProgressBar_C_SetRawValue_Params
	{
	public:
		float                                                      Value;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Sheik_ProgressBar.WBP_Sheik_ProgressBar_C.SetPercentValue
	 */
	struct UWBP_Sheik_ProgressBar_C_SetPercentValue_Params
	{
	public:
		float                                                      Value;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Sheik_ProgressBar.WBP_Sheik_ProgressBar_C.PreConstruct
	 */
	struct UWBP_Sheik_ProgressBar_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_Sheik_ProgressBar.WBP_Sheik_ProgressBar_C.Tick
	 */
	struct UWBP_Sheik_ProgressBar_C_Tick_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		float                                                      InDeltaTime;                                             // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Sheik_ProgressBar.WBP_Sheik_ProgressBar_C.ExecuteUbergraph_WBP_Sheik_ProgressBar
	 */
	struct UWBP_Sheik_ProgressBar_C_ExecuteUbergraph_WBP_Sheik_ProgressBar_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Sheik_ProgressBar.WBP_Sheik_ProgressBar_C.OnPotentialValueChanged__DelegateSignature
	 */
	struct UWBP_Sheik_ProgressBar_C_OnPotentialValueChanged__DelegateSignature_Params
	{
	public:
		class UIGUI_WidgetBase*                                    Source;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      RawValue;                                                // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      PercentValue;                                            // 0x000C(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Sheik_ProgressBar.WBP_Sheik_ProgressBar_C.OnBarEmpty__DelegateSignature
	 */
	struct UWBP_Sheik_ProgressBar_C_OnBarEmpty__DelegateSignature_Params
	{
	public:
		class UIGUI_WidgetBase*                                    Source;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Sheik_ProgressBar.WBP_Sheik_ProgressBar_C.OnBarFull__DelegateSignature
	 */
	struct UWBP_Sheik_ProgressBar_C_OnBarFull__DelegateSignature_Params
	{
	public:
		class UIGUI_WidgetBase*                                    Source;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Sheik_ProgressBar.WBP_Sheik_ProgressBar_C.OnFillAnimationFinished__DelegateSignature
	 */
	struct UWBP_Sheik_ProgressBar_C_OnFillAnimationFinished__DelegateSignature_Params
	{
	public:
		class UIGUI_WidgetBase*                                    Source;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Sheik_ProgressBar.WBP_Sheik_ProgressBar_C.OnValueChanged__DelegateSignature
	 */
	struct UWBP_Sheik_ProgressBar_C_OnValueChanged__DelegateSignature_Params
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
