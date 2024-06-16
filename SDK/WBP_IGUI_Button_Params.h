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
	 * Function WBP_IGUI_Button.WBP_IGUI_Button_C.SetFocusVisuals
	 */
	struct UWBP_IGUI_Button_C_SetFocusVisuals_Params
	{
	public:
		bool                                                       IsFocused;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       SkipAnimations;                                          // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_ABCC[0x2];                                   // 0x0002(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    UserIndex;                                               // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_IGUI_Button.WBP_IGUI_Button_C.SetLabel
	 */
	struct UWBP_IGUI_Button_C_SetLabel_Params
	{
	public:
		class FText                                                InText;                                                  // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function WBP_IGUI_Button.WBP_IGUI_Button_C.OnSelectedAnimationFinished
	 */
	struct UWBP_IGUI_Button_C_OnSelectedAnimationFinished_Params
	{
	public:
		class UIGUI_WidgetBase*                                    Source;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_IGUI_Button.WBP_IGUI_Button_C.GetButtonIndex
	 */
	struct UWBP_IGUI_Button_C_GetButtonIndex_Params
	{
	public:
		int32_t                                                    index;                                                   // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_IGUI_Button.WBP_IGUI_Button_C.SetDisabled
	 */
	struct UWBP_IGUI_Button_C_SetDisabled_Params
	{
	public:
		bool                                                       IsDisabled;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_IGUI_Button.WBP_IGUI_Button_C.HandleSelect
	 */
	struct UWBP_IGUI_Button_C_HandleSelect_Params
	{
	public:
		int32_t                                                    UserIndex;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_IGUI_Button.WBP_IGUI_Button_C.ApplyContentOnPreConstruct
	 */
	struct UWBP_IGUI_Button_C_ApplyContentOnPreConstruct_Params
	{	};

	/**
	 * Function WBP_IGUI_Button.WBP_IGUI_Button_C.PreConstruct
	 */
	struct UWBP_IGUI_Button_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_IGUI_Button.WBP_IGUI_Button_C.ConstructOnlyOnce
	 */
	struct UWBP_IGUI_Button_C_ConstructOnlyOnce_Params
	{	};

	/**
	 * Function WBP_IGUI_Button.WBP_IGUI_Button_C.OnDisabled
	 */
	struct UWBP_IGUI_Button_C_OnDisabled_Params
	{	};

	/**
	 * Function WBP_IGUI_Button.WBP_IGUI_Button_C.OnEnabled
	 */
	struct UWBP_IGUI_Button_C_OnEnabled_Params
	{	};

	/**
	 * Function WBP_IGUI_Button.WBP_IGUI_Button_C.OnGainFocus
	 */
	struct UWBP_IGUI_Button_C_OnGainFocus_Params
	{
	public:
		int32_t                                                    UserIndex;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_IGUI_Button.WBP_IGUI_Button_C.OnLoseFocus
	 */
	struct UWBP_IGUI_Button_C_OnLoseFocus_Params
	{
	public:
		int32_t                                                    UserIndex;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_IGUI_Button.WBP_IGUI_Button_C.OnSelected
	 */
	struct UWBP_IGUI_Button_C_OnSelected_Params
	{
	public:
		int32_t                                                    UserIndex;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_IGUI_Button.WBP_IGUI_Button_C.ExecuteUbergraph_WBP_IGUI_Button
	 */
	struct UWBP_IGUI_Button_C_ExecuteUbergraph_WBP_IGUI_Button_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
