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
	 * WidgetBlueprintGeneratedClass WBP_IGUI_Button.WBP_IGUI_Button_C
	 * Size -> 0x00E6 (FullSize[0x04FE] - InheritedSize[0x0418])
	 */
	class UWBP_IGUI_Button_C : public UIGUI_WidgetBase
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0418(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UIGUI_DataStyledTextBlock*                           ButtonText;                                              // 0x0420(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWBP_IGUI_InteractiveItemBackground_C*               InteractiveItemBackground;                               // 0x0428(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              OptionalIcon;                                            // 0x0430(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class FText                                                Label;                                                   // 0x0438(0x0018) Edit, BlueprintVisible, ExposeOnSpawn
		bool                                                       ShowIcon;                                                // 0x0450(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn
		unsigned char                                              UnknownData_Q06Y[0x7];                                   // 0x0451(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FSlateBrush                                         ButtonIcon;                                              // 0x0458(0x0088) Edit, BlueprintVisible, ExposeOnSpawn
		int32_t                                                    ButtonIndex;                                             // 0x04E0(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
		unsigned char                                              UnknownData_BO45[0x4];                                   // 0x04E4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<int32_t>                                            UserIndicesFocusedOnThisButton;                          // 0x04E8(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		int32_t                                                    ButtonUserIndex;                                         // 0x04F8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       IsFocused;                                               // 0x04FC(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       IsDisabled;                                              // 0x04FD(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void SetFocusVisuals(bool IsFocused, bool SkipAnimations, int32_t UserIndex);
		void SetLabel(const class FText& InText);
		void OnSelectedAnimationFinished(class UIGUI_WidgetBase* Source);
		void GetButtonIndex(int32_t* index);
		void SetDisabled(bool IsDisabled);
		void HandleSelect(int32_t UserIndex);
		void ApplyContentOnPreConstruct();
		void PreConstruct(bool IsDesignTime);
		void ConstructOnlyOnce();
		void OnDisabled();
		void OnEnabled();
		void OnGainFocus(int32_t UserIndex);
		void OnLoseFocus(int32_t UserIndex);
		void OnSelected(int32_t UserIndex);
		void ExecuteUbergraph_WBP_IGUI_Button(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
