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
	 * WidgetBlueprintGeneratedClass WBP_Sheik_EventLine.WBP_Sheik_EventLine_C
	 * Size -> 0x0030 (FullSize[0x0448] - InheritedSize[0x0418])
	 */
	class UWBP_Sheik_EventLine_C : public USheikEventLineWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0418(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UWidgetAnimation*                                    ShiftDownAnim;                                           // 0x0420(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UWidgetAnimation*                                    ShowEventAnim;                                           // 0x0428(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class URichTextBlock*                                      EventRichTextBlock;                                      // 0x0430(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class FScriptMulticastDelegate                             EventFinished;                                           // 0x0438(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable

	public:
		class FText GetEventText();
		void ShowEventAnimFinished();
		void ConstructOnlyOnce();
		void ShowEvent(const class FText& EventText);
		void ShiftDown();
		void ExecuteUbergraph_WBP_Sheik_EventLine(int32_t EntryPoint);
		void EventFinished__DelegateSignature(class UIGUI_WidgetBase* Source);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
