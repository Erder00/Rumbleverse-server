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
	 * Function WBP_Sheik_ScreenEoM.WBP_Sheik_ScreenEOM_C.SequenceEvent__ENTRYPOINTWBP_Sheik_ScreenEOM_1
	 */
	struct UWBP_Sheik_ScreenEOM_C_SequenceEvent__ENTRYPOINTWBP_Sheik_ScreenEOM_1_Params
	{	};

	/**
	 * Function WBP_Sheik_ScreenEoM.WBP_Sheik_ScreenEOM_C.RefreshVoiceChatWidgets
	 */
	struct UWBP_Sheik_ScreenEOM_C_RefreshVoiceChatWidgets_Params
	{	};

	/**
	 * Function WBP_Sheik_ScreenEoM.WBP_Sheik_ScreenEOM_C.UpdateVoiceChatDelegates
	 */
	struct UWBP_Sheik_ScreenEOM_C_UpdateVoiceChatDelegates_Params
	{
	public:
		bool                                                       Subscribe;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_VV1T[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function WBP_Sheik_ScreenEoM.WBP_Sheik_ScreenEOM_C.OnVoiceChatMuteListChanged
	 */
	struct UWBP_Sheik_ScreenEOM_C_OnVoiceChatMuteListChanged_Params
	{	};

	/**
	 * Function WBP_Sheik_ScreenEoM.WBP_Sheik_ScreenEOM_C.UpdateSpecatorHudSubscription
	 */
	struct UWBP_Sheik_ScreenEOM_C_UpdateSpecatorHudSubscription_Params
	{	};

	/**
	 * Function WBP_Sheik_ScreenEoM.WBP_Sheik_ScreenEOM_C.PlayChampionNotification
	 */
	struct UWBP_Sheik_ScreenEOM_C_PlayChampionNotification_Params
	{	};

	/**
	 * Function WBP_Sheik_ScreenEoM.WBP_Sheik_ScreenEOM_C.OnMuteAllPressed
	 */
	struct UWBP_Sheik_ScreenEOM_C_OnMuteAllPressed_Params
	{
	public:
		struct FInputEventData                                     InputEventData;                                          // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function WBP_Sheik_ScreenEoM.WBP_Sheik_ScreenEOM_C.IsInRestrictedMatch
	 */
	struct UWBP_Sheik_ScreenEOM_C_IsInRestrictedMatch_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_CIRY[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function WBP_Sheik_ScreenEoM.WBP_Sheik_ScreenEOM_C.GetPlayerPlatformIcon
	 */
	struct UWBP_Sheik_ScreenEOM_C_GetPlayerPlatformIcon_Params
	{
	public:
		class APlayerState*                                        PlayerState;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FText                                                PlatformIcon;                                            // 0x0008(0x0018)  (Parm, OutParm)
	};

	/**
	 * Function WBP_Sheik_ScreenEoM.WBP_Sheik_ScreenEOM_C.SetMutePromptText
	 */
	struct UWBP_Sheik_ScreenEOM_C_SetMutePromptText_Params
	{
	public:
		bool                                                       IsAllMuted;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_Sheik_ScreenEoM.WBP_Sheik_ScreenEOM_C.HasVoiceChatPermissions
	 */
	struct UWBP_Sheik_ScreenEOM_C_HasVoiceChatPermissions_Params
	{
	public:
		bool                                                       HasPermissions;                                          // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_KE77[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function WBP_Sheik_ScreenEoM.WBP_Sheik_ScreenEOM_C.OnSocialMenuPressed
	 */
	struct UWBP_Sheik_ScreenEOM_C_OnSocialMenuPressed_Params
	{
	public:
		struct FInputEventData                                     InputEventData;                                          // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function WBP_Sheik_ScreenEoM.WBP_Sheik_ScreenEOM_C.SetupSocialInputSubscriptions
	 */
	struct UWBP_Sheik_ScreenEOM_C_SetupSocialInputSubscriptions_Params
	{	};

	/**
	 * Function WBP_Sheik_ScreenEoM.WBP_Sheik_ScreenEOM_C.GetPlayerStateThatKilledMe
	 */
	struct UWBP_Sheik_ScreenEOM_C_GetPlayerStateThatKilledMe_Params
	{	};

	/**
	 * Function WBP_Sheik_ScreenEoM.WBP_Sheik_ScreenEOM_C.OnTeammateLeftServer
	 */
	struct UWBP_Sheik_ScreenEOM_C_OnTeammateLeftServer_Params
	{
	public:
		class AIGPlayerState*                                      ExitingTeammate;                                         // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Sheik_ScreenEoM.WBP_Sheik_ScreenEOM_C.Set Clout Sounds Playback
	 */
	struct UWBP_Sheik_ScreenEOM_C_SetCloutSoundsPlayback_Params
	{
	public:
		bool                                                       bShouldPlaySound;                                        // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_Sheik_ScreenEoM.WBP_Sheik_ScreenEOM_C.ShouldShowTitleCard
	 */
	struct UWBP_Sheik_ScreenEOM_C_ShouldShowTitleCard_Params
	{
	public:
		bool                                                       ShouldShowTitleCard;                                     // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_GSGJ[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function WBP_Sheik_ScreenEoM.WBP_Sheik_ScreenEOM_C.SkipSequence-BattlePass
	 */
	struct UWBP_Sheik_ScreenEOM_C_SkipSequenceBattlePass_Params
	{	};

	/**
	 * Function WBP_Sheik_ScreenEoM.WBP_Sheik_ScreenEOM_C.SkipSequence-FanMail
	 */
	struct UWBP_Sheik_ScreenEOM_C_SkipSequenceFanMail_Params
	{	};

	/**
	 * Function WBP_Sheik_ScreenEoM.WBP_Sheik_ScreenEOM_C.OnSkipSequencePressed
	 */
	struct UWBP_Sheik_ScreenEOM_C_OnSkipSequencePressed_Params
	{
	public:
		struct FInputEventData                                     InputEventData;                                          // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function WBP_Sheik_ScreenEoM.WBP_Sheik_ScreenEOM_C.OnChallengesAnimsCompleted
	 */
	struct UWBP_Sheik_ScreenEOM_C_OnChallengesAnimsCompleted_Params
	{	};

	/**
	 * Function WBP_Sheik_ScreenEoM.WBP_Sheik_ScreenEOM_C.BindMatchmakingCallbacks
	 */
	struct UWBP_Sheik_ScreenEOM_C_BindMatchmakingCallbacks_Params
	{	};

	/**
	 * Function WBP_Sheik_ScreenEoM.WBP_Sheik_ScreenEOM_C.SetKeyVariables
	 */
	struct UWBP_Sheik_ScreenEOM_C_SetKeyVariables_Params
	{	};

	/**
	 * Function WBP_Sheik_ScreenEoM.WBP_Sheik_ScreenEOM_C.CleanupNonleaderHotfixCallbacks
	 */
	struct UWBP_Sheik_ScreenEOM_C_CleanupNonleaderHotfixCallbacks_Params
	{	};

	/**
	 * Function WBP_Sheik_ScreenEoM.WBP_Sheik_ScreenEOM_C.CleanupLeaderHotfixCallbacks
	 */
	struct UWBP_Sheik_ScreenEOM_C_CleanupLeaderHotfixCallbacks_Params
	{	};

	/**
	 * Function WBP_Sheik_ScreenEoM.WBP_Sheik_ScreenEOM_C.SyncPartyToHotfixVersion
	 */
	struct UWBP_Sheik_ScreenEOM_C_SyncPartyToHotfixVersion_Params
	{	};

	/**
	 * Function WBP_Sheik_ScreenEoM.WBP_Sheik_ScreenEOM_C.FinishDeferredHotfixCheck
	 */
	struct UWBP_Sheik_ScreenEOM_C_FinishDeferredHotfixCheck_Params
	{	};

	/**
	 * Function WBP_Sheik_ScreenEoM.WBP_Sheik_ScreenEOM_C.HandleHotfixCallback
	 */
	struct UWBP_Sheik_ScreenEOM_C_HandleHotfixCallback_Params
	{
	public:
		bool                                                       bShouldStartMatchmaking;                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_V8NG[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function WBP_Sheik_ScreenEoM.WBP_Sheik_ScreenEOM_C.StartMatchmaking
	 */
	struct UWBP_Sheik_ScreenEOM_C_StartMatchmaking_Params
	{	};

	/**
	 * Function WBP_Sheik_ScreenEoM.WBP_Sheik_ScreenEOM_C.UpdateChallengesVisual
	 */
	struct UWBP_Sheik_ScreenEOM_C_UpdateChallengesVisual_Params
	{	};

	/**
	 * Function WBP_Sheik_ScreenEoM.WBP_Sheik_ScreenEOM_C.UpdateFanMailVisual
	 */
	struct UWBP_Sheik_ScreenEOM_C_UpdateFanMailVisual_Params
	{
	public:
		bool                                                       EOMSkip;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_Sheik_ScreenEoM.WBP_Sheik_ScreenEOM_C.CheckIfPartyOfOne
	 */
	struct UWBP_Sheik_ScreenEOM_C_CheckIfPartyOfOne_Params
	{
	public:
		bool                                                       PlayerIsPartyOfOne;                                      // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_0X47[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function WBP_Sheik_ScreenEoM.WBP_Sheik_ScreenEOM_C.CheckIfPartiedTeammatesAreStillPlaying
	 */
	struct UWBP_Sheik_ScreenEOM_C_CheckIfPartiedTeammatesAreStillPlaying_Params
	{
	public:
		bool                                                       PartiedTeammatesAreStillPlaying;                         // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_74G2[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function WBP_Sheik_ScreenEoM.WBP_Sheik_ScreenEOM_C.CheckIfPartiedButNotLeader
	 */
	struct UWBP_Sheik_ScreenEOM_C_CheckIfPartiedButNotLeader_Params
	{
	public:
		bool                                                       IsPartiedButNotLeader;                                   // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_Sheik_ScreenEoM.WBP_Sheik_ScreenEOM_C.UpdateMatchmakingPromptLabels
	 */
	struct UWBP_Sheik_ScreenEOM_C_UpdateMatchmakingPromptLabels_Params
	{	};

	/**
	 * Function WBP_Sheik_ScreenEoM.WBP_Sheik_ScreenEOM_C.GetMatchType
	 */
	struct UWBP_Sheik_ScreenEOM_C_GetMatchType_Params
	{
	public:
		class FString                                              MatchConfig;                                             // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		class FText                                                NewParam;                                                // 0x0010(0x0018)  (Parm, OutParm)
	};

	/**
	 * Function WBP_Sheik_ScreenEoM.WBP_Sheik_ScreenEOM_C.SetPlayerSpawnInfo
	 */
	struct UWBP_Sheik_ScreenEOM_C_SetPlayerSpawnInfo_Params
	{	};

	/**
	 * Function WBP_Sheik_ScreenEoM.WBP_Sheik_ScreenEOM_C.BeginEOMSkip
	 */
	struct UWBP_Sheik_ScreenEOM_C_BeginEOMSkip_Params
	{	};

	/**
	 * Function WBP_Sheik_ScreenEoM.WBP_Sheik_ScreenEOM_C.UpdateAllInputSubscriptions
	 */
	struct UWBP_Sheik_ScreenEOM_C_UpdateAllInputSubscriptions_Params
	{
	public:
		bool                                                       Subscribe;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_AIHU[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function WBP_Sheik_ScreenEoM.WBP_Sheik_ScreenEOM_C.UpdateRespawnSubscription
	 */
	struct UWBP_Sheik_ScreenEOM_C_UpdateRespawnSubscription_Params
	{	};

	/**
	 * Function WBP_Sheik_ScreenEoM.WBP_Sheik_ScreenEOM_C.PlayOrDelayEOMSequence
	 */
	struct UWBP_Sheik_ScreenEOM_C_PlayOrDelayEOMSequence_Params
	{	};

	/**
	 * Function WBP_Sheik_ScreenEoM.WBP_Sheik_ScreenEOM_C.SetRoundEndInfo
	 */
	struct UWBP_Sheik_ScreenEOM_C_SetRoundEndInfo_Params
	{
	public:
		bool                                                       RoundAlreadyEnded;                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       LocalPlayerIsWinner;                                     // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_CM7N[0x6];                                   // 0x0002(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<class AIGPlayerState*>                              ListOfWinners;                                           // 0x0008(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function WBP_Sheik_ScreenEoM.WBP_Sheik_ScreenEOM_C.OnRoundFinished_cb
	 */
	struct UWBP_Sheik_ScreenEOM_C_OnRoundFinished_cb_Params
	{
	public:
		TArray<class AIGPlayerState*>                              WinningPlayers;                                          // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		bool                                                       IsWinner;                                                // 0x0010(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       isSpectator;                                             // 0x0011(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_4GWU[0x6];                                   // 0x0012(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function WBP_Sheik_ScreenEoM.WBP_Sheik_ScreenEOM_C.UpdateScreenToggleSubscription
	 */
	struct UWBP_Sheik_ScreenEOM_C_UpdateScreenToggleSubscription_Params
	{	};

	/**
	 * Function WBP_Sheik_ScreenEoM.WBP_Sheik_ScreenEOM_C.OnDebugHideHUDPressed
	 */
	struct UWBP_Sheik_ScreenEOM_C_OnDebugHideHUDPressed_Params
	{
	public:
		struct FInputEventData                                     InputEventData;                                          // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function WBP_Sheik_ScreenEoM.WBP_Sheik_ScreenEOM_C.UpdateMatchmakeAndExitSubscriptions
	 */
	struct UWBP_Sheik_ScreenEOM_C_UpdateMatchmakeAndExitSubscriptions_Params
	{	};

	/**
	 * Function WBP_Sheik_ScreenEoM.WBP_Sheik_ScreenEOM_C.OnGameFlowStateChanged
	 */
	struct UWBP_Sheik_ScreenEOM_C_OnGameFlowStateChanged_Params
	{
	public:
		EGameFlowState                                             GameFlowState;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Sheik_ScreenEoM.WBP_Sheik_ScreenEOM_C.SetInitialStates
	 */
	struct UWBP_Sheik_ScreenEOM_C_SetInitialStates_Params
	{	};

	/**
	 * Function WBP_Sheik_ScreenEoM.WBP_Sheik_ScreenEOM_C.OnDevRespawnPressed
	 */
	struct UWBP_Sheik_ScreenEOM_C_OnDevRespawnPressed_Params
	{
	public:
		struct FInputEventData                                     InputEventData;                                          // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function WBP_Sheik_ScreenEoM.WBP_Sheik_ScreenEOM_C.OnGoToFrontEndCanceled
	 */
	struct UWBP_Sheik_ScreenEOM_C_OnGoToFrontEndCanceled_Params
	{
	public:
		int32_t                                                    ID;                                                      // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FName                                                Name;                                                    // 0x0004(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Sheik_ScreenEoM.WBP_Sheik_ScreenEOM_C.OnGoToFrontEndConfirmed
	 */
	struct UWBP_Sheik_ScreenEOM_C_OnGoToFrontEndConfirmed_Params
	{
	public:
		int32_t                                                    ID;                                                      // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FName                                                Name;                                                    // 0x0004(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_UU7M[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function WBP_Sheik_ScreenEoM.WBP_Sheik_ScreenEOM_C.OnGoToFrontEndPressed
	 */
	struct UWBP_Sheik_ScreenEOM_C_OnGoToFrontEndPressed_Params
	{
	public:
		struct FInputEventData                                     InputEventData;                                          // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function WBP_Sheik_ScreenEoM.WBP_Sheik_ScreenEOM_C.OnMatchmakingPressed
	 */
	struct UWBP_Sheik_ScreenEOM_C_OnMatchmakingPressed_Params
	{
	public:
		struct FInputEventData                                     InputEventData;                                          // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function WBP_Sheik_ScreenEoM.WBP_Sheik_ScreenEOM_C.OnSpectatePressed
	 */
	struct UWBP_Sheik_ScreenEOM_C_OnSpectatePressed_Params
	{
	public:
		struct FInputEventData                                     InputEventData;                                          // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function WBP_Sheik_ScreenEoM.WBP_Sheik_ScreenEOM_C.UpdateToggleStatsPanelSubscription
	 */
	struct UWBP_Sheik_ScreenEOM_C_UpdateToggleStatsPanelSubscription_Params
	{	};

	/**
	 * Function WBP_Sheik_ScreenEoM.WBP_Sheik_ScreenEOM_C.OnPartyMatchmakingFound
	 */
	struct UWBP_Sheik_ScreenEOM_C_OnPartyMatchmakingFound_Params
	{
	public:
		bool                                                       bIsPartyLeader;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_Sheik_ScreenEoM.WBP_Sheik_ScreenEOM_C.OnPartyPlayerLeft
	 */
	struct UWBP_Sheik_ScreenEOM_C_OnPartyPlayerLeft_Params
	{
	public:
		class FString                                              PlayerId;                                                // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Sheik_ScreenEoM.WBP_Sheik_ScreenEOM_C.OnPartyMatchmakingError
	 */
	struct UWBP_Sheik_ScreenEOM_C_OnPartyMatchmakingError_Params
	{
	public:
		class FText                                                ErrorText;                                               // 0x0000(0x0018)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		bool                                                       bIsPartyLeader;                                          // 0x0018(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_Sheik_ScreenEoM.WBP_Sheik_ScreenEOM_C.OnHotfixingComplete
	 */
	struct UWBP_Sheik_ScreenEOM_C_OnHotfixingComplete_Params
	{
	public:
		EUpdateCompletionStatus                                    HotfixResult;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Sheik_ScreenEoM.WBP_Sheik_ScreenEOM_C.OnHotfixingDefer
	 */
	struct UWBP_Sheik_ScreenEOM_C_OnHotfixingDefer_Params
	{
	public:
		TArray<int32_t>                                            AvailableVersions;                                       // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function WBP_Sheik_ScreenEoM.WBP_Sheik_ScreenEOM_C.OnJoiningMatch
	 */
	struct UWBP_Sheik_ScreenEOM_C_OnJoiningMatch_Params
	{	};

	/**
	 * Function WBP_Sheik_ScreenEoM.WBP_Sheik_ScreenEOM_C.OnPartyMemberAttributeUpdated
	 */
	struct UWBP_Sheik_ScreenEOM_C_OnPartyMemberAttributeUpdated_Params
	{
	public:
		class FString                                              PlayerId;                                                // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		struct FPlayerPartyAttributesInfo                          UpdatedPlayerInfo;                                       // 0x0010(0x00E0)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function WBP_Sheik_ScreenEoM.WBP_Sheik_ScreenEOM_C.OnNonLeaderHotfixComplete
	 */
	struct UWBP_Sheik_ScreenEOM_C_OnNonLeaderHotfixComplete_Params
	{
	public:
		EUpdateCompletionStatus                                    UpdateStatus;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Sheik_ScreenEoM.WBP_Sheik_ScreenEOM_C.OnNonLeaderHotfixDefer
	 */
	struct UWBP_Sheik_ScreenEOM_C_OnNonLeaderHotfixDefer_Params
	{
	public:
		TArray<int32_t>                                            AvailableVersions;                                       // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function WBP_Sheik_ScreenEoM.WBP_Sheik_ScreenEOM_C.OnVersionUpdated
	 */
	struct UWBP_Sheik_ScreenEOM_C_OnVersionUpdated_Params
	{
	public:
		int32_t                                                    NewVersion;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Sheik_ScreenEoM.WBP_Sheik_ScreenEOM_C.OnPartyMatchmakingStopped
	 */
	struct UWBP_Sheik_ScreenEOM_C_OnPartyMatchmakingStopped_Params
	{
	public:
		bool                                                       bIsPartyLeader;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_Sheik_ScreenEoM.WBP_Sheik_ScreenEOM_C.OnHotfixSyncComplete
	 */
	struct UWBP_Sheik_ScreenEOM_C_OnHotfixSyncComplete_Params
	{
	public:
		bool                                                       bWasSuccessful;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_VDQH[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FSheikError                                         Error;                                                   // 0x0004(0x000C)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	};

	/**
	 * Function WBP_Sheik_ScreenEoM.WBP_Sheik_ScreenEOM_C.OnPartyMatchmakingStarted
	 */
	struct UWBP_Sheik_ScreenEOM_C_OnPartyMatchmakingStarted_Params
	{
	public:
		class FString                                              ConfigurationName;                                       // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		bool                                                       bIsPartyLeader;                                          // 0x0010(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_Sheik_ScreenEoM.WBP_Sheik_ScreenEOM_C.OnPushToTalkReleased
	 */
	struct UWBP_Sheik_ScreenEOM_C_OnPushToTalkReleased_Params
	{
	public:
		struct FInputEventData                                     InputEventData;                                          // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function WBP_Sheik_ScreenEoM.WBP_Sheik_ScreenEOM_C.OnPushToTalkPressed
	 */
	struct UWBP_Sheik_ScreenEOM_C_OnPushToTalkPressed_Params
	{
	public:
		struct FInputEventData                                     InputEventData;                                          // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function WBP_Sheik_ScreenEoM.WBP_Sheik_ScreenEOM_C.EnablePushToTalk
	 */
	struct UWBP_Sheik_ScreenEOM_C_EnablePushToTalk_Params
	{
	public:
		bool                                                       IsEnabled;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_Sheik_ScreenEoM.WBP_Sheik_ScreenEOM_C.OnMatchmakingComplete
	 */
	struct UWBP_Sheik_ScreenEOM_C_OnMatchmakingComplete_Params
	{
	public:
		bool                                                       bSuccessful;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_97PS[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FSheikError                                         Error;                                                   // 0x0004(0x000C)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	};

	/**
	 * Function WBP_Sheik_ScreenEoM.WBP_Sheik_ScreenEOM_C.OnCloutLevelSequenceComplete
	 */
	struct UWBP_Sheik_ScreenEOM_C_OnCloutLevelSequenceComplete_Params
	{	};

	/**
	 * Function WBP_Sheik_ScreenEoM.WBP_Sheik_ScreenEOM_C.BeginChallengesSequence
	 */
	struct UWBP_Sheik_ScreenEOM_C_BeginChallengesSequence_Params
	{	};

	/**
	 * Function WBP_Sheik_ScreenEoM.WBP_Sheik_ScreenEOM_C.OnTagTeamSurvived
	 */
	struct UWBP_Sheik_ScreenEOM_C_OnTagTeamSurvived_Params
	{
	public:
		TArray<class AIGPlayerState*>                              WinningPlayers;                                          // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		bool                                                       isLocalPlayer;                                           // 0x0010(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       isSpectator;                                             // 0x0011(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_Sheik_ScreenEoM.WBP_Sheik_ScreenEOM_C.OnChallengesSequenceComplete
	 */
	struct UWBP_Sheik_ScreenEOM_C_OnChallengesSequenceComplete_Params
	{	};

	/**
	 * Function WBP_Sheik_ScreenEoM.WBP_Sheik_ScreenEOM_C.OnFanMailSequenceComplete
	 */
	struct UWBP_Sheik_ScreenEOM_C_OnFanMailSequenceComplete_Params
	{	};

	/**
	 * Function WBP_Sheik_ScreenEoM.WBP_Sheik_ScreenEOM_C.OnBattlePassSequenceComplete
	 */
	struct UWBP_Sheik_ScreenEOM_C_OnBattlePassSequenceComplete_Params
	{	};

	/**
	 * Function WBP_Sheik_ScreenEoM.WBP_Sheik_ScreenEOM_C.OnMatchmakingCancelled
	 */
	struct UWBP_Sheik_ScreenEOM_C_OnMatchmakingCancelled_Params
	{
	public:
		bool                                                       bSuccessful;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_K1T6[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FSheikError                                         Error;                                                   // 0x0004(0x000C)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	};

	/**
	 * Function WBP_Sheik_ScreenEoM.WBP_Sheik_ScreenEOM_C.OnMatchmakingStarted
	 */
	struct UWBP_Sheik_ScreenEOM_C_OnMatchmakingStarted_Params
	{
	public:
		class FString                                              MatchConfig;                                             // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Sheik_ScreenEoM.WBP_Sheik_ScreenEOM_C.BeginEOMSequence
	 */
	struct UWBP_Sheik_ScreenEOM_C_BeginEOMSequence_Params
	{	};

	/**
	 * Function WBP_Sheik_ScreenEoM.WBP_Sheik_ScreenEOM_C.ConstructOnlyOnce
	 */
	struct UWBP_Sheik_ScreenEOM_C_ConstructOnlyOnce_Params
	{	};

	/**
	 * Function WBP_Sheik_ScreenEoM.WBP_Sheik_ScreenEOM_C.OnProgressionStatsSequenceComplete
	 */
	struct UWBP_Sheik_ScreenEOM_C_OnProgressionStatsSequenceComplete_Params
	{	};

	/**
	 * Function WBP_Sheik_ScreenEoM.WBP_Sheik_ScreenEOM_C.OnLegendShown
	 */
	struct UWBP_Sheik_ScreenEOM_C_OnLegendShown_Params
	{	};

	/**
	 * Function WBP_Sheik_ScreenEoM.WBP_Sheik_ScreenEOM_C.OnGainFocus
	 */
	struct UWBP_Sheik_ScreenEOM_C_OnGainFocus_Params
	{
	public:
		int32_t                                                    UserIndex;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Sheik_ScreenEoM.WBP_Sheik_ScreenEOM_C.OnLoseFocus
	 */
	struct UWBP_Sheik_ScreenEOM_C_OnLoseFocus_Params
	{
	public:
		int32_t                                                    UserIndex;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Sheik_ScreenEoM.WBP_Sheik_ScreenEOM_C.EventSkipEOMSequence
	 */
	struct UWBP_Sheik_ScreenEOM_C_EventSkipEOMSequence_Params
	{	};

	/**
	 * Function WBP_Sheik_ScreenEoM.WBP_Sheik_ScreenEOM_C.OnPlacementSequenceComplete
	 */
	struct UWBP_Sheik_ScreenEOM_C_OnPlacementSequenceComplete_Params
	{
	public:
		class UIGUI_WidgetBase*                                    Source;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Sheik_ScreenEoM.WBP_Sheik_ScreenEOM_C.EventFinishSkipSequence
	 */
	struct UWBP_Sheik_ScreenEOM_C_EventFinishSkipSequence_Params
	{	};

	/**
	 * Function WBP_Sheik_ScreenEoM.WBP_Sheik_ScreenEOM_C.OnTeammateEliminated
	 */
	struct UWBP_Sheik_ScreenEOM_C_OnTeammateEliminated_Params
	{	};

	/**
	 * Function WBP_Sheik_ScreenEoM.WBP_Sheik_ScreenEOM_C.SkipEOMAutomatically
	 */
	struct UWBP_Sheik_ScreenEOM_C_SkipEOMAutomatically_Params
	{	};

	/**
	 * Function WBP_Sheik_ScreenEoM.WBP_Sheik_ScreenEOM_C.OnVoiceChatOptionsUpdated
	 */
	struct UWBP_Sheik_ScreenEOM_C_OnVoiceChatOptionsUpdated_Params
	{
	public:
		bool                                                       bIsEnabled;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bIsMuted;                                                // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bIsDeafened;                                             // 0x0002(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bIsPushToTalk;                                           // 0x0003(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_Sheik_ScreenEoM.WBP_Sheik_ScreenEOM_C.ShowChallengesAnim_Finished
	 */
	struct UWBP_Sheik_ScreenEOM_C_ShowChallengesAnim_Finished_Params
	{	};

	/**
	 * Function WBP_Sheik_ScreenEoM.WBP_Sheik_ScreenEOM_C.PreConstruct
	 */
	struct UWBP_Sheik_ScreenEOM_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_Sheik_ScreenEoM.WBP_Sheik_ScreenEOM_C.ExecuteUbergraph_WBP_Sheik_ScreenEOM
	 */
	struct UWBP_Sheik_ScreenEOM_C_ExecuteUbergraph_WBP_Sheik_ScreenEOM_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Sheik_ScreenEoM.WBP_Sheik_ScreenEOM_C.ChallengesSequenceComplete__DelegateSignature
	 */
	struct UWBP_Sheik_ScreenEOM_C_ChallengesSequenceComplete__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
