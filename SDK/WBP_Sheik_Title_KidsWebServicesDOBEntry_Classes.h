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
	 * WidgetBlueprintGeneratedClass WBP_Sheik_Title_KidsWebServicesDOBEntry.WBP_Sheik_Title_KidsWebServicesDOBEntry_C
	 * Size -> 0x005C (FullSize[0x0514] - InheritedSize[0x04B8])
	 */
	class UWBP_Sheik_Title_KidsWebServicesDOBEntry_C : public USheikWidgetBase
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x04B8(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UWidgetAnimation*                                    ActivationAnim;                                          // 0x04C0(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UWBP_Sheik_NonNavigableButton_C*                     Backbutton;                                              // 0x04C8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWBP_Sheik_ComboBox_C*                               DayCombo;                                                // 0x04D0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWBP_Sheik_ComboBox_C*                               MonthCombo;                                              // 0x04D8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWBP_Sheik_NonNavigableButton_C*                     SubmitButton;                                            // 0x04E0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWBP_Sheik_ComboBox_C*                               YearCombo;                                               // 0x04E8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class FScriptMulticastDelegate                             OnDateOfBirthCommited;                                   // 0x04F0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             OnBack;                                                  // 0x0500(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		bool                                                       MonthsPopulated;                                         // 0x0510(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       DaysPopulated;                                           // 0x0511(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       YearsPopulated;                                          // 0x0512(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       IsReentry;                                               // 0x0513(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor

	public:
		void ResetCombos();
		void GetAccountsManager(class USheikPlayerAccountsManager** AccountsManager);
		void ValidateDay();
		void UpdateButton();
		void GetSelectedDay(int32_t* Month);
		void GetSelectedMonth(int32_t* Month);
		void GetSelectedYear(int32_t* Year);
		void PopulateDays();
		void PopulateMonths();
		void PopulateYears();
		void OnActivated();
		void OnDeactivated();
		void BndEvt__WBP_Sheik_Title_KidsWebServicesDOBEntry_SubmitDOBButton_K2Node_ComponentBoundEvent_0_OnActionConfirmed__DelegateSignature();
		void BndEvt__WBP_Sheik_Title_KidsWebServicesDOBEntry_MonthCombo_K2Node_ComponentBoundEvent_8_OnComboSelectionChanged__DelegateSignature(const class FString& Selection);
		void BndEvt__WBP_Sheik_Title_KidsWebServicesDOBEntry_MonthCombo_K2Node_ComponentBoundEvent_9_OnComboOpening__DelegateSignature(class UComboBoxString* ComboBox);
		void BndEvt__WBP_Sheik_Title_KidsWebServicesDOBEntry_DayCombo_K2Node_ComponentBoundEvent_11_OnComboOpening__DelegateSignature(class UComboBoxString* ComboBox);
		void BndEvt__WBP_Sheik_Title_KidsWebServicesDOBEntry_YearCombo_K2Node_ComponentBoundEvent_13_OnComboOpening__DelegateSignature(class UComboBoxString* ComboBox);
		void BndEvt__WBP_Sheik_Title_KidsWebServicesDOBEntry_BackButton_K2Node_ComponentBoundEvent_1_OnActionConfirmed__DelegateSignature();
		void BndEvt__WBP_Sheik_Title_KidsWebServicesDOBEntry_MonthCombo_K2Node_ComponentBoundEvent_2_OnComboClosing__DelegateSignature(class UComboBoxString* ComboBox);
		void BndEvt__WBP_Sheik_Title_KidsWebServicesDOBEntry_DayCombo_K2Node_ComponentBoundEvent_3_OnComboClosing__DelegateSignature(class UComboBoxString* ComboBox);
		void BndEvt__WBP_Sheik_Title_KidsWebServicesDOBEntry_YearCombo_K2Node_ComponentBoundEvent_4_OnComboClosing__DelegateSignature(class UComboBoxString* ComboBox);
		void BndEvt__WBP_Sheik_Title_KidsWebServicesDOBEntry_YearCombo_K2Node_ComponentBoundEvent_5_OnComboSelectionChanged__DelegateSignature(const class FString& Selection);
		void ExecuteUbergraph_WBP_Sheik_Title_KidsWebServicesDOBEntry(int32_t EntryPoint);
		void OnBack__DelegateSignature();
		void OnDateOfBirthCommited__DelegateSignature(const struct FDateTime& DateOfBirth);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
