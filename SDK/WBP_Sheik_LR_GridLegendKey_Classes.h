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
	 * WidgetBlueprintGeneratedClass WBP_Sheik_LR_GridLegendKey.WBP_Sheik_LR_GridLegendKey_C
	 * Size -> 0x00E2 (FullSize[0x059A] - InheritedSize[0x04B8])
	 */
	class UWBP_Sheik_LR_GridLegendKey_C : public USheikWidgetBase
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x04B8(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UWidgetAnimation*                                    SelectedAnim;                                            // 0x04C0(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UWidgetAnimation*                                    FocusedAnim;                                             // 0x04C8(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UWBP_Sheik_ButtonAction_C*                           InputBinding_PressAndHold;                               // 0x04D0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWBP_Sheik_InputBindingIcon_C*                       InputBindingIcon;                                        // 0x04D8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USpacer*                                             InputSpacer;                                             // 0x04E0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          LabelTextBlock;                                          // 0x04E8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class FText                                                LabelOverride;                                           // 0x04F0(0x0018) Edit, BlueprintVisible, DisableEditOnInstance
		struct FS_Sheik_InputBindingKeyEntry                       InputBindingKeyEntry;                                    // 0x0508(0x0028) Edit, BlueprintVisible, ExposeOnSpawn, HasGetValueTypeHash
		class FName                                                LegendKeyName;                                           // 0x0530(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       IsPressAndHold;                                          // 0x0538(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		EUISounds                                                  SelectSound;                                             // 0x0539(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       MuteSelectSound;                                         // 0x053A(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		EUISounds                                                  FocusedSound;                                            // 0x053B(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       MuteFocusedSound;                                        // 0x053C(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_N30P[0x3];                                   // 0x053D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FSlateFontInfo                                      Font;                                                    // 0x0540(0x0058) Edit, BlueprintVisible, HasGetValueTypeHash
		bool                                                       OverrideFont;                                            // 0x0598(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		ESlateVisibility                                           SpacerVisibility;                                        // 0x0599(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void GetInputBinding_PressAndHold(class UWBP_Sheik_ButtonAction_C** InputBinding_PressAndHold);
		void PlayFocusedSound();
		void PlaySelectSound();
		void PlayUISound(bool bPlaySound, EUISounds SoundType);
		void SetPressAndHold(bool InPressAndHold);
		struct FEventReply OnPreviewMouseButtonDown(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);
		void SetLabelOverride(const class FText& Label);
		void GetKey(struct FS_Sheik_InputBindingKeyEntry* Key);
		void SetKey(const struct FS_Sheik_InputBindingKeyEntry& InputBindingKeyEntry);
		void PreConstruct(bool IsDesignTime);
		void ConstructOnlyOnce();
		void OnSelected(int32_t UserIndex);
		void SelectedEvent();
		void OnActivated();
		void OnDeactivated();
		void OnGainFocus(int32_t UserIndex);
		void OnLoseFocus(int32_t UserIndex);
		void ExecuteUbergraph_WBP_Sheik_LR_GridLegendKey(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
