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
	 * Enum IGActorSystem.EIGItemType
	 */
	enum class EIGItemType : uint8_t
	{
		None     = 0,
		Weapon   = 1,
		Health   = 2,
		Stamina  = 3,
		Fame     = 4,
		Magazine = 5,
		Arms     = 6,
		Core     = 7,
		Legs     = 8,
		MAX      = 9
	};

	/**
	 * Enum IGActorSystem.EMoveTier
	 */
	enum class EMoveTier : uint8_t
	{
		EMT_Tier1 = 0,
		EMT_Tier2 = 1,
		EMT_Tier3 = 2,
		EMT_MAX   = 3
	};

	/**
	 * Enum IGActorSystem.EIGSpecialMoveEffect
	 */
	enum class EIGSpecialMoveEffect : uint8_t
	{
		None            = 0,
		Stun            = 1,
		Blast           = 2,
		Poison          = 3,
		Burn            = 4,
		Blind           = 5,
		Carry           = 6,
		Freeze          = 7,
		Magnetic        = 8,
		Charge          = 9,
		Cold            = 10,
		Invulnerability = 11,
		Aim             = 12,
		FallPowerUp     = 13,
		Unblockable     = 14,
		HighPriority    = 15,
		MAX             = 16
	};

	/**
	 * Enum IGActorSystem.EIGInventorySlot
	 */
	enum class EIGInventorySlot : uint8_t
	{
		HandSlot   = 0,
		LeftSlot   = 1,
		UpSlot     = 2,
		RightSlot  = 3,
		DownSlot   = 4,
		SLOT_COUNT = 5,
		MAX        = 6
	};

	/**
	 * Enum IGActorSystem.EKnockoutType
	 */
	enum class EKnockoutType : uint8_t
	{
		ETKO       = 0,
		EKnockdown = 1,
		EPin       = 2,
		ERingOut   = 3,
		MAX        = 4
	};

	/**
	 * Enum IGActorSystem.EIGModValueType
	 */
	enum class EIGModValueType : uint8_t
	{
		MaxHealth                           = 0,
		MaxStamina                          = 1,
		AttackPower                         = 2,
		MaxClimbingSpeed                    = 3,
		StaminaRegen                        = 4,
		StaminaWindedRegen                  = 5,
		StaminaRegenCooldown                = 6,
		MaxWalkSpeed                        = 7,
		MaxAccelerationSpeed                = 8,
		JumpHeight                          = 9,
		DisplacementStateVelocityMultiplier = 10,
		MaxFame                             = 11,
		MAX                                 = 12
	};

	/**
	 * Enum IGActorSystem.EMatchTeamMode
	 */
	enum class EMatchTeamMode : uint8_t
	{
		MTM_Invalid = 0,
		MTM_Solo    = 1,
		MTM_Duo     = 2,
		MTM_Trio    = 3,
		MTM_Quad    = 4,
		MTM_MAX     = 5
	};

	/**
	 * Enum IGActorSystem.EIGAchievementStatProgressionType
	 */
	enum class EIGAchievementStatProgressionType : uint8_t
	{
		None        = 0,
		Progressive = 1,
		Maximum     = 2,
		MAX         = 3
	};

	/**
	 * Enum IGActorSystem.EIGAchievement
	 */
	enum class EIGAchievement : uint8_t
	{
		IGA_NONE                = 0,
		IGA_Target1             = 1,
		IGA_Target5             = 2,
		IGA_Target10            = 3,
		IGA_Target20            = 4,
		IGA_Target50            = 5,
		IGA_Target100_Hidden    = 6,
		IGA_Binary1             = 7,
		IGA_Binary2_Hidden      = 8,
		IGA_DirtyDinner         = 9,
		IGA_GrapitalCitySpecial = 10,
		IGA_ViciousBeatsBlock   = 11,
		IGA_BlockBeatsStrike    = 12,
		IGA_CrossingGuard       = 13,
		IGA_MoveableFeast       = 14,
		IGA_MomentOfTruth       = 15,
		IGA_BigHit              = 16,
		IGA_ExtraSpecial        = 17,
		IGA_Elimination         = 18,
		IGA_EyeOfAHawk          = 19,
		IGA_Sportsfriends       = 20,
		IGA_Count               = 21,
		IGA_MAX                 = 22
	};

	/**
	 * Enum IGActorSystem.EIGClashPriorityTier
	 */
	enum class EIGClashPriorityTier : uint8_t
	{
		LowestPriority  = 0,
		GrappleStart    = 1,
		GrappleSpecial  = 2,
		Strike          = 3,
		StrikeSpecial   = 4,
		Weapon          = 5,
		Power           = 6,
		Super           = 7,
		HighestPriority = 8,
		MAX             = 9
	};

	/**
	 * Enum IGActorSystem.EIGUnpocketStatus
	 */
	enum class EIGUnpocketStatus : uint8_t
	{
		DidntAttemptUnpocket = 0,
		UnpocketedNothing    = 1,
		UnpocketedSomething  = 2,
		MAX                  = 3
	};

	/**
	 * Enum IGActorSystem.EQueuedAttackVictimStatus
	 */
	enum class EQueuedAttackVictimStatus : uint8_t
	{
		Normal = 0,
		KO     = 1,
		TKO    = 2,
		Clash  = 3,
		OTG    = 4,
		MAX    = 5
	};

	/**
	 * Enum IGActorSystem.EQueuedAttackResult
	 */
	enum class EQueuedAttackResult : uint8_t
	{
		RESULT_HitBlock = 0,
		RESULT_Hit      = 1,
		RESULT_Block    = 2,
		RESULT_Clash    = 3,
		RESULT_Whiff    = 4,
		RESULT_OTGHit   = 5,
		RESULT_MAX      = 6
	};

	/**
	 * Enum IGActorSystem.EQueuedAttackStatus
	 */
	enum class EQueuedAttackStatus : uint8_t
	{
		STATUS_Pending = 0,
		STATUS_Locked  = 1,
		STATUS_Expired = 2,
		STATUS_MAX     = 3
	};

	/**
	 * Enum IGActorSystem.EAttackCancelStatus
	 */
	enum class EAttackCancelStatus : uint8_t
	{
		ACS_Initial = 0,
		ACS_Blocked = 1,
		ACS_Hit     = 2,
		ACS_MAX     = 3
	};

	/**
	 * Enum IGActorSystem.ETargetingStatus
	 */
	enum class ETargetingStatus : uint8_t
	{
		TSTATUS_Off       = 0,
		TSTATUS_Searching = 1,
		TSTATUS_Found     = 2,
		TSTATUS_Lost      = 3,
		TSTATUS_MAX       = 4
	};

	/**
	 * Enum IGActorSystem.EGuidType
	 */
	enum class EGuidType : uint8_t
	{
		ENewId    = 0,
		EVictimId = 1,
		EInputId  = 2,
		EEventId  = 3,
		MAX       = 4
	};

	/**
	 * Enum IGActorSystem.EFallDamageSource
	 */
	enum class EFallDamageSource : uint8_t
	{
		None                  = 0,
		PlatformingFall       = 1,
		AerialAttackWhiffFall = 2,
		MAX                   = 3
	};

	/**
	 * Enum IGActorSystem.EIGJumpType
	 */
	enum class EIGJumpType : uint8_t
	{
		None        = 0,
		Standard    = 1,
		Boost       = 2,
		Long        = 3,
		SideFlip    = 4,
		OverFlip    = 5,
		WallJump    = 6,
		OffWall     = 7,
		Springboard = 8,
		MAX         = 9
	};

	/**
	 * Enum IGActorSystem.EIGCauseOfPickupDrop
	 */
	enum class EIGCauseOfPickupDrop : uint8_t
	{
		Undefined  = 0,
		BeingHit   = 1,
		PlayerDrop = 2,
		Thrown     = 3,
		DropSwap   = 4,
		Emote      = 5,
		ForcedDrop = 6,
		MAX        = 7
	};

	/**
	 * Enum IGActorSystem.EIGModType
	 */
	enum class EIGModType : uint8_t
	{
		Add      = 0,
		Mult     = 1,
		Override = 2,
		MAX      = 3
	};

	/**
	 * Enum IGActorSystem.EMoveTrack
	 */
	enum class EMoveTrack : uint8_t
	{
		None                   = 0,
		MoveTrack1             = 1,
		MoveTrack2             = 2,
		MoveTrack3             = 3,
		MoveTrack4             = 4,
		MoveTrack5             = 5,
		MoveTrack6             = 6,
		MoveTrack7             = 7,
		MoveTrack8             = 8,
		MoveTrack9             = 9,
		MoveTrack10            = 10,
		MoveTrack11            = 11,
		MoveTrack12            = 12,
		MoveTrack13            = 13,
		MoveTrack14            = 14,
		MoveTrack15            = 15,
		LastConfirmedMoveTrack = 16,
		ForcedMoveTrack        = 17,
		MAX                    = 18
	};

	/**
	 * Enum IGActorSystem.EIGWeaponType
	 */
	enum class EIGWeaponType : uint8_t
	{
		None           = 0,
		SingleHanded   = 1,
		Paddle         = 2,
		Overhead       = 3,
		ConsumableItem = 4,
		MAX            = 5
	};

	/**
	 * Enum IGActorSystem.EIGDownedReactionType
	 */
	enum class EIGDownedReactionType : uint8_t
	{
		None   = 0,
		Light  = 1,
		Medium = 2,
		Heavy  = 3,
		MAX    = 4
	};

	/**
	 * Enum IGActorSystem.ECauseOfDeath
	 */
	enum class ECauseOfDeath : uint8_t
	{
		COD_Undefined        = 0,
		COD_Damage           = 1,
		COD_FallOutOfWorld   = 2,
		COD_Pin              = 3,
		COD_RingOut          = 4,
		COD_DownedTimeOut    = 5,
		COD_WaterInstantKill = 6,
		COD_Disconnected     = 7,
		COD_Debug            = 8,
		COD_MAX              = 9
	};

	/**
	 * Enum IGActorSystem.EFameSource
	 */
	enum class EFameSource : uint8_t
	{
		FS_Damage_Attacker   = 0,
		FS_Damage_Victim     = 1,
		FS_KO                = 2,
		FS_TKO               = 3,
		FS_Pin               = 4,
		FS_Clash             = 5,
		FS_TeammateRescue    = 6,
		FS_NonTeammateRescue = 7,
		FS_Event             = 8,
		FS_TauntStart        = 9,
		FS_TauntTick         = 10,
		FS_TauntFinish       = 11,
		FS_TauntFailed       = 12,
		FS_PinKickout        = 13,
		FS_SpeedUpDownedTime = 14,
		FS_Special           = 15,
		FS_SpecialTick       = 16,
		FS_Collectible       = 17,
		FS_Superstar_Drain   = 18,
		FS_Superstar_Special = 19,
		FS_KOInsurance       = 20,
		FS_Consumable        = 21,
		FS_DropFame          = 22,
		FS_Debug             = 23,
		FS_MAX               = 24
	};

	/**
	 * Enum IGActorSystem.ECharacterLocomotionState
	 */
	enum class ECharacterLocomotionState : uint8_t
	{
		Any                     = 0,
		GroundMovement          = 1,
		InAir                   = 2,
		GroundSprint            = 3,
		Climbing                = 4,
		AllGround               = 5,
		LedgeMount              = 6,
		JumpStartNoInputAllowed = 7,
		ForcedFall              = 8,
		ClimbingDash            = 9,
		CannonShot              = 10,
		FreeFall                = 11,
		Hitstop                 = 12,
		Swinging                = 13,
		AllClimbing             = 14,
		NotSwinging             = 15,
		None                    = 16,
		MAX                     = 17
	};

	/**
	 * Enum IGActorSystem.EAudioSelection
	 */
	enum class EAudioSelection : uint8_t
	{
		AS_TypeOne   = 0,
		AS_TypeTwo   = 1,
		AS_TypeThree = 2,
		AS_TypeFour  = 3,
		AS_TypeFive  = 4,
		AS_TypeSix   = 5,
		AS_Count     = 6,
		AS_MAX       = 7
	};

	/**
	 * Enum IGActorSystem.EComboLimitFlags
	 */
	enum class EComboLimitFlags : uint8_t
	{
		Stagger    = 0,
		Wallbounce = 1,
		Custom3    = 2,
		Custom4    = 3,
		Custom5    = 4,
		Custom6    = 5,
		Custom7    = 6,
		Custom8    = 7,
		Custom9    = 8,
		Custom10   = 9,
		Custom11   = 10,
		Custom12   = 11,
		Custom13   = 12,
		Custom14   = 13,
		Custom15   = 14,
		Custom16   = 15,
		MAX        = 16
	};

	/**
	 * Enum IGActorSystem.EExecuteMoveType
	 */
	enum class EExecuteMoveType : uint8_t
	{
		EM_ClientTriggered = 0,
		EM_ServerTriggered = 1,
		EM_ServerConfirmed = 2,
		EM_ClientConfirmed = 3,
		EM_MAX             = 4
	};

	/**
	 * Enum IGActorSystem.EEmoteSlot
	 */
	enum class EEmoteSlot : uint8_t
	{
		None       = 0,
		EmoteSlot1 = 1,
		EmoteSlot2 = 2,
		EmoteSlot3 = 3,
		EmoteSlot4 = 4,
		EmoteSlot5 = 5,
		EmoteSlot6 = 6,
		EmoteSlot7 = 7,
		EmoteSlot8 = 8,
		Count      = 9,
		MAX        = 10
	};

	/**
	 * Enum IGActorSystem.EBattlePassRewardType
	 */
	enum class EBattlePassRewardType : uint8_t
	{
		None                 = 0,
		FanBooster           = 1,
		VirtualCurrency      = 2,
		Emote                = 3,
		HeadAccessory        = 4,
		MiscHeadAccessory    = 5,
		TorsoAccessory       = 6,
		MiscTorsoAccessory   = 7,
		HandsAccessory       = 8,
		LegsAccessory        = 9,
		MiscLegsAccessory    = 10,
		FeetAccessory        = 11,
		HairAccessory        = 12,
		ElbowsAccessory      = 13,
		KneesAccessory       = 14,
		FacialHairAccessory  = 15,
		TitleCardPlayerTitle = 16,
		TitleCardMedal       = 17,
		TitleCardStat        = 18,
		TitleCardPlayerPose  = 19,
		TitleCardBackground  = 20,
		TitleCardBorder      = 21,
		MAX                  = 22
	};

	/**
	 * Enum IGActorSystem.EIGWalletAssetType
	 */
	enum class EIGWalletAssetType : uint8_t
	{
		WAT_Accessory        = 0,
		WAT_Tattoo           = 1,
		WAT_Makeup           = 2,
		WAT_Emote            = 3,
		WAT_BodyShape        = 4,
		WAT_SkinColor        = 5,
		WAT_HeadShape        = 6,
		WAT_EyeColor         = 7,
		WAT_Eyebrow          = 8,
		WAT_VirtualCurrency  = 9,
		WAT_BattlePass       = 10,
		WAT_TitleCardReward  = 11,
		WAT_FeatureOwnership = 12,
		WAT_MAX              = 13
	};

	/**
	 * Enum IGActorSystem.EIGSeasonIdentifier
	 */
	enum class EIGSeasonIdentifier : uint8_t
	{
		ESI_None               = 0,
		ESI_Season1            = 1,
		ESI_Season1BpOverride  = 2,
		ESI_Season2            = 3,
		ESI_Season2BpOverride  = 4,
		ESI_Season3            = 5,
		ESI_Season3BpOverride  = 6,
		ESI_Season4            = 7,
		ESI_Season4BpOverride  = 8,
		ESI_Season5            = 9,
		ESI_Season5BpOverride  = 10,
		ESI_Season6            = 11,
		ESI_Season6BpOverride  = 12,
		ESI_Season7            = 13,
		ESI_Season7BpOverride  = 14,
		ESI_Season8            = 15,
		ESI_Season8BpOverride  = 16,
		ESI_Season9            = 17,
		ESI_Season9BpOverride  = 18,
		ESI_Season10           = 19,
		ESI_Season10BpOverride = 20,
		ESI_Season11           = 21,
		ESI_Season11BpOverride = 22,
		ESI_Season12           = 23,
		ESI_Season12BpOverride = 24,
		ESI_Season13           = 25,
		ESI_Season13BpOverride = 26,
		ESI_Season14           = 27,
		ESI_Season14BpOverride = 28,
		ESI_Season15           = 29,
		ESI_Season15BpOverride = 30,
		ESI_Season16           = 31,
		ESI_Season16BpOverride = 32,
		ESI_Season17           = 33,
		ESI_Season17BpOverride = 34,
		ESI_Season18           = 35,
		ESI_Season18BpOverride = 36,
		ESI_Season19           = 37,
		ESI_Season19BpOverride = 38,
		ESI_Season20           = 39,
		ESI_Season20BpOverride = 40,
		ESI_Season21           = 41,
		ESI_Season21BpOverride = 42,
		ESI_Season22           = 43,
		ESI_Season22BpOverride = 44,
		ESI_Max                = 45
	};

	/**
	 * Enum IGActorSystem.EIGFlavorEntitlements
	 */
	enum class EIGFlavorEntitlements : uint8_t
	{
		FE_None       = 0,
		FE_FlavorSet1 = 1,
		FE_FlavorSet2 = 2,
		FE_FlavorSet3 = 3,
		FE_MAX        = 4
	};

	/**
	 * Enum IGActorSystem.EIGStarterSetEntitlement
	 */
	enum class EIGStarterSetEntitlement : uint8_t
	{
		SSE_None        = 0,
		SSE_StarterSet1 = 1,
		SSE_StarterSet2 = 2,
		SSE_StarterSet3 = 3,
		SSE_StarterSet4 = 4,
		SSE_StarterSet5 = 5,
		SSE_StarterSet6 = 6,
		SSE_MAX         = 7
	};

	/**
	 * Enum IGActorSystem.EAccessoryItemRarity
	 */
	enum class EAccessoryItemRarity : uint8_t
	{
		EAIR_Tier1 = 0,
		EAIR_Tier2 = 1,
		EAIR_Tier3 = 2,
		EAIR_Tier4 = 3,
		EAIR_MAX   = 4
	};

	/**
	 * Enum IGActorSystem.EIGSkinZones
	 */
	enum class EIGSkinZones : uint8_t
	{
		NONE = 0,
		SZ   = 1,
		SZ01 = 2,
		SZ02 = 3,
		SZ03 = 4,
		SZ04 = 5,
		SZ05 = 6,
		SZ06 = 7,
		SZ07 = 8,
		SZ08 = 9,
		SZ09 = 10,
		SZ10 = 11,
		SZ11 = 12,
		SZ12 = 13,
		SZ13 = 14,
		SZ14 = 15,
		SZ15 = 16,
		SZ16 = 17,
		SZ17 = 18,
		SZ18 = 19,
		SZ19 = 20,
		SZ20 = 21,
		SZ21 = 22,
		SZ22 = 23,
		SZ23 = 24,
		SZ24 = 25,
		SZ25 = 26,
		MAX  = 27
	};

	/**
	 * Enum IGActorSystem.EIGBodyRegion
	 */
	enum class EIGBodyRegion : uint8_t
	{
		EIGBR_None       = 0,
		EIGBR_FullBody   = 1,
		EIGBR_Head       = 2,
		EIGBR_Body       = 3,
		EIGBR_Torso      = 4,
		EIGBR_Elbow      = 5,
		EIGBR_Hands      = 6,
		EIGBR_Hip        = 7,
		EIGBR_LowerBody  = 8,
		EIGBR_Thigh      = 9,
		EIGBR_Knee       = 10,
		EIGBR_Feet       = 11,
		EIGBR_Hair       = 12,
		EIGBR_FacialHair = 13,
		EIGBR_UpperArm   = 14,
		EIGBR_Forearm    = 15,
		EIGBR_Calves     = 16,
		EIGBR_Abdomen    = 17,
		EIGBR_Count      = 18,
		EIGBR_MAX        = 19
	};

	/**
	 * Enum IGActorSystem.EIGRegion
	 */
	enum class EIGRegion : uint8_t
	{
		RG_R1    = 0,
		RG_R2    = 1,
		RG_R3    = 2,
		RG_R4    = 3,
		RG_R5    = 4,
		RG_SR1   = 5,
		RG_SR2   = 6,
		RG_SR3   = 7,
		RG_SR4   = 8,
		RG_SR5   = 9,
		RG_SR6   = 10,
		RG_SR7   = 11,
		RG_SR8   = 12,
		RG_SR9   = 13,
		RG_SR10  = 14,
		RG_Count = 15,
		RG_MAX   = 16
	};

	/**
	 * Enum IGActorSystem.EIGTextureAccessoryType
	 */
	enum class EIGTextureAccessoryType : uint8_t
	{
		TAT_None     = 0,
		TAT_Makeup   = 1,
		TAT_Tattoo   = 2,
		TAT_EyeColor = 3,
		TAT_Eyebrow  = 4,
		TAT_MAX      = 5
	};

	/**
	 * Enum IGActorSystem.EIGBodyType
	 */
	enum class EIGBodyType : uint8_t
	{
		BT_Alfa    = 0,
		BT_Bravo   = 1,
		BT_Charlie = 2,
		BT_Delta   = 3,
		BT_Echo    = 4,
		BT_Foxtrot = 5,
		BT_MAX     = 6
	};

	/**
	 * Enum IGActorSystem.EIGAchievementError
	 */
	enum class EIGAchievementError : uint8_t
	{
		WriteProgressToFile = 0,
		UpdateAchievement   = 1,
		GetAchievements     = 2,
		MAX                 = 3
	};

	/**
	 * Enum IGActorSystem.DamageModifierType
	 */
	enum class EDamageModifierType : uint8_t
	{
		DamageModifierTypeIncoming               = 0,
		DamageModifierTypeOutgoing_NonWeapon     = 1,
		DamageModifierTypeOutgoing_Weapons       = 2,
		DamageModifierTypeDamageModifierType_MAX = 3
	};

	/**
	 * Enum IGActorSystem.PerkActivationType
	 */
	enum class EPerkActivationType : uint8_t
	{
		PerkActivationTypeConstant_Effect        = 0,
		PerkActivationTypeHolding_Still          = 1,
		PerkActivationTypeElimination_Scored     = 2,
		PerkActivationTypeStat_Increased         = 3,
		PerkActivationTypeHealth_Threshold       = 4,
		PerkActivationTypeStamina_Threshold      = 5,
		PerkActivationTypeDamage_Taken           = 6,
		PerkActivationTypeDamage_Dealt           = 7,
		PerkActivationTypeDelayed_Warmup_OneShot = 8,
		PerkActivationTypeTaunt_Near_Enemy       = 9,
		PerkActivationTypeExit_Idling            = 10,
		PerkActivationTypeCanMeditate            = 11,
		PerkActivationTypeCannotMeditate         = 12,
		PerkActivationTypeFameCollected          = 13,
		PerkActivationTypePerkActivationType_MAX = 14
	};

	/**
	 * Enum IGActorSystem.StaminaReductionType
	 */
	enum class EStaminaReductionType : uint8_t
	{
		StaminaReductionTypeExecute_Move             = 0,
		StaminaReductionTypeClimbing_Idle            = 1,
		StaminaReductionTypeClimbing_Moving          = 2,
		StaminaReductionTypeJump                     = 3,
		StaminaReductionTypeStaminaReductionType_MAX = 4
	};

	/**
	 * Enum IGActorSystem.ESweepCastShape
	 */
	enum class ESweepCastShape : uint8_t
	{
		Line    = 0,
		Sphere  = 1,
		Capsule = 2,
		Box     = 3,
		MAX     = 4
	};

	/**
	 * Enum IGActorSystem.EIGGrappleSyncStrategy
	 */
	enum class EIGGrappleSyncStrategy : uint8_t
	{
		EGSS_None              = 0,
		EGSS_ForceSyncAttacker = 1,
		EGSS_MAX               = 2
	};

	/**
	 * Enum IGActorSystem.EContextActionType
	 */
	enum class EContextActionType : uint8_t
	{
		Default    = 0,
		ItemPickup = 1,
		ItemDrop   = 2,
		Climbing   = 3,
		Swinging   = 4,
		MAX        = 5
	};

	/**
	 * Enum IGActorSystem.EIGCollectibleState
	 */
	enum class EIGCollectibleState : uint8_t
	{
		DISABLED       = 0,
		UNCOLLECTED    = 1,
		VANISH_WARNING = 2,
		COLLECTED      = 3,
		VANISHED       = 4,
		MAX            = 5
	};

	/**
	 * Enum IGActorSystem.EFallTierNotifyType
	 */
	enum class EFallTierNotifyType : uint8_t
	{
		Platforming = 0,
		Grapple     = 1,
		Launcher    = 2,
		MAX         = 3
	};

	/**
	 * Enum IGActorSystem.EIGGrenadeState
	 */
	enum class EIGGrenadeState : uint8_t
	{
		Disabled              = 0,
		Available             = 1,
		DetonateCountDown     = 2,
		DetonateTimerFinished = 3,
		Detonated             = 4,
		FinishedLingering     = 5,
		MAX                   = 6
	};

	/**
	 * Enum IGActorSystem.ETargetPriority
	 */
	enum class ETargetPriority : uint8_t
	{
		TP_Lowest  = 0,
		TP_Lower   = 1,
		TP_Medium  = 2,
		TP_Higher  = 3,
		TP_Highest = 4,
		TP_MAX     = 5
	};

	/**
	 * Enum IGActorSystem.EReceiptResult
	 */
	enum class EReceiptResult : uint8_t
	{
		RECEIPT_Hit       = 0,
		RECEIPT_Blocked   = 1,
		RECEIPT_Clash     = 2,
		RECEIPT_Whiffed   = 3,
		RECEIPT_Finalized = 4,
		RECEIPT_ThrownOut = 5,
		RECEIPT_MAX       = 6
	};

	/**
	 * Enum IGActorSystem.EHeldItemBehavior
	 */
	enum class EHeldItemBehavior : uint8_t
	{
		PocketOrDrop = 0,
		AlwaysDrop   = 1,
		KeepHeld     = 2,
		MAX          = 3
	};

	/**
	 * Enum IGActorSystem.EInteractablePromptBehavior
	 */
	enum class EInteractablePromptBehavior : uint8_t
	{
		PROMPT_UseSafeZone           = 0,
		PROMPT_AlwaysStickToLocation = 1,
		PROMPT_MAX                   = 2
	};

	/**
	 * Enum IGActorSystem.EIGStashabilityType
	 */
	enum class EIGStashabilityType : uint8_t
	{
		Unstashable = 0,
		Regular     = 1,
		Large       = 2,
		MAX         = 3
	};

	/**
	 * Enum IGActorSystem.EIGDurabilityChangeType
	 */
	enum class EIGDurabilityChangeType : uint8_t
	{
		Hit   = 0,
		Spawn = 1,
		MAX   = 2
	};

	/**
	 * Enum IGActorSystem.EIGStashType
	 */
	enum class EIGStashType : uint8_t
	{
		Normal     = 0,
		AutoPocket = 1,
		MAX        = 2
	};

	/**
	 * Enum IGActorSystem.EIGInteractionType
	 */
	enum class EIGInteractionType : uint8_t
	{
		StartInteract = 0,
		StopInteract  = 1,
		Use           = 2,
		MAX           = 3
	};

	/**
	 * Enum IGActorSystem.EModuleLootState
	 */
	enum class EModuleLootState : uint8_t
	{
		MLS_Unlootable = 0,
		MLS_Lootable   = 1,
		MLS_Looted     = 2,
		MLS_MAX        = 3
	};

	/**
	 * Enum IGActorSystem.EIGSpawnerState
	 */
	enum class EIGSpawnerState : uint8_t
	{
		INACTIVE        = 0,
		INITIALIZED     = 1,
		INCOMINGWARNING = 2,
		SPAWNED         = 3,
		MAX             = 4
	};

	/**
	 * Enum IGActorSystem.EAllowedAction
	 */
	enum class EAllowedAction : uint8_t
	{
		Climbing     = 0,
		Swinging     = 1,
		Resurrection = 2,
		MAX          = 3
	};

	/**
	 * Enum IGActorSystem.ETransitionCheckResult
	 */
	enum class ETransitionCheckResult : uint8_t
	{
		Fail_Misc    = 0,
		Fail_Stamina = 1,
		Fail_Fame    = 2,
		Success      = 3,
		MAX          = 4
	};

	/**
	 * Enum IGActorSystem.EBufferPairFindType
	 */
	enum class EBufferPairFindType : uint8_t
	{
		None        = 0,
		Both        = 1,
		PressOnly   = 2,
		ReleaseOnly = 3,
		MAX         = 4
	};

	/**
	 * Enum IGActorSystem.EIGAimType
	 */
	enum class EIGAimType : uint8_t
	{
		EAT_Weapon = 0,
		EAT_Ping   = 1,
		EAT_COUNT  = 2,
		EAT_MAX    = 3
	};

	/**
	 * Enum IGActorSystem.EIGCombatContextBehavior
	 */
	enum class EIGCombatContextBehavior : uint8_t
	{
		Default     = 0,
		Toggle      = 1,
		AutoCombo_X = 2,
		AutoCombo_Y = 3,
		MAX         = 4
	};

	/**
	 * Enum IGActorSystem.EFallingType
	 */
	enum class EFallingType : uint8_t
	{
		Platforming = 0,
		Grapple     = 1,
		Launcher    = 2,
		AirToGround = 3,
		MAX         = 4
	};

	/**
	 * Enum IGActorSystem.EServerMoveType
	 */
	enum class EServerMoveType : uint8_t
	{
		ENewMove     = 0,
		EOldMove     = 1,
		EPendingMove = 2,
		MAX          = 3
	};

	/**
	 * Enum IGActorSystem.EIGReactionEndLocationType
	 */
	enum class EIGReactionEndLocationType : uint8_t
	{
		Standing      = 0,
		LyingFaceUp   = 1,
		LyingFaceDown = 2,
		MAX           = 3
	};

	/**
	 * Enum IGActorSystem.EIGIventoryDropType
	 */
	enum class EIGIventoryDropType : uint8_t
	{
		None        = 0,
		All         = 1,
		Half        = 2,
		Random      = 3,
		Knockdown   = 4,
		Elimination = 5,
		MAX         = 6
	};

	/**
	 * Enum IGActorSystem.EMoveInputDirection
	 */
	enum class EMoveInputDirection : uint8_t
	{
		Any          = 0,
		Up           = 1,
		Down         = 2,
		Left         = 3,
		Right        = 4,
		UpRight      = 5,
		UpLeft       = 6,
		DownRight    = 7,
		DownLeft     = 8,
		Neutral      = 9,
		AnyDirection = 10,
		MAX          = 11
	};

	/**
	 * Enum IGActorSystem.EMoveTransitionEvents
	 */
	enum class EMoveTransitionEvents : uint8_t
	{
		None                                     = 0,
		MoveEnded                                = 1,
		MoveEnded_BackKnockout                   = 2,
		MoveEnded_StandingKnockout               = 3,
		MoveEnded_BackDeath                      = 4,
		MoveEnded_StandingDeath                  = 5,
		BattleRoyale_TagTeam_LaunchEnded         = 6,
		BattleRoyale_TagTeam_GainedLaunchControl = 7,
		Interrupted                              = 8,
		RaycastHit                               = 9,
		Airborne                                 = 10,
		Grounded                                 = 11,
		WeaponBreak                              = 12,
		MAX                                      = 13
	};

	/**
	 * Enum IGActorSystem.EInputStateType
	 */
	enum class EInputStateType : uint8_t
	{
		Pressed                  = 0,
		Released                 = 1,
		DoublePressedUNSUPPORTED = 2,
		Hold                     = 3,
		HoldOrPress              = 4,
		Any                      = 5,
		NotHeld                  = 6,
		MAX                      = 7
	};

	/**
	 * Enum IGActorSystem.EIGMoveType
	 */
	enum class EIGMoveType : uint8_t
	{
		None                 = 0,
		Strike               = 1,
		GrappleStart         = 2,
		GrappleFollowThrough = 3,
		StrikeSpecial        = 4,
		GrappleSpecial       = 5,
		Reaction             = 6,
		Traversal            = 7,
		Emote                = 8,
		Weapon               = 9,
		ChargeRelease        = 10,
		WeaponChargeRelease  = 11,
		Block                = 12,
		DropKick             = 13,
		Uppercut             = 14,
		Super                = 15,
		BotMove              = 16,
		MAX                  = 17
	};

	/**
	 * Enum IGActorSystem.EStatDamageType
	 */
	enum class EStatDamageType : uint8_t
	{
		ESDT_None        = 0,
		ESDT_Core        = 1,
		ESDT_Arms        = 2,
		ESDT_Legs        = 3,
		ESDT_CoreAndArms = 4,
		ESDT_CoreAndLegs = 5,
		ESDT_ArmsAndLegs = 6,
		ESDT_All         = 7,
		ESDT_MAX         = 8
	};

	/**
	 * Enum IGActorSystem.ECachedBool
	 */
	enum class ECachedBool : uint8_t
	{
		CB_UNINITALIZED = 0,
		CB_TRUE         = 1,
		CB_FALSE        = 2,
		CB_MAX          = 3
	};

	/**
	 * Enum IGActorSystem.ESimultaneousInputDevice
	 */
	enum class ESimultaneousInputDevice : uint8_t
	{
		ESID_Gamepad  = 0,
		ESID_Keyboard = 1,
		ESID_MAX      = 2
	};

	/**
	 * Enum IGActorSystem.EPingRanges
	 */
	enum class EPingRanges : uint8_t
	{
		PING_LESS_THAN    = 0,
		PING_50_TO        = 1,
		PING_75_TO        = 2,
		PING_100_TO       = 3,
		PING_125_TO       = 4,
		PING_150_TO       = 5,
		PING_175_TO       = 6,
		PING_GREATER_THAN = 7,
		PING_MAX          = 8
	};

	/**
	 * Enum IGActorSystem.EIGPoseSpotActorState
	 */
	enum class EIGPoseSpotActorState : uint8_t
	{
		INACTIVE               = 0,
		ATTRACT                = 1,
		POSE_ACTIVATED         = 2,
		PERFECT_POSE_ACTIVATED = 3,
		COMPLETED              = 4,
		COOLDOWN               = 5,
		MAX                    = 6
	};

	/**
	 * Enum IGActorSystem.EBattlePassCelebrationReason
	 */
	enum class EBattlePassCelebrationReason : uint8_t
	{
		BPCR_None            = 0,
		BPCR_FanIncreaseOnly = 1,
		BPCR_TierIncrease    = 2,
		BPCR_MAX             = 3
	};

	/**
	 * Enum IGActorSystem.EBattlePassRewardUnlockType
	 */
	enum class EBattlePassRewardUnlockType : uint8_t
	{
		EBPRUT_Free = 0,
		EBPRUT_Paid = 1,
		EBPRUT_MAX  = 2
	};

	/**
	 * Enum IGActorSystem.EReasonFansAwarded
	 */
	enum class EReasonFansAwarded : uint8_t
	{
		ERingClosure        = 0,
		EPin                = 1,
		ETKO                = 2,
		EKnockdown          = 3,
		ERepDailyReward     = 4,
		ERepWeeklyReward    = 5,
		ERepSpecialReward   = 6,
		ERepCommunityReward = 7,
		EMatchOfTheDay      = 8,
		EFirstElim          = 9,
		EDefaultElim        = 10,
		EFinalSurvival      = 11,
		EDefaultSurvival    = 12,
		EPlacement10        = 13,
		EPlacement5         = 14,
		EPlacement2         = 15,
		EPlacement1         = 16,
		EDamageDealt        = 17,
		ESuperstarMeter     = 18,
		EPoseSpot           = 19,
		ECollectible        = 20,
		EDefault            = 21,
		MAX                 = 22
	};

	/**
	 * Enum IGActorSystem.EFanMailAssetRarity
	 */
	enum class EFanMailAssetRarity : uint8_t
	{
		AR_Uncommon  = 0,
		AR_Rare      = 1,
		AR_Epic      = 2,
		AR_Legendary = 3,
		AR_MAX       = 4
	};

	/**
	 * Enum IGActorSystem.EFanMailType
	 */
	enum class EFanMailType : uint8_t
	{
		TNC_Default       = 0,
		TNC_SeasonalEvent = 1,
		TNC_MAX           = 2
	};

	/**
	 * Enum IGActorSystem.EThresholdNotificationCadence
	 */
	enum class EThresholdNotificationCadence : uint8_t
	{
		TNC_None           = 0,
		TNC_Half           = 1,
		TNC_Third          = 2,
		TNC_Quarter        = 3,
		TNC_CustomInterval = 4,
		TNC_MAX            = 5
	};

	/**
	 * Enum IGActorSystem.ERepTargetComparisonType
	 */
	enum class ERepTargetComparisonType : uint8_t
	{
		RTCT_GreaterThanOrEqual = 0,
		RTCT_GreaterThan        = 1,
		RTCT_LessThanOrEqual    = 2,
		RTCT_LessThan           = 3,
		RTCT_MAX                = 4
	};

	/**
	 * Enum IGActorSystem.ERepProgressUpdateType
	 */
	enum class ERepProgressUpdateType : uint8_t
	{
		RPUT_Cumulative  = 0,
		RPUT_Subtractive = 1,
		RPUT_Maxima      = 2,
		RPUT_Minima      = 3,
		RPUT_MAX         = 4
	};

	/**
	 * Enum IGActorSystem.ERepType
	 */
	enum class ERepType : uint8_t
	{
		RT_None      = 0,
		RT_Daily     = 1,
		RT_Weekly    = 2,
		RT_Community = 3,
		RT_Special   = 4,
		RT_MAX       = 5
	};

	/**
	 * Enum IGActorSystem.ERepDifficulty
	 */
	enum class ERepDifficulty : uint8_t
	{
		RD_FirstTimer = 0,
		RD_Easy       = 1,
		RD_Moderate   = 2,
		RD_Hard       = 3,
		RD_ExtraHard  = 4,
		RD_MAX        = 5
	};

	/**
	 * Enum IGActorSystem.ERepRewardType
	 */
	enum class ERepRewardType : uint8_t
	{
		RRT_None           = 0,
		RRT_BattlePassXp   = 1,
		RRT_Currency       = 2,
		RRT_SingleCosmetic = 3,
		RRT_RandomCosmetic = 4,
		RRT_Coupon         = 5,
		RRT_FanMail        = 6,
		RTT_Fans           = 7,
		MAX                = 8
	};

	/**
	 * Enum IGActorSystem.EEndOfMatchBonusName
	 */
	enum class EEndOfMatchBonusName : uint8_t
	{
		EMBN_MatchOfTheDay            = 0,
		EMBN_Elimination_First        = 1,
		EMBN_Elimination_Default      = 2,
		EMBN_Survival_Final           = 3,
		EMBN_Survival_Default         = 4,
		EMBN_Placement                = 5,
		EMBN_Placement01              = 6,
		EMBN_Placement02              = 7,
		EMBN_Placement03              = 8,
		EMBN_DamageDealt              = 9,
		EMBN_SuperstarMeter           = 10,
		EMBN_AlternativeMatchOfTheDay = 11,
		EMBN_MAX                      = 12
	};

	/**
	 * Enum IGActorSystem.EMatchCompletionName
	 */
	enum class EMatchCompletionName : uint8_t
	{
		MCN_MatchOfTheDay     = 0,
		MCN_Elimination       = 1,
		MCN_Survival          = 2,
		MCN_Placement         = 3,
		MCN_Placement01       = 4,
		MCN_Placement02       = 5,
		MCN_Placement03       = 6,
		MCN_Placement_Default = 7,
		MCN_MAX               = 8
	};

	/**
	 * Enum IGActorSystem.EClassRepNodeMapping
	 */
	enum class EClassRepNodeMapping : uint8_t
	{
		NotRouted                = 0,
		RelevantAllConnections   = 1,
		Spatialize_Static        = 2,
		Spatialize_Dynamic       = 3,
		Spatialize_Dormancy      = 4,
		Spatialize_SpawnedStatic = 5,
		Spatialize_KA_Dynamic    = 6,
		Spatialize_KA_Dormancy   = 7,
		Spatialize_Character     = 8,
		MAX                      = 9
	};

	/**
	 * Enum IGActorSystem.EIGCollectibleRewardType
	 */
	enum class EIGCollectibleRewardType : uint8_t
	{
		HEALTH        = 0,
		STAMINA       = 1,
		PERK          = 2,
		FAME          = 3,
		PROGRESSIONXP = 4,
		INVALID       = 5,
		MAX           = 6
	};

	/**
	 * Enum IGActorSystem.EScriptedActorAction
	 */
	enum class EScriptedActorAction : uint8_t
	{
		SAC_Nothing     = 0,
		SAC_Melee       = 1,
		SAC_Jump        = 2,
		SAC_ElbowDrop   = 3,
		SAC_Climb       = 4,
		SAC_Grab        = 5,
		SAC_Taunt       = 6,
		SAC_Dash        = 7,
		SAC_Block       = 8,
		SAC_ThrowWeapon = 9,
		SAC_Max         = 10
	};

	/**
	 * Enum IGActorSystem.EIGShapeCastType
	 */
	enum class EIGShapeCastType : uint8_t
	{
		Line    = 0,
		Box     = 1,
		Sphere  = 2,
		Capsule = 3,
		MAX     = 4
	};

	/**
	 * Enum IGActorSystem.EIGCameraBehavior
	 */
	enum class EIGCameraBehavior : uint8_t
	{
		CB_None             = 0,
		CB_Strike           = 1,
		CB_AttachToAttacker = 2,
		CB_Dash             = 3,
		CB_RocketJump       = 4,
		CB_AutoFlip         = 5,
		CB_MAX              = 6
	};

	/**
	 * Enum IGActorSystem.EIGCameraZoomState
	 */
	enum class EIGCameraZoomState : uint8_t
	{
		None           = 0,
		Climb          = 1,
		Combat         = 2,
		Traversal      = 3,
		WaterInstakill = 4,
		DuosFreeFall   = 5,
		Swinging       = 6,
		MAX            = 7
	};

	/**
	 * Enum IGActorSystem.EIGCameraState
	 */
	enum class EIGCameraState : uint8_t
	{
		None             = 0,
		Death            = 1,
		WaterInstakill   = 2,
		Pin              = 3,
		Climb            = 4,
		Reorient         = 5,
		Combat           = 6,
		Fall             = 7,
		Traversal        = 8,
		Swinging         = 9,
		AttachToAttacker = 10,
		MAX              = 11
	};

	/**
	 * Enum IGActorSystem.EIGStaticInteractableActorState
	 */
	enum class EIGStaticInteractableActorState : uint8_t
	{
		UNDEFINED    = 0,
		INITIAL      = 1,
		INTERACTABLE = 2,
		INTERACTING  = 3,
		INTERACTED   = 4,
		MAX          = 5
	};

	/**
	 * Enum IGActorSystem.EIGSuperstarNotifyType
	 */
	enum class EIGSuperstarNotifyType : uint8_t
	{
		Activate   = 0,
		Deactivate = 1,
		MAX        = 2
	};

	/**
	 * Enum IGActorSystem.ETitleCardStackOrder
	 */
	enum class ETitleCardStackOrder : uint8_t
	{
		Top    = 0,
		Middle = 1,
		Bottom = 2,
		Count  = 3,
		MAX    = 4
	};

	/**
	 * Enum IGActorSystem.EIGTitleCardPlatform
	 */
	enum class EIGTitleCardPlatform : uint8_t
	{
		EIGTCP_PSPlus   = 0,
		EIGTCP_Gamepass = 1,
		EIGTCP_Epic     = 2,
		EIGTCP_Agnostic = 3,
		EIGTCP_MAX      = 4
	};

	/**
	 * Enum IGActorSystem.EIGTitleCardStatType
	 */
	enum class EIGTitleCardStatType : uint8_t
	{
		Lifetime  = 0,
		Watermark = 1,
		MAX       = 2
	};

	/**
	 * Enum IGActorSystem.ESheikImageDataType
	 */
	enum class ESheikImageDataType : uint8_t
	{
		ESIDT_2DTexture = 0,
		ESIDT_Material  = 1,
		ESIDT_MAX       = 2
	};

	/**
	 * Enum IGActorSystem.ESheikTitleCardUnlockCriteria
	 */
	enum class ESheikTitleCardUnlockCriteria : uint8_t
	{
		ESTCUC_Default    = 0,
		ESTCUC_Battlepass = 1,
		ESTCUC_Leagues    = 2,
		ESTCUC_Purchase   = 3,
		ESTCUC_Challenges = 4,
		ESTCUC_MAX        = 5
	};

	/**
	 * Enum IGActorSystem.ESheikTitleCardDataType
	 */
	enum class ESheikTitleCardDataType : uint8_t
	{
		ESTCDT_PlayerTitle = 0,
		ESTCDT_Medal       = 1,
		ESTCDT_Stat        = 2,
		ESTCDT_PlayerPose  = 3,
		ESTCDT_Background  = 4,
		ESTCDT_Border      = 5,
		ESTCDT_MAX         = 6
	};

	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * ScriptStruct IGActorSystem.IGLoadedMesh
	 * Size -> 0x0030
	 */
	struct FIGLoadedMesh
	{
	public:
		unsigned char                                              LoadedAsset[0x28];                                       // 0x0000(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		unsigned char                                              Layer;                                                   // 0x0028(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              HeadShapeId;                                             // 0x0029(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       CoversHead;                                              // 0x002A(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       ExceedsLayerThickness;                                   // 0x002B(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_866Z[0x4];                                   // 0x002C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct IGActorSystem.IGLoadedAccessory
	 * Size -> 0x0018
	 */
	struct FIGLoadedAccessory
	{
	public:
		EIGBodyType                                                BodyType;                                                // 0x0000(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_LDLI[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FIGLoadedMesh>                               LoadedMeshes;                                            // 0x0008(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct IGActorSystem.IGContentReleaseVersion
	 * Size -> 0x0010
	 */
	struct FIGContentReleaseVersion
	{
	public:
		class FString                                              String;                                                  // 0x0000(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct IGActorSystem.IGWalletExportableProperties
	 * Size -> 0x0060
	 */
	struct FIGWalletExportableProperties
	{
	public:
		class UIGWalletAsset*                                      WalletAsset;                                             // 0x0000(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EAccessoryItemRarity                                       RarityTier;                                              // 0x0008(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_MJMT[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FText                                                Description;                                             // 0x0010(0x0018) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		class FText                                                LongDescription;                                         // 0x0028(0x0018) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		bool                                                       bUnlockEntitlementByDefault;                             // 0x0040(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EIGStarterSetEntitlement                                   StarterSetType;                                          // 0x0041(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EIGFlavorEntitlements                                      FlavorSetType;                                           // 0x0042(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EIGSeasonIdentifier                                        Season;                                                  // 0x0043(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_B6VF[0x4];                                   // 0x0044(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FText                                                AccessorySetName;                                        // 0x0048(0x0018) Edit, BlueprintVisible, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct IGActorSystem.IGMaterialVariation
	 * Size -> 0x00A0
	 */
	struct FIGMaterialVariation
	{
	public:
		struct FIGContentReleaseVersion                            ReleaseVersion;                                          // 0x0000(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		unsigned char                                              MaterialInstances[0x10];                                 // 0x0010(0x0010) UNKNOWN PROPERTY: ArrayProperty
		struct FSoftObjectPath                                     Icon;                                                    // 0x0020(0x0018) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                OverrideVariationGroupName;                              // 0x0038(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FIGWalletExportableProperties                       ExportableProperties;                                    // 0x0040(0x0060) Edit, BlueprintVisible, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct IGActorSystem.IGAccessoryAsset
	 * Size -> 0x0150
	 */
	struct FIGAccessoryAsset
	{
	public:
		class FText                                                DisplayName;                                             // 0x0000(0x0018) Edit, NativeAccessSpecifierPublic
		EIGRegion                                                  Region;                                                  // 0x0018(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_YCV6[0x7];                                   // 0x0019(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<EIGRegion>                                          OverlapRegions;                                          // 0x0020(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		struct FIGLoadedAccessory                                  LoadedAccessories[0x6];                                  // 0x0030(0x0090) Edit, NativeAccessSpecifierPublic
		struct FGuid                                               GroupId;                                                 // 0x00C0(0x0010) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       NoHair;                                                  // 0x00D0(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       AltHair;                                                 // 0x00D1(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       CoversMustache;                                          // 0x00D2(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       CoversChin;                                              // 0x00D3(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       CoversCheeks;                                            // 0x00D4(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       RequiresMinimumApparel;                                  // 0x00D5(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       OverlapRegionsRequireMinimumApparel;                     // 0x00D6(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       IsDefaultUndergarment;                                   // 0x00D7(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    PerfScore;                                               // 0x00D8(0x0004) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		uint32_t                                                   SkinZonesToHide;                                         // 0x00DC(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              MaterialSlotsToHide[0x50];                               // 0x00E0(0x0050) UNKNOWN PROPERTY: SetProperty
		uint32_t                                                   ExceedsLayerThicknessRegions;                            // 0x0130(0x0004) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		uint32_t                                                   OccupiesLowerLayersRegions;                              // 0x0134(0x0004) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                VariationGroupName;                                      // 0x0138(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FIGMaterialVariation>                        MaterialVariations;                                      // 0x0140(0x0010) Edit, ZeroConstructor, EditConst, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct IGActorSystem.IGModStackFloat
	 * Size -> 0x000C
	 */
	struct FIGModStackFloat
	{
	public:
		EIGModType                                                 ModType;                                                 // 0x0000(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_U9HX[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      ModValue;                                                // 0x0004(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ExpirationTimeStamp;                                     // 0x0008(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct IGActorSystem.IGModValueFloat
	 * Size -> 0x0018
	 */
	struct FIGModValueFloat
	{
	public:
		float                                                      Value;                                                   // 0x0000(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_VSHB[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FIGModStackFloat>                            StackMods;                                               // 0x0008(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct IGActorSystem.IGPerk
	 * Size -> 0x0038
	 */
	struct FIGPerk
	{
	public:
		class UIGPerkData*                                         PerkData;                                                // 0x0000(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class AActor*                                              Instigator;                                              // 0x0008(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ExpirationTimeStamp;                                     // 0x0010(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_S8FB[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    CurrentStacks;                                           // 0x0018(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       ForceUseStatusUI;                                        // 0x001C(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_WIET[0x9];                                   // 0x001D(0x0009) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		bool                                                       bHasBeenActivated;                                       // 0x0026(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ROCE[0x11];                                  // 0x0027(0x0011) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct IGActorSystem.IGPerkGroupingEntry
	 * Size -> 0x0010
	 */
	struct FIGPerkGroupingEntry
	{
	public:
		class UIGPerkData*                                         Perk;                                                    // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    DefaultDistribution;                                     // 0x0008(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_9OOM[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct IGActorSystem.IGPerkProfileEntry
	 * Size -> 0x0018
	 */
	struct FIGPerkProfileEntry
	{
	public:
		class UIGPerkGrouping*                                     PerkGrouping;                                            // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    DefaultDistribution;                                     // 0x0008(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    NotChosenTickets;                                        // 0x000C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    AttemptsBeforeGuaranteed;                                // 0x0010(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_0LK8[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct IGActorSystem.ActorPoolSettings
	 * Size -> 0x0008
	 */
	struct FActorPoolSettings
	{
	public:
		int32_t                                                    InitialPoolSize;                                         // 0x0000(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    HardActiveLimit;                                         // 0x0004(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct IGActorSystem.IGMontageHistoryInfo
	 * Size -> 0x0010
	 */
	struct FIGMontageHistoryInfo
	{
	public:
		TWeakObjectPtr<class UIGMoveMontage>                       Montage;                                                 // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      LastPositionSampled;                                     // 0x0008(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ExpirationTime;                                          // 0x000C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct IGActorSystem.IGAdditionalParams
	 * Size -> 0x0028
	 */
	struct FIGAdditionalParams
	{
	public:
		int32_t                                                    IntParam;                                                // 0x0000(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      FloatParam;                                              // 0x0004(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                NameParam;                                               // 0x0008(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             VectorParam;                                             // 0x0010(0x000C) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FRotator                                            RotatorParam;                                            // 0x001C(0x000C) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct IGActorSystem.IGDamageBlockData
	 * Size -> 0x0028
	 */
	struct FIGDamageBlockData
	{
	public:
		float                                                      BlockPercent;                                            // 0x0000(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_DNRK[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UIGMoveMontage*                                      OverrideReaction;                                        // 0x0008(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UIGMoveMontage*                                      InterceptReaction;                                       // 0x0010(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bCanStopGrapple;                                         // 0x0018(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bCanStopTracking;                                        // 0x0019(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bInvincible;                                             // 0x001A(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bRequiresBlockInputState;                                // 0x001B(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bCanBeHitByOnTheGroundAttacks;                           // 0x001C(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIgnoreStaminaDamage;                                    // 0x001D(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bAutoTargetAttacker;                                     // 0x001E(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_Y50L[0x1];                                   // 0x001F(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                SourceName;                                              // 0x0020(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct IGActorSystem.AnimationSwapMap
	 * Size -> 0x0050
	 */
	struct FAnimationSwapMap
	{
	public:
		TMap<class UAnimSequenceBase*, class UAnimSequenceBase*>   SequenceSwapMap;                                         // 0x0000(0x0050) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct IGActorSystem.ComboLimitSettings
	 * Size -> 0x0008
	 */
	struct FComboLimitSettings
	{
	public:
		unsigned char                                              ComboLimit;                                              // 0x0000(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              ScaleLimit;                                              // 0x0001(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_UMND[0x2];                                   // 0x0002(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      DamageScaling;                                           // 0x0004(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct IGActorSystem.HitLimitData
	 * Size -> 0x0018
	 */
	struct FHitLimitData
	{
	public:
		class AIGCharacter*                                        Attacker;                                                // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                Group;                                                   // 0x0008(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Timer;                                                   // 0x0010(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_2J23[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct IGActorSystem.IGPlatformingFallEndDistanceTierData
	 * Size -> 0x0010
	 */
	struct FIGPlatformingFallEndDistanceTierData
	{
	public:
		float                                                      Distance;                                                // 0x0000(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_T2NO[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UIGHitData*                                          Hit;                                                     // 0x0008(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct IGActorSystem.DownButNotOutInfo
	 * Size -> 0x0090
	 */
	struct FDownButNotOutInfo
	{
	public:
		float                                                      MaxRecoveredStamina;                                     // 0x0000(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      StaminaRestoredOnRecovery;                               // 0x0004(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      OutOfBoundsRecoveryTimeModified;                         // 0x0008(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    RandomPerksAwardedForTKO;                                // 0x000C(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    RandomPerksAwardedForKnockdown;                          // 0x0010(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    ItemsDroppedOnKnockdown;                                 // 0x0014(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    ItemsDroppedOnElimination;                               // 0x0018(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_3ZLI[0x4];                                   // 0x001C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TMap<float, float>                                         StaminaToRecoveryTimeMap;                                // 0x0020(0x0050) Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic
		TArray<float>                                              KnockoutToHealthRestored;                                // 0x0070(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic
		bool                                                       bSpeedUpDownedTimeEnabled;                               // 0x0080(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bHoldButtonToSpeedUp;                                    // 0x0081(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_NJCX[0x2];                                   // 0x0082(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      DownedTimeModifier;                                      // 0x0084(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      FameModifier;                                            // 0x0088(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      KOInsuranceDownedTime;                                   // 0x008C(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct IGActorSystem.TargetingInfo
	 * Size -> 0x0020
	 */
	struct FTargetingInfo
	{
	public:
		ETargetingStatus                                           Status;                                                  // 0x0000(0x0001) ELEMENT_SIZE_MISMATCH ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_HPCZ[0x3];                                   // 0x0001(0x0003) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
		unsigned char                                              UnknownData_C2CI[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UIGFindTargetState*                                  TargetingNotify;                                         // 0x0008(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MontagePosition;                                         // 0x0010(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIsValidationActive;                                     // 0x0014(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_O4Y0[0x3];                                   // 0x0015(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UObject*                                             TargetObject;                                            // 0x0018(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
	};

	/**
	 * ScriptStruct IGActorSystem.IGMeterDeltaOverTime
	 * Size -> 0x0010
	 */
	struct FIGMeterDeltaOverTime
	{
	public:
		float                                                      TotalDelta;                                              // 0x0000(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      TotalTime;                                               // 0x0004(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      DeltaPerSecond;                                          // 0x0008(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CurrentTime;                                             // 0x000C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct IGActorSystem.IGCachedSurfaceData
	 * Size -> 0x0010
	 */
	struct FIGCachedSurfaceData
	{
	public:
		int32_t                                                    TimestampMS;                                             // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    ValidDurationMS;                                         // 0x0004(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TWeakObjectPtr<class UPhysicalMaterial>                    PhysMat;                                                 // 0x0008(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct IGActorSystem.RepMoveMontageInfo
	 * Size -> 0x0058
	 */
	struct FRepMoveMontageInfo
	{
	public:
		bool                                                       bActiveMontage;                                          // 0x0000(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_66FC[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UIGMoveMontage*                                      MoveMontage;                                             // 0x0008(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MontagePosition;                                         // 0x0010(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      HitStunDuration;                                         // 0x0014(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      PushBackDuration;                                        // 0x0018(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector_NetQuantize100                              PushBack;                                                // 0x001C(0x000C) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      PushBackFriction;                                        // 0x0028(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector_NetQuantize100                              PushBackDirection;                                       // 0x002C(0x000C) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FRotator                                            ActorFacingDir;                                          // 0x0038(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_OKNV[0x4];                                   // 0x0044(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UIGMoveMontage*                                      QueuedMoveMontage;                                       // 0x0048(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EMoveTier                                                  MoveTier;                                                // 0x0050(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_75VS[0x7];                                   // 0x0051(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct IGActorSystem.IGJumpMoveReplicationInfo
	 * Size -> 0x0010
	 */
	struct FIGJumpMoveReplicationInfo
	{
	public:
		unsigned char                                              JumpType;                                                // 0x0000(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_779N[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector_NetQuantize10                               HorizontalJumpDirection;                                 // 0x0004(0x000C) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct IGActorSystem.CombatInfo
	 * Size -> 0x000C
	 */
	struct FCombatInfo
	{
	public:
		TWeakObjectPtr<class AIGCharacter>                         InteractedCharacter;                                     // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      LastInteractionTime;                                     // 0x0008(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct IGActorSystem.IGInstanceHitData
	 * Size -> 0x0048
	 */
	struct FIGInstanceHitData
	{
	public:
		class AActor*                                              AttackerActor;                                           // 0x0000(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAnimMontage*                                        AttackerMontage;                                         // 0x0008(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             HitDirection;                                            // 0x0010(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIsBeingBlocked;                                         // 0x001C(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_7RTX[0x3];                                   // 0x001D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    HitId;                                                   // 0x0020(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EMoveTier                                                  AttackingMoveTier;                                       // 0x0024(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUseDamageBuffs;                                         // 0x0025(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_PECG[0x2];                                   // 0x0026(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      DamageReductionPercent;                                  // 0x0028(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      FallDistance;                                            // 0x002C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIsAttackerTeammate;                                     // 0x0030(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EIGDownedReactionType                                      DownedHitReactType;                                      // 0x0031(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_67ES[0x6];                                   // 0x0032(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UIGHitData*                                          LauncherHitData;                                         // 0x0038(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bHasLaunchEnded;                                         // 0x0040(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bDidStaminaBreak;                                        // 0x0041(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EFallDamageSource                                          FallDamageSource;                                        // 0x0042(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIsFallDamage;                                           // 0x0043(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIsAOEDamage;                                            // 0x0044(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ZORH[0x3];                                   // 0x0045(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct IGActorSystem.CannonShotData
	 * Size -> 0x0084
	 */
	struct FCannonShotData
	{
	public:
		float                                                      CannonShotPhase1SpeedMultiplier;                         // 0x0000(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CannonShotPhase2SpeedMultiplier;                         // 0x0004(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bShowAllCannonSpeedTuneables;                            // 0x0008(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_KHM8[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      ForwardAirControl;                                       // 0x000C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      RightAirControl;                                         // 0x0010(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      VerticalAirControl;                                      // 0x0014(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MinSpeed;                                                // 0x0018(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MinLaunchSpeed;                                          // 0x001C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaxLaunchSpeed;                                          // 0x0020(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaxFlightSpeed;                                          // 0x0024(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUseOverrideInAirMaxAcceleration;                        // 0x0028(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_12G9[0x3];                                   // 0x0029(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      OverrideInAirMaxAcceleration;                            // 0x002C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUseVelocityDecayDuringPhase1;                           // 0x0030(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_9P0C[0x3];                                   // 0x0031(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      VelocityDecayRate;                                       // 0x0034(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       LimitFlightRotation;                                     // 0x0038(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_KNBQ[0x3];                                   // 0x0039(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      MaxInFlightYawRotation;                                  // 0x003C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bOverrideGravity;                                        // 0x0040(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_4OSX[0x3];                                   // 0x0041(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      GravityScale;                                            // 0x0044(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      GravityScalePhase2;                                      // 0x0048(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Phase2MinVelocityZ;                                      // 0x004C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUseVelocityToStartPhase2;                               // 0x0050(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUseControlPlaneToStartPhase2;                           // 0x0051(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUseControlPlaneEnableFreeFall;                          // 0x0052(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_T11E[0x1];                                   // 0x0053(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      ControlPlaneDistanceFromRingSurface;                     // 0x0054(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bControlPlaneIsUpright;                                  // 0x0058(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_CQBK[0x3];                                   // 0x0059(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      ControlPlaneAngleAdjust;                                 // 0x005C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      PerfectLandingCheckAheadTime;                            // 0x0060(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             CameraOffset;                                            // 0x0064(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      IdealTimeToRing;                                         // 0x0070(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      PhaseTransitionAirBreaking;                              // 0x0074(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Phase1HorizontalAirControl;                              // 0x0078(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Phase1VerticalAirControl;                                // 0x007C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Phase1MaxDistanceFromCenter;                             // 0x0080(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct IGActorSystem.CannonShotDynamicData
	 * Size -> 0x0040
	 */
	struct FCannonShotDynamicData
	{
	public:
		struct FVector                                             ShotVector;                                              // 0x0000(0x000C) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      RangeCos;                                                // 0x000C(0x0004) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             MaxVector2D;                                             // 0x0010(0x000C) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             MinVector2D;                                             // 0x001C(0x000C) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             ControlPhasePlaneLoc;                                    // 0x0028(0x000C) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             ControlPhasePlaneNormal;                                 // 0x0034(0x000C) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct IGActorSystem.FreeFallData
	 * Size -> 0x0024
	 */
	struct FFreeFallData
	{
	public:
		float                                                      ForwardAirControl;                                       // 0x0000(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      RightAirControl;                                         // 0x0004(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bClampLateralSpeed;                                      // 0x0008(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_CGCC[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      MaxLateralSpeed;                                         // 0x000C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUseOverrideInAirMaxAcceleration;                        // 0x0010(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_SI0W[0x3];                                   // 0x0011(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      OverrideInAirMaxAcceleration;                            // 0x0014(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bClampFallSpeed;                                         // 0x0018(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_FICI[0x3];                                   // 0x0019(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      FallSpeedMax;                                            // 0x001C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      BreakingDecelerationForSpeedsPastMaxLateral;             // 0x0020(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct IGActorSystem.MovementNetworkSettings
	 * Size -> 0x0010
	 */
	struct FMovementNetworkSettings
	{
	public:
		float                                                      NetworkSimulatedSmoothLocationTime;                      // 0x0000(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      NetworkSimulatedSmoothRotationTime;                      // 0x0004(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      NetworkMaxSmoothUpdateDistance;                          // 0x0008(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      NetworkNoSmoothUpdateDistance;                           // 0x000C(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct IGActorSystem.IGItemFilterEntry
	 * Size -> 0x0050
	 */
	struct FIGItemFilterEntry
	{
	public:
		EIGWeaponType                                              ItemType;                                                // 0x0000(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ZD9V[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FGameplayTagQuery                                   TagFilter;                                               // 0x0008(0x0048) Edit, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct IGActorSystem.IGItemFilter
	 * Size -> 0x0068
	 */
	struct FIGItemFilter
	{
	public:
		int32_t                                                    HoldRequirements;                                        // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_F3V3[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FIGItemFilterEntry>                          PerTypeConditions;                                       // 0x0008(0x0010) Edit, EditFixedSize, ZeroConstructor, NativeAccessSpecifierPublic
		struct FGameplayTagQuery                                   AllTypeTagFilter;                                        // 0x0018(0x0048) Edit, NativeAccessSpecifierPublic
		bool                                                       bNeedsAiming;                                            // 0x0060(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bCheckForMaxCombinedStats;                               // 0x0061(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_REMC[0x6];                                   // 0x0062(0x0006) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct IGActorSystem.IGMulticastData
	 * Size -> 0x0090
	 */
	struct FIGMulticastData
	{
	public:
		struct FVector                                             Origin;                                                  // 0x0000(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             Direction;                                               // 0x000C(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             CastAxis;                                                // 0x0018(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FRotator                                            CastRotation;                                            // 0x0024(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FTransform                                          RelativeTransform;                                       // 0x0030(0x0030) Edit, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		int32_t                                                    CastCount;                                               // 0x0060(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MulticastSeperationDist;                                 // 0x0064(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CastDistance;                                            // 0x0068(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_546A[0x4];                                   // 0x006C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<TWeakObjectPtr<class AActor>>                       IgnoredActors;                                           // 0x0070(0x0010) Edit, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic
		ECollisionChannel                                          CollisionChannel;                                        // 0x0080(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bReturnPhysMat;                                          // 0x0081(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bTraceComplex;                                           // 0x0082(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIgnoreTouches;                                          // 0x0083(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_S1CM[0xC];                                   // 0x0084(0x000C) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct IGActorSystem.IGStateTransitionConditions
	 * Size -> 0x0080
	 */
	struct FIGStateTransitionConditions
	{
	public:
		EInputStateType                                            EventState;                                              // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_74LC[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    MinInputDurationMS;                                      // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EMoveInputDirection                                        DirectionRequirement;                                    // 0x0008(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ECharacterLocomotionState                                  LocationRequirement;                                     // 0x0009(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_50LW[0x6];                                   // 0x000A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FIGItemFilter                                       InteractableReqs;                                        // 0x0010(0x0068) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		bool                                                       bMaintainCurrentTier;                                    // 0x0078(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bShouldIgnoreTier;                                       // 0x0079(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_0SZR[0x6];                                   // 0x007A(0x0006) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct IGActorSystem.IGGenericTransitionState
	 * Size -> 0x0010 (FullSize[0x0090] - InheritedSize[0x0080])
	 */
	struct FIGGenericTransitionState : public FIGStateTransitionConditions
	{
	public:
		EMoveTrack                                                 MoveTrack;                                               // 0x0080(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_VNJF[0x3];                                   // 0x0081(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    LookbackMS;                                              // 0x0084(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    DurationMS;                                              // 0x0088(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_SFSQ[0x4];                                   // 0x008C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct IGActorSystem.ExecuteMoveInfo
	 * Size -> 0x0048
	 */
	struct FExecuteMoveInfo
	{
	public:
		class UIGMoveMontage*                                      MoveMontage;                                             // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FRotator                                            ActorFacingDir;                                          // 0x0008(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		float                                                      MontageStartPosition;                                    // 0x0014(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      HitStunDuration;                                         // 0x0018(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      PushBackDuration;                                        // 0x001C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             PushBack;                                                // 0x0020(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      PushBackFriction;                                        // 0x002C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             PushBackDirection;                                       // 0x0030(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Damage;                                                  // 0x003C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      TransitionStaminaOverride;                               // 0x0040(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EGuidType                                                  ExecutionType;                                           // 0x0044(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EMoveTier                                                  ExecutionTier;                                           // 0x0045(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_RECP[0x2];                                   // 0x0046(0x0002) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct IGActorSystem.SavedEventMontageTransition
	 * Size -> 0x0020
	 */
	struct FSavedEventMontageTransition
	{
	public:
		bool                                                       bHasTransition;                                          // 0x0000(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_X5MK[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UIGMoveMontage*                                      StartMoveMontage;                                        // 0x0008(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      StartPosition;                                           // 0x0010(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_SSNY[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UIGMoveMontage*                                      EndMoveMontage;                                          // 0x0018(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct IGActorSystem.FallData
	 * Size -> 0x0048
	 */
	struct FFallData
	{
	public:
		class AIGCharacter*                                        Attacker;                                                // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class AIGCharacter*                                        Victim;                                                  // 0x0008(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EFallingType                                               FallingType;                                             // 0x0010(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_EOZ0[0x3];                                   // 0x0011(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      FallDistance;                                            // 0x0014(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    FallTier;                                                // 0x0018(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bInterrupted;                                            // 0x001C(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bShouldSpawnLandingFX;                                   // 0x001D(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bShouldSpawnFallingFX;                                   // 0x001E(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_4J1E[0x1];                                   // 0x001F(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FGameplayTagContainer                               FallingMoveTags;                                         // 0x0020(0x0020) NativeAccessSpecifierPublic
		float                                                      ImpactRadiusOverride;                                    // 0x0040(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_EQMZ[0x4];                                   // 0x0044(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct IGActorSystem.AudioReceipt
	 * Size -> 0x0010
	 */
	struct FAudioReceipt
	{
	public:
		int32_t                                                    HitId;                                                   // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bBlocked;                                                // 0x0004(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_EUJF[0x3];                                   // 0x0005(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TWeakObjectPtr<class UAudioComponent>                      AudioComponent;                                          // 0x0008(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct IGActorSystem.ParticleReceipt
	 * Size -> 0x0018
	 */
	struct FParticleReceipt
	{
	public:
		int32_t                                                    HitId;                                                   // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bBlocked;                                                // 0x0004(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_GC6U[0x3];                                   // 0x0005(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TWeakObjectPtr<class UParticleSystemComponent>             ParticleComponent;                                       // 0x0008(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TWeakObjectPtr<class UMatineeCameraShake>                  CameraShake;                                             // 0x0010(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct IGActorSystem.DurabilityInfo
	 * Size -> 0x0008
	 */
	struct FDurabilityInfo
	{
	public:
		int32_t                                                    DurabilityPoints;                                        // 0x0000(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EIGDurabilityChangeType                                    LastChangeType;                                          // 0x0004(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_D1CG[0x3];                                   // 0x0005(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct IGActorSystem.IGPhysActorEffect
	 * Size -> 0x0060
	 */
	struct FIGPhysActorEffect
	{
	public:
		class UClass*                                              ActorClass;                                              // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ActorLifetime;                                           // 0x0008(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_UGDC[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          RelativeSpawnOffset;                                     // 0x0010(0x0030) Edit, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		class FName                                                BoneToSpawnFrom;                                         // 0x0040(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             RelativeImpulse;                                         // 0x0048(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_UEAW[0xC];                                   // 0x0054(0x000C) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct IGActorSystem.IGPickupDurabilityTier
	 * Size -> 0x0020
	 */
	struct FIGPickupDurabilityTier
	{
	public:
		int32_t                                                    DurabilityThreshold;                                     // 0x0000(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_75D5[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class USkeletalMesh*                                       Mesh;                                                    // 0x0008(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class UMaterialInstance*>                           OverrideMaterials;                                       // 0x0010(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct IGActorSystem.IGQuickThrowEntry
	 * Size -> 0x0018
	 */
	struct FIGQuickThrowEntry
	{
	public:
		class UIGHitData*                                          HitData;                                                 // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             QuickThrowForce;                                         // 0x0008(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_X8U2[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct IGActorSystem.IGConsumableBoost
	 * Size -> 0x0014
	 */
	struct FIGConsumableBoost
	{
	public:
		EIGModValueType                                            ValueType;                                               // 0x0000(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_U0HC[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FIGModStackFloat                                    ModValue;                                                // 0x0004(0x000C) Edit, NoDestructor, NativeAccessSpecifierPublic
		float                                                      Duration;                                                // 0x0010(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct IGActorSystem.IGVFXSurfaceCheckData
	 * Size -> 0x00A0
	 */
	struct FIGVFXSurfaceCheckData
	{
	public:
		bool                                                       bRunSurfaceCheck;                                        // 0x0000(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUseCharacterPosition;                                   // 0x0001(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUseCharacterRotation;                                   // 0x0002(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUseCharacterScale;                                      // 0x0003(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaxCastRadius;                                           // 0x0004(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                OriginCastBoneName;                                      // 0x0008(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FIGMulticastData                                    CastData;                                                // 0x0010(0x0090) Edit, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct IGActorSystem.IGGameplayLoadout
	 * Size -> 0x0078
	 */
	struct FIGGameplayLoadout
	{
	public:
		class UIGMoveMontage*                                      SpecialOneMontage;                                       // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EMoveTier                                                  SpecialOneTier;                                          // 0x0008(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_IKHI[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UIGMoveMontage*                                      SpecialTwoMontage;                                       // 0x0010(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EMoveTier                                                  SpecialTwoTier;                                          // 0x0018(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_3IO5[0x7];                                   // 0x0019(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UClass*                                              ItemInHand;                                              // 0x0020(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    HandItemDurabilityOverride;                              // 0x0028(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    PocketLimit;                                             // 0x002C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class UClass*>                                      ItemsInPockets;                                          // 0x0030(0x0010) Edit, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic
		TArray<int32_t>                                            PocketItemDurabilityOverride;                            // 0x0040(0x0010) Edit, EditFixedSize, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<class UIGPerkData*>                                 PerkList;                                                // 0x0050(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic
		bool                                                       bClearPreviousPerks;                                     // 0x0060(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bClearPreviousStats;                                     // 0x0061(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bClearPockets;                                           // 0x0062(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bOverrideFame;                                           // 0x0063(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CorePercent;                                             // 0x0064(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ArmsPercent;                                             // 0x0068(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      LegsPercent;                                             // 0x006C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      FamePercent;                                             // 0x0070(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_IK64[0x4];                                   // 0x0074(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct IGActorSystem.IGMapZoneRow
	 * Size -> 0x0010
	 */
	struct FIGMapZoneRow
	{
	public:
		TArray<unsigned char>                                      MapZoneRow;                                              // 0x0000(0x0010) Edit, ZeroConstructor, EditConst, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct IGActorSystem.IGReplicatedServerStats
	 * Size -> 0x003C
	 */
	struct FIGReplicatedServerStats
	{
	public:
		float                                                      AverageFPS;                                              // 0x0000(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      GameThreadTime;                                          // 0x0004(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      PeakGameThreadTimeLast5Secs;                             // 0x0008(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      BlueprintTime;                                           // 0x000C(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      BlueprintGameTime;                                       // 0x0010(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    PhysicalMemoryUsed;                                      // 0x0014(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    VirtualMemoryUsed;                                       // 0x0018(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    VirtualMemoryFree;                                       // 0x001C(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    PhysicalMemoryFree;                                      // 0x0020(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    NumSaturatedConnections;                                 // 0x0024(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    NumClientConnections;                                    // 0x0028(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    OutBytesPerSecond;                                       // 0x002C(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CurrentHighWaterMarkLastTimeStamp;                       // 0x0030(0x0004) ZeroConstructor, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      RunnerUpGameThreadTime;                                  // 0x0034(0x0004) ZeroConstructor, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      RunnerUpLastTimeStamp;                                   // 0x0038(0x0004) ZeroConstructor, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct IGActorSystem.IGKnockOutData
	 * Size -> 0x0030
	 */
	struct FIGKnockOutData
	{
	public:
		TWeakObjectPtr<class APlayerState>                         AttackingPlayer;                                         // 0x0000(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TWeakObjectPtr<class APlayerState>                         VictimPlayer;                                            // 0x0008(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TWeakObjectPtr<class UIGMoveMontage>                       MoveUsed;                                                // 0x0010(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UClass*                                              WeaponClass;                                             // 0x0018(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EKnockoutType                                              KnockoutType;                                            // 0x0020(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EMoveTier                                                  MoveTier;                                                // 0x0021(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bWasFallDamage;                                          // 0x0022(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bWasKOStreak;                                            // 0x0023(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    NumKOs;                                                  // 0x0024(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bWasVengeance;                                           // 0x0028(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_EZ0Q[0x7];                                   // 0x0029(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct IGActorSystem.TeamInfo
	 * Size -> 0x0048
	 */
	struct FTeamInfo
	{
	public:
		TArray<class FString>                                      ReservedPlayers;                                         // 0x0000(0x0010) ZeroConstructor, RepSkip, NativeAccessSpecifierPublic
		TArray<class AIGPlayerState*>                              Teammates;                                               // 0x0010(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic
		struct FGuid                                               TeamGuid;                                                // 0x0020(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class FString                                              EOSLobbyId;                                              // 0x0030(0x0010) ZeroConstructor, RepSkip, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       bClosedTeam;                                             // 0x0040(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_ZUL4[0x7];                                   // 0x0041(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct IGActorSystem.IGSimplePerformanceCollector
	 * Size -> 0x0060
	 */
	struct FIGSimplePerformanceCollector
	{
	public:
		int32_t                                                    GameExcellentFrames;                                     // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    GameGreatFrames;                                         // 0x0004(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    GameFairFrames;                                          // 0x0008(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    GameBadFrames;                                           // 0x000C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    GameTerribleFrames;                                      // 0x0010(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    GameHitchedFrames;                                       // 0x0014(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    RenderExcellentFrames;                                   // 0x0018(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    RenderGreatFrames;                                       // 0x001C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    RenderFairFrames;                                        // 0x0020(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    RenderBadFrames;                                         // 0x0024(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    RenderTerribleFrames;                                    // 0x0028(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    RenderHitchedFrames;                                     // 0x002C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    GPUExcellentFrames;                                      // 0x0030(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    GPUGreatFrames;                                          // 0x0034(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    GPUFairFrames;                                           // 0x0038(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    GPUBadFrames;                                            // 0x003C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    GPUTerribleFrames;                                       // 0x0040(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    GPUHitchedFrames;                                        // 0x0044(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    TotalNumberOfFrames;                                     // 0x0048(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    PeakPhysicalMemoryUsed;                                  // 0x004C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    PeakVirtualMemoryUsed;                                   // 0x0050(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    ValleyPhysicalMemoryAvailable;                           // 0x0054(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    PeakNumberOfConnections;                                 // 0x0058(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bCollectingForServer;                                    // 0x005C(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bDataToReport;                                           // 0x005D(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_98A6[0x2];                                   // 0x005E(0x0002) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct IGActorSystem.SoundHitData
	 * Size -> 0x0048
	 */
	struct FSoundHitData
	{
	public:
		class USoundBase*                                          SoundToPlay;                                             // 0x0000(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bAttached;                                               // 0x0008(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_HYIC[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                AttachmentPoint;                                         // 0x000C(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      VolumeMultiplier;                                        // 0x0014(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      PitchMultiplier;                                         // 0x0018(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FIGAdditionalParams                                 AdditionalParams;                                        // 0x001C(0x0028) Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_FPY1[0x4];                                   // 0x0044(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct IGActorSystem.EffectHitData
	 * Size -> 0x0048
	 */
	struct FEffectHitData
	{
	public:
		class UParticleSystem*                                     EffectToPlay;                                            // 0x0000(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             LocationOffset;                                          // 0x0008(0x000C) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FRotator                                            RotationOffset;                                          // 0x0014(0x000C) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FVector                                             Scale;                                                   // 0x0020(0x000C) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bAttached;                                               // 0x002C(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_HDS0[0x3];                                   // 0x002D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                AttachmentPoint;                                         // 0x0030(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_560K[0x10];                                  // 0x0038(0x0010) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct IGActorSystem.QueuedAttack
	 * Size -> 0x0080
	 */
	struct FQueuedAttack
	{
	public:
		uint32_t                                                   ID;                                                      // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_WC0A[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UIGAttackNotifyStateBase*                            Notify;                                                  // 0x0008(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUseTimestampToActivate;                                 // 0x0010(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ITCA[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UIGHitData*                                          HitData;                                                 // 0x0018(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class AActor*                                              HitReactor;                                              // 0x0020(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EQueuedAttackStatus                                        Status;                                                  // 0x0028(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EQueuedAttackResult                                        Result;                                                  // 0x0029(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_31WF[0x6];                                   // 0x002A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FIGDamageBlockData                                  BlockData;                                               // 0x0030(0x0028) NoDestructor, NativeAccessSpecifierPublic
		struct FVector_NetQuantize                                 KnockbackDirection;                                      // 0x0058(0x000C) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      FinalDamage;                                             // 0x0064(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EQueuedAttackVictimStatus                                  VictimStatus;                                            // 0x0068(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bPriorityCrush;                                          // 0x0069(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bDidStaminaBreak;                                        // 0x006A(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EIGUnpocketStatus                                          UnpocketStatus;                                          // 0x006B(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EIGClashPriorityTier                                       AttackerClashPriority;                                   // 0x006C(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EIGClashPriorityTier                                       VictimClashPriority;                                     // 0x006D(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_3CL2[0x2];                                   // 0x006E(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      ActivationTimestamp;                                     // 0x0070(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ProcessedTimestamp;                                      // 0x0074(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bPendingDelete;                                          // 0x0078(0x0001) ZeroConstructor, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bLocalClientHasProcessed;                                // 0x0079(0x0001) ZeroConstructor, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_7HTY[0x6];                                   // 0x007A(0x0006) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct IGActorSystem.IGLootSpawnOptions
	 * Size -> 0x0004
	 */
	struct FIGLootSpawnOptions
	{
	public:
		int32_t                                                    OverrideStartingDurability;                              // 0x0000(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct IGActorSystem.BounceOverrideSettings
	 * Size -> 0x0008
	 */
	struct FBounceOverrideSettings
	{
	public:
		float                                                      Bounciness;                                              // 0x0000(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Friction;                                                // 0x0004(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct IGActorSystem.IGInventoryItem
	 * Size -> 0x0030
	 */
	struct FIGInventoryItem
	{
	public:
		class UClass*                                              ItemClass;                                               // 0x0000(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    CurrentDurability;                                       // 0x0008(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EIGItemType                                                ItemType;                                                // 0x000C(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_9HZN[0x3];                                   // 0x000D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FGuid                                               ItemId;                                                  // 0x0010(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UObject*                                             ObjectParam;                                             // 0x0020(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    IntParam;                                                // 0x0028(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_1NFD[0x4];                                   // 0x002C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct IGActorSystem.IGStaticInteractableInstanceHitData
	 * Size -> 0x0014
	 */
	struct FIGStaticInteractableInstanceHitData
	{
	public:
		float                                                      FallDistance;                                            // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EMoveTier                                                  MoveTier;                                                // 0x0004(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_U44X[0xF];                                   // 0x0005(0x000F) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct IGActorSystem.IGLocalVFXPoolData
	 * Size -> 0x0010
	 */
	struct FIGLocalVFXPoolData
	{
	public:
		class UClass*                                              ActorClass;                                              // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FActorPoolSettings                                  PoolSettings;                                            // 0x0008(0x0008) Edit, NoDestructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct IGActorSystem.IGLootGroupingEntry
	 * Size -> 0x0010
	 */
	struct FIGLootGroupingEntry
	{
	public:
		class UClass*                                              LootItem;                                                // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    DefaultDistribution;                                     // 0x0008(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FIGLootSpawnOptions                                 SpawnOptions;                                            // 0x000C(0x0004) Edit, NoDestructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct IGActorSystem.IGSpeicalMoveDistributionEntry
	 * Size -> 0x0010
	 */
	struct FIGSpeicalMoveDistributionEntry
	{
	public:
		class UIGMoveMontage*                                      SpecialMoveBase;                                         // 0x0000(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EMoveTier                                                  SpecialMoveTier;                                         // 0x0008(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_YYOM[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    DefaultDistribution;                                     // 0x000C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct IGActorSystem.IGLootDistributionEntry
	 * Size -> 0x0018
	 */
	struct FIGLootDistributionEntry
	{
	public:
		class UIGLootGrouping*                                     LootGrouping;                                            // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UClass*                                              LootItem;                                                // 0x0008(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    DefaultDistribution;                                     // 0x0010(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FIGLootSpawnOptions                                 SpawnOptions;                                            // 0x0014(0x0004) Edit, NoDestructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct IGActorSystem.IGDisperseLootChanceEntry
	 * Size -> 0x0030
	 */
	struct FIGDisperseLootChanceEntry
	{
	public:
		TArray<class UIGLootProfileBase*>                          LootProfiles;                                            // 0x0000(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		class USkeletalMesh*                                       RepresentationMesh;                                      // 0x0010(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector2D                                           SpawnItemVerticalSpeed;                                  // 0x0018(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector2D                                           SpawnItemHorizontalSpeed;                                // 0x0020(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    DefaultDistribution;                                     // 0x0028(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_C7J8[0x4];                                   // 0x002C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct IGActorSystem.IGCollectibleDistributionEntry
	 * Size -> 0x0010
	 */
	struct FIGCollectibleDistributionEntry
	{
	public:
		class UClass*                                              Collectible;                                             // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    DefaultDistribution;                                     // 0x0008(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_BEXY[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct IGActorSystem.IGMatchTimeLootSelectionEntry
	 * Size -> 0x0010
	 */
	struct FIGMatchTimeLootSelectionEntry
	{
	public:
		int32_t                                                    MinRewards;                                              // 0x0000(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    MaxRewards;                                              // 0x0004(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UIGLootProfile*                                      LootProfile;                                             // 0x0008(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct IGActorSystem.IGMatchTimeLootCollection
	 * Size -> 0x0018
	 */
	struct FIGMatchTimeLootCollection
	{
	public:
		int32_t                                                    SpawnStartTime;                                          // 0x0000(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_U7HH[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FIGMatchTimeLootSelectionEntry>              LootProfiles;                                            // 0x0008(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct IGActorSystem.IGLootProbabilityEntry
	 * Size -> 0x000C
	 */
	struct FIGLootProbabilityEntry
	{
	public:
		struct FIntPoint                                           PlayerSizeRange;                                         // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Modifier;                                                // 0x0008(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct IGActorSystem.IGSlotAnimationTrackList
	 * Size -> 0x0010
	 */
	struct FIGSlotAnimationTrackList
	{
	public:
		TArray<struct FSlotAnimationTrack>                         AnimTracks;                                              // 0x0000(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct IGActorSystem.IGTransitionOption
	 * Size -> 0x0018
	 */
	struct FIGTransitionOption
	{
	public:
		EMoveTrack                                                 Input;                                                   // 0x0000(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EInputStateType                                            InputState;                                              // 0x0001(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ECharacterLocomotionState                                  LocationRequirement;                                     // 0x0002(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_G9YW[0x1];                                   // 0x0003(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      TimeToTransitionStart;                                   // 0x0004(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      TimeToTransitionEnd;                                     // 0x0008(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_21YQ[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UIGMoveMontage*                                      DestMontage;                                             // 0x0010(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct IGActorSystem.IGSimpleMoveMontageData
	 * Size -> 0x0030
	 */
	struct FIGSimpleMoveMontageData
	{
	public:
		TArray<class UIGMoveMontage*>                              TieredImplicitTransitionMontages;                        // 0x0000(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FIGTransitionOption>                         CachedTransitionOptions;                                 // 0x0010(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic
		struct FVector2D                                           AttackRange;                                             // 0x0020(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bHitsOTG;                                                // 0x0028(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bHasStaminaTransition;                                   // 0x0029(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_T0E2[0x6];                                   // 0x002A(0x0006) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct IGActorSystem.IGSpecialMoveRepData
	 * Size -> 0x0010
	 */
	struct FIGSpecialMoveRepData
	{
	public:
		class UIGMoveMontage*                                      Move;                                                    // 0x0000(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EMoveTier                                                  Tier;                                                    // 0x0008(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_1A14[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct IGActorSystem.IGMoveStackParams
	 * Size -> 0x000C
	 */
	struct FIGMoveStackParams
	{
	public:
		unsigned char                                              UnknownData_UMU4[0xC];                                   // 0x0000(0x000C) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct IGActorSystem.IGMoveStack
	 * Size -> 0x0020
	 */
	struct FIGMoveStack
	{
	public:
		unsigned char                                              MoveDataRef[0x10];                                       // 0x0000(0x0010) UNKNOWN PROPERTY: InterfaceProperty
		int32_t                                                    StackPriority;                                           // 0x0010(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FIGMoveStackParams                                  Params;                                                  // 0x0014(0x000C) NoDestructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct IGActorSystem.IGInputBufferEntry
	 * Size -> 0x0014
	 */
	struct FIGInputBufferEntry
	{
	public:
		unsigned char                                              UnknownData_8TK7[0x14];                                  // 0x0000(0x0014) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct IGActorSystem.IGGenTransitionEvent
	 * Size -> 0x0010
	 */
	struct FIGGenTransitionEvent
	{
	public:
		class UIGGenericInputEvent*                                EventRef;                                                // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    StartTimeMS;                                             // 0x0008(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    AdditionalDuration;                                      // 0x000C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct IGActorSystem.IGGameSyncInfo
	 * Size -> 0x0014
	 */
	struct FIGGameSyncInfo
	{
	public:
		TWeakObjectPtr<class UIGMoveMontage>                       MontageAtStartOfFrame;                                   // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EMoveTier                                                  MoveTierAtStartOfFrame;                                  // 0x0008(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_WT22[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      PositionAtStartOfFrame;                                  // 0x000C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      PositionAtEndOfFrame;                                    // 0x0010(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct IGActorSystem.IGMoveMontageDriver
	 * Size -> 0x0198
	 */
	struct FIGMoveMontageDriver
	{
	public:
		unsigned char                                              UnknownData_LIJL[0x8];                                   // 0x0000(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnMoveMontageStarted;                                    // 0x0008(0x0010) ZeroConstructor, InstancedReference, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnMoveMontageEnded;                                      // 0x0018(0x0010) ZeroConstructor, InstancedReference, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnObjectStartInteractionComplete;                        // 0x0028(0x0010) ZeroConstructor, InstancedReference, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnObjectUseComplete;                                     // 0x0038(0x0010) ZeroConstructor, InstancedReference, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnObjectStopInteractionComplete;                         // 0x0048(0x0010) ZeroConstructor, InstancedReference, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnObjectStashComplete;                                   // 0x0058(0x0010) ZeroConstructor, InstancedReference, NativeAccessSpecifierPublic
		class AActor*                                              TargetActor;                                             // 0x0068(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class AActor*                                              TrackedTargetActor;                                      // 0x0070(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class FName                                                MoveName;                                                // 0x0078(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		EMoveTier                                                  MoveTier;                                                // 0x0080(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		EMoveTier                                                  PreviousMoveTier;                                        // 0x0081(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bCanClimbFromMontage;                                    // 0x0082(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bCanSwingFromMontage;                                    // 0x0083(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_VY28[0x4];                                   // 0x0084(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              AllowedActions[0x50];                                    // 0x0088(0x0050) UNKNOWN PROPERTY: SetProperty
		bool                                                       bAllowMovementOverride;                                  // 0x00D8(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bClearAllGameplayNotifies;                               // 0x00D9(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bCorrectingMoveMontage;                                  // 0x00DA(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_35AV[0x95];                                  // 0x00DB(0x0095) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		bool                                                       bOverrideRotationOnlyInput;                              // 0x0170(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_256B[0x3];                                   // 0x0171(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FRotator                                            OverrideRotationRate;                                    // 0x0174(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected
		struct FIGGameSyncInfo                                     GameSyncInfo;                                            // 0x0180(0x0014) NoDestructor, Protected, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_2SPP[0x4];                                   // 0x0194(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct IGActorSystem.IGTransitionConditions
	 * Size -> 0x0010 (FullSize[0x0090] - InheritedSize[0x0080])
	 */
	struct FIGTransitionConditions : public FIGStateTransitionConditions
	{
	public:
		class UIGMoveMontage*                                      MoveToExecute;                                           // 0x0080(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      StaminaCostOverride;                                     // 0x0088(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_89FR[0x4];                                   // 0x008C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct IGActorSystem.IGTransitionContainer
	 * Size -> 0x0010
	 */
	struct FIGTransitionContainer
	{
	public:
		TArray<struct FIGTransitionConditions>                     Conditions;                                              // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct IGActorSystem.IGBotComboString
	 * Size -> 0x0018
	 */
	struct FIGBotComboString
	{
	public:
		TArray<struct FIGTransitionOption>                         String;                                                  // 0x0000(0x0010) BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		bool                                                       bIsVicious;                                              // 0x0010(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_1D4G[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct IGActorSystem.IGCombatContextCondition
	 * Size -> 0x00A0
	 */
	struct FIGCombatContextCondition
	{
	public:
		unsigned char                                              MoveMontages[0x50];                                      // 0x0000(0x0050) UNKNOWN PROPERTY: SetProperty
		EIGMoveType                                                MoveType;                                                // 0x0050(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bMustNotHoldItem;                                        // 0x0051(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EIGWeaponType                                              ItemType;                                                // 0x0052(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_NNZZ[0x5];                                   // 0x0053(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FGameplayTagQuery                                   ItemTags;                                                // 0x0058(0x0048) Edit, DisableEditOnInstance, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct IGActorSystem.IGCombatContextConditionsContainer
	 * Size -> 0x0010
	 */
	struct FIGCombatContextConditionsContainer
	{
	public:
		TArray<struct FIGCombatContextCondition>                   Conditions;                                              // 0x0000(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct IGActorSystem.SimultaneousPressConfiguration
	 * Size -> 0x0020
	 */
	struct FSimultaneousPressConfiguration
	{
	public:
		EMoveTrack                                                 ResultingMoveTrack;                                      // 0x0000(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_4QSF[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class FName>                                        CombinationActionNames;                                  // 0x0008(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		float                                                      TimePressedLeniency;                                     // 0x0018(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ESimultaneousInputDevice                                   InputType;                                               // 0x001C(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_1XXI[0x3];                                   // 0x001D(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct IGActorSystem.IGClimbingIKData
	 * Size -> 0x008C
	 */
	struct FIGClimbingIKData
	{
	public:
		struct FVector                                             LeftHandEffectorLocation;                                // 0x0000(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             RightHandEffectorLocation;                               // 0x000C(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             LeftFootEffectorLocation;                                // 0x0018(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             RightFootEffectorLocation;                               // 0x0024(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             HipLocation;                                             // 0x0030(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      LeftHandAlpha;                                           // 0x003C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      RightHandAlpha;                                          // 0x0040(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      LeftFootAlpha;                                           // 0x0044(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      RightFootAlpha;                                          // 0x0048(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      HipAlpha;                                                // 0x004C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             LeftHandPoleVectorLocation;                              // 0x0050(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             RightHandPoleVectorLocation;                             // 0x005C(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             LeftFootPoleVectorLocation;                              // 0x0068(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             RightFootPoleVectorLocation;                             // 0x0074(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FRotator                                            HipRotationDelta;                                        // 0x0080(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct IGActorSystem.IGFlexyScaleHolder
	 * Size -> 0x0060
	 */
	struct FIGFlexyScaleHolder
	{
	public:
		struct FVector                                             Scale01;                                                 // 0x0000(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             Scale02;                                                 // 0x000C(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             Scale03;                                                 // 0x0018(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             Scale04;                                                 // 0x0024(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             Scale05;                                                 // 0x0030(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             Scale06;                                                 // 0x003C(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             Scale07;                                                 // 0x0048(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             Scale08;                                                 // 0x0054(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct IGActorSystem.IGFootPlacement
	 * Size -> 0x0064
	 */
	struct FIGFootPlacement
	{
	public:
		bool                                                       bEnableLegIK;                                            // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_COWO[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             HipLocationOffset;                                       // 0x0004(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      HipAlpha;                                                // 0x0010(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             LeftFootEffectorLocation;                                // 0x0014(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             LeftJointTarget;                                         // 0x0020(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      LeftFootAlpha;                                           // 0x002C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FRotator                                            LeftFootRotation;                                        // 0x0030(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FVector                                             RightFootEffectorLocation;                               // 0x003C(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             RightJointTarget;                                        // 0x0048(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      RightFootAlpha;                                          // 0x0054(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FRotator                                            RightFootRotation;                                       // 0x0058(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct IGActorSystem.anMailInfo
	 * Size -> 0x0018
	 */
	struct FanMailInfo
	{
	public:
		class UIGDataTable*                                        LevelDefinition;                                         // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UIGDataTable*                                        ThemeData;                                               // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UIGDataTable*                                        TextData;                                                // 0x0010(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct IGActorSystem.IGBattlePassSeasonData
	 * Size -> 0x0010
	 */
	struct FIGBattlePassSeasonData
	{
	public:
		class UIGDataTable*                                        BattlePassSeasonTiersDataTable;                          // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UIGWalletAsset*                                      BattlePassSeasonWalletAsset;                             // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct IGActorSystem.RepProgress
	 * Size -> 0x0024
	 */
	struct FRepProgress
	{
	public:
		bool                                                       IsCompleted;                                             // 0x0000(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_VDMZ[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                StatName;                                                // 0x0004(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                RepName;                                                 // 0x000C(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    ProgressValue;                                           // 0x0014(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    NotifyEveryNth;                                          // 0x0018(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    NotifyCounter;                                           // 0x001C(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    DeltaSinceLastRead;                                      // 0x0020(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct IGActorSystem.RumbleInfo
	 * Size -> 0x0028
	 */
	struct FRumbleInfo
	{
	public:
		class UForceFeedbackEffect*                                AttackHitEffect;                                         // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UForceFeedbackEffect*                                AttackBlockedEffect;                                     // 0x0008(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                Tag;                                                     // 0x0010(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bLooping;                                                // 0x0018(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIgnoreTimeDilation;                                     // 0x0019(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bPlayWhilePaused;                                        // 0x001A(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_M79U[0x1];                                   // 0x001B(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      LowerBound;                                              // 0x001C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      UpperBound;                                              // 0x0020(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_IGPX[0x4];                                   // 0x0024(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct IGActorSystem.IGCameraZoomModeInfo
	 * Size -> 0x0068
	 */
	struct FIGCameraZoomModeInfo
	{
	public:
		bool                                                       bShouldOverrideArmLength;                                // 0x0000(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_QQOC[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      ArmLength;                                               // 0x0004(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bShouldOverrideZoomSpeed;                                // 0x0008(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_JQYY[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      ZoomSpeed;                                               // 0x000C(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bOnlyZoomOut;                                            // 0x0010(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_UH43[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TMap<EIGCameraZoomState, float>                            ZoomSpeedOverrides;                                      // 0x0018(0x0050) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct IGActorSystem.IGRandomRewardCollectibleInfo
	 * Size -> 0x0018
	 */
	struct FIGRandomRewardCollectibleInfo
	{
	public:
		float                                                      RewardValue;                                             // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_07UL[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class USceneComponent*                                     RepresentationComponent;                                 // 0x0008(0x0008) Edit, BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Distribution;                                            // 0x0010(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_M8P7[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct IGActorSystem.IGStat
	 * Size -> 0x000C
	 */
	struct FIGStat
	{
	public:
		class FName                                                Name;                                                    // 0x0000(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Value;                                                   // 0x0008(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct IGActorSystem.IGPerkBasedPlayParticleEffect
	 * Size -> 0x00A0
	 */
	struct FIGPerkBasedPlayParticleEffect
	{
	public:
		class UParticleSystem*                                     PSTemplate;                                              // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TMap<class UPhysicalMaterial*, class UParticleSystem*>     OverridePS;                                              // 0x0008(0x0050) Edit, NativeAccessSpecifierPublic
		bool                                                       bUseMainEffectProperties;                                // 0x0058(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bEnableCastShadow;                                       // 0x0059(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIsPlayerMesh;                                           // 0x005A(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_FZ3O[0x1];                                   // 0x005B(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             LocationOffset;                                          // 0x005C(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FRotator                                            RotationOffset;                                          // 0x0068(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FVector                                             Scale;                                                   // 0x0074(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       Attached : 1;                                            // 0x0080(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_HZPN[0x3];                                   // 0x0081(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                SocketName;                                              // 0x0084(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_4GZS[0x14];                                  // 0x008C(0x0014) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct IGActorSystem.IGPerkBasedTimedParticleEffect
	 * Size -> 0x0030
	 */
	struct FIGPerkBasedTimedParticleEffect
	{
	public:
		class UParticleSystem*                                     PSTemplate;                                              // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUseMainEffectProperties;                                // 0x0008(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bEnableCastShadow;                                       // 0x0009(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIsPlayerMesh;                                           // 0x000A(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_X5ZG[0x1];                                   // 0x000B(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             LocationOffset;                                          // 0x000C(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FRotator                                            RotationOffset;                                          // 0x0018(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		class FName                                                SocketName;                                              // 0x0024(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bDestroyAtEnd;                                           // 0x002C(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_2OPA[0x3];                                   // 0x002D(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct IGActorSystem.IGItemDisplayInfo
	 * Size -> 0x0078
	 */
	struct FIGItemDisplayInfo
	{
	public:
		class FText                                                Name;                                                    // 0x0000(0x0018) BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		class FName                                                LookupName;                                              // 0x0018(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    DurabilityTier;                                          // 0x0020(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_M9DM[0x4];                                   // 0x0024(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class FText>                                        DescriptionLines;                                        // 0x0028(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<EIGSpecialMoveEffect>                               SpecialMoveEffectLines;                                  // 0x0038(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic
		class FText                                                PromptText;                                              // 0x0048(0x0018) BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		int32_t                                                    RemainingUses;                                           // 0x0060(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    OriginalUses;                                            // 0x0064(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIsSlotEmpty;                                            // 0x0068(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIsItemStashable;                                        // 0x0069(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EMoveTier                                                  ItemTier;                                                // 0x006A(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EIGItemType                                                ItemType;                                                // 0x006B(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_OZLN[0x4];                                   // 0x006C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UObject*                                             ObjectParam;                                             // 0x0070(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct IGActorSystem.IGPerkHUDInfo
	 * Size -> 0x0048
	 */
	struct FIGPerkHUDInfo
	{
	public:
		class FName                                                PerkName;                                                // 0x0000(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                PerkRowName;                                             // 0x0008(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FText                                                PerkNameText;                                            // 0x0010(0x0018) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		TArray<class FText>                                        PerkDescriptions;                                        // 0x0028(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic
		int32_t                                                    ExpirationTime;                                          // 0x0038(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    NumStacks;                                               // 0x003C(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    NumActivations;                                          // 0x0040(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       ForceUseStatusUI;                                        // 0x0044(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_OAJ2[0x3];                                   // 0x0045(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct IGActorSystem.MoveMontageCorrection
	 * Size -> 0x00F8
	 */
	struct FMoveMontageCorrection
	{
	public:
		bool                                                       bActiveMontage;                                          // 0x0000(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_U1SM[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UIGMoveMontage*                                      MoveMontage;                                             // 0x0008(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EGuidType                                                  LastEventExecutionType;                                  // 0x0010(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_6IV9[0x3];                                   // 0x0011(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FRotator                                            ActorFacingDir;                                          // 0x0014(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FVector                                             ServerVel;                                               // 0x0020(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MontagePosition;                                         // 0x002C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      PreviousMontagePosition;                                 // 0x0030(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      HitStunDuration;                                         // 0x0034(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      PushBackDuration;                                        // 0x0038(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             PushBack;                                                // 0x003C(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      PushBackFriction;                                        // 0x0048(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             PushBackDirection;                                       // 0x004C(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UIGMoveMontage*                                      QueuedMoveMontage;                                       // 0x0058(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FTargetingInfo                                      TargetingInfo;                                           // 0x0060(0x0020) NoDestructor, NativeAccessSpecifierPublic
		float                                                      Stamina;                                                 // 0x0080(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      PendingStaminaModification;                              // 0x0084(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      StaminaRegenTimer;                                       // 0x0088(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_RPD5[0x4];                                   // 0x008C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FIGMeterDeltaOverTime>                       StaminaDeltaMeter;                                       // 0x0090(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		float                                                      ClimbingStaminaGraceTimer;                               // 0x00A0(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      HitStopDuration;                                         // 0x00A4(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    LaunchesInMontage;                                       // 0x00A8(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             TrajectoryLocation;                                      // 0x00AC(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             TrajectoryVelocity;                                      // 0x00B8(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Fame;                                                    // 0x00C4(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIsSuperstarModeActive;                                  // 0x00C8(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EAttackCancelStatus                                        AttackCancelStatus;                                      // 0x00C9(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_1I2T[0x6];                                   // 0x00CA(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AIGCharacter*                                        AttachedCharacter;                                       // 0x00D0(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             CachedSwingPoint;                                        // 0x00D8(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      SwingSpeed;                                              // 0x00E4(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector_NetQuantizeNormal                           CompressedRotation;                                      // 0x00E8(0x000C) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_32SD[0x4];                                   // 0x00F4(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct IGActorSystem.ServerMoveValidationParams
	 * Size -> 0x0030
	 */
	struct FServerMoveValidationParams
	{
	public:
		class UIGMoveMontage*                                      MoveMontage;                                             // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MontagePosition;                                         // 0x0008(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      HitStopDuration;                                         // 0x000C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Stamina;                                                 // 0x0010(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Fame;                                                    // 0x0014(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIsSuperstarModeActive;                                  // 0x0018(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_7O7V[0x7];                                   // 0x0019(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UObject*                                             TargetActor;                                             // 0x0020(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class AActor*                                              AttachedCharacter;                                       // 0x0028(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct IGActorSystem.ServerMoveExecutionParams
	 * Size -> 0x0080
	 */
	struct FServerMoveExecutionParams
	{
	public:
		bool                                                       bHasMontageInfo;                                         // 0x0000(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ICNM[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FExecuteMoveInfo                                    MontageInfo;                                             // 0x0008(0x0048) NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bHasIntendedTarget;                                      // 0x0050(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_XM4P[0x3];                                   // 0x0051(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TWeakObjectPtr<class UObject>                              IntendedTarget;                                          // 0x0054(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bHasHomingPosition;                                      // 0x005C(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_C6U0[0x3];                                   // 0x005D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             HomingPosition;                                          // 0x0060(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bHasRotationTarget;                                      // 0x006C(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_FT80[0x3];                                   // 0x006D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             RotationTarget;                                          // 0x0070(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_XKE5[0x4];                                   // 0x007C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct IGActorSystem.ServerMoveExecutionParamsMsg
	 * Size -> 0x0188
	 */
	struct FServerMoveExecutionParamsMsg
	{
	public:
		unsigned char                                              MontageTypeMask;                                         // 0x0000(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_H2G2[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FServerMoveExecutionParams                          NewExecutionParams;                                      // 0x0008(0x0080) NoDestructor, NativeAccessSpecifierPublic
		struct FServerMoveExecutionParams                          PendingExecutionParams;                                  // 0x0088(0x0080) NoDestructor, NativeAccessSpecifierPublic
		struct FServerMoveExecutionParams                          OldExecutionParams;                                      // 0x0108(0x0080) NoDestructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct IGActorSystem.RepReward
	 * Size -> 0x0050
	 */
	struct FRepReward
	{
	public:
		ERepRewardType                                             Type;                                                    // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_0JPT[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              Value;                                                   // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FText                                                TextFrom;                                                // 0x0018(0x0018) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		class FText                                                TextBody;                                                // 0x0030(0x0018) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		class FName                                                Theme;                                                   // 0x0048(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct IGActorSystem.RepUIData
	 * Size -> 0x0068
	 */
	struct FRepUIData
	{
	public:
		class FText                                                DisplayName;                                             // 0x0000(0x0018) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		class FName                                                RepName;                                                 // 0x0018(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ERepType                                                   RepType;                                                 // 0x0020(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_VP6J[0x7];                                   // 0x0021(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FText                                                Description;                                             // 0x0028(0x0018) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		int32_t                                                    CurrentProgress;                                         // 0x0040(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    TargetGoal;                                              // 0x0044(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FRepReward>                                  Rewards;                                                 // 0x0048(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic
		ERepDifficulty                                             Difficulty;                                              // 0x0058(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIsComplete;                                             // 0x0059(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_P4SO[0x2];                                   // 0x005A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                GroupingDataTableRowName;                                // 0x005C(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_B2RN[0x4];                                   // 0x0064(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct IGActorSystem.IGTimeOfDay
	 * Size -> 0x0008
	 */
	struct FIGTimeOfDay
	{
	public:
		int32_t                                                    Hour;                                                    // 0x0000(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Minute;                                                  // 0x0004(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct IGActorSystem.IGDate
	 * Size -> 0x0014
	 */
	struct FIGDate
	{
	public:
		int32_t                                                    Year;                                                    // 0x0000(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Month;                                                   // 0x0004(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Day;                                                     // 0x0008(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FIGTimeOfDay                                        Time;                                                    // 0x000C(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct IGActorSystem.IGDateRange
	 * Size -> 0x0028
	 */
	struct FIGDateRange
	{
	public:
		struct FIGDate                                             StartDate;                                               // 0x0000(0x0014) Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic
		struct FIGDate                                             EndDate;                                                 // 0x0014(0x0014) Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct IGActorSystem.RepGrouping
	 * Size -> 0x0060 (FullSize[0x0068] - InheritedSize[0x0008])
	 */
	struct FRepGrouping : public FTableRowBase
	{
	public:
		class FName                                                GroupingName;                                            // 0x0008(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FText                                                DisplayName;                                             // 0x0010(0x0018) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		class FText                                                Description;                                             // 0x0028(0x0018) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		struct FIGDateRange                                        AvailableDateRange;                                      // 0x0040(0x0028) Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct IGActorSystem.IGTextureAccessoryBodyEntry
	 * Size -> 0x0080
	 */
	struct FIGTextureAccessoryBodyEntry
	{
	public:
		struct FSoftObjectPath                                     CMTex;                                                   // 0x0000(0x0018) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FSoftObjectPath                                     AlphaTex;                                                // 0x0018(0x0018) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FSoftObjectPath                                     PCKTex;                                                  // 0x0030(0x0018) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FSoftObjectPath                                     NormalMapTexture;                                        // 0x0048(0x0018) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FSoftObjectPath                                     MaterialInstanceConstant;                                // 0x0060(0x0018) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EIGBodyType                                                BodyType;                                                // 0x0078(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_9WQI[0x7];                                   // 0x0079(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct IGActorSystem.IGTextureAccessoryCommon
	 * Size -> 0x0048
	 */
	struct FIGTextureAccessoryCommon
	{
	public:
		class FText                                                DisplayName;                                             // 0x0000(0x0018) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		EIGTextureAccessoryType                                    TextureAccessoryType;                                    // 0x0018(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_PJUD[0x7];                                   // 0x0019(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FIGTextureAccessoryBodyEntry>                BodyEntries;                                             // 0x0020(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		bool                                                       UsingCMTexture;                                          // 0x0030(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       UsingCustomPCK;                                          // 0x0031(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       UsingPCKTexture;                                         // 0x0032(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       UsingNormalMapTexture;                                   // 0x0033(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FGuid                                               GroupId;                                                 // 0x0034(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_SJAE[0x4];                                   // 0x0044(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct IGActorSystem.IGTextureAccessoryVariation
	 * Size -> 0x00A8
	 */
	struct FIGTextureAccessoryVariation
	{
	public:
		bool                                                       bAssetReadyForGame;                                      // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_MNQG[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      Roughness;                                               // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Metalness;                                               // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FColor                                              Color;                                                   // 0x000C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FSoftObjectPath                                     Icon;                                                    // 0x0010(0x0018) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FLinearColor                                        IconColor;                                               // 0x0028(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FIGWalletExportableProperties                       ExportableProperties;                                    // 0x0038(0x0060) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		class FName                                                AccessoryId;                                             // 0x0098(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bEnableCustomMaterialFeatures;                           // 0x00A0(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_XRUH[0x7];                                   // 0x00A1(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct IGActorSystem.IGTextureAccessorySet
	 * Size -> 0x00F0
	 */
	struct FIGTextureAccessorySet
	{
	public:
		struct FIGTextureAccessoryCommon                           AccessorySettings;                                       // 0x0000(0x0048) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FIGTextureAccessoryVariation                        ColorSelection;                                          // 0x0048(0x00A8) Edit, BlueprintVisible, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct IGActorSystem.IGMaterialSlot
	 * Size -> 0x0010
	 */
	struct FIGMaterialSlot
	{
	public:
		unsigned char                                              MatList[0x10];                                           // 0x0000(0x0010) UNKNOWN PROPERTY: ArrayProperty
	};

	/**
	 * ScriptStruct IGActorSystem.IGTitleCardBase
	 * Size -> 0x00C0
	 */
	struct FIGTitleCardBase
	{
	public:
		class FText                                                Name;                                                    // 0x0000(0x0018) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		unsigned char                                              Icon[0x28];                                              // 0x0018(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		class FText                                                UnlockDescription;                                       // 0x0040(0x0018) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FIGWalletExportableProperties                       ExportableProperties;                                    // 0x0058(0x0060) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		ESheikTitleCardDataType                                    DataType;                                                // 0x00B8(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ESheikTitleCardUnlockCriteria                              UnlockCriteria;                                          // 0x00B9(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EIGTitleCardPlatform                                       Platform;                                                // 0x00BA(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       HiddenUntilUnlocked;                                     // 0x00BB(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_9FRS[0x4];                                   // 0x00BC(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct IGActorSystem.IGTitleCardPlayerTitle
	 * Size -> 0x0040 (FullSize[0x0100] - InheritedSize[0x00C0])
	 */
	struct FIGTitleCardPlayerTitle : public FIGTitleCardBase
	{
	public:
		struct FLinearColor                                        TitleColor;                                              // 0x00C0(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              MaterialOverride[0x28];                                  // 0x00D0(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		bool                                                       bIsDefault;                                              // 0x00F8(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_0P71[0x7];                                   // 0x00F9(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct IGActorSystem.IGVariableImageData
	 * Size -> 0x0058
	 */
	struct FIGVariableImageData
	{
	public:
		ESheikImageDataType                                        ImageType;                                               // 0x0000(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_19T3[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              Texture[0x28];                                           // 0x0008(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		unsigned char                                              Material[0x28];                                          // 0x0030(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
	};

	/**
	 * ScriptStruct IGActorSystem.IGTitleCardPlayerPose
	 * Size -> 0x0090 (FullSize[0x0150] - InheritedSize[0x00C0])
	 */
	struct FIGTitleCardPlayerPose : public FIGTitleCardBase
	{
	public:
		unsigned char                                              PoseFullAnimMontage[0x28];                               // 0x00C0(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		float                                                      PoseTime;                                                // 0x00E8(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_3B9D[0x4];                                   // 0x00EC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FIGVariableImageData                                PoseOverlay;                                             // 0x00F0(0x0058) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		bool                                                       bIsDefault;                                              // 0x0148(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_1T12[0x7];                                   // 0x0149(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct IGActorSystem.IGTitleCardBackground
	 * Size -> 0x0060 (FullSize[0x0120] - InheritedSize[0x00C0])
	 */
	struct FIGTitleCardBackground : public FIGTitleCardBase
	{
	public:
		struct FIGVariableImageData                                Background;                                              // 0x00C0(0x0058) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		bool                                                       bIsDefault;                                              // 0x0118(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_XS2T[0x7];                                   // 0x0119(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct IGActorSystem.IGTitleCardBorder
	 * Size -> 0x0060 (FullSize[0x0120] - InheritedSize[0x00C0])
	 */
	struct FIGTitleCardBorder : public FIGTitleCardBase
	{
	public:
		struct FIGVariableImageData                                Border;                                                  // 0x00C0(0x0058) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		bool                                                       bIsDefault;                                              // 0x0118(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_XSPA[0x7];                                   // 0x0119(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct IGActorSystem.IGTitleCardMedal
	 * Size -> 0x0060 (FullSize[0x0120] - InheritedSize[0x00C0])
	 */
	struct FIGTitleCardMedal : public FIGTitleCardBase
	{
	public:
		struct FIGVariableImageData                                MedalImage;                                              // 0x00C0(0x0058) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		bool                                                       bIsDefault;                                              // 0x0118(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_SMLP[0x7];                                   // 0x0119(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct IGActorSystem.IGTitleCardStat
	 * Size -> 0x0078 (FullSize[0x0138] - InheritedSize[0x00C0])
	 */
	struct FIGTitleCardStat : public FIGTitleCardBase
	{
	public:
		EIGTitleCardStatType                                       StatType;                                                // 0x00C0(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_BU5H[0x7];                                   // 0x00C1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              StatName;                                                // 0x00C8(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FIGVariableImageData                                BackgroundImage;                                         // 0x00D8(0x0058) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		EIGSeasonIdentifier                                        StatSeason;                                              // 0x0130(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIsDefault;                                              // 0x0131(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bHiddenUntilProgressed;                                  // 0x0132(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_UHG1[0x5];                                   // 0x0133(0x0005) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct IGActorSystem.TitleCardLoadout
	 * Size -> 0x04B0
	 */
	struct FTitleCardLoadout
	{
	public:
		struct FIGTitleCardPlayerTitle                             Title;                                                   // 0x0000(0x0100) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		struct FIGTitleCardPlayerPose                              Pose;                                                    // 0x0100(0x0150) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		struct FIGTitleCardBackground                              Background;                                              // 0x0250(0x0120) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		struct FIGTitleCardBorder                                  Border;                                                  // 0x0370(0x0120) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		TArray<struct FIGTitleCardMedal>                           Medals;                                                  // 0x0490(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FIGTitleCardStat>                            Stats;                                                   // 0x04A0(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct IGActorSystem.EnemyStatValues
	 * Size -> 0x0010
	 */
	struct FEnemyStatValues
	{
	public:
		TArray<float>                                              EnemyStatValues;                                         // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct IGActorSystem.IGAccessoryInfoBase
	 * Size -> 0x0040 (FullSize[0x0048] - InheritedSize[0x0008])
	 */
	struct FIGAccessoryInfoBase : public FTableRowBase
	{
	public:
		class FName                                                WalletId;                                                // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EAccessoryItemRarity                                       RarityTier;                                              // 0x0010(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_UCD7[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FText                                                Description;                                             // 0x0018(0x0018) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		class FText                                                LongDescription;                                         // 0x0030(0x0018) Edit, BlueprintVisible, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct IGActorSystem.IGHeadMaterialGroup
	 * Size -> 0x0030
	 */
	struct FIGHeadMaterialGroup
	{
	public:
		int32_t                                                    HeadShapeType;                                           // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_PG3K[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              FaceMIC[0x28];                                           // 0x0008(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
	};

	/**
	 * ScriptStruct IGActorSystem.IGSkinGroup
	 * Size -> 0x0038
	 */
	struct FIGSkinGroup
	{
	public:
		unsigned char                                              BodyMIC[0x28];                                           // 0x0000(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		TArray<struct FIGHeadMaterialGroup>                        FaceMaterials;                                           // 0x0028(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct IGActorSystem.ProgressionLevel
	 * Size -> 0x0060 (FullSize[0x0068] - InheritedSize[0x0008])
	 */
	struct FProgressionLevel : public FTableRowBase
	{
	public:
		int32_t                                                    LevelId;                                                 // 0x0008(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    AmountNeeded;                                            // 0x000C(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bGivesFanMail;                                           // 0x0010(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_7MS8[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FText                                                CloutTitle;                                              // 0x0018(0x0018) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		class FString                                              LeagueLevelString;                                       // 0x0030(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              LeagueIcon[0x28];                                        // 0x0040(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
	};

	/**
	 * ScriptStruct IGActorSystem.BattlePassReward
	 * Size -> 0x0088
	 */
	struct FBattlePassReward
	{
	public:
		EBattlePassRewardType                                      RewardType;                                              // 0x0000(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIsApartOfSet;                                           // 0x0001(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_IESR[0x6];                                   // 0x0002(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FText                                                AccessorySetText;                                        // 0x0008(0x0018) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		class FText                                                RewardName;                                              // 0x0020(0x0018) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		class FText                                                RewardDescription;                                       // 0x0038(0x0018) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		EAccessoryItemRarity                                       RarityTier;                                              // 0x0050(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_VXBG[0x7];                                   // 0x0051(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              Icon[0x28];                                              // 0x0058(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		class UIGWalletAsset*                                      WalletAsset;                                             // 0x0080(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct IGActorSystem.BattlePassTier
	 * Size -> 0x0040 (FullSize[0x0048] - InheritedSize[0x0008])
	 */
	struct FBattlePassTier : public FTableRowBase
	{
	public:
		class FText                                                TierName;                                                // 0x0008(0x0018) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		int32_t                                                    TierId;                                                  // 0x0020(0x0004) Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                TierCode;                                                // 0x0024(0x0008) Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    XpNeededToComplete;                                      // 0x002C(0x0004) Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       IsFreeTier;                                              // 0x0030(0x0001) Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_50O9[0x7];                                   // 0x0031(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FBattlePassReward>                           Rewards;                                                 // 0x0038(0x0010) Edit, BlueprintVisible, ZeroConstructor, EditConst, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct IGActorSystem.IGWalletAssetInfo
	 * Size -> 0x00F0
	 */
	struct FIGWalletAssetInfo
	{
	public:
		class FName                                                ID;                                                      // 0x0000(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Name;                                                    // 0x0008(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              Icon[0x28];                                              // 0x0018(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		unsigned char                                              Asset[0x28];                                             // 0x0040(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		EIGWalletAssetType                                         Type;                                                    // 0x0068(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_EWW1[0x3];                                   // 0x0069(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FGuid                                               GroupId;                                                 // 0x006C(0x0010) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       Unlocked;                                                // 0x007C(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_LMYN[0x3];                                   // 0x007D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FDateTime                                           UnlockDate;                                              // 0x0080(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_C5FH[0x8];                                   // 0x0088(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FIGWalletExportableProperties                       ExportableProperties;                                    // 0x0090(0x0060) BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct IGActorSystem.BattlePassMatchAccumulationData
	 * Size -> 0x0068
	 */
	struct FBattlePassMatchAccumulationData
	{
	public:
		int32_t                                                    TotalFansOverCourseOfMatch;                              // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_VX1I[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FBattlePassTier                                     StartingTier;                                            // 0x0008(0x0048) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		int32_t                                                    StartingFanCount;                                        // 0x0050(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_28HH[0x4];                                   // 0x0054(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FBattlePassTier>                             PastTiers;                                               // 0x0058(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct IGActorSystem.IGSeasonDefinition
	 * Size -> 0x0048 (FullSize[0x0050] - InheritedSize[0x0008])
	 */
	struct FIGSeasonDefinition : public FTableRowBase
	{
	public:
		EIGSeasonIdentifier                                        Season;                                                  // 0x0008(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_GN6L[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    SeasonNumber;                                            // 0x000C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FText                                                SeasonName;                                              // 0x0010(0x0018) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FIGDateRange                                        SeasonDateRange;                                         // 0x0028(0x0028) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct IGActorSystem.AnimNode_BlendListByGameplayTag
	 * Size -> 0x0040 (FullSize[0x00D8] - InheritedSize[0x0098])
	 */
	struct FAnimNode_BlendListByGameplayTag : public FAnimNode_BlendListBase
	{
	public:
		TArray<struct FGameplayTag>                                TagToPoseIndex;                                          // 0x0098(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FGameplayTag>                                PreviousTagToPoseIndex;                                  // 0x00A8(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		struct FGameplayTagContainer                               InContainer;                                             // 0x00B8(0x0020) Edit, BlueprintVisible, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct IGActorSystem.IGFeatureOwnershipRow
	 * Size -> 0x0060 (FullSize[0x0068] - InheritedSize[0x0008])
	 */
	struct FIGFeatureOwnershipRow : public FTableRowBase
	{
	public:
		struct FIGWalletExportableProperties                       ExportableProperties;                                    // 0x0008(0x0060) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct IGActorSystem.IGVirtualCurrencyRow
	 * Size -> 0x0090 (FullSize[0x0098] - InheritedSize[0x0008])
	 */
	struct FIGVirtualCurrencyRow : public FTableRowBase
	{
	public:
		unsigned char                                              Icon[0x28];                                              // 0x0008(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		int32_t                                                    VirtualCurrencyAmount;                                   // 0x0030(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_IHTB[0x4];                                   // 0x0034(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FIGWalletExportableProperties                       ExportableProperties;                                    // 0x0038(0x0060) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct IGActorSystem.BattlePassRedemptionCodeAsset
	 * Size -> 0x0010
	 */
	struct FBattlePassRedemptionCodeAsset
	{
	public:
		class FName                                                ID;                                                      // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Count;                                                   // 0x0008(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       Is_Consumable;                                           // 0x000C(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EBattlePassRewardType                                      Reward_Type;                                             // 0x000D(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_2ZJ3[0x2];                                   // 0x000E(0x0002) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct IGActorSystem.BattlePassRedemptionCode
	 * Size -> 0x0050
	 */
	struct FBattlePassRedemptionCode
	{
	public:
		class FString                                              Name;                                                    // 0x0000(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Type;                                                    // 0x0010(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Code;                                                    // 0x0020(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Tier;                                                    // 0x0030(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Exp;                                                     // 0x0034(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       Is_Free;                                                 // 0x0038(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_637U[0x7];                                   // 0x0039(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FBattlePassRedemptionCodeAsset>              Assets;                                                  // 0x0040(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct IGActorSystem.RedemptionCodesFile
	 * Size -> 0x0010
	 */
	struct FRedemptionCodesFile
	{
	public:
		TArray<struct FBattlePassRedemptionCode>                   Redemption_Codes;                                        // 0x0000(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct IGActorSystem.IGWalletExportData
	 * Size -> 0x0050
	 */
	struct FIGWalletExportData
	{
	public:
		class FName                                                WalletId;                                                // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              LiveOpsName;                                             // 0x0008(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EAccessoryItemRarity                                       RarityTier;                                              // 0x0018(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_M0OP[0x7];                                   // 0x0019(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FText                                                Description;                                             // 0x0020(0x0018) NativeAccessSpecifierPublic
		class FText                                                LongDescription;                                         // 0x0038(0x0018) NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct IGActorSystem.IGWalletIdInfo
	 * Size -> 0x0010
	 */
	struct FIGWalletIdInfo
	{
	public:
		TArray<struct FIGWalletExportData>                         WalletList;                                              // 0x0000(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct IGActorSystem.IGExportableRowBase
	 * Size -> 0x00A0 (FullSize[0x00A8] - InheritedSize[0x0008])
	 */
	struct FIGExportableRowBase : public FTableRowBase
	{
	public:
		bool                                                       bAssetReadyForGame;                                      // 0x0008(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_OUZZ[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FText                                                DisplayName;                                             // 0x0010(0x0018) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		struct FSoftObjectPath                                     Icon;                                                    // 0x0028(0x0018) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                VariationGroupName;                                      // 0x0040(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FIGWalletExportableProperties                       ExportableProperties;                                    // 0x0048(0x0060) Edit, BlueprintVisible, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct IGActorSystem.IGBodyShapesRow
	 * Size -> 0x0050 (FullSize[0x00F8] - InheritedSize[0x00A8])
	 */
	struct FIGBodyShapesRow : public FIGExportableRowBase
	{
	public:
		EIGBodyType                                                BodyType;                                                // 0x00A8(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_R9PI[0x7];                                   // 0x00A9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              SkeletalMesh[0x28];                                      // 0x00B0(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		bool                                                       Equipped;                                                // 0x00D8(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_VR3P[0x3];                                   // 0x00D9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      MaxCameraVerticalHeight;                                 // 0x00DC(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MinCameraVerticalHeight;                                 // 0x00E0(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MinDistanceToCharacter;                                  // 0x00E4(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaxDistanceFromCharacter;                                // 0x00E8(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    CharacterRotationMaxSpeed;                               // 0x00EC(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    ZoomSpeed;                                               // 0x00F0(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_R293[0x4];                                   // 0x00F4(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct IGActorSystem.IGEmotesRow
	 * Size -> 0x0070 (FullSize[0x0118] - InheritedSize[0x00A8])
	 */
	struct FIGEmotesRow : public FIGExportableRowBase
	{
	public:
		unsigned char                                              Montage[0x28];                                           // 0x00A8(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		unsigned char                                              IconTexture[0x28];                                       // 0x00D0(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		struct FGameplayTagContainer                               Tags;                                                    // 0x00F8(0x0020) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct IGActorSystem.IGHeadShapeRow
	 * Size -> 0x0058 (FullSize[0x0100] - InheritedSize[0x00A8])
	 */
	struct FIGHeadShapeRow : public FIGExportableRowBase
	{
	public:
		int32_t                                                    HeadShapeId;                                             // 0x00A8(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_MZOQ[0x4];                                   // 0x00AC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              BodyToHeadShape[0x50];                                   // 0x00B0(0x0050) UNKNOWN PROPERTY: MapProperty
	};

	/**
	 * ScriptStruct IGActorSystem.IGSkinColorRow
	 * Size -> 0x0060 (FullSize[0x0108] - InheritedSize[0x00A8])
	 */
	struct FIGSkinColorRow : public FIGExportableRowBase
	{
	public:
		struct FLinearColor                                        Color;                                                   // 0x00A8(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TMap<EIGBodyType, struct FIGSkinGroup>                     BodyToSkinGroup;                                         // 0x00B8(0x0050) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct IGActorSystem.IGTextureAccessoryRow
	 * Size -> 0x0060 (FullSize[0x0068] - InheritedSize[0x0008])
	 */
	struct FIGTextureAccessoryRow : public FTableRowBase
	{
	public:
		struct FIGTextureAccessoryCommon                           AccessorySettings;                                       // 0x0008(0x0048) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		TArray<struct FIGTextureAccessoryVariation>                ColorVariations;                                         // 0x0050(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		class FName                                                VariationGroupName;                                      // 0x0060(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct IGActorSystem.IGPerkUITableRow
	 * Size -> 0x0038 (FullSize[0x0040] - InheritedSize[0x0008])
	 */
	struct FIGPerkUITableRow : public FTableRowBase
	{
	public:
		class FText                                                PerkName;                                                // 0x0008(0x0018) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		TArray<class FText>                                        PerkDescriptions;                                        // 0x0020(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		class UTexture2D*                                          Icon;                                                    // 0x0030(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UTexture2D*                                          EffectIcon;                                              // 0x0038(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct IGActorSystem.ActorPool
	 * Size -> 0x0040
	 */
	struct FActorPool
	{
	public:
		TArray<class AActor*>                                      AvailableActorsPool;                                     // 0x0000(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<class AActor*>                                      RegisteredActorsList;                                    // 0x0010(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<class AActor*>                                      UnusedActorsList;                                        // 0x0020(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		int32_t                                                    NumRegisteredActors;                                     // 0x0030(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FActorPoolSettings                                  Settings;                                                // 0x0034(0x0008) NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_KQUB[0x4];                                   // 0x003C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct IGActorSystem.IGDynamicParams
	 * Size -> 0x001C
	 */
	struct FIGDynamicParams
	{
	public:
		float                                                      DepthParam;                                              // 0x0000(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FGameplayTag                                        Tag;                                                     // 0x0004(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      FallDistance;                                            // 0x000C(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      GrappleDistance;                                         // 0x0010(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      LauncherDistance;                                        // 0x0014(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EMoveTier                                                  ExecutionTier;                                           // 0x0018(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_37QI[0x3];                                   // 0x0019(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct IGActorSystem.IGAnimInstanceProxy
	 * Size -> 0x0000 (FullSize[0x0770] - InheritedSize[0x0770])
	 */
	struct FIGAnimInstanceProxy : public FAnimInstanceProxy
	{	};

	/**
	 * ScriptStruct IGActorSystem.IGAudioPerkNotifyInfo
	 * Size -> 0x0018
	 */
	struct FIGAudioPerkNotifyInfo
	{
	public:
		class UDataAsset*                                          PerkAsset;                                               // 0x0000(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class AActor*                                              PerkOwner;                                               // 0x0008(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Value;                                                   // 0x0010(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Stacks;                                                  // 0x0014(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct IGActorSystem.IGVoiceAnimNotifyEventInfo
	 * Size -> 0x0050
	 */
	struct FIGVoiceAnimNotifyEventInfo
	{
	public:
		class AActor*                                              CallingActor;                                            // 0x0000(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FIGAdditionalParams                                 AdditionalParams;                                        // 0x0008(0x0028) BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic
		struct FIGDynamicParams                                    DynamicParams;                                           // 0x0030(0x001C) BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_P3X8[0x4];                                   // 0x004C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct IGActorSystem.IGAudioFallEndNotifyInfo
	 * Size -> 0x0020
	 */
	struct FIGAudioFallEndNotifyInfo
	{
	public:
		class AActor*                                              AttackerActor;                                           // 0x0000(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class AActor*                                              DefenderActor;                                           // 0x0008(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EFallingType                                               NotifyType;                                              // 0x0010(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ZVCC[0x3];                                   // 0x0011(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      Distance;                                                // 0x0014(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Depth;                                                   // 0x0018(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       Interrupted;                                             // 0x001C(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_MAXW[0x3];                                   // 0x001D(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct IGActorSystem.IGAudioFallTierNotifyInfo
	 * Size -> 0x0020
	 */
	struct FIGAudioFallTierNotifyInfo
	{
	public:
		class AActor*                                              AttackerActor;                                           // 0x0000(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class AActor*                                              DefenderActor;                                           // 0x0008(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EFallingType                                               NotifyType;                                              // 0x0010(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_SNZV[0x3];                                   // 0x0011(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      Distance;                                                // 0x0014(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Tier;                                                    // 0x0018(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_LPUZ[0x4];                                   // 0x001C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct IGActorSystem.IGAudioHitBlockEventInfo
	 * Size -> 0x0060
	 */
	struct FIGAudioHitBlockEventInfo
	{
	public:
		class AActor*                                              Attacker;                                                // 0x0000(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class AActor*                                              Victim;                                                  // 0x0008(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FSoundHitData                                       SoundHitData;                                            // 0x0010(0x0048) BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bIsBlocked;                                              // 0x0058(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_YHL2[0x3];                                   // 0x0059(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      Damage;                                                  // 0x005C(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct IGActorSystem.IGAudioAnimNotifyEventInfo
	 * Size -> 0x0060
	 */
	struct FIGAudioAnimNotifyEventInfo
	{
	public:
		class AActor*                                              CallingActor;                                            // 0x0000(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class AIGCharacter*                                        CallingCharacter;                                        // 0x0008(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIsLocallyControlledCharacter;                           // 0x0010(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_O5VT[0x3];                                   // 0x0011(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      Duration;                                                // 0x0014(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FIGAdditionalParams                                 AdditionalParams;                                        // 0x0018(0x0028) BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic
		struct FIGDynamicParams                                    DynamicParams;                                           // 0x0040(0x001C) BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_KJ3A[0x4];                                   // 0x005C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct IGActorSystem.ServerMoveHistoryEntry
	 * Size -> 0x0010
	 */
	struct FServerMoveHistoryEntry
	{
	public:
		unsigned char                                              UnknownData_2117[0x10];                                  // 0x0000(0x0010) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct IGActorSystem.IGCharacterAudioAnimNotifyEventInfo
	 * Size -> 0x0048
	 */
	struct FIGCharacterAudioAnimNotifyEventInfo
	{
	public:
		float                                                      Duration;                                                // 0x0000(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FIGAdditionalParams                                 AdditionalParams;                                        // 0x0004(0x0028) BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic
		struct FIGDynamicParams                                    DynamicParams;                                           // 0x002C(0x001C) BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct IGActorSystem.IGVFXCharacterAnimNotifyEventInfo
	 * Size -> 0x0048
	 */
	struct FIGVFXCharacterAnimNotifyEventInfo
	{
	public:
		float                                                      Duration;                                                // 0x0000(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FIGAdditionalParams                                 AdditionalParams;                                        // 0x0004(0x0028) BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic
		struct FIGDynamicParams                                    DynamicParams;                                           // 0x002C(0x001C) BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct IGActorSystem.MontageToIconData
	 * Size -> 0x0030 (FullSize[0x0038] - InheritedSize[0x0008])
	 */
	struct FMontageToIconData : public FTableRowBase
	{
	public:
		class UIGMoveMontage*                                      Montage;                                                 // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FText                                                DisplayName;                                             // 0x0010(0x0018) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		class UTexture2D*                                          IconTexture;                                             // 0x0028(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UIGWalletAsset*                                      WalletAsset;                                             // 0x0030(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct IGActorSystem.AttackReceipt
	 * Size -> 0x000C
	 */
	struct FAttackReceipt
	{
	public:
		uint32_t                                                   ID;                                                      // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Timestamp;                                               // 0x0004(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EReceiptResult                                             Result;                                                  // 0x0008(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_TVP9[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct IGActorSystem.InteractablePromptDataRow
	 * Size -> 0x0018 (FullSize[0x0020] - InheritedSize[0x0008])
	 */
	struct FInteractablePromptDataRow : public FTableRowBase
	{
	public:
		class FText                                                PromptText;                                              // 0x0008(0x0018) Edit, BlueprintVisible, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct IGActorSystem.IGItemDurabilityInfo
	 * Size -> 0x0010
	 */
	struct FIGItemDurabilityInfo
	{
	public:
		int32_t                                                    DurabilityThreshold;                                     // 0x0000(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_EDQ6[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTexture2D*                                          Image;                                                   // 0x0008(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct IGActorSystem.IGItemDataRow
	 * Size -> 0x0048 (FullSize[0x0050] - InheritedSize[0x0008])
	 */
	struct FIGItemDataRow : public FTableRowBase
	{
	public:
		class FText                                                DisplayName;                                             // 0x0008(0x0018) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		TArray<class FText>                                        DescriptionLines;                                        // 0x0020(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<EIGSpecialMoveEffect>                               SpecialMoveEffectLines;                                  // 0x0030(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FIGItemDurabilityInfo>                       DurabilityTiers;                                         // 0x0040(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct IGActorSystem.IGSpecialMoveTierDistrubutionEntry
	 * Size -> 0x0008
	 */
	struct FIGSpecialMoveTierDistrubutionEntry
	{
	public:
		EMoveTier                                                  MoveTier;                                                // 0x0000(0x0001) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_4JT8[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    DefaultDistribution;                                     // 0x0004(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct IGActorSystem.IGModStackInt
	 * Size -> 0x000C
	 */
	struct FIGModStackInt
	{
	public:
		EIGModType                                                 ModType;                                                 // 0x0000(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_TUPU[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    ModValue;                                                // 0x0004(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ExpirationTimeStamp;                                     // 0x0008(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct IGActorSystem.IGModValueInt
	 * Size -> 0x0018
	 */
	struct FIGModValueInt
	{
	public:
		int32_t                                                    Value;                                                   // 0x0000(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_VQ3P[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FIGModStackInt>                              StackMods;                                               // 0x0008(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct IGActorSystem.IGMoveAnimMontageInstance
	 * Size -> 0x0000 (FullSize[0x01B8] - InheritedSize[0x01B8])
	 */
	struct FIGMoveAnimMontageInstance : public FAnimMontageInstance
	{	};

	/**
	 * ScriptStruct IGActorSystem.IGGameSimulationMoveMontageInstance
	 * Size -> 0x0000 (FullSize[0x01B8] - InheritedSize[0x01B8])
	 */
	struct FIGGameSimulationMoveMontageInstance : public FAnimMontageInstance
	{	};

	/**
	 * ScriptStruct IGActorSystem.IGInputBufferPair
	 * Size -> 0x0018
	 */
	struct FIGInputBufferPair
	{
	public:
		unsigned char                                              UnknownData_ZHIA[0x18];                                  // 0x0000(0x0018) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct IGActorSystem.IGCombatContextSetting
	 * Size -> 0x000C
	 */
	struct FIGCombatContextSetting
	{
	public:
		class FName                                                ContextName;                                             // 0x0000(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EIGCombatContextBehavior                                   ContextBehavior;                                         // 0x0008(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_IYBU[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct IGActorSystem.PingInfo
	 * Size -> 0x0050
	 */
	struct FPingInfo
	{
	public:
		TMap<EPingRanges, uint32_t>                                PingTable;                                               // 0x0000(0x0050) NativeAccessSpecifierPrivate
	};

	/**
	 * ScriptStruct IGActorSystem.IGCrotchAttachmentThighRotationsPerCharacter
	 * Size -> 0x0018 (FullSize[0x0020] - InheritedSize[0x0008])
	 */
	struct FIGCrotchAttachmentThighRotationsPerCharacter : public FTableRowBase
	{
	public:
		float                                                      Alfa;                                                    // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Bravo;                                                   // 0x000C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Charlie;                                                 // 0x0010(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Delta;                                                   // 0x0014(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Echo;                                                    // 0x0018(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Foxtrot;                                                 // 0x001C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct IGActorSystem.FanAccrualData
	 * Size -> 0x0020
	 */
	struct FFanAccrualData
	{
	public:
		int32_t                                                    MinAccrual;                                              // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    MaxAccrual;                                              // 0x0004(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    AllowEveryXMin;                                          // 0x0008(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    TimeScaleFactor;                                         // 0x000C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    SuccessfulPinFanRewardValue;                             // 0x0010(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    KnockdownFanRewardValue;                                 // 0x0014(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    EliminationFanRewardValue;                               // 0x0018(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    DisqualifiedFanRewardValue;                              // 0x001C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct IGActorSystem.SheikXpBoosterSharedTitleData
	 * Size -> 0x0008
	 */
	struct FSheikXpBoosterSharedTitleData
	{
	public:
		float                                                      Multiplier;                                              // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bAffectsDailyChallenges;                                 // 0x0004(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bAffectsWeeklyChallenges;                                // 0x0005(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bOnlyAffectsChallenges;                                  // 0x0006(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_72YL[0x1];                                   // 0x0007(0x0001) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct IGActorSystem.SheikXPEventData
	 * Size -> 0x0008
	 */
	struct FSheikXPEventData
	{
	public:
		float                                                      Multiplier;                                              // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bAffectsDailyChallenges;                                 // 0x0004(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bAffectsWeeklyChallenges;                                // 0x0005(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bOnlyAffectsChallenges;                                  // 0x0006(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_BARL[0x1];                                   // 0x0007(0x0001) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct IGActorSystem.IGSeasonsData
	 * Size -> 0x0018
	 */
	struct FIGSeasonsData
	{
	public:
		EIGSeasonIdentifier                                        CurrentSeason;                                           // 0x0000(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_0IQH[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FIGSeasonDefinition>                         SeasonDefinitions;                                       // 0x0008(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct IGActorSystem.ProgressionTitleStorageInfo
	 * Size -> 0x0060
	 */
	struct FProgressionTitleStorageInfo
	{
	public:
		TArray<struct FProgressionLevel>                           CloutLevels;                                             // 0x0000(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		struct FFanAccrualData                                     FanAccrualData;                                          // 0x0010(0x0020) NoDestructor, NativeAccessSpecifierPublic
		struct FSheikXpBoosterSharedTitleData                      XpBoosterSharedData;                                     // 0x0030(0x0008) NoDestructor, NativeAccessSpecifierPublic
		struct FSheikXPEventData                                   SheikXPEventData;                                        // 0x0038(0x0008) NoDestructor, NativeAccessSpecifierPublic
		struct FIGSeasonsData                                      SeasonsData;                                             // 0x0040(0x0018) NativeAccessSpecifierPublic
		EIGSeasonIdentifier                                        BattlePassSeasonOverride;                                // 0x0058(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_4XYR[0x7];                                   // 0x0059(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct IGActorSystem.BattlePassTierJsonRowRepresentation
	 * Size -> 0x0010 (FullSize[0x0058] - InheritedSize[0x0048])
	 */
	struct FBattlePassTierJsonRowRepresentation : public FBattlePassTier
	{
	public:
		class FString                                              Name;                                                    // 0x0048(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct IGActorSystem.RepLedger
	 * Size -> 0x0040
	 */
	struct FRepLedger
	{
	public:
		TArray<class FName>                                        RepHistory;                                              // 0x0000(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		int32_t                                                    NumRepsAllowedToHave;                                    // 0x0010(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bNeedsFirstTimeLoginReps;                                // 0x0014(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_KJ6Q[0x3];                                   // 0x0015(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class FName>                                        CompletedFirstTimeReps;                                  // 0x0018(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		struct FDateTime                                           LastTimeAllowanceUpdated;                                // 0x0028(0x0008) ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    NumRerolls;                                              // 0x0030(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_EHJG[0x4];                                   // 0x0034(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FDateTime                                           LastTimeGainedReroll;                                    // 0x0038(0x0008) ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct IGActorSystem.RepDataLite
	 * Size -> 0x0014
	 */
	struct FRepDataLite
	{
	public:
		class FName                                                RepName;                                                 // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                Stat;                                                    // 0x0008(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       IsComplete;                                              // 0x0010(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       IsRecycledFromHistory;                                   // 0x0011(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_IVVX[0x2];                                   // 0x0012(0x0002) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct IGActorSystem.RepTrackingData
	 * Size -> 0x0018
	 */
	struct FRepTrackingData
	{
	public:
		int32_t                                                    RepTrackingDataVersion;                                  // 0x0000(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_AT4R[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FRepDataLite>                                RepsCurrentlyTracking;                                   // 0x0008(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct IGActorSystem.MatchCompletionReward
	 * Size -> 0x001C
	 */
	struct FMatchCompletionReward
	{
	public:
		class FName                                                Label;                                                   // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EMatchCompletionName                                       Name;                                                    // 0x0008(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_SNZ9[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      AmountOfXp;                                              // 0x000C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    ClaimLimit;                                              // 0x0010(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_LBCC[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		bool                                                       Active;                                                  // 0x0018(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_A0BN[0x3];                                   // 0x0019(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct IGActorSystem.WeeklyRewardTiers
	 * Size -> 0x00B0
	 */
	struct FWeeklyRewardTiers
	{
	public:
		struct FRepReward                                          BronzeReward;                                            // 0x0000(0x0050) Edit, NativeAccessSpecifierPublic
		int32_t                                                    BronzeTarget;                                            // 0x0050(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_RU4W[0x4];                                   // 0x0054(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FRepReward                                          SilverReward;                                            // 0x0058(0x0050) Edit, NativeAccessSpecifierPublic
		int32_t                                                    SilverTarget;                                            // 0x00A8(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_A8NV[0x4];                                   // 0x00AC(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct IGActorSystem.RepData
	 * Size -> 0x0140 (FullSize[0x0148] - InheritedSize[0x0008])
	 */
	struct FRepData : public FTableRowBase
	{
	public:
		class FText                                                DisplayName;                                             // 0x0008(0x0018) Edit, NativeAccessSpecifierPublic
		class FText                                                Description;                                             // 0x0020(0x0018) Edit, NativeAccessSpecifierPublic
		ERepType                                                   RepType;                                                 // 0x0038(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_127U[0x3];                                   // 0x0039(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                RepName;                                                 // 0x003C(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                Stat;                                                    // 0x0044(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Target;                                                  // 0x004C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FRepReward>                                  PrimaryRewards;                                          // 0x0050(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FRepReward>                                  SecondaryRewards;                                        // 0x0060(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		ERepDifficulty                                             Difficulty;                                              // 0x0070(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_SOPM[0x3];                                   // 0x0071(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    FirstTimeRepOrder;                                       // 0x0074(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ERepProgressUpdateType                                     ProgressUpdateType;                                      // 0x0078(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ERepTargetComparisonType                                   TargetComparisonType;                                    // 0x0079(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUpdateProgress;                                         // 0x007A(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bRemoved;                                                // 0x007B(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bEnabled;                                                // 0x007C(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EThresholdNotificationCadence                              ThresholdNotificationCadence;                            // 0x007D(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_YWBT[0x2];                                   // 0x007E(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    OptionalThresholdCustomInterval;                         // 0x0080(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                IconPath;                                                // 0x0084(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_G8ST[0x4];                                   // 0x008C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FWeeklyRewardTiers                                  WeeklyRewardTiers;                                       // 0x0090(0x00B0) Edit, NativeAccessSpecifierPublic
		class FName                                                GroupingDataTableRowName;                                // 0x0140(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct IGActorSystem.EndOfMatchBonusData
	 * Size -> 0x0068
	 */
	struct FEndOfMatchBonusData
	{
	public:
		class FName                                                DisplayName;                                             // 0x0000(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EEndOfMatchBonusName                                       Name;                                                    // 0x0008(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_IP4T[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FRepReward                                          Reward;                                                  // 0x0010(0x0050) BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		int32_t                                                    MaxClaimsPerDay;                                         // 0x0060(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bActive;                                                 // 0x0064(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_PA95[0x3];                                   // 0x0065(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct IGActorSystem.BattlePassProgressData
	 * Size -> 0x0014
	 */
	struct FBattlePassProgressData
	{
	public:
		int32_t                                                    CurrentBattlePassTierId;                                 // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    NumTiersPurchased;                                       // 0x0004(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    CurrentBattlePassFans;                                   // 0x0008(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    LastCelebrationBattlePassTierId;                         // 0x000C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    LastCelebrationBattlePassFans;                           // 0x0010(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct IGActorSystem.EndOfMatchBonusesLedger
	 * Size -> 0x0010
	 */
	struct FEndOfMatchBonusesLedger
	{
	public:
		EEndOfMatchBonusName                                       BonusName;                                               // 0x0000(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_W6C4[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    TimesClaimed;                                            // 0x0004(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FDateTime                                           LastMidnight;                                            // 0x0008(0x0008) ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct IGActorSystem.ProgressionPlayerData
	 * Size -> 0x00A8
	 */
	struct FProgressionPlayerData
	{
	public:
		int32_t                                                    ProgressionPlayerDataVersion;                            // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_CN3A[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FProgressionLevel                                   CloutLevel;                                              // 0x0008(0x0068) NativeAccessSpecifierPublic
		struct FBattlePassProgressData                             BattlePassProgressData;                                  // 0x0070(0x0014) NoDestructor, NativeAccessSpecifierPublic
		int32_t                                                    CurrentCloutFans;                                        // 0x0084(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      TotalCloutLevelsObtained;                                // 0x0088(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EIGSeasonIdentifier                                        LastKnownSeason;                                         // 0x008C(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_FUJG[0x3];                                   // 0x008D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    FanMailCount;                                            // 0x0090(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    LastFanMailRewardLevel;                                  // 0x0094(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FEndOfMatchBonusesLedger>                    EndOfMatchBonusesTracking;                               // 0x0098(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct IGActorSystem.FanMailBucket
	 * Size -> 0x0048 (FullSize[0x0050] - InheritedSize[0x0008])
	 */
	struct FFanMailBucket : public FTableRowBase
	{
	public:
		class UIGWalletAsset*                                      WalletAsset;                                             // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EFanMailAssetRarity                                        Rarity;                                                  // 0x0010(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_I6WL[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FText                                                OverrideFrom;                                            // 0x0018(0x0018) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		class FText                                                OverrideBody;                                            // 0x0030(0x0018) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		class FName                                                OverrideTheme;                                           // 0x0048(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct IGActorSystem.FanMailRarityDataContainer
	 * Size -> 0x0040
	 */
	struct FFanMailRarityDataContainer
	{
	public:
		TArray<struct FFanMailBucket>                              UncommonData;                                            // 0x0000(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FFanMailBucket>                              RareData;                                                // 0x0010(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FFanMailBucket>                              EpicData;                                                // 0x0020(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FFanMailBucket>                              LegendaryData;                                           // 0x0030(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct IGActorSystem.FanMailSortedDataContainer
	 * Size -> 0x0010
	 */
	struct FFanMailSortedDataContainer
	{
	public:
		TArray<struct FFanMailRarityDataContainer>                 DataContainer;                                           // 0x0000(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct IGActorSystem.FanMailText
	 * Size -> 0x0030 (FullSize[0x0038] - InheritedSize[0x0008])
	 */
	struct FFanMailText : public FTableRowBase
	{
	public:
		class FText                                                From;                                                    // 0x0008(0x0018) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		class FText                                                Body;                                                    // 0x0020(0x0018) Edit, BlueprintVisible, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct IGActorSystem.FanMailBucketContainer
	 * Size -> 0x0010
	 */
	struct FFanMailBucketContainer
	{
	public:
		TArray<class UIGFanMailRarityData*>                        DrawBuckets;                                             // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct IGActorSystem.FanMailLevelDefinition
	 * Size -> 0x0078 (FullSize[0x0080] - InheritedSize[0x0008])
	 */
	struct FFanMailLevelDefinition : public FTableRowBase
	{
	public:
		int32_t                                                    levelStartRange;                                         // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    levelEndRange;                                           // 0x000C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class UIGWalletAsset*>                              GuaranteedReward;                                        // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		float                                                      UncommonDrawChance;                                      // 0x0020(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      RareDrawChance;                                          // 0x0024(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      EpicDrawChance;                                          // 0x0028(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      LegendaryDrawChance;                                     // 0x002C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FFanMailBucketContainer>                     BucketContainers;                                        // 0x0030(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		int32_t                                                    NumberOfRewards;                                         // 0x0040(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_RHFN[0x4];                                   // 0x0044(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FText                                                OverrideFrom;                                            // 0x0048(0x0018) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		class FText                                                OverrideBody;                                            // 0x0060(0x0018) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		class FName                                                OverrideTheme;                                           // 0x0078(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct IGActorSystem.FanMailTheme
	 * Size -> 0x0020 (FullSize[0x0028] - InheritedSize[0x0008])
	 */
	struct FFanMailTheme : public FTableRowBase
	{
	public:
		struct FColor                                              Color;                                                   // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_564V[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FSoftObjectPath                                     Icon;                                                    // 0x0010(0x0018) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct IGActorSystem.IGRepPacker
	 * Size -> 0x0050
	 */
	struct FIGRepPacker
	{
	public:
		unsigned char                                              UnknownData_N46F[0x50];                                  // 0x0000(0x0050) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct IGActorSystem.IGRootMotionSource_Animation
	 * Size -> 0x0008 (FullSize[0x00A0] - InheritedSize[0x0098])
	 */
	struct FIGRootMotionSource_Animation : public FRootMotionSource
	{
	public:
		unsigned char                                              UnknownData_LOSE[0x8];                                   // 0x0098(0x0008) Fix Super Size
	};

	/**
	 * ScriptStruct IGActorSystem.IGRootMotionSource_DynamicForce
	 * Size -> 0x0038 (FullSize[0x00D0] - InheritedSize[0x0098])
	 */
	struct FIGRootMotionSource_DynamicForce : public FRootMotionSource
	{
	public:
		struct FVector_NetQuantize100                              Velocity;                                                // 0x0098(0x000C) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector_NetQuantize100                              Acceleration;                                            // 0x00A4(0x000C) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Friction;                                                // 0x00B0(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUseMaxSpeed;                                            // 0x00B4(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_UR11[0x3];                                   // 0x00B5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      MaxSpeed;                                                // 0x00B8(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUseVelocityClamp;                                       // 0x00BC(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_Y7KS[0x3];                                   // 0x00BD(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             VelocityClamp;                                           // 0x00C0(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_B3HN[0x4];                                   // 0x00CC(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct IGActorSystem.IGRootMotionSource_MoveToDynamicForce
	 * Size -> 0x0038 (FullSize[0x00D0] - InheritedSize[0x0098])
	 */
	struct FIGRootMotionSource_MoveToDynamicForce : public FRootMotionSource
	{
	public:
		struct FVector_NetQuantize100                              StartLocation;                                           // 0x0098(0x000C) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector_NetQuantize100                              TargetLocation;                                          // 0x00A4(0x000C) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bRestrictSpeedToExpected;                                // 0x00B0(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bNoZForce;                                               // 0x00B1(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_8259[0x6];                                   // 0x00B2(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UCurveVector*                                        PathOffsetCurve;                                         // 0x00B8(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UCurveFloat*                                         TimeMappingCurve;                                        // 0x00C0(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIsEnabled;                                              // 0x00C8(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EEasingFunc                                                EasingFunction;                                          // 0x00C9(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_NZ17[0x6];                                   // 0x00CA(0x0006) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct IGActorSystem.IGRootMotionSource_PushbackForce
	 * Size -> 0x0010 (FullSize[0x00E0] - InheritedSize[0x00D0])
	 */
	struct FIGRootMotionSource_PushbackForce : public FIGRootMotionSource_DynamicForce
	{
	public:
		int32_t                                                    HitId;                                                   // 0x00D0(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_4ORA[0xC];                                   // 0x00D4(0x000C) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct IGActorSystem.IGSkelMeshMergeUVTransform
	 * Size -> 0x0010
	 */
	struct FIGSkelMeshMergeUVTransform
	{
	public:
		TArray<struct FTransform>                                  UVTransforms;                                            // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct IGActorSystem.IGSkelMeshMergeUVTransformMapping
	 * Size -> 0x0010
	 */
	struct FIGSkelMeshMergeUVTransformMapping
	{
	public:
		TArray<struct FIGSkelMeshMergeUVTransform>                 UVTransformsPerMesh;                                     // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct IGActorSystem.IGMeshMerger
	 * Size -> 0x0068
	 */
	struct FIGMeshMerger
	{
	public:
		TArray<struct FIGSkelMeshMergeUVTransformMapping>          UVTransformsPerMesh;                                     // 0x0000(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		int32_t                                                    StripTopLODS;                                            // 0x0010(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_96P9[0x14];                                  // 0x0014(0x0014) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class USkeletalMesh*                                       BaseMesh;                                                // 0x0028(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class USkeletalMesh*>                               CachedMeshesToMerge;                                     // 0x0030(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_MTSQ[0x20];                                  // 0x0040(0x0020) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		bool                                                       bNeedsCpuAccess : 1;                                     // 0x0060(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_74KF[0x7];                                   // 0x0061(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct IGActorSystem.IGCameraRayCastTargets
	 * Size -> 0x003C
	 */
	struct FIGCameraRayCastTargets
	{
	public:
		struct FVector                                             ProximityPointFront;                                     // 0x0000(0x000C) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             ProximityPointBack;                                      // 0x000C(0x000C) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             FarAwayPoint;                                            // 0x0018(0x000C) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             LeftPoint;                                               // 0x0024(0x000C) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             RightPoint;                                              // 0x0030(0x000C) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct IGActorSystem.SwingableLine
	 * Size -> 0x0024
	 */
	struct FSwingableLine
	{
	public:
		struct FVector                                             StartPoint;                                              // 0x0000(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             EndPoint;                                                // 0x000C(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             RotationAxis;                                            // 0x0018(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct IGActorSystem.IGTickManagerTickFunction
	 * Size -> 0x0008 (FullSize[0x0038] - InheritedSize[0x0030])
	 */
	struct FIGTickManagerTickFunction : public FActorComponentTickFunction
	{
	public:
		unsigned char                                              UnknownData_DOIN[0x8];                                   // 0x0030(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct IGActorSystem.IGTitleCardData
	 * Size -> 0x0060 (FullSize[0x0068] - InheritedSize[0x0008])
	 */
	struct FIGTitleCardData : public FTableRowBase
	{
	public:
		TArray<struct FIGTitleCardMedal>                           Medals;                                                  // 0x0008(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FIGTitleCardStat>                            Stats;                                                   // 0x0018(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FIGTitleCardPlayerTitle>                     PlayerTitles;                                            // 0x0028(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FIGTitleCardPlayerPose>                      PlayerPoses;                                             // 0x0038(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FIGTitleCardBackground>                      Backgrounds;                                             // 0x0048(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FIGTitleCardBorder>                          Borders;                                                 // 0x0058(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct IGActorSystem.IGVFXPerkNotifyInfo
	 * Size -> 0x0018
	 */
	struct FIGVFXPerkNotifyInfo
	{
	public:
		class UDataAsset*                                          PerkAsset;                                               // 0x0000(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class AActor*                                              PerkOwner;                                               // 0x0008(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Value;                                                   // 0x0010(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Stacks;                                                  // 0x0014(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct IGActorSystem.IGVFXFallEndNotifyInfo
	 * Size -> 0x0048
	 */
	struct FIGVFXFallEndNotifyInfo
	{
	public:
		class AActor*                                              AttackerActor;                                           // 0x0000(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class AActor*                                              DefenderActor;                                           // 0x0008(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EFallingType                                               NotifyType;                                              // 0x0010(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_JFGQ[0x3];                                   // 0x0011(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      Distance;                                                // 0x0014(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Depth;                                                   // 0x0018(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ImpactRadiusOverride;                                    // 0x001C(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FGameplayTagContainer                               FallingMoveTags;                                         // 0x0020(0x0020) BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		bool                                                       Interrupted;                                             // 0x0040(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_P2OQ[0x7];                                   // 0x0041(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct IGActorSystem.IGVFXFallTierNotifyInfo
	 * Size -> 0x0020
	 */
	struct FIGVFXFallTierNotifyInfo
	{
	public:
		class AActor*                                              AttackerActor;                                           // 0x0000(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class AActor*                                              DefenderActor;                                           // 0x0008(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EFallingType                                               NotifyType;                                              // 0x0010(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_0WJI[0x3];                                   // 0x0011(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      Distance;                                                // 0x0014(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Tier;                                                    // 0x0018(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_QH6K[0x4];                                   // 0x001C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct IGActorSystem.IGVFXHitBlockEventInfo
	 * Size -> 0x0070
	 */
	struct FIGVFXHitBlockEventInfo
	{
	public:
		class AActor*                                              Attacker;                                                // 0x0000(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class AActor*                                              Victim;                                                  // 0x0008(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FEffectHitData                                      EffectHitData;                                           // 0x0010(0x0048) BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bIsBlocked;                                              // 0x0058(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_14UK[0x3];                                   // 0x0059(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             KnockbackVector;                                         // 0x005C(0x000C) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Damage;                                                  // 0x0068(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_XL5F[0x4];                                   // 0x006C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct IGActorSystem.IGVFXAnimNotifyEventInfo
	 * Size -> 0x0050
	 */
	struct FIGVFXAnimNotifyEventInfo
	{
	public:
		class AActor*                                              CallingActor;                                            // 0x0000(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Duration;                                                // 0x0008(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FIGAdditionalParams                                 AdditionalParams;                                        // 0x000C(0x0028) BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic
		struct FIGDynamicParams                                    DynamicParams;                                           // 0x0034(0x001C) BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
