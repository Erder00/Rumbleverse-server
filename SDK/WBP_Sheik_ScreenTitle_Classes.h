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
	 * WidgetBlueprintGeneratedClass WBP_Sheik_ScreenTitle.WBP_Sheik_ScreenTitle_C
	 * Size -> 0x00EA (FullSize[0x056A] - InheritedSize[0x0480])
	 */
	class UWBP_Sheik_ScreenTitle_C : public UIGUI_ScreenBase
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0480(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UWidgetAnimation*                                    HidePressAnim;                                           // 0x0488(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UWidgetAnimation*                                    PromptLoop;                                              // 0x0490(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UWidgetAnimation*                                    ShowLogoAnim;                                            // 0x0498(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UImage*                                              BetaPopUpShadow;                                         // 0x04A0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UOverlay*                                            ChangeAccountOverlay;                                    // 0x04A8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USpacer*                                             ChangeAccountSpacer;                                     // 0x04B0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          CurrentProfileText;                                      // 0x04B8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          DevOnlyStatus;                                           // 0x04C0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWBP_Sheik_Title_KidsWebServices_C*                  KidsWebServices;                                         // 0x04C8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWBP_Sheik_FrontendLegalDocPopup_C*                  LegalDocsWidget;                                         // 0x04D0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWBP_Sheik_ScreenLogin_C*                            LoginScreen;                                             // 0x04D8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWBP_Sheik_LR_GridLegendKey_C*                       QuitButton;                                              // 0x04E0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UOverlay*                                            StartButtonOverlay;                                      // 0x04E8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          StartPrompt;                                             // 0x04F0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWBP_Sheik_FrontendStatusSpinner_C*                  StatusSpinner;                                           // 0x04F8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class FName                                                FrontendLevel;                                           // 0x0500(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<class FString>                                      LegalDocsToAccept;                                       // 0x0508(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		bool                                                       IsTitleStorageDataRetrieved;                             // 0x0518(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       AreLegalDocsToAcceptRetrieved;                           // 0x0519(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_9G17[0x6];                                   // 0x051A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              Country;                                                 // 0x0520(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash
		class FString                                              Language;                                                // 0x0530(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash
		struct FTimerHandle                                        OnWaitForLegalDocsTimer;                                 // 0x0540(0x0008) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		bool                                                       IsLoggedIntoEOS;                                         // 0x0548(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       IsDoingInitialEGSLogin;                                  // 0x0549(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       IsCozmoLoginInProgress;                                  // 0x054A(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_DUI8[0x1];                                   // 0x054B(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                TitleScreenLevel;                                        // 0x054C(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    CozmoQueuePopupId;                                       // 0x0554(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    CozmoCancelQueuePopupId;                                 // 0x0558(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       CheckedChatPermission;                                   // 0x055C(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_IPF0[0x3];                                   // 0x055D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    QueueTicketId;                                           // 0x0560(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    QueueServingNumber;                                      // 0x0564(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       BetaPopupShown;                                          // 0x0568(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       IsDemoBuild;                                             // 0x0569(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void SequenceEvent__ENTRYPOINTWBP_Sheik_ScreenTitle_1();
		void OpenQuitConfirmationPopup(const class FScriptDelegate& ConfirmedPressedCallback, const class FScriptDelegate& CanceledPressedCallback);
		void OnBetaPopUpConfirmPressed_cb(int32_t PopupId, const class FName& BindingName);
		void ShowBetaPopUp();
		void GetAccountsManager(class USheikPlayerAccountsManager** AccountsManager);
		void ShowCozmoQueueLeavePopup();
		void UpdateCozmoQueuePopup(int32_t TicketId, int32_t ServingNumber);
		void GetPartyManager(class USheikPartyManager** PartyManager);
		void GetHotfixSystem(class USheikHotfixSystem** HotfixSystem);
		void OnAcceptedPlatformInviteBypassStartupScreen();
		void GetLoginManager(class USheikLoginManager** LoginManager);
		void HandleError(const struct FSheikError& Error, const class FScriptDelegate& DevIgnoreCallback);
		void GetErrorManager(class USheikErrorManager** ErrorManager);
		void HandleErrorFromGame();
		void HandleLauncherLogin();
		void UpdateCurrentProfileText();
		void PopupNoCallback(int32_t PopupId, const class FName& BindingName);
		void ResetFromPopupError(int32_t PopupId, const class FName& BindingName);
		void Reset();
		void ShowErrorPopup(const class FText& HeaderText, const class FText& BodyText, const class FText& ErrorCodeText, const class FScriptDelegate& ConfirmCallback, const class FScriptDelegate& DevIgnoreCallback);
		void SetDevStatus(const class FString& String);
		void InitDevStatus();
		class USheikUITitleStorageInterface* GetTitleStorage();
		void GetPopupSystem(class UWBP_SheikPopupSystem_C** PopupSystemWidget);
		void InputAvailableEvent();
		void AnyKeyPressed_cb(const struct FInputEventData& InputEventData);
		void OnFailure_A2F21B574BAC9520290B9CBB098556AF(ESheikUserPrivilegeResult PrivilegeResult);
		void OnSuccess_A2F21B574BAC9520290B9CBB098556AF(ESheikUserPrivilegeResult PrivilegeResult);
		void OnFailure_6BB2071743236EAE5F04D381E65C824E(ESheikUserPrivilegeResult PrivilegeResult);
		void OnSuccess_6BB2071743236EAE5F04D381E65C824E(ESheikUserPrivilegeResult PrivilegeResult);
		void OnFailure_60598D594003E823A85BD49F57601DE7(ESheikUserPrivilegeResult PrivilegeResult);
		void OnSuccess_60598D594003E823A85BD49F57601DE7(ESheikUserPrivilegeResult PrivilegeResult);
		void OnFailure_7017BC1C4999BB9F6FCE49AB89EA0527(ESheikUserPrivilegeResult PrivilegeResult);
		void OnSuccess_7017BC1C4999BB9F6FCE49AB89EA0527(ESheikUserPrivilegeResult PrivilegeResult);
		void OnFailure_795CAF384CC39E6115B7AA82A60E9FC7(ESheikUserPrivilegeResult PrivilegeResult);
		void OnSuccess_795CAF384CC39E6115B7AA82A60E9FC7(ESheikUserPrivilegeResult PrivilegeResult);
		void OnCozmoLoginComplete(int32_t LocalUserNum, bool bWasSuccessful, const struct FSheikError& Error, ESheikLoginResultType OutType);
		void OnCozmoBanInfoRequestComplete(bool bWasSuccessful, const class FText& BanText, const struct FSheikError& Error);
		void OnUpdateQueueIntoCozmo(int32_t TicketId, int32_t ServingNumber);
		void OnCompleteQueueIntoCozmo(bool bWasSuccessful, const struct FSheikError& Error);
		void QueueIntoCozmo();
		void LoginIntoCozmo();
		void OnIgnoreQueueIntoCozmoError(int32_t PopupId, const class FName& BindingName);
		void OnLeaveQueueSelected(int32_t PopupId, const class FName& BindingName);
		void OnCancelLeaveQueueSelected(int32_t PopupId, const class FName& BindingName);
		void OnConfirmLeaveQueueSelected(int32_t PopupId, const class FName& BindingName);
		void StartLegalDocs();
		void PromptNextLegalDoc();
		void OnTitleStorageDataRetrieved(bool bSuccess, const struct FSheikError& Error);
		void OnPrivilegeErrorIgnored(int32_t PopupId, const class FName& BindingName);
		void OnWaitForLegalDocs();
		void ReadTitleStorageData();
		void GetLegalDocsToAccept();
		void OnCozmoLoginErrorIgnored(int32_t PopupId, const class FName& BindingName);
		void BndEvt__LegalDocsWidget_K2Node_ComponentBoundEvent_0_OnAccept__DelegateSignature();
		void BndEvt__LegalDocsWidget_K2Node_ComponentBoundEvent_1_OnDecline__DelegateSignature();
		void OnAcceptLegalDocErrorIgnored(int32_t PopupId, const class FName& BindingName);
		void OnGetLegalDocErrorIgnored(int32_t PopupId, const class FName& BindingName);
		void OnGetLegalDocsToAcceptErrorIgnored(int32_t PopupId, const class FName& BindingName);
		void SkipCozmoLogin();
		void OnTitleStorageErrorIgnored(int32_t PopupId, const class FName& BindingName);
		void OnGetRequiredLegalDocs(bool bWasSuccessful, const struct FSheikError& Error, TArray<class FString> DocumentPaths);
		void OnAcceptLegalDocument(bool bWasSuccessful, const struct FSheikError& Error);
		void ConstructOnlyOnce();
		void OnShowLogoAnimFinished();
		void OnHidePressAnimFinished();
		void OpenFrontend();
		void OnCompletedLegalDocs();
		void StartEOSLogin();
		void SkipEOSLogin();
		void SkipLegalDocs();
		void DoDevCozmoOnlyLogin();
		void OnEOSLoginErrorIgnored(int32_t PopupId, const class FName& BindingName);
		void OnEOSLogout(int32_t LocalUserNum, bool bWasSuccessful, const struct FSheikError& Error);
		void BndEvt__LoginScreen_K2Node_ComponentBoundEvent_3_OnPlatformLoginPromptCancelled__DelegateSignature();
		void OnFaceButtonTopPressed(const struct FInputEventData& InputData);
		void StartCozmoLogin();
		void OnPlatformLoginUIClosed(int32_t LocalUserNum, bool bWasSuccessful, bool bDidSignIn);
		void BndEvt__LoginScreen_K2Node_ComponentBoundEvent_1_OnInitialEGSLoginCompleted__DelegateSignature(bool Succeeded, const struct FSheikError& Error);
		void OnInitialEGSLoginErrorIgnored(int32_t PopupId, const class FName& BindingName);
		void OnPlatformActiveUserChanged();
		void OnInitialized();
		void HandleReturnToTitleScreen();
		void BndEvt__LoginScreen_K2Node_ComponentBoundEvent_2_OnLoginSucceeded__DelegateSignature();
		void BndEvt__LoginScreen_K2Node_ComponentBoundEvent_4_OnLoginFailed__DelegateSignature(const struct FSheikError& Error);
		void HandleHotfixSystemComplete(EUpdateCompletionStatus UpdateStatus);
		void Destruct();
		void OnSplashMovieFinished();
		void BndEvt__WBP_Sheik_ScreenTitle_KidsWebServices_K2Node_ComponentBoundEvent_0_OnSuccess__DelegateSignature();
		void BndEvt__WBP_Sheik_ScreenTitle_KidsWebServices_K2Node_ComponentBoundEvent_5_OnFail__DelegateSignature();
		void OnQuitPressed(const struct FInputEventData& InputEventData);
		void CancelQuit(int32_t PopupId, const class FName& BindingName);
		void ConfirmQuit(int32_t PopupId, const class FName& BindingName);
		void BndEvt__WBP_Sheik_ScreenTitle_LoginScreen_K2Node_ComponentBoundEvent_6_OnDevLoginSkipped__DelegateSignature();
		void ExecuteUbergraph_WBP_Sheik_ScreenTitle(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
