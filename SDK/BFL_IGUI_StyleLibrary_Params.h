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
	 * Function BFL_IGUI_StyleLibrary.BFL_IGUI_StyleLibrary_C.StyleAsFocusedDisabledInteractiveItemText
	 */
	struct UBFL_IGUI_StyleLibrary_C_StyleAsFocusedDisabledInteractiveItemText_Params
	{
	public:
		class UIGUI_DataStyledTextBlock*                           Text;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UObject*                                             __WorldContext;                                          // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BFL_IGUI_StyleLibrary.BFL_IGUI_StyleLibrary_C.StyleAsFocusedDisabledInteractiveItemBackground
	 */
	struct UBFL_IGUI_StyleLibrary_C_StyleAsFocusedDisabledInteractiveItemBackground_Params
	{
	public:
		class UImage*                                              Background;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UImage*                                              BorderImage;                                             // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UObject*                                             __WorldContext;                                          // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BFL_IGUI_StyleLibrary.BFL_IGUI_StyleLibrary_C.StyleAsSliderDisabled
	 */
	struct UBFL_IGUI_StyleLibrary_C_StyleAsSliderDisabled_Params
	{
	public:
		class USlider*                                             Slider;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UImage*                                              BarLeft;                                                 // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UImage*                                              BarRight;                                                // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UObject*                                             __WorldContext;                                          // 0x0018(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BFL_IGUI_StyleLibrary.BFL_IGUI_StyleLibrary_C.StyleAsSliderSelected
	 */
	struct UBFL_IGUI_StyleLibrary_C_StyleAsSliderSelected_Params
	{
	public:
		class USlider*                                             Slider;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UImage*                                              BarLeft;                                                 // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UImage*                                              BarRight;                                                // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UObject*                                             __WorldContext;                                          // 0x0018(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BFL_IGUI_StyleLibrary.BFL_IGUI_StyleLibrary_C.StyleAsSliderFocused
	 */
	struct UBFL_IGUI_StyleLibrary_C_StyleAsSliderFocused_Params
	{
	public:
		class USlider*                                             Slider;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UImage*                                              BarLeft;                                                 // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UImage*                                              BarRight;                                                // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UObject*                                             __WorldContext;                                          // 0x0018(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BFL_IGUI_StyleLibrary.BFL_IGUI_StyleLibrary_C.SetSliderStyle
	 */
	struct UBFL_IGUI_StyleLibrary_C_SetSliderStyle_Params
	{
	public:
		class USlider*                                             Slider;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UImage*                                              BarLeft;                                                 // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UImage*                                              BarRight;                                                // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FSIGUI_SliderStyle                                  Style;                                                   // 0x0018(0x0198)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
		class UObject*                                             __WorldContext;                                          // 0x01B0(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BFL_IGUI_StyleLibrary.BFL_IGUI_StyleLibrary_C.StyleAsSliderIdle
	 */
	struct UBFL_IGUI_StyleLibrary_C_StyleAsSliderIdle_Params
	{
	public:
		class USlider*                                             Slider;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UImage*                                              BarLeft;                                                 // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UImage*                                              BarRight;                                                // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UObject*                                             __WorldContext;                                          // 0x0018(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BFL_IGUI_StyleLibrary.BFL_IGUI_StyleLibrary_C.SetInteractiveItemBackground
	 */
	struct UBFL_IGUI_StyleLibrary_C_SetInteractiveItemBackground_Params
	{
	public:
		struct FSIGUI_InteractiveItemBackgroundStyle               InteractiveItemBackgroundStyle;                          // 0x0000(0x0110)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
		class UImage*                                              BackgroundImage;                                         // 0x0110(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UImage*                                              BorderImage;                                             // 0x0118(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UObject*                                             __WorldContext;                                          // 0x0120(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BFL_IGUI_StyleLibrary.BFL_IGUI_StyleLibrary_C.StyleAsInteractiveItemContentPadding
	 */
	struct UBFL_IGUI_StyleLibrary_C_StyleAsInteractiveItemContentPadding_Params
	{
	public:
		class UOverlay*                                            ContentOverlay;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UObject*                                             __WorldContext;                                          // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BFL_IGUI_StyleLibrary.BFL_IGUI_StyleLibrary_C.StyleAsDisabledInteractiveItemText
	 */
	struct UBFL_IGUI_StyleLibrary_C_StyleAsDisabledInteractiveItemText_Params
	{
	public:
		class UIGUI_DataStyledTextBlock*                           Text;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UObject*                                             __WorldContext;                                          // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BFL_IGUI_StyleLibrary.BFL_IGUI_StyleLibrary_C.StyleAsSelectedInteractiveItemText
	 */
	struct UBFL_IGUI_StyleLibrary_C_StyleAsSelectedInteractiveItemText_Params
	{
	public:
		class UIGUI_DataStyledTextBlock*                           Text;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UObject*                                             __WorldContext;                                          // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BFL_IGUI_StyleLibrary.BFL_IGUI_StyleLibrary_C.StyleAsFocusedInteractiveItemText
	 */
	struct UBFL_IGUI_StyleLibrary_C_StyleAsFocusedInteractiveItemText_Params
	{
	public:
		class UIGUI_DataStyledTextBlock*                           Text;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UObject*                                             __WorldContext;                                          // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BFL_IGUI_StyleLibrary.BFL_IGUI_StyleLibrary_C.StyleAsIdleInteractiveItemText
	 */
	struct UBFL_IGUI_StyleLibrary_C_StyleAsIdleInteractiveItemText_Params
	{
	public:
		class UIGUI_DataStyledTextBlock*                           Text;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UObject*                                             __WorldContext;                                          // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BFL_IGUI_StyleLibrary.BFL_IGUI_StyleLibrary_C.StyleAsDisabledInteractiveItemBackground
	 */
	struct UBFL_IGUI_StyleLibrary_C_StyleAsDisabledInteractiveItemBackground_Params
	{
	public:
		class UImage*                                              Background;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UImage*                                              BorderImage;                                             // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UObject*                                             __WorldContext;                                          // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BFL_IGUI_StyleLibrary.BFL_IGUI_StyleLibrary_C.StyleAsSelectedInteractiveItemBackground
	 */
	struct UBFL_IGUI_StyleLibrary_C_StyleAsSelectedInteractiveItemBackground_Params
	{
	public:
		class UImage*                                              Background;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UImage*                                              BorderImage;                                             // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UObject*                                             __WorldContext;                                          // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BFL_IGUI_StyleLibrary.BFL_IGUI_StyleLibrary_C.StyleAsFocusedInteractiveItemBackground
	 */
	struct UBFL_IGUI_StyleLibrary_C_StyleAsFocusedInteractiveItemBackground_Params
	{
	public:
		class UImage*                                              Background;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UImage*                                              BorderImage;                                             // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UObject*                                             __WorldContext;                                          // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BFL_IGUI_StyleLibrary.BFL_IGUI_StyleLibrary_C.StyleAsIdleInteractiveItemBackground
	 */
	struct UBFL_IGUI_StyleLibrary_C_StyleAsIdleInteractiveItemBackground_Params
	{
	public:
		class UImage*                                              Background;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UImage*                                              BorderImage;                                             // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UObject*                                             __WorldContext;                                          // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BFL_IGUI_StyleLibrary.BFL_IGUI_StyleLibrary_C.StyleRightArrowDisabledMultiToggle
	 */
	struct UBFL_IGUI_StyleLibrary_C_StyleRightArrowDisabledMultiToggle_Params
	{
	public:
		class UImage*                                              ImageReference;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UObject*                                             __WorldContext;                                          // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BFL_IGUI_StyleLibrary.BFL_IGUI_StyleLibrary_C.StyleRightArrowSelectedMultiToggle
	 */
	struct UBFL_IGUI_StyleLibrary_C_StyleRightArrowSelectedMultiToggle_Params
	{
	public:
		class UImage*                                              ImageReference;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UObject*                                             __WorldContext;                                          // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BFL_IGUI_StyleLibrary.BFL_IGUI_StyleLibrary_C.StyleRightArrowFocusedMultiToggle
	 */
	struct UBFL_IGUI_StyleLibrary_C_StyleRightArrowFocusedMultiToggle_Params
	{
	public:
		class UImage*                                              ImageReference;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UObject*                                             __WorldContext;                                          // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BFL_IGUI_StyleLibrary.BFL_IGUI_StyleLibrary_C.StyleRightArrowIdleMultiToggle
	 */
	struct UBFL_IGUI_StyleLibrary_C_StyleRightArrowIdleMultiToggle_Params
	{
	public:
		class UImage*                                              ImageReference;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UObject*                                             __WorldContext;                                          // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BFL_IGUI_StyleLibrary.BFL_IGUI_StyleLibrary_C.StyleLeftArrowDisabledMultiToggle
	 */
	struct UBFL_IGUI_StyleLibrary_C_StyleLeftArrowDisabledMultiToggle_Params
	{
	public:
		class UImage*                                              ImageReference;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UObject*                                             __WorldContext;                                          // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BFL_IGUI_StyleLibrary.BFL_IGUI_StyleLibrary_C.StyleLeftArrowSelectedMultiToggle
	 */
	struct UBFL_IGUI_StyleLibrary_C_StyleLeftArrowSelectedMultiToggle_Params
	{
	public:
		class UImage*                                              ImageReference;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UObject*                                             __WorldContext;                                          // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BFL_IGUI_StyleLibrary.BFL_IGUI_StyleLibrary_C.StyleLeftArrowFocusedMultiToggle
	 */
	struct UBFL_IGUI_StyleLibrary_C_StyleLeftArrowFocusedMultiToggle_Params
	{
	public:
		class UImage*                                              ImageReference;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UObject*                                             __WorldContext;                                          // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BFL_IGUI_StyleLibrary.BFL_IGUI_StyleLibrary_C.StyleLeftArrowIdleMultiToggle
	 */
	struct UBFL_IGUI_StyleLibrary_C_StyleLeftArrowIdleMultiToggle_Params
	{
	public:
		class UImage*                                              ImageReference;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UObject*                                             __WorldContext;                                          // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BFL_IGUI_StyleLibrary.BFL_IGUI_StyleLibrary_C.SetTabContentPadding
	 */
	struct UBFL_IGUI_StyleLibrary_C_SetTabContentPadding_Params
	{
	public:
		class UOverlay*                                            Overlay;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UObject*                                             __WorldContext;                                          // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BFL_IGUI_StyleLibrary.BFL_IGUI_StyleLibrary_C.StyleSelectedTab
	 */
	struct UBFL_IGUI_StyleLibrary_C_StyleSelectedTab_Params
	{
	public:
		class UImage*                                              TabImage;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UBorder*                                             BorderImage;                                             // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UImage*                                              BarImage;                                                // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UObject*                                             __WorldContext;                                          // 0x0018(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BFL_IGUI_StyleLibrary.BFL_IGUI_StyleLibrary_C.StyleFocusedTab
	 */
	struct UBFL_IGUI_StyleLibrary_C_StyleFocusedTab_Params
	{
	public:
		class UImage*                                              TabImage;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UBorder*                                             BorderImage;                                             // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UImage*                                              BarImage;                                                // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UObject*                                             __WorldContext;                                          // 0x0018(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BFL_IGUI_StyleLibrary.BFL_IGUI_StyleLibrary_C.StyleIdleTab
	 */
	struct UBFL_IGUI_StyleLibrary_C_StyleIdleTab_Params
	{
	public:
		class UImage*                                              TabImage;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UBorder*                                             BorderImage;                                             // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UImage*                                              BarImage;                                                // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UObject*                                             __WorldContext;                                          // 0x0018(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BFL_IGUI_StyleLibrary.BFL_IGUI_StyleLibrary_C.StyleScrollboxAsDefault
	 */
	struct UBFL_IGUI_StyleLibrary_C_StyleScrollboxAsDefault_Params
	{
	public:
		class UScrollBox*                                          ScrollBoxReference;                                      // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UObject*                                             __WorldContext;                                          // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BFL_IGUI_StyleLibrary.BFL_IGUI_StyleLibrary_C.GetStyleAsset
	 */
	struct UBFL_IGUI_StyleLibrary_C_GetStyleAsset_Params
	{
	public:
		class UObject*                                             __WorldContext;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UBP_IGUI_StyleData_C*                                StyleAsset;                                              // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BFL_IGUI_StyleLibrary.BFL_IGUI_StyleLibrary_C.StyleImageAsSelectedButton
	 */
	struct UBFL_IGUI_StyleLibrary_C_StyleImageAsSelectedButton_Params
	{
	public:
		class UImage*                                              ImageReference;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UObject*                                             __WorldContext;                                          // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BFL_IGUI_StyleLibrary.BFL_IGUI_StyleLibrary_C.StyleImageAsDisabledButton
	 */
	struct UBFL_IGUI_StyleLibrary_C_StyleImageAsDisabledButton_Params
	{
	public:
		class UImage*                                              ImageReference;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UObject*                                             __WorldContext;                                          // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BFL_IGUI_StyleLibrary.BFL_IGUI_StyleLibrary_C.StyleImageAsFocusedButton
	 */
	struct UBFL_IGUI_StyleLibrary_C_StyleImageAsFocusedButton_Params
	{
	public:
		class UImage*                                              ImageReference;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UObject*                                             __WorldContext;                                          // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BFL_IGUI_StyleLibrary.BFL_IGUI_StyleLibrary_C.DOCUMENTATION
	 */
	struct UBFL_IGUI_StyleLibrary_C_DOCUMENTATION_Params
	{
	public:
		class UObject*                                             __WorldContext;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BFL_IGUI_StyleLibrary.BFL_IGUI_StyleLibrary_C.StyleImageAsIdleButton
	 */
	struct UBFL_IGUI_StyleLibrary_C_StyleImageAsIdleButton_Params
	{
	public:
		class UImage*                                              ImageReference;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UObject*                                             __WorldContext;                                          // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
