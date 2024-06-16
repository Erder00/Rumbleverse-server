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
	// # Classes
	// --------------------------------------------------
	/**
	 * BlueprintGeneratedClass BFL_IGUI_StyleLibrary.BFL_IGUI_StyleLibrary_C
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UBFL_IGUI_StyleLibrary_C : public UBlueprintFunctionLibrary
	{
	public:
		void StyleAsFocusedDisabledInteractiveItemText(class UIGUI_DataStyledTextBlock* Text, class UObject* __WorldContext);
		void StyleAsFocusedDisabledInteractiveItemBackground(class UImage* Background, class UImage* BorderImage, class UObject* __WorldContext);
		void StyleAsSliderDisabled(class USlider* Slider, class UImage* BarLeft, class UImage* BarRight, class UObject* __WorldContext);
		void StyleAsSliderSelected(class USlider* Slider, class UImage* BarLeft, class UImage* BarRight, class UObject* __WorldContext);
		void StyleAsSliderFocused(class USlider* Slider, class UImage* BarLeft, class UImage* BarRight, class UObject* __WorldContext);
		void SetSliderStyle(class USlider* Slider, class UImage* BarLeft, class UImage* BarRight, const struct FSIGUI_SliderStyle& Style, class UObject* __WorldContext);
		void StyleAsSliderIdle(class USlider* Slider, class UImage* BarLeft, class UImage* BarRight, class UObject* __WorldContext);
		void SetInteractiveItemBackground(const struct FSIGUI_InteractiveItemBackgroundStyle& InteractiveItemBackgroundStyle, class UImage* BackgroundImage, class UImage* BorderImage, class UObject* __WorldContext);
		void StyleAsInteractiveItemContentPadding(class UOverlay* ContentOverlay, class UObject* __WorldContext);
		void StyleAsDisabledInteractiveItemText(class UIGUI_DataStyledTextBlock* Text, class UObject* __WorldContext);
		void StyleAsSelectedInteractiveItemText(class UIGUI_DataStyledTextBlock* Text, class UObject* __WorldContext);
		void StyleAsFocusedInteractiveItemText(class UIGUI_DataStyledTextBlock* Text, class UObject* __WorldContext);
		void StyleAsIdleInteractiveItemText(class UIGUI_DataStyledTextBlock* Text, class UObject* __WorldContext);
		void StyleAsDisabledInteractiveItemBackground(class UImage* Background, class UImage* BorderImage, class UObject* __WorldContext);
		void StyleAsSelectedInteractiveItemBackground(class UImage* Background, class UImage* BorderImage, class UObject* __WorldContext);
		void StyleAsFocusedInteractiveItemBackground(class UImage* Background, class UImage* BorderImage, class UObject* __WorldContext);
		void StyleAsIdleInteractiveItemBackground(class UImage* Background, class UImage* BorderImage, class UObject* __WorldContext);
		void StyleRightArrowDisabledMultiToggle(class UImage* ImageReference, class UObject* __WorldContext);
		void StyleRightArrowSelectedMultiToggle(class UImage* ImageReference, class UObject* __WorldContext);
		void StyleRightArrowFocusedMultiToggle(class UImage* ImageReference, class UObject* __WorldContext);
		void StyleRightArrowIdleMultiToggle(class UImage* ImageReference, class UObject* __WorldContext);
		void StyleLeftArrowDisabledMultiToggle(class UImage* ImageReference, class UObject* __WorldContext);
		void StyleLeftArrowSelectedMultiToggle(class UImage* ImageReference, class UObject* __WorldContext);
		void StyleLeftArrowFocusedMultiToggle(class UImage* ImageReference, class UObject* __WorldContext);
		void StyleLeftArrowIdleMultiToggle(class UImage* ImageReference, class UObject* __WorldContext);
		void SetTabContentPadding(class UOverlay* Overlay, class UObject* __WorldContext);
		void StyleSelectedTab(class UImage* TabImage, class UBorder* BorderImage, class UImage* BarImage, class UObject* __WorldContext);
		void StyleFocusedTab(class UImage* TabImage, class UBorder* BorderImage, class UImage* BarImage, class UObject* __WorldContext);
		void StyleIdleTab(class UImage* TabImage, class UBorder* BorderImage, class UImage* BarImage, class UObject* __WorldContext);
		void StyleScrollboxAsDefault(class UScrollBox* ScrollBoxReference, class UObject* __WorldContext);
		void GetStyleAsset(class UObject* __WorldContext, class UBP_IGUI_StyleData_C** StyleAsset);
		void StyleImageAsSelectedButton(class UImage* ImageReference, class UObject* __WorldContext);
		void StyleImageAsDisabledButton(class UImage* ImageReference, class UObject* __WorldContext);
		void StyleImageAsFocusedButton(class UImage* ImageReference, class UObject* __WorldContext);
		void DOCUMENTATION(class UObject* __WorldContext);
		void StyleImageAsIdleButton(class UImage* ImageReference, class UObject* __WorldContext);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
