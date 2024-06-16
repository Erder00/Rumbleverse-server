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
	 * Function SheikCharacterAIController_BP.SheikCharacterAIController_BP_C.IsWithinRadiusOfPathTarget
	 */
	struct ASheikCharacterAIController_BP_C_IsWithinRadiusOfPathTarget_Params
	{
	public:
		float                                                      AcceptanceRadius;                                        // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       Output;                                                  // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_XV8H[0x3];                                   // 0x0005(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function SheikCharacterAIController_BP.SheikCharacterAIController_BP_C.GetCombatPossible
	 */
	struct ASheikCharacterAIController_BP_C_GetCombatPossible_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_H9ES[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function SheikCharacterAIController_BP.SheikCharacterAIController_BP_C.IsCheckForBlockingTargetsEnabled
	 */
	struct ASheikCharacterAIController_BP_C_IsCheckForBlockingTargetsEnabled_Params
	{
	public:
		bool                                                       CheckForBlockingTargetsEnabled;                          // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function SheikCharacterAIController_BP.SheikCharacterAIController_BP_C.CheckForNewTargetBlockingPath
	 */
	struct ASheikCharacterAIController_BP_C_CheckForNewTargetBlockingPath_Params
	{	};

	/**
	 * Function SheikCharacterAIController_BP.SheikCharacterAIController_BP_C.CheckCanSprintWhileTargetStunned
	 */
	struct ASheikCharacterAIController_BP_C_CheckCanSprintWhileTargetStunned_Params
	{
	public:
		bool                                                       CanSprint;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_CJ3G[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function SheikCharacterAIController_BP.SheikCharacterAIController_BP_C.SetTrapped
	 */
	struct ASheikCharacterAIController_BP_C_SetTrapped_Params
	{
	public:
		EBotTrappedSource                                          TrappedReason;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_Z4ZK[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function SheikCharacterAIController_BP.SheikCharacterAIController_BP_C.PlaygroundBotDamaged
	 */
	struct ASheikCharacterAIController_BP_C_PlaygroundBotDamaged_Params
	{
	public:
		struct FIGInstanceHitData                                  HitData;                                                 // 0x0000(0x0048)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	};

	/**
	 * Function SheikCharacterAIController_BP.SheikCharacterAIController_BP_C.GetCharacterOTG
	 */
	struct ASheikCharacterAIController_BP_C_GetCharacterOTG_Params
	{
	public:
		class ASheikCharacter*                                     Character;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_LS13[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function SheikCharacterAIController_BP.SheikCharacterAIController_BP_C.IsPlaygroundBot
	 */
	struct ASheikCharacterAIController_BP_C_IsPlaygroundBot_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function SheikCharacterAIController_BP.SheikCharacterAIController_BP_C.InitPlaygroundBot
	 */
	struct ASheikCharacterAIController_BP_C_InitPlaygroundBot_Params
	{	};

	/**
	 * Function SheikCharacterAIController_BP.SheikCharacterAIController_BP_C.CharacterEnteredCircle
	 */
	struct ASheikCharacterAIController_BP_C_CharacterEnteredCircle_Params
	{
	public:
		class ASheikCharacter*                                     Character;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SheikCharacterAIController_BP.SheikCharacterAIController_BP_C.BotExitedCircle
	 */
	struct ASheikCharacterAIController_BP_C_BotExitedCircle_Params
	{
	public:
		class ASheikCharacter*                                     Bot;                                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SheikCharacterAIController_BP.SheikCharacterAIController_BP_C.GetClosestTeammateInCombat
	 */
	struct ASheikCharacterAIController_BP_C_GetClosestTeammateInCombat_Params
	{
	public:
		class ASheikCharacter*                                     ClosestTeammate;                                         // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SheikCharacterAIController_BP.SheikCharacterAIController_BP_C.GetAnyTeammateInCombat
	 */
	struct ASheikCharacterAIController_BP_C_GetAnyTeammateInCombat_Params
	{
	public:
		bool                                                       TeammateInCombat;                                        // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_L8FK[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function SheikCharacterAIController_BP.SheikCharacterAIController_BP_C.GetAllCharactersTargetedByTeammates
	 */
	struct ASheikCharacterAIController_BP_C_GetAllCharactersTargetedByTeammates_Params
	{
	public:
		bool                                                       OnlyIncludeCombatTargets;                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_1JH0[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<class AActor*>                                      TargetedCharacters;                                      // 0x0008(0x0010)  (Parm, OutParm)
	};

	/**
	 * Function SheikCharacterAIController_BP.SheikCharacterAIController_BP_C.GetCurrentDestination
	 */
	struct ASheikCharacterAIController_BP_C_GetCurrentDestination_Params
	{
	public:
		struct FVector                                             Destination;                                             // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SheikCharacterAIController_BP.SheikCharacterAIController_BP_C.GetAllItemsTargetedByTeammates
	 */
	struct ASheikCharacterAIController_BP_C_GetAllItemsTargetedByTeammates_Params
	{
	public:
		TArray<class AActor*>                                      TargetedItems;                                           // 0x0000(0x0010)  (Parm, OutParm)
	};

	/**
	 * Function SheikCharacterAIController_BP.SheikCharacterAIController_BP_C.IsTeammate
	 */
	struct ASheikCharacterAIController_BP_C_IsTeammate_Params
	{
	public:
		class ASheikCharacter*                                     SheikCharacter;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       IncludeSelfOnTeam;                                       // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       Teammate;                                                // 0x0009(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function SheikCharacterAIController_BP.SheikCharacterAIController_BP_C.GetTeamLeader
	 */
	struct ASheikCharacterAIController_BP_C_GetTeamLeader_Params
	{
	public:
		class ASheikCharacter*                                     TeamLeader;                                              // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
		bool                                                       IsSelf;                                                  // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function SheikCharacterAIController_BP.SheikCharacterAIController_BP_C.GetNumLivingTeammates
	 */
	struct ASheikCharacterAIController_BP_C_GetNumLivingTeammates_Params
	{
	public:
		bool                                                       HasLivingTeammates;                                      // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_X51B[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    NumLivingTeammates;                                      // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SheikCharacterAIController_BP.SheikCharacterAIController_BP_C.CheckTeamBotExpected
	 */
	struct ASheikCharacterAIController_BP_C_CheckTeamBotExpected_Params
	{
	public:
		bool                                                       TeamBotExpected;                                         // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_IL6S[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function SheikCharacterAIController_BP.SheikCharacterAIController_BP_C.UpdateTeamLeader
	 */
	struct ASheikCharacterAIController_BP_C_UpdateTeamLeader_Params
	{
	public:
		class ASheikCharacter*                                     NewTeamLeader;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SheikCharacterAIController_BP.SheikCharacterAIController_BP_C.UpdateBehaviorTreeByLeaderStatus
	 */
	struct ASheikCharacterAIController_BP_C_UpdateBehaviorTreeByLeaderStatus_Params
	{	};

	/**
	 * Function SheikCharacterAIController_BP.SheikCharacterAIController_BP_C.InitializeTeamLeader
	 */
	struct ASheikCharacterAIController_BP_C_InitializeTeamLeader_Params
	{	};

	/**
	 * Function SheikCharacterAIController_BP.SheikCharacterAIController_BP_C.HandleTeammateDowned
	 */
	struct ASheikCharacterAIController_BP_C_HandleTeammateDowned_Params
	{
	public:
		class AIGCharacter*                                        Victim;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SheikCharacterAIController_BP.SheikCharacterAIController_BP_C.HandleTeammateDied
	 */
	struct ASheikCharacterAIController_BP_C_HandleTeammateDied_Params
	{
	public:
		ECauseOfDeath                                              Cause;                                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SheikCharacterAIController_BP.SheikCharacterAIController_BP_C.ChooseNewTeamLeader
	 */
	struct ASheikCharacterAIController_BP_C_ChooseNewTeamLeader_Params
	{
	public:
		ECauseOfDeath                                              Cause;                                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_EVNU[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function SheikCharacterAIController_BP.SheikCharacterAIController_BP_C.CheckLivingTeammates
	 */
	struct ASheikCharacterAIController_BP_C_CheckLivingTeammates_Params
	{	};

	/**
	 * Function SheikCharacterAIController_BP.SheikCharacterAIController_BP_C.GetCharacterWavingAtUs
	 */
	struct ASheikCharacterAIController_BP_C_GetCharacterWavingAtUs_Params
	{
	public:
		bool                                                       PlayerCharactersOnly;                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_G16E[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class ASheikCharacter*                                     WavingCharacter;                                         // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       Found;                                                   // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_QFAG[0x3];                                   // 0x0011(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function SheikCharacterAIController_BP.SheikCharacterAIController_BP_C.SetCurrentAction
	 */
	struct ASheikCharacterAIController_BP_C_SetCurrentAction_Params
	{
	public:
		EBotAction                                                 CurrentAction;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SheikCharacterAIController_BP.SheikCharacterAIController_BP_C.GetCurrentAction
	 */
	struct ASheikCharacterAIController_BP_C_GetCurrentAction_Params
	{
	public:
		EBotAction                                                 CurrentAction;                                           // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SheikCharacterAIController_BP.SheikCharacterAIController_BP_C.GetPerceivedCharacters
	 */
	struct ASheikCharacterAIController_BP_C_GetPerceivedCharacters_Params
	{
	public:
		bool                                                       ExcludeTeammate;                                         // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_MP6W[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<class ASheikCharacter*>                             PerceivedCharacters;                                     // 0x0008(0x0010)  (Parm, OutParm)
	};

	/**
	 * Function SheikCharacterAIController_BP.SheikCharacterAIController_BP_C.GetCanSprint
	 */
	struct ASheikCharacterAIController_BP_C_GetCanSprint_Params
	{
	public:
		bool                                                       CanSprint;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function SheikCharacterAIController_BP.SheikCharacterAIController_BP_C.UpdateSprintStatus
	 */
	struct ASheikCharacterAIController_BP_C_UpdateSprintStatus_Params
	{
	public:
		bool                                                       SprintStatus;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function SheikCharacterAIController_BP.SheikCharacterAIController_BP_C.ResetSprintStatus
	 */
	struct ASheikCharacterAIController_BP_C_ResetSprintStatus_Params
	{	};

	/**
	 * Function SheikCharacterAIController_BP.SheikCharacterAIController_BP_C.GetDesiredSprintStatus
	 */
	struct ASheikCharacterAIController_BP_C_GetDesiredSprintStatus_Params
	{
	public:
		bool                                                       DesiredSprintStatus;                                     // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       InputChangeRequested;                                    // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_E9T2[0x6];                                   // 0x0002(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function SheikCharacterAIController_BP.SheikCharacterAIController_BP_C.GetNearbyEnemyCount
	 */
	struct ASheikCharacterAIController_BP_C_GetNearbyEnemyCount_Params
	{
	public:
		int32_t                                                    NearbyEnemyCount;                                        // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SheikCharacterAIController_BP.SheikCharacterAIController_BP_C.MovementModeChanged
	 */
	struct ASheikCharacterAIController_BP_C_MovementModeChanged_Params
	{
	public:
		class ACharacter*                                          Character;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		EMovementMode                                              PrevMovementMode;                                        // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              PreviousCustomMode;                                      // 0x0009(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SheikCharacterAIController_BP.SheikCharacterAIController_BP_C.GetUsingJumpOrFallNavLink
	 */
	struct ASheikCharacterAIController_BP_C_GetUsingJumpOrFallNavLink_Params
	{
	public:
		bool                                                       UsingJumpOrFallNavLink;                                  // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function SheikCharacterAIController_BP.SheikCharacterAIController_BP_C.GetInitialPassivePhaseEnded
	 */
	struct ASheikCharacterAIController_BP_C_GetInitialPassivePhaseEnded_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function SheikCharacterAIController_BP.SheikCharacterAIController_BP_C.GetUsingClimbNavLink
	 */
	struct ASheikCharacterAIController_BP_C_GetUsingClimbNavLink_Params
	{
	public:
		bool                                                       UsingClimbNavLink;                                       // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function SheikCharacterAIController_BP.SheikCharacterAIController_BP_C.IsBattleRoyaleBot
	 */
	struct ASheikCharacterAIController_BP_C_IsBattleRoyaleBot_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function SheikCharacterAIController_BP.SheikCharacterAIController_BP_C.BotUsesTargeting
	 */
	struct ASheikCharacterAIController_BP_C_BotUsesTargeting_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function SheikCharacterAIController_BP.SheikCharacterAIController_BP_C.SetLastZLocation
	 */
	struct ASheikCharacterAIController_BP_C_SetLastZLocation_Params
	{	};

	/**
	 * Function SheikCharacterAIController_BP.SheikCharacterAIController_BP_C.BPNavArea1HandleFollowPathSegment
	 */
	struct ASheikCharacterAIController_BP_C_BPNavArea1HandleFollowPathSegment_Params
	{
	public:
		class UIGCharacterMovementComponent*                       MoveComp;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      DeltaTime;                                               // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       ReturnValue;                                             // 0x000C(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function SheikCharacterAIController_BP.SheikCharacterAIController_BP_C.BPNavArea1HandleEnteringNavLinkSegment
	 */
	struct ASheikCharacterAIController_BP_C_BPNavArea1HandleEnteringNavLinkSegment_Params
	{
	public:
		int32_t                                                    SegmentStartIndex;                                       // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       ReturnValue;                                             // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function SheikCharacterAIController_BP.SheikCharacterAIController_BP_C.BPNavAreaHandleEnteringEdgeNavLinkSegment
	 */
	struct ASheikCharacterAIController_BP_C_BPNavAreaHandleEnteringEdgeNavLinkSegment_Params
	{
	public:
		int32_t                                                    SegmentStartIndex;                                       // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		ESheikNavAreaFlag                                          NavLinkType;                                             // 0x0004(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       ReturnValue;                                             // 0x0005(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function SheikCharacterAIController_BP.SheikCharacterAIController_BP_C.UpdateSpecialHitsOTG
	 */
	struct ASheikCharacterAIController_BP_C_UpdateSpecialHitsOTG_Params
	{
	public:
		EBotAttackOption                                           Special;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SheikCharacterAIController_BP.SheikCharacterAIController_BP_C.GetClimbCompleted
	 */
	struct ASheikCharacterAIController_BP_C_GetClimbCompleted_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_QVBR[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function SheikCharacterAIController_BP.SheikCharacterAIController_BP_C.WanderLimitReached
	 */
	struct ASheikCharacterAIController_BP_C_WanderLimitReached_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_B9Z3[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function SheikCharacterAIController_BP.SheikCharacterAIController_BP_C.SetAIPerceptionHandlingEnabled
	 */
	struct ASheikCharacterAIController_BP_C_SetAIPerceptionHandlingEnabled_Params
	{
	public:
		bool                                                       Enabled;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function SheikCharacterAIController_BP.SheikCharacterAIController_BP_C.ClearAndFindNewReviveTarget
	 */
	struct ASheikCharacterAIController_BP_C_ClearAndFindNewReviveTarget_Params
	{	};

	/**
	 * Function SheikCharacterAIController_BP.SheikCharacterAIController_BP_C.SpecialMoveEquipped
	 */
	struct ASheikCharacterAIController_BP_C_SpecialMoveEquipped_Params
	{	};

	/**
	 * Function SheikCharacterAIController_BP.SheikCharacterAIController_BP_C.RefreshWakeUpAttackOptions
	 */
	struct ASheikCharacterAIController_BP_C_RefreshWakeUpAttackOptions_Params
	{	};

	/**
	 * Function SheikCharacterAIController_BP.SheikCharacterAIController_BP_C.ResetTrappedVariables
	 */
	struct ASheikCharacterAIController_BP_C_ResetTrappedVariables_Params
	{	};

	/**
	 * Function SheikCharacterAIController_BP.SheikCharacterAIController_BP_C.DetectTrapped
	 */
	struct ASheikCharacterAIController_BP_C_DetectTrapped_Params
	{
	public:
		bool                                                       Trapped;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_W48J[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function SheikCharacterAIController_BP.SheikCharacterAIController_BP_C.AttemptChangeTargets
	 */
	struct ASheikCharacterAIController_BP_C_AttemptChangeTargets_Params
	{
	public:
		class AActor*                                              PotentialTarget;                                         // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SheikCharacterAIController_BP.SheikCharacterAIController_BP_C.RefreshGroundAttackOptions
	 */
	struct ASheikCharacterAIController_BP_C_RefreshGroundAttackOptions_Params
	{	};

	/**
	 * Function SheikCharacterAIController_BP.SheikCharacterAIController_BP_C.RefreshAttackOptions
	 */
	struct ASheikCharacterAIController_BP_C_RefreshAttackOptions_Params
	{	};

	/**
	 * Function SheikCharacterAIController_BP.SheikCharacterAIController_BP_C.GetMoveTier
	 */
	struct ASheikCharacterAIController_BP_C_GetMoveTier_Params
	{
	public:
		EBotAttackOption                                           Move;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		EMoveTier                                                  Tier;                                                    // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SheikCharacterAIController_BP.SheikCharacterAIController_BP_C.GetMoveAttackRange
	 */
	struct ASheikCharacterAIController_BP_C_GetMoveAttackRange_Params
	{
	public:
		EBotAttackOption                                           Attack;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_5OQ5[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      AttackRange;                                             // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SheikCharacterAIController_BP.SheikCharacterAIController_BP_C.GetMontageAttackRange
	 */
	struct ASheikCharacterAIController_BP_C_GetMontageAttackRange_Params
	{
	public:
		class UIGMoveMontage*                                      Montage;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       RangeFound;                                              // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_DAJ0[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      AttackRange;                                             // 0x000C(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SheikCharacterAIController_BP.SheikCharacterAIController_BP_C.GetComboStringInitialAttackRange
	 */
	struct ASheikCharacterAIController_BP_C_GetComboStringInitialAttackRange_Params
	{
	public:
		struct FIGBotComboString                                   IGBotComboString;                                        // 0x0000(0x0018)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		float                                                      AttackRange;                                             // 0x0018(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SheikCharacterAIController_BP.SheikCharacterAIController_BP_C.ChooseWeaponAttack
	 */
	struct ASheikCharacterAIController_BP_C_ChooseWeaponAttack_Params
	{
	public:
		bool                                                       AttackChosen;                                            // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_MMC2[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FIGBotComboString                                   Attack;                                                  // 0x0008(0x0018)  (Parm, OutParm)
		float                                                      AttackRange;                                             // 0x0020(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SheikCharacterAIController_BP.SheikCharacterAIController_BP_C.ChooseWakeUpAttack
	 */
	struct ASheikCharacterAIController_BP_C_ChooseWakeUpAttack_Params
	{
	public:
		EBotAttackOption                                           Attack;                                                  // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_UZ43[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function SheikCharacterAIController_BP.SheikCharacterAIController_BP_C.ChooseAttack
	 */
	struct ASheikCharacterAIController_BP_C_ChooseAttack_Params
	{
	public:
		bool                                                       TargetKnockedDown;                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		EBotAttackOption                                           ChosenAttack;                                            // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_IBSE[0x2];                                   // 0x0002(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      AttackRange;                                             // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SheikCharacterAIController_BP.SheikCharacterAIController_BP_C.CheckAttackStillValid
	 */
	struct ASheikCharacterAIController_BP_C_CheckAttackStillValid_Params
	{
	public:
		EBotAttackOption                                           Attack;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       TargetKnockedDown;                                       // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0002(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function SheikCharacterAIController_BP.SheikCharacterAIController_BP_C.AttackExecuted
	 */
	struct ASheikCharacterAIController_BP_C_AttackExecuted_Params
	{
	public:
		EBotAttackOption                                           Attack;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       IsWakeUpAttack;                                          // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_DOKM[0x2];                                   // 0x0002(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function SheikCharacterAIController_BP.SheikCharacterAIController_BP_C.ReleaseAndClearTargetItem
	 */
	struct ASheikCharacterAIController_BP_C_ReleaseAndClearTargetItem_Params
	{	};

	/**
	 * Function SheikCharacterAIController_BP.SheikCharacterAIController_BP_C.UpdateFreefallDistanceThreshold
	 */
	struct ASheikCharacterAIController_BP_C_UpdateFreefallDistanceThreshold_Params
	{	};

	/**
	 * Function SheikCharacterAIController_BP.SheikCharacterAIController_BP_C.CompareToCurrentTarget
	 */
	struct ASheikCharacterAIController_BP_C_CompareToCurrentTarget_Params
	{
	public:
		class AActor*                                              PotentialTarget;                                         // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       PotentialIsBetter;                                       // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_T8MD[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function SheikCharacterAIController_BP.SheikCharacterAIController_BP_C.GetCharacterSensed
	 */
	struct ASheikCharacterAIController_BP_C_GetCharacterSensed_Params
	{
	public:
		class AActor*                                              Character;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       CurrentlySeen;                                           // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       RecentlySeen;                                            // 0x0009(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_G4IB[0x6];                                   // 0x000A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function SheikCharacterAIController_BP.SheikCharacterAIController_BP_C.IsVictimSmokeBot
	 */
	struct ASheikCharacterAIController_BP_C_IsVictimSmokeBot_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function SheikCharacterAIController_BP.SheikCharacterAIController_BP_C.IsSmokeBot
	 */
	struct ASheikCharacterAIController_BP_C_IsSmokeBot_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_SUEA[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function SheikCharacterAIController_BP.SheikCharacterAIController_BP_C.IsClimberSmokeBot
	 */
	struct ASheikCharacterAIController_BP_C_IsClimberSmokeBot_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function SheikCharacterAIController_BP.SheikCharacterAIController_BP_C.IsAttackerSmokeBot
	 */
	struct ASheikCharacterAIController_BP_C_IsAttackerSmokeBot_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		bool                                                       Striker;                                                 // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function SheikCharacterAIController_BP.SheikCharacterAIController_BP_C.UpdateHasSpecialMoves
	 */
	struct ASheikCharacterAIController_BP_C_UpdateHasSpecialMoves_Params
	{	};

	/**
	 * Function SheikCharacterAIController_BP.SheikCharacterAIController_BP_C.LookForWall
	 */
	struct ASheikCharacterAIController_BP_C_LookForWall_Params
	{	};

	/**
	 * Function SheikCharacterAIController_BP.SheikCharacterAIController_BP_C.LookForAttackVictim
	 */
	struct ASheikCharacterAIController_BP_C_LookForAttackVictim_Params
	{	};

	/**
	 * Function SheikCharacterAIController_BP.SheikCharacterAIController_BP_C.InitSmokeBot
	 */
	struct ASheikCharacterAIController_BP_C_InitSmokeBot_Params
	{	};

	/**
	 * Function SheikCharacterAIController_BP.SheikCharacterAIController_BP_C.FindTargetForSmokeBot
	 */
	struct ASheikCharacterAIController_BP_C_FindTargetForSmokeBot_Params
	{	};

	/**
	 * Function SheikCharacterAIController_BP.SheikCharacterAIController_BP_C.UpdateTargetActor
	 */
	struct ASheikCharacterAIController_BP_C_UpdateTargetActor_Params
	{
	public:
		class ASheikCharacter*                                     TargetActor;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SheikCharacterAIController_BP.SheikCharacterAIController_BP_C.UpdateDamagedFlag
	 */
	struct ASheikCharacterAIController_BP_C_UpdateDamagedFlag_Params
	{
	public:
		bool                                                       Damaged;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function SheikCharacterAIController_BP.SheikCharacterAIController_BP_C.CharacterDamaged
	 */
	struct ASheikCharacterAIController_BP_C_CharacterDamaged_Params
	{
	public:
		struct FIGInstanceHitData                                  HitData;                                                 // 0x0000(0x0048)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	};

	/**
	 * Function SheikCharacterAIController_BP.SheikCharacterAIController_BP_C.ReceivePossess
	 */
	struct ASheikCharacterAIController_BP_C_ReceivePossess_Params
	{
	public:
		class APawn*                                               PossessedPawn;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SheikCharacterAIController_BP.SheikCharacterAIController_BP_C.ReceiveTick
	 */
	struct ASheikCharacterAIController_BP_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SheikCharacterAIController_BP.SheikCharacterAIController_BP_C.OnFreeFallEnabled
	 */
	struct ASheikCharacterAIController_BP_C_OnFreeFallEnabled_Params
	{	};

	/**
	 * Function SheikCharacterAIController_BP.SheikCharacterAIController_BP_C.ReceiveUnPossess
	 */
	struct ASheikCharacterAIController_BP_C_ReceiveUnPossess_Params
	{
	public:
		class APawn*                                               UnpossessedPawn;                                         // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SheikCharacterAIController_BP.SheikCharacterAIController_BP_C.BPOnAttackResultDetermined
	 */
	struct ASheikCharacterAIController_BP_C_BPOnAttackResultDetermined_Params
	{
	public:
		EQueuedAttackResult                                        AttackResult;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_0V04[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class AActor*                                              AttackedActor;                                           // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SheikCharacterAIController_BP.SheikCharacterAIController_BP_C.BPOnMoveMontageFinished
	 */
	struct ASheikCharacterAIController_BP_C_BPOnMoveMontageFinished_Params
	{
	public:
		class UAnimMontage*                                        MoveMontage;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bInterrupted;                                            // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function SheikCharacterAIController_BP.SheikCharacterAIController_BP_C.OnCharacterInputToggled
	 */
	struct ASheikCharacterAIController_BP_C_OnCharacterInputToggled_Params
	{
	public:
		bool                                                       bIsEnabled;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function SheikCharacterAIController_BP.SheikCharacterAIController_BP_C.On Target Perception Updated
	 */
	struct ASheikCharacterAIController_BP_C_OnTargetPerceptionUpdated_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FAIStimulus                                         Stimulus;                                                // 0x0008(0x003C)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	};

	/**
	 * Function SheikCharacterAIController_BP.SheikCharacterAIController_BP_C.OnSpringboardLaunched
	 */
	struct ASheikCharacterAIController_BP_C_OnSpringboardLaunched_Params
	{	};

	/**
	 * Function SheikCharacterAIController_BP.SheikCharacterAIController_BP_C.BPOnWakeupWindowStarted
	 */
	struct ASheikCharacterAIController_BP_C_BPOnWakeupWindowStarted_Params
	{	};

	/**
	 * Function SheikCharacterAIController_BP.SheikCharacterAIController_BP_C.PostTeleport
	 */
	struct ASheikCharacterAIController_BP_C_PostTeleport_Params
	{	};

	/**
	 * Function SheikCharacterAIController_BP.SheikCharacterAIController_BP_C.ExecuteUbergraph_SheikCharacterAIController_BP
	 */
	struct ASheikCharacterAIController_BP_C_ExecuteUbergraph_SheikCharacterAIController_BP_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_T8DA[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function SheikCharacterAIController_BP.SheikCharacterAIController_BP_C.TeamLeaderReplaced__DelegateSignature
	 */
	struct ASheikCharacterAIController_BP_C_TeamLeaderReplaced__DelegateSignature_Params
	{
	public:
		class ASheikCharacter*                                     NewTeamLeader;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SheikCharacterAIController_BP.SheikCharacterAIController_BP_C.MoveMontageEnded__DelegateSignature
	 */
	struct ASheikCharacterAIController_BP_C_MoveMontageEnded__DelegateSignature_Params
	{
	public:
		bool                                                       Interrupted;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
