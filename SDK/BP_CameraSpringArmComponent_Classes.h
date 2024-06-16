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
	 * BlueprintGeneratedClass BP_CameraSpringArmComponent.BP_CameraSpringArmComponent_C
	 * Size -> 0x0049 (FullSize[0x0649] - InheritedSize[0x0600])
	 */
	class UBP_CameraSpringArmComponent_C : public USheikSpringArmComponent
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0600(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UCameraComponent*                                    Camera;                                                  // 0x0608(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      PitchRotateMaxSpeed_1;                                   // 0x0610(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash
		float                                                      PitchRotateSpeed_1;                                      // 0x0614(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UClass*                                              ClashCamShakeClass_1;                                    // 0x0618(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       ClashCamShakeEnabled;                                    // 0x0620(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_MYRY[0x7];                                   // 0x0621(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class ASheikCharacter*                                     Character;                                               // 0x0628(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      DeltaSeconds;                                            // 0x0630(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      MaxTimeBetweenFollowUpAttacks_1;                         // 0x0634(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash
		float                                                      YawRotateMaxSpeed_1;                                     // 0x0638(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash
		float                                                      YawRotateSpeed_1;                                        // 0x063C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      PitchMin;                                                // 0x0640(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      PitchMax;                                                // 0x0644(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       TargetAngleReachedCombat;                                // 0x0648(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void GetFalling(bool* Falling);
		void CheckExitingElbowDrop();
		void IsCombatTargetValid(bool* Valid);
		void CheckCombatDash();
		void GetMontageTag(EIGCameraBehavior* CameraBehavior);
		void HandleCameraOffset();
		void UpdateZoomState(EIGCameraZoomState NewState);
		void HandleClimbingInput();
		struct FVector GetCharacterWorldLocation();
		bool CheckApproachingEdge();
		void HandleVisibilityOfAllPlayers();
		void PlayPinAnimation();
		void DeathSpin();
		void ResetCombatTarget();
		void AutoPitchCombat();
		void AutoPitchFall();
		void ReorientPitch();
		void AutoYawTraversal();
		void AutoYawClimb();
		void AutoPitchClimb();
		void ReceiveTick(float DeltaSeconds);
		void ReceiveBeginPlay();
		void SpringArmActivated(class UActorComponent* Component, bool bReset);
		void GameFlowStateChanged(EGameFlowState GameFlowState);
		void NumPlayersAliveChanged(int32_t NumPlayersAlive);
		void MovementModeChanged(class ACharacter* Character, EMovementMode PrevMovementMode, unsigned char PreviousCustomMode);
		void DeathSpinBP();
		void PlayPinAnimationBP();
		void HandleClimbInputBP();
		void AutoYawClimbBP();
		void AutoPitchClimbBP();
		void AutoPitchCombatBP();
		void ReorientPitchBP();
		void AutoPitchFallBP();
		void AutoYawTraversalBP();
		void HandleGiantSwingBP();
		void HandleCameraOffsetBP();
		void HandlePlayersVisibilityBP();
		void ExecuteUbergraph_BP_CameraSpringArmComponent(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
