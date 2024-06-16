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
	 * 		Name   -> Function WBP_Sheik_Title_KidsWebServicesPermissionWait.WBP_Sheik_Title_KidsWebServicesPermissionWait_C.GetAccountsManager
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class USheikPlayerAccountsManager*                 AccountsManager                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_Title_KidsWebServicesPermissionWait_C::GetAccountsManager(class USheikPlayerAccountsManager** AccountsManager)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Title_KidsWebServicesPermissionWait.WBP_Sheik_Title_KidsWebServicesPermissionWait_C.GetAccountsManager");
		
		UWBP_Sheik_Title_KidsWebServicesPermissionWait_C_GetAccountsManager_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AccountsManager != nullptr)
			*AccountsManager = params.AccountsManager;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Title_KidsWebServicesPermissionWait.WBP_Sheik_Title_KidsWebServicesPermissionWait_C.AreAnyPermissionsRejected
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Rejected                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_Sheik_Title_KidsWebServicesPermissionWait_C::AreAnyPermissionsRejected(bool* Rejected)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Title_KidsWebServicesPermissionWait.WBP_Sheik_Title_KidsWebServicesPermissionWait_C.AreAnyPermissionsRejected");
		
		UWBP_Sheik_Title_KidsWebServicesPermissionWait_C_AreAnyPermissionsRejected_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Rejected != nullptr)
			*Rejected = params.Rejected;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Title_KidsWebServicesPermissionWait.WBP_Sheik_Title_KidsWebServicesPermissionWait_C.AreAllPermissionsGranted
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Granted                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_Sheik_Title_KidsWebServicesPermissionWait_C::AreAllPermissionsGranted(bool* Granted)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Title_KidsWebServicesPermissionWait.WBP_Sheik_Title_KidsWebServicesPermissionWait_C.AreAllPermissionsGranted");
		
		UWBP_Sheik_Title_KidsWebServicesPermissionWait_C_AreAllPermissionsGranted_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Granted != nullptr)
			*Granted = params.Granted;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Title_KidsWebServicesPermissionWait.WBP_Sheik_Title_KidsWebServicesPermissionWait_C.UnbindUpdate
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_Title_KidsWebServicesPermissionWait_C::UnbindUpdate()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Title_KidsWebServicesPermissionWait.WBP_Sheik_Title_KidsWebServicesPermissionWait_C.UnbindUpdate");
		
		UWBP_Sheik_Title_KidsWebServicesPermissionWait_C_UnbindUpdate_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Title_KidsWebServicesPermissionWait.WBP_Sheik_Title_KidsWebServicesPermissionWait_C.BindUpdate
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_Title_KidsWebServicesPermissionWait_C::BindUpdate()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Title_KidsWebServicesPermissionWait.WBP_Sheik_Title_KidsWebServicesPermissionWait_C.BindUpdate");
		
		UWBP_Sheik_Title_KidsWebServicesPermissionWait_C_BindUpdate_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Title_KidsWebServicesPermissionWait.WBP_Sheik_Title_KidsWebServicesPermissionWait_C.GetAgeGatingManager
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class USheikAgeGatingManager*                      AgeGatingManager                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_Title_KidsWebServicesPermissionWait_C::GetAgeGatingManager(class USheikAgeGatingManager** AgeGatingManager)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Title_KidsWebServicesPermissionWait.WBP_Sheik_Title_KidsWebServicesPermissionWait_C.GetAgeGatingManager");
		
		UWBP_Sheik_Title_KidsWebServicesPermissionWait_C_GetAgeGatingManager_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AgeGatingManager != nullptr)
			*AgeGatingManager = params.AgeGatingManager;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Title_KidsWebServicesPermissionWait.WBP_Sheik_Title_KidsWebServicesPermissionWait_C.OnDeactivated
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_Title_KidsWebServicesPermissionWait_C::OnDeactivated()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Title_KidsWebServicesPermissionWait.WBP_Sheik_Title_KidsWebServicesPermissionWait_C.OnDeactivated");
		
		UWBP_Sheik_Title_KidsWebServicesPermissionWait_C_OnDeactivated_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Title_KidsWebServicesPermissionWait.WBP_Sheik_Title_KidsWebServicesPermissionWait_C.OnPermissionsUpdated
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<class FString>                              Names                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		TArray<EKWSPermissionStatus>                       Statuses                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UWBP_Sheik_Title_KidsWebServicesPermissionWait_C::OnPermissionsUpdated(TArray<class FString> Names, TArray<EKWSPermissionStatus> Statuses)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Title_KidsWebServicesPermissionWait.WBP_Sheik_Title_KidsWebServicesPermissionWait_C.OnPermissionsUpdated");
		
		UWBP_Sheik_Title_KidsWebServicesPermissionWait_C_OnPermissionsUpdated_Params params {};
		params.Names = Names;
		params.Statuses = Statuses;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Title_KidsWebServicesPermissionWait.WBP_Sheik_Title_KidsWebServicesPermissionWait_C.OnActivated
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_Title_KidsWebServicesPermissionWait_C::OnActivated()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Title_KidsWebServicesPermissionWait.WBP_Sheik_Title_KidsWebServicesPermissionWait_C.OnActivated");
		
		UWBP_Sheik_Title_KidsWebServicesPermissionWait_C_OnActivated_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Title_KidsWebServicesPermissionWait.WBP_Sheik_Title_KidsWebServicesPermissionWait_C.BndEvt__WBP_Sheik_Title_KidsWebServicesDOBEntry_BackButton_K2Node_ComponentBoundEvent_1_OnActionConfirmed__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_Title_KidsWebServicesPermissionWait_C::BndEvt__WBP_Sheik_Title_KidsWebServicesDOBEntry_BackButton_K2Node_ComponentBoundEvent_1_OnActionConfirmed__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Title_KidsWebServicesPermissionWait.WBP_Sheik_Title_KidsWebServicesPermissionWait_C.BndEvt__WBP_Sheik_Title_KidsWebServicesDOBEntry_BackButton_K2Node_ComponentBoundEvent_1_OnActionConfirmed__DelegateSignature");
		
		UWBP_Sheik_Title_KidsWebServicesPermissionWait_C_BndEvt__WBP_Sheik_Title_KidsWebServicesDOBEntry_BackButton_K2Node_ComponentBoundEvent_1_OnActionConfirmed__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Title_KidsWebServicesPermissionWait.WBP_Sheik_Title_KidsWebServicesPermissionWait_C.OnLongWaitTime
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_Title_KidsWebServicesPermissionWait_C::OnLongWaitTime()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Title_KidsWebServicesPermissionWait.WBP_Sheik_Title_KidsWebServicesPermissionWait_C.OnLongWaitTime");
		
		UWBP_Sheik_Title_KidsWebServicesPermissionWait_C_OnLongWaitTime_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Title_KidsWebServicesPermissionWait.WBP_Sheik_Title_KidsWebServicesPermissionWait_C.ExecuteUbergraph_WBP_Sheik_Title_KidsWebServicesPermissionWait
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_Title_KidsWebServicesPermissionWait_C::ExecuteUbergraph_WBP_Sheik_Title_KidsWebServicesPermissionWait(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Title_KidsWebServicesPermissionWait.WBP_Sheik_Title_KidsWebServicesPermissionWait_C.ExecuteUbergraph_WBP_Sheik_Title_KidsWebServicesPermissionWait");
		
		UWBP_Sheik_Title_KidsWebServicesPermissionWait_C_ExecuteUbergraph_WBP_Sheik_Title_KidsWebServicesPermissionWait_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Title_KidsWebServicesPermissionWait.WBP_Sheik_Title_KidsWebServicesPermissionWait_C.OnRejected__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_Title_KidsWebServicesPermissionWait_C::OnRejected__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Title_KidsWebServicesPermissionWait.WBP_Sheik_Title_KidsWebServicesPermissionWait_C.OnRejected__DelegateSignature");
		
		UWBP_Sheik_Title_KidsWebServicesPermissionWait_C_OnRejected__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Title_KidsWebServicesPermissionWait.WBP_Sheik_Title_KidsWebServicesPermissionWait_C.OnPermitted__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_Title_KidsWebServicesPermissionWait_C::OnPermitted__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Title_KidsWebServicesPermissionWait.WBP_Sheik_Title_KidsWebServicesPermissionWait_C.OnPermitted__DelegateSignature");
		
		UWBP_Sheik_Title_KidsWebServicesPermissionWait_C_OnPermitted__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Title_KidsWebServicesPermissionWait.WBP_Sheik_Title_KidsWebServicesPermissionWait_C.OnBack__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_Title_KidsWebServicesPermissionWait_C::OnBack__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Title_KidsWebServicesPermissionWait.WBP_Sheik_Title_KidsWebServicesPermissionWait_C.OnBack__DelegateSignature");
		
		UWBP_Sheik_Title_KidsWebServicesPermissionWait_C_OnBack__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWBP_Sheik_Title_KidsWebServicesPermissionWait_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWBP_Sheik_Title_KidsWebServicesPermissionWait_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_Sheik_Title_KidsWebServicesPermissionWait.WBP_Sheik_Title_KidsWebServicesPermissionWait_C");
		return ptr;
	}

}


