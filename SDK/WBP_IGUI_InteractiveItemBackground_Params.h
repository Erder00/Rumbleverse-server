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
	 * Function WBP_IGUI_InteractiveItemBackground.WBP_IGUI_InteractiveItemBackground_C.SetFocusVisuals
	 */
	struct UWBP_IGUI_InteractiveItemBackground_C_SetFocusVisuals_Params
	{
	public:
		bool                                                       IsFocused;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       SkipAnimation;                                           // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_IGUI_InteractiveItemBackground.WBP_IGUI_InteractiveItemBackground_C.HandleSelected
	 */
	struct UWBP_IGUI_InteractiveItemBackground_C_HandleSelected_Params
	{	};

	/**
	 * Function WBP_IGUI_InteractiveItemBackground.WBP_IGUI_InteractiveItemBackground_C.SetDisabled
	 */
	struct UWBP_IGUI_InteractiveItemBackground_C_SetDisabled_Params
	{
	public:
		bool                                                       IsDisabled;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_IGUI_InteractiveItemBackground.WBP_IGUI_InteractiveItemBackground_C.PreConstruct
	 */
	struct UWBP_IGUI_InteractiveItemBackground_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_IGUI_InteractiveItemBackground.WBP_IGUI_InteractiveItemBackground_C.SelectedAnimationFinished
	 */
	struct UWBP_IGUI_InteractiveItemBackground_C_SelectedAnimationFinished_Params
	{	};

	/**
	 * Function WBP_IGUI_InteractiveItemBackground.WBP_IGUI_InteractiveItemBackground_C.ExecuteUbergraph_WBP_IGUI_InteractiveItemBackground
	 */
	struct UWBP_IGUI_InteractiveItemBackground_C_ExecuteUbergraph_WBP_IGUI_InteractiveItemBackground_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_IGUI_InteractiveItemBackground.WBP_IGUI_InteractiveItemBackground_C.OnSelectedAnimationFinished__DelegateSignature
	 */
	struct UWBP_IGUI_InteractiveItemBackground_C_OnSelectedAnimationFinished__DelegateSignature_Params
	{
	public:
		class UIGUI_WidgetBase*                                    Source;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
