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
	 * Function WBP_Sheik_Social_Settings.WBP_Sheik_Social_Settings_C.UpdateCopyRestrictedMatchCodeButton
	 */
	struct UWBP_Sheik_Social_Settings_C_UpdateCopyRestrictedMatchCodeButton_Params
	{	};

	/**
	 * Function WBP_Sheik_Social_Settings.WBP_Sheik_Social_Settings_C.ShouldDisableRestrictedMatchCreateandJoinButtons
	 */
	struct UWBP_Sheik_Social_Settings_C_ShouldDisableRestrictedMatchCreateandJoinButtons_Params
	{
	public:
		bool                                                       ShouldDisable;                                           // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_ZBM1[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function WBP_Sheik_Social_Settings.WBP_Sheik_Social_Settings_C.ShouldDisableCopyInviteCodeButton
	 */
	struct UWBP_Sheik_Social_Settings_C_ShouldDisableCopyInviteCodeButton_Params
	{
	public:
		bool                                                       ShouldDisable;                                           // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_6M8U[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function WBP_Sheik_Social_Settings.WBP_Sheik_Social_Settings_C.UpdateFillTeammatesToggle
	 */
	struct UWBP_Sheik_Social_Settings_C_UpdateFillTeammatesToggle_Params
	{
	public:
		bool                                                       FillTeammates;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_JW5F[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function WBP_Sheik_Social_Settings.WBP_Sheik_Social_Settings_C.RefreshFillTeammates
	 */
	struct UWBP_Sheik_Social_Settings_C_RefreshFillTeammates_Params
	{	};

	/**
	 * Function WBP_Sheik_Social_Settings.WBP_Sheik_Social_Settings_C.RefreshVoiceChatOptions
	 */
	struct UWBP_Sheik_Social_Settings_C_RefreshVoiceChatOptions_Params
	{	};

	/**
	 * Function WBP_Sheik_Social_Settings.WBP_Sheik_Social_Settings_C.DisableVoiceChatOptions
	 */
	struct UWBP_Sheik_Social_Settings_C_DisableVoiceChatOptions_Params
	{	};

	/**
	 * Function WBP_Sheik_Social_Settings.WBP_Sheik_Social_Settings_C.VerifyVoiceChatPermissions
	 */
	struct UWBP_Sheik_Social_Settings_C_VerifyVoiceChatPermissions_Params
	{
	public:
		bool                                                       HasPermissions;                                          // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_7G4U[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function WBP_Sheik_Social_Settings.WBP_Sheik_Social_Settings_C.HideInputOutputDeviceSettings
	 */
	struct UWBP_Sheik_Social_Settings_C_HideInputOutputDeviceSettings_Params
	{	};

	/**
	 * Function WBP_Sheik_Social_Settings.WBP_Sheik_Social_Settings_C.UpdateVoiceChatOutput
	 */
	struct UWBP_Sheik_Social_Settings_C_UpdateVoiceChatOutput_Params
	{
	public:
		int32_t                                                    OutputDeviceIndex;                                       // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_6B1A[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function WBP_Sheik_Social_Settings.WBP_Sheik_Social_Settings_C.InitializeVoiceChatOutputOptions
	 */
	struct UWBP_Sheik_Social_Settings_C_InitializeVoiceChatOutputOptions_Params
	{	};

	/**
	 * Function WBP_Sheik_Social_Settings.WBP_Sheik_Social_Settings_C.UpdateVoiceChatInput
	 */
	struct UWBP_Sheik_Social_Settings_C_UpdateVoiceChatInput_Params
	{
	public:
		int32_t                                                    InputDeviceIndex;                                        // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_61G9[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function WBP_Sheik_Social_Settings.WBP_Sheik_Social_Settings_C.InitializeVoiceChatInputOptions
	 */
	struct UWBP_Sheik_Social_Settings_C_InitializeVoiceChatInputOptions_Params
	{	};

	/**
	 * Function WBP_Sheik_Social_Settings.WBP_Sheik_Social_Settings_C.SetVoiceChatVolume
	 */
	struct UWBP_Sheik_Social_Settings_C_SetVoiceChatVolume_Params
	{
	public:
		float                                                      Volume;                                                  // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_Z41P[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function WBP_Sheik_Social_Settings.WBP_Sheik_Social_Settings_C.UpdateVoiceChatPushToTalkText
	 */
	struct UWBP_Sheik_Social_Settings_C_UpdateVoiceChatPushToTalkText_Params
	{
	public:
		bool                                                       Enabled;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_Sheik_Social_Settings.WBP_Sheik_Social_Settings_C.UpdateVoiceChatEnabledText
	 */
	struct UWBP_Sheik_Social_Settings_C_UpdateVoiceChatEnabledText_Params
	{
	public:
		bool                                                       Enabled;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_Sheik_Social_Settings.WBP_Sheik_Social_Settings_C.SetupCrossplayControls
	 */
	struct UWBP_Sheik_Social_Settings_C_SetupCrossplayControls_Params
	{	};

	/**
	 * Function WBP_Sheik_Social_Settings.WBP_Sheik_Social_Settings_C.GetMatchmakingCallbacks
	 */
	struct UWBP_Sheik_Social_Settings_C_GetMatchmakingCallbacks_Params
	{
	public:
		class USheikMatchmakingCallbacks*                          Out;                                                     // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Sheik_Social_Settings.WBP_Sheik_Social_Settings_C.On Matchmaking Attempt Complete
	 */
	struct UWBP_Sheik_Social_Settings_C_OnMatchmakingAttemptComplete_Params
	{
	public:
		bool                                                       bSuccessful;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_0NPT[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FSheikError                                         Error;                                                   // 0x0004(0x000C)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	};

	/**
	 * Function WBP_Sheik_Social_Settings.WBP_Sheik_Social_Settings_C.DisableCrossplayToggle
	 */
	struct UWBP_Sheik_Social_Settings_C_DisableCrossplayToggle_Params
	{	};

	/**
	 * Function WBP_Sheik_Social_Settings.WBP_Sheik_Social_Settings_C.EnableCrossplayToggle
	 */
	struct UWBP_Sheik_Social_Settings_C_EnableCrossplayToggle_Params
	{	};

	/**
	 * Function WBP_Sheik_Social_Settings.WBP_Sheik_Social_Settings_C.Bind to Party Update Events
	 */
	struct UWBP_Sheik_Social_Settings_C_BindtoPartyUpdateEvents_Params
	{	};

	/**
	 * Function WBP_Sheik_Social_Settings.WBP_Sheik_Social_Settings_C.RefreshRestrictedMatchShowHideCode
	 */
	struct UWBP_Sheik_Social_Settings_C_RefreshRestrictedMatchShowHideCode_Params
	{	};

	/**
	 * Function WBP_Sheik_Social_Settings.WBP_Sheik_Social_Settings_C.UpdateRestrictedMatchmakingCreation
	 */
	struct UWBP_Sheik_Social_Settings_C_UpdateRestrictedMatchmakingCreation_Params
	{	};

	/**
	 * Function WBP_Sheik_Social_Settings.WBP_Sheik_Social_Settings_C.GetWalletSystem
	 */
	struct UWBP_Sheik_Social_Settings_C_GetWalletSystem_Params
	{
	public:
		class USheikWalletSystem*                                  OutWalletSystem;                                         // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Sheik_Social_Settings.WBP_Sheik_Social_Settings_C.OpenCrossplayPopup
	 */
	struct UWBP_Sheik_Social_Settings_C_OpenCrossplayPopup_Params
	{	};

	/**
	 * Function WBP_Sheik_Social_Settings.WBP_Sheik_Social_Settings_C.OpenRestrictedMatchErrorPopup
	 */
	struct UWBP_Sheik_Social_Settings_C_OpenRestrictedMatchErrorPopup_Params
	{	};

	/**
	 * Function WBP_Sheik_Social_Settings.WBP_Sheik_Social_Settings_C.IsCrossplayEnabled
	 */
	struct UWBP_Sheik_Social_Settings_C_IsCrossplayEnabled_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_Sheik_Social_Settings.WBP_Sheik_Social_Settings_C.RefreshSocialPrivacy
	 */
	struct UWBP_Sheik_Social_Settings_C_RefreshSocialPrivacy_Params
	{	};

	/**
	 * Function WBP_Sheik_Social_Settings.WBP_Sheik_Social_Settings_C.CheckIfPartiedButNotLeader
	 */
	struct UWBP_Sheik_Social_Settings_C_CheckIfPartiedButNotLeader_Params
	{
	public:
		bool                                                       IsPartiedButNotLeader;                                   // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_Sheik_Social_Settings.WBP_Sheik_Social_Settings_C.UpdateRestrictedMatchmakingButtons
	 */
	struct UWBP_Sheik_Social_Settings_C_UpdateRestrictedMatchmakingButtons_Params
	{	};

	/**
	 * Function WBP_Sheik_Social_Settings.WBP_Sheik_Social_Settings_C.GetPartyManager
	 */
	struct UWBP_Sheik_Social_Settings_C_GetPartyManager_Params
	{
	public:
		class USheikPartyManager*                                  ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Sheik_Social_Settings.WBP_Sheik_Social_Settings_C.GetNavigableWidgets
	 */
	struct UWBP_Sheik_Social_Settings_C_GetNavigableWidgets_Params
	{
	public:
		TArray<class UIGUI_WidgetBase*>                            NavigableWidgets;                                        // 0x0000(0x0010)  (Parm, OutParm, ContainsInstancedReference)
	};

	/**
	 * Function WBP_Sheik_Social_Settings.WBP_Sheik_Social_Settings_C.BndEvt__RestrictedMatchCreate_K2Node_ComponentBoundEvent_6_OnStateChangeEventWithUserIndex__DelegateSignature
	 */
	struct UWBP_Sheik_Social_Settings_C_BndEvt__RestrictedMatchCreate_K2Node_ComponentBoundEvent_6_OnStateChangeEventWithUserIndex__DelegateSignature_Params
	{
	public:
		class UIGUI_WidgetBase*                                    Widget;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    UserIndex;                                               // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Sheik_Social_Settings.WBP_Sheik_Social_Settings_C.BndEvt__RestrictedMatchJoin_K2Node_ComponentBoundEvent_8_OnStateChangeEventWithUserIndex__DelegateSignature
	 */
	struct UWBP_Sheik_Social_Settings_C_BndEvt__RestrictedMatchJoin_K2Node_ComponentBoundEvent_8_OnStateChangeEventWithUserIndex__DelegateSignature_Params
	{
	public:
		class UIGUI_WidgetBase*                                    Widget;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    UserIndex;                                               // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Sheik_Social_Settings.WBP_Sheik_Social_Settings_C.HandleStartRestrictedMatchConfirmed
	 */
	struct UWBP_Sheik_Social_Settings_C_HandleStartRestrictedMatchConfirmed_Params
	{
	public:
		class FString                                              InviteCode;                                              // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		int32_t                                                    JoinTimer;                                               // 0x0010(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bShouldServerBackfill;                                   // 0x0014(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_7U3X[0x3];                                   // 0x0015(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              MatchConfig;                                             // 0x0018(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Sheik_Social_Settings.WBP_Sheik_Social_Settings_C.OnActivated
	 */
	struct UWBP_Sheik_Social_Settings_C_OnActivated_Params
	{	};

	/**
	 * Function WBP_Sheik_Social_Settings.WBP_Sheik_Social_Settings_C.HandleJoinRestrictedMatchConfirmed
	 */
	struct UWBP_Sheik_Social_Settings_C_HandleJoinRestrictedMatchConfirmed_Params
	{
	public:
		class FString                                              InviteCode;                                              // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		class FString                                              MatchConfig;                                             // 0x0010(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Sheik_Social_Settings.WBP_Sheik_Social_Settings_C.OnDeactivated
	 */
	struct UWBP_Sheik_Social_Settings_C_OnDeactivated_Params
	{	};

	/**
	 * Function WBP_Sheik_Social_Settings.WBP_Sheik_Social_Settings_C.BndEvt__WBP_Sheik_Social_Settings_RestrictedMatchShowHideToggle_K2Node_ComponentBoundEvent_7_OnOptionChanged__DelegateSignature
	 */
	struct UWBP_Sheik_Social_Settings_C_BndEvt__WBP_Sheik_Social_Settings_RestrictedMatchShowHideToggle_K2Node_ComponentBoundEvent_7_OnOptionChanged__DelegateSignature_Params
	{
	public:
		class UIGUI_WidgetBase*                                    Source;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FText                                                Text;                                                    // 0x0008(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		int32_t                                                    index;                                                   // 0x0020(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Sheik_Social_Settings.WBP_Sheik_Social_Settings_C.BndEvt__WBP_Sheik_Social_Settings_RestrictedMatchCopyInviteCode_K2Node_ComponentBoundEvent_9_OnStateChangeEventWithUserIndex__DelegateSignature
	 */
	struct UWBP_Sheik_Social_Settings_C_BndEvt__WBP_Sheik_Social_Settings_RestrictedMatchCopyInviteCode_K2Node_ComponentBoundEvent_9_OnStateChangeEventWithUserIndex__DelegateSignature_Params
	{
	public:
		class UIGUI_WidgetBase*                                    Widget;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    UserIndex;                                               // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Sheik_Social_Settings.WBP_Sheik_Social_Settings_C.OnRestrictedMatchHideMatchCodeChanged
	 */
	struct UWBP_Sheik_Social_Settings_C_OnRestrictedMatchHideMatchCodeChanged_Params
	{
	public:
		bool                                                       bHideInviteCode;                                         // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_Sheik_Social_Settings.WBP_Sheik_Social_Settings_C.BndEvt__WBP_Sheik_Social_Settings_CrossplayToggle_1_K2Node_ComponentBoundEvent_2_OnOptionChanged__DelegateSignature
	 */
	struct UWBP_Sheik_Social_Settings_C_BndEvt__WBP_Sheik_Social_Settings_CrossplayToggle_1_K2Node_ComponentBoundEvent_2_OnOptionChanged__DelegateSignature_Params
	{
	public:
		class UIGUI_WidgetBase*                                    Source;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FText                                                Text;                                                    // 0x0008(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		int32_t                                                    index;                                                   // 0x0020(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Sheik_Social_Settings.WBP_Sheik_Social_Settings_C.HandleOnPlayerLeftParty
	 */
	struct UWBP_Sheik_Social_Settings_C_HandleOnPlayerLeftParty_Params
	{
	public:
		bool                                                       Succeeded;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bLeftPrivate;                                            // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bLeftTeam;                                               // 0x0002(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bLeftPlatform;                                           // 0x0003(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_Sheik_Social_Settings.WBP_Sheik_Social_Settings_C.HandleOnPartyPlayerLeftParty
	 */
	struct UWBP_Sheik_Social_Settings_C_HandleOnPartyPlayerLeftParty_Params
	{
	public:
		class FString                                              PlayerId;                                                // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Sheik_Social_Settings.WBP_Sheik_Social_Settings_C.HandleOnPlayerJoinedParty
	 */
	struct UWBP_Sheik_Social_Settings_C_HandleOnPlayerJoinedParty_Params
	{
	public:
		bool                                                       bSucceeded;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		ESheikPartyJoinFailure                                     FailureReason;                                           // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Sheik_Social_Settings.WBP_Sheik_Social_Settings_C.HandleOnPartyPlayerJoinedParty
	 */
	struct UWBP_Sheik_Social_Settings_C_HandleOnPartyPlayerJoinedParty_Params
	{
	public:
		class FString                                              PlayerId;                                                // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		class FString                                              MetaData;                                                // 0x0010(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		TArray<struct FMatchmakerPlayerAttribute>                  Attributes;                                              // 0x0020(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function WBP_Sheik_Social_Settings.WBP_Sheik_Social_Settings_C.BndEvt__WBP_Sheik_Social_Settings_VoiceChatOptionsToggle_K2Node_ComponentBoundEvent_1_OnOptionChanged__DelegateSignature
	 */
	struct UWBP_Sheik_Social_Settings_C_BndEvt__WBP_Sheik_Social_Settings_VoiceChatOptionsToggle_K2Node_ComponentBoundEvent_1_OnOptionChanged__DelegateSignature_Params
	{
	public:
		class UIGUI_WidgetBase*                                    Source;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FText                                                Text;                                                    // 0x0008(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		int32_t                                                    index;                                                   // 0x0020(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Sheik_Social_Settings.WBP_Sheik_Social_Settings_C.BndEvt__WBP_Sheik_Social_Settings_VoiceChatMethodToggle_K2Node_ComponentBoundEvent_3_OnOptionChanged__DelegateSignature
	 */
	struct UWBP_Sheik_Social_Settings_C_BndEvt__WBP_Sheik_Social_Settings_VoiceChatMethodToggle_K2Node_ComponentBoundEvent_3_OnOptionChanged__DelegateSignature_Params
	{
	public:
		class UIGUI_WidgetBase*                                    Source;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FText                                                Text;                                                    // 0x0008(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		int32_t                                                    index;                                                   // 0x0020(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Sheik_Social_Settings.WBP_Sheik_Social_Settings_C.BndEvt__WBP_Sheik_Social_Settings_VoiceChatVolumeSlider_K2Node_ComponentBoundEvent_4_OnValueChanged__DelegateSignature
	 */
	struct UWBP_Sheik_Social_Settings_C_BndEvt__WBP_Sheik_Social_Settings_VoiceChatVolumeSlider_K2Node_ComponentBoundEvent_4_OnValueChanged__DelegateSignature_Params
	{
	public:
		class UIGUI_WidgetBase*                                    Source;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      RawValue;                                                // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      PercentValue;                                            // 0x000C(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Sheik_Social_Settings.WBP_Sheik_Social_Settings_C.BndEvt__WBP_Sheik_Social_Settings_VoiceChatInputDevice_K2Node_ComponentBoundEvent_5_OnOptionChanged__DelegateSignature
	 */
	struct UWBP_Sheik_Social_Settings_C_BndEvt__WBP_Sheik_Social_Settings_VoiceChatInputDevice_K2Node_ComponentBoundEvent_5_OnOptionChanged__DelegateSignature_Params
	{
	public:
		class UIGUI_WidgetBase*                                    Source;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FText                                                Text;                                                    // 0x0008(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		int32_t                                                    index;                                                   // 0x0020(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Sheik_Social_Settings.WBP_Sheik_Social_Settings_C.BndEvt__WBP_Sheik_Social_Settings_VoiceChatOutputDevice_K2Node_ComponentBoundEvent_10_OnOptionChanged__DelegateSignature
	 */
	struct UWBP_Sheik_Social_Settings_C_BndEvt__WBP_Sheik_Social_Settings_VoiceChatOutputDevice_K2Node_ComponentBoundEvent_10_OnOptionChanged__DelegateSignature_Params
	{
	public:
		class UIGUI_WidgetBase*                                    Source;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FText                                                Text;                                                    // 0x0008(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		int32_t                                                    index;                                                   // 0x0020(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Sheik_Social_Settings.WBP_Sheik_Social_Settings_C.OnVoiceChatOptionsUpdated
	 */
	struct UWBP_Sheik_Social_Settings_C_OnVoiceChatOptionsUpdated_Params
	{
	public:
		bool                                                       bIsEnabled;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bIsMuted;                                                // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bIsDeafened;                                             // 0x0002(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bIsPushToTalk;                                           // 0x0003(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_Sheik_Social_Settings.WBP_Sheik_Social_Settings_C.OnVoiceChatAvailableAudioDevicesChanged
	 */
	struct UWBP_Sheik_Social_Settings_C_OnVoiceChatAvailableAudioDevicesChanged_Params
	{	};

	/**
	 * Function WBP_Sheik_Social_Settings.WBP_Sheik_Social_Settings_C.BndEvt__SocialPrivacyToggle_K2Node_ComponentBoundEvent_0_OnOptionChanged__DelegateSignature
	 */
	struct UWBP_Sheik_Social_Settings_C_BndEvt__SocialPrivacyToggle_K2Node_ComponentBoundEvent_0_OnOptionChanged__DelegateSignature_Params
	{
	public:
		class UIGUI_WidgetBase*                                    Source;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FText                                                Text;                                                    // 0x0008(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		int32_t                                                    index;                                                   // 0x0020(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Sheik_Social_Settings.WBP_Sheik_Social_Settings_C.ConstructOnlyOnce
	 */
	struct UWBP_Sheik_Social_Settings_C_ConstructOnlyOnce_Params
	{	};

	/**
	 * Function WBP_Sheik_Social_Settings.WBP_Sheik_Social_Settings_C.BndEvt__WBP_Sheik_Social_Settings_TeamFillToggle_K2Node_ComponentBoundEvent_11_OnOptionChanged__DelegateSignature
	 */
	struct UWBP_Sheik_Social_Settings_C_BndEvt__WBP_Sheik_Social_Settings_TeamFillToggle_K2Node_ComponentBoundEvent_11_OnOptionChanged__DelegateSignature_Params
	{
	public:
		class UIGUI_WidgetBase*                                    Source;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FText                                                Text;                                                    // 0x0008(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		int32_t                                                    index;                                                   // 0x0020(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Sheik_Social_Settings.WBP_Sheik_Social_Settings_C.ExecuteUbergraph_WBP_Sheik_Social_Settings
	 */
	struct UWBP_Sheik_Social_Settings_C_ExecuteUbergraph_WBP_Sheik_Social_Settings_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_VAYS[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function WBP_Sheik_Social_Settings.WBP_Sheik_Social_Settings_C.JoinRestrictedMatchConfirmed__DelegateSignature
	 */
	struct UWBP_Sheik_Social_Settings_C_JoinRestrictedMatchConfirmed__DelegateSignature_Params
	{
	public:
		class FString                                              InviteCode;                                              // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		class FString                                              MatchConfig;                                             // 0x0010(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Sheik_Social_Settings.WBP_Sheik_Social_Settings_C.StartRestrictedMatchConfirmed__DelegateSignature
	 */
	struct UWBP_Sheik_Social_Settings_C_StartRestrictedMatchConfirmed__DelegateSignature_Params
	{
	public:
		class FString                                              InviteCode;                                              // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		int32_t                                                    JoinTimer;                                               // 0x0010(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       ShouldServerBackfill;                                    // 0x0014(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_QM1Z[0x3];                                   // 0x0015(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              MatchConfig;                                             // 0x0018(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
