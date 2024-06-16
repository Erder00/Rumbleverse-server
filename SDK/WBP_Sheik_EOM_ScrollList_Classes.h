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
	 * WidgetBlueprintGeneratedClass WBP_Sheik_EOM_ScrollList.WBP_Sheik_EOM_ScrollList_C
	 * Size -> 0x006C (FullSize[0x0524] - InheritedSize[0x04B8])
	 */
	class UWBP_Sheik_EOM_ScrollList_C : public USheikWidgetBase
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x04B8(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UNamedSlot*                                          AddAVerticalBoxHere;                                     // 0x04C0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UVerticalBox*                                        ContentVerticalBox;                                      // 0x04C8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UScrollBox*                                          RootScrollBox;                                           // 0x04D0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UVerticalBox*                                        RootVerticalBox;                                         // 0x04D8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class FScriptMulticastDelegate                             OnListScrolled;                                          // 0x04E0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		int32_t                                                    DebugItemCount;                                          // 0x04F0(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_GAX5[0x4];                                   // 0x04F4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UClass*                                              DebugItemType;                                           // 0x04F8(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FMargin                                             ItemPadding;                                             // 0x0500(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn
		float                                                      ScrollPercent;                                           // 0x0510(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
		bool                                                       InputEnabled;                                            // 0x0514(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_XVBN[0x3];                                   // 0x0515(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UVerticalBox*                                        NamedSlotVerticalBox;                                    // 0x0518(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      LastScrollSoundOffset;                                   // 0x0520(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void RefreshWidgetsWithNavigationOverride();
		void SetNamedSlotVerticalBoxSpacing();
		void PutNamedSlotVerticalBoxContentIntoScrollList();
		void EnableInputHandling(bool IsEnabled);
		void ListItemFocused(class UIGUI_WidgetBase* Source, int32_t UserIndex);
		void SetScrollboxOffset(float NewScrollOffset);
		void ScrollUp(const struct FInputEventData& InputEventData);
		void PageUp(const struct FInputEventData& InputEventData);
		void ScrollPageByPercent(float ScrollPercent);
		void ScrollDown(const struct FInputEventData& InputEventData);
		void PageDown(const struct FInputEventData& InputEventData);
		float GetMaxOffset();
		void GetScrollbox(class UScrollBox** ScrollBox);
		void GetScrollPosition(float* Offset);
		void GetContentSize(struct FVector2D* ContentSize);
		void GetListCount(int32_t* Count);
		void SetScrollPosition(float Percent);
		void RemoveAllItems();
		void RemoveItem(class UIGUI_WidgetBase* Item);
		void AddListItems(TArray<class UIGUI_WidgetBase*>* Item);
		void AddListItem(class UIGUI_WidgetBase* Item);
		void ListScrolled(float CurrentOffset);
		void PreConstruct(bool IsDesignTime);
		void OnActivated();
		void OnDeactivated();
		void ExecuteUbergraph_WBP_Sheik_EOM_ScrollList(int32_t EntryPoint);
		void OnListScrolled__DelegateSignature(class UIGUI_WidgetBase* Source, float ScrollPosition);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
