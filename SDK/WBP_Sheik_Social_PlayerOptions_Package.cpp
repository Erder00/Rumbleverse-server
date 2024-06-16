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
	 * 		Name   -> Function WBP_Sheik_Social_PlayerOptions.WBP_Sheik_Social_PlayerOptions_C.OnFriendPresenceUpdated
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSheikPlayerAccount                         InAccount                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UWBP_Sheik_Social_PlayerOptions_C::OnFriendPresenceUpdated(const struct FSheikPlayerAccount& InAccount)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Social_PlayerOptions.WBP_Sheik_Social_PlayerOptions_C.OnFriendPresenceUpdated");
		
		UWBP_Sheik_Social_PlayerOptions_C_OnFriendPresenceUpdated_Params params {};
		params.InAccount = InAccount;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Social_PlayerOptions.WBP_Sheik_Social_PlayerOptions_C.IsPresenceInFrontend
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsPresenceInFrontend                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_Sheik_Social_PlayerOptions_C::IsPresenceInFrontend(bool* IsPresenceInFrontend)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Social_PlayerOptions.WBP_Sheik_Social_PlayerOptions_C.IsPresenceInFrontend");
		
		UWBP_Sheik_Social_PlayerOptions_C_IsPresenceInFrontend_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (IsPresenceInFrontend != nullptr)
			*IsPresenceInFrontend = params.IsPresenceInFrontend;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Social_PlayerOptions.WBP_Sheik_Social_PlayerOptions_C.GetProductId
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      EOSProductId                                               (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_Social_PlayerOptions_C::GetProductId(class FString* EOSProductId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Social_PlayerOptions.WBP_Sheik_Social_PlayerOptions_C.GetProductId");
		
		UWBP_Sheik_Social_PlayerOptions_C_GetProductId_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (EOSProductId != nullptr)
			*EOSProductId = params.EOSProductId;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Social_PlayerOptions.WBP_Sheik_Social_PlayerOptions_C.PromoteSelfToPartyLeader
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_Social_PlayerOptions_C::PromoteSelfToPartyLeader()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Social_PlayerOptions.WBP_Sheik_Social_PlayerOptions_C.PromoteSelfToPartyLeader");
		
		UWBP_Sheik_Social_PlayerOptions_C_PromoteSelfToPartyLeader_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Social_PlayerOptions.WBP_Sheik_Social_PlayerOptions_C.UpdatePromoteToPartyLeaderOption
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_Social_PlayerOptions_C::UpdatePromoteToPartyLeaderOption()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Social_PlayerOptions.WBP_Sheik_Social_PlayerOptions_C.UpdatePromoteToPartyLeaderOption");
		
		UWBP_Sheik_Social_PlayerOptions_C_UpdatePromoteToPartyLeaderOption_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Social_PlayerOptions.WBP_Sheik_Social_PlayerOptions_C.IsOnSamePlatform
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Out                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_Sheik_Social_PlayerOptions_C::IsOnSamePlatform(bool* Out)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Social_PlayerOptions.WBP_Sheik_Social_PlayerOptions_C.IsOnSamePlatform");
		
		UWBP_Sheik_Social_PlayerOptions_C_IsOnSamePlatform_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Out != nullptr)
			*Out = params.Out;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Social_PlayerOptions.WBP_Sheik_Social_PlayerOptions_C.IsPendingBlockChange
	 * 		Flags  -> ()
	 */
	bool UWBP_Sheik_Social_PlayerOptions_C::IsPendingBlockChange()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Social_PlayerOptions.WBP_Sheik_Social_PlayerOptions_C.IsPendingBlockChange");
		
		UWBP_Sheik_Social_PlayerOptions_C_IsPendingBlockChange_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Social_PlayerOptions.WBP_Sheik_Social_PlayerOptions_C.OpenJoinPlayerConfirmationPopup
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_Social_PlayerOptions_C::OpenJoinPlayerConfirmationPopup()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Social_PlayerOptions.WBP_Sheik_Social_PlayerOptions_C.OpenJoinPlayerConfirmationPopup");
		
		UWBP_Sheik_Social_PlayerOptions_C_OpenJoinPlayerConfirmationPopup_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Social_PlayerOptions.WBP_Sheik_Social_PlayerOptions_C.OpenAcceptInviteConfirmationPopup
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_Social_PlayerOptions_C::OpenAcceptInviteConfirmationPopup()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Social_PlayerOptions.WBP_Sheik_Social_PlayerOptions_C.OpenAcceptInviteConfirmationPopup");
		
		UWBP_Sheik_Social_PlayerOptions_C_OpenAcceptInviteConfirmationPopup_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Social_PlayerOptions.WBP_Sheik_Social_PlayerOptions_C.LeavePartyWithBlockedPlayer
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      PlayerId                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_Social_PlayerOptions_C::LeavePartyWithBlockedPlayer(const class FString& PlayerId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Social_PlayerOptions.WBP_Sheik_Social_PlayerOptions_C.LeavePartyWithBlockedPlayer");
		
		UWBP_Sheik_Social_PlayerOptions_C_LeavePartyWithBlockedPlayer_Params params {};
		params.PlayerId = PlayerId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Social_PlayerOptions.WBP_Sheik_Social_PlayerOptions_C.UpdateVoiceChatIcon
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsEnabled                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               IsMuted                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_Sheik_Social_PlayerOptions_C::UpdateVoiceChatIcon(bool IsEnabled, bool IsMuted)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Social_PlayerOptions.WBP_Sheik_Social_PlayerOptions_C.UpdateVoiceChatIcon");
		
		UWBP_Sheik_Social_PlayerOptions_C_UpdateVoiceChatIcon_Params params {};
		params.IsEnabled = IsEnabled;
		params.IsMuted = IsMuted;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Social_PlayerOptions.WBP_Sheik_Social_PlayerOptions_C.UpdateVoiceChatTalking
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsTalking                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_Sheik_Social_PlayerOptions_C::UpdateVoiceChatTalking(bool IsTalking)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Social_PlayerOptions.WBP_Sheik_Social_PlayerOptions_C.UpdateVoiceChatTalking");
		
		UWBP_Sheik_Social_PlayerOptions_C_UpdateVoiceChatTalking_Params params {};
		params.IsTalking = IsTalking;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Social_PlayerOptions.WBP_Sheik_Social_PlayerOptions_C.OpenCrossplayMismatchErrorPopup
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_Social_PlayerOptions_C::OpenCrossplayMismatchErrorPopup()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Social_PlayerOptions.WBP_Sheik_Social_PlayerOptions_C.OpenCrossplayMismatchErrorPopup");
		
		UWBP_Sheik_Social_PlayerOptions_C_OpenCrossplayMismatchErrorPopup_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Social_PlayerOptions.WBP_Sheik_Social_PlayerOptions_C.OnVoiceChatPlayerTalking
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      ChannelName                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		class FString                                      ProductUserId                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		bool                                               bIsTalking                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bIsLocalPlayer                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_Sheik_Social_PlayerOptions_C::OnVoiceChatPlayerTalking(const class FString& ChannelName, const class FString& ProductUserId, bool bIsTalking, bool bIsLocalPlayer)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Social_PlayerOptions.WBP_Sheik_Social_PlayerOptions_C.OnVoiceChatPlayerTalking");
		
		UWBP_Sheik_Social_PlayerOptions_C_OnVoiceChatPlayerTalking_Params params {};
		params.ChannelName = ChannelName;
		params.ProductUserId = ProductUserId;
		params.bIsTalking = bIsTalking;
		params.bIsLocalPlayer = bIsLocalPlayer;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Social_PlayerOptions.WBP_Sheik_Social_PlayerOptions_C.OnVoiceChatMuteListChanged
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_Social_PlayerOptions_C::OnVoiceChatMuteListChanged()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Social_PlayerOptions.WBP_Sheik_Social_PlayerOptions_C.OnVoiceChatMuteListChanged");
		
		UWBP_Sheik_Social_PlayerOptions_C_OnVoiceChatMuteListChanged_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Social_PlayerOptions.WBP_Sheik_Social_PlayerOptions_C.CloseBlockPlayerPrompt
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            PopupId                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FName                                        BindingName                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_Social_PlayerOptions_C::CloseBlockPlayerPrompt(int32_t PopupId, const class FName& BindingName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Social_PlayerOptions.WBP_Sheik_Social_PlayerOptions_C.CloseBlockPlayerPrompt");
		
		UWBP_Sheik_Social_PlayerOptions_C_CloseBlockPlayerPrompt_Params params {};
		params.PopupId = PopupId;
		params.BindingName = BindingName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Social_PlayerOptions.WBP_Sheik_Social_PlayerOptions_C.OpenBlockPlayerPrompt
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Unblocking                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_Sheik_Social_PlayerOptions_C::OpenBlockPlayerPrompt(bool Unblocking)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Social_PlayerOptions.WBP_Sheik_Social_PlayerOptions_C.OpenBlockPlayerPrompt");
		
		UWBP_Sheik_Social_PlayerOptions_C_OpenBlockPlayerPrompt_Params params {};
		params.Unblocking = Unblocking;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Social_PlayerOptions.WBP_Sheik_Social_PlayerOptions_C.UpdateUnblockPlayerOption
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_Social_PlayerOptions_C::UpdateUnblockPlayerOption()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Social_PlayerOptions.WBP_Sheik_Social_PlayerOptions_C.UpdateUnblockPlayerOption");
		
		UWBP_Sheik_Social_PlayerOptions_C_UpdateUnblockPlayerOption_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Social_PlayerOptions.WBP_Sheik_Social_PlayerOptions_C.UpdateBlockPlayerOption
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_Social_PlayerOptions_C::UpdateBlockPlayerOption()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Social_PlayerOptions.WBP_Sheik_Social_PlayerOptions_C.UpdateBlockPlayerOption");
		
		UWBP_Sheik_Social_PlayerOptions_C_UpdateBlockPlayerOption_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Social_PlayerOptions.WBP_Sheik_Social_PlayerOptions_C.HasVoiceChatPermissions
	 * 		Flags  -> ()
	 */
	bool UWBP_Sheik_Social_PlayerOptions_C::HasVoiceChatPermissions()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Social_PlayerOptions.WBP_Sheik_Social_PlayerOptions_C.HasVoiceChatPermissions");
		
		UWBP_Sheik_Social_PlayerOptions_C_HasVoiceChatPermissions_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Social_PlayerOptions.WBP_Sheik_Social_PlayerOptions_C.UpdateMuteOption
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_Social_PlayerOptions_C::UpdateMuteOption()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Social_PlayerOptions.WBP_Sheik_Social_PlayerOptions_C.UpdateMuteOption");
		
		UWBP_Sheik_Social_PlayerOptions_C_UpdateMuteOption_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Social_PlayerOptions.WBP_Sheik_Social_PlayerOptions_C.UpdateReportPlayerOption
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_Social_PlayerOptions_C::UpdateReportPlayerOption()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Social_PlayerOptions.WBP_Sheik_Social_PlayerOptions_C.UpdateReportPlayerOption");
		
		UWBP_Sheik_Social_PlayerOptions_C_UpdateReportPlayerOption_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Social_PlayerOptions.WBP_Sheik_Social_PlayerOptions_C.UpdateJoinPlayerOption
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_Social_PlayerOptions_C::UpdateJoinPlayerOption()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Social_PlayerOptions.WBP_Sheik_Social_PlayerOptions_C.UpdateJoinPlayerOption");
		
		UWBP_Sheik_Social_PlayerOptions_C_UpdateJoinPlayerOption_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Social_PlayerOptions.WBP_Sheik_Social_PlayerOptions_C.UpdateLeavePartyOption
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_Social_PlayerOptions_C::UpdateLeavePartyOption()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Social_PlayerOptions.WBP_Sheik_Social_PlayerOptions_C.UpdateLeavePartyOption");
		
		UWBP_Sheik_Social_PlayerOptions_C_UpdateLeavePartyOption_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Social_PlayerOptions.WBP_Sheik_Social_PlayerOptions_C.UpdateKickFromPartyOption
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_Social_PlayerOptions_C::UpdateKickFromPartyOption()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Social_PlayerOptions.WBP_Sheik_Social_PlayerOptions_C.UpdateKickFromPartyOption");
		
		UWBP_Sheik_Social_PlayerOptions_C_UpdateKickFromPartyOption_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Social_PlayerOptions.WBP_Sheik_Social_PlayerOptions_C.GetFirstVisibleOption
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UIGUI_WidgetBase*                            Widget                                                     (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_Social_PlayerOptions_C::GetFirstVisibleOption(class UIGUI_WidgetBase** Widget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Social_PlayerOptions.WBP_Sheik_Social_PlayerOptions_C.GetFirstVisibleOption");
		
		UWBP_Sheik_Social_PlayerOptions_C_GetFirstVisibleOption_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Widget != nullptr)
			*Widget = params.Widget;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Social_PlayerOptions.WBP_Sheik_Social_PlayerOptions_C.UpdateDeclineInviteOption
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_Social_PlayerOptions_C::UpdateDeclineInviteOption()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Social_PlayerOptions.WBP_Sheik_Social_PlayerOptions_C.UpdateDeclineInviteOption");
		
		UWBP_Sheik_Social_PlayerOptions_C_UpdateDeclineInviteOption_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Social_PlayerOptions.WBP_Sheik_Social_PlayerOptions_C.UpdateAcceptInviteOption
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_Social_PlayerOptions_C::UpdateAcceptInviteOption()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Social_PlayerOptions.WBP_Sheik_Social_PlayerOptions_C.UpdateAcceptInviteOption");
		
		UWBP_Sheik_Social_PlayerOptions_C_UpdateAcceptInviteOption_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Social_PlayerOptions.WBP_Sheik_Social_PlayerOptions_C.UpdatePartyInviteOption
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_Social_PlayerOptions_C::UpdatePartyInviteOption()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Social_PlayerOptions.WBP_Sheik_Social_PlayerOptions_C.UpdatePartyInviteOption");
		
		UWBP_Sheik_Social_PlayerOptions_C_UpdatePartyInviteOption_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Social_PlayerOptions.WBP_Sheik_Social_PlayerOptions_C.GetPartyManager
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class USheikPartyManager*                          PartyManager                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_Social_PlayerOptions_C::GetPartyManager(class USheikPartyManager** PartyManager)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Social_PlayerOptions.WBP_Sheik_Social_PlayerOptions_C.GetPartyManager");
		
		UWBP_Sheik_Social_PlayerOptions_C_GetPartyManager_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (PartyManager != nullptr)
			*PartyManager = params.PartyManager;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Social_PlayerOptions.WBP_Sheik_Social_PlayerOptions_C.GetFriendsManager
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class USheikFriendsManager*                        FriendsManager                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_Social_PlayerOptions_C::GetFriendsManager(class USheikFriendsManager** FriendsManager)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Social_PlayerOptions.WBP_Sheik_Social_PlayerOptions_C.GetFriendsManager");
		
		UWBP_Sheik_Social_PlayerOptions_C_GetFriendsManager_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (FriendsManager != nullptr)
			*FriendsManager = params.FriendsManager;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Social_PlayerOptions.WBP_Sheik_Social_PlayerOptions_C.UpdateViewProfileOption
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_Social_PlayerOptions_C::UpdateViewProfileOption()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Social_PlayerOptions.WBP_Sheik_Social_PlayerOptions_C.UpdateViewProfileOption");
		
		UWBP_Sheik_Social_PlayerOptions_C_UpdateViewProfileOption_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Social_PlayerOptions.WBP_Sheik_Social_PlayerOptions_C.UpdateOptions
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_Social_PlayerOptions_C::UpdateOptions()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Social_PlayerOptions.WBP_Sheik_Social_PlayerOptions_C.UpdateOptions");
		
		UWBP_Sheik_Social_PlayerOptions_C_UpdateOptions_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Social_PlayerOptions.WBP_Sheik_Social_PlayerOptions_C.UpdatePlatformImage
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_Social_PlayerOptions_C::UpdatePlatformImage()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Social_PlayerOptions.WBP_Sheik_Social_PlayerOptions_C.UpdatePlatformImage");
		
		UWBP_Sheik_Social_PlayerOptions_C_UpdatePlatformImage_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Social_PlayerOptions.WBP_Sheik_Social_PlayerOptions_C.UpdateName
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_Social_PlayerOptions_C::UpdateName()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Social_PlayerOptions.WBP_Sheik_Social_PlayerOptions_C.UpdateName");
		
		UWBP_Sheik_Social_PlayerOptions_C_UpdateName_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Social_PlayerOptions.WBP_Sheik_Social_PlayerOptions_C.SetPlayerSocialEntry
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSheikPlayerSocialEntry                     PlayerSocialEntry                                          (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UWBP_Sheik_Social_PlayerOptions_C::SetPlayerSocialEntry(const struct FSheikPlayerSocialEntry& PlayerSocialEntry)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Social_PlayerOptions.WBP_Sheik_Social_PlayerOptions_C.SetPlayerSocialEntry");
		
		UWBP_Sheik_Social_PlayerOptions_C_SetPlayerSocialEntry_Params params {};
		params.PlayerSocialEntry = PlayerSocialEntry;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Social_PlayerOptions.WBP_Sheik_Social_PlayerOptions_C.OnInputBack
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FInputEventData                             InputEventData                                             (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UWBP_Sheik_Social_PlayerOptions_C::OnInputBack(const struct FInputEventData& InputEventData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Social_PlayerOptions.WBP_Sheik_Social_PlayerOptions_C.OnInputBack");
		
		UWBP_Sheik_Social_PlayerOptions_C_OnInputBack_Params params {};
		params.InputEventData = InputEventData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Social_PlayerOptions.WBP_Sheik_Social_PlayerOptions_C.GetNavigableWidgets
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<class UIGUI_WidgetBase*>                    NavigableWidgets                                           (Parm, OutParm, ContainsInstancedReference)
	 */
	void UWBP_Sheik_Social_PlayerOptions_C::GetNavigableWidgets(TArray<class UIGUI_WidgetBase*>* NavigableWidgets)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Social_PlayerOptions.WBP_Sheik_Social_PlayerOptions_C.GetNavigableWidgets");
		
		UWBP_Sheik_Social_PlayerOptions_C_GetNavigableWidgets_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (NavigableWidgets != nullptr)
			*NavigableWidgets = params.NavigableWidgets;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Social_PlayerOptions.WBP_Sheik_Social_PlayerOptions_C.OnActivated
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_Social_PlayerOptions_C::OnActivated()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Social_PlayerOptions.WBP_Sheik_Social_PlayerOptions_C.OnActivated");
		
		UWBP_Sheik_Social_PlayerOptions_C_OnActivated_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Social_PlayerOptions.WBP_Sheik_Social_PlayerOptions_C.OnDeactivated
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_Social_PlayerOptions_C::OnDeactivated()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Social_PlayerOptions.WBP_Sheik_Social_PlayerOptions_C.OnDeactivated");
		
		UWBP_Sheik_Social_PlayerOptions_C_OnDeactivated_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Social_PlayerOptions.WBP_Sheik_Social_PlayerOptions_C.OnInitialized
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_Social_PlayerOptions_C::OnInitialized()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Social_PlayerOptions.WBP_Sheik_Social_PlayerOptions_C.OnInitialized");
		
		UWBP_Sheik_Social_PlayerOptions_C_OnInitialized_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Social_PlayerOptions.WBP_Sheik_Social_PlayerOptions_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_Sheik_Social_PlayerOptions_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Social_PlayerOptions.WBP_Sheik_Social_PlayerOptions_C.PreConstruct");
		
		UWBP_Sheik_Social_PlayerOptions_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Social_PlayerOptions.WBP_Sheik_Social_PlayerOptions_C.Tick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_Social_PlayerOptions_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Social_PlayerOptions.WBP_Sheik_Social_PlayerOptions_C.Tick");
		
		UWBP_Sheik_Social_PlayerOptions_C_Tick_Params params {};
		params.MyGeometry = MyGeometry;
		params.InDeltaTime = InDeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Social_PlayerOptions.WBP_Sheik_Social_PlayerOptions_C.OnPartyUpdated
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_Social_PlayerOptions_C::OnPartyUpdated()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Social_PlayerOptions.WBP_Sheik_Social_PlayerOptions_C.OnPartyUpdated");
		
		UWBP_Sheik_Social_PlayerOptions_C_OnPartyUpdated_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Social_PlayerOptions.WBP_Sheik_Social_PlayerOptions_C.BindPartyManagerDelegates
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_Social_PlayerOptions_C::BindPartyManagerDelegates()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Social_PlayerOptions.WBP_Sheik_Social_PlayerOptions_C.BindPartyManagerDelegates");
		
		UWBP_Sheik_Social_PlayerOptions_C_BindPartyManagerDelegates_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Social_PlayerOptions.WBP_Sheik_Social_PlayerOptions_C.ConfirmBlockPlayer
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            PopupId                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FName                                        BindingName                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_Social_PlayerOptions_C::ConfirmBlockPlayer(int32_t PopupId, const class FName& BindingName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Social_PlayerOptions.WBP_Sheik_Social_PlayerOptions_C.ConfirmBlockPlayer");
		
		UWBP_Sheik_Social_PlayerOptions_C_ConfirmBlockPlayer_Params params {};
		params.PopupId = PopupId;
		params.BindingName = BindingName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Social_PlayerOptions.WBP_Sheik_Social_PlayerOptions_C.ConfirmUnblockPlayer
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            PopupId                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FName                                        BindingName                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_Social_PlayerOptions_C::ConfirmUnblockPlayer(int32_t PopupId, const class FName& BindingName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Social_PlayerOptions.WBP_Sheik_Social_PlayerOptions_C.ConfirmUnblockPlayer");
		
		UWBP_Sheik_Social_PlayerOptions_C_ConfirmUnblockPlayer_Params params {};
		params.PopupId = PopupId;
		params.BindingName = BindingName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Social_PlayerOptions.WBP_Sheik_Social_PlayerOptions_C.CloseErrorPopup
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            PopupId                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FName                                        BindingName                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_Social_PlayerOptions_C::CloseErrorPopup(int32_t PopupId, const class FName& BindingName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Social_PlayerOptions.WBP_Sheik_Social_PlayerOptions_C.CloseErrorPopup");
		
		UWBP_Sheik_Social_PlayerOptions_C_CloseErrorPopup_Params params {};
		params.PopupId = PopupId;
		params.BindingName = BindingName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Social_PlayerOptions.WBP_Sheik_Social_PlayerOptions_C.OnConfirmAcceptInvite
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            PopupId                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FName                                        BindingName                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_Social_PlayerOptions_C::OnConfirmAcceptInvite(int32_t PopupId, const class FName& BindingName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Social_PlayerOptions.WBP_Sheik_Social_PlayerOptions_C.OnConfirmAcceptInvite");
		
		UWBP_Sheik_Social_PlayerOptions_C_OnConfirmAcceptInvite_Params params {};
		params.PopupId = PopupId;
		params.BindingName = BindingName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Social_PlayerOptions.WBP_Sheik_Social_PlayerOptions_C.OnCancelAcceptInvite
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            PopupId                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FName                                        BindingName                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_Social_PlayerOptions_C::OnCancelAcceptInvite(int32_t PopupId, const class FName& BindingName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Social_PlayerOptions.WBP_Sheik_Social_PlayerOptions_C.OnCancelAcceptInvite");
		
		UWBP_Sheik_Social_PlayerOptions_C_OnCancelAcceptInvite_Params params {};
		params.PopupId = PopupId;
		params.BindingName = BindingName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Social_PlayerOptions.WBP_Sheik_Social_PlayerOptions_C.OnConfirmJoinPlayer
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            PopupId                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FName                                        BindingName                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_Social_PlayerOptions_C::OnConfirmJoinPlayer(int32_t PopupId, const class FName& BindingName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Social_PlayerOptions.WBP_Sheik_Social_PlayerOptions_C.OnConfirmJoinPlayer");
		
		UWBP_Sheik_Social_PlayerOptions_C_OnConfirmJoinPlayer_Params params {};
		params.PopupId = PopupId;
		params.BindingName = BindingName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Social_PlayerOptions.WBP_Sheik_Social_PlayerOptions_C.OnCancelJoinPlayer
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            PopupId                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FName                                        BindingName                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_Social_PlayerOptions_C::OnCancelJoinPlayer(int32_t PopupId, const class FName& BindingName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Social_PlayerOptions.WBP_Sheik_Social_PlayerOptions_C.OnCancelJoinPlayer");
		
		UWBP_Sheik_Social_PlayerOptions_C_OnCancelJoinPlayer_Params params {};
		params.PopupId = PopupId;
		params.BindingName = BindingName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Social_PlayerOptions.WBP_Sheik_Social_PlayerOptions_C.BndEvt__MuteOption_K2Node_ComponentBoundEvent_5_OnStateChangeEventWithUserIndex__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UIGUI_WidgetBase*                            Widget                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            UserIndex                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_Social_PlayerOptions_C::BndEvt__MuteOption_K2Node_ComponentBoundEvent_5_OnStateChangeEventWithUserIndex__DelegateSignature(class UIGUI_WidgetBase* Widget, int32_t UserIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Social_PlayerOptions.WBP_Sheik_Social_PlayerOptions_C.BndEvt__MuteOption_K2Node_ComponentBoundEvent_5_OnStateChangeEventWithUserIndex__DelegateSignature");
		
		UWBP_Sheik_Social_PlayerOptions_C_BndEvt__MuteOption_K2Node_ComponentBoundEvent_5_OnStateChangeEventWithUserIndex__DelegateSignature_Params params {};
		params.Widget = Widget;
		params.UserIndex = UserIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Social_PlayerOptions.WBP_Sheik_Social_PlayerOptions_C.BndEvt__PartyInviteOption_K2Node_ComponentBoundEvent_18_OnStateChangeEventWithUserIndex__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UIGUI_WidgetBase*                            Widget                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            UserIndex                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_Social_PlayerOptions_C::BndEvt__PartyInviteOption_K2Node_ComponentBoundEvent_18_OnStateChangeEventWithUserIndex__DelegateSignature(class UIGUI_WidgetBase* Widget, int32_t UserIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Social_PlayerOptions.WBP_Sheik_Social_PlayerOptions_C.BndEvt__PartyInviteOption_K2Node_ComponentBoundEvent_18_OnStateChangeEventWithUserIndex__DelegateSignature");
		
		UWBP_Sheik_Social_PlayerOptions_C_BndEvt__PartyInviteOption_K2Node_ComponentBoundEvent_18_OnStateChangeEventWithUserIndex__DelegateSignature_Params params {};
		params.Widget = Widget;
		params.UserIndex = UserIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Social_PlayerOptions.WBP_Sheik_Social_PlayerOptions_C.BndEvt__PartyInviteOption_1_K2Node_ComponentBoundEvent_20_OnStateChangeEventWithUserIndex__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UIGUI_WidgetBase*                            Widget                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            UserIndex                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_Social_PlayerOptions_C::BndEvt__PartyInviteOption_1_K2Node_ComponentBoundEvent_20_OnStateChangeEventWithUserIndex__DelegateSignature(class UIGUI_WidgetBase* Widget, int32_t UserIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Social_PlayerOptions.WBP_Sheik_Social_PlayerOptions_C.BndEvt__PartyInviteOption_1_K2Node_ComponentBoundEvent_20_OnStateChangeEventWithUserIndex__DelegateSignature");
		
		UWBP_Sheik_Social_PlayerOptions_C_BndEvt__PartyInviteOption_1_K2Node_ComponentBoundEvent_20_OnStateChangeEventWithUserIndex__DelegateSignature_Params params {};
		params.Widget = Widget;
		params.UserIndex = UserIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Social_PlayerOptions.WBP_Sheik_Social_PlayerOptions_C.BndEvt__ViewProfileOption_K2Node_ComponentBoundEvent_22_OnStateChangeEventWithUserIndex__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UIGUI_WidgetBase*                            Widget                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            UserIndex                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_Social_PlayerOptions_C::BndEvt__ViewProfileOption_K2Node_ComponentBoundEvent_22_OnStateChangeEventWithUserIndex__DelegateSignature(class UIGUI_WidgetBase* Widget, int32_t UserIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Social_PlayerOptions.WBP_Sheik_Social_PlayerOptions_C.BndEvt__ViewProfileOption_K2Node_ComponentBoundEvent_22_OnStateChangeEventWithUserIndex__DelegateSignature");
		
		UWBP_Sheik_Social_PlayerOptions_C_BndEvt__ViewProfileOption_K2Node_ComponentBoundEvent_22_OnStateChangeEventWithUserIndex__DelegateSignature_Params params {};
		params.Widget = Widget;
		params.UserIndex = UserIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Social_PlayerOptions.WBP_Sheik_Social_PlayerOptions_C.BndEvt__AcceptInvitationOption_K2Node_ComponentBoundEvent_25_OnStateChangeEventWithUserIndex__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UIGUI_WidgetBase*                            Widget                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            UserIndex                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_Social_PlayerOptions_C::BndEvt__AcceptInvitationOption_K2Node_ComponentBoundEvent_25_OnStateChangeEventWithUserIndex__DelegateSignature(class UIGUI_WidgetBase* Widget, int32_t UserIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Social_PlayerOptions.WBP_Sheik_Social_PlayerOptions_C.BndEvt__AcceptInvitationOption_K2Node_ComponentBoundEvent_25_OnStateChangeEventWithUserIndex__DelegateSignature");
		
		UWBP_Sheik_Social_PlayerOptions_C_BndEvt__AcceptInvitationOption_K2Node_ComponentBoundEvent_25_OnStateChangeEventWithUserIndex__DelegateSignature_Params params {};
		params.Widget = Widget;
		params.UserIndex = UserIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Social_PlayerOptions.WBP_Sheik_Social_PlayerOptions_C.BndEvt__ViewProfileOption_2_K2Node_ComponentBoundEvent_26_OnStateChangeEventWithUserIndex__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UIGUI_WidgetBase*                            Widget                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            UserIndex                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_Social_PlayerOptions_C::BndEvt__ViewProfileOption_2_K2Node_ComponentBoundEvent_26_OnStateChangeEventWithUserIndex__DelegateSignature(class UIGUI_WidgetBase* Widget, int32_t UserIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Social_PlayerOptions.WBP_Sheik_Social_PlayerOptions_C.BndEvt__ViewProfileOption_2_K2Node_ComponentBoundEvent_26_OnStateChangeEventWithUserIndex__DelegateSignature");
		
		UWBP_Sheik_Social_PlayerOptions_C_BndEvt__ViewProfileOption_2_K2Node_ComponentBoundEvent_26_OnStateChangeEventWithUserIndex__DelegateSignature_Params params {};
		params.Widget = Widget;
		params.UserIndex = UserIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Social_PlayerOptions.WBP_Sheik_Social_PlayerOptions_C.BndEvt__KickFromPartyOption_K2Node_ComponentBoundEvent_27_OnStateChangeEventWithUserIndex__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UIGUI_WidgetBase*                            Widget                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            UserIndex                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_Social_PlayerOptions_C::BndEvt__KickFromPartyOption_K2Node_ComponentBoundEvent_27_OnStateChangeEventWithUserIndex__DelegateSignature(class UIGUI_WidgetBase* Widget, int32_t UserIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Social_PlayerOptions.WBP_Sheik_Social_PlayerOptions_C.BndEvt__KickFromPartyOption_K2Node_ComponentBoundEvent_27_OnStateChangeEventWithUserIndex__DelegateSignature");
		
		UWBP_Sheik_Social_PlayerOptions_C_BndEvt__KickFromPartyOption_K2Node_ComponentBoundEvent_27_OnStateChangeEventWithUserIndex__DelegateSignature_Params params {};
		params.Widget = Widget;
		params.UserIndex = UserIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Social_PlayerOptions.WBP_Sheik_Social_PlayerOptions_C.BndEvt__LeavePartyOption_K2Node_ComponentBoundEvent_28_OnStateChangeEventWithUserIndex__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UIGUI_WidgetBase*                            Widget                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            UserIndex                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_Social_PlayerOptions_C::BndEvt__LeavePartyOption_K2Node_ComponentBoundEvent_28_OnStateChangeEventWithUserIndex__DelegateSignature(class UIGUI_WidgetBase* Widget, int32_t UserIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Social_PlayerOptions.WBP_Sheik_Social_PlayerOptions_C.BndEvt__LeavePartyOption_K2Node_ComponentBoundEvent_28_OnStateChangeEventWithUserIndex__DelegateSignature");
		
		UWBP_Sheik_Social_PlayerOptions_C_BndEvt__LeavePartyOption_K2Node_ComponentBoundEvent_28_OnStateChangeEventWithUserIndex__DelegateSignature_Params params {};
		params.Widget = Widget;
		params.UserIndex = UserIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Social_PlayerOptions.WBP_Sheik_Social_PlayerOptions_C.BndEvt__ReportPlayerOption_K2Node_ComponentBoundEvent_29_OnStateChangeEventWithUserIndex__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UIGUI_WidgetBase*                            Widget                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            UserIndex                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_Social_PlayerOptions_C::BndEvt__ReportPlayerOption_K2Node_ComponentBoundEvent_29_OnStateChangeEventWithUserIndex__DelegateSignature(class UIGUI_WidgetBase* Widget, int32_t UserIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Social_PlayerOptions.WBP_Sheik_Social_PlayerOptions_C.BndEvt__ReportPlayerOption_K2Node_ComponentBoundEvent_29_OnStateChangeEventWithUserIndex__DelegateSignature");
		
		UWBP_Sheik_Social_PlayerOptions_C_BndEvt__ReportPlayerOption_K2Node_ComponentBoundEvent_29_OnStateChangeEventWithUserIndex__DelegateSignature_Params params {};
		params.Widget = Widget;
		params.UserIndex = UserIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Social_PlayerOptions.WBP_Sheik_Social_PlayerOptions_C.BndEvt__BlockPlayerOption_K2Node_ComponentBoundEvent_30_OnStateChangeEventWithUserIndex__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UIGUI_WidgetBase*                            Widget                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            UserIndex                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_Social_PlayerOptions_C::BndEvt__BlockPlayerOption_K2Node_ComponentBoundEvent_30_OnStateChangeEventWithUserIndex__DelegateSignature(class UIGUI_WidgetBase* Widget, int32_t UserIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Social_PlayerOptions.WBP_Sheik_Social_PlayerOptions_C.BndEvt__BlockPlayerOption_K2Node_ComponentBoundEvent_30_OnStateChangeEventWithUserIndex__DelegateSignature");
		
		UWBP_Sheik_Social_PlayerOptions_C_BndEvt__BlockPlayerOption_K2Node_ComponentBoundEvent_30_OnStateChangeEventWithUserIndex__DelegateSignature_Params params {};
		params.Widget = Widget;
		params.UserIndex = UserIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Social_PlayerOptions.WBP_Sheik_Social_PlayerOptions_C.BndEvt__UnblockPlayerOption_K2Node_ComponentBoundEvent_31_OnStateChangeEventWithUserIndex__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UIGUI_WidgetBase*                            Widget                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            UserIndex                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_Social_PlayerOptions_C::BndEvt__UnblockPlayerOption_K2Node_ComponentBoundEvent_31_OnStateChangeEventWithUserIndex__DelegateSignature(class UIGUI_WidgetBase* Widget, int32_t UserIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Social_PlayerOptions.WBP_Sheik_Social_PlayerOptions_C.BndEvt__UnblockPlayerOption_K2Node_ComponentBoundEvent_31_OnStateChangeEventWithUserIndex__DelegateSignature");
		
		UWBP_Sheik_Social_PlayerOptions_C_BndEvt__UnblockPlayerOption_K2Node_ComponentBoundEvent_31_OnStateChangeEventWithUserIndex__DelegateSignature_Params params {};
		params.Widget = Widget;
		params.UserIndex = UserIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Social_PlayerOptions.WBP_Sheik_Social_PlayerOptions_C.OnBlockPlayer
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bWasSuccessful                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FSheikError                                 Error                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	 * 		class FString                                      CozmoId                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_Social_PlayerOptions_C::OnBlockPlayer(bool bWasSuccessful, const struct FSheikError& Error, const class FString& CozmoId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Social_PlayerOptions.WBP_Sheik_Social_PlayerOptions_C.OnBlockPlayer");
		
		UWBP_Sheik_Social_PlayerOptions_C_OnBlockPlayer_Params params {};
		params.bWasSuccessful = bWasSuccessful;
		params.Error = Error;
		params.CozmoId = CozmoId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Social_PlayerOptions.WBP_Sheik_Social_PlayerOptions_C.OnUnblockPlayer
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bWasSuccessful                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FSheikError                                 Error                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	 * 		class FString                                      CozmoId                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_Social_PlayerOptions_C::OnUnblockPlayer(bool bWasSuccessful, const struct FSheikError& Error, const class FString& CozmoId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Social_PlayerOptions.WBP_Sheik_Social_PlayerOptions_C.OnUnblockPlayer");
		
		UWBP_Sheik_Social_PlayerOptions_C_OnUnblockPlayer_Params params {};
		params.bWasSuccessful = bWasSuccessful;
		params.Error = Error;
		params.CozmoId = CozmoId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Social_PlayerOptions.WBP_Sheik_Social_PlayerOptions_C.BndEvt__WBP_Sheik_Social_PlayerOptions_PromoteToPartyLeaderOption_K2Node_ComponentBoundEvent_0_OnStateChangeEventWithUserIndex__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UIGUI_WidgetBase*                            Widget                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            UserIndex                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_Social_PlayerOptions_C::BndEvt__WBP_Sheik_Social_PlayerOptions_PromoteToPartyLeaderOption_K2Node_ComponentBoundEvent_0_OnStateChangeEventWithUserIndex__DelegateSignature(class UIGUI_WidgetBase* Widget, int32_t UserIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Social_PlayerOptions.WBP_Sheik_Social_PlayerOptions_C.BndEvt__WBP_Sheik_Social_PlayerOptions_PromoteToPartyLeaderOption_K2Node_ComponentBoundEvent_0_OnStateChangeEventWithUserIndex__DelegateSignature");
		
		UWBP_Sheik_Social_PlayerOptions_C_BndEvt__WBP_Sheik_Social_PlayerOptions_PromoteToPartyLeaderOption_K2Node_ComponentBoundEvent_0_OnStateChangeEventWithUserIndex__DelegateSignature_Params params {};
		params.Widget = Widget;
		params.UserIndex = UserIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Social_PlayerOptions.WBP_Sheik_Social_PlayerOptions_C.Show Error Message
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      ErrorString                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_Social_PlayerOptions_C::ShowErrorMessage(const class FString& ErrorString)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Social_PlayerOptions.WBP_Sheik_Social_PlayerOptions_C.Show Error Message");
		
		UWBP_Sheik_Social_PlayerOptions_C_ShowErrorMessage_Params params {};
		params.ErrorString = ErrorString;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Social_PlayerOptions.WBP_Sheik_Social_PlayerOptions_C.OnOptionsButtonFocused
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UIGUI_WidgetBase*                            Widget                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            UserIndex                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_Social_PlayerOptions_C::OnOptionsButtonFocused(class UIGUI_WidgetBase* Widget, int32_t UserIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Social_PlayerOptions.WBP_Sheik_Social_PlayerOptions_C.OnOptionsButtonFocused");
		
		UWBP_Sheik_Social_PlayerOptions_C_OnOptionsButtonFocused_Params params {};
		params.Widget = Widget;
		params.UserIndex = UserIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Social_PlayerOptions.WBP_Sheik_Social_PlayerOptions_C.ExecuteUbergraph_WBP_Sheik_Social_PlayerOptions
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_Social_PlayerOptions_C::ExecuteUbergraph_WBP_Sheik_Social_PlayerOptions(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Social_PlayerOptions.WBP_Sheik_Social_PlayerOptions_C.ExecuteUbergraph_WBP_Sheik_Social_PlayerOptions");
		
		UWBP_Sheik_Social_PlayerOptions_C_ExecuteUbergraph_WBP_Sheik_Social_PlayerOptions_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Social_PlayerOptions.WBP_Sheik_Social_PlayerOptions_C.OnClose__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_Social_PlayerOptions_C::OnClose__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Social_PlayerOptions.WBP_Sheik_Social_PlayerOptions_C.OnClose__DelegateSignature");
		
		UWBP_Sheik_Social_PlayerOptions_C_OnClose__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Social_PlayerOptions.WBP_Sheik_Social_PlayerOptions_C.OnOpenReportForm__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_Social_PlayerOptions_C::OnOpenReportForm__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Social_PlayerOptions.WBP_Sheik_Social_PlayerOptions_C.OnOpenReportForm__DelegateSignature");
		
		UWBP_Sheik_Social_PlayerOptions_C_OnOpenReportForm__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWBP_Sheik_Social_PlayerOptions_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWBP_Sheik_Social_PlayerOptions_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_Sheik_Social_PlayerOptions.WBP_Sheik_Social_PlayerOptions_C");
		return ptr;
	}

}


