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
	 * WidgetBlueprintGeneratedClass WBP_Sheik_NavigationTab.WBP_Sheik_NavigationTab_C
	 * Size -> 0x0038 (FullSize[0x04A8] - InheritedSize[0x0470])
	 */
	class UWBP_Sheik_NavigationTab_C : public USheikTabBase
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0470(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class FText                                                SavedLabelTxt;                                           // 0x0478(0x0018) Edit, BlueprintVisible, DisableEditOnInstance
		class UFont*                                               FontFamily;                                              // 0x0490(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UFont*                                               SelectedFontFamily;                                      // 0x0498(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    FontSize;                                                // 0x04A0(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    SelectedFontSize;                                        // 0x04A4(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void SelectTab(bool IsSelected, bool SkipAnimation);
		void ConstructOnlyOnce();
		void ExecuteUbergraph_WBP_Sheik_NavigationTab(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
