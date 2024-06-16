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
	 * WidgetBlueprintGeneratedClass WBP_Sheik_ReportPlayerForm.WBP_Sheik_ReportPlayerForm_C
	 * Size -> 0x03B0 (FullSize[0x0868] - InheritedSize[0x04B8])
	 */
	class UWBP_Sheik_ReportPlayerForm_C : public USheikWidgetBase
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x04B8(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UWidgetAnimation*                                    InvalidReportAnim;                                       // 0x04C0(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UWBP_Sheik_ReportPlayerReason_C*                     Cheating_Report;                                         // 0x04C8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              DimBG;                                                   // 0x04D0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWBP_Sheik_ReportPlayerReason_C*                     GriefingAFK_Report;                                      // 0x04D8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWBP_Sheik_ReportPlayerReason_C*                     Harassment_Report;                                       // 0x04E0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWBP_Sheik_ReportPlayerReason_C*                     HateSpeechOffensiveLanguage_Report;                      // 0x04E8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class URichTextBlock*                                      HeaderTextBlock;                                         // 0x04F0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          InvaidReportText;                                        // 0x04F8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          PlayerNameText;                                          // 0x0500(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWBP_Sheik_ReportPlayerReason_C*                     Privacyviolation_Report;                                 // 0x0508(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWBP_Sheik_Legend_C*                                 ReportLegend;                                            // 0x0510(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWBP_Sheik_ReportPlayerReason_C*                     Teaming_Report;                                          // 0x0518(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class FString                                              PlayerId;                                                // 0x0520(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash
		struct FSheikPlayerAccount                                 ReportedPlayerAccount;                                   // 0x0530(0x02F0) Edit, BlueprintVisible, ExposeOnSpawn
		class FScriptMulticastDelegate                             BackPressed;                                             // 0x0820(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		EReportReason                                              ReportReason;                                            // 0x0830(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_FKJV[0x7];                                   // 0x0831(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              ReportedPlayerName;                                      // 0x0838(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash
		class FScriptMulticastDelegate                             ReportPlayerOpened;                                      // 0x0848(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             ReportPlayerClosed;                                      // 0x0858(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable

	public:
		void OnReportThruEOSComplete(bool bWasSuccessful, const struct FSheikError& Error);
		void CloseReportConfirmationPrompt(int32_t PopupId, const class FName& BindingName);
		void ShowReportConfirmationPrompt();
		void ClearFocusForReportReasons();
		void InvalidReport(const struct FSheikError& Error);
		void ReportSelected();
		void ResetReport();
		void BackPressed_cb(const struct FInputEventData& InputEventData);
		void ReportPressed_cb(const struct FInputEventData& InputEventData);
		void SetPlayerID(const class FString& PlayerId);
		void SetPlayerNameToReport(const class FString& ReportedPlayerName);
		void SetPlayerIdToReport(const struct FSheikPlayerAccount& ReportedPlayerId);
		void InitReportForm(const class FString& PlayerId, const struct FSheikPlayerAccount& ReportedPlayerAccount, const class FString& ReportedPlayerName);
		void GetNavigableWidgets(TArray<class UIGUI_WidgetBase*>* NavigableWidgets);
		void Test_PrintTelemetryEventData(class FString* TelemetryData);
		void OnActivated();
		void OnDeactivated();
		void BndEvt__Cheating_Report_K2Node_ComponentBoundEvent_8_UpdateReportReason__DelegateSignature();
		void BndEvt__Griefing_Report_K2Node_ComponentBoundEvent_9_UpdateReportReason__DelegateSignature();
		void BndEvt__Harassment_Report_K2Node_ComponentBoundEvent_10_UpdateReportReason__DelegateSignature();
		void BndEvt__HateSpeech_Report_K2Node_ComponentBoundEvent_11_UpdateReportReason__DelegateSignature();
		void BndEvt__OffensiveContent_Report_K2Node_ComponentBoundEvent_12_UpdateReportReason__DelegateSignature();
		void BndEvt__Privacyviolation_Report_K2Node_ComponentBoundEvent_13_UpdateReportReason__DelegateSignature();
		void ExecuteUbergraph_WBP_Sheik_ReportPlayerForm(int32_t EntryPoint);
		void ReportPlayerClosed__DelegateSignature();
		void ReportPlayerOpened__DelegateSignature();
		void BackPressed__DelegateSignature();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
