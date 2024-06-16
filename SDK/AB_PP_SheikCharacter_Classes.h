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
	 * AnimBlueprintGeneratedClass AB_PP_SheikCharacter.AB_PP_SheikCharacter_C
	 * Size -> 0x6284 (FullSize[0x7624] - InheritedSize[0x13A0])
	 */
	class UAB_PP_SheikCharacter_C : public UIGPostProcessAnimInstance
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x13A0(0x0008) ZeroConstructor, Transient, DuplicateTransient
		struct FAnimNode_Root                                      AnimGraphNode_Root;                                      // 0x13A8(0x0030)
		struct FAnimNode_LinkedInputPose                           AnimGraphNode_SubInput;                                  // 0x13D8(0x0118)
		struct FAnimNode_SaveCachedPose                            AnimGraphNode_SaveCachedPose_12;                         // 0x14F0(0x0158)
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool_11;                        // 0x1648(0x00A0)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_23;                          // 0x16E8(0x0028)
		struct FAnimNode_ConvertLocalToComponentSpace              AnimGraphNode_LocalToComponentSpace_11;                  // 0x1710(0x0020)
		struct FAnimNode_ConvertComponentToLocalSpace              AnimGraphNode_ComponentToLocalSpace_11;                  // 0x1730(0x0020)
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone_24;                             // 0x1750(0x0108)
		unsigned char                                              UnknownData_LE8P[0x8];                                   // 0x1858(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FAnimNode_TwoBoneIK                                 AnimGraphNode_TwoBoneIK_10;                              // 0x1860(0x01E0)
		struct FAnimNode_TwoBoneIK                                 AnimGraphNode_TwoBoneIK_9;                               // 0x1A40(0x01E0)
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone_23;                             // 0x1C20(0x0108)
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone_22;                             // 0x1D28(0x0108)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_22;                          // 0x1E30(0x0028)
		struct FAnimNode_CopyBone                                  AnimGraphNode_CopyBone_18;                               // 0x1E58(0x00F0)
		struct FAnimNode_CopyBone                                  AnimGraphNode_CopyBone_17;                               // 0x1F48(0x00F0)
		struct FAnimNode_CopyBone                                  AnimGraphNode_CopyBone_16;                               // 0x2038(0x00F0)
		struct FAnimNode_CopyBone                                  AnimGraphNode_CopyBone_15;                               // 0x2128(0x00F0)
		struct FAnimNode_CopyBone                                  AnimGraphNode_CopyBone_14;                               // 0x2218(0x00F0)
		struct FAnimNode_ConvertLocalToComponentSpace              AnimGraphNode_LocalToComponentSpace_10;                  // 0x2308(0x0020)
		unsigned char                                              UnknownData_IQOR[0x8];                                   // 0x2328(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FAnimNode_LookAt                                    AnimGraphNode_LookAt_4;                                  // 0x2330(0x01B0)
		struct FAnimNode_LookAt                                    AnimGraphNode_LookAt_3;                                  // 0x24E0(0x01B0)
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone_21;                             // 0x2690(0x0108)
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone_20;                             // 0x2798(0x0108)
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone_19;                             // 0x28A0(0x0108)
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone_18;                             // 0x29A8(0x0108)
		struct FAnimNode_CopyBone                                  AnimGraphNode_CopyBone_13;                               // 0x2AB0(0x00F0)
		struct FAnimNode_ConvertComponentToLocalSpace              AnimGraphNode_ComponentToLocalSpace_10;                  // 0x2BA0(0x0020)
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone_17;                             // 0x2BC0(0x0108)
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone_16;                             // 0x2CC8(0x0108)
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone_15;                             // 0x2DD0(0x0108)
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone_14;                             // 0x2ED8(0x0108)
		struct FAnimNode_CopyBone                                  AnimGraphNode_CopyBone_12;                               // 0x2FE0(0x00F0)
		struct FAnimNode_LookAt                                    AnimGraphNode_LookAt_2;                                  // 0x30D0(0x01B0)
		struct FAnimNode_LookAt                                    AnimGraphNode_LookAt;                                    // 0x3280(0x01B0)
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone_13;                             // 0x3430(0x0108)
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone_12;                             // 0x3538(0x0108)
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone_11;                             // 0x3640(0x0108)
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone_10;                             // 0x3748(0x0108)
		struct FAnimNode_CopyBone                                  AnimGraphNode_CopyBone_11;                               // 0x3850(0x00F0)
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone_9;                              // 0x3940(0x0108)
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone_8;                              // 0x3A48(0x0108)
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone_7;                              // 0x3B50(0x0108)
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone_6;                              // 0x3C58(0x0108)
		struct FAnimNode_CopyBone                                  AnimGraphNode_CopyBone_10;                               // 0x3D60(0x00F0)
		struct FAnimNode_CopyBone                                  AnimGraphNode_CopyBone_9;                                // 0x3E50(0x00F0)
		struct FAnimNode_CopyBone                                  AnimGraphNode_CopyBone_8;                                // 0x3F40(0x00F0)
		struct FAnimNode_SaveCachedPose                            AnimGraphNode_SaveCachedPose_11;                         // 0x4030(0x0158)
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool_10;                        // 0x4188(0x00A0)
		struct FAnimNode_ConvertLocalToComponentSpace              AnimGraphNode_LocalToComponentSpace_9;                   // 0x4228(0x0020)
		struct FAnimNode_ConvertComponentToLocalSpace              AnimGraphNode_ComponentToLocalSpace_9;                   // 0x4248(0x0020)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_21;                          // 0x4268(0x0028)
		struct FAnimNode_SaveCachedPose                            AnimGraphNode_SaveCachedPose_10;                         // 0x4290(0x0158)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_20;                          // 0x43E8(0x0028)
		struct FAnimNode_ConvertLocalToComponentSpace              AnimGraphNode_LocalToComponentSpace_8;                   // 0x4410(0x0020)
		struct FAnimNode_ConvertComponentToLocalSpace              AnimGraphNode_ComponentToLocalSpace_8;                   // 0x4430(0x0020)
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool_9;                         // 0x4450(0x00A0)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_19;                          // 0x44F0(0x0028)
		struct FAnimNode_SaveCachedPose                            AnimGraphNode_SaveCachedPose_9;                          // 0x4518(0x0158)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_18;                          // 0x4670(0x0028)
		struct FAnimNode_ConvertLocalToComponentSpace              AnimGraphNode_LocalToComponentSpace_7;                   // 0x4698(0x0020)
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool_8;                         // 0x46B8(0x00A0)
		struct FAnimNode_ConvertComponentToLocalSpace              AnimGraphNode_ComponentToLocalSpace_7;                   // 0x4758(0x0020)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_17;                          // 0x4778(0x0028)
		struct FAnimNode_SaveCachedPose                            AnimGraphNode_SaveCachedPose_8;                          // 0x47A0(0x0158)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_16;                          // 0x48F8(0x0028)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_15;                          // 0x4920(0x0028)
		struct FAnimNode_SaveCachedPose                            AnimGraphNode_SaveCachedPose_7;                          // 0x4948(0x0158)
		struct FAnimNode_SaveCachedPose                            AnimGraphNode_SaveCachedPose_6;                          // 0x4AA0(0x0158)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_14;                          // 0x4BF8(0x0028)
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool_7;                         // 0x4C20(0x00A0)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_13;                          // 0x4CC0(0x0028)
		struct FAnimNode_PoseBlendNode                             AnimGraphNode_PoseBlendNode;                             // 0x4CE8(0x00A0)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_12;                          // 0x4D88(0x0028)
		struct FAnimNode_ConvertLocalToComponentSpace              AnimGraphNode_LocalToComponentSpace_6;                   // 0x4DB0(0x0020)
		struct FAnimNode_TwoBoneIK                                 AnimGraphNode_TwoBoneIK_8;                               // 0x4DD0(0x01E0)
		struct FAnimNode_TwoBoneIK                                 AnimGraphNode_TwoBoneIK_7;                               // 0x4FB0(0x01E0)
		struct FAnimNode_TwoBoneIK                                 AnimGraphNode_TwoBoneIK_6;                               // 0x5190(0x01E0)
		struct FAnimNode_TwoBoneIK                                 AnimGraphNode_TwoBoneIK_5;                               // 0x5370(0x01E0)
		struct FAnimNode_ConvertComponentToLocalSpace              AnimGraphNode_ComponentToLocalSpace_6;                   // 0x5550(0x0020)
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool_6;                         // 0x5570(0x00A0)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_11;                          // 0x5610(0x0028)
		struct FAnimNode_SaveCachedPose                            AnimGraphNode_SaveCachedPose_5;                          // 0x5638(0x0158)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_10;                          // 0x5790(0x0028)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_9;                           // 0x57B8(0x0028)
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool_5;                         // 0x57E0(0x00A0)
		struct FAnimNode_CopyBone                                  AnimGraphNode_CopyBone_7;                                // 0x5880(0x00F0)
		struct FAnimNode_CopyBone                                  AnimGraphNode_CopyBone_6;                                // 0x5970(0x00F0)
		struct FAnimNode_CopyBone                                  AnimGraphNode_CopyBone_5;                                // 0x5A60(0x00F0)
		struct FAnimNode_CopyBone                                  AnimGraphNode_CopyBone_4;                                // 0x5B50(0x00F0)
		struct FAnimNode_CopyBone                                  AnimGraphNode_CopyBone_3;                                // 0x5C40(0x00F0)
		struct FAnimNode_CopyBone                                  AnimGraphNode_CopyBone_2;                                // 0x5D30(0x00F0)
		struct FAnimNode_ConvertComponentToLocalSpace              AnimGraphNode_ComponentToLocalSpace_5;                   // 0x5E20(0x0020)
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone_5;                              // 0x5E40(0x0108)
		struct FAnimNode_CopyBone                                  AnimGraphNode_CopyBone;                                  // 0x5F48(0x00F0)
		struct FAnimNode_ConvertComponentToLocalSpace              AnimGraphNode_ComponentToLocalSpace_4;                   // 0x6038(0x0020)
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool_4;                         // 0x6058(0x00A0)
		struct FAnimNode_SaveCachedPose                            AnimGraphNode_SaveCachedPose_4;                          // 0x60F8(0x0158)
		struct FAnimNode_ConvertLocalToComponentSpace              AnimGraphNode_LocalToComponentSpace_5;                   // 0x6250(0x0020)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_8;                           // 0x6270(0x0028)
		struct FAnimNode_ConvertComponentToLocalSpace              AnimGraphNode_ComponentToLocalSpace_3;                   // 0x6298(0x0020)
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool_3;                         // 0x62B8(0x00A0)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_7;                           // 0x6358(0x0028)
		struct FAnimNode_SaveCachedPose                            AnimGraphNode_SaveCachedPose_3;                          // 0x6380(0x0158)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_6;                           // 0x64D8(0x0028)
		struct FAnimNode_ConvertLocalToComponentSpace              AnimGraphNode_LocalToComponentSpace_4;                   // 0x6500(0x0020)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_5;                           // 0x6520(0x0028)
		struct FAnimNode_ConvertLocalToComponentSpace              AnimGraphNode_LocalToComponentSpace_3;                   // 0x6548(0x0020)
		unsigned char                                              UnknownData_PBL9[0x8];                                   // 0x6568(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FAnimNode_TwoBoneIK                                 AnimGraphNode_TwoBoneIK_4;                               // 0x6570(0x01E0)
		struct FAnimNode_TwoBoneIK                                 AnimGraphNode_TwoBoneIK_3;                               // 0x6750(0x01E0)
		struct FAnimNode_TwoBoneIK                                 AnimGraphNode_TwoBoneIK_2;                               // 0x6930(0x01E0)
		struct FAnimNode_TwoBoneIK                                 AnimGraphNode_TwoBoneIK;                                 // 0x6B10(0x01E0)
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone_4;                              // 0x6CF0(0x0108)
		struct FAnimNode_ConvertComponentToLocalSpace              AnimGraphNode_ComponentToLocalSpace_2;                   // 0x6DF8(0x0020)
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool_2;                         // 0x6E18(0x00A0)
		struct FAnimNode_SaveCachedPose                            AnimGraphNode_SaveCachedPose_2;                          // 0x6EB8(0x0158)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_4;                           // 0x7010(0x0028)
		struct FAnimNode_ConvertLocalToComponentSpace              AnimGraphNode_LocalToComponentSpace_2;                   // 0x7038(0x0020)
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone_3;                              // 0x7058(0x0108)
		struct FAnimNode_ConvertComponentToLocalSpace              AnimGraphNode_ComponentToLocalSpace;                     // 0x7160(0x0020)
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool;                           // 0x7180(0x00A0)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_3;                           // 0x7220(0x0028)
		struct FAnimNode_SaveCachedPose                            AnimGraphNode_SaveCachedPose;                            // 0x7248(0x0158)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_2;                           // 0x73A0(0x0028)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose;                             // 0x73C8(0x0028)
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone_2;                              // 0x73F0(0x0108)
		struct FAnimNode_ConvertLocalToComponentSpace              AnimGraphNode_LocalToComponentSpace;                     // 0x74F8(0x0020)
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone;                                // 0x7518(0x0108)
		bool                                                       EnableFacialRig;                                         // 0x7620(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       CM_PreviewChoreographedAnimation;                        // 0x7621(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       AG_CopyPoseToLegIKBones;                                 // 0x7622(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       AG_CopyPoseToArmAndPelvisIKBones;                        // 0x7623(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void AnimGraph(const struct FPoseLink& InPose, struct FPoseLink* AnimGraph);
		void ChoreographedMoveTickBP();
		void CIK_InitBP();
		void InitFlexySystemBP();
		void FPIK_InitBP();
		void FPIK_DebugDisplayBP();
		void Foot_Placement_TickBP();
		void CIK_DebugDisplayBP();
		void CIK_TraceFromLimbsBP();
		void CIK_CalculatePoleVectorsBP();
		void CIK_CalculateHipAlphaBP();
		void CIK_CalculateAlphasBP();
		void Climbing_IK_TickBP();
		void CIKOnBeginClimbingBP();
		void FlexyLegCalculationBP();
		void FlexyArmCalculationBP();
		void DebugNavitizationHelper();
		void CalculateLengthOfLimbsBP();
		void CM_CrotchAttachment_OffsetAttacker();
		void CM_OnBeginCrotchAttachment();
		void CM_CrotchAttachment_GetThighRotation();
		void CIK_RotateLocationByPelvicTilt(const struct FVector& LocationToRotate, const struct FVector& PelvisLocation, struct FVector* RotatedLocation);
		void CIK_CalculatePelvicTilt(const struct FVector& TorsoSocketTentativeLocation, const struct FVector& PelvisTentativeLocation, const struct FVector& PelvisTraceOutHitLocation, float* PelvicTilt);
		void CM_CalculateNonDrivingHandEffector(bool IsLeftHand, struct FVector* WorldSpaceLocation);
		void CM_UnstretchArm(const class FName& StartBoneName, const struct FVector& EffectorWorldLocation, struct FVector* TargetLocation);
		void CM_ResetPelvisLocation();
		void CM_CalculateNonDrivingHandsEffectors();
		void CM_CalculateReactorPelvisLocation();
		void CM_InterpolateLocation(const struct FVector& Current, const struct FVector& Target, bool IsPelvis, struct FVector* Result);
		void CM_GetCurveData();
		void CM_CalculateDrivingHandEffector();
		void CM_ReactorAttachment_Tick();
		void CM_AttackerAttachment_Tick();
		void FPIK_CalculateWeightedAverageAlpha();
		void FPIK_WeightedAverage(const struct FVector& NewLocation, struct FVector* HistorySum, TArray<struct FVector>* LocationArray, struct FVector* OutLocation);
		void CIK_WeightedAverage(const struct FVector& NewLocation, struct FVector* HistorySum, TArray<struct FVector>* LocationArray, bool IsHip, struct FVector* OutLocation);
		void CIK_UnstretchLimb(const class FName& StartBoneName, const struct FVector& EffectorWorldLocation, bool IsArm, struct FVector* TargetLocation);
		void CIK_TraceFromPelvis(const struct FVector& AverageLimbOffset);
		void CIK_InterpolateLocation(const struct FVector& Current, const struct FVector& Target, bool IsHipLocation, struct FVector* Result);
		void FPIK_GetPVLateralOffsetFromCurve(float CurveInput, float* LateralOffset);
		void FPIK_Calculate_PV_LateralOffset(float* LeftLateralOffset, float* RightLateralOffset);
		void Calculate_Pole_VectorBP(const class FName& LimbParentBoneName, const struct FVector& CurrentPoleVectorLocation, float InterpolationSpeed, float LimbAlpha, bool IsArm, bool BoneOrientationReversed, const struct FVector& PoleVectorOffset, bool SkipInterpolation, const struct FVector& LimbLocationOffset, struct FVector* PoleVectorLocation);
		void FPIK_Get_Ground_Offset(const class FName& IKFootJoint, float* GroundOffset);
		void FPIK_ClampFootRotatorAngle(float AnimationPoseValue, float DeltaToClamp, float MinValue, float MaxValue, float* ClampedAngle);
		void FPIK_CalculateFootRotationsBoneSpace(const class FName& FootIKJointName, const struct FRotator& AnimationPoseRotation_WS, const struct FRotator& ModifiedRotation_WS, struct FRotator* OffsetRotator, struct FRotator* FootDownRotator);
		void FPIK_UnstretchLeg(const class FName& ThighSocketName, const struct FVector& EffectorWorldLocation, struct FVector* TargetLocation, float* FootDownRotationAlpha);
		void FPIK_InterpolateFeetTransforms();
		void FPIK_Calculate_Pole_Vectors();
		void FPIK_Combine_Hip_Offsets();
		void FPIK_Line_Trace_From_Location(const struct FVector& InputLocation, bool* TraceHit, struct FVector* Location, struct FVector* ImpactNormal);
		void FPIK_Trace_Foot(const class FName& FootIKJointName, float* HipOffset, struct FVector* EffectorWorldLocation, struct FRotator* FootRotation, struct FRotator* FootDownRotation);
		void FPIK_Trace_Feet();
		void FPIK_Calculate_Blend_AlphasBP();
		void BlueprintUpdateAnimation(float DeltaTimeX);
		void ExecuteUbergraph_AB_PP_SheikCharacter(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
