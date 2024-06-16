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
	 * Function AB_PP_SheikCharacter.AB_PP_SheikCharacter_C.AnimGraph
	 */
	struct UAB_PP_SheikCharacter_C_AnimGraph_Params
	{
	public:
		struct FPoseLink                                           InPose;                                                  // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
		struct FPoseLink                                           AnimGraph;                                               // 0x0010(0x0010)  (Parm, OutParm, NoDestructor)
	};

	/**
	 * Function AB_PP_SheikCharacter.AB_PP_SheikCharacter_C.ChoreographedMoveTickBP
	 */
	struct UAB_PP_SheikCharacter_C_ChoreographedMoveTickBP_Params
	{	};

	/**
	 * Function AB_PP_SheikCharacter.AB_PP_SheikCharacter_C.CIK_InitBP
	 */
	struct UAB_PP_SheikCharacter_C_CIK_InitBP_Params
	{	};

	/**
	 * Function AB_PP_SheikCharacter.AB_PP_SheikCharacter_C.InitFlexySystemBP
	 */
	struct UAB_PP_SheikCharacter_C_InitFlexySystemBP_Params
	{	};

	/**
	 * Function AB_PP_SheikCharacter.AB_PP_SheikCharacter_C.FPIK_InitBP
	 */
	struct UAB_PP_SheikCharacter_C_FPIK_InitBP_Params
	{	};

	/**
	 * Function AB_PP_SheikCharacter.AB_PP_SheikCharacter_C.FPIK_DebugDisplayBP
	 */
	struct UAB_PP_SheikCharacter_C_FPIK_DebugDisplayBP_Params
	{	};

	/**
	 * Function AB_PP_SheikCharacter.AB_PP_SheikCharacter_C.Foot_Placement_TickBP
	 */
	struct UAB_PP_SheikCharacter_C_Foot_Placement_TickBP_Params
	{	};

	/**
	 * Function AB_PP_SheikCharacter.AB_PP_SheikCharacter_C.CIK_DebugDisplayBP
	 */
	struct UAB_PP_SheikCharacter_C_CIK_DebugDisplayBP_Params
	{	};

	/**
	 * Function AB_PP_SheikCharacter.AB_PP_SheikCharacter_C.CIK_TraceFromLimbsBP
	 */
	struct UAB_PP_SheikCharacter_C_CIK_TraceFromLimbsBP_Params
	{	};

	/**
	 * Function AB_PP_SheikCharacter.AB_PP_SheikCharacter_C.CIK_CalculatePoleVectorsBP
	 */
	struct UAB_PP_SheikCharacter_C_CIK_CalculatePoleVectorsBP_Params
	{	};

	/**
	 * Function AB_PP_SheikCharacter.AB_PP_SheikCharacter_C.CIK_CalculateHipAlphaBP
	 */
	struct UAB_PP_SheikCharacter_C_CIK_CalculateHipAlphaBP_Params
	{	};

	/**
	 * Function AB_PP_SheikCharacter.AB_PP_SheikCharacter_C.CIK_CalculateAlphasBP
	 */
	struct UAB_PP_SheikCharacter_C_CIK_CalculateAlphasBP_Params
	{	};

	/**
	 * Function AB_PP_SheikCharacter.AB_PP_SheikCharacter_C.Climbing_IK_TickBP
	 */
	struct UAB_PP_SheikCharacter_C_Climbing_IK_TickBP_Params
	{	};

	/**
	 * Function AB_PP_SheikCharacter.AB_PP_SheikCharacter_C.CIKOnBeginClimbingBP
	 */
	struct UAB_PP_SheikCharacter_C_CIKOnBeginClimbingBP_Params
	{	};

	/**
	 * Function AB_PP_SheikCharacter.AB_PP_SheikCharacter_C.FlexyLegCalculationBP
	 */
	struct UAB_PP_SheikCharacter_C_FlexyLegCalculationBP_Params
	{	};

	/**
	 * Function AB_PP_SheikCharacter.AB_PP_SheikCharacter_C.FlexyArmCalculationBP
	 */
	struct UAB_PP_SheikCharacter_C_FlexyArmCalculationBP_Params
	{	};

	/**
	 * Function AB_PP_SheikCharacter.AB_PP_SheikCharacter_C.DebugNavitizationHelper
	 */
	struct UAB_PP_SheikCharacter_C_DebugNavitizationHelper_Params
	{	};

	/**
	 * Function AB_PP_SheikCharacter.AB_PP_SheikCharacter_C.CalculateLengthOfLimbsBP
	 */
	struct UAB_PP_SheikCharacter_C_CalculateLengthOfLimbsBP_Params
	{	};

	/**
	 * Function AB_PP_SheikCharacter.AB_PP_SheikCharacter_C.CM_CrotchAttachment_OffsetAttacker
	 */
	struct UAB_PP_SheikCharacter_C_CM_CrotchAttachment_OffsetAttacker_Params
	{	};

	/**
	 * Function AB_PP_SheikCharacter.AB_PP_SheikCharacter_C.CM_OnBeginCrotchAttachment
	 */
	struct UAB_PP_SheikCharacter_C_CM_OnBeginCrotchAttachment_Params
	{	};

	/**
	 * Function AB_PP_SheikCharacter.AB_PP_SheikCharacter_C.CM_CrotchAttachment_GetThighRotation
	 */
	struct UAB_PP_SheikCharacter_C_CM_CrotchAttachment_GetThighRotation_Params
	{	};

	/**
	 * Function AB_PP_SheikCharacter.AB_PP_SheikCharacter_C.CIK_RotateLocationByPelvicTilt
	 */
	struct UAB_PP_SheikCharacter_C_CIK_RotateLocationByPelvicTilt_Params
	{
	public:
		struct FVector                                             LocationToRotate;                                        // 0x0000(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             PelvisLocation;                                          // 0x000C(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             RotatedLocation;                                         // 0x0018(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function AB_PP_SheikCharacter.AB_PP_SheikCharacter_C.CIK_CalculatePelvicTilt
	 */
	struct UAB_PP_SheikCharacter_C_CIK_CalculatePelvicTilt_Params
	{
	public:
		struct FVector                                             TorsoSocketTentativeLocation;                            // 0x0000(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             PelvisTentativeLocation;                                 // 0x000C(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             PelvisTraceOutHitLocation;                               // 0x0018(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      PelvicTilt;                                              // 0x0024(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function AB_PP_SheikCharacter.AB_PP_SheikCharacter_C.CM_CalculateNonDrivingHandEffector
	 */
	struct UAB_PP_SheikCharacter_C_CM_CalculateNonDrivingHandEffector_Params
	{
	public:
		bool                                                       IsLeftHand;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_OGDR[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FVector                                             WorldSpaceLocation;                                      // 0x0004(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function AB_PP_SheikCharacter.AB_PP_SheikCharacter_C.CM_UnstretchArm
	 */
	struct UAB_PP_SheikCharacter_C_CM_UnstretchArm_Params
	{
	public:
		class FName                                                StartBoneName;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             EffectorWorldLocation;                                   // 0x0008(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             TargetLocation;                                          // 0x0014(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function AB_PP_SheikCharacter.AB_PP_SheikCharacter_C.CM_ResetPelvisLocation
	 */
	struct UAB_PP_SheikCharacter_C_CM_ResetPelvisLocation_Params
	{	};

	/**
	 * Function AB_PP_SheikCharacter.AB_PP_SheikCharacter_C.CM_CalculateNonDrivingHandsEffectors
	 */
	struct UAB_PP_SheikCharacter_C_CM_CalculateNonDrivingHandsEffectors_Params
	{	};

	/**
	 * Function AB_PP_SheikCharacter.AB_PP_SheikCharacter_C.CM_CalculateReactorPelvisLocation
	 */
	struct UAB_PP_SheikCharacter_C_CM_CalculateReactorPelvisLocation_Params
	{	};

	/**
	 * Function AB_PP_SheikCharacter.AB_PP_SheikCharacter_C.CM_InterpolateLocation
	 */
	struct UAB_PP_SheikCharacter_C_CM_InterpolateLocation_Params
	{
	public:
		struct FVector                                             Current;                                                 // 0x0000(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             Target;                                                  // 0x000C(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       IsPelvis;                                                // 0x0018(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_T48M[0x3];                                   // 0x0019(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FVector                                             Result;                                                  // 0x001C(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function AB_PP_SheikCharacter.AB_PP_SheikCharacter_C.CM_GetCurveData
	 */
	struct UAB_PP_SheikCharacter_C_CM_GetCurveData_Params
	{	};

	/**
	 * Function AB_PP_SheikCharacter.AB_PP_SheikCharacter_C.CM_CalculateDrivingHandEffector
	 */
	struct UAB_PP_SheikCharacter_C_CM_CalculateDrivingHandEffector_Params
	{	};

	/**
	 * Function AB_PP_SheikCharacter.AB_PP_SheikCharacter_C.CM_ReactorAttachment_Tick
	 */
	struct UAB_PP_SheikCharacter_C_CM_ReactorAttachment_Tick_Params
	{	};

	/**
	 * Function AB_PP_SheikCharacter.AB_PP_SheikCharacter_C.CM_AttackerAttachment_Tick
	 */
	struct UAB_PP_SheikCharacter_C_CM_AttackerAttachment_Tick_Params
	{	};

	/**
	 * Function AB_PP_SheikCharacter.AB_PP_SheikCharacter_C.FPIK_CalculateWeightedAverageAlpha
	 */
	struct UAB_PP_SheikCharacter_C_FPIK_CalculateWeightedAverageAlpha_Params
	{	};

	/**
	 * Function AB_PP_SheikCharacter.AB_PP_SheikCharacter_C.FPIK_WeightedAverage
	 */
	struct UAB_PP_SheikCharacter_C_FPIK_WeightedAverage_Params
	{
	public:
		struct FVector                                             NewLocation;                                             // 0x0000(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             HistorySum;                                              // 0x000C(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		TArray<struct FVector>                                     LocationArray;                                           // 0x0018(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		struct FVector                                             OutLocation;                                             // 0x0028(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function AB_PP_SheikCharacter.AB_PP_SheikCharacter_C.CIK_WeightedAverage
	 */
	struct UAB_PP_SheikCharacter_C_CIK_WeightedAverage_Params
	{
	public:
		struct FVector                                             NewLocation;                                             // 0x0000(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             HistorySum;                                              // 0x000C(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		TArray<struct FVector>                                     LocationArray;                                           // 0x0018(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		bool                                                       IsHip;                                                   // 0x0028(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_49DC[0x3];                                   // 0x0029(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FVector                                             OutLocation;                                             // 0x002C(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function AB_PP_SheikCharacter.AB_PP_SheikCharacter_C.CIK_Unstretch Limb
	 */
	struct UAB_PP_SheikCharacter_C_CIK_UnstretchLimb_Params
	{
	public:
		class FName                                                StartBoneName;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             EffectorWorldLocation;                                   // 0x0008(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       IsArm;                                                   // 0x0014(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_IJNF[0x3];                                   // 0x0015(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FVector                                             TargetLocation;                                          // 0x0018(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function AB_PP_SheikCharacter.AB_PP_SheikCharacter_C.CIK_TraceFromPelvis
	 */
	struct UAB_PP_SheikCharacter_C_CIK_TraceFromPelvis_Params
	{
	public:
		struct FVector                                             AverageLimbOffset;                                       // 0x0000(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function AB_PP_SheikCharacter.AB_PP_SheikCharacter_C.CIK_InterpolateLocation
	 */
	struct UAB_PP_SheikCharacter_C_CIK_InterpolateLocation_Params
	{
	public:
		struct FVector                                             Current;                                                 // 0x0000(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             Target;                                                  // 0x000C(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       IsHipLocation;                                           // 0x0018(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_NPV6[0x3];                                   // 0x0019(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FVector                                             Result;                                                  // 0x001C(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function AB_PP_SheikCharacter.AB_PP_SheikCharacter_C.FPIK_GetPVLateralOffsetFromCurve
	 */
	struct UAB_PP_SheikCharacter_C_FPIK_GetPVLateralOffsetFromCurve_Params
	{
	public:
		float                                                      CurveInput;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      LateralOffset;                                           // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function AB_PP_SheikCharacter.AB_PP_SheikCharacter_C.FPIK_Calculate_PV_LateralOffset
	 */
	struct UAB_PP_SheikCharacter_C_FPIK_Calculate_PV_LateralOffset_Params
	{
	public:
		float                                                      LeftLateralOffset;                                       // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      RightLateralOffset;                                      // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function AB_PP_SheikCharacter.AB_PP_SheikCharacter_C.Calculate_Pole_VectorBP
	 */
	struct UAB_PP_SheikCharacter_C_Calculate_Pole_VectorBP_Params
	{
	public:
		class FName                                                LimbParentBoneName;                                      // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             CurrentPoleVectorLocation;                               // 0x0008(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      InterpolationSpeed;                                      // 0x0014(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      LimbAlpha;                                               // 0x0018(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       IsArm;                                                   // 0x001C(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       BoneOrientationReversed;                                 // 0x001D(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_AE5K[0x2];                                   // 0x001E(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FVector                                             PoleVectorOffset;                                        // 0x0020(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       SkipInterpolation;                                       // 0x002C(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_O70A[0x3];                                   // 0x002D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FVector                                             LimbLocationOffset;                                      // 0x0030(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             PoleVectorLocation;                                      // 0x003C(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function AB_PP_SheikCharacter.AB_PP_SheikCharacter_C.FPIK_Get_Ground_Offset
	 */
	struct UAB_PP_SheikCharacter_C_FPIK_Get_Ground_Offset_Params
	{
	public:
		class FName                                                IKFootJoint;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      GroundOffset;                                            // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function AB_PP_SheikCharacter.AB_PP_SheikCharacter_C.FPIK_ClampFootRotatorAngle
	 */
	struct UAB_PP_SheikCharacter_C_FPIK_ClampFootRotatorAngle_Params
	{
	public:
		float                                                      AnimationPoseValue;                                      // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      DeltaToClamp;                                            // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      MinValue;                                                // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      MaxValue;                                                // 0x000C(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      ClampedAngle;                                            // 0x0010(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function AB_PP_SheikCharacter.AB_PP_SheikCharacter_C.FPIK_CalculateFootRotationsBoneSpace
	 */
	struct UAB_PP_SheikCharacter_C_FPIK_CalculateFootRotationsBoneSpace_Params
	{
	public:
		class FName                                                FootIKJointName;                                         // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FRotator                                            AnimationPoseRotation_WS;                                // 0x0008(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FRotator                                            ModifiedRotation_WS;                                     // 0x0014(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FRotator                                            OffsetRotator;                                           // 0x0020(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FRotator                                            FootDownRotator;                                         // 0x002C(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function AB_PP_SheikCharacter.AB_PP_SheikCharacter_C.FPIK_Unstretch Leg
	 */
	struct UAB_PP_SheikCharacter_C_FPIK_UnstretchLeg_Params
	{
	public:
		class FName                                                ThighSocketName;                                         // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             EffectorWorldLocation;                                   // 0x0008(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             TargetLocation;                                          // 0x0014(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      FootDownRotationAlpha;                                   // 0x0020(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function AB_PP_SheikCharacter.AB_PP_SheikCharacter_C.FPIK_InterpolateFeetTransforms
	 */
	struct UAB_PP_SheikCharacter_C_FPIK_InterpolateFeetTransforms_Params
	{	};

	/**
	 * Function AB_PP_SheikCharacter.AB_PP_SheikCharacter_C.FPIK_Calculate_Pole_Vectors
	 */
	struct UAB_PP_SheikCharacter_C_FPIK_Calculate_Pole_Vectors_Params
	{	};

	/**
	 * Function AB_PP_SheikCharacter.AB_PP_SheikCharacter_C.FPIK_Combine_Hip_Offsets
	 */
	struct UAB_PP_SheikCharacter_C_FPIK_Combine_Hip_Offsets_Params
	{	};

	/**
	 * Function AB_PP_SheikCharacter.AB_PP_SheikCharacter_C.FPIK_Line_Trace_From_Location
	 */
	struct UAB_PP_SheikCharacter_C_FPIK_Line_Trace_From_Location_Params
	{
	public:
		struct FVector                                             InputLocation;                                           // 0x0000(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       TraceHit;                                                // 0x000C(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_U4JS[0x3];                                   // 0x000D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FVector                                             Location;                                                // 0x0010(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             ImpactNormal;                                            // 0x001C(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function AB_PP_SheikCharacter.AB_PP_SheikCharacter_C.FPIK_Trace_Foot
	 */
	struct UAB_PP_SheikCharacter_C_FPIK_Trace_Foot_Params
	{
	public:
		class FName                                                FootIKJointName;                                         // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      HipOffset;                                               // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             EffectorWorldLocation;                                   // 0x000C(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FRotator                                            FootRotation;                                            // 0x0018(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FRotator                                            FootDownRotation;                                        // 0x0024(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function AB_PP_SheikCharacter.AB_PP_SheikCharacter_C.FPIK_Trace_Feet
	 */
	struct UAB_PP_SheikCharacter_C_FPIK_Trace_Feet_Params
	{	};

	/**
	 * Function AB_PP_SheikCharacter.AB_PP_SheikCharacter_C.FPIK_Calculate_Blend_AlphasBP
	 */
	struct UAB_PP_SheikCharacter_C_FPIK_Calculate_Blend_AlphasBP_Params
	{	};

	/**
	 * Function AB_PP_SheikCharacter.AB_PP_SheikCharacter_C.BlueprintUpdateAnimation
	 */
	struct UAB_PP_SheikCharacter_C_BlueprintUpdateAnimation_Params
	{
	public:
		float                                                      DeltaTimeX;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function AB_PP_SheikCharacter.AB_PP_SheikCharacter_C.ExecuteUbergraph_AB_PP_SheikCharacter
	 */
	struct UAB_PP_SheikCharacter_C_ExecuteUbergraph_AB_PP_SheikCharacter_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
