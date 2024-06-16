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
	 * 		Name   -> Function WBP_Sheik_ScreenSocialMenu.WBP_Sheik_ScreenSocialMenu_C.DebugPrintPlatformBlockedPlayers
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_ScreenSocialMenu_C::DebugPrintPlatformBlockedPlayers()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_ScreenSocialMenu.WBP_Sheik_ScreenSocialMenu_C.DebugPrintPlatformBlockedPlayers");
		
		UWBP_Sheik_ScreenSocialMenu_C_DebugPrintPlatformBlockedPlayers_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_ScreenSocialMenu.WBP_Sheik_ScreenSocialMenu_C.DebugPrintBlockedPlayers
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_ScreenSocialMenu_C::DebugPrintBlockedPlayers()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_ScreenSocialMenu.WBP_Sheik_ScreenSocialMenu_C.DebugPrintBlockedPlayers");
		
		UWBP_Sheik_ScreenSocialMenu_C_DebugPrintBlockedPlayers_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_ScreenSocialMenu.WBP_Sheik_ScreenSocialMenu_C.SetInGame
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsInGame                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_Sheik_ScreenSocialMenu_C::SetInGame(bool IsInGame)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_ScreenSocialMenu.WBP_Sheik_ScreenSocialMenu_C.SetInGame");
		
		UWBP_Sheik_ScreenSocialMenu_C_SetInGame_Params params {};
		params.IsInGame = IsInGame;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_ScreenSocialMenu.WBP_Sheik_ScreenSocialMenu_C.GetFriendsManager
	 * 		Flags  -> ()
	 */
	class USheikFriendsManager* UWBP_Sheik_ScreenSocialMenu_C::GetFriendsManager()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_ScreenSocialMenu.WBP_Sheik_ScreenSocialMenu_C.GetFriendsManager");
		
		UWBP_Sheik_ScreenSocialMenu_C_GetFriendsManager_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_ScreenSocialMenu.WBP_Sheik_ScreenSocialMenu_C.BackPressed_cb
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FInputEventData                             InputEventData                                             (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UWBP_Sheik_ScreenSocialMenu_C::BackPressed_cb(const struct FInputEventData& InputEventData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_ScreenSocialMenu.WBP_Sheik_ScreenSocialMenu_C.BackPressed_cb");
		
		UWBP_Sheik_ScreenSocialMenu_C_BackPressed_cb_Params params {};
		params.InputEventData = InputEventData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_ScreenSocialMenu.WBP_Sheik_ScreenSocialMenu_C.TabSelected_CB
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UIGUI_WidgetBase*                            Source                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            TabIndex                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_ScreenSocialMenu_C::TabSelected_CB(class UIGUI_WidgetBase* Source, int32_t TabIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_ScreenSocialMenu.WBP_Sheik_ScreenSocialMenu_C.TabSelected_CB");
		
		UWBP_Sheik_ScreenSocialMenu_C_TabSelected_CB_Params params {};
		params.Source = Source;
		params.TabIndex = TabIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_ScreenSocialMenu.WBP_Sheik_ScreenSocialMenu_C.OnLoseFocus
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            UserIndex                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_ScreenSocialMenu_C::OnLoseFocus(int32_t UserIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_ScreenSocialMenu.WBP_Sheik_ScreenSocialMenu_C.OnLoseFocus");
		
		UWBP_Sheik_ScreenSocialMenu_C_OnLoseFocus_Params params {};
		params.UserIndex = UserIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_ScreenSocialMenu.WBP_Sheik_ScreenSocialMenu_C.HandleStartRestrictedMatchConfirmed
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      InviteCode                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		int32_t                                            JoinTimer                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               ShouldServerBackfill                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class FString                                      MatchConfig                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_ScreenSocialMenu_C::HandleStartRestrictedMatchConfirmed(const class FString& InviteCode, int32_t JoinTimer, bool ShouldServerBackfill, const class FString& MatchConfig)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_ScreenSocialMenu.WBP_Sheik_ScreenSocialMenu_C.HandleStartRestrictedMatchConfirmed");
		
		UWBP_Sheik_ScreenSocialMenu_C_HandleStartRestrictedMatchConfirmed_Params params {};
		params.InviteCode = InviteCode;
		params.JoinTimer = JoinTimer;
		params.ShouldServerBackfill = ShouldServerBackfill;
		params.MatchConfig = MatchConfig;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_ScreenSocialMenu.WBP_Sheik_ScreenSocialMenu_C.HandleJoinRestrictedMatchConfirmed
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      InviteCode                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		class FString                                      MatchConfig                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_ScreenSocialMenu_C::HandleJoinRestrictedMatchConfirmed(const class FString& InviteCode, const class FString& MatchConfig)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_ScreenSocialMenu.WBP_Sheik_ScreenSocialMenu_C.HandleJoinRestrictedMatchConfirmed");
		
		UWBP_Sheik_ScreenSocialMenu_C_HandleJoinRestrictedMatchConfirmed_Params params {};
		params.InviteCode = InviteCode;
		params.MatchConfig = MatchConfig;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_ScreenSocialMenu.WBP_Sheik_ScreenSocialMenu_C.OnGainFocus
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            UserIndex                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_ScreenSocialMenu_C::OnGainFocus(int32_t UserIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_ScreenSocialMenu.WBP_Sheik_ScreenSocialMenu_C.OnGainFocus");
		
		UWBP_Sheik_ScreenSocialMenu_C_OnGainFocus_Params params {};
		params.UserIndex = UserIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_ScreenSocialMenu.WBP_Sheik_ScreenSocialMenu_C.ConstructOnlyOnce
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_ScreenSocialMenu_C::ConstructOnlyOnce()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_ScreenSocialMenu.WBP_Sheik_ScreenSocialMenu_C.ConstructOnlyOnce");
		
		UWBP_Sheik_ScreenSocialMenu_C_ConstructOnlyOnce_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_ScreenSocialMenu.WBP_Sheik_ScreenSocialMenu_C.OnBlockedPlayersUpdated
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_ScreenSocialMenu_C::OnBlockedPlayersUpdated()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_ScreenSocialMenu.WBP_Sheik_ScreenSocialMenu_C.OnBlockedPlayersUpdated");
		
		UWBP_Sheik_ScreenSocialMenu_C_OnBlockedPlayersUpdated_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_ScreenSocialMenu.WBP_Sheik_ScreenSocialMenu_C.OnInitialized
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_ScreenSocialMenu_C::OnInitialized()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_ScreenSocialMenu.WBP_Sheik_ScreenSocialMenu_C.OnInitialized");
		
		UWBP_Sheik_ScreenSocialMenu_C_OnInitialized_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_ScreenSocialMenu.WBP_Sheik_ScreenSocialMenu_C.ReportFormOpened
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_ScreenSocialMenu_C::ReportFormOpened()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_ScreenSocialMenu.WBP_Sheik_ScreenSocialMenu_C.ReportFormOpened");
		
		UWBP_Sheik_ScreenSocialMenu_C_ReportFormOpened_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_ScreenSocialMenu.WBP_Sheik_ScreenSocialMenu_C.ReportFormClosed
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_ScreenSocialMenu_C::ReportFormClosed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_ScreenSocialMenu.WBP_Sheik_ScreenSocialMenu_C.ReportFormClosed");
		
		UWBP_Sheik_ScreenSocialMenu_C_ReportFormClosed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_ScreenSocialMenu.WBP_Sheik_ScreenSocialMenu_C.ExecuteUbergraph_WBP_Sheik_ScreenSocialMenu
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_ScreenSocialMenu_C::ExecuteUbergraph_WBP_Sheik_ScreenSocialMenu(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_ScreenSocialMenu.WBP_Sheik_ScreenSocialMenu_C.ExecuteUbergraph_WBP_Sheik_ScreenSocialMenu");
		
		UWBP_Sheik_ScreenSocialMenu_C_ExecuteUbergraph_WBP_Sheik_ScreenSocialMenu_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_ScreenSocialMenu.WBP_Sheik_ScreenSocialMenu_C.JoinRestrictedMatchConfirmed__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      InviteCode                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		class FString                                      MatchConfig                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_ScreenSocialMenu_C::JoinRestrictedMatchConfirmed__DelegateSignature(const class FString& InviteCode, const class FString& MatchConfig)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_ScreenSocialMenu.WBP_Sheik_ScreenSocialMenu_C.JoinRestrictedMatchConfirmed__DelegateSignature");
		
		UWBP_Sheik_ScreenSocialMenu_C_JoinRestrictedMatchConfirmed__DelegateSignature_Params params {};
		params.InviteCode = InviteCode;
		params.MatchConfig = MatchConfig;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_ScreenSocialMenu.WBP_Sheik_ScreenSocialMenu_C.StartRestrictedMatchConfirmed__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      InviteCode                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		int32_t                                            JoinTimer                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               ShouldServerBackfill                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class FString                                      MatchConfig                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_ScreenSocialMenu_C::StartRestrictedMatchConfirmed__DelegateSignature(const class FString& InviteCode, int32_t JoinTimer, bool ShouldServerBackfill, const class FString& MatchConfig)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_ScreenSocialMenu.WBP_Sheik_ScreenSocialMenu_C.StartRestrictedMatchConfirmed__DelegateSignature");
		
		UWBP_Sheik_ScreenSocialMenu_C_StartRestrictedMatchConfirmed__DelegateSignature_Params params {};
		params.InviteCode = InviteCode;
		params.JoinTimer = JoinTimer;
		params.ShouldServerBackfill = ShouldServerBackfill;
		params.MatchConfig = MatchConfig;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_ScreenSocialMenu.WBP_Sheik_ScreenSocialMenu_C.OnExit__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_ScreenSocialMenu_C::OnExit__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_ScreenSocialMenu.WBP_Sheik_ScreenSocialMenu_C.OnExit__DelegateSignature");
		
		UWBP_Sheik_ScreenSocialMenu_C_OnExit__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWBP_Sheik_ScreenSocialMenu_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWBP_Sheik_ScreenSocialMenu_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_Sheik_ScreenSocialMenu.WBP_Sheik_ScreenSocialMenu_C");
		return ptr;
	}

}


