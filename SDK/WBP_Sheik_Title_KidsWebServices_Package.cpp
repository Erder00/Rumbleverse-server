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
	 * 		Name   -> Function WBP_Sheik_Title_KidsWebServices.WBP_Sheik_Title_KidsWebServices_C.GetAccountsManager
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class USheikPlayerAccountsManager*                 AccountsManager                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_Title_KidsWebServices_C::GetAccountsManager(class USheikPlayerAccountsManager** AccountsManager)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Title_KidsWebServices.WBP_Sheik_Title_KidsWebServices_C.GetAccountsManager");
		
		UWBP_Sheik_Title_KidsWebServices_C_GetAccountsManager_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AccountsManager != nullptr)
			*AccountsManager = params.AccountsManager;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Title_KidsWebServices.WBP_Sheik_Title_KidsWebServices_C.SwitcherActivate
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class USheikWidgetBase*                            Widget                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_Title_KidsWebServices_C::SwitcherActivate(class USheikWidgetBase* Widget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Title_KidsWebServices.WBP_Sheik_Title_KidsWebServices_C.SwitcherActivate");
		
		UWBP_Sheik_Title_KidsWebServices_C_SwitcherActivate_Params params {};
		params.Widget = Widget;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Title_KidsWebServices.WBP_Sheik_Title_KidsWebServices_C.AreAnyPermissionsRejected
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<EKWSPermissionStatus>                       PermissionStatuses                                         (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		bool                                               Rejected                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_Sheik_Title_KidsWebServices_C::AreAnyPermissionsRejected(TArray<EKWSPermissionStatus>* PermissionStatuses, bool* Rejected)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Title_KidsWebServices.WBP_Sheik_Title_KidsWebServices_C.AreAnyPermissionsRejected");
		
		UWBP_Sheik_Title_KidsWebServices_C_AreAnyPermissionsRejected_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (PermissionStatuses != nullptr)
			*PermissionStatuses = params.PermissionStatuses;
		if (Rejected != nullptr)
			*Rejected = params.Rejected;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Title_KidsWebServices.WBP_Sheik_Title_KidsWebServices_C.GetAgeGatingManager
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class USheikAgeGatingManager*                      AgeGatingManager                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_Title_KidsWebServices_C::GetAgeGatingManager(class USheikAgeGatingManager** AgeGatingManager)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Title_KidsWebServices.WBP_Sheik_Title_KidsWebServices_C.GetAgeGatingManager");
		
		UWBP_Sheik_Title_KidsWebServices_C_GetAgeGatingManager_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AgeGatingManager != nullptr)
			*AgeGatingManager = params.AgeGatingManager;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Title_KidsWebServices.WBP_Sheik_Title_KidsWebServices_C.QueryRequirements
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_Title_KidsWebServices_C::QueryRequirements()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Title_KidsWebServices.WBP_Sheik_Title_KidsWebServices_C.QueryRequirements");
		
		UWBP_Sheik_Title_KidsWebServices_C_QueryRequirements_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Title_KidsWebServices.WBP_Sheik_Title_KidsWebServices_C.OnCommitDateOfBirth
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bParentEmailRequired                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_Sheik_Title_KidsWebServices_C::OnCommitDateOfBirth(bool bParentEmailRequired)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Title_KidsWebServices.WBP_Sheik_Title_KidsWebServices_C.OnCommitDateOfBirth");
		
		UWBP_Sheik_Title_KidsWebServices_C_OnCommitDateOfBirth_Params params {};
		params.bParentEmailRequired = bParentEmailRequired;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Title_KidsWebServices.WBP_Sheik_Title_KidsWebServices_C.Destruct
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_Title_KidsWebServices_C::Destruct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Title_KidsWebServices.WBP_Sheik_Title_KidsWebServices_C.Destruct");
		
		UWBP_Sheik_Title_KidsWebServices_C_Destruct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Title_KidsWebServices.WBP_Sheik_Title_KidsWebServices_C.BndEvt__WBP_Sheik_Title_KidsWebServices_DOBEntryBox2_K2Node_ComponentBoundEvent_4_OnDateOfBirthCommited__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FDateTime                                   DateOfBirth                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_Title_KidsWebServices_C::BndEvt__WBP_Sheik_Title_KidsWebServices_DOBEntryBox2_K2Node_ComponentBoundEvent_4_OnDateOfBirthCommited__DelegateSignature(const struct FDateTime& DateOfBirth)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Title_KidsWebServices.WBP_Sheik_Title_KidsWebServices_C.BndEvt__WBP_Sheik_Title_KidsWebServices_DOBEntryBox2_K2Node_ComponentBoundEvent_4_OnDateOfBirthCommited__DelegateSignature");
		
		UWBP_Sheik_Title_KidsWebServices_C_BndEvt__WBP_Sheik_Title_KidsWebServices_DOBEntryBox2_K2Node_ComponentBoundEvent_4_OnDateOfBirthCommited__DelegateSignature_Params params {};
		params.DateOfBirth = DateOfBirth;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Title_KidsWebServices.WBP_Sheik_Title_KidsWebServices_C.BndEvt__WBP_Sheik_Title_KidsWebServices_DOBEntry_K2Node_ComponentBoundEvent_1_OnBack__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_Title_KidsWebServices_C::BndEvt__WBP_Sheik_Title_KidsWebServices_DOBEntry_K2Node_ComponentBoundEvent_1_OnBack__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Title_KidsWebServices.WBP_Sheik_Title_KidsWebServices_C.BndEvt__WBP_Sheik_Title_KidsWebServices_DOBEntry_K2Node_ComponentBoundEvent_1_OnBack__DelegateSignature");
		
		UWBP_Sheik_Title_KidsWebServices_C_BndEvt__WBP_Sheik_Title_KidsWebServices_DOBEntry_K2Node_ComponentBoundEvent_1_OnBack__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Title_KidsWebServices.WBP_Sheik_Title_KidsWebServices_C.BndEvt__WBP_Sheik_Title_KidsWebServices_EmailEntry_K2Node_ComponentBoundEvent_3_OnFinish__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_Title_KidsWebServices_C::BndEvt__WBP_Sheik_Title_KidsWebServices_EmailEntry_K2Node_ComponentBoundEvent_3_OnFinish__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Title_KidsWebServices.WBP_Sheik_Title_KidsWebServices_C.BndEvt__WBP_Sheik_Title_KidsWebServices_EmailEntry_K2Node_ComponentBoundEvent_3_OnFinish__DelegateSignature");
		
		UWBP_Sheik_Title_KidsWebServices_C_BndEvt__WBP_Sheik_Title_KidsWebServices_EmailEntry_K2Node_ComponentBoundEvent_3_OnFinish__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Title_KidsWebServices.WBP_Sheik_Title_KidsWebServices_C.BndEvt__WBP_Sheik_Title_KidsWebServices_EmailEntry_K2Node_ComponentBoundEvent_6_OnFail__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSheikError                                 Error                                                      (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 */
	void UWBP_Sheik_Title_KidsWebServices_C::BndEvt__WBP_Sheik_Title_KidsWebServices_EmailEntry_K2Node_ComponentBoundEvent_6_OnFail__DelegateSignature(const struct FSheikError& Error)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Title_KidsWebServices.WBP_Sheik_Title_KidsWebServices_C.BndEvt__WBP_Sheik_Title_KidsWebServices_EmailEntry_K2Node_ComponentBoundEvent_6_OnFail__DelegateSignature");
		
		UWBP_Sheik_Title_KidsWebServices_C_BndEvt__WBP_Sheik_Title_KidsWebServices_EmailEntry_K2Node_ComponentBoundEvent_6_OnFail__DelegateSignature_Params params {};
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Title_KidsWebServices.WBP_Sheik_Title_KidsWebServices_C.BndEvt__WBP_Sheik_Title_KidsWebServices_PermissionsWait_K2Node_ComponentBoundEvent_5_OnBack__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_Title_KidsWebServices_C::BndEvt__WBP_Sheik_Title_KidsWebServices_PermissionsWait_K2Node_ComponentBoundEvent_5_OnBack__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Title_KidsWebServices.WBP_Sheik_Title_KidsWebServices_C.BndEvt__WBP_Sheik_Title_KidsWebServices_PermissionsWait_K2Node_ComponentBoundEvent_5_OnBack__DelegateSignature");
		
		UWBP_Sheik_Title_KidsWebServices_C_BndEvt__WBP_Sheik_Title_KidsWebServices_PermissionsWait_K2Node_ComponentBoundEvent_5_OnBack__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Title_KidsWebServices.WBP_Sheik_Title_KidsWebServices_C.BndEvt__WBP_Sheik_Title_KidsWebServices_PermissionsWait_K2Node_ComponentBoundEvent_7_OnPermitted__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_Title_KidsWebServices_C::BndEvt__WBP_Sheik_Title_KidsWebServices_PermissionsWait_K2Node_ComponentBoundEvent_7_OnPermitted__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Title_KidsWebServices.WBP_Sheik_Title_KidsWebServices_C.BndEvt__WBP_Sheik_Title_KidsWebServices_PermissionsWait_K2Node_ComponentBoundEvent_7_OnPermitted__DelegateSignature");
		
		UWBP_Sheik_Title_KidsWebServices_C_BndEvt__WBP_Sheik_Title_KidsWebServices_PermissionsWait_K2Node_ComponentBoundEvent_7_OnPermitted__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Title_KidsWebServices.WBP_Sheik_Title_KidsWebServices_C.BndEvt__WBP_Sheik_Title_KidsWebServices_PermissionsWait_K2Node_ComponentBoundEvent_0_OnRejected__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_Title_KidsWebServices_C::BndEvt__WBP_Sheik_Title_KidsWebServices_PermissionsWait_K2Node_ComponentBoundEvent_0_OnRejected__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Title_KidsWebServices.WBP_Sheik_Title_KidsWebServices_C.BndEvt__WBP_Sheik_Title_KidsWebServices_PermissionsWait_K2Node_ComponentBoundEvent_0_OnRejected__DelegateSignature");
		
		UWBP_Sheik_Title_KidsWebServices_C_BndEvt__WBP_Sheik_Title_KidsWebServices_PermissionsWait_K2Node_ComponentBoundEvent_0_OnRejected__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Title_KidsWebServices.WBP_Sheik_Title_KidsWebServices_C.HandlePermissionsRejected
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_Title_KidsWebServices_C::HandlePermissionsRejected()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Title_KidsWebServices.WBP_Sheik_Title_KidsWebServices_C.HandlePermissionsRejected");
		
		UWBP_Sheik_Title_KidsWebServices_C_HandlePermissionsRejected_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Title_KidsWebServices.WBP_Sheik_Title_KidsWebServices_C.OnQueryKidRequirements
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bDateOfBirthRequired                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bPermissionsRequired                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bSuccessful                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FSheikError                                 Error                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	 */
	void UWBP_Sheik_Title_KidsWebServices_C::OnQueryKidRequirements(bool bDateOfBirthRequired, bool bPermissionsRequired, bool bSuccessful, const struct FSheikError& Error)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Title_KidsWebServices.WBP_Sheik_Title_KidsWebServices_C.OnQueryKidRequirements");
		
		UWBP_Sheik_Title_KidsWebServices_C_OnQueryKidRequirements_Params params {};
		params.bDateOfBirthRequired = bDateOfBirthRequired;
		params.bPermissionsRequired = bPermissionsRequired;
		params.bSuccessful = bSuccessful;
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Title_KidsWebServices.WBP_Sheik_Title_KidsWebServices_C.HandleClose
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               CompletedFlow                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_Sheik_Title_KidsWebServices_C::HandleClose(bool CompletedFlow)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Title_KidsWebServices.WBP_Sheik_Title_KidsWebServices_C.HandleClose");
		
		UWBP_Sheik_Title_KidsWebServices_C_HandleClose_Params params {};
		params.CompletedFlow = CompletedFlow;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Title_KidsWebServices.WBP_Sheik_Title_KidsWebServices_C.Construct
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_Title_KidsWebServices_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Title_KidsWebServices.WBP_Sheik_Title_KidsWebServices_C.Construct");
		
		UWBP_Sheik_Title_KidsWebServices_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Title_KidsWebServices.WBP_Sheik_Title_KidsWebServices_C.StartFlow
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_Title_KidsWebServices_C::StartFlow()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Title_KidsWebServices.WBP_Sheik_Title_KidsWebServices_C.StartFlow");
		
		UWBP_Sheik_Title_KidsWebServices_C_StartFlow_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Title_KidsWebServices.WBP_Sheik_Title_KidsWebServices_C.ExecuteUbergraph_WBP_Sheik_Title_KidsWebServices
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_Title_KidsWebServices_C::ExecuteUbergraph_WBP_Sheik_Title_KidsWebServices(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Title_KidsWebServices.WBP_Sheik_Title_KidsWebServices_C.ExecuteUbergraph_WBP_Sheik_Title_KidsWebServices");
		
		UWBP_Sheik_Title_KidsWebServices_C_ExecuteUbergraph_WBP_Sheik_Title_KidsWebServices_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Title_KidsWebServices.WBP_Sheik_Title_KidsWebServices_C.OnFail__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_Title_KidsWebServices_C::OnFail__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Title_KidsWebServices.WBP_Sheik_Title_KidsWebServices_C.OnFail__DelegateSignature");
		
		UWBP_Sheik_Title_KidsWebServices_C_OnFail__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Title_KidsWebServices.WBP_Sheik_Title_KidsWebServices_C.OnSuccess__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_Title_KidsWebServices_C::OnSuccess__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Title_KidsWebServices.WBP_Sheik_Title_KidsWebServices_C.OnSuccess__DelegateSignature");
		
		UWBP_Sheik_Title_KidsWebServices_C_OnSuccess__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWBP_Sheik_Title_KidsWebServices_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWBP_Sheik_Title_KidsWebServices_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_Sheik_Title_KidsWebServices.WBP_Sheik_Title_KidsWebServices_C");
		return ptr;
	}

}


