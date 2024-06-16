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
	 * WidgetBlueprintGeneratedClass WBP_Sheik_MultiToggleIndicatorContainer.WBP_Sheik_MultiToggleIndicatorContainer_C
	 * Size -> 0x0018 (FullSize[0x0430] - InheritedSize[0x0418])
	 */
	class UWBP_Sheik_MultiToggleIndicatorContainer_C : public UIGUI_WidgetBase
	{
	public:
		class UHorizontalBox*                                      IndicatorHorizontalBox;                                  // 0x0418(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		TArray<class UWBP_Sheik_MultiToggleIndicator_C*>           Indicators;                                              // 0x0420(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference

	public:
		void HideIndicatorAtIndex(int32_t IndexToHide);
		void RemoveOption(int32_t OptionIndex);
		void SelectedOptionChanged(int32_t OldOptionIndex, int32_t NewOptionIndex);
		void ConstructIndicators(int32_t NumOptions, bool* ShouldHideIndicator);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
