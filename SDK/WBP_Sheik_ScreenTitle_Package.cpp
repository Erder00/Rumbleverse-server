/**
 * Name: Rumbleverse
 * Version: Latest
 */

#include "pch.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_ScreenTitle.WBP_Sheik_ScreenTitle_C.SequenceEvent__ENTRYPOINTWBP_Sheik_ScreenTitle_1
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_ScreenTitle_C::SequenceEvent__ENTRYPOINTWBP_Sheik_ScreenTitle_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_ScreenTitle.WBP_Sheik_ScreenTitle_C.SequenceEvent__ENTRYPOINTWBP_Sheik_ScreenTitle_1");
		
		UWBP_Sheik_ScreenTitle_C_SequenceEvent__ENTRYPOINTWBP_Sheik_ScreenTitle_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_ScreenTitle.WBP_Sheik_ScreenTitle_C.Open Quit Confirmation Popup
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FScriptDelegate                              ConfirmedPressedCallback                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor)
	 * 		class FScriptDelegate                              CanceledPressedCallback                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor)
	 */
	void UWBP_Sheik_ScreenTitle_C::OpenQuitConfirmationPopup(const class FScriptDelegate& ConfirmedPressedCallback, const class FScriptDelegate& CanceledPressedCallback)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_ScreenTitle.WBP_Sheik_ScreenTitle_C.Open Quit Confirmation Popup");
		
		UWBP_Sheik_ScreenTitle_C_OpenQuitConfirmationPopup_Params params {};
		params.ConfirmedPressedCallback = ConfirmedPressedCallback;
		params.CanceledPressedCallback = CanceledPressedCallback;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_ScreenTitle.WBP_Sheik_ScreenTitle_C.OnBetaPopUpConfirmPressed_cb
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            PopupId                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FName                                        BindingName                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_ScreenTitle_C::OnBetaPopUpConfirmPressed_cb(int32_t PopupId, const class FName& BindingName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_ScreenTitle.WBP_Sheik_ScreenTitle_C.OnBetaPopUpConfirmPressed_cb");
		
		UWBP_Sheik_ScreenTitle_C_OnBetaPopUpConfirmPressed_cb_Params params {};
		params.PopupId = PopupId;
		params.BindingName = BindingName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_ScreenTitle.WBP_Sheik_ScreenTitle_C.ShowBetaPopUp
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_ScreenTitle_C::ShowBetaPopUp()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_ScreenTitle.WBP_Sheik_ScreenTitle_C.ShowBetaPopUp");
		
		UWBP_Sheik_ScreenTitle_C_ShowBetaPopUp_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_ScreenTitle.WBP_Sheik_ScreenTitle_C.GetAccountsManager
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class USheikPlayerAccountsManager*                 AccountsManager                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_ScreenTitle_C::GetAccountsManager(class USheikPlayerAccountsManager** AccountsManager)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_ScreenTitle.WBP_Sheik_ScreenTitle_C.GetAccountsManager");
		
		UWBP_Sheik_ScreenTitle_C_GetAccountsManager_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AccountsManager != nullptr)
			*AccountsManager = params.AccountsManager;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_ScreenTitle.WBP_Sheik_ScreenTitle_C.ShowCozmoQueueLeavePopup
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_ScreenTitle_C::ShowCozmoQueueLeavePopup()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_ScreenTitle.WBP_Sheik_ScreenTitle_C.ShowCozmoQueueLeavePopup");
		
		UWBP_Sheik_ScreenTitle_C_ShowCozmoQueueLeavePopup_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_ScreenTitle.WBP_Sheik_ScreenTitle_C.UpdateCozmoQueuePopup
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            TicketId                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            ServingNumber                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_ScreenTitle_C::UpdateCozmoQueuePopup(int32_t TicketId, int32_t ServingNumber)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_ScreenTitle.WBP_Sheik_ScreenTitle_C.UpdateCozmoQueuePopup");
		
		UWBP_Sheik_ScreenTitle_C_UpdateCozmoQueuePopup_Params params {};
		params.TicketId = TicketId;
		params.ServingNumber = ServingNumber;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_ScreenTitle.WBP_Sheik_ScreenTitle_C.GetPartyManager
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class USheikPartyManager*                          PartyManager                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_ScreenTitle_C::GetPartyManager(class USheikPartyManager** PartyManager)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_ScreenTitle.WBP_Sheik_ScreenTitle_C.GetPartyManager");
		
		UWBP_Sheik_ScreenTitle_C_GetPartyManager_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (PartyManager != nullptr)
			*PartyManager = params.PartyManager;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_ScreenTitle.WBP_Sheik_ScreenTitle_C.GetHotfixSystem
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class USheikHotfixSystem*                          HotfixSystem                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_ScreenTitle_C::GetHotfixSystem(class USheikHotfixSystem** HotfixSystem)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_ScreenTitle.WBP_Sheik_ScreenTitle_C.GetHotfixSystem");
		
		UWBP_Sheik_ScreenTitle_C_GetHotfixSystem_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (HotfixSystem != nullptr)
			*HotfixSystem = params.HotfixSystem;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_ScreenTitle.WBP_Sheik_ScreenTitle_C.OnAcceptedPlatformInviteBypassStartupScreen
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_ScreenTitle_C::OnAcceptedPlatformInviteBypassStartupScreen()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_ScreenTitle.WBP_Sheik_ScreenTitle_C.OnAcceptedPlatformInviteBypassStartupScreen");
		
		UWBP_Sheik_ScreenTitle_C_OnAcceptedPlatformInviteBypassStartupScreen_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_ScreenTitle.WBP_Sheik_ScreenTitle_C.GetLoginManager
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class USheikLoginManager*                          LoginManager                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_ScreenTitle_C::GetLoginManager(class USheikLoginManager** LoginManager)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_ScreenTitle.WBP_Sheik_ScreenTitle_C.GetLoginManager");
		
		UWBP_Sheik_ScreenTitle_C_GetLoginManager_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (LoginManager != nullptr)
			*LoginManager = params.LoginManager;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_ScreenTitle.WBP_Sheik_ScreenTitle_C.HandleError
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSheikError                                 Error                                                      (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 * 		class FScriptDelegate                              DevIgnoreCallback                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor)
	 */
	void UWBP_Sheik_ScreenTitle_C::HandleError(const struct FSheikError& Error, const class FScriptDelegate& DevIgnoreCallback)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_ScreenTitle.WBP_Sheik_ScreenTitle_C.HandleError");
		
		UWBP_Sheik_ScreenTitle_C_HandleError_Params params {};
		params.Error = Error;
		params.DevIgnoreCallback = DevIgnoreCallback;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_ScreenTitle.WBP_Sheik_ScreenTitle_C.GetErrorManager
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class USheikErrorManager*                          ErrorManager                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_ScreenTitle_C::GetErrorManager(class USheikErrorManager** ErrorManager)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_ScreenTitle.WBP_Sheik_ScreenTitle_C.GetErrorManager");
		
		UWBP_Sheik_ScreenTitle_C_GetErrorManager_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ErrorManager != nullptr)
			*ErrorManager = params.ErrorManager;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_ScreenTitle.WBP_Sheik_ScreenTitle_C.HandleErrorFromGame
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_ScreenTitle_C::HandleErrorFromGame()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_ScreenTitle.WBP_Sheik_ScreenTitle_C.HandleErrorFromGame");
		
		UWBP_Sheik_ScreenTitle_C_HandleErrorFromGame_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_ScreenTitle.WBP_Sheik_ScreenTitle_C.HandleLauncherLogin
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_ScreenTitle_C::HandleLauncherLogin()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_ScreenTitle.WBP_Sheik_ScreenTitle_C.HandleLauncherLogin");
		
		UWBP_Sheik_ScreenTitle_C_HandleLauncherLogin_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_ScreenTitle.WBP_Sheik_ScreenTitle_C.UpdateCurrentProfileText
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_ScreenTitle_C::UpdateCurrentProfileText()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_ScreenTitle.WBP_Sheik_ScreenTitle_C.UpdateCurrentProfileText");
		
		UWBP_Sheik_ScreenTitle_C_UpdateCurrentProfileText_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_ScreenTitle.WBP_Sheik_ScreenTitle_C.PopupNoCallback
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            PopupId                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FName                                        BindingName                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_ScreenTitle_C::PopupNoCallback(int32_t PopupId, const class FName& BindingName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_ScreenTitle.WBP_Sheik_ScreenTitle_C.PopupNoCallback");
		
		UWBP_Sheik_ScreenTitle_C_PopupNoCallback_Params params {};
		params.PopupId = PopupId;
		params.BindingName = BindingName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_ScreenTitle.WBP_Sheik_ScreenTitle_C.ResetFromPopupError
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            PopupId                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FName                                        BindingName                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_ScreenTitle_C::ResetFromPopupError(int32_t PopupId, const class FName& BindingName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_ScreenTitle.WBP_Sheik_ScreenTitle_C.ResetFromPopupError");
		
		UWBP_Sheik_ScreenTitle_C_ResetFromPopupError_Params params {};
		params.PopupId = PopupId;
		params.BindingName = BindingName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_ScreenTitle.WBP_Sheik_ScreenTitle_C.Reset
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_ScreenTitle_C::Reset()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_ScreenTitle.WBP_Sheik_ScreenTitle_C.Reset");
		
		UWBP_Sheik_ScreenTitle_C_Reset_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_ScreenTitle.WBP_Sheik_ScreenTitle_C.ShowErrorPopup
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        HeaderText                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		class FText                                        BodyText                                                   (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		class FText                                        ErrorCodeText                                              (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		class FScriptDelegate                              ConfirmCallback                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor)
	 * 		class FScriptDelegate                              DevIgnoreCallback                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor)
	 */
	void UWBP_Sheik_ScreenTitle_C::ShowErrorPopup(const class FText& HeaderText, const class FText& BodyText, const class FText& ErrorCodeText, const class FScriptDelegate& ConfirmCallback, const class FScriptDelegate& DevIgnoreCallback)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_ScreenTitle.WBP_Sheik_ScreenTitle_C.ShowErrorPopup");
		
		UWBP_Sheik_ScreenTitle_C_ShowErrorPopup_Params params {};
		params.HeaderText = HeaderText;
		params.BodyText = BodyText;
		params.ErrorCodeText = ErrorCodeText;
		params.ConfirmCallback = ConfirmCallback;
		params.DevIgnoreCallback = DevIgnoreCallback;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_ScreenTitle.WBP_Sheik_ScreenTitle_C.SetDevStatus
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      String                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_ScreenTitle_C::SetDevStatus(const class FString& String)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_ScreenTitle.WBP_Sheik_ScreenTitle_C.SetDevStatus");
		
		UWBP_Sheik_ScreenTitle_C_SetDevStatus_Params params {};
		params.String = String;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_ScreenTitle.WBP_Sheik_ScreenTitle_C.InitDevStatus
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_ScreenTitle_C::InitDevStatus()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_ScreenTitle.WBP_Sheik_ScreenTitle_C.InitDevStatus");
		
		UWBP_Sheik_ScreenTitle_C_InitDevStatus_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_ScreenTitle.WBP_Sheik_ScreenTitle_C.GetTitleStorage
	 * 		Flags  -> ()
	 */
	class USheikUITitleStorageInterface* UWBP_Sheik_ScreenTitle_C::GetTitleStorage()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_ScreenTitle.WBP_Sheik_ScreenTitle_C.GetTitleStorage");
		
		UWBP_Sheik_ScreenTitle_C_GetTitleStorage_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_ScreenTitle.WBP_Sheik_ScreenTitle_C.GetPopupSystem
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UWBP_SheikPopupSystem_C*                     PopupSystemWidget                                          (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_ScreenTitle_C::GetPopupSystem(class UWBP_SheikPopupSystem_C** PopupSystemWidget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_ScreenTitle.WBP_Sheik_ScreenTitle_C.GetPopupSystem");
		
		UWBP_Sheik_ScreenTitle_C_GetPopupSystem_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (PopupSystemWidget != nullptr)
			*PopupSystemWidget = params.PopupSystemWidget;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_ScreenTitle.WBP_Sheik_ScreenTitle_C.InputAvailableEvent
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_ScreenTitle_C::InputAvailableEvent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_ScreenTitle.WBP_Sheik_ScreenTitle_C.InputAvailableEvent");
		
		UWBP_Sheik_ScreenTitle_C_InputAvailableEvent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_ScreenTitle.WBP_Sheik_ScreenTitle_C.AnyKeyPressed_cb
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FInputEventData                             InputEventData                                             (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UWBP_Sheik_ScreenTitle_C::AnyKeyPressed_cb(const struct FInputEventData& InputEventData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_ScreenTitle.WBP_Sheik_ScreenTitle_C.AnyKeyPressed_cb");
		
		UWBP_Sheik_ScreenTitle_C_AnyKeyPressed_cb_Params params {};
		params.InputEventData = InputEventData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_ScreenTitle.WBP_Sheik_ScreenTitle_C.OnFailure_A2F21B574BAC9520290B9CBB098556AF
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESheikUserPrivilegeResult                          PrivilegeResult                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_ScreenTitle_C::OnFailure_A2F21B574BAC9520290B9CBB098556AF(ESheikUserPrivilegeResult PrivilegeResult)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_ScreenTitle.WBP_Sheik_ScreenTitle_C.OnFailure_A2F21B574BAC9520290B9CBB098556AF");
		
		UWBP_Sheik_ScreenTitle_C_OnFailure_A2F21B574BAC9520290B9CBB098556AF_Params params {};
		params.PrivilegeResult = PrivilegeResult;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_ScreenTitle.WBP_Sheik_ScreenTitle_C.OnSuccess_A2F21B574BAC9520290B9CBB098556AF
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESheikUserPrivilegeResult                          PrivilegeResult                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_ScreenTitle_C::OnSuccess_A2F21B574BAC9520290B9CBB098556AF(ESheikUserPrivilegeResult PrivilegeResult)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_ScreenTitle.WBP_Sheik_ScreenTitle_C.OnSuccess_A2F21B574BAC9520290B9CBB098556AF");
		
		UWBP_Sheik_ScreenTitle_C_OnSuccess_A2F21B574BAC9520290B9CBB098556AF_Params params {};
		params.PrivilegeResult = PrivilegeResult;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_ScreenTitle.WBP_Sheik_ScreenTitle_C.OnFailure_6BB2071743236EAE5F04D381E65C824E
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESheikUserPrivilegeResult                          PrivilegeResult                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_ScreenTitle_C::OnFailure_6BB2071743236EAE5F04D381E65C824E(ESheikUserPrivilegeResult PrivilegeResult)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_ScreenTitle.WBP_Sheik_ScreenTitle_C.OnFailure_6BB2071743236EAE5F04D381E65C824E");
		
		UWBP_Sheik_ScreenTitle_C_OnFailure_6BB2071743236EAE5F04D381E65C824E_Params params {};
		params.PrivilegeResult = PrivilegeResult;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_ScreenTitle.WBP_Sheik_ScreenTitle_C.OnSuccess_6BB2071743236EAE5F04D381E65C824E
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESheikUserPrivilegeResult                          PrivilegeResult                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_ScreenTitle_C::OnSuccess_6BB2071743236EAE5F04D381E65C824E(ESheikUserPrivilegeResult PrivilegeResult)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_ScreenTitle.WBP_Sheik_ScreenTitle_C.OnSuccess_6BB2071743236EAE5F04D381E65C824E");
		
		UWBP_Sheik_ScreenTitle_C_OnSuccess_6BB2071743236EAE5F04D381E65C824E_Params params {};
		params.PrivilegeResult = PrivilegeResult;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_ScreenTitle.WBP_Sheik_ScreenTitle_C.OnFailure_60598D594003E823A85BD49F57601DE7
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESheikUserPrivilegeResult                          PrivilegeResult                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_ScreenTitle_C::OnFailure_60598D594003E823A85BD49F57601DE7(ESheikUserPrivilegeResult PrivilegeResult)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_ScreenTitle.WBP_Sheik_ScreenTitle_C.OnFailure_60598D594003E823A85BD49F57601DE7");
		
		UWBP_Sheik_ScreenTitle_C_OnFailure_60598D594003E823A85BD49F57601DE7_Params params {};
		params.PrivilegeResult = PrivilegeResult;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_ScreenTitle.WBP_Sheik_ScreenTitle_C.OnSuccess_60598D594003E823A85BD49F57601DE7
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESheikUserPrivilegeResult                          PrivilegeResult                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_ScreenTitle_C::OnSuccess_60598D594003E823A85BD49F57601DE7(ESheikUserPrivilegeResult PrivilegeResult)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_ScreenTitle.WBP_Sheik_ScreenTitle_C.OnSuccess_60598D594003E823A85BD49F57601DE7");
		
		UWBP_Sheik_ScreenTitle_C_OnSuccess_60598D594003E823A85BD49F57601DE7_Params params {};
		params.PrivilegeResult = PrivilegeResult;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_ScreenTitle.WBP_Sheik_ScreenTitle_C.OnFailure_7017BC1C4999BB9F6FCE49AB89EA0527
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESheikUserPrivilegeResult                          PrivilegeResult                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_ScreenTitle_C::OnFailure_7017BC1C4999BB9F6FCE49AB89EA0527(ESheikUserPrivilegeResult PrivilegeResult)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_ScreenTitle.WBP_Sheik_ScreenTitle_C.OnFailure_7017BC1C4999BB9F6FCE49AB89EA0527");
		
		UWBP_Sheik_ScreenTitle_C_OnFailure_7017BC1C4999BB9F6FCE49AB89EA0527_Params params {};
		params.PrivilegeResult = PrivilegeResult;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_ScreenTitle.WBP_Sheik_ScreenTitle_C.OnSuccess_7017BC1C4999BB9F6FCE49AB89EA0527
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESheikUserPrivilegeResult                          PrivilegeResult                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_ScreenTitle_C::OnSuccess_7017BC1C4999BB9F6FCE49AB89EA0527(ESheikUserPrivilegeResult PrivilegeResult)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_ScreenTitle.WBP_Sheik_ScreenTitle_C.OnSuccess_7017BC1C4999BB9F6FCE49AB89EA0527");
		
		UWBP_Sheik_ScreenTitle_C_OnSuccess_7017BC1C4999BB9F6FCE49AB89EA0527_Params params {};
		params.PrivilegeResult = PrivilegeResult;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_ScreenTitle.WBP_Sheik_ScreenTitle_C.OnFailure_795CAF384CC39E6115B7AA82A60E9FC7
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESheikUserPrivilegeResult                          PrivilegeResult                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_ScreenTitle_C::OnFailure_795CAF384CC39E6115B7AA82A60E9FC7(ESheikUserPrivilegeResult PrivilegeResult)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_ScreenTitle.WBP_Sheik_ScreenTitle_C.OnFailure_795CAF384CC39E6115B7AA82A60E9FC7");
		
		UWBP_Sheik_ScreenTitle_C_OnFailure_795CAF384CC39E6115B7AA82A60E9FC7_Params params {};
		params.PrivilegeResult = PrivilegeResult;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_ScreenTitle.WBP_Sheik_ScreenTitle_C.OnSuccess_795CAF384CC39E6115B7AA82A60E9FC7
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESheikUserPrivilegeResult                          PrivilegeResult                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_ScreenTitle_C::OnSuccess_795CAF384CC39E6115B7AA82A60E9FC7(ESheikUserPrivilegeResult PrivilegeResult)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_ScreenTitle.WBP_Sheik_ScreenTitle_C.OnSuccess_795CAF384CC39E6115B7AA82A60E9FC7");
		
		UWBP_Sheik_ScreenTitle_C_OnSuccess_795CAF384CC39E6115B7AA82A60E9FC7_Params params {};
		params.PrivilegeResult = PrivilegeResult;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_ScreenTitle.WBP_Sheik_ScreenTitle_C.OnCozmoLoginComplete
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            LocalUserNum                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bWasSuccessful                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FSheikError                                 Error                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	 * 		ESheikLoginResultType                              OutType                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_ScreenTitle_C::OnCozmoLoginComplete(int32_t LocalUserNum, bool bWasSuccessful, const struct FSheikError& Error, ESheikLoginResultType OutType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_ScreenTitle.WBP_Sheik_ScreenTitle_C.OnCozmoLoginComplete");
		
		UWBP_Sheik_ScreenTitle_C_OnCozmoLoginComplete_Params params {};
		params.LocalUserNum = LocalUserNum;
		params.bWasSuccessful = bWasSuccessful;
		params.Error = Error;
		params.OutType = OutType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_ScreenTitle.WBP_Sheik_ScreenTitle_C.OnCozmoBanInfoRequestComplete
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bWasSuccessful                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class FText                                        BanText                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		struct FSheikError                                 Error                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	 */
	void UWBP_Sheik_ScreenTitle_C::OnCozmoBanInfoRequestComplete(bool bWasSuccessful, const class FText& BanText, const struct FSheikError& Error)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_ScreenTitle.WBP_Sheik_ScreenTitle_C.OnCozmoBanInfoRequestComplete");
		
		UWBP_Sheik_ScreenTitle_C_OnCozmoBanInfoRequestComplete_Params params {};
		params.bWasSuccessful = bWasSuccessful;
		params.BanText = BanText;
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_ScreenTitle.WBP_Sheik_ScreenTitle_C.OnUpdateQueueIntoCozmo
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            TicketId                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            ServingNumber                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_ScreenTitle_C::OnUpdateQueueIntoCozmo(int32_t TicketId, int32_t ServingNumber)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_ScreenTitle.WBP_Sheik_ScreenTitle_C.OnUpdateQueueIntoCozmo");
		
		UWBP_Sheik_ScreenTitle_C_OnUpdateQueueIntoCozmo_Params params {};
		params.TicketId = TicketId;
		params.ServingNumber = ServingNumber;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_ScreenTitle.WBP_Sheik_ScreenTitle_C.OnCompleteQueueIntoCozmo
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bWasSuccessful                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FSheikError                                 Error                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	 */
	void UWBP_Sheik_ScreenTitle_C::OnCompleteQueueIntoCozmo(bool bWasSuccessful, const struct FSheikError& Error)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_ScreenTitle.WBP_Sheik_ScreenTitle_C.OnCompleteQueueIntoCozmo");
		
		UWBP_Sheik_ScreenTitle_C_OnCompleteQueueIntoCozmo_Params params {};
		params.bWasSuccessful = bWasSuccessful;
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_ScreenTitle.WBP_Sheik_ScreenTitle_C.QueueIntoCozmo
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_ScreenTitle_C::QueueIntoCozmo()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_ScreenTitle.WBP_Sheik_ScreenTitle_C.QueueIntoCozmo");
		
		UWBP_Sheik_ScreenTitle_C_QueueIntoCozmo_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_ScreenTitle.WBP_Sheik_ScreenTitle_C.LoginIntoCozmo
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_ScreenTitle_C::LoginIntoCozmo()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_ScreenTitle.WBP_Sheik_ScreenTitle_C.LoginIntoCozmo");
		
		UWBP_Sheik_ScreenTitle_C_LoginIntoCozmo_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_ScreenTitle.WBP_Sheik_ScreenTitle_C.OnIgnoreQueueIntoCozmoError
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            PopupId                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FName                                        BindingName                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_ScreenTitle_C::OnIgnoreQueueIntoCozmoError(int32_t PopupId, const class FName& BindingName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_ScreenTitle.WBP_Sheik_ScreenTitle_C.OnIgnoreQueueIntoCozmoError");
		
		UWBP_Sheik_ScreenTitle_C_OnIgnoreQueueIntoCozmoError_Params params {};
		params.PopupId = PopupId;
		params.BindingName = BindingName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_ScreenTitle.WBP_Sheik_ScreenTitle_C.OnLeaveQueueSelected
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            PopupId                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FName                                        BindingName                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_ScreenTitle_C::OnLeaveQueueSelected(int32_t PopupId, const class FName& BindingName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_ScreenTitle.WBP_Sheik_ScreenTitle_C.OnLeaveQueueSelected");
		
		UWBP_Sheik_ScreenTitle_C_OnLeaveQueueSelected_Params params {};
		params.PopupId = PopupId;
		params.BindingName = BindingName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_ScreenTitle.WBP_Sheik_ScreenTitle_C.OnCancelLeaveQueueSelected
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            PopupId                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FName                                        BindingName                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_ScreenTitle_C::OnCancelLeaveQueueSelected(int32_t PopupId, const class FName& BindingName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_ScreenTitle.WBP_Sheik_ScreenTitle_C.OnCancelLeaveQueueSelected");
		
		UWBP_Sheik_ScreenTitle_C_OnCancelLeaveQueueSelected_Params params {};
		params.PopupId = PopupId;
		params.BindingName = BindingName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_ScreenTitle.WBP_Sheik_ScreenTitle_C.OnConfirmLeaveQueueSelected
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            PopupId                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FName                                        BindingName                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_ScreenTitle_C::OnConfirmLeaveQueueSelected(int32_t PopupId, const class FName& BindingName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_ScreenTitle.WBP_Sheik_ScreenTitle_C.OnConfirmLeaveQueueSelected");
		
		UWBP_Sheik_ScreenTitle_C_OnConfirmLeaveQueueSelected_Params params {};
		params.PopupId = PopupId;
		params.BindingName = BindingName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_ScreenTitle.WBP_Sheik_ScreenTitle_C.StartLegalDocs
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_ScreenTitle_C::StartLegalDocs()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_ScreenTitle.WBP_Sheik_ScreenTitle_C.StartLegalDocs");
		
		UWBP_Sheik_ScreenTitle_C_StartLegalDocs_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_ScreenTitle.WBP_Sheik_ScreenTitle_C.PromptNextLegalDoc
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_ScreenTitle_C::PromptNextLegalDoc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_ScreenTitle.WBP_Sheik_ScreenTitle_C.PromptNextLegalDoc");
		
		UWBP_Sheik_ScreenTitle_C_PromptNextLegalDoc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_ScreenTitle.WBP_Sheik_ScreenTitle_C.OnTitleStorageDataRetrieved
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bSuccess                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FSheikError                                 Error                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	 */
	void UWBP_Sheik_ScreenTitle_C::OnTitleStorageDataRetrieved(bool bSuccess, const struct FSheikError& Error)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_ScreenTitle.WBP_Sheik_ScreenTitle_C.OnTitleStorageDataRetrieved");
		
		UWBP_Sheik_ScreenTitle_C_OnTitleStorageDataRetrieved_Params params {};
		params.bSuccess = bSuccess;
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_ScreenTitle.WBP_Sheik_ScreenTitle_C.OnPrivilegeErrorIgnored
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            PopupId                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FName                                        BindingName                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_ScreenTitle_C::OnPrivilegeErrorIgnored(int32_t PopupId, const class FName& BindingName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_ScreenTitle.WBP_Sheik_ScreenTitle_C.OnPrivilegeErrorIgnored");
		
		UWBP_Sheik_ScreenTitle_C_OnPrivilegeErrorIgnored_Params params {};
		params.PopupId = PopupId;
		params.BindingName = BindingName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_ScreenTitle.WBP_Sheik_ScreenTitle_C.OnWaitForLegalDocs
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_ScreenTitle_C::OnWaitForLegalDocs()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_ScreenTitle.WBP_Sheik_ScreenTitle_C.OnWaitForLegalDocs");
		
		UWBP_Sheik_ScreenTitle_C_OnWaitForLegalDocs_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_ScreenTitle.WBP_Sheik_ScreenTitle_C.ReadTitleStorageData
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_ScreenTitle_C::ReadTitleStorageData()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_ScreenTitle.WBP_Sheik_ScreenTitle_C.ReadTitleStorageData");
		
		UWBP_Sheik_ScreenTitle_C_ReadTitleStorageData_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_ScreenTitle.WBP_Sheik_ScreenTitle_C.GetLegalDocsToAccept
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_ScreenTitle_C::GetLegalDocsToAccept()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_ScreenTitle.WBP_Sheik_ScreenTitle_C.GetLegalDocsToAccept");
		
		UWBP_Sheik_ScreenTitle_C_GetLegalDocsToAccept_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_ScreenTitle.WBP_Sheik_ScreenTitle_C.OnCozmoLoginErrorIgnored
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            PopupId                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FName                                        BindingName                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_ScreenTitle_C::OnCozmoLoginErrorIgnored(int32_t PopupId, const class FName& BindingName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_ScreenTitle.WBP_Sheik_ScreenTitle_C.OnCozmoLoginErrorIgnored");
		
		UWBP_Sheik_ScreenTitle_C_OnCozmoLoginErrorIgnored_Params params {};
		params.PopupId = PopupId;
		params.BindingName = BindingName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_ScreenTitle.WBP_Sheik_ScreenTitle_C.BndEvt__LegalDocsWidget_K2Node_ComponentBoundEvent_0_OnAccept__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_ScreenTitle_C::BndEvt__LegalDocsWidget_K2Node_ComponentBoundEvent_0_OnAccept__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_ScreenTitle.WBP_Sheik_ScreenTitle_C.BndEvt__LegalDocsWidget_K2Node_ComponentBoundEvent_0_OnAccept__DelegateSignature");
		
		UWBP_Sheik_ScreenTitle_C_BndEvt__LegalDocsWidget_K2Node_ComponentBoundEvent_0_OnAccept__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_ScreenTitle.WBP_Sheik_ScreenTitle_C.BndEvt__LegalDocsWidget_K2Node_ComponentBoundEvent_1_OnDecline__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_ScreenTitle_C::BndEvt__LegalDocsWidget_K2Node_ComponentBoundEvent_1_OnDecline__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_ScreenTitle.WBP_Sheik_ScreenTitle_C.BndEvt__LegalDocsWidget_K2Node_ComponentBoundEvent_1_OnDecline__DelegateSignature");
		
		UWBP_Sheik_ScreenTitle_C_BndEvt__LegalDocsWidget_K2Node_ComponentBoundEvent_1_OnDecline__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_ScreenTitle.WBP_Sheik_ScreenTitle_C.OnAcceptLegalDocErrorIgnored
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            PopupId                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FName                                        BindingName                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_ScreenTitle_C::OnAcceptLegalDocErrorIgnored(int32_t PopupId, const class FName& BindingName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_ScreenTitle.WBP_Sheik_ScreenTitle_C.OnAcceptLegalDocErrorIgnored");
		
		UWBP_Sheik_ScreenTitle_C_OnAcceptLegalDocErrorIgnored_Params params {};
		params.PopupId = PopupId;
		params.BindingName = BindingName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_ScreenTitle.WBP_Sheik_ScreenTitle_C.OnGetLegalDocErrorIgnored
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            PopupId                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FName                                        BindingName                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_ScreenTitle_C::OnGetLegalDocErrorIgnored(int32_t PopupId, const class FName& BindingName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_ScreenTitle.WBP_Sheik_ScreenTitle_C.OnGetLegalDocErrorIgnored");
		
		UWBP_Sheik_ScreenTitle_C_OnGetLegalDocErrorIgnored_Params params {};
		params.PopupId = PopupId;
		params.BindingName = BindingName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_ScreenTitle.WBP_Sheik_ScreenTitle_C.OnGetLegalDocsToAcceptErrorIgnored
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            PopupId                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FName                                        BindingName                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_ScreenTitle_C::OnGetLegalDocsToAcceptErrorIgnored(int32_t PopupId, const class FName& BindingName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_ScreenTitle.WBP_Sheik_ScreenTitle_C.OnGetLegalDocsToAcceptErrorIgnored");
		
		UWBP_Sheik_ScreenTitle_C_OnGetLegalDocsToAcceptErrorIgnored_Params params {};
		params.PopupId = PopupId;
		params.BindingName = BindingName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_ScreenTitle.WBP_Sheik_ScreenTitle_C.SkipCozmoLogin
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_ScreenTitle_C::SkipCozmoLogin()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_ScreenTitle.WBP_Sheik_ScreenTitle_C.SkipCozmoLogin");
		
		UWBP_Sheik_ScreenTitle_C_SkipCozmoLogin_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_ScreenTitle.WBP_Sheik_ScreenTitle_C.OnTitleStorageErrorIgnored
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            PopupId                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FName                                        BindingName                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_ScreenTitle_C::OnTitleStorageErrorIgnored(int32_t PopupId, const class FName& BindingName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_ScreenTitle.WBP_Sheik_ScreenTitle_C.OnTitleStorageErrorIgnored");
		
		UWBP_Sheik_ScreenTitle_C_OnTitleStorageErrorIgnored_Params params {};
		params.PopupId = PopupId;
		params.BindingName = BindingName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_ScreenTitle.WBP_Sheik_ScreenTitle_C.OnGetRequiredLegalDocs
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bWasSuccessful                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FSheikError                                 Error                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	 * 		TArray<class FString>                              DocumentPaths                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UWBP_Sheik_ScreenTitle_C::OnGetRequiredLegalDocs(bool bWasSuccessful, const struct FSheikError& Error, TArray<class FString> DocumentPaths)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_ScreenTitle.WBP_Sheik_ScreenTitle_C.OnGetRequiredLegalDocs");
		
		UWBP_Sheik_ScreenTitle_C_OnGetRequiredLegalDocs_Params params {};
		params.bWasSuccessful = bWasSuccessful;
		params.Error = Error;
		params.DocumentPaths = DocumentPaths;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_ScreenTitle.WBP_Sheik_ScreenTitle_C.OnAcceptLegalDocument
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bWasSuccessful                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FSheikError                                 Error                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	 */
	void UWBP_Sheik_ScreenTitle_C::OnAcceptLegalDocument(bool bWasSuccessful, const struct FSheikError& Error)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_ScreenTitle.WBP_Sheik_ScreenTitle_C.OnAcceptLegalDocument");
		
		UWBP_Sheik_ScreenTitle_C_OnAcceptLegalDocument_Params params {};
		params.bWasSuccessful = bWasSuccessful;
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_ScreenTitle.WBP_Sheik_ScreenTitle_C.ConstructOnlyOnce
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_ScreenTitle_C::ConstructOnlyOnce()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_ScreenTitle.WBP_Sheik_ScreenTitle_C.ConstructOnlyOnce");
		
		UWBP_Sheik_ScreenTitle_C_ConstructOnlyOnce_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_ScreenTitle.WBP_Sheik_ScreenTitle_C.OnShowLogoAnimFinished
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_ScreenTitle_C::OnShowLogoAnimFinished()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_ScreenTitle.WBP_Sheik_ScreenTitle_C.OnShowLogoAnimFinished");
		
		UWBP_Sheik_ScreenTitle_C_OnShowLogoAnimFinished_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_ScreenTitle.WBP_Sheik_ScreenTitle_C.OnHidePressAnimFinished
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_ScreenTitle_C::OnHidePressAnimFinished()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_ScreenTitle.WBP_Sheik_ScreenTitle_C.OnHidePressAnimFinished");
		
		UWBP_Sheik_ScreenTitle_C_OnHidePressAnimFinished_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_ScreenTitle.WBP_Sheik_ScreenTitle_C.OpenFrontend
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_ScreenTitle_C::OpenFrontend()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_ScreenTitle.WBP_Sheik_ScreenTitle_C.OpenFrontend");
		
		UWBP_Sheik_ScreenTitle_C_OpenFrontend_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_ScreenTitle.WBP_Sheik_ScreenTitle_C.OnCompletedLegalDocs
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_ScreenTitle_C::OnCompletedLegalDocs()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_ScreenTitle.WBP_Sheik_ScreenTitle_C.OnCompletedLegalDocs");
		
		UWBP_Sheik_ScreenTitle_C_OnCompletedLegalDocs_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_ScreenTitle.WBP_Sheik_ScreenTitle_C.StartEOSLogin
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_ScreenTitle_C::StartEOSLogin()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_ScreenTitle.WBP_Sheik_ScreenTitle_C.StartEOSLogin");
		
		UWBP_Sheik_ScreenTitle_C_StartEOSLogin_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_ScreenTitle.WBP_Sheik_ScreenTitle_C.SkipEOSLogin
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_ScreenTitle_C::SkipEOSLogin()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_ScreenTitle.WBP_Sheik_ScreenTitle_C.SkipEOSLogin");
		
		UWBP_Sheik_ScreenTitle_C_SkipEOSLogin_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_ScreenTitle.WBP_Sheik_ScreenTitle_C.SkipLegalDocs
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_ScreenTitle_C::SkipLegalDocs()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_ScreenTitle.WBP_Sheik_ScreenTitle_C.SkipLegalDocs");
		
		UWBP_Sheik_ScreenTitle_C_SkipLegalDocs_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_ScreenTitle.WBP_Sheik_ScreenTitle_C.DoDevCozmoOnlyLogin
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_ScreenTitle_C::DoDevCozmoOnlyLogin()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_ScreenTitle.WBP_Sheik_ScreenTitle_C.DoDevCozmoOnlyLogin");
		
		UWBP_Sheik_ScreenTitle_C_DoDevCozmoOnlyLogin_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_ScreenTitle.WBP_Sheik_ScreenTitle_C.OnEOSLoginErrorIgnored
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            PopupId                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FName                                        BindingName                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_ScreenTitle_C::OnEOSLoginErrorIgnored(int32_t PopupId, const class FName& BindingName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_ScreenTitle.WBP_Sheik_ScreenTitle_C.OnEOSLoginErrorIgnored");
		
		UWBP_Sheik_ScreenTitle_C_OnEOSLoginErrorIgnored_Params params {};
		params.PopupId = PopupId;
		params.BindingName = BindingName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_ScreenTitle.WBP_Sheik_ScreenTitle_C.OnEOSLogout
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            LocalUserNum                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bWasSuccessful                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FSheikError                                 Error                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	 */
	void UWBP_Sheik_ScreenTitle_C::OnEOSLogout(int32_t LocalUserNum, bool bWasSuccessful, const struct FSheikError& Error)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_ScreenTitle.WBP_Sheik_ScreenTitle_C.OnEOSLogout");
		
		UWBP_Sheik_ScreenTitle_C_OnEOSLogout_Params params {};
		params.LocalUserNum = LocalUserNum;
		params.bWasSuccessful = bWasSuccessful;
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_ScreenTitle.WBP_Sheik_ScreenTitle_C.BndEvt__LoginScreen_K2Node_ComponentBoundEvent_3_OnPlatformLoginPromptCancelled__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_ScreenTitle_C::BndEvt__LoginScreen_K2Node_ComponentBoundEvent_3_OnPlatformLoginPromptCancelled__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_ScreenTitle.WBP_Sheik_ScreenTitle_C.BndEvt__LoginScreen_K2Node_ComponentBoundEvent_3_OnPlatformLoginPromptCancelled__DelegateSignature");
		
		UWBP_Sheik_ScreenTitle_C_BndEvt__LoginScreen_K2Node_ComponentBoundEvent_3_OnPlatformLoginPromptCancelled__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_ScreenTitle.WBP_Sheik_ScreenTitle_C.OnFaceButtonTopPressed
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FInputEventData                             InputData                                                  (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UWBP_Sheik_ScreenTitle_C::OnFaceButtonTopPressed(const struct FInputEventData& InputData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_ScreenTitle.WBP_Sheik_ScreenTitle_C.OnFaceButtonTopPressed");
		
		UWBP_Sheik_ScreenTitle_C_OnFaceButtonTopPressed_Params params {};
		params.InputData = InputData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_ScreenTitle.WBP_Sheik_ScreenTitle_C.StartCozmoLogin
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_ScreenTitle_C::StartCozmoLogin()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_ScreenTitle.WBP_Sheik_ScreenTitle_C.StartCozmoLogin");
		
		UWBP_Sheik_ScreenTitle_C_StartCozmoLogin_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_ScreenTitle.WBP_Sheik_ScreenTitle_C.OnPlatformLoginUIClosed
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            LocalUserNum                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bWasSuccessful                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bDidSignIn                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_Sheik_ScreenTitle_C::OnPlatformLoginUIClosed(int32_t LocalUserNum, bool bWasSuccessful, bool bDidSignIn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_ScreenTitle.WBP_Sheik_ScreenTitle_C.OnPlatformLoginUIClosed");
		
		UWBP_Sheik_ScreenTitle_C_OnPlatformLoginUIClosed_Params params {};
		params.LocalUserNum = LocalUserNum;
		params.bWasSuccessful = bWasSuccessful;
		params.bDidSignIn = bDidSignIn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_ScreenTitle.WBP_Sheik_ScreenTitle_C.BndEvt__LoginScreen_K2Node_ComponentBoundEvent_1_OnInitialEGSLoginCompleted__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Succeeded                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FSheikError                                 Error                                                      (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 */
	void UWBP_Sheik_ScreenTitle_C::BndEvt__LoginScreen_K2Node_ComponentBoundEvent_1_OnInitialEGSLoginCompleted__DelegateSignature(bool Succeeded, const struct FSheikError& Error)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_ScreenTitle.WBP_Sheik_ScreenTitle_C.BndEvt__LoginScreen_K2Node_ComponentBoundEvent_1_OnInitialEGSLoginCompleted__DelegateSignature");
		
		UWBP_Sheik_ScreenTitle_C_BndEvt__LoginScreen_K2Node_ComponentBoundEvent_1_OnInitialEGSLoginCompleted__DelegateSignature_Params params {};
		params.Succeeded = Succeeded;
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_ScreenTitle.WBP_Sheik_ScreenTitle_C.OnInitialEGSLoginErrorIgnored
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            PopupId                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FName                                        BindingName                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_ScreenTitle_C::OnInitialEGSLoginErrorIgnored(int32_t PopupId, const class FName& BindingName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_ScreenTitle.WBP_Sheik_ScreenTitle_C.OnInitialEGSLoginErrorIgnored");
		
		UWBP_Sheik_ScreenTitle_C_OnInitialEGSLoginErrorIgnored_Params params {};
		params.PopupId = PopupId;
		params.BindingName = BindingName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_ScreenTitle.WBP_Sheik_ScreenTitle_C.OnPlatformActiveUserChanged
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_ScreenTitle_C::OnPlatformActiveUserChanged()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_ScreenTitle.WBP_Sheik_ScreenTitle_C.OnPlatformActiveUserChanged");
		
		UWBP_Sheik_ScreenTitle_C_OnPlatformActiveUserChanged_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_ScreenTitle.WBP_Sheik_ScreenTitle_C.OnInitialized
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_ScreenTitle_C::OnInitialized()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_ScreenTitle.WBP_Sheik_ScreenTitle_C.OnInitialized");
		
		UWBP_Sheik_ScreenTitle_C_OnInitialized_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_ScreenTitle.WBP_Sheik_ScreenTitle_C.HandleReturnToTitleScreen
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_ScreenTitle_C::HandleReturnToTitleScreen()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_ScreenTitle.WBP_Sheik_ScreenTitle_C.HandleReturnToTitleScreen");
		
		UWBP_Sheik_ScreenTitle_C_HandleReturnToTitleScreen_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_ScreenTitle.WBP_Sheik_ScreenTitle_C.BndEvt__LoginScreen_K2Node_ComponentBoundEvent_2_OnLoginSucceeded__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_ScreenTitle_C::BndEvt__LoginScreen_K2Node_ComponentBoundEvent_2_OnLoginSucceeded__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_ScreenTitle.WBP_Sheik_ScreenTitle_C.BndEvt__LoginScreen_K2Node_ComponentBoundEvent_2_OnLoginSucceeded__DelegateSignature");
		
		UWBP_Sheik_ScreenTitle_C_BndEvt__LoginScreen_K2Node_ComponentBoundEvent_2_OnLoginSucceeded__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_ScreenTitle.WBP_Sheik_ScreenTitle_C.BndEvt__LoginScreen_K2Node_ComponentBoundEvent_4_OnLoginFailed__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSheikError                                 Error                                                      (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 */
	void UWBP_Sheik_ScreenTitle_C::BndEvt__LoginScreen_K2Node_ComponentBoundEvent_4_OnLoginFailed__DelegateSignature(const struct FSheikError& Error)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_ScreenTitle.WBP_Sheik_ScreenTitle_C.BndEvt__LoginScreen_K2Node_ComponentBoundEvent_4_OnLoginFailed__DelegateSignature");
		
		UWBP_Sheik_ScreenTitle_C_BndEvt__LoginScreen_K2Node_ComponentBoundEvent_4_OnLoginFailed__DelegateSignature_Params params {};
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_ScreenTitle.WBP_Sheik_ScreenTitle_C.HandleHotfixSystemComplete
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EUpdateCompletionStatus                            UpdateStatus                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_ScreenTitle_C::HandleHotfixSystemComplete(EUpdateCompletionStatus UpdateStatus)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_ScreenTitle.WBP_Sheik_ScreenTitle_C.HandleHotfixSystemComplete");
		
		UWBP_Sheik_ScreenTitle_C_HandleHotfixSystemComplete_Params params {};
		params.UpdateStatus = UpdateStatus;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_ScreenTitle.WBP_Sheik_ScreenTitle_C.Destruct
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_ScreenTitle_C::Destruct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_ScreenTitle.WBP_Sheik_ScreenTitle_C.Destruct");
		
		UWBP_Sheik_ScreenTitle_C_Destruct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_ScreenTitle.WBP_Sheik_ScreenTitle_C.OnSplashMovieFinished
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_ScreenTitle_C::OnSplashMovieFinished()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_ScreenTitle.WBP_Sheik_ScreenTitle_C.OnSplashMovieFinished");
		
		UWBP_Sheik_ScreenTitle_C_OnSplashMovieFinished_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_ScreenTitle.WBP_Sheik_ScreenTitle_C.BndEvt__WBP_Sheik_ScreenTitle_KidsWebServices_K2Node_ComponentBoundEvent_0_OnSuccess__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_ScreenTitle_C::BndEvt__WBP_Sheik_ScreenTitle_KidsWebServices_K2Node_ComponentBoundEvent_0_OnSuccess__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_ScreenTitle.WBP_Sheik_ScreenTitle_C.BndEvt__WBP_Sheik_ScreenTitle_KidsWebServices_K2Node_ComponentBoundEvent_0_OnSuccess__DelegateSignature");
		
		UWBP_Sheik_ScreenTitle_C_BndEvt__WBP_Sheik_ScreenTitle_KidsWebServices_K2Node_ComponentBoundEvent_0_OnSuccess__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_ScreenTitle.WBP_Sheik_ScreenTitle_C.BndEvt__WBP_Sheik_ScreenTitle_KidsWebServices_K2Node_ComponentBoundEvent_5_OnFail__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_ScreenTitle_C::BndEvt__WBP_Sheik_ScreenTitle_KidsWebServices_K2Node_ComponentBoundEvent_5_OnFail__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_ScreenTitle.WBP_Sheik_ScreenTitle_C.BndEvt__WBP_Sheik_ScreenTitle_KidsWebServices_K2Node_ComponentBoundEvent_5_OnFail__DelegateSignature");
		
		UWBP_Sheik_ScreenTitle_C_BndEvt__WBP_Sheik_ScreenTitle_KidsWebServices_K2Node_ComponentBoundEvent_5_OnFail__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_ScreenTitle.WBP_Sheik_ScreenTitle_C.OnQuitPressed
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FInputEventData                             InputEventData                                             (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UWBP_Sheik_ScreenTitle_C::OnQuitPressed(const struct FInputEventData& InputEventData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_ScreenTitle.WBP_Sheik_ScreenTitle_C.OnQuitPressed");
		
		UWBP_Sheik_ScreenTitle_C_OnQuitPressed_Params params {};
		params.InputEventData = InputEventData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_ScreenTitle.WBP_Sheik_ScreenTitle_C.CancelQuit
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            PopupId                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FName                                        BindingName                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_ScreenTitle_C::CancelQuit(int32_t PopupId, const class FName& BindingName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_ScreenTitle.WBP_Sheik_ScreenTitle_C.CancelQuit");
		
		UWBP_Sheik_ScreenTitle_C_CancelQuit_Params params {};
		params.PopupId = PopupId;
		params.BindingName = BindingName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_ScreenTitle.WBP_Sheik_ScreenTitle_C.ConfirmQuit
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            PopupId                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FName                                        BindingName                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_ScreenTitle_C::ConfirmQuit(int32_t PopupId, const class FName& BindingName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_ScreenTitle.WBP_Sheik_ScreenTitle_C.ConfirmQuit");
		
		UWBP_Sheik_ScreenTitle_C_ConfirmQuit_Params params {};
		params.PopupId = PopupId;
		params.BindingName = BindingName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_ScreenTitle.WBP_Sheik_ScreenTitle_C.BndEvt__WBP_Sheik_ScreenTitle_LoginScreen_K2Node_ComponentBoundEvent_6_OnDevLoginSkipped__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_ScreenTitle_C::BndEvt__WBP_Sheik_ScreenTitle_LoginScreen_K2Node_ComponentBoundEvent_6_OnDevLoginSkipped__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_ScreenTitle.WBP_Sheik_ScreenTitle_C.BndEvt__WBP_Sheik_ScreenTitle_LoginScreen_K2Node_ComponentBoundEvent_6_OnDevLoginSkipped__DelegateSignature");
		
		UWBP_Sheik_ScreenTitle_C_BndEvt__WBP_Sheik_ScreenTitle_LoginScreen_K2Node_ComponentBoundEvent_6_OnDevLoginSkipped__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_ScreenTitle.WBP_Sheik_ScreenTitle_C.ExecuteUbergraph_WBP_Sheik_ScreenTitle
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_ScreenTitle_C::ExecuteUbergraph_WBP_Sheik_ScreenTitle(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_ScreenTitle.WBP_Sheik_ScreenTitle_C.ExecuteUbergraph_WBP_Sheik_ScreenTitle");
		
		UWBP_Sheik_ScreenTitle_C_ExecuteUbergraph_WBP_Sheik_ScreenTitle_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWBP_Sheik_ScreenTitle_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWBP_Sheik_ScreenTitle_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_Sheik_ScreenTitle.WBP_Sheik_ScreenTitle_C");
		return ptr;
	}

}


