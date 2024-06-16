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
	 * WidgetBlueprintGeneratedClass WBP_Sheik_NavigationTabManager.WBP_Sheik_NavigationTabManager_C
	 * Size -> 0x0070 (FullSize[0x0488] - InheritedSize[0x0418])
	 */
	class UWBP_Sheik_NavigationTabManager_C : public UIGUI_WidgetBase
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0418(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UHorizontalBox*                                      TabBox;                                                  // 0x0420(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		TArray<class FText>                                        TabNames;                                                // 0x0428(0x0010) Edit, BlueprintVisible, ExposeOnSpawn
		TArray<class USheikTabBase*>                               ArrayOfTabs;                                             // 0x0438(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference
		class FScriptMulticastDelegate                             OnTabSelected;                                           // 0x0448(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class USheikTabBase*                                       ActiveTab;                                               // 0x0458(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       InputEnabled;                                            // 0x0460(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_PXQT[0x7];                                   // 0x0461(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UTexture2D*>                                  TabImages;                                               // 0x0468(0x0010) Edit, BlueprintVisible, ExposeOnSpawn
		bool                                                       bPlayTabSound;                                           // 0x0478(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		EUISounds                                                  TabSound;                                                // 0x0479(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_RSF8[0x6];                                   // 0x047A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UClass*                                              TabClass;                                                // 0x0480(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void GetTabImagesAsString(class FString* Out);
		void GetTabNamesAsString(class FString* Out);
		void GetInputEnabled(bool* Out);
		void SetInputEnabled(bool InputEnabled);
		void OnTabWidgetSelected(class UIGUI_WidgetBase* TabSelected, int32_t UserIndex);
		void PlayTabSound();
		void CheckTabImageArraySize(bool* Pass);
		void DisableTabInput();
		void RemoveTab(int32_t TabIndex);
		void PopulateContent(bool IsDesignTime);
		void AddTabsToContentArea();
		void GetSelectedTabIndex(int32_t* SelectedTabIndex);
		void GetSelectedTab(class USheikTabBase** SelectedTab);
		void GetTabsLength(int32_t* TabsLength);
		void SetTabInput();
		void CreateTab(const class FText& TabLabel, class UTexture2D* TabImage);
		void GetWrapping(int32_t RequestedIndex, int32_t* WrappedIndex);
		void TabLeftRight(int32_t WrapDirection);
		void InitializeFirstTabSelected();
		void SetSelectedTab(class UIGUI_WidgetBase* TabSelected, int32_t UserIndex);
		void GetTabs(TArray<class USheikTabBase*>* ArrayOfTabs);
		void SetTabList(TArray<class FText>* TabNames, TArray<class UTexture2D*>* InTabImages);
		void TabLeft(const struct FInputEventData& InputEventData);
		void TabRight(const struct FInputEventData& InputEventData);
		void ConstructOnlyOnce();
		void PreConstruct(bool IsDesignTime);
		void ExecuteUbergraph_WBP_Sheik_NavigationTabManager(int32_t EntryPoint);
		void OnTabSelected__DelegateSignature(class UIGUI_WidgetBase* Source, int32_t TabIndex);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
