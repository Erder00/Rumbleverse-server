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
	 * 		Name   -> Function AB_PP_SheikCharacter.AB_PP_SheikCharacter_C.AnimGraph
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FPoseLink                                   InPose                                                     (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 * 		struct FPoseLink                                   AnimGraph                                                  (Parm, OutParm, NoDestructor)
	 */
	void UAB_PP_SheikCharacter_C::AnimGraph(const struct FPoseLink& InPose, struct FPoseLink* AnimGraph)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AB_PP_SheikCharacter.AB_PP_SheikCharacter_C.AnimGraph");
		
		UAB_PP_SheikCharacter_C_AnimGraph_Params params {};
		params.InPose = InPose;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AnimGraph != nullptr)
			*AnimGraph = params.AnimGraph;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AB_PP_SheikCharacter.AB_PP_SheikCharacter_C.ChoreographedMoveTickBP
	 * 		Flags  -> ()
	 */
	void UAB_PP_SheikCharacter_C::ChoreographedMoveTickBP()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AB_PP_SheikCharacter.AB_PP_SheikCharacter_C.ChoreographedMoveTickBP");
		
		UAB_PP_SheikCharacter_C_ChoreographedMoveTickBP_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AB_PP_SheikCharacter.AB_PP_SheikCharacter_C.CIK_InitBP
	 * 		Flags  -> ()
	 */
	void UAB_PP_SheikCharacter_C::CIK_InitBP()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AB_PP_SheikCharacter.AB_PP_SheikCharacter_C.CIK_InitBP");
		
		UAB_PP_SheikCharacter_C_CIK_InitBP_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AB_PP_SheikCharacter.AB_PP_SheikCharacter_C.InitFlexySystemBP
	 * 		Flags  -> ()
	 */
	void UAB_PP_SheikCharacter_C::InitFlexySystemBP()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AB_PP_SheikCharacter.AB_PP_SheikCharacter_C.InitFlexySystemBP");
		
		UAB_PP_SheikCharacter_C_InitFlexySystemBP_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AB_PP_SheikCharacter.AB_PP_SheikCharacter_C.FPIK_InitBP
	 * 		Flags  -> ()
	 */
	void UAB_PP_SheikCharacter_C::FPIK_InitBP()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AB_PP_SheikCharacter.AB_PP_SheikCharacter_C.FPIK_InitBP");
		
		UAB_PP_SheikCharacter_C_FPIK_InitBP_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AB_PP_SheikCharacter.AB_PP_SheikCharacter_C.FPIK_DebugDisplayBP
	 * 		Flags  -> ()
	 */
	void UAB_PP_SheikCharacter_C::FPIK_DebugDisplayBP()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AB_PP_SheikCharacter.AB_PP_SheikCharacter_C.FPIK_DebugDisplayBP");
		
		UAB_PP_SheikCharacter_C_FPIK_DebugDisplayBP_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AB_PP_SheikCharacter.AB_PP_SheikCharacter_C.Foot_Placement_TickBP
	 * 		Flags  -> ()
	 */
	void UAB_PP_SheikCharacter_C::Foot_Placement_TickBP()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AB_PP_SheikCharacter.AB_PP_SheikCharacter_C.Foot_Placement_TickBP");
		
		UAB_PP_SheikCharacter_C_Foot_Placement_TickBP_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AB_PP_SheikCharacter.AB_PP_SheikCharacter_C.CIK_DebugDisplayBP
	 * 		Flags  -> ()
	 */
	void UAB_PP_SheikCharacter_C::CIK_DebugDisplayBP()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AB_PP_SheikCharacter.AB_PP_SheikCharacter_C.CIK_DebugDisplayBP");
		
		UAB_PP_SheikCharacter_C_CIK_DebugDisplayBP_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AB_PP_SheikCharacter.AB_PP_SheikCharacter_C.CIK_TraceFromLimbsBP
	 * 		Flags  -> ()
	 */
	void UAB_PP_SheikCharacter_C::CIK_TraceFromLimbsBP()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AB_PP_SheikCharacter.AB_PP_SheikCharacter_C.CIK_TraceFromLimbsBP");
		
		UAB_PP_SheikCharacter_C_CIK_TraceFromLimbsBP_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AB_PP_SheikCharacter.AB_PP_SheikCharacter_C.CIK_CalculatePoleVectorsBP
	 * 		Flags  -> ()
	 */
	void UAB_PP_SheikCharacter_C::CIK_CalculatePoleVectorsBP()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AB_PP_SheikCharacter.AB_PP_SheikCharacter_C.CIK_CalculatePoleVectorsBP");
		
		UAB_PP_SheikCharacter_C_CIK_CalculatePoleVectorsBP_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AB_PP_SheikCharacter.AB_PP_SheikCharacter_C.CIK_CalculateHipAlphaBP
	 * 		Flags  -> ()
	 */
	void UAB_PP_SheikCharacter_C::CIK_CalculateHipAlphaBP()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AB_PP_SheikCharacter.AB_PP_SheikCharacter_C.CIK_CalculateHipAlphaBP");
		
		UAB_PP_SheikCharacter_C_CIK_CalculateHipAlphaBP_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AB_PP_SheikCharacter.AB_PP_SheikCharacter_C.CIK_CalculateAlphasBP
	 * 		Flags  -> ()
	 */
	void UAB_PP_SheikCharacter_C::CIK_CalculateAlphasBP()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AB_PP_SheikCharacter.AB_PP_SheikCharacter_C.CIK_CalculateAlphasBP");
		
		UAB_PP_SheikCharacter_C_CIK_CalculateAlphasBP_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AB_PP_SheikCharacter.AB_PP_SheikCharacter_C.Climbing_IK_TickBP
	 * 		Flags  -> ()
	 */
	void UAB_PP_SheikCharacter_C::Climbing_IK_TickBP()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AB_PP_SheikCharacter.AB_PP_SheikCharacter_C.Climbing_IK_TickBP");
		
		UAB_PP_SheikCharacter_C_Climbing_IK_TickBP_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AB_PP_SheikCharacter.AB_PP_SheikCharacter_C.CIKOnBeginClimbingBP
	 * 		Flags  -> ()
	 */
	void UAB_PP_SheikCharacter_C::CIKOnBeginClimbingBP()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AB_PP_SheikCharacter.AB_PP_SheikCharacter_C.CIKOnBeginClimbingBP");
		
		UAB_PP_SheikCharacter_C_CIKOnBeginClimbingBP_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AB_PP_SheikCharacter.AB_PP_SheikCharacter_C.FlexyLegCalculationBP
	 * 		Flags  -> ()
	 */
	void UAB_PP_SheikCharacter_C::FlexyLegCalculationBP()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AB_PP_SheikCharacter.AB_PP_SheikCharacter_C.FlexyLegCalculationBP");
		
		UAB_PP_SheikCharacter_C_FlexyLegCalculationBP_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AB_PP_SheikCharacter.AB_PP_SheikCharacter_C.FlexyArmCalculationBP
	 * 		Flags  -> ()
	 */
	void UAB_PP_SheikCharacter_C::FlexyArmCalculationBP()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AB_PP_SheikCharacter.AB_PP_SheikCharacter_C.FlexyArmCalculationBP");
		
		UAB_PP_SheikCharacter_C_FlexyArmCalculationBP_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AB_PP_SheikCharacter.AB_PP_SheikCharacter_C.DebugNavitizationHelper
	 * 		Flags  -> ()
	 */
	void UAB_PP_SheikCharacter_C::DebugNavitizationHelper()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AB_PP_SheikCharacter.AB_PP_SheikCharacter_C.DebugNavitizationHelper");
		
		UAB_PP_SheikCharacter_C_DebugNavitizationHelper_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AB_PP_SheikCharacter.AB_PP_SheikCharacter_C.CalculateLengthOfLimbsBP
	 * 		Flags  -> ()
	 */
	void UAB_PP_SheikCharacter_C::CalculateLengthOfLimbsBP()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AB_PP_SheikCharacter.AB_PP_SheikCharacter_C.CalculateLengthOfLimbsBP");
		
		UAB_PP_SheikCharacter_C_CalculateLengthOfLimbsBP_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AB_PP_SheikCharacter.AB_PP_SheikCharacter_C.CM_CrotchAttachment_OffsetAttacker
	 * 		Flags  -> ()
	 */
	void UAB_PP_SheikCharacter_C::CM_CrotchAttachment_OffsetAttacker()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AB_PP_SheikCharacter.AB_PP_SheikCharacter_C.CM_CrotchAttachment_OffsetAttacker");
		
		UAB_PP_SheikCharacter_C_CM_CrotchAttachment_OffsetAttacker_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AB_PP_SheikCharacter.AB_PP_SheikCharacter_C.CM_OnBeginCrotchAttachment
	 * 		Flags  -> ()
	 */
	void UAB_PP_SheikCharacter_C::CM_OnBeginCrotchAttachment()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AB_PP_SheikCharacter.AB_PP_SheikCharacter_C.CM_OnBeginCrotchAttachment");
		
		UAB_PP_SheikCharacter_C_CM_OnBeginCrotchAttachment_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AB_PP_SheikCharacter.AB_PP_SheikCharacter_C.CM_CrotchAttachment_GetThighRotation
	 * 		Flags  -> ()
	 */
	void UAB_PP_SheikCharacter_C::CM_CrotchAttachment_GetThighRotation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AB_PP_SheikCharacter.AB_PP_SheikCharacter_C.CM_CrotchAttachment_GetThighRotation");
		
		UAB_PP_SheikCharacter_C_CM_CrotchAttachment_GetThighRotation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AB_PP_SheikCharacter.AB_PP_SheikCharacter_C.CIK_RotateLocationByPelvicTilt
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                                     LocationToRotate                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     PelvisLocation                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     RotatedLocation                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAB_PP_SheikCharacter_C::CIK_RotateLocationByPelvicTilt(const struct FVector& LocationToRotate, const struct FVector& PelvisLocation, struct FVector* RotatedLocation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AB_PP_SheikCharacter.AB_PP_SheikCharacter_C.CIK_RotateLocationByPelvicTilt");
		
		UAB_PP_SheikCharacter_C_CIK_RotateLocationByPelvicTilt_Params params {};
		params.LocationToRotate = LocationToRotate;
		params.PelvisLocation = PelvisLocation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (RotatedLocation != nullptr)
			*RotatedLocation = params.RotatedLocation;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AB_PP_SheikCharacter.AB_PP_SheikCharacter_C.CIK_CalculatePelvicTilt
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                                     TorsoSocketTentativeLocation                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     PelvisTentativeLocation                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     PelvisTraceOutHitLocation                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              PelvicTilt                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAB_PP_SheikCharacter_C::CIK_CalculatePelvicTilt(const struct FVector& TorsoSocketTentativeLocation, const struct FVector& PelvisTentativeLocation, const struct FVector& PelvisTraceOutHitLocation, float* PelvicTilt)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AB_PP_SheikCharacter.AB_PP_SheikCharacter_C.CIK_CalculatePelvicTilt");
		
		UAB_PP_SheikCharacter_C_CIK_CalculatePelvicTilt_Params params {};
		params.TorsoSocketTentativeLocation = TorsoSocketTentativeLocation;
		params.PelvisTentativeLocation = PelvisTentativeLocation;
		params.PelvisTraceOutHitLocation = PelvisTraceOutHitLocation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (PelvicTilt != nullptr)
			*PelvicTilt = params.PelvicTilt;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AB_PP_SheikCharacter.AB_PP_SheikCharacter_C.CM_CalculateNonDrivingHandEffector
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsLeftHand                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FVector                                     WorldSpaceLocation                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAB_PP_SheikCharacter_C::CM_CalculateNonDrivingHandEffector(bool IsLeftHand, struct FVector* WorldSpaceLocation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AB_PP_SheikCharacter.AB_PP_SheikCharacter_C.CM_CalculateNonDrivingHandEffector");
		
		UAB_PP_SheikCharacter_C_CM_CalculateNonDrivingHandEffector_Params params {};
		params.IsLeftHand = IsLeftHand;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (WorldSpaceLocation != nullptr)
			*WorldSpaceLocation = params.WorldSpaceLocation;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AB_PP_SheikCharacter.AB_PP_SheikCharacter_C.CM_UnstretchArm
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        StartBoneName                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     EffectorWorldLocation                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     TargetLocation                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAB_PP_SheikCharacter_C::CM_UnstretchArm(const class FName& StartBoneName, const struct FVector& EffectorWorldLocation, struct FVector* TargetLocation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AB_PP_SheikCharacter.AB_PP_SheikCharacter_C.CM_UnstretchArm");
		
		UAB_PP_SheikCharacter_C_CM_UnstretchArm_Params params {};
		params.StartBoneName = StartBoneName;
		params.EffectorWorldLocation = EffectorWorldLocation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (TargetLocation != nullptr)
			*TargetLocation = params.TargetLocation;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AB_PP_SheikCharacter.AB_PP_SheikCharacter_C.CM_ResetPelvisLocation
	 * 		Flags  -> ()
	 */
	void UAB_PP_SheikCharacter_C::CM_ResetPelvisLocation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AB_PP_SheikCharacter.AB_PP_SheikCharacter_C.CM_ResetPelvisLocation");
		
		UAB_PP_SheikCharacter_C_CM_ResetPelvisLocation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AB_PP_SheikCharacter.AB_PP_SheikCharacter_C.CM_CalculateNonDrivingHandsEffectors
	 * 		Flags  -> ()
	 */
	void UAB_PP_SheikCharacter_C::CM_CalculateNonDrivingHandsEffectors()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AB_PP_SheikCharacter.AB_PP_SheikCharacter_C.CM_CalculateNonDrivingHandsEffectors");
		
		UAB_PP_SheikCharacter_C_CM_CalculateNonDrivingHandsEffectors_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AB_PP_SheikCharacter.AB_PP_SheikCharacter_C.CM_CalculateReactorPelvisLocation
	 * 		Flags  -> ()
	 */
	void UAB_PP_SheikCharacter_C::CM_CalculateReactorPelvisLocation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AB_PP_SheikCharacter.AB_PP_SheikCharacter_C.CM_CalculateReactorPelvisLocation");
		
		UAB_PP_SheikCharacter_C_CM_CalculateReactorPelvisLocation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AB_PP_SheikCharacter.AB_PP_SheikCharacter_C.CM_InterpolateLocation
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                                     Current                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     Target                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               IsPelvis                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FVector                                     Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAB_PP_SheikCharacter_C::CM_InterpolateLocation(const struct FVector& Current, const struct FVector& Target, bool IsPelvis, struct FVector* Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AB_PP_SheikCharacter.AB_PP_SheikCharacter_C.CM_InterpolateLocation");
		
		UAB_PP_SheikCharacter_C_CM_InterpolateLocation_Params params {};
		params.Current = Current;
		params.Target = Target;
		params.IsPelvis = IsPelvis;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AB_PP_SheikCharacter.AB_PP_SheikCharacter_C.CM_GetCurveData
	 * 		Flags  -> ()
	 */
	void UAB_PP_SheikCharacter_C::CM_GetCurveData()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AB_PP_SheikCharacter.AB_PP_SheikCharacter_C.CM_GetCurveData");
		
		UAB_PP_SheikCharacter_C_CM_GetCurveData_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AB_PP_SheikCharacter.AB_PP_SheikCharacter_C.CM_CalculateDrivingHandEffector
	 * 		Flags  -> ()
	 */
	void UAB_PP_SheikCharacter_C::CM_CalculateDrivingHandEffector()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AB_PP_SheikCharacter.AB_PP_SheikCharacter_C.CM_CalculateDrivingHandEffector");
		
		UAB_PP_SheikCharacter_C_CM_CalculateDrivingHandEffector_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AB_PP_SheikCharacter.AB_PP_SheikCharacter_C.CM_ReactorAttachment_Tick
	 * 		Flags  -> ()
	 */
	void UAB_PP_SheikCharacter_C::CM_ReactorAttachment_Tick()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AB_PP_SheikCharacter.AB_PP_SheikCharacter_C.CM_ReactorAttachment_Tick");
		
		UAB_PP_SheikCharacter_C_CM_ReactorAttachment_Tick_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AB_PP_SheikCharacter.AB_PP_SheikCharacter_C.CM_AttackerAttachment_Tick
	 * 		Flags  -> ()
	 */
	void UAB_PP_SheikCharacter_C::CM_AttackerAttachment_Tick()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AB_PP_SheikCharacter.AB_PP_SheikCharacter_C.CM_AttackerAttachment_Tick");
		
		UAB_PP_SheikCharacter_C_CM_AttackerAttachment_Tick_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AB_PP_SheikCharacter.AB_PP_SheikCharacter_C.FPIK_CalculateWeightedAverageAlpha
	 * 		Flags  -> ()
	 */
	void UAB_PP_SheikCharacter_C::FPIK_CalculateWeightedAverageAlpha()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AB_PP_SheikCharacter.AB_PP_SheikCharacter_C.FPIK_CalculateWeightedAverageAlpha");
		
		UAB_PP_SheikCharacter_C_FPIK_CalculateWeightedAverageAlpha_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AB_PP_SheikCharacter.AB_PP_SheikCharacter_C.FPIK_WeightedAverage
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                                     NewLocation                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     HistorySum                                                 (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		TArray<struct FVector>                             LocationArray                                              (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		struct FVector                                     OutLocation                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAB_PP_SheikCharacter_C::FPIK_WeightedAverage(const struct FVector& NewLocation, struct FVector* HistorySum, TArray<struct FVector>* LocationArray, struct FVector* OutLocation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AB_PP_SheikCharacter.AB_PP_SheikCharacter_C.FPIK_WeightedAverage");
		
		UAB_PP_SheikCharacter_C_FPIK_WeightedAverage_Params params {};
		params.NewLocation = NewLocation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (HistorySum != nullptr)
			*HistorySum = params.HistorySum;
		if (LocationArray != nullptr)
			*LocationArray = params.LocationArray;
		if (OutLocation != nullptr)
			*OutLocation = params.OutLocation;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AB_PP_SheikCharacter.AB_PP_SheikCharacter_C.CIK_WeightedAverage
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                                     NewLocation                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     HistorySum                                                 (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		TArray<struct FVector>                             LocationArray                                              (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		bool                                               IsHip                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FVector                                     OutLocation                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAB_PP_SheikCharacter_C::CIK_WeightedAverage(const struct FVector& NewLocation, struct FVector* HistorySum, TArray<struct FVector>* LocationArray, bool IsHip, struct FVector* OutLocation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AB_PP_SheikCharacter.AB_PP_SheikCharacter_C.CIK_WeightedAverage");
		
		UAB_PP_SheikCharacter_C_CIK_WeightedAverage_Params params {};
		params.NewLocation = NewLocation;
		params.IsHip = IsHip;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (HistorySum != nullptr)
			*HistorySum = params.HistorySum;
		if (LocationArray != nullptr)
			*LocationArray = params.LocationArray;
		if (OutLocation != nullptr)
			*OutLocation = params.OutLocation;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AB_PP_SheikCharacter.AB_PP_SheikCharacter_C.CIK_Unstretch Limb
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        StartBoneName                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     EffectorWorldLocation                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               IsArm                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FVector                                     TargetLocation                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAB_PP_SheikCharacter_C::CIK_UnstretchLimb(const class FName& StartBoneName, const struct FVector& EffectorWorldLocation, bool IsArm, struct FVector* TargetLocation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AB_PP_SheikCharacter.AB_PP_SheikCharacter_C.CIK_Unstretch Limb");
		
		UAB_PP_SheikCharacter_C_CIK_UnstretchLimb_Params params {};
		params.StartBoneName = StartBoneName;
		params.EffectorWorldLocation = EffectorWorldLocation;
		params.IsArm = IsArm;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (TargetLocation != nullptr)
			*TargetLocation = params.TargetLocation;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AB_PP_SheikCharacter.AB_PP_SheikCharacter_C.CIK_TraceFromPelvis
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                                     AverageLimbOffset                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAB_PP_SheikCharacter_C::CIK_TraceFromPelvis(const struct FVector& AverageLimbOffset)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AB_PP_SheikCharacter.AB_PP_SheikCharacter_C.CIK_TraceFromPelvis");
		
		UAB_PP_SheikCharacter_C_CIK_TraceFromPelvis_Params params {};
		params.AverageLimbOffset = AverageLimbOffset;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AB_PP_SheikCharacter.AB_PP_SheikCharacter_C.CIK_InterpolateLocation
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                                     Current                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     Target                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               IsHipLocation                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FVector                                     Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAB_PP_SheikCharacter_C::CIK_InterpolateLocation(const struct FVector& Current, const struct FVector& Target, bool IsHipLocation, struct FVector* Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AB_PP_SheikCharacter.AB_PP_SheikCharacter_C.CIK_InterpolateLocation");
		
		UAB_PP_SheikCharacter_C_CIK_InterpolateLocation_Params params {};
		params.Current = Current;
		params.Target = Target;
		params.IsHipLocation = IsHipLocation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AB_PP_SheikCharacter.AB_PP_SheikCharacter_C.FPIK_GetPVLateralOffsetFromCurve
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              CurveInput                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              LateralOffset                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAB_PP_SheikCharacter_C::FPIK_GetPVLateralOffsetFromCurve(float CurveInput, float* LateralOffset)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AB_PP_SheikCharacter.AB_PP_SheikCharacter_C.FPIK_GetPVLateralOffsetFromCurve");
		
		UAB_PP_SheikCharacter_C_FPIK_GetPVLateralOffsetFromCurve_Params params {};
		params.CurveInput = CurveInput;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (LateralOffset != nullptr)
			*LateralOffset = params.LateralOffset;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AB_PP_SheikCharacter.AB_PP_SheikCharacter_C.FPIK_Calculate_PV_LateralOffset
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              LeftLateralOffset                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              RightLateralOffset                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAB_PP_SheikCharacter_C::FPIK_Calculate_PV_LateralOffset(float* LeftLateralOffset, float* RightLateralOffset)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AB_PP_SheikCharacter.AB_PP_SheikCharacter_C.FPIK_Calculate_PV_LateralOffset");
		
		UAB_PP_SheikCharacter_C_FPIK_Calculate_PV_LateralOffset_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (LeftLateralOffset != nullptr)
			*LeftLateralOffset = params.LeftLateralOffset;
		if (RightLateralOffset != nullptr)
			*RightLateralOffset = params.RightLateralOffset;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AB_PP_SheikCharacter.AB_PP_SheikCharacter_C.Calculate_Pole_VectorBP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        LimbParentBoneName                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     CurrentPoleVectorLocation                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              InterpolationSpeed                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              LimbAlpha                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               IsArm                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               BoneOrientationReversed                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FVector                                     PoleVectorOffset                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               SkipInterpolation                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FVector                                     LimbLocationOffset                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     PoleVectorLocation                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAB_PP_SheikCharacter_C::Calculate_Pole_VectorBP(const class FName& LimbParentBoneName, const struct FVector& CurrentPoleVectorLocation, float InterpolationSpeed, float LimbAlpha, bool IsArm, bool BoneOrientationReversed, const struct FVector& PoleVectorOffset, bool SkipInterpolation, const struct FVector& LimbLocationOffset, struct FVector* PoleVectorLocation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AB_PP_SheikCharacter.AB_PP_SheikCharacter_C.Calculate_Pole_VectorBP");
		
		UAB_PP_SheikCharacter_C_Calculate_Pole_VectorBP_Params params {};
		params.LimbParentBoneName = LimbParentBoneName;
		params.CurrentPoleVectorLocation = CurrentPoleVectorLocation;
		params.InterpolationSpeed = InterpolationSpeed;
		params.LimbAlpha = LimbAlpha;
		params.IsArm = IsArm;
		params.BoneOrientationReversed = BoneOrientationReversed;
		params.PoleVectorOffset = PoleVectorOffset;
		params.SkipInterpolation = SkipInterpolation;
		params.LimbLocationOffset = LimbLocationOffset;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (PoleVectorLocation != nullptr)
			*PoleVectorLocation = params.PoleVectorLocation;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AB_PP_SheikCharacter.AB_PP_SheikCharacter_C.FPIK_Get_Ground_Offset
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        IKFootJoint                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              GroundOffset                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAB_PP_SheikCharacter_C::FPIK_Get_Ground_Offset(const class FName& IKFootJoint, float* GroundOffset)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AB_PP_SheikCharacter.AB_PP_SheikCharacter_C.FPIK_Get_Ground_Offset");
		
		UAB_PP_SheikCharacter_C_FPIK_Get_Ground_Offset_Params params {};
		params.IKFootJoint = IKFootJoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (GroundOffset != nullptr)
			*GroundOffset = params.GroundOffset;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AB_PP_SheikCharacter.AB_PP_SheikCharacter_C.FPIK_ClampFootRotatorAngle
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              AnimationPoseValue                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              DeltaToClamp                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              MinValue                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              MaxValue                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              ClampedAngle                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAB_PP_SheikCharacter_C::FPIK_ClampFootRotatorAngle(float AnimationPoseValue, float DeltaToClamp, float MinValue, float MaxValue, float* ClampedAngle)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AB_PP_SheikCharacter.AB_PP_SheikCharacter_C.FPIK_ClampFootRotatorAngle");
		
		UAB_PP_SheikCharacter_C_FPIK_ClampFootRotatorAngle_Params params {};
		params.AnimationPoseValue = AnimationPoseValue;
		params.DeltaToClamp = DeltaToClamp;
		params.MinValue = MinValue;
		params.MaxValue = MaxValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ClampedAngle != nullptr)
			*ClampedAngle = params.ClampedAngle;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AB_PP_SheikCharacter.AB_PP_SheikCharacter_C.FPIK_CalculateFootRotationsBoneSpace
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        FootIKJointName                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FRotator                                    AnimationPoseRotation_WS                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FRotator                                    ModifiedRotation_WS                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FRotator                                    OffsetRotator                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FRotator                                    FootDownRotator                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UAB_PP_SheikCharacter_C::FPIK_CalculateFootRotationsBoneSpace(const class FName& FootIKJointName, const struct FRotator& AnimationPoseRotation_WS, const struct FRotator& ModifiedRotation_WS, struct FRotator* OffsetRotator, struct FRotator* FootDownRotator)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AB_PP_SheikCharacter.AB_PP_SheikCharacter_C.FPIK_CalculateFootRotationsBoneSpace");
		
		UAB_PP_SheikCharacter_C_FPIK_CalculateFootRotationsBoneSpace_Params params {};
		params.FootIKJointName = FootIKJointName;
		params.AnimationPoseRotation_WS = AnimationPoseRotation_WS;
		params.ModifiedRotation_WS = ModifiedRotation_WS;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OffsetRotator != nullptr)
			*OffsetRotator = params.OffsetRotator;
		if (FootDownRotator != nullptr)
			*FootDownRotator = params.FootDownRotator;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AB_PP_SheikCharacter.AB_PP_SheikCharacter_C.FPIK_Unstretch Leg
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        ThighSocketName                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     EffectorWorldLocation                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     TargetLocation                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              FootDownRotationAlpha                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAB_PP_SheikCharacter_C::FPIK_UnstretchLeg(const class FName& ThighSocketName, const struct FVector& EffectorWorldLocation, struct FVector* TargetLocation, float* FootDownRotationAlpha)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AB_PP_SheikCharacter.AB_PP_SheikCharacter_C.FPIK_Unstretch Leg");
		
		UAB_PP_SheikCharacter_C_FPIK_UnstretchLeg_Params params {};
		params.ThighSocketName = ThighSocketName;
		params.EffectorWorldLocation = EffectorWorldLocation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (TargetLocation != nullptr)
			*TargetLocation = params.TargetLocation;
		if (FootDownRotationAlpha != nullptr)
			*FootDownRotationAlpha = params.FootDownRotationAlpha;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AB_PP_SheikCharacter.AB_PP_SheikCharacter_C.FPIK_InterpolateFeetTransforms
	 * 		Flags  -> ()
	 */
	void UAB_PP_SheikCharacter_C::FPIK_InterpolateFeetTransforms()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AB_PP_SheikCharacter.AB_PP_SheikCharacter_C.FPIK_InterpolateFeetTransforms");
		
		UAB_PP_SheikCharacter_C_FPIK_InterpolateFeetTransforms_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AB_PP_SheikCharacter.AB_PP_SheikCharacter_C.FPIK_Calculate_Pole_Vectors
	 * 		Flags  -> ()
	 */
	void UAB_PP_SheikCharacter_C::FPIK_Calculate_Pole_Vectors()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AB_PP_SheikCharacter.AB_PP_SheikCharacter_C.FPIK_Calculate_Pole_Vectors");
		
		UAB_PP_SheikCharacter_C_FPIK_Calculate_Pole_Vectors_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AB_PP_SheikCharacter.AB_PP_SheikCharacter_C.FPIK_Combine_Hip_Offsets
	 * 		Flags  -> ()
	 */
	void UAB_PP_SheikCharacter_C::FPIK_Combine_Hip_Offsets()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AB_PP_SheikCharacter.AB_PP_SheikCharacter_C.FPIK_Combine_Hip_Offsets");
		
		UAB_PP_SheikCharacter_C_FPIK_Combine_Hip_Offsets_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AB_PP_SheikCharacter.AB_PP_SheikCharacter_C.FPIK_Line_Trace_From_Location
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                                     InputLocation                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               TraceHit                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FVector                                     Location                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     ImpactNormal                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAB_PP_SheikCharacter_C::FPIK_Line_Trace_From_Location(const struct FVector& InputLocation, bool* TraceHit, struct FVector* Location, struct FVector* ImpactNormal)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AB_PP_SheikCharacter.AB_PP_SheikCharacter_C.FPIK_Line_Trace_From_Location");
		
		UAB_PP_SheikCharacter_C_FPIK_Line_Trace_From_Location_Params params {};
		params.InputLocation = InputLocation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (TraceHit != nullptr)
			*TraceHit = params.TraceHit;
		if (Location != nullptr)
			*Location = params.Location;
		if (ImpactNormal != nullptr)
			*ImpactNormal = params.ImpactNormal;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AB_PP_SheikCharacter.AB_PP_SheikCharacter_C.FPIK_Trace_Foot
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        FootIKJointName                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              HipOffset                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     EffectorWorldLocation                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FRotator                                    FootRotation                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FRotator                                    FootDownRotation                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UAB_PP_SheikCharacter_C::FPIK_Trace_Foot(const class FName& FootIKJointName, float* HipOffset, struct FVector* EffectorWorldLocation, struct FRotator* FootRotation, struct FRotator* FootDownRotation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AB_PP_SheikCharacter.AB_PP_SheikCharacter_C.FPIK_Trace_Foot");
		
		UAB_PP_SheikCharacter_C_FPIK_Trace_Foot_Params params {};
		params.FootIKJointName = FootIKJointName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (HipOffset != nullptr)
			*HipOffset = params.HipOffset;
		if (EffectorWorldLocation != nullptr)
			*EffectorWorldLocation = params.EffectorWorldLocation;
		if (FootRotation != nullptr)
			*FootRotation = params.FootRotation;
		if (FootDownRotation != nullptr)
			*FootDownRotation = params.FootDownRotation;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AB_PP_SheikCharacter.AB_PP_SheikCharacter_C.FPIK_Trace_Feet
	 * 		Flags  -> ()
	 */
	void UAB_PP_SheikCharacter_C::FPIK_Trace_Feet()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AB_PP_SheikCharacter.AB_PP_SheikCharacter_C.FPIK_Trace_Feet");
		
		UAB_PP_SheikCharacter_C_FPIK_Trace_Feet_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AB_PP_SheikCharacter.AB_PP_SheikCharacter_C.FPIK_Calculate_Blend_AlphasBP
	 * 		Flags  -> ()
	 */
	void UAB_PP_SheikCharacter_C::FPIK_Calculate_Blend_AlphasBP()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AB_PP_SheikCharacter.AB_PP_SheikCharacter_C.FPIK_Calculate_Blend_AlphasBP");
		
		UAB_PP_SheikCharacter_C_FPIK_Calculate_Blend_AlphasBP_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AB_PP_SheikCharacter.AB_PP_SheikCharacter_C.BlueprintUpdateAnimation
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              DeltaTimeX                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAB_PP_SheikCharacter_C::BlueprintUpdateAnimation(float DeltaTimeX)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AB_PP_SheikCharacter.AB_PP_SheikCharacter_C.BlueprintUpdateAnimation");
		
		UAB_PP_SheikCharacter_C_BlueprintUpdateAnimation_Params params {};
		params.DeltaTimeX = DeltaTimeX;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AB_PP_SheikCharacter.AB_PP_SheikCharacter_C.ExecuteUbergraph_AB_PP_SheikCharacter
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAB_PP_SheikCharacter_C::ExecuteUbergraph_AB_PP_SheikCharacter(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AB_PP_SheikCharacter.AB_PP_SheikCharacter_C.ExecuteUbergraph_AB_PP_SheikCharacter");
		
		UAB_PP_SheikCharacter_C_ExecuteUbergraph_AB_PP_SheikCharacter_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAB_PP_SheikCharacter_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAB_PP_SheikCharacter_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("AnimBlueprintGeneratedClass AB_PP_SheikCharacter.AB_PP_SheikCharacter_C");
		return ptr;
	}

}


