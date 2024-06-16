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
	 * 		Name   -> Function WBP_Sheik_Social_ActivePlayersNumbers.WBP_Sheik_Social_ActivePlayersNumbers_C.SetData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FSheikPlayerAccount>                 PlayerAccounts                                             (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UWBP_Sheik_Social_ActivePlayersNumbers_C::SetData(TArray<struct FSheikPlayerAccount>* PlayerAccounts)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Social_ActivePlayersNumbers.WBP_Sheik_Social_ActivePlayersNumbers_C.SetData");
		
		UWBP_Sheik_Social_ActivePlayersNumbers_C_SetData_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (PlayerAccounts != nullptr)
			*PlayerAccounts = params.PlayerAccounts;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Social_ActivePlayersNumbers.WBP_Sheik_Social_ActivePlayersNumbers_C.SetText
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            FriendsPlaying                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            FriendsOnline                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            TotalFriends                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_Social_ActivePlayersNumbers_C::SetText(int32_t FriendsPlaying, int32_t FriendsOnline, int32_t TotalFriends)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Social_ActivePlayersNumbers.WBP_Sheik_Social_ActivePlayersNumbers_C.SetText");
		
		UWBP_Sheik_Social_ActivePlayersNumbers_C_SetText_Params params {};
		params.FriendsPlaying = FriendsPlaying;
		params.FriendsOnline = FriendsOnline;
		params.TotalFriends = TotalFriends;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Social_ActivePlayersNumbers.WBP_Sheik_Social_ActivePlayersNumbers_C.GetFriendsManager
	 * 		Flags  -> ()
	 */
	class USheikFriendsManager* UWBP_Sheik_Social_ActivePlayersNumbers_C::GetFriendsManager()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Social_ActivePlayersNumbers.WBP_Sheik_Social_ActivePlayersNumbers_C.GetFriendsManager");
		
		UWBP_Sheik_Social_ActivePlayersNumbers_C_GetFriendsManager_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Social_ActivePlayersNumbers.WBP_Sheik_Social_ActivePlayersNumbers_C.OnFriendsListUpdated
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bSuccessful                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_Sheik_Social_ActivePlayersNumbers_C::OnFriendsListUpdated(bool bSuccessful)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Social_ActivePlayersNumbers.WBP_Sheik_Social_ActivePlayersNumbers_C.OnFriendsListUpdated");
		
		UWBP_Sheik_Social_ActivePlayersNumbers_C_OnFriendsListUpdated_Params params {};
		params.bSuccessful = bSuccessful;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Social_ActivePlayersNumbers.WBP_Sheik_Social_ActivePlayersNumbers_C.Construct
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_Social_ActivePlayersNumbers_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Social_ActivePlayersNumbers.WBP_Sheik_Social_ActivePlayersNumbers_C.Construct");
		
		UWBP_Sheik_Social_ActivePlayersNumbers_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Social_ActivePlayersNumbers.WBP_Sheik_Social_ActivePlayersNumbers_C.OnInitialized
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_Social_ActivePlayersNumbers_C::OnInitialized()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Social_ActivePlayersNumbers.WBP_Sheik_Social_ActivePlayersNumbers_C.OnInitialized");
		
		UWBP_Sheik_Social_ActivePlayersNumbers_C_OnInitialized_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Social_ActivePlayersNumbers.WBP_Sheik_Social_ActivePlayersNumbers_C.OnFriendPresenceUpdated
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSheikPlayerAccount                         Account                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UWBP_Sheik_Social_ActivePlayersNumbers_C::OnFriendPresenceUpdated(const struct FSheikPlayerAccount& Account)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Social_ActivePlayersNumbers.WBP_Sheik_Social_ActivePlayersNumbers_C.OnFriendPresenceUpdated");
		
		UWBP_Sheik_Social_ActivePlayersNumbers_C_OnFriendPresenceUpdated_Params params {};
		params.Account = Account;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Social_ActivePlayersNumbers.WBP_Sheik_Social_ActivePlayersNumbers_C.ExecuteUbergraph_WBP_Sheik_Social_ActivePlayersNumbers
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_Social_ActivePlayersNumbers_C::ExecuteUbergraph_WBP_Sheik_Social_ActivePlayersNumbers(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Social_ActivePlayersNumbers.WBP_Sheik_Social_ActivePlayersNumbers_C.ExecuteUbergraph_WBP_Sheik_Social_ActivePlayersNumbers");
		
		UWBP_Sheik_Social_ActivePlayersNumbers_C_ExecuteUbergraph_WBP_Sheik_Social_ActivePlayersNumbers_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWBP_Sheik_Social_ActivePlayersNumbers_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWBP_Sheik_Social_ActivePlayersNumbers_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_Sheik_Social_ActivePlayersNumbers.WBP_Sheik_Social_ActivePlayersNumbers_C");
		return ptr;
	}

}


