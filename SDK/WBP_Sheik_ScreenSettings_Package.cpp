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
	 * 		Name   -> Function WBP_Sheik_ScreenSettings.WBP_Sheik_ScreenSettings_C.DeconstructInputGroups
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_ScreenSettings_C::DeconstructInputGroups()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_ScreenSettings.WBP_Sheik_ScreenSettings_C.DeconstructInputGroups");
		
		UWBP_Sheik_ScreenSettings_C_DeconstructInputGroups_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_ScreenSettings.WBP_Sheik_ScreenSettings_C.ConstructInputGroups
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_ScreenSettings_C::ConstructInputGroups()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_ScreenSettings.WBP_Sheik_ScreenSettings_C.ConstructInputGroups");
		
		UWBP_Sheik_ScreenSettings_C_ConstructInputGroups_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_ScreenSettings.WBP_Sheik_ScreenSettings_C.SetNavClickAudioSingleTab
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_ScreenSettings_C::SetNavClickAudioSingleTab()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_ScreenSettings.WBP_Sheik_ScreenSettings_C.SetNavClickAudioSingleTab");
		
		UWBP_Sheik_ScreenSettings_C_SetNavClickAudioSingleTab_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_ScreenSettings.WBP_Sheik_ScreenSettings_C.SetNavClickAudioAllTabs
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_ScreenSettings_C::SetNavClickAudioAllTabs()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_ScreenSettings.WBP_Sheik_ScreenSettings_C.SetNavClickAudioAllTabs");
		
		UWBP_Sheik_ScreenSettings_C_SetNavClickAudioAllTabs_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_ScreenSettings.WBP_Sheik_ScreenSettings_C.ReturnToTitleScreen
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_ScreenSettings_C::ReturnToTitleScreen()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_ScreenSettings.WBP_Sheik_ScreenSettings_C.ReturnToTitleScreen");
		
		UWBP_Sheik_ScreenSettings_C_ReturnToTitleScreen_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_ScreenSettings.WBP_Sheik_ScreenSettings_C.OpenConfirmationPopup
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FScriptDelegate                              ConfirmedPressedCallback                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor)
	 * 		class FScriptDelegate                              CanceledPressedCallback                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor)
	 * 		class FText                                        ConfirmButtonText                                          (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		class FText                                        CancelButtonText                                           (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		class FText                                        HeaderText                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		class FText                                        BodyText                                                   (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UWBP_Sheik_ScreenSettings_C::OpenConfirmationPopup(const class FScriptDelegate& ConfirmedPressedCallback, const class FScriptDelegate& CanceledPressedCallback, const class FText& ConfirmButtonText, const class FText& CancelButtonText, const class FText& HeaderText, const class FText& BodyText)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_ScreenSettings.WBP_Sheik_ScreenSettings_C.OpenConfirmationPopup");
		
		UWBP_Sheik_ScreenSettings_C_OpenConfirmationPopup_Params params {};
		params.ConfirmedPressedCallback = ConfirmedPressedCallback;
		params.CanceledPressedCallback = CanceledPressedCallback;
		params.ConfirmButtonText = ConfirmButtonText;
		params.CancelButtonText = CancelButtonText;
		params.HeaderText = HeaderText;
		params.BodyText = BodyText;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_ScreenSettings.WBP_Sheik_ScreenSettings_C.GetPopupSystem
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UWBP_SheikPopupSystem_C*                     PopupSystemWidget                                          (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_ScreenSettings_C::GetPopupSystem(class UWBP_SheikPopupSystem_C** PopupSystemWidget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_ScreenSettings.WBP_Sheik_ScreenSettings_C.GetPopupSystem");
		
		UWBP_Sheik_ScreenSettings_C_GetPopupSystem_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (PopupSystemWidget != nullptr)
			*PopupSystemWidget = params.PopupSystemWidget;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_ScreenSettings.WBP_Sheik_ScreenSettings_C.SetTabWidgets
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_ScreenSettings_C::SetTabWidgets()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_ScreenSettings.WBP_Sheik_ScreenSettings_C.SetTabWidgets");
		
		UWBP_Sheik_ScreenSettings_C_SetTabWidgets_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_ScreenSettings.WBP_Sheik_ScreenSettings_C.SetInGame
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsInGame                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_Sheik_ScreenSettings_C::SetInGame(bool IsInGame)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_ScreenSettings.WBP_Sheik_ScreenSettings_C.SetInGame");
		
		UWBP_Sheik_ScreenSettings_C_SetInGame_Params params {};
		params.IsInGame = IsInGame;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_ScreenSettings.WBP_Sheik_ScreenSettings_C.TabSelectionChanged_Cb
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UIGUI_WidgetBase*                            Source                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            TabIndex                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_ScreenSettings_C::TabSelectionChanged_Cb(class UIGUI_WidgetBase* Source, int32_t TabIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_ScreenSettings.WBP_Sheik_ScreenSettings_C.TabSelectionChanged_Cb");
		
		UWBP_Sheik_ScreenSettings_C_TabSelectionChanged_Cb_Params params {};
		params.Source = Source;
		params.TabIndex = TabIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_ScreenSettings.WBP_Sheik_ScreenSettings_C.IsInMatch
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsInMatch                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_Sheik_ScreenSettings_C::IsInMatch(bool* IsInMatch)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_ScreenSettings.WBP_Sheik_ScreenSettings_C.IsInMatch");
		
		UWBP_Sheik_ScreenSettings_C_IsInMatch_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (IsInMatch != nullptr)
			*IsInMatch = params.IsInMatch;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_ScreenSettings.WBP_Sheik_ScreenSettings_C.BackPressed_cb
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FInputEventData                             InputEvent                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UWBP_Sheik_ScreenSettings_C::BackPressed_cb(const struct FInputEventData& InputEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_ScreenSettings.WBP_Sheik_ScreenSettings_C.BackPressed_cb");
		
		UWBP_Sheik_ScreenSettings_C_BackPressed_cb_Params params {};
		params.InputEvent = InputEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_ScreenSettings.WBP_Sheik_ScreenSettings_C.LeftFaceButtonPressed
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FInputEventData                             InputEventData                                             (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UWBP_Sheik_ScreenSettings_C::LeftFaceButtonPressed(const struct FInputEventData& InputEventData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_ScreenSettings.WBP_Sheik_ScreenSettings_C.LeftFaceButtonPressed");
		
		UWBP_Sheik_ScreenSettings_C_LeftFaceButtonPressed_Params params {};
		params.InputEventData = InputEventData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_ScreenSettings.WBP_Sheik_ScreenSettings_C.ConfirmQuit
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            PopupId                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FName                                        BindingName                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_ScreenSettings_C::ConfirmQuit(int32_t PopupId, const class FName& BindingName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_ScreenSettings.WBP_Sheik_ScreenSettings_C.ConfirmQuit");
		
		UWBP_Sheik_ScreenSettings_C_ConfirmQuit_Params params {};
		params.PopupId = PopupId;
		params.BindingName = BindingName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_ScreenSettings.WBP_Sheik_ScreenSettings_C.CancelQuit
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            PopupId                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FName                                        BindingName                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_ScreenSettings_C::CancelQuit(int32_t PopupId, const class FName& BindingName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_ScreenSettings.WBP_Sheik_ScreenSettings_C.CancelQuit");
		
		UWBP_Sheik_ScreenSettings_C_CancelQuit_Params params {};
		params.PopupId = PopupId;
		params.BindingName = BindingName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_ScreenSettings.WBP_Sheik_ScreenSettings_C.OnLoseFocus
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            UserIndex                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_ScreenSettings_C::OnLoseFocus(int32_t UserIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_ScreenSettings.WBP_Sheik_ScreenSettings_C.OnLoseFocus");
		
		UWBP_Sheik_ScreenSettings_C_OnLoseFocus_Params params {};
		params.UserIndex = UserIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_ScreenSettings.WBP_Sheik_ScreenSettings_C.Settings_OnApplicationDeactivate
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_ScreenSettings_C::Settings_OnApplicationDeactivate()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_ScreenSettings.WBP_Sheik_ScreenSettings_C.Settings_OnApplicationDeactivate");
		
		UWBP_Sheik_ScreenSettings_C_Settings_OnApplicationDeactivate_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_ScreenSettings.WBP_Sheik_ScreenSettings_C.Settings_OnApplicationWillTerminate
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_ScreenSettings_C::Settings_OnApplicationWillTerminate()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_ScreenSettings.WBP_Sheik_ScreenSettings_C.Settings_OnApplicationWillTerminate");
		
		UWBP_Sheik_ScreenSettings_C_Settings_OnApplicationWillTerminate_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_ScreenSettings.WBP_Sheik_ScreenSettings_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_Sheik_ScreenSettings_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_ScreenSettings.WBP_Sheik_ScreenSettings_C.PreConstruct");
		
		UWBP_Sheik_ScreenSettings_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_ScreenSettings.WBP_Sheik_ScreenSettings_C.Settings_OnApplicationToBackround
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_ScreenSettings_C::Settings_OnApplicationToBackround()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_ScreenSettings.WBP_Sheik_ScreenSettings_C.Settings_OnApplicationToBackround");
		
		UWBP_Sheik_ScreenSettings_C_Settings_OnApplicationToBackround_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_ScreenSettings.WBP_Sheik_ScreenSettings_C.ConfirmReturnToTitleScreen
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            PopupId                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FName                                        BindingName                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_ScreenSettings_C::ConfirmReturnToTitleScreen(int32_t PopupId, const class FName& BindingName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_ScreenSettings.WBP_Sheik_ScreenSettings_C.ConfirmReturnToTitleScreen");
		
		UWBP_Sheik_ScreenSettings_C_ConfirmReturnToTitleScreen_Params params {};
		params.PopupId = PopupId;
		params.BindingName = BindingName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_ScreenSettings.WBP_Sheik_ScreenSettings_C.OnGainFocus
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            UserIndex                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_ScreenSettings_C::OnGainFocus(int32_t UserIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_ScreenSettings.WBP_Sheik_ScreenSettings_C.OnGainFocus");
		
		UWBP_Sheik_ScreenSettings_C_OnGainFocus_Params params {};
		params.UserIndex = UserIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_ScreenSettings.WBP_Sheik_ScreenSettings_C.HandleStartRestrictedMatchConfirmed
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      InviteCode                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		int32_t                                            JoinTimer                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               ShouldServerBackfill                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class FString                                      MatchConfig                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_ScreenSettings_C::HandleStartRestrictedMatchConfirmed(const class FString& InviteCode, int32_t JoinTimer, bool ShouldServerBackfill, const class FString& MatchConfig)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_ScreenSettings.WBP_Sheik_ScreenSettings_C.HandleStartRestrictedMatchConfirmed");
		
		UWBP_Sheik_ScreenSettings_C_HandleStartRestrictedMatchConfirmed_Params params {};
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
	 * 		Name   -> Function WBP_Sheik_ScreenSettings.WBP_Sheik_ScreenSettings_C.HandleJoinRestrictedMatchConfirmed
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      InviteCode                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		class FString                                      MatchConfig                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_ScreenSettings_C::HandleJoinRestrictedMatchConfirmed(const class FString& InviteCode, const class FString& MatchConfig)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_ScreenSettings.WBP_Sheik_ScreenSettings_C.HandleJoinRestrictedMatchConfirmed");
		
		UWBP_Sheik_ScreenSettings_C_HandleJoinRestrictedMatchConfirmed_Params params {};
		params.InviteCode = InviteCode;
		params.MatchConfig = MatchConfig;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_ScreenSettings.WBP_Sheik_ScreenSettings_C.ConstructOnlyOnce
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_ScreenSettings_C::ConstructOnlyOnce()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_ScreenSettings.WBP_Sheik_ScreenSettings_C.ConstructOnlyOnce");
		
		UWBP_Sheik_ScreenSettings_C_ConstructOnlyOnce_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_ScreenSettings.WBP_Sheik_ScreenSettings_C.OnEulaPopupShown
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_ScreenSettings_C::OnEulaPopupShown()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_ScreenSettings.WBP_Sheik_ScreenSettings_C.OnEulaPopupShown");
		
		UWBP_Sheik_ScreenSettings_C_OnEulaPopupShown_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_ScreenSettings.WBP_Sheik_ScreenSettings_C.OnEulaPopupHidden
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_ScreenSettings_C::OnEulaPopupHidden()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_ScreenSettings.WBP_Sheik_ScreenSettings_C.OnEulaPopupHidden");
		
		UWBP_Sheik_ScreenSettings_C_OnEulaPopupHidden_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_ScreenSettings.WBP_Sheik_ScreenSettings_C.ExecuteUbergraph_WBP_Sheik_ScreenSettings
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_ScreenSettings_C::ExecuteUbergraph_WBP_Sheik_ScreenSettings(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_ScreenSettings.WBP_Sheik_ScreenSettings_C.ExecuteUbergraph_WBP_Sheik_ScreenSettings");
		
		UWBP_Sheik_ScreenSettings_C_ExecuteUbergraph_WBP_Sheik_ScreenSettings_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_ScreenSettings.WBP_Sheik_ScreenSettings_C.JoinRestrictedMatchConfirmed__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      InviteCode                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		class FString                                      MatchConfig                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_ScreenSettings_C::JoinRestrictedMatchConfirmed__DelegateSignature(const class FString& InviteCode, const class FString& MatchConfig)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_ScreenSettings.WBP_Sheik_ScreenSettings_C.JoinRestrictedMatchConfirmed__DelegateSignature");
		
		UWBP_Sheik_ScreenSettings_C_JoinRestrictedMatchConfirmed__DelegateSignature_Params params {};
		params.InviteCode = InviteCode;
		params.MatchConfig = MatchConfig;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_ScreenSettings.WBP_Sheik_ScreenSettings_C.StartRestrictedMatchConfirmed__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      InviteCode                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		int32_t                                            JoinTimer                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               ShouldServerBackfill                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class FString                                      MatchConfig                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_ScreenSettings_C::StartRestrictedMatchConfirmed__DelegateSignature(const class FString& InviteCode, int32_t JoinTimer, bool ShouldServerBackfill, const class FString& MatchConfig)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_ScreenSettings.WBP_Sheik_ScreenSettings_C.StartRestrictedMatchConfirmed__DelegateSignature");
		
		UWBP_Sheik_ScreenSettings_C_StartRestrictedMatchConfirmed__DelegateSignature_Params params {};
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
	 * 		Name   -> Function WBP_Sheik_ScreenSettings.WBP_Sheik_ScreenSettings_C.OnExit__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_ScreenSettings_C::OnExit__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_ScreenSettings.WBP_Sheik_ScreenSettings_C.OnExit__DelegateSignature");
		
		UWBP_Sheik_ScreenSettings_C_OnExit__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWBP_Sheik_ScreenSettings_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWBP_Sheik_ScreenSettings_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_Sheik_ScreenSettings.WBP_Sheik_ScreenSettings_C");
		return ptr;
	}

}


