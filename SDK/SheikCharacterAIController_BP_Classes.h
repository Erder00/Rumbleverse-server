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
	 * BlueprintGeneratedClass SheikCharacterAIController_BP.SheikCharacterAIController_BP_C
	 * Size -> 0x0420 (FullSize[0x0958] - InheritedSize[0x0538])
	 */
	class ASheikCharacterAIController_BP_C : public ASheikAICharacterController
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0538(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UAIPerceptionComponent*                              AIPerception;                                            // 0x0540(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class FName                                                BouncingFlagName;                                        // 0x0548(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FName                                                DamagedFlagName;                                         // 0x0550(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FName                                                IsCombatTargetName;                                      // 0x0558(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FName                                                LastHitSuccessfulName;                                   // 0x0560(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FName                                                LastTargetActorName;                                     // 0x0568(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FName                                                ReviveTargetName;                                        // 0x0570(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FName                                                TargetActorName;                                         // 0x0578(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FName                                                TargetItemName;                                          // 0x0580(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FName                                                TargetLocationName;                                      // 0x0588(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FName                                                TimeCannonLaunchEndedName;                               // 0x0590(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FName                                                TimeTargetActorChosenName;                               // 0x0598(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FName                                                TrappedName;                                             // 0x05A0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ASheikCharacter*                                     CurrentTarget;                                           // 0x05A8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ASheikCharacter*                                     PossessedCharacter;                                      // 0x05B0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		class FName                                                HasLeftSpecialName;                                      // 0x05B8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FName                                                HasRightSpecialName;                                     // 0x05C0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FName                                                IsStrikerName;                                           // 0x05C8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FName                                                StartLocationName;                                       // 0x05D0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FName                                                StartRotationName;                                       // 0x05D8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FName                                                TargetFoundName;                                         // 0x05E0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      AttackVictimSearchDistance;                              // 0x05E8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      WallCheckDistanceSmoke;                                  // 0x05EC(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      AttackRangeWeight;                                       // 0x05F0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      CurrentFacingWeight;                                     // 0x05F4(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      NoObstructionsWeight;                                    // 0x05F8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_PH02[0x4];                                   // 0x05FC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TMap<EBotAttackOption, float>                              AttackTimestamps;                                        // 0x0600(0x0050) Edit, BlueprintVisible, DisableEditOnInstance
		TMap<EBotAttackOption, float>                              WakeUpAttackTimestamps;                                  // 0x0650(0x0050) Edit, BlueprintVisible, DisableEditOnInstance
		unsigned char                                              CurrentAttackOptions[0x50];                              // 0x06A0(0x0050) UNKNOWN PROPERTY: SetProperty
		unsigned char                                              CurrentGroundAttackOptions[0x50];                        // 0x06F0(0x0050) UNKNOWN PROPERTY: SetProperty
		class FScriptMulticastDelegate                             MoveMontageEnded;                                        // 0x0740(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		float                                                      EnemyNearbyDetectionDistance;                            // 0x0750(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      InitialPassivePhaseDuration;                             // 0x0754(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      StaminaRegenCooldownDuration;                            // 0x0758(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      StaminaRegenRate;                                        // 0x075C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FName                                                WakeUpAttackPossibleName;                                // 0x0760(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       MovementIsStopped;                                       // 0x0768(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_9VOW[0x3];                                   // 0x0769(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      TimeMovementStopped;                                     // 0x076C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      TrappedMinDuration_Walking;                              // 0x0770(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_0TPL[0x4];                                   // 0x0774(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              CurrentWakeUpAttackOptions[0x50];                        // 0x0778(0x0050) UNKNOWN PROPERTY: SetProperty
		TMap<EBotAttackOption, class UIGMoveMontage*>              SpecialMoveMontages;                                     // 0x07C8(0x0050) Edit, BlueprintVisible, DisableEditOnInstance
		TMap<EBotAttackOption, bool>                               SpecialsHitOTG;                                          // 0x0818(0x0050) Edit, BlueprintVisible, DisableEditOnInstance
		float                                                      DefaultAttackRange;                                      // 0x0868(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    WanderLimitPerTargetActor;                               // 0x086C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FName                                                WanderCountName;                                         // 0x0870(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      ClimbCompletedAcceptanceRadius;                          // 0x0878(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      TrappedMinDuration_Climbing;                             // 0x087C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      LastZLocation;                                           // 0x0880(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       UsingClimbNavLink;                                       // 0x0884(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       UsingJumpOrFallNavLink;                                  // 0x0885(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       Sprinting;                                               // 0x0886(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_QS1J[0x1];                                   // 0x0887(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      TimeSprintStatusChanged;                                 // 0x0888(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      MinDistanceForSprint;                                    // 0x088C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		EBotAction                                                 CurrentAction;                                           // 0x0890(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_7PP5[0x7];                                   // 0x0891(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class ASheikCharacter*>                             Teammates;                                               // 0x0898(0x0010) Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance
		class ASheikCharacter*                                     TeamLeader;                                              // 0x08A8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		class FScriptMulticastDelegate                             TeamLeaderReplaced;                                      // 0x08B0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		bool                                                       IsTeamLeader;                                            // 0x08C0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_6JWM[0x3];                                   // 0x08C1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                FollowerProfile;                                         // 0x08C4(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FName                                                LeaderProfile;                                           // 0x08CC(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    NumSpecialMovesEquipped;                                 // 0x08D4(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class APlaygroundMode_BotSpawner_C*                        Spawner;                                                 // 0x08D8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		class FName                                                Playground_ActionDistanceName;                           // 0x08E0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FName                                                Playground_ActionToPerformName;                          // 0x08E8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FName                                                Playground_DamagedName;                                  // 0x08F0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FName                                                Playground_IdleDurationBeforeTeleportName;               // 0x08F8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FName                                                Playground_InCircleName;                                 // 0x0900(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FName                                                Playground_InitializedName;                              // 0x0908(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FName                                                Playground_ResetOnTargetLostName;                        // 0x0910(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FName                                                Playground_TargetActorName;                              // 0x0918(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FName                                                Playground_TimeBetweenActionsName;                       // 0x0920(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FName                                                Playground_TimeLastActionName;                           // 0x0928(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FName                                                Playground_WakeUpAttackPossibleName;                     // 0x0930(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       CheckForBlockingTargetsEnabled;                          // 0x0938(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_VLG0[0x7];                                   // 0x0939(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FIGBotComboString                                   CurrentWeaponCombo;                                      // 0x0940(0x0018) Edit, BlueprintVisible, DisableEditOnInstance

	public:
		void IsWithinRadiusOfPathTarget(float AcceptanceRadius, bool* Output);
		bool GetCombatPossible();
		void IsCheckForBlockingTargetsEnabled(bool* CheckForBlockingTargetsEnabled);
		void CheckForNewTargetBlockingPath();
		void CheckCanSprintWhileTargetStunned(bool* CanSprint);
		void SetTrapped(EBotTrappedSource TrappedReason);
		void PlaygroundBotDamaged(const struct FIGInstanceHitData& HitData);
		bool GetCharacterOTG(class ASheikCharacter* Character);
		bool IsPlaygroundBot();
		void InitPlaygroundBot();
		void CharacterEnteredCircle(class ASheikCharacter* Character);
		void BotExitedCircle(class ASheikCharacter* Bot);
		void GetClosestTeammateInCombat(class ASheikCharacter** ClosestTeammate);
		void GetAnyTeammateInCombat(bool* TeammateInCombat);
		void GetAllCharactersTargetedByTeammates(bool OnlyIncludeCombatTargets, TArray<class AActor*>* TargetedCharacters);
		void GetCurrentDestination(struct FVector* Destination);
		void GetAllItemsTargetedByTeammates(TArray<class AActor*>* TargetedItems);
		void IsTeammate(class ASheikCharacter* SheikCharacter, bool IncludeSelfOnTeam, bool* Teammate);
		void GetTeamLeader(class ASheikCharacter** TeamLeader, bool* IsSelf);
		void GetNumLivingTeammates(bool* HasLivingTeammates, int32_t* NumLivingTeammates);
		void CheckTeamBotExpected(bool* TeamBotExpected);
		void UpdateTeamLeader(class ASheikCharacter* NewTeamLeader);
		void UpdateBehaviorTreeByLeaderStatus();
		void InitializeTeamLeader();
		void HandleTeammateDowned(class AIGCharacter* Victim);
		void HandleTeammateDied(ECauseOfDeath Cause);
		void ChooseNewTeamLeader(ECauseOfDeath Cause);
		void CheckLivingTeammates();
		void GetCharacterWavingAtUs(bool PlayerCharactersOnly, class ASheikCharacter** WavingCharacter, bool* Found);
		void SetCurrentAction(EBotAction CurrentAction);
		void GetCurrentAction(EBotAction* CurrentAction);
		void GetPerceivedCharacters(bool ExcludeTeammate, TArray<class ASheikCharacter*>* PerceivedCharacters);
		void GetCanSprint(bool* CanSprint);
		void UpdateSprintStatus(bool SprintStatus);
		void ResetSprintStatus();
		void GetDesiredSprintStatus(bool* DesiredSprintStatus, bool* InputChangeRequested);
		void GetNearbyEnemyCount(int32_t* NearbyEnemyCount);
		void MovementModeChanged(class ACharacter* Character, EMovementMode PrevMovementMode, unsigned char PreviousCustomMode);
		void GetUsingJumpOrFallNavLink(bool* UsingJumpOrFallNavLink);
		bool GetInitialPassivePhaseEnded();
		void GetUsingClimbNavLink(bool* UsingClimbNavLink);
		bool IsBattleRoyaleBot();
		bool BotUsesTargeting();
		void SetLastZLocation();
		bool BPNavArea1HandleFollowPathSegment(class UIGCharacterMovementComponent* MoveComp, float DeltaTime);
		bool BPNavArea1HandleEnteringNavLinkSegment(int32_t SegmentStartIndex);
		bool BPNavAreaHandleEnteringEdgeNavLinkSegment(int32_t SegmentStartIndex, ESheikNavAreaFlag NavLinkType);
		void UpdateSpecialHitsOTG(EBotAttackOption Special);
		bool GetClimbCompleted();
		bool WanderLimitReached();
		void SetAIPerceptionHandlingEnabled(bool Enabled);
		void ClearAndFindNewReviveTarget();
		void SpecialMoveEquipped();
		void RefreshWakeUpAttackOptions();
		void ResetTrappedVariables();
		void DetectTrapped(bool* Trapped);
		void AttemptChangeTargets(class AActor* PotentialTarget);
		void RefreshGroundAttackOptions();
		void RefreshAttackOptions();
		void GetMoveTier(EBotAttackOption Move, EMoveTier* Tier);
		void GetMoveAttackRange(EBotAttackOption Attack, float* AttackRange);
		void GetMontageAttackRange(class UIGMoveMontage* Montage, bool* RangeFound, float* AttackRange);
		void GetComboStringInitialAttackRange(const struct FIGBotComboString& IGBotComboString, float* AttackRange);
		void ChooseWeaponAttack(bool* AttackChosen, struct FIGBotComboString* Attack, float* AttackRange);
		void ChooseWakeUpAttack(EBotAttackOption* Attack);
		void ChooseAttack(bool TargetKnockedDown, EBotAttackOption* ChosenAttack, float* AttackRange);
		bool CheckAttackStillValid(EBotAttackOption Attack, bool TargetKnockedDown);
		void AttackExecuted(EBotAttackOption Attack, bool IsWakeUpAttack);
		void ReleaseAndClearTargetItem();
		void UpdateFreefallDistanceThreshold();
		void CompareToCurrentTarget(class AActor* PotentialTarget, bool* PotentialIsBetter);
		void GetCharacterSensed(class AActor* Character, bool* CurrentlySeen, bool* RecentlySeen);
		bool IsVictimSmokeBot();
		bool IsSmokeBot();
		bool IsClimberSmokeBot();
		bool IsAttackerSmokeBot(bool* Striker);
		void UpdateHasSpecialMoves();
		void LookForWall();
		void LookForAttackVictim();
		void InitSmokeBot();
		void FindTargetForSmokeBot();
		void UpdateTargetActor(class ASheikCharacter* TargetActor);
		void UpdateDamagedFlag(bool Damaged);
		void CharacterDamaged(const struct FIGInstanceHitData& HitData);
		void ReceivePossess(class APawn* PossessedPawn);
		void ReceiveTick(float DeltaSeconds);
		void OnFreeFallEnabled();
		void ReceiveUnPossess(class APawn* UnpossessedPawn);
		void BPOnAttackResultDetermined(EQueuedAttackResult AttackResult, class AActor* AttackedActor);
		void BPOnMoveMontageFinished(class UAnimMontage* MoveMontage, bool bInterrupted);
		void OnCharacterInputToggled(bool bIsEnabled);
		void OnTargetPerceptionUpdated(class AActor* Actor, const struct FAIStimulus& Stimulus);
		void OnSpringboardLaunched();
		void BPOnWakeupWindowStarted();
		void PostTeleport();
		void ExecuteUbergraph_SheikCharacterAIController_BP(int32_t EntryPoint);
		void TeamLeaderReplaced__DelegateSignature(class ASheikCharacter* NewTeamLeader);
		void MoveMontageEnded__DelegateSignature(bool Interrupted);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
