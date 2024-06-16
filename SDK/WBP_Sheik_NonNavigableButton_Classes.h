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
	 * WidgetBlueprintGeneratedClass WBP_Sheik_NonNavigableButton.WBP_Sheik_NonNavigableButton_C
	 * Size -> 0x0092 (FullSize[0x054A] - InheritedSize[0x04B8])
	 */
	class UWBP_Sheik_NonNavigableButton_C : public USheikWidgetBase
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x04B8(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UWidgetAnimation*                                    Select;                                                  // 0x04C0(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UWidgetAnimation*                                    MouseLeave;                                              // 0x04C8(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UWidgetAnimation*                                    MouseEnter;                                              // 0x04D0(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UImage*                                              BGImage;                                                 // 0x04D8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWBP_Sheik_ButtonAction_C*                           ButtonAction;                                            // 0x04E0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          ButtonText;                                              // 0x04E8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class FText                                                Text;                                                    // 0x04F0(0x0018) Edit, BlueprintVisible
		class FScriptMulticastDelegate                             OnHoldActionStarted;                                     // 0x0508(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             OnActionConfirmed;                                       // 0x0518(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             OnHoldActionCancelled;                                   // 0x0528(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		struct FDataTableRowHandle                                 InputDataRow;                                            // 0x0538(0x0010) Edit, BlueprintVisible, NoDestructor
		bool                                                       IsHold;                                                  // 0x0548(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       AlwaysEnabled;                                           // 0x0549(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor

	public:
		void SetText(const class FText& Text);
		void IsAnimationBusy(bool* IsBusy);
		struct FEventReply OnMouseButtonDown(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);
		void OnActivated();
		void OnDeactivated();
		void OnMouseEnter(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);
		void OnMouseLeave(const struct FPointerEvent& MouseEvent);
		void BndEvt__ButtonAction_K2Node_ComponentBoundEvent_1_OnActionConfirmed__DelegateSignature();
		void OnInitialized();
		void OnSelectFinished();
		void BndEvt__ButtonAction_K2Node_ComponentBoundEvent_3_OnHoldActionStarted__DelegateSignature();
		void BndEvt__ButtonAction_K2Node_ComponentBoundEvent_4_OnHoldActionCancelled__DelegateSignature();
		void PreConstruct(bool IsDesignTime);
		void Construct();
		void OnActionConfirmedMouse();
		void ExecuteUbergraph_WBP_Sheik_NonNavigableButton(int32_t EntryPoint);
		void OnHoldActionCancelled__DelegateSignature();
		void OnActionConfirmed__DelegateSignature();
		void OnHoldActionStarted__DelegateSignature();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
