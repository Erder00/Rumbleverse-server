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
	 * WidgetBlueprintGeneratedClass WBP_Sheik_UniformGridList.WBP_Sheik_UniformGridList_C
	 * Size -> 0x007C (FullSize[0x0494] - InheritedSize[0x0418])
	 */
	class UWBP_Sheik_UniformGridList_C : public USheikLockerRoomUniformGridList
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0418(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UUniformGridPanel*                                   ContentGridPanel;                                        // 0x0420(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UScrollBox*                                          RootScrollBox;                                           // 0x0428(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWBP_IGUI_Button_C*                                  WBP_IGUI_Button;                                         // 0x0430(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class FScriptMulticastDelegate                             OnListScrolled;                                          // 0x0438(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		int32_t                                                    DebugItemCount;                                          // 0x0448(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_0QWB[0x4];                                   // 0x044C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UClass*                                              DebugItemType;                                           // 0x0450(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FMargin                                             ItemPadding;                                             // 0x0458(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn
		EHorizontalAlignment                                       ItemHorizontalAlignment;                                 // 0x0468(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
		EVerticalAlignment                                         ItemVerticalAlignment;                                   // 0x0469(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
		EOrientation                                               ScrollOrientation;                                       // 0x046A(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
		unsigned char                                              UnknownData_55VC[0x1];                                   // 0x046B(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    MaxRows;                                                 // 0x046C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
		int32_t                                                    MaxColumns;                                              // 0x0470(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
		float                                                      ScrollPercent;                                           // 0x0474(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
		bool                                                       InputEnabled;                                            // 0x0478(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_1XMA[0x7];                                   // 0x0479(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UVerticalBox*                                        NamedSlotVerticalBox;                                    // 0x0480(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    NumberOfCells;                                           // 0x0488(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       WrapUp;                                                  // 0x048C(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn
		bool                                                       WrapDown;                                                // 0x048D(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn
		bool                                                       WrapLeft;                                                // 0x048E(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn
		bool                                                       WrapRight;                                               // 0x048F(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn
		float                                                      LastScrollSoundOffset;                                   // 0x0490(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void ScrollStandardActionCallback(const struct FInputEventData& InputEvent);
		void GetWrapRight(bool* WrapRight);
		void GetWrapLeft(bool* WrapLeft);
		void GetWrapDown(bool* WrapDown);
		void GetWrapUp(bool* WrapUp);
		void SetWrapRight(bool WrapRight);
		void SetWrapLeft(bool WrapLeft);
		void SetWrapDown(bool WrapDown);
		void SetWrapUp(bool WrapUp);
		void GetIndexByRowAndColumn(int32_t Row, int32_t Column, int32_t* index);
		void GetItems(TArray<class UIGUI_WidgetBase*>* Items);
		void RefreshItemPositions();
		void SetOrientation(EOrientation Orientation);
		void GetOrientation(EOrientation* Orientation);
		int32_t GetIndexRow(int32_t ItemIndex);
		void GetIndexColumn(int32_t ItemIndex, int32_t* Column);
		void RefreshNavigationOverrides(int32_t CountOverride);
		void EnableInputHandling(bool IsEnabled);
		void ListItemFocused(class UIGUI_WidgetBase* Source, int32_t UserIndex);
		void SetScrollboxOffset(float NewScrollOffset);
		void ScrollPageByPercent(float ScrollPercent);
		float GetMaxOffset();
		void GetScrollbox(class UScrollBox** ScrollBox);
		void GetScrollPosition(float* Offset);
		void GetContentSize(struct FVector2D* ContentSize);
		void GetListCount(int32_t* Count);
		void SetScrollPosition(float Percent);
		void RemoveAllItems();
		void RemoveItem(class UIGUI_WidgetBase* Item);
		void AddListItems(TArray<class UIGUI_WidgetBase*>* Item);
		void AddListItem(class UIGUI_WidgetBase* Item, bool RefreshNavigation);
		void ListScrolled(float CurrentOffset);
		void PreConstruct(bool IsDesignTime);
		void ConstructOnlyOnce();
		void ExecuteUbergraph_WBP_Sheik_UniformGridList(int32_t EntryPoint);
		void OnListScrolled__DelegateSignature(class UIGUI_WidgetBase* Source, float ScrollPosition);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
