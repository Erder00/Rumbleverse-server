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
	 * WidgetBlueprintGeneratedClass WBP_Sheik_PlaygroundPopupSmall.WBP_Sheik_PlaygroundPopupSmall_C
	 * Size -> 0x00F8 (FullSize[0x0560] - InheritedSize[0x0468])
	 */
	class UWBP_Sheik_PlaygroundPopupSmall_C : public USheikPlaygroundPopupScreen
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0468(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UVerticalBox*                                        ControlLine_VBox;                                        // 0x0470(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              ControlLineDivider;                                      // 0x0478(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UHorizontalBox*                                      ControlLinePrefixBox;                                    // 0x0480(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UHorizontalBox*                                      ControlLineSuffixBox;                                    // 0x0488(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          ControlLineText;                                         // 0x0490(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class URichTextBlock*                                      DescriptionText;                                         // 0x0498(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          PopupTitle;                                              // 0x04A0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		struct FMargin                                             BindingIconPadding;                                      // 0x04A8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		struct FSlateBrush                                         VisualAidImageBrush;                                     // 0x04B8(0x0088) Edit, BlueprintVisible, DisableEditOnInstance
		class FScriptMulticastDelegate                             OnClosePopup;                                            // 0x0540(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		struct FDataTableRowHandle                                 PopupRowHandle;                                          // 0x0550(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor

	public:
		void HideControlLinePrompt(bool HidePrompt);
		void IsControlLineValid(const struct FSheikPlaygroundPopupControlLine& InControlLine, bool* OutValid);
		void SetControlLine(const struct FSheikPlaygroundPopupControlLine& InControlLine);
		void SetData(const struct FSheikPlaygroundPopupDefinitionRow& InPopupDefinition);
		void OnBackPressed(const struct FInputEventData& InputEventData);
		void ConstructOnlyOnce();
		void ShowNewPlaygroundPopup(const struct FDataTableRowHandle& InPopupRowHandle);
		void TutorialPopupClosed(const struct FDataTableRowHandle& ReadableContent);
		void HideSmallPopup(const struct FDataTableRowHandle& PopupRowHandle);
		void ExecuteUbergraph_WBP_Sheik_PlaygroundPopupSmall(int32_t EntryPoint);
		void OnClosePopup__DelegateSignature();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
