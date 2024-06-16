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
	 * 		Name   -> Function WBP_Sheik_ScreenLogin.WBP_Sheik_ScreenLogin_C.ShouldShowDevLogin
	 * 		Flags  -> ()
	 */
	bool UWBP_Sheik_ScreenLogin_C::ShouldShowDevLogin()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_ScreenLogin.WBP_Sheik_ScreenLogin_C.ShouldShowDevLogin");
		
		UWBP_Sheik_ScreenLogin_C_ShouldShowDevLogin_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_ScreenLogin.WBP_Sheik_ScreenLogin_C.GetAccountsManager
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class USheikPlayerAccountsManager*                 AccountsManager                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_ScreenLogin_C::GetAccountsManager(class USheikPlayerAccountsManager** AccountsManager)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_ScreenLogin.WBP_Sheik_ScreenLogin_C.GetAccountsManager");
		
		UWBP_Sheik_ScreenLogin_C_GetAccountsManager_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AccountsManager != nullptr)
			*AccountsManager = params.AccountsManager;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_ScreenLogin.WBP_Sheik_ScreenLogin_C.GetLoginManager
	 * 		Flags  -> ()
	 */
	class USheikLoginManager* UWBP_Sheik_ScreenLogin_C::GetLoginManager()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_ScreenLogin.WBP_Sheik_ScreenLogin_C.GetLoginManager");
		
		UWBP_Sheik_ScreenLogin_C_GetLoginManager_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_ScreenLogin.WBP_Sheik_ScreenLogin_C.OnLogin
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            LocalUserNum                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bWasSuccessful                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bCancelled                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FSheikError                                 Error                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	 */
	void UWBP_Sheik_ScreenLogin_C::OnLogin(int32_t LocalUserNum, bool bWasSuccessful, bool bCancelled, const struct FSheikError& Error)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_ScreenLogin.WBP_Sheik_ScreenLogin_C.OnLogin");
		
		UWBP_Sheik_ScreenLogin_C_OnLogin_Params params {};
		params.LocalUserNum = LocalUserNum;
		params.bWasSuccessful = bWasSuccessful;
		params.bCancelled = bCancelled;
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_ScreenLogin.WBP_Sheik_ScreenLogin_C.StartLogin
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_ScreenLogin_C::StartLogin()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_ScreenLogin.WBP_Sheik_ScreenLogin_C.StartLogin");
		
		UWBP_Sheik_ScreenLogin_C_StartLogin_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_ScreenLogin.WBP_Sheik_ScreenLogin_C.Construct
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_ScreenLogin_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_ScreenLogin.WBP_Sheik_ScreenLogin_C.Construct");
		
		UWBP_Sheik_ScreenLogin_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_ScreenLogin.WBP_Sheik_ScreenLogin_C.StartDevLogin
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_ScreenLogin_C::StartDevLogin()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_ScreenLogin.WBP_Sheik_ScreenLogin_C.StartDevLogin");
		
		UWBP_Sheik_ScreenLogin_C_StartDevLogin_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_ScreenLogin.WBP_Sheik_ScreenLogin_C.OnDevLoginInputFinished
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FInputEventData                             InputEventData                                             (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UWBP_Sheik_ScreenLogin_C::OnDevLoginInputFinished(const struct FInputEventData& InputEventData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_ScreenLogin.WBP_Sheik_ScreenLogin_C.OnDevLoginInputFinished");
		
		UWBP_Sheik_ScreenLogin_C_OnDevLoginInputFinished_Params params {};
		params.InputEventData = InputEventData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_ScreenLogin.WBP_Sheik_ScreenLogin_C.OnDevLoginInputSkipped
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FInputEventData                             InputEventData                                             (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UWBP_Sheik_ScreenLogin_C::OnDevLoginInputSkipped(const struct FInputEventData& InputEventData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_ScreenLogin.WBP_Sheik_ScreenLogin_C.OnDevLoginInputSkipped");
		
		UWBP_Sheik_ScreenLogin_C_OnDevLoginInputSkipped_Params params {};
		params.InputEventData = InputEventData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_ScreenLogin.WBP_Sheik_ScreenLogin_C.OnDevLoginComplete
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_ScreenLogin_C::OnDevLoginComplete()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_ScreenLogin.WBP_Sheik_ScreenLogin_C.OnDevLoginComplete");
		
		UWBP_Sheik_ScreenLogin_C_OnDevLoginComplete_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_ScreenLogin.WBP_Sheik_ScreenLogin_C.On Platform Login UI Closed
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            LocalUserNum                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bWasSuccessful                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bDidSignIn                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_Sheik_ScreenLogin_C::OnPlatformLoginUIClosed(int32_t LocalUserNum, bool bWasSuccessful, bool bDidSignIn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_ScreenLogin.WBP_Sheik_ScreenLogin_C.On Platform Login UI Closed");
		
		UWBP_Sheik_ScreenLogin_C_OnPlatformLoginUIClosed_Params params {};
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
	 * 		Name   -> Function WBP_Sheik_ScreenLogin.WBP_Sheik_ScreenLogin_C.PromptPlatformLogin
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_ScreenLogin_C::PromptPlatformLogin()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_ScreenLogin.WBP_Sheik_ScreenLogin_C.PromptPlatformLogin");
		
		UWBP_Sheik_ScreenLogin_C_PromptPlatformLogin_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_ScreenLogin.WBP_Sheik_ScreenLogin_C.OnSelectChooseAccount
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FInputEventData                             InputEventData                                             (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UWBP_Sheik_ScreenLogin_C::OnSelectChooseAccount(const struct FInputEventData& InputEventData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_ScreenLogin.WBP_Sheik_ScreenLogin_C.OnSelectChooseAccount");
		
		UWBP_Sheik_ScreenLogin_C_OnSelectChooseAccount_Params params {};
		params.InputEventData = InputEventData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_ScreenLogin.WBP_Sheik_ScreenLogin_C.OnCancelChooseAccount
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FInputEventData                             InputEventData                                             (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UWBP_Sheik_ScreenLogin_C::OnCancelChooseAccount(const struct FInputEventData& InputEventData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_ScreenLogin.WBP_Sheik_ScreenLogin_C.OnCancelChooseAccount");
		
		UWBP_Sheik_ScreenLogin_C_OnCancelChooseAccount_Params params {};
		params.InputEventData = InputEventData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_ScreenLogin.WBP_Sheik_ScreenLogin_C.StartInitialEGSLogin
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_ScreenLogin_C::StartInitialEGSLogin()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_ScreenLogin.WBP_Sheik_ScreenLogin_C.StartInitialEGSLogin");
		
		UWBP_Sheik_ScreenLogin_C_StartInitialEGSLogin_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_ScreenLogin.WBP_Sheik_ScreenLogin_C.OnInitialEGSLogin
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            LocalUserNum                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bWasSuccessful                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bCancelled                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FSheikError                                 Error                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	 */
	void UWBP_Sheik_ScreenLogin_C::OnInitialEGSLogin(int32_t LocalUserNum, bool bWasSuccessful, bool bCancelled, const struct FSheikError& Error)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_ScreenLogin.WBP_Sheik_ScreenLogin_C.OnInitialEGSLogin");
		
		UWBP_Sheik_ScreenLogin_C_OnInitialEGSLogin_Params params {};
		params.LocalUserNum = LocalUserNum;
		params.bWasSuccessful = bWasSuccessful;
		params.bCancelled = bCancelled;
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_ScreenLogin.WBP_Sheik_ScreenLogin_C.OnConsoleLoginComplete
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_ScreenLogin_C::OnConsoleLoginComplete()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_ScreenLogin.WBP_Sheik_ScreenLogin_C.OnConsoleLoginComplete");
		
		UWBP_Sheik_ScreenLogin_C_OnConsoleLoginComplete_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_ScreenLogin.WBP_Sheik_ScreenLogin_C.ExecuteUbergraph_WBP_Sheik_ScreenLogin
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_ScreenLogin_C::ExecuteUbergraph_WBP_Sheik_ScreenLogin(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_ScreenLogin.WBP_Sheik_ScreenLogin_C.ExecuteUbergraph_WBP_Sheik_ScreenLogin");
		
		UWBP_Sheik_ScreenLogin_C_ExecuteUbergraph_WBP_Sheik_ScreenLogin_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_ScreenLogin.WBP_Sheik_ScreenLogin_C.OnDevLoginSkipped__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_ScreenLogin_C::OnDevLoginSkipped__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_ScreenLogin.WBP_Sheik_ScreenLogin_C.OnDevLoginSkipped__DelegateSignature");
		
		UWBP_Sheik_ScreenLogin_C_OnDevLoginSkipped__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_ScreenLogin.WBP_Sheik_ScreenLogin_C.OnLoginFailed__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSheikError                                 Error                                                      (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 */
	void UWBP_Sheik_ScreenLogin_C::OnLoginFailed__DelegateSignature(const struct FSheikError& Error)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_ScreenLogin.WBP_Sheik_ScreenLogin_C.OnLoginFailed__DelegateSignature");
		
		UWBP_Sheik_ScreenLogin_C_OnLoginFailed__DelegateSignature_Params params {};
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_ScreenLogin.WBP_Sheik_ScreenLogin_C.OnReturnToTitleScreen__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_ScreenLogin_C::OnReturnToTitleScreen__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_ScreenLogin.WBP_Sheik_ScreenLogin_C.OnReturnToTitleScreen__DelegateSignature");
		
		UWBP_Sheik_ScreenLogin_C_OnReturnToTitleScreen__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_ScreenLogin.WBP_Sheik_ScreenLogin_C.OnInitialEGSLoginCompleted__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Succeeded                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FSheikError                                 Error                                                      (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 */
	void UWBP_Sheik_ScreenLogin_C::OnInitialEGSLoginCompleted__DelegateSignature(bool Succeeded, const struct FSheikError& Error)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_ScreenLogin.WBP_Sheik_ScreenLogin_C.OnInitialEGSLoginCompleted__DelegateSignature");
		
		UWBP_Sheik_ScreenLogin_C_OnInitialEGSLoginCompleted__DelegateSignature_Params params {};
		params.Succeeded = Succeeded;
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_ScreenLogin.WBP_Sheik_ScreenLogin_C.OnPlatformLoginPromptCancelled__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_ScreenLogin_C::OnPlatformLoginPromptCancelled__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_ScreenLogin.WBP_Sheik_ScreenLogin_C.OnPlatformLoginPromptCancelled__DelegateSignature");
		
		UWBP_Sheik_ScreenLogin_C_OnPlatformLoginPromptCancelled__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_ScreenLogin.WBP_Sheik_ScreenLogin_C.OnLoginSucceeded__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_ScreenLogin_C::OnLoginSucceeded__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_ScreenLogin.WBP_Sheik_ScreenLogin_C.OnLoginSucceeded__DelegateSignature");
		
		UWBP_Sheik_ScreenLogin_C_OnLoginSucceeded__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWBP_Sheik_ScreenLogin_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWBP_Sheik_ScreenLogin_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_Sheik_ScreenLogin.WBP_Sheik_ScreenLogin_C");
		return ptr;
	}

}


