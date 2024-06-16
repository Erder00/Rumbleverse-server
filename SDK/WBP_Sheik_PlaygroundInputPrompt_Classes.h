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
	 * WidgetBlueprintGeneratedClass WBP_Sheik_PlaygroundInputPrompt.WBP_Sheik_PlaygroundInputPrompt_C
	 * Size -> 0x0041 (FullSize[0x0459] - InheritedSize[0x0418])
	 */
	class UWBP_Sheik_PlaygroundInputPrompt_C : public UIGUI_WidgetBase
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0418(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UTextBlock*                                          DelimiterText;                                           // 0x0420(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWBP_Sheik_ActionKeyIcon_C*                          GamepadIcons;                                            // 0x0428(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWBP_Sheik_InputBindingIcon_C*                       KeyboardIcon;                                            // 0x0430(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class FName                                                ActionName;                                              // 0x0438(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
		class FText                                                Delimeter;                                               // 0x0440(0x0018) Edit, BlueprintVisible, ExposeOnSpawn
		bool                                                       ShowDelimeter;                                           // 0x0458(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn

	public:
		void GetTextureForAction(const class FName& InActionName, class UTexture2D** OutTexture);
		void SetActionName(const class FName& InActionName);
		void ConstructOnlyOnce();
		void OnInputSourceChanged(const struct FUserControllerData& OldInputSource, const struct FUserControllerData& NewInputSource);
		void PreConstruct(bool IsDesignTime);
		void ExecuteUbergraph_WBP_Sheik_PlaygroundInputPrompt(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
