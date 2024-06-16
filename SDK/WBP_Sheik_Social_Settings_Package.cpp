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
	 * 		Name   -> Function WBP_Sheik_Social_Settings.WBP_Sheik_Social_Settings_C.UpdateCopyRestrictedMatchCodeButton
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_Social_Settings_C::UpdateCopyRestrictedMatchCodeButton()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Social_Settings.WBP_Sheik_Social_Settings_C.UpdateCopyRestrictedMatchCodeButton");
		
		UWBP_Sheik_Social_Settings_C_UpdateCopyRestrictedMatchCodeButton_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Social_Settings.WBP_Sheik_Social_Settings_C.ShouldDisableRestrictedMatchCreateandJoinButtons
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               ShouldDisable                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_Sheik_Social_Settings_C::ShouldDisableRestrictedMatchCreateandJoinButtons(bool* ShouldDisable)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Social_Settings.WBP_Sheik_Social_Settings_C.ShouldDisableRestrictedMatchCreateandJoinButtons");
		
		UWBP_Sheik_Social_Settings_C_ShouldDisableRestrictedMatchCreateandJoinButtons_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ShouldDisable != nullptr)
			*ShouldDisable = params.ShouldDisable;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Social_Settings.WBP_Sheik_Social_Settings_C.ShouldDisableCopyInviteCodeButton
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               ShouldDisable                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_Sheik_Social_Settings_C::ShouldDisableCopyInviteCodeButton(bool* ShouldDisable)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Social_Settings.WBP_Sheik_Social_Settings_C.ShouldDisableCopyInviteCodeButton");
		
		UWBP_Sheik_Social_Settings_C_ShouldDisableCopyInviteCodeButton_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ShouldDisable != nullptr)
			*ShouldDisable = params.ShouldDisable;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Social_Settings.WBP_Sheik_Social_Settings_C.UpdateFillTeammatesToggle
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               FillTeammates                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_Sheik_Social_Settings_C::UpdateFillTeammatesToggle(bool FillTeammates)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Social_Settings.WBP_Sheik_Social_Settings_C.UpdateFillTeammatesToggle");
		
		UWBP_Sheik_Social_Settings_C_UpdateFillTeammatesToggle_Params params {};
		params.FillTeammates = FillTeammates;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Social_Settings.WBP_Sheik_Social_Settings_C.RefreshFillTeammates
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_Social_Settings_C::RefreshFillTeammates()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Social_Settings.WBP_Sheik_Social_Settings_C.RefreshFillTeammates");
		
		UWBP_Sheik_Social_Settings_C_RefreshFillTeammates_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Social_Settings.WBP_Sheik_Social_Settings_C.RefreshVoiceChatOptions
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_Social_Settings_C::RefreshVoiceChatOptions()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Social_Settings.WBP_Sheik_Social_Settings_C.RefreshVoiceChatOptions");
		
		UWBP_Sheik_Social_Settings_C_RefreshVoiceChatOptions_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Social_Settings.WBP_Sheik_Social_Settings_C.DisableVoiceChatOptions
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_Social_Settings_C::DisableVoiceChatOptions()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Social_Settings.WBP_Sheik_Social_Settings_C.DisableVoiceChatOptions");
		
		UWBP_Sheik_Social_Settings_C_DisableVoiceChatOptions_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Social_Settings.WBP_Sheik_Social_Settings_C.VerifyVoiceChatPermissions
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               HasPermissions                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_Sheik_Social_Settings_C::VerifyVoiceChatPermissions(bool* HasPermissions)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Social_Settings.WBP_Sheik_Social_Settings_C.VerifyVoiceChatPermissions");
		
		UWBP_Sheik_Social_Settings_C_VerifyVoiceChatPermissions_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (HasPermissions != nullptr)
			*HasPermissions = params.HasPermissions;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Social_Settings.WBP_Sheik_Social_Settings_C.HideInputOutputDeviceSettings
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_Social_Settings_C::HideInputOutputDeviceSettings()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Social_Settings.WBP_Sheik_Social_Settings_C.HideInputOutputDeviceSettings");
		
		UWBP_Sheik_Social_Settings_C_HideInputOutputDeviceSettings_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Social_Settings.WBP_Sheik_Social_Settings_C.UpdateVoiceChatOutput
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            OutputDeviceIndex                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_Social_Settings_C::UpdateVoiceChatOutput(int32_t OutputDeviceIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Social_Settings.WBP_Sheik_Social_Settings_C.UpdateVoiceChatOutput");
		
		UWBP_Sheik_Social_Settings_C_UpdateVoiceChatOutput_Params params {};
		params.OutputDeviceIndex = OutputDeviceIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Social_Settings.WBP_Sheik_Social_Settings_C.InitializeVoiceChatOutputOptions
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_Social_Settings_C::InitializeVoiceChatOutputOptions()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Social_Settings.WBP_Sheik_Social_Settings_C.InitializeVoiceChatOutputOptions");
		
		UWBP_Sheik_Social_Settings_C_InitializeVoiceChatOutputOptions_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Social_Settings.WBP_Sheik_Social_Settings_C.UpdateVoiceChatInput
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            InputDeviceIndex                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_Social_Settings_C::UpdateVoiceChatInput(int32_t InputDeviceIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Social_Settings.WBP_Sheik_Social_Settings_C.UpdateVoiceChatInput");
		
		UWBP_Sheik_Social_Settings_C_UpdateVoiceChatInput_Params params {};
		params.InputDeviceIndex = InputDeviceIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Social_Settings.WBP_Sheik_Social_Settings_C.InitializeVoiceChatInputOptions
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_Social_Settings_C::InitializeVoiceChatInputOptions()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Social_Settings.WBP_Sheik_Social_Settings_C.InitializeVoiceChatInputOptions");
		
		UWBP_Sheik_Social_Settings_C_InitializeVoiceChatInputOptions_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Social_Settings.WBP_Sheik_Social_Settings_C.SetVoiceChatVolume
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Volume                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_Social_Settings_C::SetVoiceChatVolume(float Volume)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Social_Settings.WBP_Sheik_Social_Settings_C.SetVoiceChatVolume");
		
		UWBP_Sheik_Social_Settings_C_SetVoiceChatVolume_Params params {};
		params.Volume = Volume;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Social_Settings.WBP_Sheik_Social_Settings_C.UpdateVoiceChatPushToTalkText
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Enabled                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_Sheik_Social_Settings_C::UpdateVoiceChatPushToTalkText(bool Enabled)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Social_Settings.WBP_Sheik_Social_Settings_C.UpdateVoiceChatPushToTalkText");
		
		UWBP_Sheik_Social_Settings_C_UpdateVoiceChatPushToTalkText_Params params {};
		params.Enabled = Enabled;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Social_Settings.WBP_Sheik_Social_Settings_C.UpdateVoiceChatEnabledText
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Enabled                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_Sheik_Social_Settings_C::UpdateVoiceChatEnabledText(bool Enabled)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Social_Settings.WBP_Sheik_Social_Settings_C.UpdateVoiceChatEnabledText");
		
		UWBP_Sheik_Social_Settings_C_UpdateVoiceChatEnabledText_Params params {};
		params.Enabled = Enabled;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Social_Settings.WBP_Sheik_Social_Settings_C.SetupCrossplayControls
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_Social_Settings_C::SetupCrossplayControls()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Social_Settings.WBP_Sheik_Social_Settings_C.SetupCrossplayControls");
		
		UWBP_Sheik_Social_Settings_C_SetupCrossplayControls_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Social_Settings.WBP_Sheik_Social_Settings_C.GetMatchmakingCallbacks
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class USheikMatchmakingCallbacks*                  Out                                                        (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_Social_Settings_C::GetMatchmakingCallbacks(class USheikMatchmakingCallbacks** Out)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Social_Settings.WBP_Sheik_Social_Settings_C.GetMatchmakingCallbacks");
		
		UWBP_Sheik_Social_Settings_C_GetMatchmakingCallbacks_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Out != nullptr)
			*Out = params.Out;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Social_Settings.WBP_Sheik_Social_Settings_C.On Matchmaking Attempt Complete
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bSuccessful                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FSheikError                                 Error                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	 */
	void UWBP_Sheik_Social_Settings_C::OnMatchmakingAttemptComplete(bool bSuccessful, const struct FSheikError& Error)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Social_Settings.WBP_Sheik_Social_Settings_C.On Matchmaking Attempt Complete");
		
		UWBP_Sheik_Social_Settings_C_OnMatchmakingAttemptComplete_Params params {};
		params.bSuccessful = bSuccessful;
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Social_Settings.WBP_Sheik_Social_Settings_C.DisableCrossplayToggle
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_Social_Settings_C::DisableCrossplayToggle()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Social_Settings.WBP_Sheik_Social_Settings_C.DisableCrossplayToggle");
		
		UWBP_Sheik_Social_Settings_C_DisableCrossplayToggle_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Social_Settings.WBP_Sheik_Social_Settings_C.EnableCrossplayToggle
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_Social_Settings_C::EnableCrossplayToggle()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Social_Settings.WBP_Sheik_Social_Settings_C.EnableCrossplayToggle");
		
		UWBP_Sheik_Social_Settings_C_EnableCrossplayToggle_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Social_Settings.WBP_Sheik_Social_Settings_C.Bind to Party Update Events
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_Social_Settings_C::BindtoPartyUpdateEvents()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Social_Settings.WBP_Sheik_Social_Settings_C.Bind to Party Update Events");
		
		UWBP_Sheik_Social_Settings_C_BindtoPartyUpdateEvents_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Social_Settings.WBP_Sheik_Social_Settings_C.RefreshRestrictedMatchShowHideCode
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_Social_Settings_C::RefreshRestrictedMatchShowHideCode()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Social_Settings.WBP_Sheik_Social_Settings_C.RefreshRestrictedMatchShowHideCode");
		
		UWBP_Sheik_Social_Settings_C_RefreshRestrictedMatchShowHideCode_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Social_Settings.WBP_Sheik_Social_Settings_C.UpdateRestrictedMatchmakingCreation
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_Social_Settings_C::UpdateRestrictedMatchmakingCreation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Social_Settings.WBP_Sheik_Social_Settings_C.UpdateRestrictedMatchmakingCreation");
		
		UWBP_Sheik_Social_Settings_C_UpdateRestrictedMatchmakingCreation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Social_Settings.WBP_Sheik_Social_Settings_C.GetWalletSystem
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class USheikWalletSystem*                          OutWalletSystem                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_Social_Settings_C::GetWalletSystem(class USheikWalletSystem** OutWalletSystem)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Social_Settings.WBP_Sheik_Social_Settings_C.GetWalletSystem");
		
		UWBP_Sheik_Social_Settings_C_GetWalletSystem_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutWalletSystem != nullptr)
			*OutWalletSystem = params.OutWalletSystem;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Social_Settings.WBP_Sheik_Social_Settings_C.OpenCrossplayPopup
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_Social_Settings_C::OpenCrossplayPopup()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Social_Settings.WBP_Sheik_Social_Settings_C.OpenCrossplayPopup");
		
		UWBP_Sheik_Social_Settings_C_OpenCrossplayPopup_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Social_Settings.WBP_Sheik_Social_Settings_C.OpenRestrictedMatchErrorPopup
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_Social_Settings_C::OpenRestrictedMatchErrorPopup()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Social_Settings.WBP_Sheik_Social_Settings_C.OpenRestrictedMatchErrorPopup");
		
		UWBP_Sheik_Social_Settings_C_OpenRestrictedMatchErrorPopup_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Social_Settings.WBP_Sheik_Social_Settings_C.IsCrossplayEnabled
	 * 		Flags  -> ()
	 */
	bool UWBP_Sheik_Social_Settings_C::IsCrossplayEnabled()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Social_Settings.WBP_Sheik_Social_Settings_C.IsCrossplayEnabled");
		
		UWBP_Sheik_Social_Settings_C_IsCrossplayEnabled_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Social_Settings.WBP_Sheik_Social_Settings_C.RefreshSocialPrivacy
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_Social_Settings_C::RefreshSocialPrivacy()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Social_Settings.WBP_Sheik_Social_Settings_C.RefreshSocialPrivacy");
		
		UWBP_Sheik_Social_Settings_C_RefreshSocialPrivacy_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Social_Settings.WBP_Sheik_Social_Settings_C.CheckIfPartiedButNotLeader
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsPartiedButNotLeader                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_Sheik_Social_Settings_C::CheckIfPartiedButNotLeader(bool* IsPartiedButNotLeader)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Social_Settings.WBP_Sheik_Social_Settings_C.CheckIfPartiedButNotLeader");
		
		UWBP_Sheik_Social_Settings_C_CheckIfPartiedButNotLeader_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (IsPartiedButNotLeader != nullptr)
			*IsPartiedButNotLeader = params.IsPartiedButNotLeader;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Social_Settings.WBP_Sheik_Social_Settings_C.UpdateRestrictedMatchmakingButtons
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_Social_Settings_C::UpdateRestrictedMatchmakingButtons()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Social_Settings.WBP_Sheik_Social_Settings_C.UpdateRestrictedMatchmakingButtons");
		
		UWBP_Sheik_Social_Settings_C_UpdateRestrictedMatchmakingButtons_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Social_Settings.WBP_Sheik_Social_Settings_C.GetPartyManager
	 * 		Flags  -> ()
	 */
	class USheikPartyManager* UWBP_Sheik_Social_Settings_C::GetPartyManager()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Social_Settings.WBP_Sheik_Social_Settings_C.GetPartyManager");
		
		UWBP_Sheik_Social_Settings_C_GetPartyManager_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Social_Settings.WBP_Sheik_Social_Settings_C.GetNavigableWidgets
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<class UIGUI_WidgetBase*>                    NavigableWidgets                                           (Parm, OutParm, ContainsInstancedReference)
	 */
	void UWBP_Sheik_Social_Settings_C::GetNavigableWidgets(TArray<class UIGUI_WidgetBase*>* NavigableWidgets)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Social_Settings.WBP_Sheik_Social_Settings_C.GetNavigableWidgets");
		
		UWBP_Sheik_Social_Settings_C_GetNavigableWidgets_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (NavigableWidgets != nullptr)
			*NavigableWidgets = params.NavigableWidgets;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Social_Settings.WBP_Sheik_Social_Settings_C.BndEvt__RestrictedMatchCreate_K2Node_ComponentBoundEvent_6_OnStateChangeEventWithUserIndex__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UIGUI_WidgetBase*                            Widget                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            UserIndex                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_Social_Settings_C::BndEvt__RestrictedMatchCreate_K2Node_ComponentBoundEvent_6_OnStateChangeEventWithUserIndex__DelegateSignature(class UIGUI_WidgetBase* Widget, int32_t UserIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Social_Settings.WBP_Sheik_Social_Settings_C.BndEvt__RestrictedMatchCreate_K2Node_ComponentBoundEvent_6_OnStateChangeEventWithUserIndex__DelegateSignature");
		
		UWBP_Sheik_Social_Settings_C_BndEvt__RestrictedMatchCreate_K2Node_ComponentBoundEvent_6_OnStateChangeEventWithUserIndex__DelegateSignature_Params params {};
		params.Widget = Widget;
		params.UserIndex = UserIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Social_Settings.WBP_Sheik_Social_Settings_C.BndEvt__RestrictedMatchJoin_K2Node_ComponentBoundEvent_8_OnStateChangeEventWithUserIndex__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UIGUI_WidgetBase*                            Widget                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            UserIndex                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_Social_Settings_C::BndEvt__RestrictedMatchJoin_K2Node_ComponentBoundEvent_8_OnStateChangeEventWithUserIndex__DelegateSignature(class UIGUI_WidgetBase* Widget, int32_t UserIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Social_Settings.WBP_Sheik_Social_Settings_C.BndEvt__RestrictedMatchJoin_K2Node_ComponentBoundEvent_8_OnStateChangeEventWithUserIndex__DelegateSignature");
		
		UWBP_Sheik_Social_Settings_C_BndEvt__RestrictedMatchJoin_K2Node_ComponentBoundEvent_8_OnStateChangeEventWithUserIndex__DelegateSignature_Params params {};
		params.Widget = Widget;
		params.UserIndex = UserIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Social_Settings.WBP_Sheik_Social_Settings_C.HandleStartRestrictedMatchConfirmed
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      InviteCode                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		int32_t                                            JoinTimer                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bShouldServerBackfill                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class FString                                      MatchConfig                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_Social_Settings_C::HandleStartRestrictedMatchConfirmed(const class FString& InviteCode, int32_t JoinTimer, bool bShouldServerBackfill, const class FString& MatchConfig)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Social_Settings.WBP_Sheik_Social_Settings_C.HandleStartRestrictedMatchConfirmed");
		
		UWBP_Sheik_Social_Settings_C_HandleStartRestrictedMatchConfirmed_Params params {};
		params.InviteCode = InviteCode;
		params.JoinTimer = JoinTimer;
		params.bShouldServerBackfill = bShouldServerBackfill;
		params.MatchConfig = MatchConfig;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Social_Settings.WBP_Sheik_Social_Settings_C.OnActivated
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_Social_Settings_C::OnActivated()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Social_Settings.WBP_Sheik_Social_Settings_C.OnActivated");
		
		UWBP_Sheik_Social_Settings_C_OnActivated_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Social_Settings.WBP_Sheik_Social_Settings_C.HandleJoinRestrictedMatchConfirmed
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      InviteCode                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		class FString                                      MatchConfig                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_Social_Settings_C::HandleJoinRestrictedMatchConfirmed(const class FString& InviteCode, const class FString& MatchConfig)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Social_Settings.WBP_Sheik_Social_Settings_C.HandleJoinRestrictedMatchConfirmed");
		
		UWBP_Sheik_Social_Settings_C_HandleJoinRestrictedMatchConfirmed_Params params {};
		params.InviteCode = InviteCode;
		params.MatchConfig = MatchConfig;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Social_Settings.WBP_Sheik_Social_Settings_C.OnDeactivated
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_Social_Settings_C::OnDeactivated()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Social_Settings.WBP_Sheik_Social_Settings_C.OnDeactivated");
		
		UWBP_Sheik_Social_Settings_C_OnDeactivated_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Social_Settings.WBP_Sheik_Social_Settings_C.BndEvt__WBP_Sheik_Social_Settings_RestrictedMatchShowHideToggle_K2Node_ComponentBoundEvent_7_OnOptionChanged__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UIGUI_WidgetBase*                            Source                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FText                                        Text                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		int32_t                                            index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_Social_Settings_C::BndEvt__WBP_Sheik_Social_Settings_RestrictedMatchShowHideToggle_K2Node_ComponentBoundEvent_7_OnOptionChanged__DelegateSignature(class UIGUI_WidgetBase* Source, const class FText& Text, int32_t index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Social_Settings.WBP_Sheik_Social_Settings_C.BndEvt__WBP_Sheik_Social_Settings_RestrictedMatchShowHideToggle_K2Node_ComponentBoundEvent_7_OnOptionChanged__DelegateSignature");
		
		UWBP_Sheik_Social_Settings_C_BndEvt__WBP_Sheik_Social_Settings_RestrictedMatchShowHideToggle_K2Node_ComponentBoundEvent_7_OnOptionChanged__DelegateSignature_Params params {};
		params.Source = Source;
		params.Text = Text;
		params.index = index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Social_Settings.WBP_Sheik_Social_Settings_C.BndEvt__WBP_Sheik_Social_Settings_RestrictedMatchCopyInviteCode_K2Node_ComponentBoundEvent_9_OnStateChangeEventWithUserIndex__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UIGUI_WidgetBase*                            Widget                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            UserIndex                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_Social_Settings_C::BndEvt__WBP_Sheik_Social_Settings_RestrictedMatchCopyInviteCode_K2Node_ComponentBoundEvent_9_OnStateChangeEventWithUserIndex__DelegateSignature(class UIGUI_WidgetBase* Widget, int32_t UserIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Social_Settings.WBP_Sheik_Social_Settings_C.BndEvt__WBP_Sheik_Social_Settings_RestrictedMatchCopyInviteCode_K2Node_ComponentBoundEvent_9_OnStateChangeEventWithUserIndex__DelegateSignature");
		
		UWBP_Sheik_Social_Settings_C_BndEvt__WBP_Sheik_Social_Settings_RestrictedMatchCopyInviteCode_K2Node_ComponentBoundEvent_9_OnStateChangeEventWithUserIndex__DelegateSignature_Params params {};
		params.Widget = Widget;
		params.UserIndex = UserIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Social_Settings.WBP_Sheik_Social_Settings_C.OnRestrictedMatchHideMatchCodeChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bHideInviteCode                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_Sheik_Social_Settings_C::OnRestrictedMatchHideMatchCodeChanged(bool bHideInviteCode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Social_Settings.WBP_Sheik_Social_Settings_C.OnRestrictedMatchHideMatchCodeChanged");
		
		UWBP_Sheik_Social_Settings_C_OnRestrictedMatchHideMatchCodeChanged_Params params {};
		params.bHideInviteCode = bHideInviteCode;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Social_Settings.WBP_Sheik_Social_Settings_C.BndEvt__WBP_Sheik_Social_Settings_CrossplayToggle_1_K2Node_ComponentBoundEvent_2_OnOptionChanged__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UIGUI_WidgetBase*                            Source                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FText                                        Text                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		int32_t                                            index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_Social_Settings_C::BndEvt__WBP_Sheik_Social_Settings_CrossplayToggle_1_K2Node_ComponentBoundEvent_2_OnOptionChanged__DelegateSignature(class UIGUI_WidgetBase* Source, const class FText& Text, int32_t index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Social_Settings.WBP_Sheik_Social_Settings_C.BndEvt__WBP_Sheik_Social_Settings_CrossplayToggle_1_K2Node_ComponentBoundEvent_2_OnOptionChanged__DelegateSignature");
		
		UWBP_Sheik_Social_Settings_C_BndEvt__WBP_Sheik_Social_Settings_CrossplayToggle_1_K2Node_ComponentBoundEvent_2_OnOptionChanged__DelegateSignature_Params params {};
		params.Source = Source;
		params.Text = Text;
		params.index = index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Social_Settings.WBP_Sheik_Social_Settings_C.HandleOnPlayerLeftParty
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Succeeded                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bLeftPrivate                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bLeftTeam                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bLeftPlatform                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_Sheik_Social_Settings_C::HandleOnPlayerLeftParty(bool Succeeded, bool bLeftPrivate, bool bLeftTeam, bool bLeftPlatform)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Social_Settings.WBP_Sheik_Social_Settings_C.HandleOnPlayerLeftParty");
		
		UWBP_Sheik_Social_Settings_C_HandleOnPlayerLeftParty_Params params {};
		params.Succeeded = Succeeded;
		params.bLeftPrivate = bLeftPrivate;
		params.bLeftTeam = bLeftTeam;
		params.bLeftPlatform = bLeftPlatform;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Social_Settings.WBP_Sheik_Social_Settings_C.HandleOnPartyPlayerLeftParty
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      PlayerId                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_Social_Settings_C::HandleOnPartyPlayerLeftParty(const class FString& PlayerId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Social_Settings.WBP_Sheik_Social_Settings_C.HandleOnPartyPlayerLeftParty");
		
		UWBP_Sheik_Social_Settings_C_HandleOnPartyPlayerLeftParty_Params params {};
		params.PlayerId = PlayerId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Social_Settings.WBP_Sheik_Social_Settings_C.HandleOnPlayerJoinedParty
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bSucceeded                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		ESheikPartyJoinFailure                             FailureReason                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_Social_Settings_C::HandleOnPlayerJoinedParty(bool bSucceeded, ESheikPartyJoinFailure FailureReason)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Social_Settings.WBP_Sheik_Social_Settings_C.HandleOnPlayerJoinedParty");
		
		UWBP_Sheik_Social_Settings_C_HandleOnPlayerJoinedParty_Params params {};
		params.bSucceeded = bSucceeded;
		params.FailureReason = FailureReason;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Social_Settings.WBP_Sheik_Social_Settings_C.HandleOnPartyPlayerJoinedParty
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      PlayerId                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		class FString                                      MetaData                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		TArray<struct FMatchmakerPlayerAttribute>          Attributes                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UWBP_Sheik_Social_Settings_C::HandleOnPartyPlayerJoinedParty(const class FString& PlayerId, const class FString& MetaData, TArray<struct FMatchmakerPlayerAttribute> Attributes)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Social_Settings.WBP_Sheik_Social_Settings_C.HandleOnPartyPlayerJoinedParty");
		
		UWBP_Sheik_Social_Settings_C_HandleOnPartyPlayerJoinedParty_Params params {};
		params.PlayerId = PlayerId;
		params.MetaData = MetaData;
		params.Attributes = Attributes;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Social_Settings.WBP_Sheik_Social_Settings_C.BndEvt__WBP_Sheik_Social_Settings_VoiceChatOptionsToggle_K2Node_ComponentBoundEvent_1_OnOptionChanged__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UIGUI_WidgetBase*                            Source                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FText                                        Text                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		int32_t                                            index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_Social_Settings_C::BndEvt__WBP_Sheik_Social_Settings_VoiceChatOptionsToggle_K2Node_ComponentBoundEvent_1_OnOptionChanged__DelegateSignature(class UIGUI_WidgetBase* Source, const class FText& Text, int32_t index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Social_Settings.WBP_Sheik_Social_Settings_C.BndEvt__WBP_Sheik_Social_Settings_VoiceChatOptionsToggle_K2Node_ComponentBoundEvent_1_OnOptionChanged__DelegateSignature");
		
		UWBP_Sheik_Social_Settings_C_BndEvt__WBP_Sheik_Social_Settings_VoiceChatOptionsToggle_K2Node_ComponentBoundEvent_1_OnOptionChanged__DelegateSignature_Params params {};
		params.Source = Source;
		params.Text = Text;
		params.index = index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Social_Settings.WBP_Sheik_Social_Settings_C.BndEvt__WBP_Sheik_Social_Settings_VoiceChatMethodToggle_K2Node_ComponentBoundEvent_3_OnOptionChanged__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UIGUI_WidgetBase*                            Source                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FText                                        Text                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		int32_t                                            index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_Social_Settings_C::BndEvt__WBP_Sheik_Social_Settings_VoiceChatMethodToggle_K2Node_ComponentBoundEvent_3_OnOptionChanged__DelegateSignature(class UIGUI_WidgetBase* Source, const class FText& Text, int32_t index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Social_Settings.WBP_Sheik_Social_Settings_C.BndEvt__WBP_Sheik_Social_Settings_VoiceChatMethodToggle_K2Node_ComponentBoundEvent_3_OnOptionChanged__DelegateSignature");
		
		UWBP_Sheik_Social_Settings_C_BndEvt__WBP_Sheik_Social_Settings_VoiceChatMethodToggle_K2Node_ComponentBoundEvent_3_OnOptionChanged__DelegateSignature_Params params {};
		params.Source = Source;
		params.Text = Text;
		params.index = index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Social_Settings.WBP_Sheik_Social_Settings_C.BndEvt__WBP_Sheik_Social_Settings_VoiceChatVolumeSlider_K2Node_ComponentBoundEvent_4_OnValueChanged__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UIGUI_WidgetBase*                            Source                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              RawValue                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              PercentValue                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_Social_Settings_C::BndEvt__WBP_Sheik_Social_Settings_VoiceChatVolumeSlider_K2Node_ComponentBoundEvent_4_OnValueChanged__DelegateSignature(class UIGUI_WidgetBase* Source, float RawValue, float PercentValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Social_Settings.WBP_Sheik_Social_Settings_C.BndEvt__WBP_Sheik_Social_Settings_VoiceChatVolumeSlider_K2Node_ComponentBoundEvent_4_OnValueChanged__DelegateSignature");
		
		UWBP_Sheik_Social_Settings_C_BndEvt__WBP_Sheik_Social_Settings_VoiceChatVolumeSlider_K2Node_ComponentBoundEvent_4_OnValueChanged__DelegateSignature_Params params {};
		params.Source = Source;
		params.RawValue = RawValue;
		params.PercentValue = PercentValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Social_Settings.WBP_Sheik_Social_Settings_C.BndEvt__WBP_Sheik_Social_Settings_VoiceChatInputDevice_K2Node_ComponentBoundEvent_5_OnOptionChanged__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UIGUI_WidgetBase*                            Source                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FText                                        Text                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		int32_t                                            index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_Social_Settings_C::BndEvt__WBP_Sheik_Social_Settings_VoiceChatInputDevice_K2Node_ComponentBoundEvent_5_OnOptionChanged__DelegateSignature(class UIGUI_WidgetBase* Source, const class FText& Text, int32_t index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Social_Settings.WBP_Sheik_Social_Settings_C.BndEvt__WBP_Sheik_Social_Settings_VoiceChatInputDevice_K2Node_ComponentBoundEvent_5_OnOptionChanged__DelegateSignature");
		
		UWBP_Sheik_Social_Settings_C_BndEvt__WBP_Sheik_Social_Settings_VoiceChatInputDevice_K2Node_ComponentBoundEvent_5_OnOptionChanged__DelegateSignature_Params params {};
		params.Source = Source;
		params.Text = Text;
		params.index = index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Social_Settings.WBP_Sheik_Social_Settings_C.BndEvt__WBP_Sheik_Social_Settings_VoiceChatOutputDevice_K2Node_ComponentBoundEvent_10_OnOptionChanged__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UIGUI_WidgetBase*                            Source                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FText                                        Text                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		int32_t                                            index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_Social_Settings_C::BndEvt__WBP_Sheik_Social_Settings_VoiceChatOutputDevice_K2Node_ComponentBoundEvent_10_OnOptionChanged__DelegateSignature(class UIGUI_WidgetBase* Source, const class FText& Text, int32_t index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Social_Settings.WBP_Sheik_Social_Settings_C.BndEvt__WBP_Sheik_Social_Settings_VoiceChatOutputDevice_K2Node_ComponentBoundEvent_10_OnOptionChanged__DelegateSignature");
		
		UWBP_Sheik_Social_Settings_C_BndEvt__WBP_Sheik_Social_Settings_VoiceChatOutputDevice_K2Node_ComponentBoundEvent_10_OnOptionChanged__DelegateSignature_Params params {};
		params.Source = Source;
		params.Text = Text;
		params.index = index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Social_Settings.WBP_Sheik_Social_Settings_C.OnVoiceChatOptionsUpdated
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bIsEnabled                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bIsMuted                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bIsDeafened                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bIsPushToTalk                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_Sheik_Social_Settings_C::OnVoiceChatOptionsUpdated(bool bIsEnabled, bool bIsMuted, bool bIsDeafened, bool bIsPushToTalk)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Social_Settings.WBP_Sheik_Social_Settings_C.OnVoiceChatOptionsUpdated");
		
		UWBP_Sheik_Social_Settings_C_OnVoiceChatOptionsUpdated_Params params {};
		params.bIsEnabled = bIsEnabled;
		params.bIsMuted = bIsMuted;
		params.bIsDeafened = bIsDeafened;
		params.bIsPushToTalk = bIsPushToTalk;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Social_Settings.WBP_Sheik_Social_Settings_C.OnVoiceChatAvailableAudioDevicesChanged
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_Social_Settings_C::OnVoiceChatAvailableAudioDevicesChanged()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Social_Settings.WBP_Sheik_Social_Settings_C.OnVoiceChatAvailableAudioDevicesChanged");
		
		UWBP_Sheik_Social_Settings_C_OnVoiceChatAvailableAudioDevicesChanged_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Social_Settings.WBP_Sheik_Social_Settings_C.BndEvt__SocialPrivacyToggle_K2Node_ComponentBoundEvent_0_OnOptionChanged__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UIGUI_WidgetBase*                            Source                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FText                                        Text                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		int32_t                                            index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_Social_Settings_C::BndEvt__SocialPrivacyToggle_K2Node_ComponentBoundEvent_0_OnOptionChanged__DelegateSignature(class UIGUI_WidgetBase* Source, const class FText& Text, int32_t index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Social_Settings.WBP_Sheik_Social_Settings_C.BndEvt__SocialPrivacyToggle_K2Node_ComponentBoundEvent_0_OnOptionChanged__DelegateSignature");
		
		UWBP_Sheik_Social_Settings_C_BndEvt__SocialPrivacyToggle_K2Node_ComponentBoundEvent_0_OnOptionChanged__DelegateSignature_Params params {};
		params.Source = Source;
		params.Text = Text;
		params.index = index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Social_Settings.WBP_Sheik_Social_Settings_C.ConstructOnlyOnce
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_Social_Settings_C::ConstructOnlyOnce()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Social_Settings.WBP_Sheik_Social_Settings_C.ConstructOnlyOnce");
		
		UWBP_Sheik_Social_Settings_C_ConstructOnlyOnce_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Social_Settings.WBP_Sheik_Social_Settings_C.BndEvt__WBP_Sheik_Social_Settings_TeamFillToggle_K2Node_ComponentBoundEvent_11_OnOptionChanged__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UIGUI_WidgetBase*                            Source                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FText                                        Text                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		int32_t                                            index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_Social_Settings_C::BndEvt__WBP_Sheik_Social_Settings_TeamFillToggle_K2Node_ComponentBoundEvent_11_OnOptionChanged__DelegateSignature(class UIGUI_WidgetBase* Source, const class FText& Text, int32_t index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Social_Settings.WBP_Sheik_Social_Settings_C.BndEvt__WBP_Sheik_Social_Settings_TeamFillToggle_K2Node_ComponentBoundEvent_11_OnOptionChanged__DelegateSignature");
		
		UWBP_Sheik_Social_Settings_C_BndEvt__WBP_Sheik_Social_Settings_TeamFillToggle_K2Node_ComponentBoundEvent_11_OnOptionChanged__DelegateSignature_Params params {};
		params.Source = Source;
		params.Text = Text;
		params.index = index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Social_Settings.WBP_Sheik_Social_Settings_C.ExecuteUbergraph_WBP_Sheik_Social_Settings
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_Social_Settings_C::ExecuteUbergraph_WBP_Sheik_Social_Settings(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Social_Settings.WBP_Sheik_Social_Settings_C.ExecuteUbergraph_WBP_Sheik_Social_Settings");
		
		UWBP_Sheik_Social_Settings_C_ExecuteUbergraph_WBP_Sheik_Social_Settings_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Social_Settings.WBP_Sheik_Social_Settings_C.JoinRestrictedMatchConfirmed__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      InviteCode                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		class FString                                      MatchConfig                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_Social_Settings_C::JoinRestrictedMatchConfirmed__DelegateSignature(const class FString& InviteCode, const class FString& MatchConfig)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Social_Settings.WBP_Sheik_Social_Settings_C.JoinRestrictedMatchConfirmed__DelegateSignature");
		
		UWBP_Sheik_Social_Settings_C_JoinRestrictedMatchConfirmed__DelegateSignature_Params params {};
		params.InviteCode = InviteCode;
		params.MatchConfig = MatchConfig;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Social_Settings.WBP_Sheik_Social_Settings_C.StartRestrictedMatchConfirmed__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      InviteCode                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		int32_t                                            JoinTimer                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               ShouldServerBackfill                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class FString                                      MatchConfig                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_Social_Settings_C::StartRestrictedMatchConfirmed__DelegateSignature(const class FString& InviteCode, int32_t JoinTimer, bool ShouldServerBackfill, const class FString& MatchConfig)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Social_Settings.WBP_Sheik_Social_Settings_C.StartRestrictedMatchConfirmed__DelegateSignature");
		
		UWBP_Sheik_Social_Settings_C_StartRestrictedMatchConfirmed__DelegateSignature_Params params {};
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
	 * 		Name   -> PredefinedFunction UWBP_Sheik_Social_Settings_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWBP_Sheik_Social_Settings_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_Sheik_Social_Settings.WBP_Sheik_Social_Settings_C");
		return ptr;
	}

}


