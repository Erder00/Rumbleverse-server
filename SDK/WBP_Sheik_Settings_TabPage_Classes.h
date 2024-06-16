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
	 * WidgetBlueprintGeneratedClass WBP_Sheik_Settings_TabPage.WBP_Sheik_Settings_TabPage_C
	 * Size -> 0x0008 (FullSize[0x04C0] - InheritedSize[0x04B8])
	 */
	class UWBP_Sheik_Settings_TabPage_C : public USheikWidgetBase
	{
	public:
		class UWBP_Sheik_Settings_DescriptionPanel_C*              DescriptionPanel;                                        // 0x04B8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void GetSavedSettings(class USheikSavedSettings** OutSettings);
		void OnWidgetFocused_cb(class UIGUI_WidgetBase* Widget, int32_t UserIndex);
		void BindAllOnWidgetFocused(class UWBP_Sheik_Settings_DescriptionPanel_C* DescriptionPanel);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
