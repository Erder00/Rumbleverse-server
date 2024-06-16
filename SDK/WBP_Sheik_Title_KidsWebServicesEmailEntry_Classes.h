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
	 * WidgetBlueprintGeneratedClass WBP_Sheik_Title_KidsWebServicesEmailEntry.WBP_Sheik_Title_KidsWebServicesEmailEntry_C
	 * Size -> 0x0078 (FullSize[0x0530] - InheritedSize[0x04B8])
	 */
	class UWBP_Sheik_Title_KidsWebServicesEmailEntry_C : public USheikWidgetBase
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x04B8(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UWidgetAnimation*                                    ActivationAnim;                                          // 0x04C0(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UWBP_Sheik_TextBox_C*                                EmailTextBox;                                            // 0x04C8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWBP_Sheik_InputBindingIcon_C*                       EntryButtonIcon;                                         // 0x04D0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          InvalidText;                                             // 0x04D8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          ResendText;                                              // 0x04E0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              Spinner;                                                 // 0x04E8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWidgetSwitcher*                                     StatusSwitcher;                                          // 0x04F0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWBP_Sheik_NonNavigableButton_C*                     SubmitButton;                                            // 0x04F8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class FScriptMulticastDelegate                             OnFinish;                                                // 0x0500(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             OnFail;                                                  // 0x0510(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             OnEmailFail;                                             // 0x0520(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable

	public:
		void GetAccountsManager(class USheikPlayerAccountsManager** AccountsManager);
		void GetAgeGatingManager(class USheikAgeGatingManager** AgeGatingManager);
		void UpdateSubmitButton();
		void OnDeactivated();
		void BndEvt__WBP_Sheik_Title_KidsWebServicesEmailEntry_EmailTextBox_K2Node_ComponentBoundEvent_2_TextCommitted__DelegateSignature();
		void OnActivated();
		void BndEvt__WBP_Sheik_Title_KidsWebServicesEmailEntry_EmailTextBox_K2Node_ComponentBoundEvent_3_TextboxSelected__DelegateSignature();
		void BndEvt__WBP_Sheik_Title_KidsWebServicesEmailEntry_EmailTextBox_K2Node_ComponentBoundEvent_4_TextChanged__DelegateSignature();
		void OnInputSelect(const struct FInputEventData& InputEventData);
		void PreConstruct(bool IsDesignTime);
		void BndEvt__WBP_Sheik_Title_KidsWebServicesEmailEntry_SubmitButton_K2Node_ComponentBoundEvent_0_OnActionConfirmed__DelegateSignature();
		void OnCommitParentEmail(bool bSuccessful, const struct FSheikError& Error);
		void Construct();
		void ExecuteUbergraph_WBP_Sheik_Title_KidsWebServicesEmailEntry(int32_t EntryPoint);
		void OnEmailFail__DelegateSignature();
		void OnFail__DelegateSignature(const struct FSheikError& Error);
		void OnFinish__DelegateSignature();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
