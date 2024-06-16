/**
 * Name: Rumbleverse
 * Version: Latest
 */

#include "pch.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_CameraSpringArmComponent.BP_CameraSpringArmComponent_C.GetFalling
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Falling                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_CameraSpringArmComponent_C::GetFalling(bool* Falling)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_CameraSpringArmComponent.BP_CameraSpringArmComponent_C.GetFalling");
		
		UBP_CameraSpringArmComponent_C_GetFalling_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Falling != nullptr)
			*Falling = params.Falling;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_CameraSpringArmComponent.BP_CameraSpringArmComponent_C.CheckExitingElbowDrop
	 * 		Flags  -> ()
	 */
	void UBP_CameraSpringArmComponent_C::CheckExitingElbowDrop()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_CameraSpringArmComponent.BP_CameraSpringArmComponent_C.CheckExitingElbowDrop");
		
		UBP_CameraSpringArmComponent_C_CheckExitingElbowDrop_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_CameraSpringArmComponent.BP_CameraSpringArmComponent_C.IsCombatTargetValid
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Valid                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_CameraSpringArmComponent_C::IsCombatTargetValid(bool* Valid)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_CameraSpringArmComponent.BP_CameraSpringArmComponent_C.IsCombatTargetValid");
		
		UBP_CameraSpringArmComponent_C_IsCombatTargetValid_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Valid != nullptr)
			*Valid = params.Valid;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_CameraSpringArmComponent.BP_CameraSpringArmComponent_C.CheckCombatDash
	 * 		Flags  -> ()
	 */
	void UBP_CameraSpringArmComponent_C::CheckCombatDash()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_CameraSpringArmComponent.BP_CameraSpringArmComponent_C.CheckCombatDash");
		
		UBP_CameraSpringArmComponent_C_CheckCombatDash_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_CameraSpringArmComponent.BP_CameraSpringArmComponent_C.GetMontageTag
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EIGCameraBehavior                                  CameraBehavior                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_CameraSpringArmComponent_C::GetMontageTag(EIGCameraBehavior* CameraBehavior)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_CameraSpringArmComponent.BP_CameraSpringArmComponent_C.GetMontageTag");
		
		UBP_CameraSpringArmComponent_C_GetMontageTag_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (CameraBehavior != nullptr)
			*CameraBehavior = params.CameraBehavior;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_CameraSpringArmComponent.BP_CameraSpringArmComponent_C.HandleCameraOffset
	 * 		Flags  -> ()
	 */
	void UBP_CameraSpringArmComponent_C::HandleCameraOffset()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_CameraSpringArmComponent.BP_CameraSpringArmComponent_C.HandleCameraOffset");
		
		UBP_CameraSpringArmComponent_C_HandleCameraOffset_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_CameraSpringArmComponent.BP_CameraSpringArmComponent_C.UpdateZoomState
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EIGCameraZoomState                                 NewState                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_CameraSpringArmComponent_C::UpdateZoomState(EIGCameraZoomState NewState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_CameraSpringArmComponent.BP_CameraSpringArmComponent_C.UpdateZoomState");
		
		UBP_CameraSpringArmComponent_C_UpdateZoomState_Params params {};
		params.NewState = NewState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_CameraSpringArmComponent.BP_CameraSpringArmComponent_C.HandleClimbingInput
	 * 		Flags  -> ()
	 */
	void UBP_CameraSpringArmComponent_C::HandleClimbingInput()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_CameraSpringArmComponent.BP_CameraSpringArmComponent_C.HandleClimbingInput");
		
		UBP_CameraSpringArmComponent_C_HandleClimbingInput_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_CameraSpringArmComponent.BP_CameraSpringArmComponent_C.GetCharacterWorldLocation
	 * 		Flags  -> ()
	 */
	struct FVector UBP_CameraSpringArmComponent_C::GetCharacterWorldLocation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_CameraSpringArmComponent.BP_CameraSpringArmComponent_C.GetCharacterWorldLocation");
		
		UBP_CameraSpringArmComponent_C_GetCharacterWorldLocation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_CameraSpringArmComponent.BP_CameraSpringArmComponent_C.CheckApproachingEdge
	 * 		Flags  -> ()
	 */
	bool UBP_CameraSpringArmComponent_C::CheckApproachingEdge()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_CameraSpringArmComponent.BP_CameraSpringArmComponent_C.CheckApproachingEdge");
		
		UBP_CameraSpringArmComponent_C_CheckApproachingEdge_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_CameraSpringArmComponent.BP_CameraSpringArmComponent_C.HandleVisibilityOfAllPlayers
	 * 		Flags  -> ()
	 */
	void UBP_CameraSpringArmComponent_C::HandleVisibilityOfAllPlayers()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_CameraSpringArmComponent.BP_CameraSpringArmComponent_C.HandleVisibilityOfAllPlayers");
		
		UBP_CameraSpringArmComponent_C_HandleVisibilityOfAllPlayers_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_CameraSpringArmComponent.BP_CameraSpringArmComponent_C.PlayPinAnimation
	 * 		Flags  -> ()
	 */
	void UBP_CameraSpringArmComponent_C::PlayPinAnimation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_CameraSpringArmComponent.BP_CameraSpringArmComponent_C.PlayPinAnimation");
		
		UBP_CameraSpringArmComponent_C_PlayPinAnimation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_CameraSpringArmComponent.BP_CameraSpringArmComponent_C.DeathSpin
	 * 		Flags  -> ()
	 */
	void UBP_CameraSpringArmComponent_C::DeathSpin()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_CameraSpringArmComponent.BP_CameraSpringArmComponent_C.DeathSpin");
		
		UBP_CameraSpringArmComponent_C_DeathSpin_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_CameraSpringArmComponent.BP_CameraSpringArmComponent_C.ResetCombatTarget
	 * 		Flags  -> ()
	 */
	void UBP_CameraSpringArmComponent_C::ResetCombatTarget()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_CameraSpringArmComponent.BP_CameraSpringArmComponent_C.ResetCombatTarget");
		
		UBP_CameraSpringArmComponent_C_ResetCombatTarget_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_CameraSpringArmComponent.BP_CameraSpringArmComponent_C.AutoPitchCombat
	 * 		Flags  -> ()
	 */
	void UBP_CameraSpringArmComponent_C::AutoPitchCombat()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_CameraSpringArmComponent.BP_CameraSpringArmComponent_C.AutoPitchCombat");
		
		UBP_CameraSpringArmComponent_C_AutoPitchCombat_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_CameraSpringArmComponent.BP_CameraSpringArmComponent_C.AutoPitchFall
	 * 		Flags  -> ()
	 */
	void UBP_CameraSpringArmComponent_C::AutoPitchFall()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_CameraSpringArmComponent.BP_CameraSpringArmComponent_C.AutoPitchFall");
		
		UBP_CameraSpringArmComponent_C_AutoPitchFall_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_CameraSpringArmComponent.BP_CameraSpringArmComponent_C.ReorientPitch
	 * 		Flags  -> ()
	 */
	void UBP_CameraSpringArmComponent_C::ReorientPitch()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_CameraSpringArmComponent.BP_CameraSpringArmComponent_C.ReorientPitch");
		
		UBP_CameraSpringArmComponent_C_ReorientPitch_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_CameraSpringArmComponent.BP_CameraSpringArmComponent_C.AutoYawTraversal
	 * 		Flags  -> ()
	 */
	void UBP_CameraSpringArmComponent_C::AutoYawTraversal()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_CameraSpringArmComponent.BP_CameraSpringArmComponent_C.AutoYawTraversal");
		
		UBP_CameraSpringArmComponent_C_AutoYawTraversal_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_CameraSpringArmComponent.BP_CameraSpringArmComponent_C.AutoYawClimb
	 * 		Flags  -> ()
	 */
	void UBP_CameraSpringArmComponent_C::AutoYawClimb()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_CameraSpringArmComponent.BP_CameraSpringArmComponent_C.AutoYawClimb");
		
		UBP_CameraSpringArmComponent_C_AutoYawClimb_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_CameraSpringArmComponent.BP_CameraSpringArmComponent_C.AutoPitchClimb
	 * 		Flags  -> ()
	 */
	void UBP_CameraSpringArmComponent_C::AutoPitchClimb()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_CameraSpringArmComponent.BP_CameraSpringArmComponent_C.AutoPitchClimb");
		
		UBP_CameraSpringArmComponent_C_AutoPitchClimb_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_CameraSpringArmComponent.BP_CameraSpringArmComponent_C.ReceiveTick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_CameraSpringArmComponent_C::ReceiveTick(float DeltaSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_CameraSpringArmComponent.BP_CameraSpringArmComponent_C.ReceiveTick");
		
		UBP_CameraSpringArmComponent_C_ReceiveTick_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_CameraSpringArmComponent.BP_CameraSpringArmComponent_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void UBP_CameraSpringArmComponent_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_CameraSpringArmComponent.BP_CameraSpringArmComponent_C.ReceiveBeginPlay");
		
		UBP_CameraSpringArmComponent_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_CameraSpringArmComponent.BP_CameraSpringArmComponent_C.SpringArmActivated
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UActorComponent*                             Component                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bReset                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_CameraSpringArmComponent_C::SpringArmActivated(class UActorComponent* Component, bool bReset)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_CameraSpringArmComponent.BP_CameraSpringArmComponent_C.SpringArmActivated");
		
		UBP_CameraSpringArmComponent_C_SpringArmActivated_Params params {};
		params.Component = Component;
		params.bReset = bReset;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_CameraSpringArmComponent.BP_CameraSpringArmComponent_C.GameFlowStateChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EGameFlowState                                     GameFlowState                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_CameraSpringArmComponent_C::GameFlowStateChanged(EGameFlowState GameFlowState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_CameraSpringArmComponent.BP_CameraSpringArmComponent_C.GameFlowStateChanged");
		
		UBP_CameraSpringArmComponent_C_GameFlowStateChanged_Params params {};
		params.GameFlowState = GameFlowState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_CameraSpringArmComponent.BP_CameraSpringArmComponent_C.NumPlayersAliveChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            NumPlayersAlive                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_CameraSpringArmComponent_C::NumPlayersAliveChanged(int32_t NumPlayersAlive)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_CameraSpringArmComponent.BP_CameraSpringArmComponent_C.NumPlayersAliveChanged");
		
		UBP_CameraSpringArmComponent_C_NumPlayersAliveChanged_Params params {};
		params.NumPlayersAlive = NumPlayersAlive;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_CameraSpringArmComponent.BP_CameraSpringArmComponent_C.MovementModeChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ACharacter*                                  Character                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		EMovementMode                                      PrevMovementMode                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		unsigned char                                      PreviousCustomMode                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_CameraSpringArmComponent_C::MovementModeChanged(class ACharacter* Character, EMovementMode PrevMovementMode, unsigned char PreviousCustomMode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_CameraSpringArmComponent.BP_CameraSpringArmComponent_C.MovementModeChanged");
		
		UBP_CameraSpringArmComponent_C_MovementModeChanged_Params params {};
		params.Character = Character;
		params.PrevMovementMode = PrevMovementMode;
		params.PreviousCustomMode = PreviousCustomMode;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_CameraSpringArmComponent.BP_CameraSpringArmComponent_C.DeathSpinBP
	 * 		Flags  -> ()
	 */
	void UBP_CameraSpringArmComponent_C::DeathSpinBP()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_CameraSpringArmComponent.BP_CameraSpringArmComponent_C.DeathSpinBP");
		
		UBP_CameraSpringArmComponent_C_DeathSpinBP_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_CameraSpringArmComponent.BP_CameraSpringArmComponent_C.PlayPinAnimationBP
	 * 		Flags  -> ()
	 */
	void UBP_CameraSpringArmComponent_C::PlayPinAnimationBP()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_CameraSpringArmComponent.BP_CameraSpringArmComponent_C.PlayPinAnimationBP");
		
		UBP_CameraSpringArmComponent_C_PlayPinAnimationBP_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_CameraSpringArmComponent.BP_CameraSpringArmComponent_C.HandleClimbInputBP
	 * 		Flags  -> ()
	 */
	void UBP_CameraSpringArmComponent_C::HandleClimbInputBP()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_CameraSpringArmComponent.BP_CameraSpringArmComponent_C.HandleClimbInputBP");
		
		UBP_CameraSpringArmComponent_C_HandleClimbInputBP_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_CameraSpringArmComponent.BP_CameraSpringArmComponent_C.AutoYawClimbBP
	 * 		Flags  -> ()
	 */
	void UBP_CameraSpringArmComponent_C::AutoYawClimbBP()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_CameraSpringArmComponent.BP_CameraSpringArmComponent_C.AutoYawClimbBP");
		
		UBP_CameraSpringArmComponent_C_AutoYawClimbBP_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_CameraSpringArmComponent.BP_CameraSpringArmComponent_C.AutoPitchClimbBP
	 * 		Flags  -> ()
	 */
	void UBP_CameraSpringArmComponent_C::AutoPitchClimbBP()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_CameraSpringArmComponent.BP_CameraSpringArmComponent_C.AutoPitchClimbBP");
		
		UBP_CameraSpringArmComponent_C_AutoPitchClimbBP_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_CameraSpringArmComponent.BP_CameraSpringArmComponent_C.AutoPitchCombatBP
	 * 		Flags  -> ()
	 */
	void UBP_CameraSpringArmComponent_C::AutoPitchCombatBP()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_CameraSpringArmComponent.BP_CameraSpringArmComponent_C.AutoPitchCombatBP");
		
		UBP_CameraSpringArmComponent_C_AutoPitchCombatBP_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_CameraSpringArmComponent.BP_CameraSpringArmComponent_C.ReorientPitchBP
	 * 		Flags  -> ()
	 */
	void UBP_CameraSpringArmComponent_C::ReorientPitchBP()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_CameraSpringArmComponent.BP_CameraSpringArmComponent_C.ReorientPitchBP");
		
		UBP_CameraSpringArmComponent_C_ReorientPitchBP_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_CameraSpringArmComponent.BP_CameraSpringArmComponent_C.AutoPitchFallBP
	 * 		Flags  -> ()
	 */
	void UBP_CameraSpringArmComponent_C::AutoPitchFallBP()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_CameraSpringArmComponent.BP_CameraSpringArmComponent_C.AutoPitchFallBP");
		
		UBP_CameraSpringArmComponent_C_AutoPitchFallBP_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_CameraSpringArmComponent.BP_CameraSpringArmComponent_C.AutoYawTraversalBP
	 * 		Flags  -> ()
	 */
	void UBP_CameraSpringArmComponent_C::AutoYawTraversalBP()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_CameraSpringArmComponent.BP_CameraSpringArmComponent_C.AutoYawTraversalBP");
		
		UBP_CameraSpringArmComponent_C_AutoYawTraversalBP_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_CameraSpringArmComponent.BP_CameraSpringArmComponent_C.HandleGiantSwingBP
	 * 		Flags  -> ()
	 */
	void UBP_CameraSpringArmComponent_C::HandleGiantSwingBP()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_CameraSpringArmComponent.BP_CameraSpringArmComponent_C.HandleGiantSwingBP");
		
		UBP_CameraSpringArmComponent_C_HandleGiantSwingBP_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_CameraSpringArmComponent.BP_CameraSpringArmComponent_C.HandleCameraOffsetBP
	 * 		Flags  -> ()
	 */
	void UBP_CameraSpringArmComponent_C::HandleCameraOffsetBP()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_CameraSpringArmComponent.BP_CameraSpringArmComponent_C.HandleCameraOffsetBP");
		
		UBP_CameraSpringArmComponent_C_HandleCameraOffsetBP_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_CameraSpringArmComponent.BP_CameraSpringArmComponent_C.HandlePlayersVisibilityBP
	 * 		Flags  -> ()
	 */
	void UBP_CameraSpringArmComponent_C::HandlePlayersVisibilityBP()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_CameraSpringArmComponent.BP_CameraSpringArmComponent_C.HandlePlayersVisibilityBP");
		
		UBP_CameraSpringArmComponent_C_HandlePlayersVisibilityBP_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_CameraSpringArmComponent.BP_CameraSpringArmComponent_C.ExecuteUbergraph_BP_CameraSpringArmComponent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_CameraSpringArmComponent_C::ExecuteUbergraph_BP_CameraSpringArmComponent(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_CameraSpringArmComponent.BP_CameraSpringArmComponent_C.ExecuteUbergraph_BP_CameraSpringArmComponent");
		
		UBP_CameraSpringArmComponent_C_ExecuteUbergraph_BP_CameraSpringArmComponent_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBP_CameraSpringArmComponent_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_CameraSpringArmComponent_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_CameraSpringArmComponent.BP_CameraSpringArmComponent_C");
		return ptr;
	}

}


