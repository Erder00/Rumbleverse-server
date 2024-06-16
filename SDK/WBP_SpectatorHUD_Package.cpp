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
	 * 		Name   -> Function WBP_SpectatorHUD.WBP_SpectatorHUD_C.OnVoiceChatMuteListChanged
	 * 		Flags  -> ()
	 */
	void UWBP_SpectatorHUD_C::OnVoiceChatMuteListChanged()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_SpectatorHUD.WBP_SpectatorHUD_C.OnVoiceChatMuteListChanged");
		
		UWBP_SpectatorHUD_C_OnVoiceChatMuteListChanged_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_SpectatorHUD.WBP_SpectatorHUD_C.SetMutePromptText
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsAllMuted                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_SpectatorHUD_C::SetMutePromptText(bool IsAllMuted)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_SpectatorHUD.WBP_SpectatorHUD_C.SetMutePromptText");
		
		UWBP_SpectatorHUD_C_SetMutePromptText_Params params {};
		params.IsAllMuted = IsAllMuted;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_SpectatorHUD.WBP_SpectatorHUD_C.OpenSettingsMenu
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FInputEventData                             InputEventData                                             (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UWBP_SpectatorHUD_C::OpenSettingsMenu(const struct FInputEventData& InputEventData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_SpectatorHUD.WBP_SpectatorHUD_C.OpenSettingsMenu");
		
		UWBP_SpectatorHUD_C_OpenSettingsMenu_Params params {};
		params.InputEventData = InputEventData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_SpectatorHUD.WBP_SpectatorHUD_C.OnVoiceChatOptionsChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsEnabled                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               IsMuted                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               IsDefeaned                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               IsPushToTalk                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_SpectatorHUD_C::OnVoiceChatOptionsChanged(bool IsEnabled, bool IsMuted, bool IsDefeaned, bool IsPushToTalk)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_SpectatorHUD.WBP_SpectatorHUD_C.OnVoiceChatOptionsChanged");
		
		UWBP_SpectatorHUD_C_OnVoiceChatOptionsChanged_Params params {};
		params.IsEnabled = IsEnabled;
		params.IsMuted = IsMuted;
		params.IsDefeaned = IsDefeaned;
		params.IsPushToTalk = IsPushToTalk;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_SpectatorHUD.WBP_SpectatorHUD_C.OnNextPlayerPressed_cb
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FInputEventData                             InputEventData                                             (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UWBP_SpectatorHUD_C::OnNextPlayerPressed_cb(const struct FInputEventData& InputEventData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_SpectatorHUD.WBP_SpectatorHUD_C.OnNextPlayerPressed_cb");
		
		UWBP_SpectatorHUD_C_OnNextPlayerPressed_cb_Params params {};
		params.InputEventData = InputEventData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_SpectatorHUD.WBP_SpectatorHUD_C.OnFreeCamPressed_cb
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FInputEventData                             InputEventData                                             (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UWBP_SpectatorHUD_C::OnFreeCamPressed_cb(const struct FInputEventData& InputEventData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_SpectatorHUD.WBP_SpectatorHUD_C.OnFreeCamPressed_cb");
		
		UWBP_SpectatorHUD_C_OnFreeCamPressed_cb_Params params {};
		params.InputEventData = InputEventData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_SpectatorHUD.WBP_SpectatorHUD_C.OnAutoControlCamPressed_cb
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FInputEventData                             InputEventData                                             (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UWBP_SpectatorHUD_C::OnAutoControlCamPressed_cb(const struct FInputEventData& InputEventData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_SpectatorHUD.WBP_SpectatorHUD_C.OnAutoControlCamPressed_cb");
		
		UWBP_SpectatorHUD_C_OnAutoControlCamPressed_cb_Params params {};
		params.InputEventData = InputEventData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_SpectatorHUD.WBP_SpectatorHUD_C.OnTeammateDied
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AIGPlayerState*                              TeammatePlayerState                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_SpectatorHUD_C::OnTeammateDied(class AIGPlayerState* TeammatePlayerState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_SpectatorHUD.WBP_SpectatorHUD_C.OnTeammateDied");
		
		UWBP_SpectatorHUD_C_OnTeammateDied_Params params {};
		params.TeammatePlayerState = TeammatePlayerState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_SpectatorHUD.WBP_SpectatorHUD_C.UpdateSpectatedPlayerPlatformImage
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ASheikPlayerStateCommon*                     Target                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_SpectatorHUD_C::UpdateSpectatedPlayerPlatformImage(class ASheikPlayerStateCommon* Target)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_SpectatorHUD.WBP_SpectatorHUD_C.UpdateSpectatedPlayerPlatformImage");
		
		UWBP_SpectatorHUD_C_UpdateSpectatedPlayerPlatformImage_Params params {};
		params.Target = Target;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_SpectatorHUD.WBP_SpectatorHUD_C.SetInitialSounds
	 * 		Flags  -> ()
	 */
	void UWBP_SpectatorHUD_C::SetInitialSounds()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_SpectatorHUD.WBP_SpectatorHUD_C.SetInitialSounds");
		
		UWBP_SpectatorHUD_C_SetInitialSounds_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_SpectatorHUD.WBP_SpectatorHUD_C.SetInitialStates
	 * 		Flags  -> ()
	 */
	void UWBP_SpectatorHUD_C::SetInitialStates()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_SpectatorHUD.WBP_SpectatorHUD_C.SetInitialStates");
		
		UWBP_SpectatorHUD_C_SetInitialStates_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_SpectatorHUD.WBP_SpectatorHUD_C.ToggleSpectatorVisibility
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Show                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_SpectatorHUD_C::ToggleSpectatorVisibility(bool Show)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_SpectatorHUD.WBP_SpectatorHUD_C.ToggleSpectatorVisibility");
		
		UWBP_SpectatorHUD_C_ToggleSpectatorVisibility_Params params {};
		params.Show = Show;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_SpectatorHUD.WBP_SpectatorHUD_C.SetIsSpectatorMovementAllowed
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               CachedSpecatorMovementAllowed                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_SpectatorHUD_C::SetIsSpectatorMovementAllowed(bool CachedSpecatorMovementAllowed)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_SpectatorHUD.WBP_SpectatorHUD_C.SetIsSpectatorMovementAllowed");
		
		UWBP_SpectatorHUD_C_SetIsSpectatorMovementAllowed_Params params {};
		params.CachedSpecatorMovementAllowed = CachedSpecatorMovementAllowed;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_SpectatorHUD.WBP_SpectatorHUD_C.ManageInputSubscriptions
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Subscribe                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_SpectatorHUD_C::ManageInputSubscriptions(bool Subscribe)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_SpectatorHUD.WBP_SpectatorHUD_C.ManageInputSubscriptions");
		
		UWBP_SpectatorHUD_C_ManageInputSubscriptions_Params params {};
		params.Subscribe = Subscribe;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_SpectatorHUD.WBP_SpectatorHUD_C.SetVisibilityForPlayerSpecificHUD
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsVisible                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_SpectatorHUD_C::SetVisibilityForPlayerSpecificHUD(bool IsVisible)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_SpectatorHUD.WBP_SpectatorHUD_C.SetVisibilityForPlayerSpecificHUD");
		
		UWBP_SpectatorHUD_C_SetVisibilityForPlayerSpecificHUD_Params params {};
		params.IsVisible = IsVisible;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_SpectatorHUD.WBP_SpectatorHUD_C.OnPlayerViewToggleChanged
	 * 		Flags  -> ()
	 */
	void UWBP_SpectatorHUD_C::OnPlayerViewToggleChanged()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_SpectatorHUD.WBP_SpectatorHUD_C.OnPlayerViewToggleChanged");
		
		UWBP_SpectatorHUD_C_OnPlayerViewToggleChanged_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_SpectatorHUD.WBP_SpectatorHUD_C.OnPlayerFollowingChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsFollowingPlayer                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_SpectatorHUD_C::OnPlayerFollowingChanged(bool IsFollowingPlayer)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_SpectatorHUD.WBP_SpectatorHUD_C.OnPlayerFollowingChanged");
		
		UWBP_SpectatorHUD_C_OnPlayerFollowingChanged_Params params {};
		params.IsFollowingPlayer = IsFollowingPlayer;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_SpectatorHUD.WBP_SpectatorHUD_C.ConstructOnlyOnce
	 * 		Flags  -> ()
	 */
	void UWBP_SpectatorHUD_C::ConstructOnlyOnce()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_SpectatorHUD.WBP_SpectatorHUD_C.ConstructOnlyOnce");
		
		UWBP_SpectatorHUD_C_ConstructOnlyOnce_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_SpectatorHUD.WBP_SpectatorHUD_C.ExecuteUbergraph_WBP_SpectatorHUD
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_SpectatorHUD_C::ExecuteUbergraph_WBP_SpectatorHUD(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_SpectatorHUD.WBP_SpectatorHUD_C.ExecuteUbergraph_WBP_SpectatorHUD");
		
		UWBP_SpectatorHUD_C_ExecuteUbergraph_WBP_SpectatorHUD_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWBP_SpectatorHUD_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWBP_SpectatorHUD_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_SpectatorHUD.WBP_SpectatorHUD_C");
		return ptr;
	}

}


