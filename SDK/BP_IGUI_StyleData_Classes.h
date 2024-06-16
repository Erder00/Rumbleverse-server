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
	 * BlueprintGeneratedClass BP_IGUI_StyleData.BP_IGUI_StyleData_C
	 * Size -> 0x1E00 (FullSize[0x1E30] - InheritedSize[0x0030])
	 */
	class UBP_IGUI_StyleData_C : public UPrimaryDataAsset
	{
	public:
		struct FSlateBrush                                         ButtonIdle;                                              // 0x0030(0x0088) Edit, BlueprintVisible, DisableEditOnInstance
		struct FSlateBrush                                         ButtonFocused;                                           // 0x00B8(0x0088) Edit, BlueprintVisible, DisableEditOnInstance
		struct FSlateBrush                                         ButtonDisabled;                                          // 0x0140(0x0088) Edit, BlueprintVisible, DisableEditOnInstance
		struct FSlateBrush                                         ButtonSelected;                                          // 0x01C8(0x0088) Edit, BlueprintVisible, DisableEditOnInstance
		struct FScrollBoxStyle                                     ScrollBoxStyle;                                          // 0x0250(0x0228) Edit, BlueprintVisible, DisableEditOnInstance
		struct FScrollBarStyle                                     ScrollBarStyle;                                          // 0x0478(0x04D0) Edit, BlueprintVisible, DisableEditOnInstance
		float                                                      ScrollbarThickness;                                      // 0x0948(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_0C8K[0x4];                                   // 0x094C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FSIGUI_TabStyle                                     TabIdle;                                                 // 0x0950(0x0198) Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash
		struct FSIGUI_TabStyle                                     TabFocused;                                              // 0x0AE8(0x0198) Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash
		struct FSIGUI_TabStyle                                     TabSelected;                                             // 0x0C80(0x0198) Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash
		struct FMargin                                             TabContentPadding;                                       // 0x0E18(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		struct FSlateBrush                                         MultiToggleLeftArrowIdle;                                // 0x0E28(0x0088) Edit, BlueprintVisible, DisableEditOnInstance
		struct FSlateBrush                                         MultiToggleLeftArrowFocused;                             // 0x0EB0(0x0088) Edit, BlueprintVisible, DisableEditOnInstance
		struct FSlateBrush                                         MultiToggleLeftArrowSelected;                            // 0x0F38(0x0088) Edit, BlueprintVisible, DisableEditOnInstance
		struct FSlateBrush                                         MultiToggleLeftArrowDisabled;                            // 0x0FC0(0x0088) Edit, BlueprintVisible, DisableEditOnInstance
		struct FSlateBrush                                         MultiToggleRightArrowIdle;                               // 0x1048(0x0088) Edit, BlueprintVisible, DisableEditOnInstance
		struct FSlateBrush                                         MultiToggleRightArrowFocused;                            // 0x10D0(0x0088) Edit, BlueprintVisible, DisableEditOnInstance
		struct FSlateBrush                                         MultiToggleRightArrowSelected;                           // 0x1158(0x0088) Edit, BlueprintVisible, DisableEditOnInstance
		struct FSlateBrush                                         MultiToggleRightArrowDisabled;                           // 0x11E0(0x0088) Edit, BlueprintVisible, DisableEditOnInstance
		float                                                      TabManagerTabPadding;                                    // 0x1268(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_EHDB[0x4];                                   // 0x126C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FSIGUI_InteractiveItemBackgroundStyle               InteractiveItemBackgroundIdle;                           // 0x1270(0x0110) Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash
		struct FSIGUI_InteractiveItemBackgroundStyle               InteractiveItemBackgroundFocused;                        // 0x1380(0x0110) Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash
		struct FSIGUI_InteractiveItemBackgroundStyle               InteractiveItemBackgroundSelected;                       // 0x1490(0x0110) Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash
		struct FSIGUI_InteractiveItemBackgroundStyle               InteractiveItemBackgroundDisabled;                       // 0x15A0(0x0110) Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash
		struct FSIGUI_InteractiveItemBackgroundStyle               InteractiveItemBackgroundFocusedDisabled;                // 0x16B0(0x0110) Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash
		struct FMargin                                             InteractiveItemContentPadding;                           // 0x17C0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		struct FSIGUI_SliderStyle                                  SliderIdle;                                              // 0x17D0(0x0198) Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash
		struct FSIGUI_SliderStyle                                  SliderFocused;                                           // 0x1968(0x0198) Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash
		struct FSIGUI_SliderStyle                                  SliderSelected;                                          // 0x1B00(0x0198) Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash
		struct FSIGUI_SliderStyle                                  SliderDisabled;                                          // 0x1C98(0x0198) Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
