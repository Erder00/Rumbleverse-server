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
	 * WidgetBlueprintGeneratedClass WBP_Sheik_ScreenLogin.WBP_Sheik_ScreenLogin_C
	 * Size -> 0x00A8 (FullSize[0x0528] - InheritedSize[0x0480])
	 */
	class UWBP_Sheik_ScreenLogin_C : public UIGUI_ScreenBase
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0480(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UWidgetSwitcher*                                     BodySwitcher;                                            // 0x0488(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWBP_Sheik_Login_DevStep_C*                          DevLoginWidget;                                          // 0x0490(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWBP_Sheik_Login_PlatformLoginPrompt_C*              PlatformLoginPrompt;                                     // 0x0498(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWBP_Sheik_FrontendStatusSpinner_C*                  StatusSpinner;                                           // 0x04A0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class FScriptMulticastDelegate                             OnLoginSucceeded;                                        // 0x04A8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FString                                              LoginID;                                                 // 0x04B8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash
		class FString                                              LoginToken;                                              // 0x04C8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash
		class FScriptMulticastDelegate                             OnLoginFailed;                                           // 0x04D8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             OnPlatformLoginPromptCancelled;                          // 0x04E8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             OnInitialEGSLoginCompleted;                              // 0x04F8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             OnReturnToTitleScreen;                                   // 0x0508(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             OnDevLoginSkipped;                                       // 0x0518(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable

	public:
		bool ShouldShowDevLogin();
		void GetAccountsManager(class USheikPlayerAccountsManager** AccountsManager);
		class USheikLoginManager* GetLoginManager();
		void OnLogin(int32_t LocalUserNum, bool bWasSuccessful, bool bCancelled, const struct FSheikError& Error);
		void StartLogin();
		void Construct();
		void StartDevLogin();
		void OnDevLoginInputFinished(const struct FInputEventData& InputEventData);
		void OnDevLoginInputSkipped(const struct FInputEventData& InputEventData);
		void OnDevLoginComplete();
		void OnPlatformLoginUIClosed(int32_t LocalUserNum, bool bWasSuccessful, bool bDidSignIn);
		void PromptPlatformLogin();
		void OnSelectChooseAccount(const struct FInputEventData& InputEventData);
		void OnCancelChooseAccount(const struct FInputEventData& InputEventData);
		void StartInitialEGSLogin();
		void OnInitialEGSLogin(int32_t LocalUserNum, bool bWasSuccessful, bool bCancelled, const struct FSheikError& Error);
		void OnConsoleLoginComplete();
		void ExecuteUbergraph_WBP_Sheik_ScreenLogin(int32_t EntryPoint);
		void OnDevLoginSkipped__DelegateSignature();
		void OnLoginFailed__DelegateSignature(const struct FSheikError& Error);
		void OnReturnToTitleScreen__DelegateSignature();
		void OnInitialEGSLoginCompleted__DelegateSignature(bool Succeeded, const struct FSheikError& Error);
		void OnPlatformLoginPromptCancelled__DelegateSignature();
		void OnLoginSucceeded__DelegateSignature();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
