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
	// # Enums
	// --------------------------------------------------
	/**
	 * Enum Sheik.EGameFlowState
	 */
	enum class EGameFlowState : uint8_t
	{
		EGFS_FreeRoamMode      = 0,
		EGFS_WaitingForPlayers = 1,
		EGFS_WaitingToStart    = 2,
		EGFS_MatchInProgress   = 3,
		EGFS_WaitingToEnd      = 4,
		EGFS_MAX               = 5
	};

	/**
	 * Enum Sheik.ESheikGameModeType
	 */
	enum class ESheikGameModeType : uint8_t
	{
		None           = 0,
		BattleRoyale   = 1,
		Playground     = 2,
		Deathmatch     = 3,
		SnowballFight  = 4,
		CaptureTheFlag = 5,
		MAX            = 6
	};

	/**
	 * Enum Sheik.ESheikHudRegion
	 */
	enum class ESheikHudRegion : uint8_t
	{
		ESHR_Input                    = 0,
		ESHR_Perks                    = 1,
		ESHR_EventHistory             = 2,
		ESHR_GameplayNotifications    = 3,
		ESHR_ProgressionNotifications = 4,
		ESHR_SocialNotifications      = 5,
		ESHR_MAX                      = 6
	};

	/**
	 * Enum Sheik.ESheikPinEventType
	 */
	enum class ESheikPinEventType : uint8_t
	{
		Inactive                = 0,
		Available               = 1,
		Unavailable             = 2,
		Started                 = 3,
		InputSuccess            = 4,
		Countdown               = 5,
		Countdown01             = 6,
		Countdown02             = 7,
		Kickout                 = 8,
		Interrupted             = 9,
		Aborted                 = 10,
		TeammatePinned          = 11,
		TeammateEliminated      = 12,
		TeammateKickout         = 13,
		TeammateKOInsurance     = 14,
		ResurrectionAvailable   = 15,
		ResurrectionUnavailable = 16,
		ResurrectionStarted     = 17,
		Resurrected             = 18,
		ResurrectionInterrupted = 19,
		ResurrectionAborted     = 20,
		MAX                     = 21
	};

	/**
	 * Enum Sheik.EIGPingType
	 */
	enum class EIGPingType : uint8_t
	{
		LocationPing = 0,
		MAX          = 1
	};

	/**
	 * Enum Sheik.ESheikWaypointType
	 */
	enum class ESheikWaypointType : uint8_t
	{
		None                 = 0,
		SWT_FriendlyPlayer   = 1,
		SWT_EnemyPlayer      = 2,
		SWT_Event            = 3,
		SWT_CircleRing       = 4,
		SWT_CircleTargetRing = 5,
		SWT_CircleNextRing   = 6,
		SWT_SquareRing       = 7,
		SWT_SquareTargetRing = 8,
		SWT_SquareNextRing   = 9,
		SWT_Barge            = 10,
		SWT_Ping             = 11,
		MAX                  = 12
	};

	/**
	 * Enum Sheik.EPlayingMode
	 */
	enum class EPlayingMode : uint8_t
	{
		EPM_None       = 0,
		EPM_Playing    = 1,
		EPM_Spectating = 2,
		EPM_MAX        = 3
	};

	/**
	 * Enum Sheik.EPopupPriority
	 */
	enum class EPopupPriority : uint8_t
	{
		EPP_NORMAL = 0,
		EPP_HIGH   = 1,
		EPP_URGENT = 2,
		EPP_MAX    = 3
	};

	/**
	 * Enum Sheik.EPopupType
	 */
	enum class EPopupType : uint8_t
	{
		EPT_NONE         = 0,
		EPT_GENERIC      = 1,
		EPT_ERROR        = 2,
		EPT_OPEN_FANMAIL = 3,
		EPT_CUSTOM       = 4,
		EPT_MAX          = 5
	};

	/**
	 * Enum Sheik.ESheikUserPrivilegeResult
	 */
	enum class ESheikUserPrivilegeResult : uint8_t
	{
		NoFailures               = 0,
		PrivilegeBlocked         = 1,
		AgeRestricted            = 2,
		IdentityInterfaceMissing = 3,
		MAX                      = 4
	};

	/**
	 * Enum Sheik.ESheikErrorSystem
	 */
	enum class ESheikErrorSystem : uint8_t
	{
		General      = 0,
		Login        = 1,
		PlayerData   = 2,
		Matchmaking  = 3,
		TitleStorage = 4,
		Entitlements = 5,
		Store        = 6,
		Achievements = 7,
		Accounts     = 8,
		MAX          = 9
	};

	/**
	 * Enum Sheik.ESheikErrorSource
	 */
	enum class ESheikErrorSource : uint8_t
	{
		Client      = 0,
		CozmoServer = 1,
		Platform    = 2,
		MAX         = 3
	};

	/**
	 * Enum Sheik.ESheikGameModeSlotType
	 */
	enum class ESheikGameModeSlotType : uint8_t
	{
		None   = 0,
		Small  = 1,
		Medium = 2,
		Large  = 3,
		MAX    = 4
	};

	/**
	 * Enum Sheik.ESheikBetaParticipationSegment
	 */
	enum class ESheikBetaParticipationSegment : uint8_t
	{
		ESBPS_CBTParticipant  = 0,
		ESBPS_OBTParticipant  = 1,
		ESBPS_BothParticipant = 2,
		ESBPS_BetaAgnostic    = 3,
		ESBPS_MAX             = 4
	};

	/**
	 * Enum Sheik.ESheikBattlePassSegment
	 */
	enum class ESheikBattlePassSegment : uint8_t
	{
		ESBPS_Owned    = 0,
		ESBPS_NotOwned = 1,
		ESBPS_Agnostic = 2,
		ESBPS_MAX      = 3
	};

	/**
	 * Enum Sheik.ESheikPlatformSegment
	 */
	enum class ESheikPlatformSegment : uint8_t
	{
		ESPS_Windows      = 0,
		ESPS_PlayStation4 = 1,
		ESPS_PlayStation5 = 2,
		ESPS_XboxOne      = 3,
		ESPS_XboxSeriesX  = 4,
		ESPS_AllPlatforms = 5,
		ESPS_MAX          = 6
	};

	/**
	 * Enum Sheik.ESheikNoticePriority
	 */
	enum class ESheikNoticePriority : uint8_t
	{
		ESNP_High   = 0,
		ESNP_Medium = 1,
		ESNP_Low    = 2,
		ESNP_MAX    = 3
	};

	/**
	 * Enum Sheik.ESheikLoginResultType
	 */
	enum class ESheikLoginResultType : uint8_t
	{
		LoginSuccess  = 0,
		CozmoFailure  = 1,
		AccountBanned = 2,
		MAX           = 3
	};

	/**
	 * Enum Sheik.ESheikLoginStatus
	 */
	enum class ESheikLoginStatus : uint8_t
	{
		SLS_NotLoggedIn     = 0,
		SLS_WaitingForLogin = 1,
		SLS_LoggedIn        = 2,
		SLS_MAX             = 3
	};

	/**
	 * Enum Sheik.EMatchConfigType
	 */
	enum class EMatchConfigType : uint8_t
	{
		MCT_Default    = 0,
		MCT_Onboarding = 1,
		MCT_Sympathy   = 2,
		MCT_Excluded   = 3,
		MCT_MAX        = 4
	};

	/**
	 * Enum Sheik.ESheikPresence
	 */
	enum class ESheikPresence : uint8_t
	{
		Invalid       = 0,
		LoadingScreen = 1,
		Frontend      = 2,
		Playground    = 3,
		GenericMatch  = 4,
		SolosMatch    = 5,
		DuosMatch     = 6,
		TriosMatch    = 7,
		QuadsMatch    = 8,
		MAX           = 9
	};

	/**
	 * Enum Sheik.ESheikPlatformService
	 */
	enum class ESheikPlatformService : uint8_t
	{
		EpicOnlineServices = 0,
		PlaystationNetwork = 1,
		XboxLive           = 2,
		Switch             = 3,
		Unknown            = 4,
		MAX                = 5
	};

	/**
	 * Enum Sheik.ESheikBuildConfig
	 */
	enum class ESheikBuildConfig : uint8_t
	{
		SBC_Development = 0,
		SBC_Test        = 1,
		SBC_Shipping    = 2,
		SBC_Milestone   = 3,
		SBC_MAX         = 4
	};

	/**
	 * Enum Sheik.ESheikNavAreaFlag
	 */
	enum class ESheikNavAreaFlag : uint8_t
	{
		Blueprint_Custom1 = 0,
		Blueprint_Custom2 = 1,
		Blueprint_Custom3 = 2,
		Blueprint_Custom4 = 3,
		SheikNavArea_Jump = 4,
		SheikNavArea_Fall = 5,
		MAX               = 6
	};

	/**
	 * Enum Sheik.EAccessoryType
	 */
	enum class EAccessoryType : uint8_t
	{
		EAT_None      = 0,
		EAT_BodyShape = 1,
		EAT_SkinColor = 2,
		EAT_HeadShape = 3,
		EAT_EyeColor  = 4,
		EAT_Hair      = 5,
		EAT_Accessory = 6,
		EAT_Emote     = 7,
		EAT_Outfit    = 8,
		EAT_Tattoo    = 9,
		EAT_Makeup    = 10,
		EAT_Eyebrow   = 11,
		EAT_MAX       = 12
	};

	/**
	 * Enum Sheik.ESheikPlatform
	 */
	enum class ESheikPlatform : uint8_t
	{
		Windows = 0,
		PS4     = 1,
		PS5     = 2,
		XboxOne = 3,
		XSX     = 4,
		Switch  = 5,
		Unknown = 6,
		MAX     = 7
	};

	/**
	 * Enum Sheik.EEOSLobbyStatus
	 */
	enum class EEOSLobbyStatus : uint8_t
	{
		Success = 0,
		Joining = 1,
		Failed  = 2,
		Unset   = 3,
		MAX     = 4
	};

	/**
	 * Enum Sheik.ESheikPartyJoinFailure
	 */
	enum class ESheikPartyJoinFailure : uint8_t
	{
		ESPJF_Unknown          = 0,
		ESPJF_HostDeclined     = 1,
		ESPJF_PartyFull        = 2,
		ESPJF_PartyNotFound    = 3,
		ESPJF_PartyGameSession = 4,
		ESPJF_PrivacySettings  = 5,
		ESPJF_MAX              = 6
	};

	/**
	 * Enum Sheik.ESheikVOIPPartyType
	 */
	enum class ESheikVOIPPartyType : uint8_t
	{
		ESVPT_None         = 0,
		ESVPT_PrivateParty = 1,
		ESVPT_TeamParty    = 2,
		ESVPT_All          = 3,
		ESVPT_MAX          = 4
	};

	/**
	 * Enum Sheik.EIGPingContextState
	 */
	enum class EIGPingContextState : uint8_t
	{
		InactivePingContext  = 0,
		PingContextInitiated = 1,
		PingContextMode      = 2,
		PingContextConfirm   = 3,
		MAX                  = 4
	};

	/**
	 * Enum Sheik.ESheikModValueType
	 */
	enum class ESheikModValueType : uint8_t
	{
		SheikMod_Base   = 0,
		Core            = 1,
		Arms            = 2,
		Legs            = 3,
		CombinedMaxStat = 4,
		MAX             = 5
	};

	/**
	 * Enum Sheik.ESheikFunnelLocation
	 */
	enum class ESheikFunnelLocation : uint8_t
	{
		Boot                       = 0,
		TitleStart                 = 1,
		TitleEULA                  = 2,
		TitleEULASkip              = 3,
		TitleAccountLinking        = 4,
		TitleKWSDOBEntry           = 5,
		TitleKWSDOBBack            = 6,
		TitleKWSDOBSkip            = 7,
		TitleKWSEmailEntry         = 8,
		TitleKWSEmailFailed        = 9,
		TitleKWSEmailSkip          = 10,
		TitleKWSPermissionsPending = 11,
		TitleKWSPermissionsBack    = 12,
		TitleKWSGuardianRejected   = 13,
		LoadingScreen              = 14,
		FrontendNotices            = 15,
		FrontendNoticesSkip        = 16,
		FrontendLanding            = 17,
		MAX                        = 18
	};

	/**
	 * Enum Sheik.ESheikStoreSlotType
	 */
	enum class ESheikStoreSlotType : uint8_t
	{
		None   = 0,
		Small  = 1,
		Medium = 2,
		Large  = 3,
		MAX    = 4
	};

	/**
	 * Enum Sheik.ESheikStoreItemType
	 */
	enum class ESheikStoreItemType : uint8_t
	{
		Single     = 0,
		Bundle     = 1,
		Outfit     = 2,
		Battlepass = 3,
		RMT        = 4,
		Invalid    = 5,
		MAX        = 6
	};

	/**
	 * Enum Sheik.EStoreOfferType
	 */
	enum class EStoreOfferType : uint8_t
	{
		ESOT_NONE       = 0,
		ESOT_COZMO      = 1,
		ESOT_THIRDPARTY = 2,
		ESOT_MAX        = 3
	};

	/**
	 * Enum Sheik.ESheikStoreErrorType
	 */
	enum class ESheikStoreErrorType : uint8_t
	{
		Ok              = 0,
		QueryInProgress = 1,
		QueryFailed     = 2,
		MAX             = 3
	};

	/**
	 * Enum Sheik.ESheikGenericInputPrompt
	 */
	enum class ESheikGenericInputPrompt : uint8_t
	{
		ESGIP_None                = 0,
		ESGIP_Launch              = 1,
		ESGIP_FreeFall            = 2,
		ESGIP_BreakOut            = 3,
		ESGIP_Jump                = 4,
		ESGIP_Attack              = 5,
		ESGIP_Grab                = 6,
		ESGIP_Pin                 = 7,
		ESGIP_DropItem            = 8,
		ESGIP_PickUpItem          = 9,
		ESGIP_Consume             = 10,
		ESGIP_WeaponAttack        = 11,
		ESGIP_WeaponViciousAttack = 12,
		ESGIP_ElbowDrop           = 13,
		ESGIP_LongJump            = 14,
		ESGIP_WallJump            = 15,
		ESGIP_WallDash            = 16,
		ESGIP_GetUp               = 17,
		ESGIP_SpinAttack          = 18,
		ESGIP_LowBlow             = 19,
		ESGIP_DropKick            = 20,
		ESGIP_Climb               = 21,
		ESGIP_DetachFromClimbing  = 22,
		ESGIP_Backflip            = 23,
		ESGIP_ContinueCombo       = 24,
		ESGIP_MAX                 = 25
	};

	/**
	 * Enum Sheik.ESheikMovesetPromptType
	 */
	enum class ESheikMovesetPromptType : uint8_t
	{
		ESMP_None                    = 0,
		ESMP_InitialLaunchFromCannon = 1,
		ESMP_FreeFall                = 2,
		ESMP_KnockedDown             = 3,
		ESMP_StartOfDash             = 4,
		ESMP_Dashing                 = 5,
		ESMP_Blocking                = 6,
		ESMP_Emote                   = 7,
		ESMP_MAX                     = 8
	};

	/**
	 * Enum Sheik.ESheikAnnouncementPriority
	 */
	enum class ESheikAnnouncementPriority : uint8_t
	{
		ESAP_Low           = 0,
		ESAP_Normal        = 1,
		ESAP_High          = 2,
		ESAP_ExtremelyHigh = 3,
		ESAP_MAX           = 4
	};

	/**
	 * Enum Sheik.ESheikAnnouncementType
	 */
	enum class ESheikAnnouncementType : uint8_t
	{
		ESAT_None                    = 0,
		ESAT_Generic                 = 1,
		ESAT_Perk                    = 2,
		ESAT_BalloonRun              = 3,
		ESAT_BalloonRunCountdown     = 4,
		ESAT_BalloonRunVictory       = 5,
		ESAT_BalloonRunResults       = 6,
		ESAT_GenericEvent            = 7,
		ESAT_RingOut                 = 8,
		ESAT_NextRing                = 9,
		ESAT_RingShrinking           = 10,
		ESAT_CannonLaunch            = 11,
		ESAT_RepProgress             = 12,
		ESAT_FanCloutProgression     = 13,
		ESAT_TeamCannonLaunchStarted = 14,
		ESAT_MAX                     = 15
	};

	/**
	 * Enum Sheik.ESheikCareerScreenSortCriteria
	 */
	enum class ESheikCareerScreenSortCriteria : uint8_t
	{
		ESCSSC_NewFirst     = 0,
		ESCSSC_OldFirst     = 1,
		ESCSSC_OwnedFirst   = 2,
		ESCSSC_UnownedFirst = 3,
		ESCSSC_MAX          = 4
	};

	/**
	 * Enum Sheik.ESheikCareerScreenFilterOption
	 */
	enum class ESheikCareerScreenFilterOption : uint8_t
	{
		ESCSFO_Default           = 0,
		ESCSFO_CurrSeasonAll     = 1,
		ESCSFO_CurrSeasonUnowned = 2,
		ESCSFO_CurrSeasonOwned   = 3,
		ESCSFO_PriorSeasonOwned  = 4,
		ESCSFO_Battlepass        = 5,
		ESCSFO_Leagues           = 6,
		ESCSFO_Purchase          = 7,
		ESCSFO_Challenges        = 8,
		ESCSFO_DebugOnly         = 9,
		ESCSFO_MAX               = 10
	};

	/**
	 * Enum Sheik.ESheikFilterType
	 */
	enum class ESheikFilterType : uint8_t
	{
		ESFT_None          = 0,
		ESFT_New           = 1,
		ESFT_Head          = 2,
		ESFT_Head_Subcat   = 3,
		ESFT_Hair          = 4,
		ESFT_FacialHair    = 5,
		ESFT_HeadMisc      = 6,
		ESFT_Torso         = 7,
		ESFT_Chest         = 8,
		ESFT_Elbow         = 9,
		ESFT_Hand          = 10,
		ESFT_UpperArm      = 11,
		ESFT_Forearm       = 12,
		ESFT_Abdomen       = 13,
		ESFT_UpperBodyMisc = 14,
		ESFT_LowerBody     = 15,
		ESFT_Legs          = 16,
		ESFT_Knee          = 17,
		ESFT_Feet          = 18,
		ESFT_LowerBodyMisc = 19,
		ESFT_Favorites     = 20,
		ESFT_Equipped      = 21,
		ESFT_Purchasable   = 22,
		ESFT_Affordable    = 23,
		ESFT_Unique        = 24,
		ESFT_MAX           = 25
	};

	/**
	 * Enum Sheik.ESheikSortingType
	 */
	enum class ESheikSortingType : uint8_t
	{
		ESST_Seen                      = 0,
		ESST_Newest                    = 1,
		ESST_StyleBudgetCostAscending  = 2,
		ESST_StyleBudgetCostDescending = 3,
		ESST_AlphabeticalAscending     = 4,
		ESST_AlphabeticalDescending    = 5,
		ESST_RarityAscending           = 6,
		ESST_RarityDescending          = 7,
		ESST_MAX                       = 8
	};

	/**
	 * Enum Sheik.ESheikFrontendNotificationType
	 */
	enum class ESheikFrontendNotificationType : uint8_t
	{
		PartyYouJoined      = 0,
		PartyYouLeft        = 1,
		PartyPlayerJoined   = 2,
		PartyPlayerLeft     = 3,
		PartyPlayerKicked   = 4,
		PartyInviteSent     = 5,
		PartyInviteReceived = 6,
		Unknown             = 7,
		MAX                 = 8
	};

	/**
	 * Enum Sheik.ESmokeConnectTaskState
	 */
	enum class ESmokeConnectTaskState : uint8_t
	{
		SCT_WaitingForPlayers = 0,
		SCT_TakingActions     = 1,
		SCT_Booting           = 2,
		SCT_MAX               = 3
	};

	/**
	 * Enum Sheik.ENavAreaFlag
	 */
	enum class ENavAreaFlag : uint8_t
	{
		Default = 0,
		Custom  = 1,
		MAX     = 2
	};

	/**
	 * Enum Sheik.EInvokerShape
	 */
	enum class EInvokerShape : uint8_t
	{
		Circle = 0,
		Square = 1,
		MAX    = 2
	};

	/**
	 * Enum Sheik.EBotTrappedSource
	 */
	enum class EBotTrappedSource : uint8_t
	{
		None          = 0,
		OffNavMesh    = 1,
		StuckWalking  = 2,
		StuckClimbing = 3,
		NoValidOption = 4,
		PathingFailed = 5,
		MAX           = 6
	};

	/**
	 * Enum Sheik.EBotItemCategory
	 */
	enum class EBotItemCategory : uint8_t
	{
		None     = 0,
		Crate    = 1,
		Fame     = 2,
		Health   = 3,
		Magazine = 4,
		Stamina  = 5,
		StatPod  = 6,
		Weapon   = 7,
		MAX      = 8
	};

	/**
	 * Enum Sheik.EBotAttackOption
	 */
	enum class EBotAttackOption : uint8_t
	{
		None        = 0,
		BackToss    = 1,
		BasicChop   = 2,
		ChargeChop  = 3,
		Dropkick    = 4,
		ElbowDrop   = 5,
		Grab        = 6,
		GroundPound = 7,
		HammerFist  = 8,
		IrishWhip   = 9,
		Special1    = 10,
		Special2    = 11,
		SpinKick    = 12,
		Block       = 13,
		MAX         = 14
	};

	/**
	 * Enum Sheik.ESheikUserPrivilege
	 */
	enum class ESheikUserPrivilege : uint8_t
	{
		Multiplayer    = 0,
		CrossPlay      = 1,
		Communications = 2,
		MAX            = 3
	};

	/**
	 * Enum Sheik.ECaptureState
	 */
	enum class ECaptureState : uint8_t
	{
		CS_Invalid           = 0,
		CS_LoadingUnusable   = 1,
		CS_LoadingUsable     = 2,
		CS_ReadyForMeshSet   = 3,
		CS_ReadyForPose      = 4,
		CS_ReadyForCapture   = 5,
		CS_ReadyForUICapture = 6,
		CS_Captured          = 7,
		CS_CaptureState_Max  = 8,
		CS_MAX               = 9
	};

	/**
	 * Enum Sheik.EDownedType
	 */
	enum class EDownedType : uint8_t
	{
		DT_Pinnable      = 0,
		DT_Resurrectable = 1,
		DT_KOInsurance   = 2,
		DT_MAX           = 3
	};

	/**
	 * Enum Sheik.ESheikLaunchActionType
	 */
	enum class ESheikLaunchActionType : uint8_t
	{
		BecomeLaunchMaster = 0,
		ReleaseTeammates   = 1,
		MAX                = 2
	};

	/**
	 * Enum Sheik.ESheikEdgeNavLinkGenerationType
	 */
	enum class ESheikEdgeNavLinkGenerationType : uint8_t
	{
		TYPE_Fixed             = 0,
		TYPE_LedgeDown         = 1,
		TYPE_Projectile        = 2,
		TYPE_FallingProjectile = 3,
		TYPE_Flat              = 4,
		TYPE_MAX               = 5
	};

	/**
	 * Enum Sheik.ESheikClientGeneralError
	 */
	enum class ESheikClientGeneralError : uint8_t
	{
		Unspecified      = 0,
		LoadingTimeout   = 1,
		LocalStorageFull = 2,
		UpdateRequired   = 3,
		MAX              = 4
	};

	/**
	 * Enum Sheik.ESheikFriendsSortParameters
	 */
	enum class ESheikFriendsSortParameters : uint8_t
	{
		OnlineStatus     = 0,
		NameAlphabetical = 1,
		Platform         = 2,
		MAX              = 3
	};

	/**
	 * Enum Sheik.EIGMonitorMatchEvent
	 */
	enum class EIGMonitorMatchEvent : uint8_t
	{
		MatchEvent_Debug        = 0,
		MatchEvent_LastChampion = 1,
		MatchEvent_KOLeader     = 2,
		MatchEvent_DeathEvent   = 3,
		MatchEvent_NewChampion  = 4,
		MatchEvent_MAX          = 5
	};

	/**
	 * Enum Sheik.EIGMonitorLayout
	 */
	enum class EIGMonitorLayout : uint8_t
	{
		EIGML_DisplaySingle = 0,
		EIGML_DisplayPair   = 1,
		EIGML_MAX           = 2
	};

	/**
	 * Enum Sheik.EIGMonitorState
	 */
	enum class EIGMonitorState : uint8_t
	{
		EIGMS_Inactive               = 0,
		EIGMS_LoadingMeshForCapture  = 1,
		EIGMS_LoadingRemainingAssets = 2,
		EIGMS_RequestedCapture       = 3,
		EIGMS_DisplayingCapture      = 4,
		EIGMS_DisplayingButReady     = 5,
		EIGMS_MAX                    = 6
	};

	/**
	 * Enum Sheik.ESheikMatchTimerHUDStatus
	 */
	enum class ESheikMatchTimerHUDStatus : uint8_t
	{
		NoTimer               = 0,
		RingWaiting           = 1,
		RingShrinking         = 2,
		EventCountdownToStart = 3,
		EventCountdownToEnd   = 4,
		FreeRoam              = 5,
		MAX                   = 6
	};

	/**
	 * Enum Sheik.ESheikActionBindingSlot
	 */
	enum class ESheikActionBindingSlot : uint8_t
	{
		ESABS_PrimarySlot   = 0,
		ESABS_SecondarySlot = 1,
		ESABS_MAX           = 2
	};

	/**
	 * Enum Sheik.ELiveOpsMessageComponents
	 */
	enum class ELiveOpsMessageComponents : uint8_t
	{
		MESSAGETYPE     = 0,
		MESSAGEPLATFORM = 1,
		MESSAGEKICK     = 2,
		MESSAGETIME     = 3,
		MAX             = 4
	};

	/**
	 * Enum Sheik.ELiveOpsMessagePlatform
	 */
	enum class ELiveOpsMessagePlatform : uint8_t
	{
		PC   = 0,
		PS4  = 1,
		PS5  = 2,
		XBO  = 3,
		XSX  = 4,
		NONE = 5,
		MAX  = 6
	};

	/**
	 * Enum Sheik.ELiveOpsMessageType
	 */
	enum class ELiveOpsMessageType : uint8_t
	{
		Unset        = 0,
		Login        = 1,
		Planned      = 2,
		Offline      = 3,
		Payment      = 4,
		Matchmaking  = 5,
		Party        = 6,
		Voip         = 7,
		Locker       = 8,
		FanMail      = 9,
		BattlePass   = 10,
		Shop         = 11,
		Career       = 12,
		Challenge    = 13,
		BrawllaBills = 14,
		FriendsList  = 15,
		Settings     = 16,
		EndSession   = 17,
		MAX          = 18
	};

	/**
	 * Enum Sheik.ELoadFlowState
	 */
	enum class ELoadFlowState : uint8_t
	{
		ELFS_Incomplete   = 0,
		ELFS_Initializing = 1,
		ELFS_Preloading   = 2,
		ELFS_Preloaded    = 3,
		ELFS_Hotfixing    = 4,
		ELFS_LoadCalled   = 5,
		ELFS_MAX          = 6
	};

	/**
	 * Enum Sheik.ESheikLoadingScreenLoadType
	 */
	enum class ESheikLoadingScreenLoadType : uint8_t
	{
		None            = 0,
		EntryToFrontend = 1,
		FrontendToEntry = 2,
		FrontendToMap   = 3,
		MapToMap        = 4,
		MapToFrontend   = 5,
		MAX             = 6
	};

	/**
	 * Enum Sheik.ESheikLoginCallError
	 */
	enum class ESheikLoginCallError : uint8_t
	{
		CozmoLogin            = 0,
		EOSLogin              = 1,
		Logout                = 2,
		CozmoQueryBanInfo     = 3,
		TokenRetrieval        = 4,
		EOSRemoveLocalAccount = 5,
		CozmoQueue            = 6,
		KWSQueryAgeGate       = 7,
		KWSQueryPermissions   = 8,
		KWSCreateAccount      = 9,
		KWSUpdateEmail        = 10,
		CozmoForcedLogout     = 11,
		MAX                   = 12
	};

	/**
	 * Enum Sheik.ESheikLoginCredentialType
	 */
	enum class ESheikLoginCredentialType : uint8_t
	{
		LCT_Developer      = 0,
		LCT_AuthToken      = 1,
		LCT_AccountPortal  = 2,
		LCT_PersistentAuth = 3,
		LCT_AutoLogin      = 4,
		LCT_MAX            = 5
	};

	/**
	 * Enum Sheik.ESheikEOSLoginError
	 */
	enum class ESheikEOSLoginError : uint8_t
	{
		Other                        = 0,
		InvalidUser                  = 1,
		CreateUserFailed             = 2,
		ExchangeCodeNotFound         = 3,
		PlatformTokenRetrievalFailed = 4,
		ConnectionOffline            = 5,
		MAX                          = 6
	};

	/**
	 * Enum Sheik.ESheikFinalRingBehaviors
	 */
	enum class ESheikFinalRingBehaviors : uint8_t
	{
		NONE                  = 0,
		ESFRB_NonCombatShrink = 1,
		ESFRB_PersisentShrink = 2,
		ESFRB_LinearMove      = 3,
		MAX                   = 4
	};

	/**
	 * Enum Sheik.ESheikMatchmakingCallError
	 */
	enum class ESheikMatchmakingCallError : uint8_t
	{
		StartMatchmaking  = 0,
		JoinSession       = 1,
		CancelMatchmaking = 2,
		Hotfix            = 3,
		MAX               = 4
	};

	/**
	 * Enum Sheik.ESheikOnlineAsyncTaskPriority
	 */
	enum class ESheikOnlineAsyncTaskPriority : uint8_t
	{
		SOATP_Normal = 0,
		SOATP_High   = 1,
		SOATP_MAX    = 2
	};

	/**
	 * Enum Sheik.ESheikOnlineAsyncTaskStatus
	 */
	enum class ESheikOnlineAsyncTaskStatus : uint8_t
	{
		SOATS_Start     = 0,
		SOATS_Running   = 1,
		SOATS_Failed    = 2,
		SOATS_Succeeded = 3,
		SOATS_MAX       = 4
	};

	/**
	 * Enum Sheik.ESheikOnlineAsyncTaskType
	 */
	enum class ESheikOnlineAsyncTaskType : uint8_t
	{
		SOATT_SetAttributes                = 0,
		SOATT_CreateParty                  = 1,
		SOATT_LeaveParty                   = 2,
		SOATT_FindParty                    = 3,
		SOATT_JoinParty                    = 4,
		SOATT_KickPlayer                   = 5,
		SOATT_SendPartyMessage             = 6,
		SOATT_UpdatePartySettings          = 7,
		SOATT_PromoteLeader                = 8,
		SOATT_InviteToCozmoParty           = 9,
		SOATT_InviteToPlatformParty        = 10,
		SOATT_ShowPlatformExternalInviteUI = 11,
		SOATT_StorePurchase                = 12,
		SOATT_GetCommunicationPermissions  = 13,
		SOATT_MAX                          = 14
	};

	/**
	 * Enum Sheik.ESheikPartyNotificationType
	 */
	enum class ESheikPartyNotificationType : uint8_t
	{
		SPNT_None               = 0,
		SPNT_InviteReceived     = 1,
		SPNT_PlayerJoined       = 2,
		SPNT_PlayerLeft         = 3,
		SPNT_PlayerKicked       = 4,
		SPNT_JoiningOtherPlayer = 5,
		SPNT_MAX                = 6
	};

	/**
	 * Enum Sheik.ESheikPartySearchType
	 */
	enum class ESheikPartySearchType : uint8_t
	{
		SPST_PartyId        = 0,
		SPST_LeaderPlayerId = 1,
		SPST_PartyGuid      = 2,
		SPST_FriendId       = 3,
		SPST_SessionId      = 4,
		SPST_MAX            = 5
	};

	/**
	 * Enum Sheik.ESheikSessionPrivacy
	 */
	enum class ESheikSessionPrivacy : uint8_t
	{
		ESSP_Open        = 0,
		ESSP_FriendsOnly = 1,
		ESSP_InviteOnly  = 2,
		ESSP_MAX         = 3
	};

	/**
	 * Enum Sheik.ESheikParallelTaskStatus
	 */
	enum class ESheikParallelTaskStatus : uint8_t
	{
		NotStarted = 0,
		Running    = 1,
		Failed     = 2,
		Succeeded  = 3,
		Cancelled  = 4,
		MAX        = 5
	};

	/**
	 * Enum Sheik.ESheikPendingPartyInviteStatus
	 */
	enum class ESheikPendingPartyInviteStatus : uint8_t
	{
		SPPIS_None                   = 0,
		SPPIS_HostPlatformParty      = 1,
		SPPIS_AcceptedPlatformInvite = 2,
		SPPIS_ReceivedCozmoInvite    = 3,
		SPPIS_MAX                    = 4
	};

	/**
	 * Enum Sheik.ESheikPingDirection
	 */
	enum class ESheikPingDirection : uint8_t
	{
		None       = 0,
		UpArrow    = 1,
		DownArrow  = 2,
		LeftArrow  = 3,
		RightArrow = 4,
		MAX        = 5
	};

	/**
	 * Enum Sheik.EResurrectionPerformanceState
	 */
	enum class EResurrectionPerformanceState : uint8_t
	{
		RPS_None        = 0,
		RPS_Startup     = 1,
		RPS_Countdown   = 2,
		RPS_Resurrected = 3,
		RPS_Max         = 4
	};

	/**
	 * Enum Sheik.EPinPerformanceState
	 */
	enum class EPinPerformanceState : uint8_t
	{
		PPS_None                      = 0,
		PPS_Startup                   = 1,
		PPS_AttackerPinJump           = 2,
		PPS_AttackerPinInAir          = 3,
		PPS_StartMiniGame             = 4,
		PPS_WaitingForMiniGameStartup = 5,
		PPS_CountingDown              = 6,
		PPS_CountdownComplete         = 7,
		PPS_VictimKickout             = 8,
		PPS_MAX                       = 9
	};

	/**
	 * Enum Sheik.EPinState
	 */
	enum class EPinState : uint8_t
	{
		None             = 0,
		AwaitingPin      = 1,
		PerformingPin    = 2,
		BeingResurrected = 3,
		Aborted          = 4,
		Eliminated       = 5,
		Kickout          = 6,
		Interrupt        = 7,
		Finished         = 8,
		Resurrected      = 9,
		Pinner           = 10,
		Rescuer          = 11,
		MAX              = 12
	};

	/**
	 * Enum Sheik.ESheikPinCountdownType
	 */
	enum class ESheikPinCountdownType : uint8_t
	{
		None  = 0,
		One   = 1,
		Two   = 2,
		Three = 3,
		MAX   = 4
	};

	/**
	 * Enum Sheik.ESheikAccountsError
	 */
	enum class ESheikAccountsError : uint8_t
	{
		InvalidReportData = 0,
		EOS_SendReport    = 1,
		Crossplay         = 2,
		Party             = 3,
		MAX               = 4
	};

	/**
	 * Enum Sheik.ESheikPlayerDataError
	 */
	enum class ESheikPlayerDataError : uint8_t
	{
		Download_CozmoDownloadFailed            = 0,
		Download_CozmoDownloadCompletedFailed   = 1,
		Upload_NoPlayerDataLoaded               = 2,
		Upload_PlayerDataNotInitialized         = 3,
		Upload_JsonConverterFailed              = 4,
		Download_JsonConverterFailed_RemoteData = 5,
		Download_JsonConverterFailed_RepData    = 6,
		MAX                                     = 7
	};

	/**
	 * Enum Sheik.ESheikPlayerDataCall
	 */
	enum class ESheikPlayerDataCall : uint8_t
	{
		Download = 0,
		Upload   = 1,
		MAX      = 2
	};

	/**
	 * Enum Sheik.ERedemptionCodeConsumerType
	 */
	enum class ERedemptionCodeConsumerType : uint8_t
	{
		none        = 0,
		eos         = 1,
		psn         = 2,
		xbl         = 3,
		fan_mail    = 4,
		battle_pass = 5,
		codes       = 6,
		consolation = 7,
		MAX         = 8
	};

	/**
	 * Enum Sheik.ESeasonFieldOrder
	 */
	enum class ESeasonFieldOrder : uint8_t
	{
		ESFO_Lifetime  = 0,
		ESFO_Watermark = 1,
		ESFO_Count     = 2,
		ESFO_MAX       = 3
	};

	/**
	 * Enum Sheik.EComplexStatArithmeticOperations
	 */
	enum class EComplexStatArithmeticOperations : uint8_t
	{
		None     = 0,
		Add      = 1,
		Subtract = 2,
		Multiply = 3,
		Divide   = 4,
		MAX      = 5
	};

	/**
	 * Enum Sheik.EComplexStatComparisonMethod
	 */
	enum class EComplexStatComparisonMethod : uint8_t
	{
		Arithmetic = 0,
		Min        = 1,
		Max        = 2
	};

	/**
	 * Enum Sheik.ESheikEntitlementsCallError
	 */
	enum class ESheikEntitlementsCallError : uint8_t
	{
		QueryEntitlements    = 0,
		SyncOfflinePurchases = 1,
		OfferExpired         = 2,
		WalletSystemNotReady = 3,
		MAX                  = 4
	};

	/**
	 * Enum Sheik.ESheikStoreCallError
	 */
	enum class ESheikStoreCallError : uint8_t
	{
		Purchase             = 0,
		Redeem               = 1,
		SyncOfflinePurchases = 2,
		Authentication       = 3,
		MAX                  = 4
	};

	/**
	 * Enum Sheik.ESheikTeammateHeightDirection
	 */
	enum class ESheikTeammateHeightDirection : uint8_t
	{
		None        = 0,
		SlightAbove = 1,
		Above       = 2,
		SlightBelow = 3,
		Below       = 4,
		MAX         = 5
	};

	/**
	 * Enum Sheik.ESheikTeammatePointerDirection
	 */
	enum class ESheikTeammatePointerDirection : uint8_t
	{
		Down  = 0,
		Up    = 1,
		Left  = 2,
		Right = 3,
		MAX   = 4
	};

	/**
	 * Enum Sheik.ESheikTitleStorageCallError
	 */
	enum class ESheikTitleStorageCallError : uint8_t
	{
		EnumerateFiles   = 0,
		FileRead         = 1,
		LegalDocsGet     = 2,
		LegalDocNotFound = 3,
		LegalDocAccept   = 4,
		MAX              = 5
	};

	/**
	 * Enum Sheik.EUIDataRequestType
	 */
	enum class EUIDataRequestType : uint8_t
	{
		NoticeData             = 0,
		LegalDocuments         = 1,
		GlobalNoticeControls   = 2,
		RMTEntitlementImages   = 3,
		FeatureEntitlements    = 4,
		GameModeModuleData     = 5,
		RMTCategoryDefinitions = 6,
		MAX                    = 7
	};

	/**
	 * Enum Sheik.ESheikCreditsRowType
	 */
	enum class ESheikCreditsRowType : uint8_t
	{
		ESCR_Header    = 0,
		ESCR_Subheader = 1,
		ESCR_Image     = 2,
		ESCR_Name      = 3,
		ESCR_MAX       = 4
	};

	/**
	 * Enum Sheik.ESheikPresetSlotType
	 */
	enum class ESheikPresetSlotType : uint8_t
	{
		SPST_Preset = 0,
		SPST_Outfit = 1,
		SPST_MAX    = 2
	};

	/**
	 * Enum Sheik.ESheikMoveType
	 */
	enum class ESheikMoveType : uint8_t
	{
		ESMT_None        = 0,
		ESMT_Core        = 1,
		ESMT_Arms        = 2,
		ESMT_Legs        = 3,
		ESMT_CoreAndArms = 4,
		ESMT_CoreAndLegs = 5,
		ESMT_ArmsAndLegs = 6,
		ESMT_All         = 7,
		ESMT_MAX         = 8
	};

	/**
	 * Enum Sheik.ESheikWaypointVerticalDirection
	 */
	enum class ESheikWaypointVerticalDirection : uint8_t
	{
		None     = 0,
		WVD_Up   = 1,
		WVD_Down = 2,
		MAX      = 3
	};

	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * ScriptStruct Sheik.SheikWeightRegionTypeProbability
	 * Size -> 0x0008
	 */
	struct FSheikWeightRegionTypeProbability
	{
	public:
		int32_t                                                    NumerOfTimesEnteredInLottery;                            // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ExtraWeightForBeingEquipped;                             // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Sheik.AIButtonInputEvent
	 * Size -> 0x0008
	 */
	struct FAIButtonInputEvent
	{
	public:
		EMoveTrack                                                 InputEventTrack;                                         // 0x0000(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_V15R[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      ReleaseTime;                                             // 0x0004(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Sheik.AIDirectionInputEvent
	 * Size -> 0x0010
	 */
	struct FAIDirectionInputEvent
	{
	public:
		struct FVector2D                                           LocalInputDirection;                                     // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ReleaseTime;                                             // 0x0008(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIsValid;                                                // 0x000C(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_GCH9[0x3];                                   // 0x000D(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Sheik.SheikAIProfileWeaponUseSettings
	 * Size -> 0x002C
	 */
	struct FSheikAIProfileWeaponUseSettings
	{
	public:
		float                                                      WeaponSearchChance;                                      // 0x0000(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      EnvironmentalWeaponSearchChance;                         // 0x0004(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       AllowNormalWeapons;                                      // 0x0008(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       AllowLargeWeapons;                                       // 0x0009(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       AllowWeaponPocketing;                                    // 0x000A(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_0R38[0x1];                                   // 0x000B(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      PocketBoxChance;                                         // 0x000C(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      UnpocketWeaponWhileWanderingChance;                      // 0x0010(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       UseWeaponsInCombat;                                      // 0x0014(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_35RH[0x3];                                   // 0x0015(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      UnpocketWeaponInCombatChance;                            // 0x0018(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      WeaponSearchWhileTargetOTGChance;                        // 0x001C(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      PreferViciousWeaponAttacksChance;                        // 0x0020(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      WeaponThrowChance;                                       // 0x0024(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       SeekWeaponUpgrades;                                      // 0x0028(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_0DXS[0x3];                                   // 0x0029(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Sheik.BotAttackOptions
	 * Size -> 0x0018
	 */
	struct FBotAttackOptions
	{
	public:
		int32_t                                                    DefaultDistribution;                                     // 0x0000(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    SuperstarDistribution;                                   // 0x0004(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CooldownBeforeMoveReuse;                                 // 0x0008(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_J7P8[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UIGMoveMontage*                                      Montage;                                                 // 0x0010(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Sheik.SheikAIProfileOptions
	 * Size -> 0x0130
	 */
	struct FSheikAIProfileOptions
	{
	public:
		class FName                                                ProfileName;                                             // 0x0000(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             FlirtTargetSearchRadius;                                 // 0x0008(0x000C) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ItemSearchRadius;                                        // 0x0014(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FGameplayTagContainer>                       ItemPriorities;                                          // 0x0018(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic
		float                                                      ItemSearchHorizontalCullDistance;                        // 0x0028(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       DropEquippedMagazines;                                   // 0x002C(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_7FVE[0x3];                                   // 0x002D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      MaxStatPodSlotsToUse;                                    // 0x0030(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FSheikAIProfileWeaponUseSettings                    WeaponUseSettings;                                       // 0x0034(0x002C) Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic
		float                                                      AttackMissChance;                                        // 0x0060(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      AttackMissDistanceBuffer;                                // 0x0064(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      DodgeAfterHitChance;                                     // 0x0068(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      DodgeAfterMissChance;                                    // 0x006C(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      IgnoreTeammateInCombatChance;                            // 0x0070(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      PostKillEmoteChance;                                     // 0x0074(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      WallSplatFollowupTime;                                   // 0x0078(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_M0J4[0x4];                                   // 0x007C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TMap<EBotAttackOption, struct FBotAttackOptions>           Moveset;                                                 // 0x0080(0x0050) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		TMap<EBotAttackOption, struct FBotAttackOptions>           WakeupMoveset;                                           // 0x00D0(0x0050) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		float                                                      MaxSprintDuration;                                       // 0x0120(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      SprintCooldownDuration;                                  // 0x0124(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       AllowSprintingWhileTargetStaminaBroken;                  // 0x0128(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       AllowSprintingWhileTargetStunned;                        // 0x0129(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_YB9S[0x6];                                   // 0x012A(0x0006) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Sheik.SheikBotEmoteInfo
	 * Size -> 0x0050
	 */
	struct FSheikBotEmoteInfo
	{
	public:
		unsigned char                                              Montage[0x28];                                           // 0x0000(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		struct FGameplayTagContainer                               GameplayTags;                                            // 0x0028(0x0020) BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		class FName                                                MontageName;                                             // 0x0048(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Sheik.SheikAITargetTicket
	 * Size -> 0x0014
	 */
	struct FSheikAITargetTicket
	{
	public:
		struct FGuid                                               TargetGuid;                                              // 0x0000(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    NumTargeting;                                            // 0x0010(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Sheik.SheikAITargetContainer
	 * Size -> 0x0018
	 */
	struct FSheikAITargetContainer
	{
	public:
		TArray<struct FSheikAITargetTicket>                        Targets;                                                 // 0x0000(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		int32_t                                                    MaxSimultaneousTargets;                                  // 0x0010(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FColor                                              DebugDrawColor;                                          // 0x0014(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Sheik.SheikAISpawnerSettings
	 * Size -> 0x0028
	 */
	struct FSheikAISpawnerSettings
	{
	public:
		class UIGDataTable*                                        BotOutfitTable;                                          // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UIGDataTable*                                        BotTeamOutfitTable;                                      // 0x0008(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UIGDataTable*                                        BotEmoteTable;                                           // 0x0010(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      TeamOutfitChance;                                        // 0x0018(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      OverrideNameChance;                                      // 0x001C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UIGDataTable*                                        BotTitleCardTable;                                       // 0x0020(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Sheik.SheikPayload
	 * Size -> 0x01E0
	 */
	struct FSheikPayload
	{
	public:
		TMap<class FString, class FString>                         StringArguments;                                         // 0x0000(0x0050) NativeAccessSpecifierPublic
		TMap<class FString, class FText>                           TextArguments;                                           // 0x0050(0x0050) NativeAccessSpecifierPublic
		TMap<class FString, int32_t>                               IntArguments;                                            // 0x00A0(0x0050) NativeAccessSpecifierPublic
		TMap<class FString, float>                                 FloatArguments;                                          // 0x00F0(0x0050) NativeAccessSpecifierPublic
		TMap<class FString, bool>                                  BooleanArguments;                                        // 0x0140(0x0050) NativeAccessSpecifierPublic
		unsigned char                                              Texture2DArguments[0x50];                                // 0x0190(0x0050) UNKNOWN PROPERTY: MapProperty
	};

	/**
	 * ScriptStruct Sheik.SheikAnnouncement
	 * Size -> 0x0200
	 */
	struct FSheikAnnouncement
	{
	public:
		int32_t                                                    AnnouncementId;                                          // 0x0000(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ESheikAnnouncementType                                     AnnouncementType;                                        // 0x0004(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ESheikAnnouncementPriority                                 AnnouncementPriority;                                    // 0x0005(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bStartPlayingOverCurrentAnnouncementIfHigherPriority;    // 0x0006(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ZDZ1[0x1];                                   // 0x0007(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      SpeedFactor;                                             // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bSpeedUpIfQueueIsLarge;                                  // 0x000C(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIsCountdown;                                            // 0x000D(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_BLAW[0xA];                                   // 0x000E(0x000A) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FSheikPayload                                       Payload;                                                 // 0x0018(0x01E0) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		bool                                                       bIsAnnouncementPlaying;                                  // 0x01F8(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_07T5[0x7];                                   // 0x01F9(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Sheik.SheikMusicInfo
	 * Size -> 0x0030
	 */
	struct FSheikMusicInfo
	{
	public:
		class USoundBase*                                          AudioToPlay;                                             // 0x0000(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      VolumeMultiplier;                                        // 0x0008(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      PitchMultiplier;                                         // 0x000C(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      StartTime;                                               // 0x0010(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_8HP5[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class USoundConcurrency*                                   ConcurrencySettings;                                     // 0x0018(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      FadeOutDuration;                                         // 0x0020(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      FadeOutVolume;                                           // 0x0024(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EAudioFaderCurve                                           FaderCurve;                                              // 0x0028(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_NRHX[0x7];                                   // 0x0029(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Sheik.TargetDescription
	 * Size -> 0x000C
	 */
	struct FTargetDescription
	{
	public:
		struct FIntPoint                                           Resolution;                                              // 0x0000(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       IgnoreScalability;                                       // 0x0008(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_L40A[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Sheik.SheikStatFormatOptions
	 * Size -> 0x0020
	 */
	struct FSheikStatFormatOptions
	{
	public:
		class FText                                                UnitOfMeasure;                                           // 0x0000(0x0018) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		int32_t                                                    DecimalPlaces;                                           // 0x0018(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MultiplyByScale;                                         // 0x001C(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Sheik.SheikPlayerDataStat
	 * Size -> 0x00CC (FullSize[0x00D8] - InheritedSize[0x000C])
	 */
	struct FSheikPlayerDataStat : public FIGStat
	{
	public:
		unsigned char                                              UnknownData_3WCE[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FText                                                DisplayName;                                             // 0x0010(0x0018) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		class FName                                                LifetimeStatName;                                        // 0x0028(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                WatermarkStatName;                                       // 0x0030(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                LiveSeasonLifetimeStatName;                              // 0x0038(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                LiveSeasonWatermarkStatName;                             // 0x0040(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      LifetimeValue;                                           // 0x0048(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      WatermarkValue;                                          // 0x004C(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      LiveSeasonLifetimeValue;                                 // 0x0050(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      LiveSeasonWatermarkValue;                                // 0x0054(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIsTextValue;                                            // 0x0058(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_Z4TJ[0x7];                                   // 0x0059(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FText                                                TextValue;                                               // 0x0060(0x0018) NativeAccessSpecifierPublic
		class FText                                                LifetimeTextValue;                                       // 0x0078(0x0018) BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		class FText                                                LiveSeasonLifetimeTextValue;                             // 0x0090(0x0018) BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		float                                                      CoolNumberThreshold;                                     // 0x00A8(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       MinimumIsBetter;                                         // 0x00AC(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       ShouldShowOnUI;                                          // 0x00AD(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_FHF9[0x2];                                   // 0x00AE(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    UIDisplayPriority;                                       // 0x00B0(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       ShouldAlwaysShowOnUI;                                    // 0x00B4(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_3KYE[0x3];                                   // 0x00B5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FSheikStatFormatOptions                             StatFormatOptions;                                       // 0x00B8(0x0020) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Sheik.SheikLevelModifier
	 * Size -> 0x0018
	 */
	struct FSheikLevelModifier
	{
	public:
		TArray<struct FIGModStackFloat>                            LevelModifiers;                                          // 0x0000(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		int32_t                                                    MaxLevelModIndex;                                        // 0x0010(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_JTD6[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Sheik.IGConsumableCoreBoost
	 * Size -> 0x000C
	 */
	struct FIGConsumableCoreBoost
	{
	public:
		ESheikModValueType                                         ValueType;                                               // 0x0000(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_QDL0[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      CoreValueIncrease;                                       // 0x0004(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Duration;                                                // 0x0008(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Sheik.SheikCollectibleIncrementalSpawnData
	 * Size -> 0x0020
	 */
	struct FSheikCollectibleIncrementalSpawnData
	{
	public:
		unsigned char                                              UnknownData_J99Q[0x8];                                   // 0x0000(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class USplineComponent*>                            SpawnSplines;                                            // 0x0008(0x0010) ExportObject, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_7JRH[0x8];                                   // 0x0018(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Sheik.FallHeightLootData
	 * Size -> 0x0010
	 */
	struct FFallHeightLootData
	{
	public:
		float                                                      MinHeight;                                               // 0x0000(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_VJOF[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UIGLootProfile*                                      LootProfile;                                             // 0x0008(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Sheik.SheikModeDescriptors
	 * Size -> 0x0018
	 */
	struct FSheikModeDescriptors
	{
	public:
		class FString                                              MapName;                                                 // 0x0000(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UClass*                                              GameMode;                                                // 0x0010(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Sheik.IGMaterialSwapData
	 * Size -> 0x0018
	 */
	struct FIGMaterialSwapData
	{
	public:
		int32_t                                                    index;                                                   // 0x0000(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_V552[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FIGMaterialSlot                                     MaterialSet;                                             // 0x0008(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Sheik.IGSpawnDefaultsData
	 * Size -> 0x05F0
	 */
	struct FIGSpawnDefaultsData
	{
	public:
		class FString                                              DisplayName;                                             // 0x0000(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              PlayerMeshToUse[0x28];                                   // 0x0010(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		unsigned char                                              HeadShapeMesh[0x28];                                     // 0x0038(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		EAudioSelection                                            AudioSelection;                                          // 0x0060(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_I63I[0x7];                                   // 0x0061(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UIGAccessorySetLists*                                AccessorySetList;                                        // 0x0068(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EIGBodyType                                                BodyType;                                                // 0x0070(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_SLD7[0x3];                                   // 0x0071(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                BodyShapeId;                                             // 0x0074(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                HeadShapeId;                                             // 0x007C(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_BWTS[0x4];                                   // 0x0084(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              SelectedAccessories[0x10];                               // 0x0088(0x0010) UNKNOWN PROPERTY: ArrayProperty
		unsigned char                                              DefaultUndergarments[0x10];                              // 0x0098(0x0010) UNKNOWN PROPERTY: ArrayProperty
		TArray<class FName>                                        AccessoryIds;                                            // 0x00A8(0x0010) ZeroConstructor, Transient, NativeAccessSpecifierPublic
		TArray<struct FIGMaterialSwapData>                         MaterialsToSwap;                                         // 0x00B8(0x0010) ZeroConstructor, Transient, NativeAccessSpecifierPublic
		unsigned char                                              BodyMaterial[0x28];                                      // 0x00C8(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		unsigned char                                              HeadMaterial[0x28];                                      // 0x00F0(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		bool                                                       bIsUsingLocalOnlyRandomizedLoadout;                      // 0x0118(0x0001) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_6QPO[0x3];                                   // 0x0119(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                SkinMaterialId;                                          // 0x011C(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_FZ15[0x4];                                   // 0x0124(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FIGTextureAccessorySet                              MakeupSet;                                               // 0x0128(0x00F0) Transient, NativeAccessSpecifierPublic
		struct FIGTextureAccessorySet                              TattooSet;                                               // 0x0218(0x00F0) Transient, NativeAccessSpecifierPublic
		struct FIGTextureAccessorySet                              EyeColorSet;                                             // 0x0308(0x00F0) Transient, NativeAccessSpecifierPublic
		struct FIGTextureAccessorySet                              EyebrowSet;                                              // 0x03F8(0x00F0) Transient, NativeAccessSpecifierPublic
		uint32_t                                                   SkinZonesToHideBitmask;                                  // 0x04E8(0x0004) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_VLGQ[0x4];                                   // 0x04EC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              MaterialSlotsToHide[0x50];                               // 0x04F0(0x0050) UNKNOWN PROPERTY: SetProperty
		unsigned char                                              EmoteMontages[0x10];                                     // 0x0540(0x0010) UNKNOWN PROPERTY: ArrayProperty
		TMap<EEmoteSlot, class UIGMoveMontage*>                    Emotes_PageOne;                                          // 0x0550(0x0050) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		TMap<EEmoteSlot, class UIGMoveMontage*>                    Emotes_PageTwo;                                          // 0x05A0(0x0050) Edit, BlueprintVisible, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Sheik.SheikRingState
	 * Size -> 0x0050
	 */
	struct FSheikRingState
	{
	public:
		struct FVector                                             RingCenter;                                              // 0x0000(0x000C) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      RingRadius;                                              // 0x000C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MorphTimeStamp;                                          // 0x0010(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      WaitTimeStamp;                                           // 0x0014(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      EventCountdownTimeStamp;                                 // 0x0018(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      EventStartTimeStamp;                                     // 0x001C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      EventEndTimeStamp;                                       // 0x0020(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       IsCircle;                                                // 0x0024(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       IsFinalState;                                            // 0x0025(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_XELZ[0xA];                                   // 0x0026(0x000A) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FQuat                                               RingRotation;                                            // 0x0030(0x0010) BlueprintVisible, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       WillRerollLoot;                                          // 0x0040(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_FJW8[0x3];                                   // 0x0041(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                FinalRingName;                                           // 0x0044(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_BJL5[0x4];                                   // 0x004C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Sheik.MatchStartOptions
	 * Size -> 0x0060
	 */
	struct FMatchStartOptions
	{
	public:
		float                                                      WaitingForPlayerCountdownOverride;                       // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    NumPlayerToStartBROverride;                              // 0x0004(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FSheikRingState>                             OverrideRingStateTimeline;                               // 0x0008(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		class FString                                              FinalRoundOverrideBeaconName;                            // 0x0018(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bAllowLateJoin;                                          // 0x0028(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bServerAutoShutdown;                                     // 0x0029(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EMatchTeamMode                                             TeamMode;                                                // 0x002A(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bOnlyUseDemoRings;                                       // 0x002B(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    HotfixVersion;                                           // 0x002C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                ModeName;                                                // 0x0030(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              LevelURL;                                                // 0x0038(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    WCVersionToUse;                                          // 0x0048(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                WCMapTagToUseAsOverride;                                 // 0x004C(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    NumberOfPlayerBots;                                      // 0x0054(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bBackfillWithBots;                                       // 0x0058(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIsRestrictedMatch;                                      // 0x0059(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bKeepPartyID;                                            // 0x005A(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EMatchConfigType                                           MatchConfigType;                                         // 0x005B(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_O38M[0x4];                                   // 0x005C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Sheik.SettingChangeEventData
	 * Size -> 0x0040
	 */
	struct FSettingChangeEventData
	{
	public:
		class FString                                              SettingCategory;                                         // 0x0000(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              SettingName;                                             // 0x0010(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              OldValue;                                                // 0x0020(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              NewValue;                                                // 0x0030(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Sheik.CommonSetting
	 * Size -> 0x0050
	 */
	struct FCommonSetting
	{
	public:
		TArray<float>                                              ResurrectTimes;                                          // 0x0000(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic
		class UIGMoveMontage*                                      ResurrectMontageOverride;                                // 0x0010(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UIGMoveMontage*                                      SuperStarResurrectMontageOverride;                       // 0x0018(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ResurrectFameCost;                                       // 0x0020(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bSuperStarComebackAvailable;                             // 0x0024(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_TBD3[0x3];                                   // 0x0025(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      StartingMaxHP;                                           // 0x0028(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      StartingMaxStamina;                                      // 0x002C(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      DamageMultiplier;                                        // 0x0030(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      NumStatSlots;                                            // 0x0034(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      SuperstarGainMultiplier;                                 // 0x0038(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      HealthOnReviveBase;                                      // 0x003C(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      HealthOnRevivePerCoreStat;                               // 0x0040(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_4AWW[0x4];                                   // 0x0044(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UCurveFloat*                                         TimeToVictimFameMultiplier;                              // 0x0048(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Sheik.BRSetting
	 * Size -> 0x000C
	 */
	struct FBRSetting
	{
	public:
		float                                                      FinalRingSizeMultiplier;                                 // 0x0000(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      NonFinalRingSizeMultiplier;                              // 0x0004(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      LootSpawnMultiplier;                                     // 0x0008(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Sheik.MonitorEventOptions
	 * Size -> 0x0008
	 */
	struct FMonitorEventOptions
	{
	public:
		float                                                      MinTimeDisplayed;                                        // 0x0000(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaxTimeDisplayed;                                        // 0x0004(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Sheik.MonitorEvent
	 * Size -> 0x0058
	 */
	struct FMonitorEvent
	{
	public:
		EIGMonitorMatchEvent                                       MatchEvent;                                              // 0x0000(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EIGMonitorLayout                                           MonitorLayout;                                           // 0x0001(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_JZZX[0x2];                                   // 0x0002(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TWeakObjectPtr<class APlayerState>                         FirstPlayerStateDisplayed;                               // 0x0004(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TWeakObjectPtr<class APlayerState>                         SecondPlayerStateDisplayed;                              // 0x000C(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_I1YB[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UIGMoveMontage*>                              MontagesToUse;                                           // 0x0018(0x0010) ZeroConstructor, RepSkip, NativeAccessSpecifierPublic
		TArray<float>                                              PoseTimeToUse;                                           // 0x0028(0x0010) ZeroConstructor, RepSkip, NativeAccessSpecifierPublic
		TArray<class UMaterialInterface*>                          BackgroundToUse;                                         // 0x0038(0x0010) ZeroConstructor, RepSkip, NativeAccessSpecifierPublic
		TArray<class UObject*>                                     NonPoseAssets;                                           // 0x0048(0x0010) ZeroConstructor, RepSkip, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Sheik.GameFlowData
	 * Size -> 0x0028
	 */
	struct FGameFlowData
	{
	public:
		EGameFlowState                                             State;                                                   // 0x0000(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_L49Z[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class AIGPlayerState*>                              WinningPlayers;                                          // 0x0008(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic
		int32_t                                                    TotalPlayers;                                            // 0x0018(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    TotalTeams;                                              // 0x001C(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       IsTeamMatch;                                             // 0x0020(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_R2US[0x7];                                   // 0x0021(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Sheik.SheikAIVisualizationEntry
	 * Size -> 0x0028
	 */
	struct FSheikAIVisualizationEntry
	{
	public:
		unsigned char                                              UnknownData_K2IZ[0x10];                                  // 0x0000(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AActor*                                              StartActor;                                              // 0x0010(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class AActor*                                              DestActor;                                               // 0x0018(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FColor                                              DrawColor;                                               // 0x0020(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_6MY8[0x4];                                   // 0x0024(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Sheik.SheikCTFRingState
	 * Size -> 0x0040
	 */
	struct FSheikCTFRingState
	{
	public:
		struct FVector                                             RingCenter;                                              // 0x0000(0x000C) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector2D                                           RingSideLengths;                                         // 0x000C(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_6C8G[0xC];                                   // 0x0014(0x000C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FQuat                                               RingRotation;                                            // 0x0020(0x0010) BlueprintVisible, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		class FName                                                MapLoadTag;                                              // 0x0030(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_DCYA[0x8];                                   // 0x0038(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Sheik.PingContextInfo
	 * Size -> 0x001C
	 */
	struct FPingContextInfo
	{
	public:
		int32_t                                                    PartyMemberID;                                           // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ElapsedTime;                                             // 0x0004(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             Location;                                                // 0x0008(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_34G4[0x8];                                   // 0x0014(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Sheik.SheikMovesetPromptToMontages
	 * Size -> 0x0018
	 */
	struct FSheikMovesetPromptToMontages
	{
	public:
		ESheikMovesetPromptType                                    MovesetPromptType;                                       // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_7HNP[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UIGMoveMontage*>                              Montages;                                                // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Sheik.SheikInputPromptData
	 * Size -> 0x0020
	 */
	struct FSheikInputPromptData
	{
	public:
		bool                                                       HasAnAction;                                             // 0x0000(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ESheikGenericInputPrompt                                   GenericInputPrompt;                                      // 0x0001(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_LMKZ[0x6];                                   // 0x0002(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FText                                                OverrideTextPrompt;                                      // 0x0008(0x0018) BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Sheik.SheikInputPromptContainerData
	 * Size -> 0x0080
	 */
	struct FSheikInputPromptContainerData
	{
	public:
		struct FSheikInputPromptData                               FaceButtonTopData;                                       // 0x0000(0x0020) BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		struct FSheikInputPromptData                               FaceButtonLeftData;                                      // 0x0020(0x0020) BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		struct FSheikInputPromptData                               FaceButtonRightData;                                     // 0x0040(0x0020) BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		struct FSheikInputPromptData                               FaceButtonBottomData;                                    // 0x0060(0x0020) BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Sheik.SheikAccessoryInfo
	 * Size -> 0x0598 (FullSize[0x05E0] - InheritedSize[0x0048])
	 */
	struct FSheikAccessoryInfo : public FIGAccessoryInfoBase
	{
	public:
		class FName                                                ID;                                                      // 0x0048(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FGuid                                               GroupId;                                                 // 0x0050(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FText                                                Label;                                                   // 0x0060(0x0018) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		EAccessoryType                                             AccessoryType;                                           // 0x0078(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EIGBodyType                                                BodyType;                                                // 0x0079(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       ExceedsLayerThickness;                                   // 0x007A(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_J5O1[0x1];                                   // 0x007B(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		uint32_t                                                   ExceedsLayerThicknessRegions;                            // 0x007C(0x0004) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		uint32_t                                                   OccupiesLowerLayerRegions;                               // 0x0080(0x0004) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_4RQU[0x1C];                                  // 0x0084(0x001C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTexture2D*                                          Texture;                                                 // 0x00A0(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              TextureAssetPath;                                        // 0x00A8(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class UTexture2D*>                                  BundledItemsTextures;                                    // 0x00B8(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		unsigned char                                              SkinMaterialMap[0x50];                                   // 0x00C8(0x0050) UNKNOWN PROPERTY: MapProperty
		TMap<EIGBodyType, struct FIGSkinGroup>                     BodyToSkinGroup;                                         // 0x0118(0x0050) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		struct FIGTextureAccessorySet                              MakeupSet;                                               // 0x0168(0x00F0) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FIGTextureAccessorySet                              TattooSet;                                               // 0x0258(0x00F0) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FIGTextureAccessorySet                              TextureAccessory;                                        // 0x0348(0x00F0) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		TArray<struct FIGMaterialVariation>                        MaterialSwapList;                                        // 0x0438(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		unsigned char                                              SkeletalMesh[0x28];                                      // 0x0448(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		unsigned char                                              Montage[0x28];                                           // 0x0470(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		TArray<struct FIGLoadedMesh>                               AccessoryMeshList;                                       // 0x0498(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_2FFN[0x10];                                  // 0x04A8(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    ActiveLayer;                                             // 0x04B8(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_36S4[0x4];                                   // 0x04BC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              BodyToHeadShape[0x50];                                   // 0x04C0(0x0050) UNKNOWN PROPERTY: MapProperty
		int32_t                                                    HeadType;                                                // 0x0510(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FLinearColor                                        Color;                                                   // 0x0514(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    BudgetCost;                                              // 0x0524(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       ShowCost;                                                // 0x0528(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       Locked;                                                  // 0x0529(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       New;                                                     // 0x052A(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       Equipped;                                                // 0x052B(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_PPFK[0x4];                                   // 0x052C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<EIGBodyRegion>                                      Regions;                                                 // 0x0530(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		float                                                      MaxCameraVerticalHeight;                                 // 0x0540(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MinCameraVerticalHeight;                                 // 0x0544(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MinDistanceToCharacter;                                  // 0x0548(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaxDistanceFromCharacter;                                // 0x054C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    CharacterRotationMaxSpeed;                               // 0x0550(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    ZoomSpeed;                                               // 0x0554(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       NoHair;                                                  // 0x0558(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       AltHair;                                                 // 0x0559(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       CoversMustache;                                          // 0x055A(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       CoversChin;                                              // 0x055B(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       CoversCheeks;                                            // 0x055C(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       RequiresMinimumApparel;                                  // 0x055D(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       OverlappingRegionsRequireMinimumApparel;                 // 0x055E(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       IsDefaultUndergarment;                                   // 0x055F(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    MaterialIndex;                                           // 0x0560(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		uint32_t                                                   SkinZonesToHideBitmask;                                  // 0x0564(0x0004) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              MaterialSlotsToHide[0x50];                               // 0x0568(0x0050) UNKNOWN PROPERTY: SetProperty
		struct FGameplayTagContainer                               EmoteCategoryTags;                                       // 0x05B8(0x0020) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		class FName                                                VariationGroupName;                                      // 0x05D8(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Sheik.SheikWaypointMarkerInfo
	 * Size -> 0x0090
	 */
	struct FSheikWaypointMarkerInfo
	{
	public:
		struct FVector2D                                           ImageSize;                                               // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FSlateBrush                                         WaypointTexture;                                         // 0x0008(0x0088) Edit, BlueprintVisible, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Sheik.SheikPooledWaypoint
	 * Size -> 0x0020
	 */
	struct FSheikPooledWaypoint
	{
	public:
		class USheikMinimapIcon*                                   WaypointWidget;                                          // 0x0000(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UCanvasPanelSlot*                                    CanvasSlot;                                              // 0x0008(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector2D                                           SlotPosition;                                            // 0x0010(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       WasOutOfBounds;                                          // 0x0018(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIsSquareWaypointType;                                   // 0x0019(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIsInHigherLayerCanvasPanel;                             // 0x001A(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIsWaypointInUse;                                        // 0x001B(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bPlayPingAnimation;                                      // 0x001C(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_EVR8[0x1];                                   // 0x001D(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		ESheikWaypointVerticalDirection                            HeightDirection;                                         // 0x001E(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_3KYF[0x1];                                   // 0x001F(0x0001) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Sheik.SheikMapLookupInfo
	 * Size -> 0x0028 (FullSize[0x0030] - InheritedSize[0x0008])
	 */
	struct FSheikMapLookupInfo : public FTableRowBase
	{
	public:
		struct FSoftObjectPath                                     MapLookupRowMapTexture;                                  // 0x0008(0x0018) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MapLookupRowXOffset;                                     // 0x0020(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MapLookupRowYOffset;                                     // 0x0024(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MapLookupRowOrthoWidth;                                  // 0x0028(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MapLookupRowZoom;                                        // 0x002C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Sheik.SheikMinigameInfo
	 * Size -> 0x0030
	 */
	struct FSheikMinigameInfo
	{
	public:
		float                                                      TargetPosition;                                          // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      TargetSize;                                              // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      GradientSize;                                            // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Speed;                                                   // 0x000C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      StartingPosition;                                        // 0x0010(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       BounceBackOnceEndIsHit;                                  // 0x0014(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_IS5W[0x3];                                   // 0x0015(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    NumberOfBouncesAllowed;                                  // 0x0018(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CalculatedPositionOfTargetAndGradient;                   // 0x001C(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CalculatedLeftSideGradientWidth;                         // 0x0020(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CalculatedRightSideGradientWidth;                        // 0x0024(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CalculatedTargetWidth;                                   // 0x0028(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       AllowMultipleTargetHits;                                 // 0x002C(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_QFVC[0x3];                                   // 0x002D(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Sheik.SheikFrontendNotification
	 * Size -> 0x0030
	 */
	struct FSheikFrontendNotification
	{
	public:
		int32_t                                                    ID;                                                      // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_T66L[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class FText>                                        TextParameters;                                          // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		ESheikFrontendNotificationType                             Type;                                                    // 0x0018(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bHasAction;                                              // 0x0019(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_XZSZ[0x16];                                  // 0x001A(0x0016) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Sheik.SheikPinMinigameSettings
	 * Size -> 0x0108
	 */
	struct FSheikPinMinigameSettings
	{
	public:
		bool                                                       RandomizeTargetZonePosition;                             // 0x0000(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       ResetMinigameOnTargetHit;                                // 0x0001(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_MEG5[0x2];                                   // 0x0002(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      TargetZonePosition;                                      // 0x0004(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      TimePenaltyOnMiss;                                       // 0x0008(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      PauseTimeOnTargetHit;                                    // 0x000C(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    TargetHitsForKickout;                                    // 0x0010(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    RandomPerksToReward;                                     // 0x0014(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TMap<float, float>                                         StaminaToTargetSizeMap;                                  // 0x0018(0x0050) Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic
		TMap<float, float>                                         StaminaToNeedleSpeedMap;                                 // 0x0068(0x0050) Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic
		TMap<ESheikPinCountdownType, float>                        PinCountTimes;                                           // 0x00B8(0x0050) Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Sheik.PinCommonAnimations
	 * Size -> 0x0030
	 */
	struct FPinCommonAnimations
	{
	public:
		class UIGMoveMontage*                                      LeftPinStartMontage;                                     // 0x0000(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UIGMoveMontage*                                      RightPinStartMontage;                                    // 0x0008(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UIGMoveMontage*                                      AbortPinMontage;                                         // 0x0010(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UIGMoveMontage*                                      KickOutMontage;                                          // 0x0018(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UIGMoveMontage*                                      PinLoopMontage;                                          // 0x0020(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UIGMoveMontage*                                      PinSuccessMontage;                                       // 0x0028(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Sheik.ResurrectionAnimations
	 * Size -> 0x0010
	 */
	struct FResurrectionAnimations
	{
	public:
		class UIGMoveMontage*                                      ResurrectionMontage;                                     // 0x0000(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UIGMoveMontage*                                      RescuerMontage;                                          // 0x0008(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Sheik.PinAnimationInfo
	 * Size -> 0x00C8
	 */
	struct FPinAnimationInfo
	{
	public:
		class UIGMoveMontage*                                      DownedRolloverMontage;                                   // 0x0000(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TMap<EIGDownedReactionType, class UIGMoveMontage*>         ReactTypeToRecoverMontageMap;                            // 0x0008(0x0050) Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic
		struct FPinCommonAnimations                                AttackerAnimations;                                      // 0x0058(0x0030) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FPinCommonAnimations                                VictimAnimations;                                        // 0x0088(0x0030) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FResurrectionAnimations                             ResurrectionAnimations;                                  // 0x00B8(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Sheik.PinStateInfo
	 * Size -> 0x0028
	 */
	struct FPinStateInfo
	{
	public:
		EPinState                                                  State;                                                   // 0x0000(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EPinPerformanceState                                       PinPerformanceState;                                     // 0x0001(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EResurrectionPerformanceState                              ResurrectionPerformanceState;                            // 0x0002(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_59RN[0x1];                                   // 0x0003(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      PinCountdown;                                            // 0x0004(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class ASheikCharacter*                                     Attacker;                                                // 0x0008(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class ASheikCharacter*                                     Victim;                                                  // 0x0010(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UIGMoveMontage*                                      AttackerMontage;                                         // 0x0018(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UIGMoveMontage*                                      VictimMontage;                                           // 0x0020(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Sheik.AbsolutePlacementSkillDelta
	 * Size -> 0x0010
	 */
	struct FAbsolutePlacementSkillDelta
	{
	public:
		TArray<int32_t>                                            SkillDeltaAbsolutePlacement;                             // 0x0000(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Sheik.RelativePlacementSkillDelta
	 * Size -> 0x0050
	 */
	struct FRelativePlacementSkillDelta
	{
	public:
		TMap<struct FVector2D, int32_t>                            SkillDeltaRelativePlacement;                             // 0x0000(0x0050) Edit, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Sheik.IGBotProfileDistribution
	 * Size -> 0x0050
	 */
	struct FIGBotProfileDistribution
	{
	public:
		TMap<class FString, int32_t>                               BotProfiles;                                             // 0x0000(0x0050) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Sheik.SkillBasedBotSettings
	 * Size -> 0x0060
	 */
	struct FSkillBasedBotSettings
	{
	public:
		int32_t                                                    MinSkillRating;                                          // 0x0000(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaxMatchmakingTime;                                      // 0x0004(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    MaxBotCount;                                             // 0x0008(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_JL0U[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FIGBotProfileDistribution                           ProfileDistributions;                                    // 0x0010(0x0050) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Sheik.SkillData
	 * Size -> 0x0028
	 */
	struct FSkillData
	{
	public:
		int32_t                                                    SkillDataVersion;                                        // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    OnboardingGraduation;                                    // 0x0004(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    MatchesRemainingUntilSympathy;                           // 0x0008(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    CurrentMatchCounter;                                     // 0x000C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    LifetimeSympathyMatchCounter;                            // 0x0010(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    PlayerRank;                                              // 0x0014(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<int32_t>                                            RecentSkillValues;                                       // 0x0018(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Sheik.SheikSpectatorInfo
	 * Size -> 0x00E0
	 */
	struct FSheikSpectatorInfo
	{
	public:
		float                                                      HealthPercentage;                                        // 0x0000(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      HealthMax;                                               // 0x0004(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIsDead;                                                 // 0x0008(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       IsOnConsole;                                             // 0x0009(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_TNGY[0x2];                                   // 0x000A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      ArmsValue;                                               // 0x000C(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CoreValue;                                               // 0x0010(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      LegsValue;                                               // 0x0014(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaxModValue;                                             // 0x0018(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             PawnLocation;                                            // 0x001C(0x000C) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FRotator                                            PawnRotation;                                            // 0x0028(0x000C) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_KJ12[0x4];                                   // 0x0034(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class ASheikPlayerStateCommon*                             PlayerStateOfPlayerWhoKilledMe;                          // 0x0038(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              CozmoId;                                                 // 0x0040(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ESheikPlatform                                             Platform;                                                // 0x0050(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ESheikPlatformService                                      PlatformService;                                         // 0x0051(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_JDRR[0x6];                                   // 0x0052(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              PlatformId;                                              // 0x0058(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              EOSId;                                                   // 0x0068(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              ProductId;                                               // 0x0078(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              PlatformName;                                            // 0x0088(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIsDBNO;                                                 // 0x0098(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_2YR1[0x3];                                   // 0x0099(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      DownedTimeLeft;                                          // 0x009C(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UIGMoveMontage*                                      SpecialMoveOne;                                          // 0x00A0(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EMoveTier                                                  SpecialMoveOneTier;                                      // 0x00A8(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_NLMI[0x7];                                   // 0x00A9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UIGMoveMontage*                                      SpecialMoveTwo;                                          // 0x00B0(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EMoveTier                                                  SpecialMoveTwoTier;                                      // 0x00B8(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_FVG9[0x7];                                   // 0x00B9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FIGItemDisplayInfo>                          InventoryItems;                                          // 0x00C0(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FIGPerkHUDInfo>                              Perks;                                                   // 0x00D0(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Sheik.SheikSpawnParams
	 * Size -> 0x0480
	 */
	struct FSheikSpawnParams
	{
	public:
		class FString                                              PlayerName;                                              // 0x0000(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              MeshesToMerge[0x10];                                     // 0x0010(0x0010) UNKNOWN PROPERTY: ArrayProperty
		TArray<struct FIGMaterialSwapData>                         MaterialsToSwap;                                         // 0x0020(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		struct FIGTextureAccessorySet                              MakeupSet;                                               // 0x0030(0x00F0) NativeAccessSpecifierPublic
		struct FIGTextureAccessorySet                              TattooSet;                                               // 0x0120(0x00F0) NativeAccessSpecifierPublic
		struct FIGTextureAccessorySet                              EyeColorSet;                                             // 0x0210(0x00F0) NativeAccessSpecifierPublic
		struct FIGTextureAccessorySet                              EyebrowSet;                                              // 0x0300(0x00F0) NativeAccessSpecifierPublic
		EIGBodyType                                                BodyType;                                                // 0x03F0(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EAudioSelection                                            AudioSelection;                                          // 0x03F1(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_LQR1[0x6];                                   // 0x03F2(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FSoftObjectPath                                     BodyMaterialPath;                                        // 0x03F8(0x0018) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FSoftObjectPath                                     HeadMaterialPath;                                        // 0x0410(0x0018) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              PartyId;                                                 // 0x0428(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bOnlySpectator;                                          // 0x0438(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_UNHR[0x3];                                   // 0x0439(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		uint32_t                                                   SkinZonesToHideBitmask;                                  // 0x043C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class FName>                                        MaterialSlotsToHide;                                     // 0x0440(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FSoftObjectPath>                             EmoteMontages;                                           // 0x0450(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<class UIGMoveMontage*>                              Emotes_PageOneArray;                                     // 0x0460(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<class UIGMoveMontage*>                              Emotes_PageTwoArray;                                     // 0x0470(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Sheik.TitleCardLoadoutIds
	 * Size -> 0x0048
	 */
	struct FTitleCardLoadoutIds
	{
	public:
		int32_t                                                    TitleCardLoadoutVersion;                                 // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                TitleWalletId;                                           // 0x0004(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                BackgroundWalletId;                                      // 0x000C(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                BorderWalletId;                                          // 0x0014(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                PoseWalletId;                                            // 0x001C(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_UGXP[0x4];                                   // 0x0024(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class FName>                                        MedalWalletIds;                                          // 0x0028(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<class FName>                                        StatWalletIds;                                           // 0x0038(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Sheik.ELOInfo
	 * Size -> 0x0020
	 */
	struct FELOInfo
	{
	public:
		float                                                      InitialRating;                                           // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      TransformedRating;                                       // 0x0004(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      RunningRatingChange;                                     // 0x0008(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bELOIsValid;                                             // 0x000C(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_F2C3[0x13];                                  // 0x000D(0x0013) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Sheik.LegendData
	 * Size -> 0x0030
	 */
	struct FLegendData
	{
	public:
		class FName                                                BindingName;                                             // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FText                                                Label;                                                   // 0x0008(0x0018) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		class FScriptDelegate                                      OnPopupLegendPromptPressedCallback;                      // 0x0020(0x0010) Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Sheik.PopupData
	 * Size -> 0x0060
	 */
	struct FPopupData
	{
	public:
		class FText                                                HeaderText;                                              // 0x0000(0x0018) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		class FText                                                BodyText;                                                // 0x0018(0x0018) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		class FText                                                ErrorCodeText;                                           // 0x0030(0x0018) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		TArray<struct FLegendData>                                 LegendData;                                              // 0x0048(0x0010) Edit, BlueprintVisible, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic
		bool                                                       DimBackground;                                           // 0x0058(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       InstantlyClosePopupUponAnyLegendPrompt;                  // 0x0059(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUseDefaultFormatting;                                   // 0x005A(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_W4BS[0x5];                                   // 0x005B(0x0005) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Sheik.PopupQueueData
	 * Size -> 0x0078
	 */
	struct FPopupQueueData
	{
	public:
		int32_t                                                    ID;                                                      // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       IsActive;                                                // 0x0004(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EPopupPriority                                             PopupPriority;                                           // 0x0005(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EPopupType                                                 PopupType;                                               // 0x0006(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_JY5F[0x1];                                   // 0x0007(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UIGUI_WidgetBase*                                    PopupWidget;                                             // 0x0008(0x0008) Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FDateTime                                           CreationTime;                                            // 0x0010(0x0008) Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FPopupData                                          PopupData;                                               // 0x0018(0x0060) Edit, BlueprintVisible, ContainsInstancedReference, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Sheik.SheikRedemptionCodeAsset
	 * Size -> 0x0018
	 */
	struct FSheikRedemptionCodeAsset
	{
	public:
		class FString                                              ID;                                                      // 0x0000(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Count;                                                   // 0x0010(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       Is_Consumable;                                           // 0x0014(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_GRWU[0x3];                                   // 0x0015(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Sheik.SheikRedemptionCode
	 * Size -> 0x0038
	 */
	struct FSheikRedemptionCode
	{
	public:
		class FString                                              Name;                                                    // 0x0000(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ERedemptionCodeConsumerType                                Type;                                                    // 0x0010(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_J18N[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              Code;                                                    // 0x0018(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FSheikRedemptionCodeAsset>                   Assets;                                                  // 0x0028(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Sheik.SheikRedemptionCodeList
	 * Size -> 0x0010
	 */
	struct FSheikRedemptionCodeList
	{
	public:
		TArray<struct FSheikRedemptionCode>                        Redemption_Codes;                                        // 0x0000(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Sheik.PresetPreviewData
	 * Size -> 0x0018
	 */
	struct FPresetPreviewData
	{
	public:
		class FName                                                PreviewName;                                             // 0x0000(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<unsigned char>                                      PreviewData;                                             // 0x0008(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Sheik.IGAccessorySetData
	 * Size -> 0x0010
	 */
	struct FIGAccessorySetData
	{
	public:
		unsigned char                                              AccessorySet[0x10];                                      // 0x0000(0x0010) UNKNOWN PROPERTY: ArrayProperty
	};

	/**
	 * ScriptStruct Sheik.SheikComplexStatArithmeticComparisonElement
	 * Size -> 0x000C
	 */
	struct FSheikComplexStatArithmeticComparisonElement
	{
	public:
		class FName                                                StatName;                                                // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EComplexStatArithmeticOperations                           Operation;                                               // 0x0008(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_Z8L8[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Sheik.SheikComplexPlayerDataStat
	 * Size -> 0x0068 (FullSize[0x0140] - InheritedSize[0x00D8])
	 */
	struct FSheikComplexPlayerDataStat : public FSheikPlayerDataStat
	{
	public:
		EComplexStatComparisonMethod                               ComparisonMethod;                                        // 0x00D8(0x0001) Edit, ZeroConstructor, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_BB22[0x7];                                   // 0x00D9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TMap<class FName, class FText>                             NonArithmeticComparisonMap;                              // 0x00E0(0x0050) Edit, RepSkip, NativeAccessSpecifierPublic
		TArray<struct FSheikComplexStatArithmeticComparisonElement> ArithmeticComparisonElements;                            // 0x0130(0x0010) Edit, ZeroConstructor, RepSkip, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Sheik.InProgressDeleteCache
	 * Size -> 0x0020
	 */
	struct FInProgressDeleteCache
	{
	public:
		unsigned char                                              UnknownData_33T2[0x20];                                  // 0x0000(0x0020) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Sheik.SheikStoreItemEntry
	 * Size -> 0x0100
	 */
	struct FSheikStoreItemEntry
	{
	public:
		struct FIGWalletAssetInfo                                  WalletAsset;                                             // 0x0000(0x00F0) Edit, BlueprintVisible, BlueprintReadOnly, EditConst, NativeAccessSpecifierPublic
		int32_t                                                    RegularPrice;                                            // 0x00F0(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    DiscountedPrice;                                         // 0x00F4(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIsConsumable;                                           // 0x00F8(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_GVI4[0x7];                                   // 0x00F9(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Sheik.SheikStoreItemSet
	 * Size -> 0x00B0 (FullSize[0x00B8] - InheritedSize[0x0008])
	 */
	struct FSheikStoreItemSet : public FTableRowBase
	{
	public:
		class FString                                              OfferId;                                                 // 0x0008(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ESheikStoreItemType                                        Type;                                                    // 0x0018(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_SSNE[0x7];                                   // 0x0019(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FText                                                Description;                                             // 0x0020(0x0018) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		class FText                                                LongDescription;                                         // 0x0038(0x0018) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		unsigned char                                              SlotTextures[0x10];                                      // 0x0050(0x0010) UNKNOWN PROPERTY: ArrayProperty
		unsigned char                                              OutfitTexture[0x28];                                     // 0x0060(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		unsigned char                                              SummaryViewTexture[0x28];                                // 0x0088(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		ESheikStoreSlotType                                        SlotType;                                                // 0x00B0(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_3R01[0x7];                                   // 0x00B1(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Sheik.SheikStoreItem
	 * Size -> 0x0320
	 */
	struct FSheikStoreItem
	{
	public:
		ESheikStoreItemType                                        Type;                                                    // 0x0000(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_WFVV[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FSheikStoreItemEntry>                        Items;                                                   // 0x0008(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, NativeAccessSpecifierPublic
		struct FIGWalletAssetInfo                                  WalletAsset;                                             // 0x0018(0x00F0) Edit, BlueprintVisible, BlueprintReadOnly, EditConst, NativeAccessSpecifierPublic
		TArray<struct FIGWalletAssetInfo>                          WalletAssets;                                            // 0x0108(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, NativeAccessSpecifierPublic
		class FName                                                OfferId;                                                 // 0x0118(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EStoreOfferType                                            StoreOfferType;                                          // 0x0120(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_EB17[0x7];                                   // 0x0121(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FSheikStoreItemSet                                  ItemSetData;                                             // 0x0128(0x00B8) Edit, BlueprintVisible, BlueprintReadOnly, EditConst, NativeAccessSpecifierPublic
		class FText                                                Title;                                                   // 0x01E0(0x0018) Edit, BlueprintVisible, BlueprintReadOnly, EditConst, NativeAccessSpecifierPublic
		class FText                                                Description;                                             // 0x01F8(0x0018) Edit, BlueprintVisible, BlueprintReadOnly, EditConst, NativeAccessSpecifierPublic
		class FText                                                LongDescription;                                         // 0x0210(0x0018) Edit, BlueprintVisible, BlueprintReadOnly, EditConst, NativeAccessSpecifierPublic
		class FText                                                RegularPriceText;                                        // 0x0228(0x0018) Edit, BlueprintVisible, BlueprintReadOnly, EditConst, NativeAccessSpecifierPublic
		int32_t                                                    RegularPrice;                                            // 0x0240(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_3ML8[0x4];                                   // 0x0244(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FText                                                PriceText;                                               // 0x0248(0x0018) Edit, BlueprintVisible, BlueprintReadOnly, EditConst, NativeAccessSpecifierPublic
		int32_t                                                    NumericPrice;                                            // 0x0260(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      NumericPriceAsFloat;                                     // 0x0264(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FText                                                UpsellPriceText;                                         // 0x0268(0x0018) Edit, BlueprintVisible, BlueprintReadOnly, EditConst, NativeAccessSpecifierPublic
		int32_t                                                    UpsellPrice;                                             // 0x0280(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_K6LK[0x4];                                   // 0x0284(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              CurrencyCode;                                            // 0x0288(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FDateTime                                           ReleaseDate;                                             // 0x0298(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FDateTime                                           ExpirationDate;                                          // 0x02A0(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              DiscountType;                                            // 0x02A8(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_DVLY[0x57];                                  // 0x02A9(0x0057) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		EAccessoryItemRarity                                       Rarity;                                                  // 0x0300(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ESheikStoreSlotType                                        SlotType;                                                // 0x0301(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_QZMS[0x6];                                   // 0x0302(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              NotificationId;                                          // 0x0308(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIsOwnedPlatformStoreOffer;                              // 0x0318(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bDisplayOriginalPriceStrikethru;                         // 0x0319(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bPsPlusDiscount;                                         // 0x031A(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bPsPlusUpsell;                                           // 0x031B(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_7A8S[0x4];                                   // 0x031C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Sheik.CozmoOnlineStoreCategory
	 * Size -> 0x0098
	 */
	struct FCozmoOnlineStoreCategory
	{
	public:
		int32_t                                                    Num_Slots;                                               // 0x0000(0x0004) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_KX51[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              Type;                                                    // 0x0008(0x0010) Edit, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FDateTime                                           Expiration_Date;                                         // 0x0018(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Ui_Treatment;                                            // 0x0020(0x0010) Edit, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FDateTime                                           Release_Date;                                            // 0x0030(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Name;                                                    // 0x0038(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Notification_Id;                                         // 0x0048(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Ui_Order;                                                // 0x0058(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_92RD[0x3C];                                  // 0x005C(0x003C) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Sheik.SheikStoreCategory
	 * Size -> 0x00B8
	 */
	struct FSheikStoreCategory
	{
	public:
		class FString                                              ID;                                                      // 0x0000(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FSheikStoreItem>                             Items;                                                   // 0x0010(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, NativeAccessSpecifierPublic
		struct FCozmoOnlineStoreCategory                           CozmoCategory;                                           // 0x0020(0x0098) Edit, BlueprintVisible, BlueprintReadOnly, EditConst, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Sheik.NoticesUIData
	 * Size -> 0x0310 (FullSize[0x0318] - InheritedSize[0x0008])
	 */
	struct FNoticesUIData : public FTableRowBase
	{
	public:
		bool                                                       bMenuItemLinkTypeIsDefined;                              // 0x0008(0x0001) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ZM92[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FText                                                NoticeTitle;                                             // 0x0010(0x0018) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		struct FLinearColor                                        TitleTextColor;                                          // 0x0028(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FText                                                DisplayMessage;                                          // 0x0038(0x0018) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		struct FLinearColor                                        MessageTextColor;                                        // 0x0050(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FText                                                LinkButtonText;                                          // 0x0060(0x0018) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		struct FLinearColor                                        LinkButtonTextColor;                                     // 0x0078(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FLinearColor                                        LinkButtonColor;                                         // 0x0088(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FText                                                CloseButtonText;                                         // 0x0098(0x0018) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		struct FLinearColor                                        CloseButtonTextColor;                                    // 0x00B0(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FLinearColor                                        CloseButtonColor;                                        // 0x00C0(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              DeepLinkScreen[0x28];                                    // 0x00D0(0x0028) UNKNOWN PROPERTY: SoftClassProperty
		class FString                                              LinkingNotDefinedError;                                  // 0x00F8(0x0010) Edit, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TMap<class FName, class FString>                           MenuItemLink;                                            // 0x0108(0x0050) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		unsigned char                                              BackgroundImage[0x28];                                   // 0x0158(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		unsigned char                                              CarouselImage[0x28];                                     // 0x0180(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		ESheikNoticePriority                                       NoticePriority;                                          // 0x01A8(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_VHZP[0x3];                                   // 0x01A9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FIGDateRange                                        NoticeDateRange;                                         // 0x01AC(0x0028) Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ZOT5[0x4];                                   // 0x01D4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TMap<ESheikPlatformSegment, bool>                          PlatformSegments;                                        // 0x01D8(0x0050) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		TMap<class FName, bool>                                    RegionSegments;                                          // 0x0228(0x0050) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		TMap<ESheikBattlePassSegment, bool>                        BattlePassSegments;                                      // 0x0278(0x0050) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		TMap<ESheikBetaParticipationSegment, bool>                 BetaSegments;                                            // 0x02C8(0x0050) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Sheik.GlobalNoticeControl
	 * Size -> 0x0018 (FullSize[0x0020] - InheritedSize[0x0008])
	 */
	struct FGlobalNoticeControl : public FTableRowBase
	{
	public:
		float                                                      NoticesCarouselRotationInterval;                         // 0x0008(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    NoticesPopupInterval;                                    // 0x000C(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FIGTimeOfDay                                        ResetTime;                                               // 0x0010(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bCanShowPopupNotices;                                    // 0x0018(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_CWA5[0x7];                                   // 0x0019(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Sheik.SheikRMTEntitlementImageRow
	 * Size -> 0x0070 (FullSize[0x0078] - InheritedSize[0x0008])
	 */
	struct FSheikRMTEntitlementImageRow : public FTableRowBase
	{
	public:
		class FString                                              OfferId;                                                 // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              EntitlementImage[0x28];                                  // 0x0018(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		bool                                                       bIsVC;                                                   // 0x0040(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_EMGW[0x7];                                   // 0x0041(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FText                                                PromoText;                                               // 0x0048(0x0018) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		class FText                                                DisplayTitle;                                            // 0x0060(0x0018) Edit, BlueprintVisible, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Sheik.SheikFeatureEntitlementRow
	 * Size -> 0x0018 (FullSize[0x0020] - InheritedSize[0x0008])
	 */
	struct FSheikFeatureEntitlementRow : public FTableRowBase
	{
	public:
		class FString                                              FeatureName;                                             // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIsEnabled;                                              // 0x0018(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_UV3Z[0x7];                                   // 0x0019(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Sheik.SheikGameModeModuleData
	 * Size -> 0x00A0 (FullSize[0x00A8] - InheritedSize[0x0008])
	 */
	struct FSheikGameModeModuleData : public FTableRowBase
	{
	public:
		class FText                                                GameModeName;                                            // 0x0008(0x0018) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		class FText                                                GameModeSubText;                                         // 0x0020(0x0018) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		unsigned char                                              GameModeIcons[0x10];                                     // 0x0038(0x0010) UNKNOWN PROPERTY: ArrayProperty
		ESheikGameModeSlotType                                     SlotType;                                                // 0x0048(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIsFillTeammatesAvailable;                               // 0x0049(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIsSpecialEvent;                                         // 0x004A(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_FBRH[0x5];                                   // 0x004B(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FText                                                SpecialEventText;                                        // 0x0050(0x0018) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		struct FIGDateRange                                        SpecialEventDateRange;                                   // 0x0068(0x0028) Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bIsDevModeOnly;                                          // 0x0090(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bAllowProgression;                                       // 0x0091(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ESheikGameModeType                                         GameModeType;                                            // 0x0092(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_RLGA[0x1];                                   // 0x0093(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    TeamSize;                                                // 0x0094(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              MatchConfigKey;                                          // 0x0098(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Sheik.SheikRMTCategoryOfferInfo
	 * Size -> 0x0034
	 */
	struct FSheikRMTCategoryOfferInfo
	{
	public:
		class FName                                                EntitlementId;                                           // 0x0000(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIsLimitedTimeOffer;                                     // 0x0008(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_Y2TR[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FIGDateRange                                        ExpirationDate;                                          // 0x000C(0x0028) Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Sheik.SheikRMTCategoryDefinition
	 * Size -> 0x0060 (FullSize[0x0068] - InheritedSize[0x0008])
	 */
	struct FSheikRMTCategoryDefinition : public FTableRowBase
	{
	public:
		class FName                                                CategoryName;                                            // 0x0008(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FText                                                CategoryTitle;                                           // 0x0010(0x0018) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		int32_t                                                    Order;                                                   // 0x0028(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bEnabled;                                                // 0x002C(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bLimitedTime;                                            // 0x002D(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_EN9P[0x2];                                   // 0x002E(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FIGDateRange                                        DateRange;                                               // 0x0030(0x0028) Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic
		TArray<struct FSheikRMTCategoryOfferInfo>                  Offers;                                                  // 0x0058(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Sheik.SheikMinigameResults
	 * Size -> 0x0020
	 */
	struct FSheikMinigameResults
	{
	public:
		float                                                      CursorPosition;                                          // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       IsCursorInTarget;                                        // 0x0004(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       IsCursorWithinGradientBounds;                            // 0x0005(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_8MYI[0x2];                                   // 0x0006(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      PercentageCursorIsWithinGradient;                        // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector2D                                           TargetRange;                                             // 0x000C(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector2D                                           GradientRange;                                           // 0x0014(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       AllowingTargetHits;                                      // 0x001C(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       ActivatedFameAutoWin;                                    // 0x001D(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_XJS3[0x2];                                   // 0x001E(0x0002) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Sheik.SheikDirectLineCalculatedData
	 * Size -> 0x0010
	 */
	struct FSheikDirectLineCalculatedData
	{
	public:
		struct FVector2D                                           CenterPositionInCanvasPanel;                             // 0x0000(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      LengthOfLine;                                            // 0x0008(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      RotationOfLine;                                          // 0x000C(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Sheik.CurrentNetSimulationSettings
	 * Size -> 0x0014
	 */
	struct FCurrentNetSimulationSettings
	{
	public:
		int32_t                                                    NetLatency;                                              // 0x0000(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    LagVariance;                                             // 0x0004(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    PktLoss;                                                 // 0x0008(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    DuplicatePackets;                                        // 0x000C(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bPacketOrder;                                            // 0x0010(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bVisualizeMovement;                                      // 0x0011(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bShowCorrections;                                        // 0x0012(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bLogExecuteMove;                                         // 0x0013(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Sheik.SheikMinimapSquareMaskInfo
	 * Size -> 0x0020
	 */
	struct FSheikMinimapSquareMaskInfo
	{
	public:
		struct FVector2D                                           CenterOfSquare;                                          // 0x0000(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector2D                                           TopLeftCornerOfSquareUnrotated;                          // 0x0008(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector2D                                           BottomRightCornerOfSquareUnrotated;                      // 0x0010(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CosineOfNegativeRotation;                                // 0x0018(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      SineOfNegativeRotation;                                  // 0x001C(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Sheik.SheikMinimapOverlapInfo
	 * Size -> 0x0050
	 */
	struct FSheikMinimapOverlapInfo
	{
	public:
		struct FVector4                                            PartOfMinimapThatIsOverlapped;                           // 0x0000(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector4                                            MaskDimensionsOfIcon;                                    // 0x0010(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       IsOverlappingMinimap;                                    // 0x0020(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_0NMI[0x3];                                   // 0x0021(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FSheikMinimapSquareMaskInfo                         SquareMaskInfo;                                          // 0x0024(0x0020) BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_AL4Z[0xC];                                   // 0x0044(0x000C) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Sheik.SheikDirectLineToPlayZoneData
	 * Size -> 0x0028
	 */
	struct FSheikDirectLineToPlayZoneData
	{
	public:
		struct FVector                                             StartPosition;                                           // 0x0000(0x000C) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             EndPosition;                                             // 0x000C(0x000C) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector2D                                           MapStartPosition;                                        // 0x0018(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector2D                                           MapEndPosition;                                          // 0x0020(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Sheik.SheikCannonConeData
	 * Size -> 0x001C
	 */
	struct FSheikCannonConeData
	{
	public:
		struct FVector                                             CannonPosition;                                          // 0x0000(0x000C) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FRotator                                            CannonRotation;                                          // 0x000C(0x000C) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		float                                                      CannonMapYaw;                                            // 0x0018(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Sheik.SheikOwningPlayerInfo
	 * Size -> 0x0018
	 */
	struct FSheikOwningPlayerInfo
	{
	public:
		float                                                      PlayerIconRenderAngleWorld;                              // 0x0000(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      PlayerFrustumRenderAngleWorld;                           // 0x0004(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             PlayerWorldPosition;                                     // 0x0008(0x000C) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bPlayerIsAimingCannon;                                   // 0x0014(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_PQRJ[0x3];                                   // 0x0015(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Sheik.SheikWaypointInfo
	 * Size -> 0x0028
	 */
	struct FSheikWaypointInfo
	{
	public:
		ESheikWaypointType                                         WaypointType;                                            // 0x0000(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_65RX[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             FixedWaypointWorldLocation;                              // 0x0004(0x000C) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      FixedWaypointRotation;                                   // 0x0010(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      AngleFromPlayer;                                         // 0x0014(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      RingSize;                                                // 0x0018(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_FISM[0x4];                                   // 0x001C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class ASheikPlayerStateCommon*                             PlayerState;                                             // 0x0020(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Sheik.SheikError
	 * Size -> 0x000C
	 */
	struct FSheikError
	{
	public:
		bool                                                       bValid;                                                  // 0x0000(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ESheikErrorSource                                          Source;                                                  // 0x0001(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ESheikErrorSystem                                          System;                                                  // 0x0002(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_7XGA[0x1];                                   // 0x0003(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    CallCode;                                                // 0x0004(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    ErrorCode;                                               // 0x0008(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Sheik.SheikCozmoAccount
	 * Size -> 0x0050
	 */
	struct FSheikCozmoAccount
	{
	public:
		class FString                                              CozmoId;                                                 // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              EOSId;                                                   // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              EOSProductId;                                            // 0x0020(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              DevId;                                                   // 0x0030(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              DevName;                                                 // 0x0040(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Sheik.SheikExternalAccount
	 * Size -> 0x0040
	 */
	struct FSheikExternalAccount
	{
	public:
		ESheikPlatformService                                      Service;                                                 // 0x0000(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_D7IZ[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              AccountId;                                               // 0x0008(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              DisplayName;                                             // 0x0018(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int64_t                                                    LoginTimeStamp;                                          // 0x0028(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FDateTime                                           LoginDate;                                               // 0x0030(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bValid;                                                  // 0x0038(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_R4LF[0x7];                                   // 0x0039(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Sheik.SheikPlayerAccountPresence
	 * Size -> 0x0168
	 */
	struct FSheikPlayerAccountPresence
	{
	public:
		class FString                                              CurrentPlatform;                                         // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIsOnline;                                               // 0x0010(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIsPlayingBeef;                                          // 0x0011(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ESheikPresence                                             Location;                                                // 0x0012(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bValid;                                                  // 0x0013(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_CLZK[0x154];                                 // 0x0014(0x0154) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Sheik.SheikPlayerAccount
	 * Size -> 0x02F0
	 */
	struct FSheikPlayerAccount
	{
	public:
		unsigned char                                              UnknownData_DJ9H[0x10];                                  // 0x0000(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              CozmoId;                                                 // 0x0010(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_YDWJ[0x10];                                  // 0x0020(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FSheikCozmoAccount                                  Cozmo;                                                   // 0x0030(0x0050) Edit, BlueprintVisible, BlueprintReadOnly, EditConst, NativeAccessSpecifierPublic
		struct FSheikExternalAccount                               EAS;                                                     // 0x0080(0x0040) Edit, BlueprintVisible, BlueprintReadOnly, EditConst, NativeAccessSpecifierPublic
		struct FSheikExternalAccount                               PSN;                                                     // 0x00C0(0x0040) Edit, BlueprintVisible, BlueprintReadOnly, EditConst, NativeAccessSpecifierPublic
		struct FSheikExternalAccount                               XBL;                                                     // 0x0100(0x0040) Edit, BlueprintVisible, BlueprintReadOnly, EditConst, NativeAccessSpecifierPublic
		struct FSheikExternalAccount                               SWT;                                                     // 0x0140(0x0040) Edit, BlueprintVisible, BlueprintReadOnly, EditConst, NativeAccessSpecifierPublic
		struct FSheikPlayerAccountPresence                         Presence;                                                // 0x0180(0x0168) Edit, BlueprintVisible, BlueprintReadOnly, EditConst, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_SK3A[0x8];                                   // 0x02E8(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Sheik.SheikBodyRegionInfo
	 * Size -> 0x0018 (FullSize[0x0020] - InheritedSize[0x0008])
	 */
	struct FSheikBodyRegionInfo : public FTableRowBase
	{
	public:
		EIGBodyRegion                                              Region;                                                  // 0x0008(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_X6CU[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      ZoomDistance;                                            // 0x000C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CharacterRotation;                                       // 0x0010(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CameraHeight;                                            // 0x0014(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CameraPan;                                               // 0x0018(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_RT22[0x4];                                   // 0x001C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Sheik.AccessoryLayerPair
	 * Size -> 0x000C
	 */
	struct FAccessoryLayerPair
	{
	public:
		class FName                                                AccId;                                                   // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Layer;                                                   // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Sheik.CharacterLoadout
	 * Size -> 0x0070
	 */
	struct FCharacterLoadout
	{
	public:
		int32_t                                                    CharacterLoadoutVersion;                                 // 0x0000(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_8SO3[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              PlayerName;                                              // 0x0008(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EIGBodyType                                                BodyType;                                                // 0x0018(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_KPN7[0x3];                                   // 0x0019(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                BodyShapeId;                                             // 0x001C(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                HeadShapeId;                                             // 0x0024(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                SkinColorId;                                             // 0x002C(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                MakeupId;                                                // 0x0034(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                TattooId;                                                // 0x003C(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                EyeColorId;                                              // 0x0044(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                EyebrowId;                                               // 0x004C(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_46FN[0x4];                                   // 0x0054(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FAccessoryLayerPair>                         Accessories;                                             // 0x0058(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic
		int32_t                                                    PresetSlotIndex;                                         // 0x0068(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_Q80R[0x4];                                   // 0x006C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Sheik.EOSVoiceChatDeviceInfo
	 * Size -> 0x0020
	 */
	struct FEOSVoiceChatDeviceInfo
	{
	public:
		class FString                                              DisplayName;                                             // 0x0000(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              ID;                                                      // 0x0010(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Sheik.PlayerPartyAttributesInfo
	 * Size -> 0x00E0
	 */
	struct FPlayerPartyAttributesInfo
	{
	public:
		class FString                                              PlayerName;                                              // 0x0000(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ESheikPlatformService                                      PlatformService;                                         // 0x0010(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_E59W[0x3];                                   // 0x0011(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    CloutLevel;                                              // 0x0014(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    HotfixVersion;                                           // 0x0018(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_UDKM[0x4];                                   // 0x001C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FCharacterLoadout                                   Loadout;                                                 // 0x0020(0x0070) BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		int32_t                                                    PlayerSkill;                                             // 0x0090(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    CrossPlaySettingEnabled;                                 // 0x0094(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EMatchConfigType                                           MatchConfigType;                                         // 0x0098(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_KWZ1[0x7];                                   // 0x0099(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              UserProductId;                                           // 0x00A0(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              EOSId;                                                   // 0x00B0(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              PsnSessionId;                                            // 0x00C0(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              XblSessionId;                                            // 0x00D0(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Sheik.ServerStateInfo
	 * Size -> 0x0040
	 */
	struct FServerStateInfo
	{
	public:
		class FString                                              GameSessionId;                                           // 0x0000(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              AutoBackfillTicketId;                                    // 0x0010(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              MatchID;                                                 // 0x0020(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    NumPlayers;                                              // 0x0030(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    NumAutoStartPlayers;                                     // 0x0034(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    GameFlowState;                                           // 0x0038(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bAllowNewPlayers;                                        // 0x003C(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bHasStoppedBackfill;                                     // 0x003D(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_LU3I[0x2];                                   // 0x003E(0x0002) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Sheik.SheikPlayerSocialEntry
	 * Size -> 0x03C8
	 */
	struct FSheikPlayerSocialEntry
	{
	public:
		class FString                                              CozmoId;                                                 // 0x0000(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FSheikPlayerAccount                                 Account;                                                 // 0x0010(0x02F0) Edit, BlueprintVisible, EditConst, NativeAccessSpecifierPublic
		struct FPartyMemberInfo                                    PartyMember;                                             // 0x0300(0x0090) Edit, BlueprintVisible, BlueprintReadOnly, EditConst, NativeAccessSpecifierPublic
		struct FPartyInvitation                                    PartyInvitation;                                         // 0x0390(0x0030) Edit, BlueprintVisible, BlueprintReadOnly, EditConst, NativeAccessSpecifierPublic
		bool                                                       bIsFriend;                                               // 0x03C0(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIsBlocked;                                              // 0x03C1(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_M7BY[0x6];                                   // 0x03C2(0x0006) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Sheik.SheikPlayerStat
	 * Size -> 0x0048
	 */
	struct FSheikPlayerStat
	{
	public:
		class FText                                                StatName;                                                // 0x0000(0x0018) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		float                                                      StatValue;                                               // 0x0018(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_OZAA[0x4];                                   // 0x001C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FText                                                TextStatValue;                                           // 0x0020(0x0018) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		bool                                                       bIsTextValue;                                            // 0x0038(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       IsPersonalBest;                                          // 0x0039(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       IsCoolNumber;                                            // 0x003A(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_EY4X[0x1];                                   // 0x003B(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      DistanceFromCoolNumberThreshold;                         // 0x003C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_0K4F[0x8];                                   // 0x0040(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Sheik.SheikPlayerStateStatInfo
	 * Size -> 0x0020
	 */
	struct FSheikPlayerStateStatInfo
	{
	public:
		class ASheikPlayerStateCommon*                             SheikPlayerState;                                        // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bWasSuccessfulInGettingStats;                            // 0x0008(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_NHG3[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FSheikPlayerStat>                            StatsToShow;                                             // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Sheik.SheikOutfitInfo
	 * Size -> 0x00A8 (FullSize[0x00B0] - InheritedSize[0x0008])
	 */
	struct FSheikOutfitInfo : public FTableRowBase
	{
	public:
		class FName                                                ID;                                                      // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FText                                                Description;                                             // 0x0010(0x0018) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		class FText                                                LongDescription;                                         // 0x0028(0x0018) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		int32_t                                                    CountThresholdForLockerRoomDisplay;                      // 0x0040(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_NNEG[0x4];                                   // 0x0044(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UIGWalletAsset*>                              ComponentWalletAssets;                                   // 0x0048(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic
		unsigned char                                              Icon[0x28];                                              // 0x0058(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		unsigned char                                              SmallIcon[0x28];                                         // 0x0080(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		bool                                                       Locked;                                                  // 0x00A8(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bReadyForGame;                                           // 0x00A9(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_A7J7[0x6];                                   // 0x00AA(0x0006) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Sheik.BattlePassTierOffer
	 * Size -> 0x0328
	 */
	struct FBattlePassTierOffer
	{
	public:
		struct FSheikStoreItem                                     StoreOffer;                                              // 0x0000(0x0320) NativeAccessSpecifierPublic
		int32_t                                                    TierQuantity;                                            // 0x0320(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_2IRO[0x4];                                   // 0x0324(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Sheik.CharacterSkinZonePair
	 * Size -> 0x000C
	 */
	struct FCharacterSkinZonePair
	{
	public:
		class FName                                                SkinZoneName;                                            // 0x0000(0x0008) Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EIGSkinZones                                               SkinZone;                                                // 0x0008(0x0001) ELEMENT_SIZE_MISMATCH Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_BOKW[0x3];                                   // 0x0009(0x0003) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	};

	/**
	 * ScriptStruct Sheik.DataMinimalJson
	 * Size -> 0x0018
	 */
	struct FDataMinimalJson
	{
	public:
		unsigned char                                              UnknownData_O2D3[0x8];                                   // 0x0000(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              Data;                                                    // 0x0008(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Sheik.SkelMeshMergeSectionMapping_BP
	 * Size -> 0x0010
	 */
	struct FSkelMeshMergeSectionMapping_BP
	{
	public:
		TArray<int32_t>                                            SectionIDs;                                              // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Sheik.SkelMeshMergeUVTransform
	 * Size -> 0x0010
	 */
	struct FSkelMeshMergeUVTransform
	{
	public:
		TArray<struct FTransform>                                  UVTransforms;                                            // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Sheik.SkelMeshMergeUVTransformMapping
	 * Size -> 0x0010
	 */
	struct FSkelMeshMergeUVTransformMapping
	{
	public:
		TArray<struct FSkelMeshMergeUVTransform>                   UVTransformsPerMesh;                                     // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Sheik.SkeletalMeshMergeParams
	 * Size -> 0x0040
	 */
	struct FSkeletalMeshMergeParams
	{
	public:
		TArray<struct FSkelMeshMergeSectionMapping_BP>             MeshSectionMappings;                                     // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FSkelMeshMergeUVTransformMapping>            UVTransformsPerMesh;                                     // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<class USkeletalMesh*>                               MeshesToMerge;                                           // 0x0020(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		int32_t                                                    StripTopLODS;                                            // 0x0030(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bNeedsCpuAccess : 1;                                     // 0x0034(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bSkeletonBefore : 1;                                     // 0x0034(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_S0PD[0x3];                                   // 0x0035(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class USkeleton*                                           Skeleton;                                                // 0x0038(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Sheik.SheikBotTitleCardRow
	 * Size -> 0x0110 (FullSize[0x0118] - InheritedSize[0x0008])
	 */
	struct FSheikBotTitleCardRow : public FTableRowBase
	{
	public:
		class UIGWalletAsset*                                      PlayerTitle;                                             // 0x0008(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TMap<ETitleCardStackOrder, class UIGWalletAsset*>          Medals;                                                  // 0x0010(0x0050) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		TMap<ETitleCardStackOrder, class UIGWalletAsset*>          StatAssets;                                              // 0x0060(0x0050) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		TMap<ETitleCardStackOrder, float>                          StatValues;                                              // 0x00B0(0x0050) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		class UIGWalletAsset*                                      Background;                                              // 0x0100(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UIGWalletAsset*                                      PlayerPose;                                              // 0x0108(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UIGWalletAsset*                                      Border;                                                  // 0x0110(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Sheik.SheikBotSpawnParams
	 * Size -> 0x00C0
	 */
	struct FSheikBotSpawnParams
	{
	public:
		unsigned char                                              UnknownData_0BEA[0x30];                                  // 0x0000(0x0030) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          SpawnTransform;                                          // 0x0030(0x0030) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              MeshesToUse[0x10];                                       // 0x0060(0x0010) UNKNOWN PROPERTY: ArrayProperty
		class UIGSpawnDefaultDataAsset*                            OverrideSpawnDataAsset;                                  // 0x0070(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              BotName;                                                 // 0x0078(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                BehaviorTreeName;                                        // 0x0088(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                BotProfile;                                              // 0x0090(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                Loadout;                                                 // 0x0098(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              OutfitName;                                              // 0x00A0(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    BodyIndex;                                               // 0x00B0(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_YPQ6[0xC];                                   // 0x00B4(0x000C) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Sheik.IGTeamOutfitRow
	 * Size -> 0x0010 (FullSize[0x0018] - InheritedSize[0x0008])
	 */
	struct FIGTeamOutfitRow : public FTableRowBase
	{
	public:
		TArray<class FString>                                      OutfitNames;                                             // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Sheik.IGBotNameRow
	 * Size -> 0x0010 (FullSize[0x0018] - InheritedSize[0x0008])
	 */
	struct FIGBotNameRow : public FTableRowBase
	{
	public:
		class FString                                              FullName;                                                // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Sheik.IGBotEmoteRow
	 * Size -> 0x0020 (FullSize[0x0028] - InheritedSize[0x0008])
	 */
	struct FIGBotEmoteRow : public FTableRowBase
	{
	public:
		class UIGWalletAsset*                                      EmoteWalletAsset;                                        // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FIGDate                                             UnlockDate;                                              // 0x0010(0x0014) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_2BFD[0x4];                                   // 0x0024(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Sheik.IGBotAccessoryEntriesArray
	 * Size -> 0x0018
	 */
	struct FIGBotAccessoryEntriesArray
	{
	public:
		TArray<class UIGWalletAsset*>                              Entries;                                                 // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		int32_t                                                    NumEmptyEntries;                                         // 0x0010(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_S1PO[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Sheik.IGBotOutfitRegion
	 * Size -> 0x0020
	 */
	struct FIGBotOutfitRegion
	{
	public:
		EIGBodyRegion                                              Region;                                                  // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_UUV3[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FIGBotAccessoryEntriesArray                         AccessoryEntries;                                        // 0x0008(0x0018) Edit, BlueprintVisible, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Sheik.IGBotOutfitRow
	 * Size -> 0x0098 (FullSize[0x00A0] - InheritedSize[0x0008])
	 */
	struct FIGBotOutfitRow : public FTableRowBase
	{
	public:
		TArray<struct FIGBotOutfitRegion>                          RegionArray;                                             // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		struct FIGBotAccessoryEntriesArray                         MakeupAssets;                                            // 0x0018(0x0018) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FIGBotAccessoryEntriesArray                         TattooAssets;                                            // 0x0030(0x0018) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FIGDate                                             UnlockDate;                                              // 0x0048(0x0014) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_EFJ8[0x4];                                   // 0x005C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class FString>                                      OverrideNames;                                           // 0x0060(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		class UIGWalletAsset*                                      BodyShapeWalletAsset;                                    // 0x0070(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UIGWalletAsset*                                      HeadShapeWalletAsset;                                    // 0x0078(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UIGWalletAsset*                                      SkinColorWalletAsset;                                    // 0x0080(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UIGWalletAsset*                                      EyeColorWalletAsset;                                     // 0x0088(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UIGWalletAsset*                                      EyebrowWalletAsset;                                      // 0x0090(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    DistributionChance;                                      // 0x0098(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_4OH2[0x4];                                   // 0x009C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Sheik.CaptureDesc
	 * Size -> 0x0038
	 */
	struct FCaptureDesc
	{
	public:
		TWeakObjectPtr<class APlayerState>                         PlayerState;                                             // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TWeakObjectPtr<class USkeletalMesh>                        DesiredMesh;                                             // 0x0008(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TWeakObjectPtr<class UIGMoveMontage>                       Animation;                                               // 0x0010(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EIGBodyType                                                BodyType;                                                // 0x0018(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_0KKY[0x3];                                   // 0x0019(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      AnimationFrame;                                          // 0x001C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_MCLT[0x8];                                   // 0x0020(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TWeakObjectPtr<class UMaterialInterface>                   BackgroundMat;                                           // 0x0028(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bShouldDisplayAsDead;                                    // 0x0030(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_RQPL[0x7];                                   // 0x0031(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Sheik.CharDesc
	 * Size -> 0x0030
	 */
	struct FCharDesc
	{
	public:
		class APlayerState*                                        PlayerState;                                             // 0x0000(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UIGMoveMontage*                                      Animation;                                               // 0x0008(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      AnimationFrame;                                          // 0x0010(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_K20J[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class USkeletalMesh*                                       Mesh;                                                    // 0x0018(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EIGBodyType                                                BodyType;                                                // 0x0020(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_K0JG[0x3];                                   // 0x0021(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TWeakObjectPtr<class UMaterialInterface>                   BackgroundMat;                                           // 0x0024(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bShouldDisplayAsDead;                                    // 0x002C(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_RYUR[0x3];                                   // 0x002D(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Sheik.SheikFanEventUIData
	 * Size -> 0x0098
	 */
	struct FSheikFanEventUIData
	{
	public:
		unsigned char                                              UnknownData_AC5C[0x98];                                  // 0x0000(0x0098) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Sheik.SheikErrorTableRow
	 * Size -> 0x0050 (FullSize[0x0058] - InheritedSize[0x0008])
	 */
	struct FSheikErrorTableRow : public FTableRowBase
	{
	public:
		class FText                                                Title;                                                   // 0x0008(0x0018) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		ESheikErrorSource                                          Source;                                                  // 0x0020(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_1WY6[0x3];                                   // 0x0021(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    CallCode;                                                // 0x0024(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    ErrorCode;                                               // 0x0028(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_JH9V[0x4];                                   // 0x002C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FText                                                Text;                                                    // 0x0030(0x0018) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		class FString                                              URL;                                                     // 0x0048(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Sheik.SheikModChangeEventData
	 * Size -> 0x0008
	 */
	struct FSheikModChangeEventData
	{
	public:
		unsigned char                                              UnknownData_3BOA[0x8];                                   // 0x0000(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Sheik.MatchedPlayerInfo
	 * Size -> 0x0038
	 */
	struct FMatchedPlayerInfo
	{
	public:
		class FString                                              PlayerId;                                                // 0x0000(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              TeamID;                                                  // 0x0010(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              DtlsKey;                                                 // 0x0020(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIsTeamLocked;                                           // 0x0030(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_DHWY[0x7];                                   // 0x0031(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Sheik.BotSpawnOptions
	 * Size -> 0x0060
	 */
	struct FBotSpawnOptions
	{
	public:
		bool                                                       bShouldBackfill;                                         // 0x0000(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ZGLZ[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    NumDesiredBots;                                          // 0x0004(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FIGBotProfileDistribution                           ProfileDistribution;                                     // 0x0008(0x0050) NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_03TR[0x8];                                   // 0x0058(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Sheik.SheikMatchTimerHUDInfo
	 * Size -> 0x0008
	 */
	struct FSheikMatchTimerHUDInfo
	{
	public:
		ESheikMatchTimerHUDStatus                                  Status;                                                  // 0x0000(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_8IYB[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      EndTimestamp;                                            // 0x0004(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Sheik.BoundKeyInfo
	 * Size -> 0x0020
	 */
	struct FBoundKeyInfo
	{
	public:
		class FName                                                Name;                                                    // 0x0000(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                Context;                                                 // 0x0008(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FKey>                                        Keys;                                                    // 0x0010(0x0010) BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Sheik.KeyToTexture
	 * Size -> 0x0048 (FullSize[0x0050] - InheritedSize[0x0008])
	 */
	struct FKeyToTexture : public FTableRowBase
	{
	public:
		struct FKey                                                Key;                                                     // 0x0008(0x0018) Edit, BlueprintVisible, BlueprintReadOnly, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UTexture*                                            PlayStationTexture;                                      // 0x0020(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UTexture*                                            PlayStation5Texture;                                     // 0x0028(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UTexture*                                            XboxOneTexture;                                          // 0x0030(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UTexture*                                            XboxSeriesXTexture;                                      // 0x0038(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UTexture*                                            SwitchTexture;                                           // 0x0040(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UTexture*                                            KeyboardMouseTexture;                                    // 0x0048(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Sheik.LiveOpsTypeData
	 * Size -> 0x0028
	 */
	struct FLiveOpsTypeData
	{
	public:
		unsigned char                                              UnknownData_5E2V[0x28];                                  // 0x0000(0x0028) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Sheik.LiveOpsMessageData
	 * Size -> 0x0040
	 */
	struct FLiveOpsMessageData
	{
	public:
		class FString                                              MessageType;                                             // 0x0000(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ELiveOpsMessageType                                        ParsedMessageType;                                       // 0x0010(0x0001) ELEMENT_SIZE_MISMATCH ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_RRKP[0x3];                                   // 0x0011(0x0003) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
		unsigned char                                              UnknownData_C3W7[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<ELiveOpsMessagePlatform>                            MessagePlatforms;                                        // 0x0018(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		class FString                                              MessageTime;                                             // 0x0028(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       KickToTitle;                                             // 0x0038(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_VZW6[0x7];                                   // 0x0039(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Sheik.MatchLoadProperties
	 * Size -> 0x0028
	 */
	struct FMatchLoadProperties
	{
	public:
		int32_t                                                    HotfixVersion;                                           // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_KTKW[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              LevelURL;                                                // 0x0008(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    WCVersionToUse;                                          // 0x0018(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                WCMapTagToUseAsOverride;                                 // 0x001C(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_DGNA[0x4];                                   // 0x0024(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Sheik.SheikPingScreenLocation
	 * Size -> 0x000C
	 */
	struct FSheikPingScreenLocation
	{
	public:
		struct FVector2D                                           AdjustedWidgetPosition;                                  // 0x0000(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ESheikPingDirection                                        Direction;                                               // 0x0008(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_A7V9[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Sheik.SheikAccountRequest
	 * Size -> 0x0040
	 */
	struct FSheikAccountRequest
	{
	public:
		unsigned char                                              UnknownData_NXQV[0x40];                                  // 0x0000(0x0040) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Sheik.LocalStorage
	 * Size -> 0x0020
	 */
	struct FLocalStorage
	{
	public:
		unsigned char                                              UnknownData_92KE[0x8];                                   // 0x0000(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              PreferredMachineName;                                    // 0x0008(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Sensitivity;                                             // 0x0018(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIsAFastMachine;                                         // 0x001C(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_P6NW[0x3];                                   // 0x001D(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Sheik.RemoteStorage
	 * Size -> 0x0130
	 */
	struct FRemoteStorage
	{
	public:
		int32_t                                                    RemoteStorageVersion;                                    // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_UTPO[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      LifetimeXp;                                              // 0x0008(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_AC9C[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FDateTime                                           LastResetTime;                                           // 0x0010(0x0008) ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FRepLedger                                          RepLedgerData;                                           // 0x0018(0x0040) NativeAccessSpecifierPublic
		struct FProgressionPlayerData                              ProgressionData;                                         // 0x0058(0x00A8) NativeAccessSpecifierPublic
		struct FDateTime                                           LastMidnight;                                            // 0x0100(0x0008) ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIsFirstLogin;                                           // 0x0108(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_TVLH[0x7];                                   // 0x0109(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FDateTime                                           LastTimePopupNoticesShown;                               // 0x0110(0x0008) ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              CreatorCode;                                             // 0x0118(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FDateTime                                           LastCreatorCodeActivatedTime;                            // 0x0128(0x0008) ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Sheik.ProfileConsumable
	 * Size -> 0x0010
	 */
	struct FProfileConsumable
	{
	public:
		float                                                      TimeInMinutesActive;                                     // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    UsagesAllowed;                                           // 0x0004(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                WalletId;                                                // 0x0008(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Sheik.CharacterProfile
	 * Size -> 0x0098
	 */
	struct FCharacterProfile
	{
	public:
		int32_t                                                    CharacterProfileVersion;                                 // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_93KD[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FCharacterLoadout                                   ActiveLoadout;                                           // 0x0008(0x0070) BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		TArray<class FName>                                        EmoteAccessoryIds;                                       // 0x0078(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FCharacterLoadout>                           SavedLoadouts;                                           // 0x0088(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Sheik.SheikVersionedData
	 * Size -> 0x0004
	 */
	struct FSheikVersionedData
	{
	public:
		int32_t                                                    Version;                                                 // 0x0000(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Sheik.RecentPlayers
	 * Size -> 0x0024 (FullSize[0x0028] - InheritedSize[0x0004])
	 */
	struct FRecentPlayers : public FSheikVersionedData
	{
	public:
		unsigned char                                              UnknownData_5PVX[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class FString>                                      CozmoIds;                                                // 0x0008(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<ESheikPlatformService>                              Services;                                                // 0x0018(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Sheik.SeenItems
	 * Size -> 0x0058
	 */
	struct FSeenItems
	{
	public:
		int32_t                                                    SeenItemVersion;                                         // 0x0000(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_HAZ4[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              UnseenItemIds[0x50];                                     // 0x0008(0x0050) UNKNOWN PROPERTY: SetProperty
	};

	/**
	 * ScriptStruct Sheik.PlayerDataStorage
	 * Size -> 0x02D8
	 */
	struct FPlayerDataStorage
	{
	public:
		struct FLocalStorage                                       LocalStorage;                                            // 0x0000(0x0020) NativeAccessSpecifierPublic
		struct FRemoteStorage                                      RemoteStorage;                                           // 0x0020(0x0130) NativeAccessSpecifierPublic
		struct FProfileConsumable                                  ProfileConsumables;                                      // 0x0150(0x0010) NoDestructor, NativeAccessSpecifierPublic
		struct FCharacterProfile                                   CharacterProfile;                                        // 0x0160(0x0098) NativeAccessSpecifierPublic
		struct FRecentPlayers                                      RecentPlayers;                                           // 0x01F8(0x0028) NativeAccessSpecifierPublic
		struct FSeenItems                                          SeenItems;                                               // 0x0220(0x0058) NativeAccessSpecifierPublic
		struct FRepTrackingData                                    RepTrackingData;                                         // 0x0278(0x0018) NativeAccessSpecifierPublic
		struct FTitleCardLoadoutIds                                TitleCardLoadoutIds;                                     // 0x0290(0x0048) NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Sheik.XpBoosterTrackingData
	 * Size -> 0x0018
	 */
	struct FXpBoosterTrackingData
	{
	public:
		TArray<struct FProfileConsumable>                          XPBoosters;                                              // 0x0000(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		struct FDateTime                                           CurrentExpiration;                                       // 0x0010(0x0008) ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Sheik.ProfileConsumables
	 * Size -> 0x0018
	 */
	struct FProfileConsumables
	{
	public:
		struct FXpBoosterTrackingData                              XPBoosters;                                              // 0x0000(0x0018) NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Sheik.CozmoCharacterProfileFormat
	 * Size -> 0x0088
	 */
	struct FCozmoCharacterProfileFormat
	{
	public:
		int32_t                                                    CharacterProfileVersion;                                 // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_163Q[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FCharacterLoadout                                   ActiveLoadout;                                           // 0x0008(0x0070) NativeAccessSpecifierPublic
		TArray<class FName>                                        EmoteAccessoryIds;                                       // 0x0078(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Sheik.CozmoSavedLoadoutsFormat
	 * Size -> 0x0018
	 */
	struct FCozmoSavedLoadoutsFormat
	{
	public:
		int32_t                                                    CharacterProfileVersion;                                 // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_YTSQ[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FCharacterLoadout>                           SavedLoadoutsData;                                       // 0x0008(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Sheik.IGTitleCardLoadoutRowData
	 * Size -> 0x00C0 (FullSize[0x00C8] - InheritedSize[0x0008])
	 */
	struct FIGTitleCardLoadoutRowData : public FTableRowBase
	{
	public:
		class UIGWalletAsset*                                      PlayerTitle;                                             // 0x0008(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TMap<ETitleCardStackOrder, class UIGWalletAsset*>          Medals;                                                  // 0x0010(0x0050) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		TMap<ETitleCardStackOrder, class UIGWalletAsset*>          StatAssets;                                              // 0x0060(0x0050) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		class UIGWalletAsset*                                      Background;                                              // 0x00B0(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UIGWalletAsset*                                      PlayerPose;                                              // 0x00B8(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UIGWalletAsset*                                      Border;                                                  // 0x00C0(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Sheik.RecentPlayersV1
	 * Size -> 0x0014 (FullSize[0x0018] - InheritedSize[0x0004])
	 */
	struct FRecentPlayersV1 : public FSheikVersionedData
	{
	public:
		int32_t                                                    RecentPlayerVersion;                                     // 0x0004(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class FString>                                      RecentPlayerCozmoIds;                                    // 0x0008(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Sheik.RankMoveDefinition
	 * Size -> 0x000C
	 */
	struct FRankMoveDefinition
	{
	public:
		int32_t                                                    RankChange;                                              // 0x0000(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    GamesToConsider;                                         // 0x0004(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    SkillThreshold;                                          // 0x0008(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Sheik.PlayerRankDefinition
	 * Size -> 0x0018 (FullSize[0x0020] - InheritedSize[0x0008])
	 */
	struct FPlayerRankDefinition : public FTableRowBase
	{
	public:
		int32_t                                                    BaselineMatchmakingValue;                                // 0x0008(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    MinGamesBeforeRankDecision;                              // 0x000C(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FRankMoveDefinition>                         RankMoveDefinitions;                                     // 0x0010(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Sheik.BouncedCharacter
	 * Size -> 0x000C
	 */
	struct FBouncedCharacter
	{
	public:
		unsigned char                                              UnknownData_Y80I[0xC];                                   // 0x0000(0x000C) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Sheik.SheikSeasonalStatFieldsData
	 * Size -> 0x0030
	 */
	struct FSheikSeasonalStatFieldsData
	{
	public:
		struct FIGStat                                             SeasonLifetime;                                          // 0x0000(0x000C) BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic
		struct FIGStat                                             SeasonWatermark;                                         // 0x000C(0x000C) BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic
		class FText                                                LifetimeTextValue;                                       // 0x0018(0x0018) BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Sheik.SheikPastSeasonPlayerDataStat
	 * Size -> 0x0054 (FullSize[0x0060] - InheritedSize[0x000C])
	 */
	struct FSheikPastSeasonPlayerDataStat : public FIGStat
	{
	public:
		unsigned char                                              UnknownData_UD3Z[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TMap<EIGSeasonIdentifier, struct FSheikSeasonalStatFieldsData> PastSeasonsData;                                         // 0x0010(0x0050) BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Sheik.StatTransferDebugData
	 * Size -> 0x0050
	 */
	struct FStatTransferDebugData
	{
	public:
		unsigned char                                              UnknownData_4EQE[0x50];                                  // 0x0000(0x0050) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Sheik.TitleCardRewards
	 * Size -> 0x01E0
	 */
	struct FTitleCardRewards
	{
	public:
		TMap<class FName, struct FIGTitleCardMedal>                Medals;                                                  // 0x0000(0x0050) NativeAccessSpecifierPublic
		TMap<class FName, struct FIGTitleCardStat>                 Stats;                                                   // 0x0050(0x0050) NativeAccessSpecifierPublic
		TMap<class FName, struct FIGTitleCardPlayerTitle>          Titles;                                                  // 0x00A0(0x0050) NativeAccessSpecifierPublic
		TMap<class FName, struct FIGTitleCardPlayerPose>           Poses;                                                   // 0x00F0(0x0050) NativeAccessSpecifierPublic
		TMap<class FName, struct FIGTitleCardBackground>           Backgrounds;                                             // 0x0140(0x0050) NativeAccessSpecifierPublic
		TMap<class FName, struct FIGTitleCardBorder>               Borders;                                                 // 0x0190(0x0050) NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Sheik.SheikSeasonalIconLookup
	 * Size -> 0x0010 (FullSize[0x0018] - InheritedSize[0x0008])
	 */
	struct FSheikSeasonalIconLookup : public FTableRowBase
	{
	public:
		EIGSeasonIdentifier                                        SeasonId;                                                // 0x0008(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_WTT4[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTexture2D*                                          Icon;                                                    // 0x0010(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Sheik.SheikPlaygroundPopupControlLine
	 * Size -> 0x0068
	 */
	struct FSheikPlaygroundPopupControlLine
	{
	public:
		TArray<class FName>                                        PrefixButtonPrompts;                                     // 0x0000(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic
		class FText                                                PrefixButtonDelimeter;                                   // 0x0010(0x0018) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		class FText                                                ControlText;                                             // 0x0028(0x0018) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		TArray<class FName>                                        SuffixButtonPrompts;                                     // 0x0040(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic
		class FText                                                SuffixButtonDelimeter;                                   // 0x0050(0x0018) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Sheik.SheikPlaygroundPopupDefinitionRow
	 * Size -> 0x00F0 (FullSize[0x00F8] - InheritedSize[0x0008])
	 */
	struct FSheikPlaygroundPopupDefinitionRow : public FTableRowBase
	{
	public:
		class FText                                                Title;                                                   // 0x0008(0x0018) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		class FText                                                Description;                                             // 0x0020(0x0018) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		struct FSheikPlaygroundPopupControlLine                    ControlLine;                                             // 0x0038(0x0068) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		unsigned char                                              PopupMovie[0x28];                                        // 0x00A0(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		unsigned char                                              PopupImage[0x28];                                        // 0x00C8(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		bool                                                       bShowHudPopup;                                           // 0x00F0(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bShowCombatModeToggleOnDismiss;                          // 0x00F1(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_37QD[0x6];                                   // 0x00F2(0x0006) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Sheik.SheikCreditsRow
	 * Size -> 0x0060 (FullSize[0x0068] - InheritedSize[0x0008])
	 */
	struct FSheikCreditsRow : public FTableRowBase
	{
	public:
		ESheikCreditsRowType                                       RowType;                                                 // 0x0008(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_FJBS[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              DisplayString;                                           // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              DisplayTexture[0x28];                                    // 0x0020(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		float                                                      TextureScale;                                            // 0x0048(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FLinearColor                                        DisplayStringColor;                                      // 0x004C(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EHorizontalAlignment                                       HorizontalAlignment;                                     // 0x005C(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ZVQE[0x3];                                   // 0x005D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    TopPadding;                                              // 0x0060(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    BottomPadding;                                           // 0x0064(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Sheik.SheikXpBooster
	 * Size -> 0x0010 (FullSize[0x00B8] - InheritedSize[0x00A8])
	 */
	struct FSheikXpBooster : public FIGExportableRowBase
	{
	public:
		float                                                      TimeInMinutesActive;                                     // 0x00A8(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Mutiplier;                                               // 0x00AC(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       AffectsDailyChallenges;                                  // 0x00B0(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       AffectsWeeklyChallenges;                                 // 0x00B1(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       OnlyAffectsChallenges;                                   // 0x00B2(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_UG0F[0x5];                                   // 0x00B3(0x0005) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Sheik.SheikEmoteLookup
	 * Size -> 0x0018 (FullSize[0x0020] - InheritedSize[0x0008])
	 */
	struct FSheikEmoteLookup : public FTableRowBase
	{
	public:
		class FText                                                DisplayText;                                             // 0x0008(0x0018) Edit, BlueprintVisible, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Sheik.SheikXPItem
	 * Size -> 0x0028
	 */
	struct FSheikXPItem
	{
	public:
		class UTexture2D*                                          ItemIcon;                                                // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FText                                                ItemDescription;                                         // 0x0008(0x0018) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		int32_t                                                    RewardXP;                                                // 0x0020(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_DMTV[0x4];                                   // 0x0024(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Sheik.SheikVariantGroupInfo
	 * Size -> 0x0018
	 */
	struct FSheikVariantGroupInfo
	{
	public:
		class FName                                                VariationGroupName;                                      // 0x0000(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FSheikAccessoryInfo>                         Accessories;                                             // 0x0008(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Sheik.SheikPlayerXPData
	 * Size -> 0x0060
	 */
	struct FSheikPlayerXPData
	{
	public:
		int32_t                                                    Level;                                                   // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      TotalLifetimeXp;                                         // 0x0004(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      TotalMatchXp;                                            // 0x0008(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_8VKN[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TMap<class FName, float>                                   MatchXpContributionsByName;                              // 0x0010(0x0050) NativeAccessSpecifierPublic
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
