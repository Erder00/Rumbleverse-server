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
	 * WidgetBlueprintGeneratedClass WBP_Sheik_MultiToggleIndicator.WBP_Sheik_MultiToggleIndicator_C
	 * Size -> 0x0041 (FullSize[0x0459] - InheritedSize[0x0418])
	 */
	class UWBP_Sheik_MultiToggleIndicator_C : public UIGUI_WidgetBase
	{
	public:
		class UWidgetAnimation*                                    FadeToUnselected;                                        // 0x0418(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UWidgetAnimation*                                    FadeToSelected;                                          // 0x0420(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UImage*                                              Image;                                                   // 0x0428(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		struct FSlateColor                                         UnselectedColor;                                         // 0x0430(0x0028) Edit, BlueprintVisible, DisableEditOnInstance
		bool                                                       bIsSelected;                                             // 0x0458(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void PlayChangedAnimation(bool bInIsSelected);
		void SetUnselected();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
