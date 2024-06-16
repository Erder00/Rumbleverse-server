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
	// # Classes
	// --------------------------------------------------
	/**
	 * WidgetBlueprintGeneratedClass WBP_Sheik_ScreenEoM.WBP_Sheik_ScreenEOM_C
	 * Size -> 0x0250 (FullSize[0x06D0] - InheritedSize[0x0480])
	 */
	class UWBP_Sheik_ScreenEOM_C : public UIGUI_ScreenBase
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0480(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UWidgetAnimation*                                    ShowTeammateInfo;                                        // 0x0488(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UWidgetAnimation*                                    RespawnPromptPulseAnim;                                  // 0x0490(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UWidgetAnimation*                                    ShowProgressionStats;                                    // 0x0498(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UWidgetAnimation*                                    ShowBattlePassProgress;                                  // 0x04A0(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UWidgetAnimation*                                    ShowChallenges;                                          // 0x04A8(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UWidgetAnimation*                                    HideChallenges;                                          // 0x04B0(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UWidgetAnimation*                                    ShowWinnerAnim;                                          // 0x04B8(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UWidgetAnimation*                                    ShowLegend;                                              // 0x04C0(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UWBP_Sheik_EOM_BattlepassProgress_C*                 BattlepassProgress;                                      // 0x04C8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWBP_Sheik_Reps_LP_C*                                Challenges;                                              // 0x04D0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWBP_Sheik_EOM_ChampionNotification_C*               ChampionNotification;                                    // 0x04D8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UOverlay*                                            EOMOverlay;                                              // 0x04E0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWBP_Sheik_FullScreenFade_C*                         Fade;                                                    // 0x04E8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWBP_Sheik_EOM_FanCloutAward_C*                      FanCloutAward;                                           // 0x04F0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWBP_Sheik_EOM_FanMail_C*                            FanMail;                                                 // 0x04F8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UVerticalBox*                                        LeaveAndMatchmakePrompts;                                // 0x0500(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UOverlay*                                            LeaveMatchOverlay;                                       // 0x0508(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              LeftCornerBG;                                            // 0x0510(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWBP_Sheik_LargeFormatMatchmakingInfo_C*             Matchmaking_PromptTimer;                                 // 0x0518(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWBP_Sheik_MatchmakingInfo_C*                        MatchmakingInfo;                                         // 0x0520(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UOverlay*                                            MatchmakingOverlay;                                      // 0x0528(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWidgetSwitcher*                                     MatchmakingPrompt_Switcher;                              // 0x0530(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UUniformGridPanel*                                   MatchmakingPrompts;                                      // 0x0538(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWBP_Sheik_EOM_Placement_C*                          Placement;                                               // 0x0540(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWBP_Sheik_BattlePassProgression_C*                  PlayerBattlePassLevel;                                   // 0x0548(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWBP_Sheik_EOM_MatchInfo_C*                          ProgressionStats;                                        // 0x0550(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWBP_Sheik_NonNavigableButton_C*                     Prompt_CancelMatchmaking;                                // 0x0558(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWBP_Sheik_LegendKey_C*                              Prompt_MainMenu;                                         // 0x0560(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWBP_Sheik_LegendKey_C*                              Prompt_Matchmaking;                                      // 0x0568(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWBP_Sheik_LegendKey_C*                              Prompt_MuteAll;                                          // 0x0570(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWBP_Sheik_LegendKey_C*                              Prompt_PushToTalk;                                       // 0x0578(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWBP_Sheik_LegendKey_C*                              Prompt_Respawn;                                          // 0x0580(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWBP_Sheik_LegendKey_C*                              Prompt_Skip;                                             // 0x0588(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWBP_Sheik_LegendKey_C*                              Prompt_SocialMenu;                                       // 0x0590(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWBP_Sheik_LegendKey_C*                              Prompt_Spectate;                                         // 0x0598(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UOverlay*                                            PromptTimerOverlay;                                      // 0x05A0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              RightCornerBG;                                           // 0x05A8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UOverlay*                                            RootOverlay;                                             // 0x05B0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UVerticalBox*                                        SocialPrompts;                                           // 0x05B8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWBP_SpectatorHUD_C*                                 SpectatorHUD;                                            // 0x05C0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UOverlay*                                            SpectatorHUDOverlay;                                     // 0x05C8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWBP_Sheik_EOM_TeamInfoContainer_C*                  WBP_Sheik_EOM_TeamInfoContainer;                         // 0x05D0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UOverlay*                                            WinnerOverlay;                                           // 0x05D8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class URichTextBlock*                                      WinnerRichTextBlock;                                     // 0x05E0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class FName                                                FrontendLevel;                                           // 0x05E8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       IsSpectatorView;                                         // 0x05F0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       LocalPlayerIsWinner;                                     // 0x05F1(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_S8MX[0x6];                                   // 0x05F2(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class ASheikGameStateBR*                                   SheikGameState;                                          // 0x05F8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class USheikEndOfMatchCallbacks*                           EOMCallbacks;                                            // 0x0600(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class USheikGameInfo_BP_C*                                 SheikGameInfo;                                           // 0x0608(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class USheikMatchmakingCallbacks*                          MatchmakingCallbacks;                                    // 0x0610(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       HasCompletedEOM;                                         // 0x0618(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       RoundAlreadyEnded;                                       // 0x0619(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_E0GC[0x6];                                   // 0x061A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class AIGPlayerState*>                              ListOfWinners;                                           // 0x0620(0x0010) Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance
		bool                                                       DiedBeforeTeammate;                                      // 0x0630(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_XVU6[0x7];                                   // 0x0631(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              CurrentMatchConfig;                                      // 0x0638(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash
		class USheikPartyManager*                                  PartyManager;                                            // 0x0648(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       CanPlayFansBuildOn;                                      // 0x0650(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_41XQ[0x3];                                   // 0x0651(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      TimetoWaitforMatchmakingAutoHide;                        // 0x0654(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      TimeToWaitAfterMatchmakingCompletedToJoinServer;         // 0x0658(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      TimeHeldToCancelMatchmaking;                             // 0x065C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class USheikHotfixSystem*                                  HotfixSystem;                                            // 0x0660(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    DestHotfixVersion;                                       // 0x0668(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_Q6SU[0x4];                                   // 0x066C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<int32_t>                                            CachedAvailableHOtfixVersions;                           // 0x0670(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		class FScriptMulticastDelegate                             ChallengesSequenceComplete;                              // 0x0680(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		bool                                                       ChallengesComplete;                                      // 0x0690(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       CloutLevelComplete;                                      // 0x0691(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       SkipEOM;                                                 // 0x0692(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_OZEZ[0x5];                                   // 0x0693(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class ASheikPlayerStateCommon*                             PlayerState;                                             // 0x0698(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ASheikPlayerStateCommon*                             PlayerStateOfPlayerWhoEliminatedMe;                      // 0x06A0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		EUISounds                                                  SpectatorHUDOpenSound;                                   // 0x06A8(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		EUISounds                                                  SpectatorHUDCloseSound;                                  // 0x06A9(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       HasLeavePartyPrompt;                                     // 0x06AA(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       PlayingEOM;                                              // 0x06AB(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       IsPushToTalkEnabled;                                     // 0x06AC(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_YTZJ[0x3];                                   // 0x06AD(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FMargin                                             MatchmakingPromptSpectatorPadding;                       // 0x06B0(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor
		struct FMargin                                             MatchmakingPromptNonSpectatorPadding;                    // 0x06C0(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor

	public:
		void SequenceEvent__ENTRYPOINTWBP_Sheik_ScreenEOM_1();
		void RefreshVoiceChatWidgets();
		void UpdateVoiceChatDelegates(bool Subscribe);
		void OnVoiceChatMuteListChanged();
		void UpdateSpecatorHudSubscription();
		void PlayChampionNotification();
		void OnMuteAllPressed(const struct FInputEventData& InputEventData);
		bool IsInRestrictedMatch();
		void GetPlayerPlatformIcon(class APlayerState* PlayerState, class FText* PlatformIcon);
		void SetMutePromptText(bool IsAllMuted);
		void HasVoiceChatPermissions(bool* HasPermissions);
		void OnSocialMenuPressed(const struct FInputEventData& InputEventData);
		void SetupSocialInputSubscriptions();
		void GetPlayerStateThatKilledMe();
		void OnTeammateLeftServer(class AIGPlayerState* ExitingTeammate);
		void SetCloutSoundsPlayback(bool bShouldPlaySound);
		void ShouldShowTitleCard(bool* ShouldShowTitleCard);
		void SkipSequenceBattlePass();
		void SkipSequenceFanMail();
		void OnSkipSequencePressed(const struct FInputEventData& InputEventData);
		void OnChallengesAnimsCompleted();
		void BindMatchmakingCallbacks();
		void SetKeyVariables();
		void CleanupNonleaderHotfixCallbacks();
		void CleanupLeaderHotfixCallbacks();
		void SyncPartyToHotfixVersion();
		void FinishDeferredHotfixCheck();
		void HandleHotfixCallback(bool bShouldStartMatchmaking);
		void StartMatchmaking();
		void UpdateChallengesVisual();
		void UpdateFanMailVisual(bool EOMSkip);
		void CheckIfPartyOfOne(bool* PlayerIsPartyOfOne);
		void CheckIfPartiedTeammatesAreStillPlaying(bool* PartiedTeammatesAreStillPlaying);
		void CheckIfPartiedButNotLeader(bool* IsPartiedButNotLeader);
		void UpdateMatchmakingPromptLabels();
		void GetMatchType(const class FString& MatchConfig, class FText* NewParam);
		void SetPlayerSpawnInfo();
		void BeginEOMSkip();
		void UpdateAllInputSubscriptions(bool Subscribe);
		void UpdateRespawnSubscription();
		void PlayOrDelayEOMSequence();
		void SetRoundEndInfo(bool RoundAlreadyEnded, bool LocalPlayerIsWinner, TArray<class AIGPlayerState*>* ListOfWinners);
		void OnRoundFinished_cb(TArray<class AIGPlayerState*>* WinningPlayers, bool IsWinner, bool isSpectator);
		void UpdateScreenToggleSubscription();
		void OnDebugHideHUDPressed(const struct FInputEventData& InputEventData);
		void UpdateMatchmakeAndExitSubscriptions();
		void OnGameFlowStateChanged(EGameFlowState GameFlowState);
		void SetInitialStates();
		void OnDevRespawnPressed(const struct FInputEventData& InputEventData);
		void OnGoToFrontEndCanceled(int32_t ID, const class FName& Name);
		void OnGoToFrontEndConfirmed(int32_t ID, const class FName& Name);
		void OnGoToFrontEndPressed(const struct FInputEventData& InputEventData);
		void OnMatchmakingPressed(const struct FInputEventData& InputEventData);
		void OnSpectatePressed(const struct FInputEventData& InputEventData);
		void UpdateToggleStatsPanelSubscription();
		void OnPartyMatchmakingFound(bool bIsPartyLeader);
		void OnPartyPlayerLeft(const class FString& PlayerId);
		void OnPartyMatchmakingError(const class FText& ErrorText, bool bIsPartyLeader);
		void OnHotfixingComplete(EUpdateCompletionStatus HotfixResult);
		void OnHotfixingDefer(TArray<int32_t> AvailableVersions);
		void OnJoiningMatch();
		void OnPartyMemberAttributeUpdated(const class FString& PlayerId, const struct FPlayerPartyAttributesInfo& UpdatedPlayerInfo);
		void OnNonLeaderHotfixComplete(EUpdateCompletionStatus UpdateStatus);
		void OnNonLeaderHotfixDefer(TArray<int32_t> AvailableVersions);
		void OnVersionUpdated(int32_t NewVersion);
		void OnPartyMatchmakingStopped(bool bIsPartyLeader);
		void OnHotfixSyncComplete(bool bWasSuccessful, const struct FSheikError& Error);
		void OnPartyMatchmakingStarted(const class FString& ConfigurationName, bool bIsPartyLeader);
		void OnPushToTalkReleased(const struct FInputEventData& InputEventData);
		void OnPushToTalkPressed(const struct FInputEventData& InputEventData);
		void EnablePushToTalk(bool IsEnabled);
		void OnMatchmakingComplete(bool bSuccessful, const struct FSheikError& Error);
		void OnCloutLevelSequenceComplete();
		void BeginChallengesSequence();
		void OnTagTeamSurvived(TArray<class AIGPlayerState*> WinningPlayers, bool isLocalPlayer, bool isSpectator);
		void OnChallengesSequenceComplete();
		void OnFanMailSequenceComplete();
		void OnBattlePassSequenceComplete();
		void OnMatchmakingCancelled(bool bSuccessful, const struct FSheikError& Error);
		void OnMatchmakingStarted(const class FString& MatchConfig);
		void BeginEOMSequence();
		void ConstructOnlyOnce();
		void OnProgressionStatsSequenceComplete();
		void OnLegendShown();
		void OnGainFocus(int32_t UserIndex);
		void OnLoseFocus(int32_t UserIndex);
		void EventSkipEOMSequence();
		void OnPlacementSequenceComplete(class UIGUI_WidgetBase* Source);
		void EventFinishSkipSequence();
		void OnTeammateEliminated();
		void SkipEOMAutomatically();
		void OnVoiceChatOptionsUpdated(bool bIsEnabled, bool bIsMuted, bool bIsDeafened, bool bIsPushToTalk);
		void ShowChallengesAnim_Finished();
		void PreConstruct(bool IsDesignTime);
		void ExecuteUbergraph_WBP_Sheik_ScreenEOM(int32_t EntryPoint);
		void ChallengesSequenceComplete__DelegateSignature();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
