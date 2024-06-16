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
	 * 		Name   -> Function WBP_Sheik_Social_Friends.WBP_Sheik_Social_Friends_C.Set Tint Visibility
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               TintVisible                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_Sheik_Social_Friends_C::SetTintVisibility(bool TintVisible)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Social_Friends.WBP_Sheik_Social_Friends_C.Set Tint Visibility");
		
		UWBP_Sheik_Social_Friends_C_SetTintVisibility_Params params {};
		params.TintVisible = TintVisible;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Social_Friends.WBP_Sheik_Social_Friends_C.UpdateSelectedSocialEntry
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FSheikPlayerSocialEntry>             SocialEntries                                              (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UWBP_Sheik_Social_Friends_C::UpdateSelectedSocialEntry(TArray<struct FSheikPlayerSocialEntry>* SocialEntries)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Social_Friends.WBP_Sheik_Social_Friends_C.UpdateSelectedSocialEntry");
		
		UWBP_Sheik_Social_Friends_C_UpdateSelectedSocialEntry_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (SocialEntries != nullptr)
			*SocialEntries = params.SocialEntries;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Social_Friends.WBP_Sheik_Social_Friends_C.GetPlayerAccountsManager
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class USheikPlayerAccountsManager*                 PlayerAccountsManager                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_Social_Friends_C::GetPlayerAccountsManager(class USheikPlayerAccountsManager** PlayerAccountsManager)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Social_Friends.WBP_Sheik_Social_Friends_C.GetPlayerAccountsManager");
		
		UWBP_Sheik_Social_Friends_C_GetPlayerAccountsManager_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (PlayerAccountsManager != nullptr)
			*PlayerAccountsManager = params.PlayerAccountsManager;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Social_Friends.WBP_Sheik_Social_Friends_C.TrySelectPartyMember
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_Social_Friends_C::TrySelectPartyMember()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Social_Friends.WBP_Sheik_Social_Friends_C.TrySelectPartyMember");
		
		UWBP_Sheik_Social_Friends_C_TrySelectPartyMember_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Social_Friends.WBP_Sheik_Social_Friends_C.CloseOptions
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_Social_Friends_C::CloseOptions()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Social_Friends.WBP_Sheik_Social_Friends_C.CloseOptions");
		
		UWBP_Sheik_Social_Friends_C_CloseOptions_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Social_Friends.WBP_Sheik_Social_Friends_C.TestGeneratePartyInvitations
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_Social_Friends_C::TestGeneratePartyInvitations()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Social_Friends.WBP_Sheik_Social_Friends_C.TestGeneratePartyInvitations");
		
		UWBP_Sheik_Social_Friends_C_TestGeneratePartyInvitations_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Social_Friends.WBP_Sheik_Social_Friends_C.GetPartyManager
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class USheikPartyManager*                          PartyManager                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_Social_Friends_C::GetPartyManager(class USheikPartyManager** PartyManager)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Social_Friends.WBP_Sheik_Social_Friends_C.GetPartyManager");
		
		UWBP_Sheik_Social_Friends_C_GetPartyManager_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (PartyManager != nullptr)
			*PartyManager = params.PartyManager;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Social_Friends.WBP_Sheik_Social_Friends_C.ShouldBlockScreenInput
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               ShouldBlock                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_Sheik_Social_Friends_C::ShouldBlockScreenInput(bool* ShouldBlock)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Social_Friends.WBP_Sheik_Social_Friends_C.ShouldBlockScreenInput");
		
		UWBP_Sheik_Social_Friends_C_ShouldBlockScreenInput_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ShouldBlock != nullptr)
			*ShouldBlock = params.ShouldBlock;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Social_Friends.WBP_Sheik_Social_Friends_C.UpdateFriendsListVisibility
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               HasFriends                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_Sheik_Social_Friends_C::UpdateFriendsListVisibility(bool HasFriends)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Social_Friends.WBP_Sheik_Social_Friends_C.UpdateFriendsListVisibility");
		
		UWBP_Sheik_Social_Friends_C_UpdateFriendsListVisibility_Params params {};
		params.HasFriends = HasFriends;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Social_Friends.WBP_Sheik_Social_Friends_C.TestGenerateFriends
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_Social_Friends_C::TestGenerateFriends()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Social_Friends.WBP_Sheik_Social_Friends_C.TestGenerateFriends");
		
		UWBP_Sheik_Social_Friends_C_TestGenerateFriends_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Social_Friends.WBP_Sheik_Social_Friends_C.GetFriendsManager
	 * 		Flags  -> ()
	 */
	class USheikFriendsManager* UWBP_Sheik_Social_Friends_C::GetFriendsManager()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Social_Friends.WBP_Sheik_Social_Friends_C.GetFriendsManager");
		
		UWBP_Sheik_Social_Friends_C_GetFriendsManager_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Social_Friends.WBP_Sheik_Social_Friends_C.FriendsContinuousPopulateRandom
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Argument1                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		class FString                                      Argument2                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		class FString                                      Argument3                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		class FString                                      Argument4                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_Social_Friends_C::FriendsContinuousPopulateRandom(const class FString& Argument1, const class FString& Argument2, const class FString& Argument3, const class FString& Argument4)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Social_Friends.WBP_Sheik_Social_Friends_C.FriendsContinuousPopulateRandom");
		
		UWBP_Sheik_Social_Friends_C_FriendsContinuousPopulateRandom_Params params {};
		params.Argument1 = Argument1;
		params.Argument2 = Argument2;
		params.Argument3 = Argument3;
		params.Argument4 = Argument4;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Social_Friends.WBP_Sheik_Social_Friends_C.RegisterTestCalls
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_Social_Friends_C::RegisterTestCalls()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Social_Friends.WBP_Sheik_Social_Friends_C.RegisterTestCalls");
		
		UWBP_Sheik_Social_Friends_C_RegisterTestCalls_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Social_Friends.WBP_Sheik_Social_Friends_C.FriendsPopulateRandom
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Argument1                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		class FString                                      Argument2                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		class FString                                      Argument3                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		class FString                                      Argument4                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_Social_Friends_C::FriendsPopulateRandom(const class FString& Argument1, const class FString& Argument2, const class FString& Argument3, const class FString& Argument4)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Social_Friends.WBP_Sheik_Social_Friends_C.FriendsPopulateRandom");
		
		UWBP_Sheik_Social_Friends_C_FriendsPopulateRandom_Params params {};
		params.Argument1 = Argument1;
		params.Argument2 = Argument2;
		params.Argument3 = Argument3;
		params.Argument4 = Argument4;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Social_Friends.WBP_Sheik_Social_Friends_C.FriendsClearFriendsList
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Argument1                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		class FString                                      Argument2                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		class FString                                      Argument3                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		class FString                                      Argument4                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_Social_Friends_C::FriendsClearFriendsList(const class FString& Argument1, const class FString& Argument2, const class FString& Argument3, const class FString& Argument4)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Social_Friends.WBP_Sheik_Social_Friends_C.FriendsClearFriendsList");
		
		UWBP_Sheik_Social_Friends_C_FriendsClearFriendsList_Params params {};
		params.Argument1 = Argument1;
		params.Argument2 = Argument2;
		params.Argument3 = Argument3;
		params.Argument4 = Argument4;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Social_Friends.WBP_Sheik_Social_Friends_C.FriendsCancelTestingFriendsList
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Argument1                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		class FString                                      Argument2                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		class FString                                      Argument3                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		class FString                                      Argument4                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_Social_Friends_C::FriendsCancelTestingFriendsList(const class FString& Argument1, const class FString& Argument2, const class FString& Argument3, const class FString& Argument4)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Social_Friends.WBP_Sheik_Social_Friends_C.FriendsCancelTestingFriendsList");
		
		UWBP_Sheik_Social_Friends_C_FriendsCancelTestingFriendsList_Params params {};
		params.Argument1 = Argument1;
		params.Argument2 = Argument2;
		params.Argument3 = Argument3;
		params.Argument4 = Argument4;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Social_Friends.WBP_Sheik_Social_Friends_C.FriendsPopulateRandomInvites
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Argument1                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		class FString                                      Argument2                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		class FString                                      Argument3                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		class FString                                      Argument4                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_Social_Friends_C::FriendsPopulateRandomInvites(const class FString& Argument1, const class FString& Argument2, const class FString& Argument3, const class FString& Argument4)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Social_Friends.WBP_Sheik_Social_Friends_C.FriendsPopulateRandomInvites");
		
		UWBP_Sheik_Social_Friends_C_FriendsPopulateRandomInvites_Params params {};
		params.Argument1 = Argument1;
		params.Argument2 = Argument2;
		params.Argument3 = Argument3;
		params.Argument4 = Argument4;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Social_Friends.WBP_Sheik_Social_Friends_C.OnInitialized
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_Social_Friends_C::OnInitialized()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Social_Friends.WBP_Sheik_Social_Friends_C.OnInitialized");
		
		UWBP_Sheik_Social_Friends_C_OnInitialized_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Social_Friends.WBP_Sheik_Social_Friends_C.OnFriendsListUpdated
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bSuccessful                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_Sheik_Social_Friends_C::OnFriendsListUpdated(bool bSuccessful)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Social_Friends.WBP_Sheik_Social_Friends_C.OnFriendsListUpdated");
		
		UWBP_Sheik_Social_Friends_C_OnFriendsListUpdated_Params params {};
		params.bSuccessful = bSuccessful;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Social_Friends.WBP_Sheik_Social_Friends_C.FriendsContinuousPopulateRandomTimer
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_Social_Friends_C::FriendsContinuousPopulateRandomTimer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Social_Friends.WBP_Sheik_Social_Friends_C.FriendsContinuousPopulateRandomTimer");
		
		UWBP_Sheik_Social_Friends_C_FriendsContinuousPopulateRandomTimer_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Social_Friends.WBP_Sheik_Social_Friends_C.UpdateFriends
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_Social_Friends_C::UpdateFriends()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Social_Friends.WBP_Sheik_Social_Friends_C.UpdateFriends");
		
		UWBP_Sheik_Social_Friends_C_UpdateFriends_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Social_Friends.WBP_Sheik_Social_Friends_C.OnActivated
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_Social_Friends_C::OnActivated()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Social_Friends.WBP_Sheik_Social_Friends_C.OnActivated");
		
		UWBP_Sheik_Social_Friends_C_OnActivated_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Social_Friends.WBP_Sheik_Social_Friends_C.OnDeactivated
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_Social_Friends_C::OnDeactivated()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Social_Friends.WBP_Sheik_Social_Friends_C.OnDeactivated");
		
		UWBP_Sheik_Social_Friends_C_OnDeactivated_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Social_Friends.WBP_Sheik_Social_Friends_C.BindPartyManagerDelegates
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_Social_Friends_C::BindPartyManagerDelegates()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Social_Friends.WBP_Sheik_Social_Friends_C.BindPartyManagerDelegates");
		
		UWBP_Sheik_Social_Friends_C_BindPartyManagerDelegates_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Social_Friends.WBP_Sheik_Social_Friends_C.UpdateParty
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_Social_Friends_C::UpdateParty()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Social_Friends.WBP_Sheik_Social_Friends_C.UpdateParty");
		
		UWBP_Sheik_Social_Friends_C_UpdateParty_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Social_Friends.WBP_Sheik_Social_Friends_C.BndEvt__ReportPlayerForm_K2Node_ComponentBoundEvent_2_BackPressed__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_Social_Friends_C::BndEvt__ReportPlayerForm_K2Node_ComponentBoundEvent_2_BackPressed__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Social_Friends.WBP_Sheik_Social_Friends_C.BndEvt__ReportPlayerForm_K2Node_ComponentBoundEvent_2_BackPressed__DelegateSignature");
		
		UWBP_Sheik_Social_Friends_C_BndEvt__ReportPlayerForm_K2Node_ComponentBoundEvent_2_BackPressed__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Social_Friends.WBP_Sheik_Social_Friends_C.BndEvt__OptionsPanel_K2Node_ComponentBoundEvent_3_OnOpenReportForm__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_Social_Friends_C::BndEvt__OptionsPanel_K2Node_ComponentBoundEvent_3_OnOpenReportForm__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Social_Friends.WBP_Sheik_Social_Friends_C.BndEvt__OptionsPanel_K2Node_ComponentBoundEvent_3_OnOpenReportForm__DelegateSignature");
		
		UWBP_Sheik_Social_Friends_C_BndEvt__OptionsPanel_K2Node_ComponentBoundEvent_3_OnOpenReportForm__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Social_Friends.WBP_Sheik_Social_Friends_C.HandleTeamInfoUpdate
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_Social_Friends_C::HandleTeamInfoUpdate()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Social_Friends.WBP_Sheik_Social_Friends_C.HandleTeamInfoUpdate");
		
		UWBP_Sheik_Social_Friends_C_HandleTeamInfoUpdate_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Social_Friends.WBP_Sheik_Social_Friends_C.OnPartyUpdated
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_Social_Friends_C::OnPartyUpdated()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Social_Friends.WBP_Sheik_Social_Friends_C.OnPartyUpdated");
		
		UWBP_Sheik_Social_Friends_C_OnPartyUpdated_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Social_Friends.WBP_Sheik_Social_Friends_C.BndEvt__PlayerList_K2Node_ComponentBoundEvent_4_OnEntrySelected__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UIGUI_WidgetBase*                            Widget                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            UserIndex                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FSheikPlayerSocialEntry                     PlayerSocialEntry                                          (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UWBP_Sheik_Social_Friends_C::BndEvt__PlayerList_K2Node_ComponentBoundEvent_4_OnEntrySelected__DelegateSignature(class UIGUI_WidgetBase* Widget, int32_t UserIndex, const struct FSheikPlayerSocialEntry& PlayerSocialEntry)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Social_Friends.WBP_Sheik_Social_Friends_C.BndEvt__PlayerList_K2Node_ComponentBoundEvent_4_OnEntrySelected__DelegateSignature");
		
		UWBP_Sheik_Social_Friends_C_BndEvt__PlayerList_K2Node_ComponentBoundEvent_4_OnEntrySelected__DelegateSignature_Params params {};
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
	 * 		Name   -> Function WBP_Sheik_Social_Friends.WBP_Sheik_Social_Friends_C.BndEvt__OptionsPanel_K2Node_ComponentBoundEvent_5_OnClose__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_Social_Friends_C::BndEvt__OptionsPanel_K2Node_ComponentBoundEvent_5_OnClose__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Social_Friends.WBP_Sheik_Social_Friends_C.BndEvt__OptionsPanel_K2Node_ComponentBoundEvent_5_OnClose__DelegateSignature");
		
		UWBP_Sheik_Social_Friends_C_BndEvt__OptionsPanel_K2Node_ComponentBoundEvent_5_OnClose__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Social_Friends.WBP_Sheik_Social_Friends_C.OnGetSocialData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FSheikPlayerSocialEntry>             SocialEntries                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		bool                                               bWasSuccessful                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_Sheik_Social_Friends_C::OnGetSocialData(TArray<struct FSheikPlayerSocialEntry> SocialEntries, bool bWasSuccessful)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Social_Friends.WBP_Sheik_Social_Friends_C.OnGetSocialData");
		
		UWBP_Sheik_Social_Friends_C_OnGetSocialData_Params params {};
		params.SocialEntries = SocialEntries;
		params.bWasSuccessful = bWasSuccessful;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Social_Friends.WBP_Sheik_Social_Friends_C.ExecuteUbergraph_WBP_Sheik_Social_Friends
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_Social_Friends_C::ExecuteUbergraph_WBP_Sheik_Social_Friends(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Social_Friends.WBP_Sheik_Social_Friends_C.ExecuteUbergraph_WBP_Sheik_Social_Friends");
		
		UWBP_Sheik_Social_Friends_C_ExecuteUbergraph_WBP_Sheik_Social_Friends_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWBP_Sheik_Social_Friends_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWBP_Sheik_Social_Friends_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_Sheik_Social_Friends.WBP_Sheik_Social_Friends_C");
		return ptr;
	}

}


