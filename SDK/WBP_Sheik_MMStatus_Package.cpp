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
	 * 		Name   -> Function WBP_Sheik_MMStatus.WBP_Sheik_MMStatus_C.ErrorPopup
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSheikError                                 Error                                                      (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 */
	void UWBP_Sheik_MMStatus_C::ErrorPopup(const struct FSheikError& Error)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_MMStatus.WBP_Sheik_MMStatus_C.ErrorPopup");
		
		UWBP_Sheik_MMStatus_C_ErrorPopup_Params params {};
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_MMStatus.WBP_Sheik_MMStatus_C.PartyManager
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class USheikPartyManager*                          PartyManager                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_MMStatus_C::PartyManager(class USheikPartyManager** PartyManager)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_MMStatus.WBP_Sheik_MMStatus_C.PartyManager");
		
		UWBP_Sheik_MMStatus_C_PartyManager_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (PartyManager != nullptr)
			*PartyManager = params.PartyManager;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_MMStatus.WBP_Sheik_MMStatus_C.MatchmakingCallbacks
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class USheikMatchmakingCallbacks*                  MatchmakingCallbacks                                       (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_MMStatus_C::MatchmakingCallbacks(class USheikMatchmakingCallbacks** MatchmakingCallbacks)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_MMStatus.WBP_Sheik_MMStatus_C.MatchmakingCallbacks");
		
		UWBP_Sheik_MMStatus_C_MatchmakingCallbacks_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (MatchmakingCallbacks != nullptr)
			*MatchmakingCallbacks = params.MatchmakingCallbacks;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_MMStatus.WBP_Sheik_MMStatus_C.OnInitialized
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_MMStatus_C::OnInitialized()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_MMStatus.WBP_Sheik_MMStatus_C.OnInitialized");
		
		UWBP_Sheik_MMStatus_C_OnInitialized_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_MMStatus.WBP_Sheik_MMStatus_C.EventHandleOnMatchmakingStarted
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      MatchConfig                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_MMStatus_C::EventHandleOnMatchmakingStarted(const class FString& MatchConfig)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_MMStatus.WBP_Sheik_MMStatus_C.EventHandleOnMatchmakingStarted");
		
		UWBP_Sheik_MMStatus_C_EventHandleOnMatchmakingStarted_Params params {};
		params.MatchConfig = MatchConfig;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_MMStatus.WBP_Sheik_MMStatus_C.OnMatchmakingStatusChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EMatchmakingStatus                                 NewStatus                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_MMStatus_C::OnMatchmakingStatusChanged(EMatchmakingStatus NewStatus)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_MMStatus.WBP_Sheik_MMStatus_C.OnMatchmakingStatusChanged");
		
		UWBP_Sheik_MMStatus_C_OnMatchmakingStatusChanged_Params params {};
		params.NewStatus = NewStatus;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_MMStatus.WBP_Sheik_MMStatus_C.EventHandleOnPartyMatchmakingStarted
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      ConfigurationName                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		bool                                               bIsLeader                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_Sheik_MMStatus_C::EventHandleOnPartyMatchmakingStarted(const class FString& ConfigurationName, bool bIsLeader)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_MMStatus.WBP_Sheik_MMStatus_C.EventHandleOnPartyMatchmakingStarted");
		
		UWBP_Sheik_MMStatus_C_EventHandleOnPartyMatchmakingStarted_Params params {};
		params.ConfigurationName = ConfigurationName;
		params.bIsLeader = bIsLeader;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_MMStatus.WBP_Sheik_MMStatus_C.EventHandleOnPartyMatchmakingStopped
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bIsLeader                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_Sheik_MMStatus_C::EventHandleOnPartyMatchmakingStopped(bool bIsLeader)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_MMStatus.WBP_Sheik_MMStatus_C.EventHandleOnPartyMatchmakingStopped");
		
		UWBP_Sheik_MMStatus_C_EventHandleOnPartyMatchmakingStopped_Params params {};
		params.bIsLeader = bIsLeader;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_MMStatus.WBP_Sheik_MMStatus_C.EventHandleOnPartyMatchmakingFound
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bIsLeader                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_Sheik_MMStatus_C::EventHandleOnPartyMatchmakingFound(bool bIsLeader)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_MMStatus.WBP_Sheik_MMStatus_C.EventHandleOnPartyMatchmakingFound");
		
		UWBP_Sheik_MMStatus_C_EventHandleOnPartyMatchmakingFound_Params params {};
		params.bIsLeader = bIsLeader;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_MMStatus.WBP_Sheik_MMStatus_C.EventHandleOnPartyMatchmakingError
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        ErrorText                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		bool                                               bIsPartyLeader                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_Sheik_MMStatus_C::EventHandleOnPartyMatchmakingError(const class FText& ErrorText, bool bIsPartyLeader)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_MMStatus.WBP_Sheik_MMStatus_C.EventHandleOnPartyMatchmakingError");
		
		UWBP_Sheik_MMStatus_C_EventHandleOnPartyMatchmakingError_Params params {};
		params.ErrorText = ErrorText;
		params.bIsPartyLeader = bIsPartyLeader;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_MMStatus.WBP_Sheik_MMStatus_C.OnPartyPlayerLeft
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      PlayerId                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_MMStatus_C::OnPartyPlayerLeft(const class FString& PlayerId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_MMStatus.WBP_Sheik_MMStatus_C.OnPartyPlayerLeft");
		
		UWBP_Sheik_MMStatus_C_OnPartyPlayerLeft_Params params {};
		params.PlayerId = PlayerId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_MMStatus.WBP_Sheik_MMStatus_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_Sheik_MMStatus_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_MMStatus.WBP_Sheik_MMStatus_C.PreConstruct");
		
		UWBP_Sheik_MMStatus_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_MMStatus.WBP_Sheik_MMStatus_C.OnMatchmakingComplete
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bSuccessful                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FSheikError                                 Error                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	 */
	void UWBP_Sheik_MMStatus_C::OnMatchmakingComplete(bool bSuccessful, const struct FSheikError& Error)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_MMStatus.WBP_Sheik_MMStatus_C.OnMatchmakingComplete");
		
		UWBP_Sheik_MMStatus_C_OnMatchmakingComplete_Params params {};
		params.bSuccessful = bSuccessful;
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_MMStatus.WBP_Sheik_MMStatus_C.OnMatchmakingCancelled
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bSuccessful                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FSheikError                                 Error                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	 */
	void UWBP_Sheik_MMStatus_C::OnMatchmakingCancelled(bool bSuccessful, const struct FSheikError& Error)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_MMStatus.WBP_Sheik_MMStatus_C.OnMatchmakingCancelled");
		
		UWBP_Sheik_MMStatus_C_OnMatchmakingCancelled_Params params {};
		params.bSuccessful = bSuccessful;
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_MMStatus.WBP_Sheik_MMStatus_C.ExecuteUbergraph_WBP_Sheik_MMStatus
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_MMStatus_C::ExecuteUbergraph_WBP_Sheik_MMStatus(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_MMStatus.WBP_Sheik_MMStatus_C.ExecuteUbergraph_WBP_Sheik_MMStatus");
		
		UWBP_Sheik_MMStatus_C_ExecuteUbergraph_WBP_Sheik_MMStatus_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWBP_Sheik_MMStatus_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWBP_Sheik_MMStatus_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_Sheik_MMStatus.WBP_Sheik_MMStatus_C");
		return ptr;
	}

}


