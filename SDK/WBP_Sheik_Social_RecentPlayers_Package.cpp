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
	 * 		Name   -> Function WBP_Sheik_Social_RecentPlayers.WBP_Sheik_Social_RecentPlayers_C.UpdateSelectedSocialEntry
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FSheikPlayerSocialEntry>             SocialEntries                                              (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UWBP_Sheik_Social_RecentPlayers_C::UpdateSelectedSocialEntry(TArray<struct FSheikPlayerSocialEntry>* SocialEntries)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Social_RecentPlayers.WBP_Sheik_Social_RecentPlayers_C.UpdateSelectedSocialEntry");
		
		UWBP_Sheik_Social_RecentPlayers_C_UpdateSelectedSocialEntry_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (SocialEntries != nullptr)
			*SocialEntries = params.SocialEntries;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Social_RecentPlayers.WBP_Sheik_Social_RecentPlayers_C.GetFriendsManager
	 * 		Flags  -> ()
	 */
	class USheikFriendsManager* UWBP_Sheik_Social_RecentPlayers_C::GetFriendsManager()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Social_RecentPlayers.WBP_Sheik_Social_RecentPlayers_C.GetFriendsManager");
		
		UWBP_Sheik_Social_RecentPlayers_C_GetFriendsManager_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Social_RecentPlayers.WBP_Sheik_Social_RecentPlayers_C.PlayerAccountsManager
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class USheikPlayerAccountsManager*                 AccountsManager                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_Social_RecentPlayers_C::PlayerAccountsManager(class USheikPlayerAccountsManager** AccountsManager)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Social_RecentPlayers.WBP_Sheik_Social_RecentPlayers_C.PlayerAccountsManager");
		
		UWBP_Sheik_Social_RecentPlayers_C_PlayerAccountsManager_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AccountsManager != nullptr)
			*AccountsManager = params.AccountsManager;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Social_RecentPlayers.WBP_Sheik_Social_RecentPlayers_C.CloseOptions
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_Social_RecentPlayers_C::CloseOptions()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Social_RecentPlayers.WBP_Sheik_Social_RecentPlayers_C.CloseOptions");
		
		UWBP_Sheik_Social_RecentPlayers_C_CloseOptions_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Social_RecentPlayers.WBP_Sheik_Social_RecentPlayers_C.GetPlayerData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class USheikPlayerData*                            PlayerData                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_Social_RecentPlayers_C::GetPlayerData(class USheikPlayerData** PlayerData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Social_RecentPlayers.WBP_Sheik_Social_RecentPlayers_C.GetPlayerData");
		
		UWBP_Sheik_Social_RecentPlayers_C_GetPlayerData_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (PlayerData != nullptr)
			*PlayerData = params.PlayerData;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Social_RecentPlayers.WBP_Sheik_Social_RecentPlayers_C.SetData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FSheikPlayerSocialEntry>             SocialEntries                                              (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UWBP_Sheik_Social_RecentPlayers_C::SetData(TArray<struct FSheikPlayerSocialEntry>* SocialEntries)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Social_RecentPlayers.WBP_Sheik_Social_RecentPlayers_C.SetData");
		
		UWBP_Sheik_Social_RecentPlayers_C_SetData_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (SocialEntries != nullptr)
			*SocialEntries = params.SocialEntries;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Social_RecentPlayers.WBP_Sheik_Social_RecentPlayers_C.ShouldBlockScreenInput
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               ShouldBlock                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_Sheik_Social_RecentPlayers_C::ShouldBlockScreenInput(bool* ShouldBlock)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Social_RecentPlayers.WBP_Sheik_Social_RecentPlayers_C.ShouldBlockScreenInput");
		
		UWBP_Sheik_Social_RecentPlayers_C_ShouldBlockScreenInput_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ShouldBlock != nullptr)
			*ShouldBlock = params.ShouldBlock;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Social_RecentPlayers.WBP_Sheik_Social_RecentPlayers_C.UpdateRecentPlayersVisibility
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               HasRecentPlayers                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_Sheik_Social_RecentPlayers_C::UpdateRecentPlayersVisibility(bool HasRecentPlayers)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Social_RecentPlayers.WBP_Sheik_Social_RecentPlayers_C.UpdateRecentPlayersVisibility");
		
		UWBP_Sheik_Social_RecentPlayers_C_UpdateRecentPlayersVisibility_Params params {};
		params.HasRecentPlayers = HasRecentPlayers;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Social_RecentPlayers.WBP_Sheik_Social_RecentPlayers_C.UpdateRecentPlayers
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_Social_RecentPlayers_C::UpdateRecentPlayers()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Social_RecentPlayers.WBP_Sheik_Social_RecentPlayers_C.UpdateRecentPlayers");
		
		UWBP_Sheik_Social_RecentPlayers_C_UpdateRecentPlayers_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Social_RecentPlayers.WBP_Sheik_Social_RecentPlayers_C.BndEvt__ReportPlayerForm_K2Node_ComponentBoundEvent_2_BackPressed__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_Social_RecentPlayers_C::BndEvt__ReportPlayerForm_K2Node_ComponentBoundEvent_2_BackPressed__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Social_RecentPlayers.WBP_Sheik_Social_RecentPlayers_C.BndEvt__ReportPlayerForm_K2Node_ComponentBoundEvent_2_BackPressed__DelegateSignature");
		
		UWBP_Sheik_Social_RecentPlayers_C_BndEvt__ReportPlayerForm_K2Node_ComponentBoundEvent_2_BackPressed__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Social_RecentPlayers.WBP_Sheik_Social_RecentPlayers_C.BndEvt__OptionsPanel_K2Node_ComponentBoundEvent_3_OnOpenReportForm__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_Social_RecentPlayers_C::BndEvt__OptionsPanel_K2Node_ComponentBoundEvent_3_OnOpenReportForm__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Social_RecentPlayers.WBP_Sheik_Social_RecentPlayers_C.BndEvt__OptionsPanel_K2Node_ComponentBoundEvent_3_OnOpenReportForm__DelegateSignature");
		
		UWBP_Sheik_Social_RecentPlayers_C_BndEvt__OptionsPanel_K2Node_ComponentBoundEvent_3_OnOpenReportForm__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Social_RecentPlayers.WBP_Sheik_Social_RecentPlayers_C.OnDeactivated
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_Social_RecentPlayers_C::OnDeactivated()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Social_RecentPlayers.WBP_Sheik_Social_RecentPlayers_C.OnDeactivated");
		
		UWBP_Sheik_Social_RecentPlayers_C_OnDeactivated_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Social_RecentPlayers.WBP_Sheik_Social_RecentPlayers_C.BndEvt__OptionsPanel_K2Node_ComponentBoundEvent_5_OnClose__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_Social_RecentPlayers_C::BndEvt__OptionsPanel_K2Node_ComponentBoundEvent_5_OnClose__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Social_RecentPlayers.WBP_Sheik_Social_RecentPlayers_C.BndEvt__OptionsPanel_K2Node_ComponentBoundEvent_5_OnClose__DelegateSignature");
		
		UWBP_Sheik_Social_RecentPlayers_C_BndEvt__OptionsPanel_K2Node_ComponentBoundEvent_5_OnClose__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Social_RecentPlayers.WBP_Sheik_Social_RecentPlayers_C.BndEvt__RecentPlayersList_K2Node_ComponentBoundEvent_6_OnEntrySelected__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UIGUI_WidgetBase*                            Widget                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            UserIndex                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FSheikPlayerSocialEntry                     PlayerSocialEntry                                          (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UWBP_Sheik_Social_RecentPlayers_C::BndEvt__RecentPlayersList_K2Node_ComponentBoundEvent_6_OnEntrySelected__DelegateSignature(class UIGUI_WidgetBase* Widget, int32_t UserIndex, const struct FSheikPlayerSocialEntry& PlayerSocialEntry)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Social_RecentPlayers.WBP_Sheik_Social_RecentPlayers_C.BndEvt__RecentPlayersList_K2Node_ComponentBoundEvent_6_OnEntrySelected__DelegateSignature");
		
		UWBP_Sheik_Social_RecentPlayers_C_BndEvt__RecentPlayersList_K2Node_ComponentBoundEvent_6_OnEntrySelected__DelegateSignature_Params params {};
		params.Widget = Widget;
		params.UserIndex = UserIndex;
		params.PlayerSocialEntry = PlayerSocialEntry;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Social_RecentPlayers.WBP_Sheik_Social_RecentPlayers_C.OnGetRecentPlayers
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FSheikPlayerSocialEntry>             SocialEntries                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		bool                                               bWasSuccessful                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_Sheik_Social_RecentPlayers_C::OnGetRecentPlayers(TArray<struct FSheikPlayerSocialEntry> SocialEntries, bool bWasSuccessful)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Social_RecentPlayers.WBP_Sheik_Social_RecentPlayers_C.OnGetRecentPlayers");
		
		UWBP_Sheik_Social_RecentPlayers_C_OnGetRecentPlayers_Params params {};
		params.SocialEntries = SocialEntries;
		params.bWasSuccessful = bWasSuccessful;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Social_RecentPlayers.WBP_Sheik_Social_RecentPlayers_C.OnInitialized
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_Social_RecentPlayers_C::OnInitialized()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Social_RecentPlayers.WBP_Sheik_Social_RecentPlayers_C.OnInitialized");
		
		UWBP_Sheik_Social_RecentPlayers_C_OnInitialized_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Social_RecentPlayers.WBP_Sheik_Social_RecentPlayers_C.OnBlockedPlayersUpdated
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_Social_RecentPlayers_C::OnBlockedPlayersUpdated()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Social_RecentPlayers.WBP_Sheik_Social_RecentPlayers_C.OnBlockedPlayersUpdated");
		
		UWBP_Sheik_Social_RecentPlayers_C_OnBlockedPlayersUpdated_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Social_RecentPlayers.WBP_Sheik_Social_RecentPlayers_C.OnActivated
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_Social_RecentPlayers_C::OnActivated()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Social_RecentPlayers.WBP_Sheik_Social_RecentPlayers_C.OnActivated");
		
		UWBP_Sheik_Social_RecentPlayers_C_OnActivated_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Social_RecentPlayers.WBP_Sheik_Social_RecentPlayers_C.ExecuteUbergraph_WBP_Sheik_Social_RecentPlayers
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_Social_RecentPlayers_C::ExecuteUbergraph_WBP_Sheik_Social_RecentPlayers(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Social_RecentPlayers.WBP_Sheik_Social_RecentPlayers_C.ExecuteUbergraph_WBP_Sheik_Social_RecentPlayers");
		
		UWBP_Sheik_Social_RecentPlayers_C_ExecuteUbergraph_WBP_Sheik_Social_RecentPlayers_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWBP_Sheik_Social_RecentPlayers_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWBP_Sheik_Social_RecentPlayers_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_Sheik_Social_RecentPlayers.WBP_Sheik_Social_RecentPlayers_C");
		return ptr;
	}

}


