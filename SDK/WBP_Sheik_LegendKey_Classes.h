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
	 * WidgetBlueprintGeneratedClass WBP_Sheik_LegendKey.WBP_Sheik_LegendKey_C
	 * Size -> 0x0095 (FullSize[0x04AD] - InheritedSize[0x0418])
	 */
	class UWBP_Sheik_LegendKey_C : public UIGUI_WidgetBase
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0418(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UWidgetAnimation*                                    SelectedAnim;                                            // 0x0420(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UWidgetAnimation*                                    FocusedAnim;                                             // 0x0428(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UImage*                                              Backing;                                                 // 0x0430(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              BGImage;                                                 // 0x0438(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              FocusedFrameImage;                                       // 0x0440(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWBP_Sheik_InputBindingIcon_C*                       InputBindingIcon;                                        // 0x0448(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          LabelTextBlock;                                          // 0x0450(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USpacer*                                             Spacer;                                                  // 0x0458(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class FText                                                LabelOverride;                                           // 0x0460(0x0018) Edit, BlueprintVisible, DisableEditOnInstance
		struct FS_Sheik_InputBindingKeyEntry                       InputBindingKeyEntry;                                    // 0x0478(0x0028) Edit, BlueprintVisible, ExposeOnSpawn, HasGetValueTypeHash
		class UTexture2D*                                          BackingImage;                                            // 0x04A0(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
		EUISounds                                                  SelectSound;                                             // 0x04A8(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       MuteSelectSound;                                         // 0x04A9(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		EUISounds                                                  FocusedSound;                                            // 0x04AA(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       MuteFocusedSound;                                        // 0x04AB(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       UseBacking;                                              // 0x04AC(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn

	public:
		void SequenceEvent__ENTRYPOINTWBP_Sheik_LegendKey_1();
		void PlayFocusedSound();
		void PlaySelectSound();
		void PlayUISound(bool bPlaySound, EUISounds SoundType);
		struct FEventReply OnPreviewMouseButtonDown(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);
		void SetLabelOverride(const class FText& Label);
		void GetKey(struct FS_Sheik_InputBindingKeyEntry* Key);
		void SetKey(const struct FS_Sheik_InputBindingKeyEntry& InputBindingKeyEntry);
		void PreConstruct(bool IsDesignTime);
		void ConstructOnlyOnce();
		void OnSelected(int32_t UserIndex);
		void SelectedEvent();
		void OnGainFocus(int32_t UserIndex);
		void OnLoseFocus(int32_t UserIndex);
		void ExecuteUbergraph_WBP_Sheik_LegendKey(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
