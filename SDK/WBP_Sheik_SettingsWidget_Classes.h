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
	 * WidgetBlueprintGeneratedClass WBP_Sheik_SettingsWidget.WBP_Sheik_SettingsWidget_C
	 * Size -> 0x0038 (FullSize[0x0450] - InheritedSize[0x0418])
	 */
	class UWBP_Sheik_SettingsWidget_C : public UIGUI_WidgetBase
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0418(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class FText                                                Name;                                                    // 0x0420(0x0018) Edit, BlueprintVisible
		class FText                                                Description;                                             // 0x0438(0x0018) Edit, BlueprintVisible

	public:
		void GetDescription(class FText* Description);
		void GetName(class FText* Name);
		void SetDescription(const class FText& Description);
		void SetName(const class FText& Name);
		void ExecuteUbergraph_WBP_Sheik_SettingsWidget(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
