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
	 * WidgetBlueprintGeneratedClass WBP_Sheik_NavigationTabs.WBP_Sheik_NavigationTabs_C
	 * Size -> 0x0090 (FullSize[0x04A8] - InheritedSize[0x0418])
	 */
	class UWBP_Sheik_NavigationTabs_C : public UIGUI_WidgetBase
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0418(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UWBP_Sheik_InputBindingIcon_C*                       LeftBumper;                                              // 0x0420(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWBP_Sheik_InputBindingIcon_C*                       RightBumper;                                             // 0x0428(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWBP_Sheik_NavigationTabManager_C*                   TabManager;                                              // 0x0430(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class FScriptMulticastDelegate                             OnTabLeftSelected;                                       // 0x0438(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             OnTabRightSelected;                                      // 0x0448(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		TArray<class FText>                                        TabNames_PC;                                             // 0x0458(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		TArray<class FText>                                        TabNames_Xbox;                                           // 0x0468(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		TArray<class FText>                                        TabNames_Playstation;                                    // 0x0478(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		TArray<class FText>                                        TabNames_Default;                                        // 0x0488(0x0010) Edit, BlueprintVisible
		bool                                                       UsePlatformSpecificTabNames;                             // 0x0498(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_DO7S[0x7];                                   // 0x0499(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UClass*                                              TabClass;                                                // 0x04A0(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void UpdateTabNamesForPlatform(bool RebuildTabs);
		void SetTabNamesForConsole(TArray<class FText>* InTabNamesXbox, TArray<class FText>* InTabNamesPlaystation);
		void SetTabNamesForPC(TArray<class FText>* InTabNames);
		void SetupTabs();
		void ConstructOnlyOnce();
		void LeftBumperClicked(class UIGUI_WidgetBase* Widget, int32_t UserIndex);
		void RightBumperCicked(class UIGUI_WidgetBase* Widget, int32_t UserIndex);
		void PreConstruct(bool IsDesignTime);
		void ExecuteUbergraph_WBP_Sheik_NavigationTabs(int32_t EntryPoint);
		void OnTabRightSelected__DelegateSignature();
		void OnTabLeftSelected__DelegateSignature();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
