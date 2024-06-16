#pragma once

/**
 * Name: Rumbleverse
 * Version: Latest
 */

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * Function WBP_Sheik_Social_PlayerOptions.WBP_Sheik_Social_PlayerOptions_C.OnFriendPresenceUpdated
	 */
	struct UWBP_Sheik_Social_PlayerOptions_C_OnFriendPresenceUpdated_Params
	{
	public:
		struct FSheikPlayerAccount                                 InAccount;                                               // 0x0000(0x02F0)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function WBP_Sheik_Social_PlayerOptions.WBP_Sheik_Social_PlayerOptions_C.IsPresenceInFrontend
	 */
	struct UWBP_Sheik_Social_PlayerOptions_C_IsPresenceInFrontend_Params
	{
	public:
		bool                                                       IsPresenceInFrontend;                                    // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_Sheik_Social_PlayerOptions.WBP_Sheik_Social_PlayerOptions_C.GetProductId
	 */
	struct UWBP_Sheik_Social_PlayerOptions_C_GetProductId_Params
	{
	public:
		class FString                                              EOSProductId;                                            // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Sheik_Social_PlayerOptions.WBP_Sheik_Social_PlayerOptions_C.PromoteSelfToPartyLeader
	 */
	struct UWBP_Sheik_Social_PlayerOptions_C_PromoteSelfToPartyLeader_Params
	{	};

	/**
	 * Function WBP_Sheik_Social_PlayerOptions.WBP_Sheik_Social_PlayerOptions_C.UpdatePromoteToPartyLeaderOption
	 */
	struct UWBP_Sheik_Social_PlayerOptions_C_UpdatePromoteToPartyLeaderOption_Params
	{	};

	/**
	 * Function WBP_Sheik_Social_PlayerOptions.WBP_Sheik_Social_PlayerOptions_C.IsOnSamePlatform
	 */
	struct UWBP_Sheik_Social_PlayerOptions_C_IsOnSamePlatform_Params
	{
	public:
		bool                                                       Out;                                                     // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_Sheik_Social_PlayerOptions.WBP_Sheik_Social_PlayerOptions_C.IsPendingBlockChange
	 */
	struct UWBP_Sheik_Social_PlayerOptions_C_IsPendingBlockChange_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_Sheik_Social_PlayerOptions.WBP_Sheik_Social_PlayerOptions_C.OpenJoinPlayerConfirmationPopup
	 */
	struct UWBP_Sheik_Social_PlayerOptions_C_OpenJoinPlayerConfirmationPopup_Params
	{	};

	/**
	 * Function WBP_Sheik_Social_PlayerOptions.WBP_Sheik_Social_PlayerOptions_C.OpenAcceptInviteConfirmationPopup
	 */
	struct UWBP_Sheik_Social_PlayerOptions_C_OpenAcceptInviteConfirmationPopup_Params
	{	};

	/**
	 * Function WBP_Sheik_Social_PlayerOptions.WBP_Sheik_Social_PlayerOptions_C.LeavePartyWithBlockedPlayer
	 */
	struct UWBP_Sheik_Social_PlayerOptions_C_LeavePartyWithBlockedPlayer_Params
	{
	public:
		class FString                                              PlayerId;                                                // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Sheik_Social_PlayerOptions.WBP_Sheik_Social_PlayerOptions_C.UpdateVoiceChatIcon
	 */
	struct UWBP_Sheik_Social_PlayerOptions_C_UpdateVoiceChatIcon_Params
	{
	public:
		bool                                                       IsEnabled;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       IsMuted;                                                 // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_Sheik_Social_PlayerOptions.WBP_Sheik_Social_PlayerOptions_C.UpdateVoiceChatTalking
	 */
	struct UWBP_Sheik_Social_PlayerOptions_C_UpdateVoiceChatTalking_Params
	{
	public:
		bool                                                       IsTalking;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_Sheik_Social_PlayerOptions.WBP_Sheik_Social_PlayerOptions_C.OpenCrossplayMismatchErrorPopup
	 */
	struct UWBP_Sheik_Social_PlayerOptions_C_OpenCrossplayMismatchErrorPopup_Params
	{	};

	/**
	 * Function WBP_Sheik_Social_PlayerOptions.WBP_Sheik_Social_PlayerOptions_C.OnVoiceChatPlayerTalking
	 */
	struct UWBP_Sheik_Social_PlayerOptions_C_OnVoiceChatPlayerTalking_Params
	{
	public:
		class FString                                              ChannelName;                                             // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		class FString                                              ProductUserId;                                           // 0x0010(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		bool                                                       bIsTalking;                                              // 0x0020(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bIsLocalPlayer;                                          // 0x0021(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_Sheik_Social_PlayerOptions.WBP_Sheik_Social_PlayerOptions_C.OnVoiceChatMuteListChanged
	 */
	struct UWBP_Sheik_Social_PlayerOptions_C_OnVoiceChatMuteListChanged_Params
	{	};

	/**
	 * Function WBP_Sheik_Social_PlayerOptions.WBP_Sheik_Social_PlayerOptions_C.CloseBlockPlayerPrompt
	 */
	struct UWBP_Sheik_Social_PlayerOptions_C_CloseBlockPlayerPrompt_Params
	{
	public:
		int32_t                                                    PopupId;                                                 // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FName                                                BindingName;                                             // 0x0004(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_4HQZ[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function WBP_Sheik_Social_PlayerOptions.WBP_Sheik_Social_PlayerOptions_C.OpenBlockPlayerPrompt
	 */
	struct UWBP_Sheik_Social_PlayerOptions_C_OpenBlockPlayerPrompt_Params
	{
	public:
		bool                                                       Unblocking;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_5S87[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function WBP_Sheik_Social_PlayerOptions.WBP_Sheik_Social_PlayerOptions_C.UpdateUnblockPlayerOption
	 */
	struct UWBP_Sheik_Social_PlayerOptions_C_UpdateUnblockPlayerOption_Params
	{	};

	/**
	 * Function WBP_Sheik_Social_PlayerOptions.WBP_Sheik_Social_PlayerOptions_C.UpdateBlockPlayerOption
	 */
	struct UWBP_Sheik_Social_PlayerOptions_C_UpdateBlockPlayerOption_Params
	{	};

	/**
	 * Function WBP_Sheik_Social_PlayerOptions.WBP_Sheik_Social_PlayerOptions_C.HasVoiceChatPermissions
	 */
	struct UWBP_Sheik_Social_PlayerOptions_C_HasVoiceChatPermissions_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_L014[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function WBP_Sheik_Social_PlayerOptions.WBP_Sheik_Social_PlayerOptions_C.UpdateMuteOption
	 */
	struct UWBP_Sheik_Social_PlayerOptions_C_UpdateMuteOption_Params
	{	};

	/**
	 * Function WBP_Sheik_Social_PlayerOptions.WBP_Sheik_Social_PlayerOptions_C.UpdateReportPlayerOption
	 */
	struct UWBP_Sheik_Social_PlayerOptions_C_UpdateReportPlayerOption_Params
	{	};

	/**
	 * Function WBP_Sheik_Social_PlayerOptions.WBP_Sheik_Social_PlayerOptions_C.UpdateJoinPlayerOption
	 */
	struct UWBP_Sheik_Social_PlayerOptions_C_UpdateJoinPlayerOption_Params
	{	};

	/**
	 * Function WBP_Sheik_Social_PlayerOptions.WBP_Sheik_Social_PlayerOptions_C.UpdateLeavePartyOption
	 */
	struct UWBP_Sheik_Social_PlayerOptions_C_UpdateLeavePartyOption_Params
	{	};

	/**
	 * Function WBP_Sheik_Social_PlayerOptions.WBP_Sheik_Social_PlayerOptions_C.UpdateKickFromPartyOption
	 */
	struct UWBP_Sheik_Social_PlayerOptions_C_UpdateKickFromPartyOption_Params
	{	};

	/**
	 * Function WBP_Sheik_Social_PlayerOptions.WBP_Sheik_Social_PlayerOptions_C.GetFirstVisibleOption
	 */
	struct UWBP_Sheik_Social_PlayerOptions_C_GetFirstVisibleOption_Params
	{
	public:
		class UIGUI_WidgetBase*                                    Widget;                                                  // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Sheik_Social_PlayerOptions.WBP_Sheik_Social_PlayerOptions_C.UpdateDeclineInviteOption
	 */
	struct UWBP_Sheik_Social_PlayerOptions_C_UpdateDeclineInviteOption_Params
	{	};

	/**
	 * Function WBP_Sheik_Social_PlayerOptions.WBP_Sheik_Social_PlayerOptions_C.UpdateAcceptInviteOption
	 */
	struct UWBP_Sheik_Social_PlayerOptions_C_UpdateAcceptInviteOption_Params
	{	};

	/**
	 * Function WBP_Sheik_Social_PlayerOptions.WBP_Sheik_Social_PlayerOptions_C.UpdatePartyInviteOption
	 */
	struct UWBP_Sheik_Social_PlayerOptions_C_UpdatePartyInviteOption_Params
	{	};

	/**
	 * Function WBP_Sheik_Social_PlayerOptions.WBP_Sheik_Social_PlayerOptions_C.GetPartyManager
	 */
	struct UWBP_Sheik_Social_PlayerOptions_C_GetPartyManager_Params
	{
	public:
		class USheikPartyManager*                                  PartyManager;                                            // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Sheik_Social_PlayerOptions.WBP_Sheik_Social_PlayerOptions_C.GetFriendsManager
	 */
	struct UWBP_Sheik_Social_PlayerOptions_C_GetFriendsManager_Params
	{
	public:
		class USheikFriendsManager*                                FriendsManager;                                          // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Sheik_Social_PlayerOptions.WBP_Sheik_Social_PlayerOptions_C.UpdateViewProfileOption
	 */
	struct UWBP_Sheik_Social_PlayerOptions_C_UpdateViewProfileOption_Params
	{	};

	/**
	 * Function WBP_Sheik_Social_PlayerOptions.WBP_Sheik_Social_PlayerOptions_C.UpdateOptions
	 */
	struct UWBP_Sheik_Social_PlayerOptions_C_UpdateOptions_Params
	{	};

	/**
	 * Function WBP_Sheik_Social_PlayerOptions.WBP_Sheik_Social_PlayerOptions_C.UpdatePlatformImage
	 */
	struct UWBP_Sheik_Social_PlayerOptions_C_UpdatePlatformImage_Params
	{	};

	/**
	 * Function WBP_Sheik_Social_PlayerOptions.WBP_Sheik_Social_PlayerOptions_C.UpdateName
	 */
	struct UWBP_Sheik_Social_PlayerOptions_C_UpdateName_Params
	{	};

	/**
	 * Function WBP_Sheik_Social_PlayerOptions.WBP_Sheik_Social_PlayerOptions_C.SetPlayerSocialEntry
	 */
	struct UWBP_Sheik_Social_PlayerOptions_C_SetPlayerSocialEntry_Params
	{
	public:
		struct FSheikPlayerSocialEntry                             PlayerSocialEntry;                                       // 0x0000(0x03C8)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function WBP_Sheik_Social_PlayerOptions.WBP_Sheik_Social_PlayerOptions_C.OnInputBack
	 */
	struct UWBP_Sheik_Social_PlayerOptions_C_OnInputBack_Params
	{
	public:
		struct FInputEventData                                     InputEventData;                                          // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function WBP_Sheik_Social_PlayerOptions.WBP_Sheik_Social_PlayerOptions_C.GetNavigableWidgets
	 */
	struct UWBP_Sheik_Social_PlayerOptions_C_GetNavigableWidgets_Params
	{
	public:
		TArray<class UIGUI_WidgetBase*>                            NavigableWidgets;                                        // 0x0000(0x0010)  (Parm, OutParm, ContainsInstancedReference)
	};

	/**
	 * Function WBP_Sheik_Social_PlayerOptions.WBP_Sheik_Social_PlayerOptions_C.OnActivated
	 */
	struct UWBP_Sheik_Social_PlayerOptions_C_OnActivated_Params
	{	};

	/**
	 * Function WBP_Sheik_Social_PlayerOptions.WBP_Sheik_Social_PlayerOptions_C.OnDeactivated
	 */
	struct UWBP_Sheik_Social_PlayerOptions_C_OnDeactivated_Params
	{	};

	/**
	 * Function WBP_Sheik_Social_PlayerOptions.WBP_Sheik_Social_PlayerOptions_C.OnInitialized
	 */
	struct UWBP_Sheik_Social_PlayerOptions_C_OnInitialized_Params
	{	};

	/**
	 * Function WBP_Sheik_Social_PlayerOptions.WBP_Sheik_Social_PlayerOptions_C.PreConstruct
	 */
	struct UWBP_Sheik_Social_PlayerOptions_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_Sheik_Social_PlayerOptions.WBP_Sheik_Social_PlayerOptions_C.Tick
	 */
	struct UWBP_Sheik_Social_PlayerOptions_C_Tick_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		float                                                      InDeltaTime;                                             // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Sheik_Social_PlayerOptions.WBP_Sheik_Social_PlayerOptions_C.OnPartyUpdated
	 */
	struct UWBP_Sheik_Social_PlayerOptions_C_OnPartyUpdated_Params
	{	};

	/**
	 * Function WBP_Sheik_Social_PlayerOptions.WBP_Sheik_Social_PlayerOptions_C.BindPartyManagerDelegates
	 */
	struct UWBP_Sheik_Social_PlayerOptions_C_BindPartyManagerDelegates_Params
	{	};

	/**
	 * Function WBP_Sheik_Social_PlayerOptions.WBP_Sheik_Social_PlayerOptions_C.ConfirmBlockPlayer
	 */
	struct UWBP_Sheik_Social_PlayerOptions_C_ConfirmBlockPlayer_Params
	{
	public:
		int32_t                                                    PopupId;                                                 // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FName                                                BindingName;                                             // 0x0004(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Sheik_Social_PlayerOptions.WBP_Sheik_Social_PlayerOptions_C.ConfirmUnblockPlayer
	 */
	struct UWBP_Sheik_Social_PlayerOptions_C_ConfirmUnblockPlayer_Params
	{
	public:
		int32_t                                                    PopupId;                                                 // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FName                                                BindingName;                                             // 0x0004(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Sheik_Social_PlayerOptions.WBP_Sheik_Social_PlayerOptions_C.CloseErrorPopup
	 */
	struct UWBP_Sheik_Social_PlayerOptions_C_CloseErrorPopup_Params
	{
	public:
		int32_t                                                    PopupId;                                                 // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FName                                                BindingName;                                             // 0x0004(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Sheik_Social_PlayerOptions.WBP_Sheik_Social_PlayerOptions_C.OnConfirmAcceptInvite
	 */
	struct UWBP_Sheik_Social_PlayerOptions_C_OnConfirmAcceptInvite_Params
	{
	public:
		int32_t                                                    PopupId;                                                 // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FName                                                BindingName;                                             // 0x0004(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Sheik_Social_PlayerOptions.WBP_Sheik_Social_PlayerOptions_C.OnCancelAcceptInvite
	 */
	struct UWBP_Sheik_Social_PlayerOptions_C_OnCancelAcceptInvite_Params
	{
	public:
		int32_t                                                    PopupId;                                                 // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FName                                                BindingName;                                             // 0x0004(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Sheik_Social_PlayerOptions.WBP_Sheik_Social_PlayerOptions_C.OnConfirmJoinPlayer
	 */
	struct UWBP_Sheik_Social_PlayerOptions_C_OnConfirmJoinPlayer_Params
	{
	public:
		int32_t                                                    PopupId;                                                 // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FName                                                BindingName;                                             // 0x0004(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Sheik_Social_PlayerOptions.WBP_Sheik_Social_PlayerOptions_C.OnCancelJoinPlayer
	 */
	struct UWBP_Sheik_Social_PlayerOptions_C_OnCancelJoinPlayer_Params
	{
	public:
		int32_t                                                    PopupId;                                                 // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FName                                                BindingName;                                             // 0x0004(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Sheik_Social_PlayerOptions.WBP_Sheik_Social_PlayerOptions_C.BndEvt__MuteOption_K2Node_ComponentBoundEvent_5_OnStateChangeEventWithUserIndex__DelegateSignature
	 */
	struct UWBP_Sheik_Social_PlayerOptions_C_BndEvt__MuteOption_K2Node_ComponentBoundEvent_5_OnStateChangeEventWithUserIndex__DelegateSignature_Params
	{
	public:
		class UIGUI_WidgetBase*                                    Widget;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    UserIndex;                                               // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Sheik_Social_PlayerOptions.WBP_Sheik_Social_PlayerOptions_C.BndEvt__PartyInviteOption_K2Node_ComponentBoundEvent_18_OnStateChangeEventWithUserIndex__DelegateSignature
	 */
	struct UWBP_Sheik_Social_PlayerOptions_C_BndEvt__PartyInviteOption_K2Node_ComponentBoundEvent_18_OnStateChangeEventWithUserIndex__DelegateSignature_Params
	{
	public:
		class UIGUI_WidgetBase*                                    Widget;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    UserIndex;                                               // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Sheik_Social_PlayerOptions.WBP_Sheik_Social_PlayerOptions_C.BndEvt__PartyInviteOption_1_K2Node_ComponentBoundEvent_20_OnStateChangeEventWithUserIndex__DelegateSignature
	 */
	struct UWBP_Sheik_Social_PlayerOptions_C_BndEvt__PartyInviteOption_1_K2Node_ComponentBoundEvent_20_OnStateChangeEventWithUserIndex__DelegateSignature_Params
	{
	public:
		class UIGUI_WidgetBase*                                    Widget;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    UserIndex;                                               // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Sheik_Social_PlayerOptions.WBP_Sheik_Social_PlayerOptions_C.BndEvt__ViewProfileOption_K2Node_ComponentBoundEvent_22_OnStateChangeEventWithUserIndex__DelegateSignature
	 */
	struct UWBP_Sheik_Social_PlayerOptions_C_BndEvt__ViewProfileOption_K2Node_ComponentBoundEvent_22_OnStateChangeEventWithUserIndex__DelegateSignature_Params
	{
	public:
		class UIGUI_WidgetBase*                                    Widget;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    UserIndex;                                               // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Sheik_Social_PlayerOptions.WBP_Sheik_Social_PlayerOptions_C.BndEvt__AcceptInvitationOption_K2Node_ComponentBoundEvent_25_OnStateChangeEventWithUserIndex__DelegateSignature
	 */
	struct UWBP_Sheik_Social_PlayerOptions_C_BndEvt__AcceptInvitationOption_K2Node_ComponentBoundEvent_25_OnStateChangeEventWithUserIndex__DelegateSignature_Params
	{
	public:
		class UIGUI_WidgetBase*                                    Widget;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    UserIndex;                                               // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Sheik_Social_PlayerOptions.WBP_Sheik_Social_PlayerOptions_C.BndEvt__ViewProfileOption_2_K2Node_ComponentBoundEvent_26_OnStateChangeEventWithUserIndex__DelegateSignature
	 */
	struct UWBP_Sheik_Social_PlayerOptions_C_BndEvt__ViewProfileOption_2_K2Node_ComponentBoundEvent_26_OnStateChangeEventWithUserIndex__DelegateSignature_Params
	{
	public:
		class UIGUI_WidgetBase*                                    Widget;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    UserIndex;                                               // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Sheik_Social_PlayerOptions.WBP_Sheik_Social_PlayerOptions_C.BndEvt__KickFromPartyOption_K2Node_ComponentBoundEvent_27_OnStateChangeEventWithUserIndex__DelegateSignature
	 */
	struct UWBP_Sheik_Social_PlayerOptions_C_BndEvt__KickFromPartyOption_K2Node_ComponentBoundEvent_27_OnStateChangeEventWithUserIndex__DelegateSignature_Params
	{
	public:
		class UIGUI_WidgetBase*                                    Widget;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    UserIndex;                                               // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Sheik_Social_PlayerOptions.WBP_Sheik_Social_PlayerOptions_C.BndEvt__LeavePartyOption_K2Node_ComponentBoundEvent_28_OnStateChangeEventWithUserIndex__DelegateSignature
	 */
	struct UWBP_Sheik_Social_PlayerOptions_C_BndEvt__LeavePartyOption_K2Node_ComponentBoundEvent_28_OnStateChangeEventWithUserIndex__DelegateSignature_Params
	{
	public:
		class UIGUI_WidgetBase*                                    Widget;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    UserIndex;                                               // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Sheik_Social_PlayerOptions.WBP_Sheik_Social_PlayerOptions_C.BndEvt__ReportPlayerOption_K2Node_ComponentBoundEvent_29_OnStateChangeEventWithUserIndex__DelegateSignature
	 */
	struct UWBP_Sheik_Social_PlayerOptions_C_BndEvt__ReportPlayerOption_K2Node_ComponentBoundEvent_29_OnStateChangeEventWithUserIndex__DelegateSignature_Params
	{
	public:
		class UIGUI_WidgetBase*                                    Widget;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    UserIndex;                                               // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Sheik_Social_PlayerOptions.WBP_Sheik_Social_PlayerOptions_C.BndEvt__BlockPlayerOption_K2Node_ComponentBoundEvent_30_OnStateChangeEventWithUserIndex__DelegateSignature
	 */
	struct UWBP_Sheik_Social_PlayerOptions_C_BndEvt__BlockPlayerOption_K2Node_ComponentBoundEvent_30_OnStateChangeEventWithUserIndex__DelegateSignature_Params
	{
	public:
		class UIGUI_WidgetBase*                                    Widget;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    UserIndex;                                               // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Sheik_Social_PlayerOptions.WBP_Sheik_Social_PlayerOptions_C.BndEvt__UnblockPlayerOption_K2Node_ComponentBoundEvent_31_OnStateChangeEventWithUserIndex__DelegateSignature
	 */
	struct UWBP_Sheik_Social_PlayerOptions_C_BndEvt__UnblockPlayerOption_K2Node_ComponentBoundEvent_31_OnStateChangeEventWithUserIndex__DelegateSignature_Params
	{
	public:
		class UIGUI_WidgetBase*                                    Widget;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    UserIndex;                                               // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Sheik_Social_PlayerOptions.WBP_Sheik_Social_PlayerOptions_C.OnBlockPlayer
	 */
	struct UWBP_Sheik_Social_PlayerOptions_C_OnBlockPlayer_Params
	{
	public:
		bool                                                       bWasSuccessful;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_9N3E[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FSheikError                                         Error;                                                   // 0x0004(0x000C)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
		class FString                                              CozmoId;                                                 // 0x0010(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Sheik_Social_PlayerOptions.WBP_Sheik_Social_PlayerOptions_C.OnUnblockPlayer
	 */
	struct UWBP_Sheik_Social_PlayerOptions_C_OnUnblockPlayer_Params
	{
	public:
		bool                                                       bWasSuccessful;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_ADA9[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FSheikError                                         Error;                                                   // 0x0004(0x000C)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
		class FString                                              CozmoId;                                                 // 0x0010(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Sheik_Social_PlayerOptions.WBP_Sheik_Social_PlayerOptions_C.BndEvt__WBP_Sheik_Social_PlayerOptions_PromoteToPartyLeaderOption_K2Node_ComponentBoundEvent_0_OnStateChangeEventWithUserIndex__DelegateSignature
	 */
	struct UWBP_Sheik_Social_PlayerOptions_C_BndEvt__WBP_Sheik_Social_PlayerOptions_PromoteToPartyLeaderOption_K2Node_ComponentBoundEvent_0_OnStateChangeEventWithUserIndex__DelegateSignature_Params
	{
	public:
		class UIGUI_WidgetBase*                                    Widget;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    UserIndex;                                               // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Sheik_Social_PlayerOptions.WBP_Sheik_Social_PlayerOptions_C.Show Error Message
	 */
	struct UWBP_Sheik_Social_PlayerOptions_C_ShowErrorMessage_Params
	{
	public:
		class FString                                              ErrorString;                                             // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Sheik_Social_PlayerOptions.WBP_Sheik_Social_PlayerOptions_C.OnOptionsButtonFocused
	 */
	struct UWBP_Sheik_Social_PlayerOptions_C_OnOptionsButtonFocused_Params
	{
	public:
		class UIGUI_WidgetBase*                                    Widget;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    UserIndex;                                               // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Sheik_Social_PlayerOptions.WBP_Sheik_Social_PlayerOptions_C.ExecuteUbergraph_WBP_Sheik_Social_PlayerOptions
	 */
	struct UWBP_Sheik_Social_PlayerOptions_C_ExecuteUbergraph_WBP_Sheik_Social_PlayerOptions_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Sheik_Social_PlayerOptions.WBP_Sheik_Social_PlayerOptions_C.OnClose__DelegateSignature
	 */
	struct UWBP_Sheik_Social_PlayerOptions_C_OnClose__DelegateSignature_Params
	{	};

	/**
	 * Function WBP_Sheik_Social_PlayerOptions.WBP_Sheik_Social_PlayerOptions_C.OnOpenReportForm__DelegateSignature
	 */
	struct UWBP_Sheik_Social_PlayerOptions_C_OnOpenReportForm__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
