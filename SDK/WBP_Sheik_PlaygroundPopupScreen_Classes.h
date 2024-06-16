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
	 * WidgetBlueprintGeneratedClass WBP_Sheik_PlaygroundPopupScreen.WBP_Sheik_PlaygroundPopupScreen_C
	 * Size -> 0x0010 (FullSize[0x0490] - InheritedSize[0x0480])
	 */
	class UWBP_Sheik_PlaygroundPopupScreen_C : public UIGUI_ScreenBase
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0480(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UWBP_Sheik_PlaygroundPopup_C*                        PopupWidget;                                             // 0x0488(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash

	public:
		void ShouldShowHudPopup(const struct FDataTableRowHandle& InRowHandle, bool* Out);
		void OnGainFocus(int32_t UserIndex);
		void OnLoseFocus(int32_t UserIndex);
		void BndEvt__WBP_Sheik_PlaygroundPopupScreen_PopupWidget_K2Node_ComponentBoundEvent_0_OnClosePopup__DelegateSignature();
		void ExecuteUbergraph_WBP_Sheik_PlaygroundPopupScreen(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
