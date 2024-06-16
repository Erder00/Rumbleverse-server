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
	 * Function BP_CameraSpringArmComponent.BP_CameraSpringArmComponent_C.GetFalling
	 */
	struct UBP_CameraSpringArmComponent_C_GetFalling_Params
	{
	public:
		bool                                                       Falling;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_C8DA[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_CameraSpringArmComponent.BP_CameraSpringArmComponent_C.CheckExitingElbowDrop
	 */
	struct UBP_CameraSpringArmComponent_C_CheckExitingElbowDrop_Params
	{	};

	/**
	 * Function BP_CameraSpringArmComponent.BP_CameraSpringArmComponent_C.IsCombatTargetValid
	 */
	struct UBP_CameraSpringArmComponent_C_IsCombatTargetValid_Params
	{
	public:
		bool                                                       Valid;                                                   // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_CameraSpringArmComponent.BP_CameraSpringArmComponent_C.CheckCombatDash
	 */
	struct UBP_CameraSpringArmComponent_C_CheckCombatDash_Params
	{	};

	/**
	 * Function BP_CameraSpringArmComponent.BP_CameraSpringArmComponent_C.GetMontageTag
	 */
	struct UBP_CameraSpringArmComponent_C_GetMontageTag_Params
	{
	public:
		EIGCameraBehavior                                          CameraBehavior;                                          // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_Y67J[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_CameraSpringArmComponent.BP_CameraSpringArmComponent_C.HandleCameraOffset
	 */
	struct UBP_CameraSpringArmComponent_C_HandleCameraOffset_Params
	{	};

	/**
	 * Function BP_CameraSpringArmComponent.BP_CameraSpringArmComponent_C.UpdateZoomState
	 */
	struct UBP_CameraSpringArmComponent_C_UpdateZoomState_Params
	{
	public:
		EIGCameraZoomState                                         NewState;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_CIXD[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_CameraSpringArmComponent.BP_CameraSpringArmComponent_C.HandleClimbingInput
	 */
	struct UBP_CameraSpringArmComponent_C_HandleClimbingInput_Params
	{	};

	/**
	 * Function BP_CameraSpringArmComponent.BP_CameraSpringArmComponent_C.GetCharacterWorldLocation
	 */
	struct UBP_CameraSpringArmComponent_C_GetCharacterWorldLocation_Params
	{
	public:
		struct FVector                                             ReturnValue;                                             // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_CameraSpringArmComponent.BP_CameraSpringArmComponent_C.CheckApproachingEdge
	 */
	struct UBP_CameraSpringArmComponent_C_CheckApproachingEdge_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_CameraSpringArmComponent.BP_CameraSpringArmComponent_C.HandleVisibilityOfAllPlayers
	 */
	struct UBP_CameraSpringArmComponent_C_HandleVisibilityOfAllPlayers_Params
	{	};

	/**
	 * Function BP_CameraSpringArmComponent.BP_CameraSpringArmComponent_C.PlayPinAnimation
	 */
	struct UBP_CameraSpringArmComponent_C_PlayPinAnimation_Params
	{	};

	/**
	 * Function BP_CameraSpringArmComponent.BP_CameraSpringArmComponent_C.DeathSpin
	 */
	struct UBP_CameraSpringArmComponent_C_DeathSpin_Params
	{	};

	/**
	 * Function BP_CameraSpringArmComponent.BP_CameraSpringArmComponent_C.ResetCombatTarget
	 */
	struct UBP_CameraSpringArmComponent_C_ResetCombatTarget_Params
	{	};

	/**
	 * Function BP_CameraSpringArmComponent.BP_CameraSpringArmComponent_C.AutoPitchCombat
	 */
	struct UBP_CameraSpringArmComponent_C_AutoPitchCombat_Params
	{	};

	/**
	 * Function BP_CameraSpringArmComponent.BP_CameraSpringArmComponent_C.AutoPitchFall
	 */
	struct UBP_CameraSpringArmComponent_C_AutoPitchFall_Params
	{	};

	/**
	 * Function BP_CameraSpringArmComponent.BP_CameraSpringArmComponent_C.ReorientPitch
	 */
	struct UBP_CameraSpringArmComponent_C_ReorientPitch_Params
	{	};

	/**
	 * Function BP_CameraSpringArmComponent.BP_CameraSpringArmComponent_C.AutoYawTraversal
	 */
	struct UBP_CameraSpringArmComponent_C_AutoYawTraversal_Params
	{	};

	/**
	 * Function BP_CameraSpringArmComponent.BP_CameraSpringArmComponent_C.AutoYawClimb
	 */
	struct UBP_CameraSpringArmComponent_C_AutoYawClimb_Params
	{	};

	/**
	 * Function BP_CameraSpringArmComponent.BP_CameraSpringArmComponent_C.AutoPitchClimb
	 */
	struct UBP_CameraSpringArmComponent_C_AutoPitchClimb_Params
	{	};

	/**
	 * Function BP_CameraSpringArmComponent.BP_CameraSpringArmComponent_C.ReceiveTick
	 */
	struct UBP_CameraSpringArmComponent_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_CameraSpringArmComponent.BP_CameraSpringArmComponent_C.ReceiveBeginPlay
	 */
	struct UBP_CameraSpringArmComponent_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BP_CameraSpringArmComponent.BP_CameraSpringArmComponent_C.SpringArmActivated
	 */
	struct UBP_CameraSpringArmComponent_C_SpringArmActivated_Params
	{
	public:
		class UActorComponent*                                     Component;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bReset;                                                  // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_CameraSpringArmComponent.BP_CameraSpringArmComponent_C.GameFlowStateChanged
	 */
	struct UBP_CameraSpringArmComponent_C_GameFlowStateChanged_Params
	{
	public:
		EGameFlowState                                             GameFlowState;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_CameraSpringArmComponent.BP_CameraSpringArmComponent_C.NumPlayersAliveChanged
	 */
	struct UBP_CameraSpringArmComponent_C_NumPlayersAliveChanged_Params
	{
	public:
		int32_t                                                    NumPlayersAlive;                                         // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_CameraSpringArmComponent.BP_CameraSpringArmComponent_C.MovementModeChanged
	 */
	struct UBP_CameraSpringArmComponent_C_MovementModeChanged_Params
	{
	public:
		class ACharacter*                                          Character;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		EMovementMode                                              PrevMovementMode;                                        // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              PreviousCustomMode;                                      // 0x0009(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_CameraSpringArmComponent.BP_CameraSpringArmComponent_C.DeathSpinBP
	 */
	struct UBP_CameraSpringArmComponent_C_DeathSpinBP_Params
	{	};

	/**
	 * Function BP_CameraSpringArmComponent.BP_CameraSpringArmComponent_C.PlayPinAnimationBP
	 */
	struct UBP_CameraSpringArmComponent_C_PlayPinAnimationBP_Params
	{	};

	/**
	 * Function BP_CameraSpringArmComponent.BP_CameraSpringArmComponent_C.HandleClimbInputBP
	 */
	struct UBP_CameraSpringArmComponent_C_HandleClimbInputBP_Params
	{	};

	/**
	 * Function BP_CameraSpringArmComponent.BP_CameraSpringArmComponent_C.AutoYawClimbBP
	 */
	struct UBP_CameraSpringArmComponent_C_AutoYawClimbBP_Params
	{	};

	/**
	 * Function BP_CameraSpringArmComponent.BP_CameraSpringArmComponent_C.AutoPitchClimbBP
	 */
	struct UBP_CameraSpringArmComponent_C_AutoPitchClimbBP_Params
	{	};

	/**
	 * Function BP_CameraSpringArmComponent.BP_CameraSpringArmComponent_C.AutoPitchCombatBP
	 */
	struct UBP_CameraSpringArmComponent_C_AutoPitchCombatBP_Params
	{	};

	/**
	 * Function BP_CameraSpringArmComponent.BP_CameraSpringArmComponent_C.ReorientPitchBP
	 */
	struct UBP_CameraSpringArmComponent_C_ReorientPitchBP_Params
	{	};

	/**
	 * Function BP_CameraSpringArmComponent.BP_CameraSpringArmComponent_C.AutoPitchFallBP
	 */
	struct UBP_CameraSpringArmComponent_C_AutoPitchFallBP_Params
	{	};

	/**
	 * Function BP_CameraSpringArmComponent.BP_CameraSpringArmComponent_C.AutoYawTraversalBP
	 */
	struct UBP_CameraSpringArmComponent_C_AutoYawTraversalBP_Params
	{	};

	/**
	 * Function BP_CameraSpringArmComponent.BP_CameraSpringArmComponent_C.HandleGiantSwingBP
	 */
	struct UBP_CameraSpringArmComponent_C_HandleGiantSwingBP_Params
	{	};

	/**
	 * Function BP_CameraSpringArmComponent.BP_CameraSpringArmComponent_C.HandleCameraOffsetBP
	 */
	struct UBP_CameraSpringArmComponent_C_HandleCameraOffsetBP_Params
	{	};

	/**
	 * Function BP_CameraSpringArmComponent.BP_CameraSpringArmComponent_C.HandlePlayersVisibilityBP
	 */
	struct UBP_CameraSpringArmComponent_C_HandlePlayersVisibilityBP_Params
	{	};

	/**
	 * Function BP_CameraSpringArmComponent.BP_CameraSpringArmComponent_C.ExecuteUbergraph_BP_CameraSpringArmComponent
	 */
	struct UBP_CameraSpringArmComponent_C_ExecuteUbergraph_BP_CameraSpringArmComponent_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
