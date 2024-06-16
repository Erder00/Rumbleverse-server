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
	 * Function Char_VFXComponent.Char_VFXComponent_C.EmotesStop
	 */
	struct UChar_VFXComponent_C_EmotesStop_Params
	{
	public:
		struct FIGAdditionalParams                                 IGAdditionalParams;                                      // 0x0000(0x0028)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	};

	/**
	 * Function Char_VFXComponent.Char_VFXComponent_C.StopFOVUpdate
	 */
	struct UChar_VFXComponent_C_StopFOVUpdate_Params
	{	};

	/**
	 * Function Char_VFXComponent.Char_VFXComponent_C.FOVTimerUpdate
	 */
	struct UChar_VFXComponent_C_FOVTimerUpdate_Params
	{	};

	/**
	 * Function Char_VFXComponent.Char_VFXComponent_C.StartFOVUpdate
	 */
	struct UChar_VFXComponent_C_StartFOVUpdate_Params
	{	};

	/**
	 * Function Char_VFXComponent.Char_VFXComponent_C.Emotes
	 */
	struct UChar_VFXComponent_C_Emotes_Params
	{
	public:
		struct FIGAdditionalParams                                 IGAdditionalParams;                                      // 0x0000(0x0028)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	};

	/**
	 * Function Char_VFXComponent.Char_VFXComponent_C.PoleSwingingEnd
	 */
	struct UChar_VFXComponent_C_PoleSwingingEnd_Params
	{	};

	/**
	 * Function Char_VFXComponent.Char_VFXComponent_C.PoleSwingingStart
	 */
	struct UChar_VFXComponent_C_PoleSwingingStart_Params
	{	};

	/**
	 * Function Char_VFXComponent.Char_VFXComponent_C.HandleUnpocketVFX
	 */
	struct UChar_VFXComponent_C_HandleUnpocketVFX_Params
	{
	public:
		class AActor*                                              Attacker;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              Victim;                                                  // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       DroppedAnItem;                                           // 0x0010(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_HRLV[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Char_VFXComponent.Char_VFXComponent_C.StopWaterfallVFX
	 */
	struct UChar_VFXComponent_C_StopWaterfallVFX_Params
	{	};

	/**
	 * Function Char_VFXComponent.Char_VFXComponent_C.Spawn Waterfall VFX
	 */
	struct UChar_VFXComponent_C_SpawnWaterfallVFX_Params
	{
	public:
		class FName                                                WaterType;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Char_VFXComponent.Char_VFXComponent_C.GC_UpdateTime
	 */
	struct UChar_VFXComponent_C_GC_UpdateTime_Params
	{	};

	/**
	 * Function Char_VFXComponent.Char_VFXComponent_C.GC_SpawnMeterResult
	 */
	struct UChar_VFXComponent_C_GC_SpawnMeterResult_Params
	{	};

	/**
	 * Function Char_VFXComponent.Char_VFXComponent_C.GC_DeactivateMeterTry
	 */
	struct UChar_VFXComponent_C_GC_DeactivateMeterTry_Params
	{	};

	/**
	 * Function Char_VFXComponent.Char_VFXComponent_C.GC_SpawnMeterTry
	 */
	struct UChar_VFXComponent_C_GC_SpawnMeterTry_Params
	{	};

	/**
	 * Function Char_VFXComponent.Char_VFXComponent_C.SpecialImpactDecal
	 */
	struct UChar_VFXComponent_C_SpecialImpactDecal_Params
	{
	public:
		struct FIGAdditionalParams                                 IGAdditionalParams;                                      // 0x0000(0x0028)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	};

	/**
	 * Function Char_VFXComponent.Char_VFXComponent_C.StopBroomWiggle
	 */
	struct UChar_VFXComponent_C_StopBroomWiggle_Params
	{	};

	/**
	 * Function Char_VFXComponent.Char_VFXComponent_C.StartBroomWiggle
	 */
	struct UChar_VFXComponent_C_StartBroomWiggle_Params
	{	};

	/**
	 * Function Char_VFXComponent.Char_VFXComponent_C.ApplyTeamDecals
	 */
	struct UChar_VFXComponent_C_ApplyTeamDecals_Params
	{	};

	/**
	 * Function Char_VFXComponent.Char_VFXComponent_C.OnTeamInfoUpdated
	 */
	struct UChar_VFXComponent_C_OnTeamInfoUpdated_Params
	{	};

	/**
	 * Function Char_VFXComponent.Char_VFXComponent_C.StopWaterWakeIfActive
	 */
	struct UChar_VFXComponent_C_StopWaterWakeIfActive_Params
	{	};

	/**
	 * Function Char_VFXComponent.Char_VFXComponent_C.WaterWakeLoop
	 */
	struct UChar_VFXComponent_C_WaterWakeLoop_Params
	{
	public:
		struct FIGVFXCharacterAnimNotifyEventInfo                  IGVFXCharacterAnimNotifyEventInfo;                       // 0x0000(0x0048)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	};

	/**
	 * Function Char_VFXComponent.Char_VFXComponent_C.SpawnWaterWake
	 */
	struct UChar_VFXComponent_C_SpawnWaterWake_Params
	{
	public:
		struct FIGVFXCharacterAnimNotifyEventInfo                  EventInfo;                                               // 0x0000(0x0048)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	};

	/**
	 * Function Char_VFXComponent.Char_VFXComponent_C.StopHidingLeaves
	 */
	struct UChar_VFXComponent_C_StopHidingLeaves_Params
	{	};

	/**
	 * Function Char_VFXComponent.Char_VFXComponent_C.SpawnHidingLeaves
	 */
	struct UChar_VFXComponent_C_SpawnHidingLeaves_Params
	{
	public:
		struct FLinearColor                                        LeafColor;                                               // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             LeafScale;                                               // 0x0010(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_Y5HU[0x4];                                   // 0x001C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UParticleSystem*                                     LeafEmitter;                                             // 0x0020(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Char_VFXComponent.Char_VFXComponent_C.OnCombatModeChanged
	 */
	struct UChar_VFXComponent_C_OnCombatModeChanged_Params
	{
	public:
		bool                                                       IsInCombatMode;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_1X98[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Char_VFXComponent.Char_VFXComponent_C.PerkPocketDimension
	 */
	struct UChar_VFXComponent_C_PerkPocketDimension_Params
	{
	public:
		bool                                                       IsStashing;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       IsLargeItem;                                             // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Char_VFXComponent.Char_VFXComponent_C.SpecialAttacksDeactivate
	 */
	struct UChar_VFXComponent_C_SpecialAttacksDeactivate_Params
	{	};

	/**
	 * Function Char_VFXComponent.Char_VFXComponent_C.SpawnAirDodgeBounce
	 */
	struct UChar_VFXComponent_C_SpawnAirDodgeBounce_Params
	{	};

	/**
	 * Function Char_VFXComponent.Char_VFXComponent_C.AirDodgeBoostTimer
	 */
	struct UChar_VFXComponent_C_AirDodgeBoostTimer_Params
	{	};

	/**
	 * Function Char_VFXComponent.Char_VFXComponent_C.OnCharacterBounced
	 */
	struct UChar_VFXComponent_C_OnCharacterBounced_Params
	{
	public:
		float                                                      BounceIntensity;                                         // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Char_VFXComponent.Char_VFXComponent_C.RocketJump
	 */
	struct UChar_VFXComponent_C_RocketJump_Params
	{
	public:
		bool                                                       Start;                                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_0YT7[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FIGAdditionalParams                                 IGAdditionalParams;                                      // 0x0004(0x0028)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
		struct FIGDynamicParams                                    IGDynamicParams;                                         // 0x002C(0x001C)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	};

	/**
	 * Function Char_VFXComponent.Char_VFXComponent_C.SetWaterColor
	 */
	struct UChar_VFXComponent_C_SetWaterColor_Params
	{
	public:
		class UFXSystemComponent*                                  PSystem;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	};

	/**
	 * Function Char_VFXComponent.Char_VFXComponent_C.GetGameState
	 */
	struct UChar_VFXComponent_C_GetGameState_Params
	{	};

	/**
	 * Function Char_VFXComponent.Char_VFXComponent_C.TeamPose4Stop
	 */
	struct UChar_VFXComponent_C_TeamPose4Stop_Params
	{	};

	/**
	 * Function Char_VFXComponent.Char_VFXComponent_C.TeamPose4Start
	 */
	struct UChar_VFXComponent_C_TeamPose4Start_Params
	{	};

	/**
	 * Function Char_VFXComponent.Char_VFXComponent_C.SetCliffHangerVFX
	 */
	struct UChar_VFXComponent_C_SetCliffHangerVFX_Params
	{
	public:
		class ACharacter*                                          Character;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              MovementMode;                                            // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Char_VFXComponent.Char_VFXComponent_C.MovementModeChanged
	 */
	struct UChar_VFXComponent_C_MovementModeChanged_Params
	{
	public:
		class ACharacter*                                          Character;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		EMovementMode                                              PrevMovementMode;                                        // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              PreviousCustomMode;                                      // 0x0009(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Char_VFXComponent.Char_VFXComponent_C.SetButterflyLanded
	 */
	struct UChar_VFXComponent_C_SetButterflyLanded_Params
	{
	public:
		class FName                                                EventName;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      EmitterTime;                                             // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    ParticleTime;                                            // 0x000C(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             Location;                                                // 0x0010(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             Velocity;                                                // 0x001C(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             Direction;                                               // 0x0028(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Char_VFXComponent.Char_VFXComponent_C.TeamPose2Stop
	 */
	struct UChar_VFXComponent_C_TeamPose2Stop_Params
	{	};

	/**
	 * Function Char_VFXComponent.Char_VFXComponent_C.TeamPose2Start
	 */
	struct UChar_VFXComponent_C_TeamPose2Start_Params
	{	};

	/**
	 * Function Char_VFXComponent.Char_VFXComponent_C.ClearFallingVFX
	 */
	struct UChar_VFXComponent_C_ClearFallingVFX_Params
	{	};

	/**
	 * Function Char_VFXComponent.Char_VFXComponent_C.DeactivateSuperstarHelix
	 */
	struct UChar_VFXComponent_C_DeactivateSuperstarHelix_Params
	{	};

	/**
	 * Function Char_VFXComponent.Char_VFXComponent_C.SpawnSuperstarHelix
	 */
	struct UChar_VFXComponent_C_SpawnSuperstarHelix_Params
	{	};

	/**
	 * Function Char_VFXComponent.Char_VFXComponent_C.SpawnStaminaVFX
	 */
	struct UChar_VFXComponent_C_SpawnStaminaVFX_Params
	{
	public:
		class UParticleSystem*                                     EmitterTemplate;                                         // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class USceneComponent*                                     Attachment;                                              // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class USkeletalMeshComponent*                              ConsumeableSK;                                           // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       PuffOut;                                                 // 0x0018(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_HYEQ[0x3];                                   // 0x0019(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Char_VFXComponent.Char_VFXComponent_C.StartWorldCameraShake
	 */
	struct UChar_VFXComponent_C_StartWorldCameraShake_Params
	{
	public:
		struct FIGAdditionalParams                                 AdditionalParams;                                        // 0x0000(0x0028)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	};

	/**
	 * Function Char_VFXComponent.Char_VFXComponent_C.OnExitedSuperstarMode
	 */
	struct UChar_VFXComponent_C_OnExitedSuperstarMode_Params
	{	};

	/**
	 * Function Char_VFXComponent.Char_VFXComponent_C.OnEnteredSuperstarMode
	 */
	struct UChar_VFXComponent_C_OnEnteredSuperstarMode_Params
	{	};

	/**
	 * Function Char_VFXComponent.Char_VFXComponent_C.ShieldBreakVicious
	 */
	struct UChar_VFXComponent_C_ShieldBreakVicious_Params
	{	};

	/**
	 * Function Char_VFXComponent.Char_VFXComponent_C.GroundImpact
	 */
	struct UChar_VFXComponent_C_GroundImpact_Params
	{
	public:
		struct FIGAdditionalParams                                 IGAdditionalParams;                                      // 0x0000(0x0028)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	};

	/**
	 * Function Char_VFXComponent.Char_VFXComponent_C.StopCameraShake
	 */
	struct UChar_VFXComponent_C_StopCameraShake_Params
	{	};

	/**
	 * Function Char_VFXComponent.Char_VFXComponent_C.StartCameraShake
	 */
	struct UChar_VFXComponent_C_StartCameraShake_Params
	{
	public:
		struct FIGAdditionalParams                                 IGAdditionalParams;                                      // 0x0000(0x0028)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	};

	/**
	 * Function Char_VFXComponent.Char_VFXComponent_C.RoundEnded
	 */
	struct UChar_VFXComponent_C_RoundEnded_Params
	{
	public:
		TArray<class AIGPlayerState*>                              WinningPlayers;                                          // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		bool                                                       isLocalPlayer;                                           // 0x0010(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       isSpectator;                                             // 0x0011(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_398U[0x6];                                   // 0x0012(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Char_VFXComponent.Char_VFXComponent_C.OnNoLongerWinded
	 */
	struct UChar_VFXComponent_C_OnNoLongerWinded_Params
	{	};

	/**
	 * Function Char_VFXComponent.Char_VFXComponent_C.OnWinded
	 */
	struct UChar_VFXComponent_C_OnWinded_Params
	{
	public:
		float                                                      StaminaPercentage;                                       // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Char_VFXComponent.Char_VFXComponent_C.OffsetCannonVFX
	 */
	struct UChar_VFXComponent_C_OffsetCannonVFX_Params
	{	};

	/**
	 * Function Char_VFXComponent.Char_VFXComponent_C.SetBlockShieldOffset
	 */
	struct UChar_VFXComponent_C_SetBlockShieldOffset_Params
	{
	public:
		class UParticleSystemComponent*                            PSystem;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Char_VFXComponent.Char_VFXComponent_C.BlockHit
	 */
	struct UChar_VFXComponent_C_BlockHit_Params
	{
	public:
		struct FIGAdditionalParams                                 AdditionalParams;                                        // 0x0000(0x0028)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	};

	/**
	 * Function Char_VFXComponent.Char_VFXComponent_C.BlockStartExit
	 */
	struct UChar_VFXComponent_C_BlockStartExit_Params
	{	};

	/**
	 * Function Char_VFXComponent.Char_VFXComponent_C.BlockingEnd
	 */
	struct UChar_VFXComponent_C_BlockingEnd_Params
	{
	public:
		struct FIGAdditionalParams                                 AdditionalParams;                                        // 0x0000(0x0028)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	};

	/**
	 * Function Char_VFXComponent.Char_VFXComponent_C.BlockLoop
	 */
	struct UChar_VFXComponent_C_BlockLoop_Params
	{
	public:
		struct FIGAdditionalParams                                 AdditionalParams;                                        // 0x0000(0x0028)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	};

	/**
	 * Function Char_VFXComponent.Char_VFXComponent_C.StartBlockLoop
	 */
	struct UChar_VFXComponent_C_StartBlockLoop_Params
	{
	public:
		struct FIGAdditionalParams                                 AdditionalParams;                                        // 0x0000(0x0028)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	};

	/**
	 * Function Char_VFXComponent.Char_VFXComponent_C.BlockingStart
	 */
	struct UChar_VFXComponent_C_BlockingStart_Params
	{
	public:
		struct FIGAdditionalParams                                 AdditionalParams;                                        // 0x0000(0x0028)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	};

	/**
	 * Function Char_VFXComponent.Char_VFXComponent_C.SpecialAttacksSpawn
	 */
	struct UChar_VFXComponent_C_SpecialAttacksSpawn_Params
	{
	public:
		struct FIGVFXCharacterAnimNotifyEventInfo                  EventInfo;                                               // 0x0000(0x0048)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	};

	/**
	 * Function Char_VFXComponent.Char_VFXComponent_C.IncrementUnblockable
	 */
	struct UChar_VFXComponent_C_IncrementUnblockable_Params
	{	};

	/**
	 * Function Char_VFXComponent.Char_VFXComponent_C.UnblockableFlash
	 */
	struct UChar_VFXComponent_C_UnblockableFlash_Params
	{	};

	/**
	 * Function Char_VFXComponent.Char_VFXComponent_C.InvincibleFlash
	 */
	struct UChar_VFXComponent_C_InvincibleFlash_Params
	{
	public:
		bool                                                       On;                                                      // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_1L1W[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Char_VFXComponent.Char_VFXComponent_C.UnblockableEnd
	 */
	struct UChar_VFXComponent_C_UnblockableEnd_Params
	{	};

	/**
	 * Function Char_VFXComponent.Char_VFXComponent_C.UnblockableHold
	 */
	struct UChar_VFXComponent_C_UnblockableHold_Params
	{
	public:
		struct FIGAdditionalParams                                 IGAdditionalParams;                                      // 0x0000(0x0028)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	};

	/**
	 * Function Char_VFXComponent.Char_VFXComponent_C.SurfaceVFX
	 */
	struct UChar_VFXComponent_C_SurfaceVFX_Params
	{
	public:
		struct FIGVFXCharacterAnimNotifyEventInfo                  EventInfo;                                               // 0x0000(0x0048)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	};

	/**
	 * Function Char_VFXComponent.Char_VFXComponent_C.WallBounce
	 */
	struct UChar_VFXComponent_C_WallBounce_Params
	{	};

	/**
	 * Function Char_VFXComponent.Char_VFXComponent_C.ClimbDecal
	 */
	struct UChar_VFXComponent_C_ClimbDecal_Params
	{
	public:
		struct FIGAdditionalParams                                 AdditionalParams;                                        // 0x0000(0x0028)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	};

	/**
	 * Function Char_VFXComponent.Char_VFXComponent_C.KOUpdate
	 */
	struct UChar_VFXComponent_C_KOUpdate_Params
	{	};

	/**
	 * Function Char_VFXComponent.Char_VFXComponent_C.ShowOrHideDangerZoneVFX
	 */
	struct UChar_VFXComponent_C_ShowOrHideDangerZoneVFX_Params
	{
	public:
		bool                                                       DangerZoneStatus;                                        // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Char_VFXComponent.Char_VFXComponent_C.GetPartyMemberIDColor
	 */
	struct UChar_VFXComponent_C_GetPartyMemberIDColor_Params
	{
	public:
		class APlayerState*                                        PlayerState;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FLinearColor                                        PartyLinearColor;                                        // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Char_VFXComponent.Char_VFXComponent_C.MagazineEnd
	 */
	struct UChar_VFXComponent_C_MagazineEnd_Params
	{	};

	/**
	 * Function Char_VFXComponent.Char_VFXComponent_C.EventWon
	 */
	struct UChar_VFXComponent_C_EventWon_Params
	{
	public:
		TArray<class ASheikCharacter*>                             Winners;                                                 // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function Char_VFXComponent.Char_VFXComponent_C.GetDefenderImpactPoint
	 */
	struct UChar_VFXComponent_C_GetDefenderImpactPoint_Params
	{
	public:
		bool                                                       FloorHit;                                                // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_GLG7[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      Distance;                                                // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             ImpactPoint;                                             // 0x0008(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FRotator                                            ImpactRotation;                                          // 0x0014(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Char_VFXComponent.Char_VFXComponent_C.PerkRemoved
	 */
	struct UChar_VFXComponent_C_PerkRemoved_Params
	{
	public:
		class UObject*                                             PerkAsset;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      Value;                                                   // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Char_VFXComponent.Char_VFXComponent_C.PerkDeactivated
	 */
	struct UChar_VFXComponent_C_PerkDeactivated_Params
	{
	public:
		class UObject*                                             PerkAsset;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      Value;                                                   // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Char_VFXComponent.Char_VFXComponent_C.PerkActivated
	 */
	struct UChar_VFXComponent_C_PerkActivated_Params
	{
	public:
		class UObject*                                             PerkAsset;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      Value;                                                   // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_JO09[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Char_VFXComponent.Char_VFXComponent_C.PerkGained
	 */
	struct UChar_VFXComponent_C_PerkGained_Params
	{
	public:
		class UObject*                                             PerkAsset;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      Value;                                                   // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Char_VFXComponent.Char_VFXComponent_C.OnAimUpdated
	 */
	struct UChar_VFXComponent_C_OnAimUpdated_Params
	{
	public:
		struct FVector                                             StartPoint;                                              // 0x0000(0x000C)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             EndPoint;                                                // 0x000C(0x000C)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             StartTangent;                                            // 0x0018(0x000C)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             EndTangent;                                              // 0x0024(0x000C)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             ImpactNormal;                                            // 0x0030(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Char_VFXComponent.Char_VFXComponent_C.OnAimExited
	 */
	struct UChar_VFXComponent_C_OnAimExited_Params
	{	};

	/**
	 * Function Char_VFXComponent.Char_VFXComponent_C.OnAimStarted
	 */
	struct UChar_VFXComponent_C_OnAimStarted_Params
	{	};

	/**
	 * Function Char_VFXComponent.Char_VFXComponent_C.MistAttackEnd
	 */
	struct UChar_VFXComponent_C_MistAttackEnd_Params
	{
	public:
		struct FIGAdditionalParams                                 AdditionalParams;                                        // 0x0000(0x0028)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	};

	/**
	 * Function Char_VFXComponent.Char_VFXComponent_C.MistAttackStart
	 */
	struct UChar_VFXComponent_C_MistAttackStart_Params
	{
	public:
		struct FIGAdditionalParams                                 AdditionalParams;                                        // 0x0000(0x0028)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	};

	/**
	 * Function Char_VFXComponent.Char_VFXComponent_C.UpdateConsumableLocation
	 */
	struct UChar_VFXComponent_C_UpdateConsumableLocation_Params
	{	};

	/**
	 * Function Char_VFXComponent.Char_VFXComponent_C.ConsumableEnd
	 */
	struct UChar_VFXComponent_C_ConsumableEnd_Params
	{	};

	/**
	 * Function Char_VFXComponent.Char_VFXComponent_C.ConsumableStart
	 */
	struct UChar_VFXComponent_C_ConsumableStart_Params
	{
	public:
		struct FIGDynamicParams                                    DynamicParams;                                           // 0x0000(0x001C)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	};

	/**
	 * Function Char_VFXComponent.Char_VFXComponent_C.GetAttackerImpactPoint
	 */
	struct UChar_VFXComponent_C_GetAttackerImpactPoint_Params
	{
	public:
		bool                                                       FloorHit;                                                // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_FQT2[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      Distance;                                                // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             ImpactPoint;                                             // 0x0008(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FRotator                                            ImpactRotation;                                          // 0x0014(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Char_VFXComponent.Char_VFXComponent_C.SpawnCannonCloudVFX
	 */
	struct UChar_VFXComponent_C_SpawnCannonCloudVFX_Params
	{	};

	/**
	 * Function Char_VFXComponent.Char_VFXComponent_C.BRFreefallEnd
	 */
	struct UChar_VFXComponent_C_BRFreefallEnd_Params
	{	};

	/**
	 * Function Char_VFXComponent.Char_VFXComponent_C.KillActiveVFX
	 */
	struct UChar_VFXComponent_C_KillActiveVFX_Params
	{
	public:
		bool                                                       PlayerDestroyed;                                         // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_025X[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Char_VFXComponent.Char_VFXComponent_C.BRFreeFallStart
	 */
	struct UChar_VFXComponent_C_BRFreeFallStart_Params
	{	};

	/**
	 * Function Char_VFXComponent.Char_VFXComponent_C.BRFallEnd
	 */
	struct UChar_VFXComponent_C_BRFallEnd_Params
	{	};

	/**
	 * Function Char_VFXComponent.Char_VFXComponent_C.BRFallStart
	 */
	struct UChar_VFXComponent_C_BRFallStart_Params
	{	};

	/**
	 * Function Char_VFXComponent.Char_VFXComponent_C.SetupVariables
	 */
	struct UChar_VFXComponent_C_SetupVariables_Params
	{	};

	/**
	 * Function Char_VFXComponent.Char_VFXComponent_C.FallSpeedImpact
	 */
	struct UChar_VFXComponent_C_FallSpeedImpact_Params
	{
	public:
		struct FIGVFXFallEndNotifyInfo                             EventInfo;                                               // 0x0000(0x0048)  (BlueprintVisible, BlueprintReadOnly, Parm)
		class FName                                                EventName;                                               // 0x0048(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Char_VFXComponent.Char_VFXComponent_C.FallSpeed
	 */
	struct UChar_VFXComponent_C_FallSpeed_Params
	{
	public:
		struct FIGVFXFallTierNotifyInfo                            IGVFXFallInfo;                                           // 0x0000(0x0020)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Char_VFXComponent.Char_VFXComponent_C.StopTimer
	 */
	struct UChar_VFXComponent_C_StopTimer_Params
	{	};

	/**
	 * Function Char_VFXComponent.Char_VFXComponent_C.ChargeUpEnd
	 */
	struct UChar_VFXComponent_C_ChargeUpEnd_Params
	{	};

	/**
	 * Function Char_VFXComponent.Char_VFXComponent_C.ChargedUp
	 */
	struct UChar_VFXComponent_C_ChargedUp_Params
	{
	public:
		struct FIGAdditionalParams                                 AdditionalParams;                                        // 0x0000(0x0028)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	};

	/**
	 * Function Char_VFXComponent.Char_VFXComponent_C.IncrementCharge
	 */
	struct UChar_VFXComponent_C_IncrementCharge_Params
	{	};

	/**
	 * Function Char_VFXComponent.Char_VFXComponent_C.ChargeUp
	 */
	struct UChar_VFXComponent_C_ChargeUp_Params
	{
	public:
		struct FIGAdditionalParams                                 AdditionalParams;                                        // 0x0000(0x0028)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	};

	/**
	 * Function Char_VFXComponent.Char_VFXComponent_C.HandleAnimNotifyStateEndVFXBP
	 */
	struct UChar_VFXComponent_C_HandleAnimNotifyStateEndVFXBP_Params
	{
	public:
		class FName                                                EventName;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FIGVFXCharacterAnimNotifyEventInfo                  EventInfo;                                               // 0x0008(0x0048)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	};

	/**
	 * Function Char_VFXComponent.Char_VFXComponent_C.HandleAnimNotifyStateBeginVFXBP
	 */
	struct UChar_VFXComponent_C_HandleAnimNotifyStateBeginVFXBP_Params
	{
	public:
		class FName                                                EventName;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FIGVFXCharacterAnimNotifyEventInfo                  EventInfo;                                               // 0x0008(0x0048)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	};

	/**
	 * Function Char_VFXComponent.Char_VFXComponent_C.HandleAnimNotifyStateTickVFXBP
	 */
	struct UChar_VFXComponent_C_HandleAnimNotifyStateTickVFXBP_Params
	{
	public:
		class FName                                                EventName;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FIGVFXCharacterAnimNotifyEventInfo                  EventInfo;                                               // 0x0008(0x0048)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	};

	/**
	 * Function Char_VFXComponent.Char_VFXComponent_C.ReceiveBeginPlay
	 */
	struct UChar_VFXComponent_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function Char_VFXComponent.Char_VFXComponent_C.AimArcUpdated
	 */
	struct UChar_VFXComponent_C_AimArcUpdated_Params
	{
	public:
		struct FVector                                             StartPoint;                                              // 0x0000(0x000C)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             EndPoint;                                                // 0x000C(0x000C)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             StartTangent;                                            // 0x0018(0x000C)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             EndTangent;                                              // 0x0024(0x000C)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             ImpactNormal;                                            // 0x0030(0x000C)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Char_VFXComponent.Char_VFXComponent_C.AimStarted
	 */
	struct UChar_VFXComponent_C_AimStarted_Params
	{	};

	/**
	 * Function Char_VFXComponent.Char_VFXComponent_C.AimExited
	 */
	struct UChar_VFXComponent_C_AimExited_Params
	{	};

	/**
	 * Function Char_VFXComponent.Char_VFXComponent_C.CannonSequenceStarted
	 */
	struct UChar_VFXComponent_C_CannonSequenceStarted_Params
	{	};

	/**
	 * Function Char_VFXComponent.Char_VFXComponent_C.CannonSequenceEnded
	 */
	struct UChar_VFXComponent_C_CannonSequenceEnded_Params
	{	};

	/**
	 * Function Char_VFXComponent.Char_VFXComponent_C.DangerZoneStatusChanged
	 */
	struct UChar_VFXComponent_C_DangerZoneStatusChanged_Params
	{
	public:
		bool                                                       DangerZoneStatus;                                        // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Char_VFXComponent.Char_VFXComponent_C.KO_VFX
	 */
	struct UChar_VFXComponent_C_KO_VFX_Params
	{
	public:
		bool                                                       KOHit;                                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Char_VFXComponent.Char_VFXComponent_C.HandleClashVFXBP
	 */
	struct UChar_VFXComponent_C_HandleClashVFXBP_Params
	{
	public:
		class AActor*                                              Attacker;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              Victim;                                                  // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Char_VFXComponent.Char_VFXComponent_C.HandleDamageNumberNotification
	 */
	struct UChar_VFXComponent_C_HandleDamageNumberNotification_Params
	{
	public:
		float                                                      DamageValue;                                             // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_9D2F[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UParticleSystem*                                     DamageNumberEffect;                                      // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             NumberSpawnLocation;                                     // 0x0010(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             NumberSpawnScale;                                        // 0x001C(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bAttackerWasInSuper;                                     // 0x0028(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Char_VFXComponent.Char_VFXComponent_C.StopDamageNumbers
	 */
	struct UChar_VFXComponent_C_StopDamageNumbers_Params
	{	};

	/**
	 * Function Char_VFXComponent.Char_VFXComponent_C.HandleAnimNotifyVFXBP
	 */
	struct UChar_VFXComponent_C_HandleAnimNotifyVFXBP_Params
	{
	public:
		class FName                                                EventName;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FIGVFXCharacterAnimNotifyEventInfo                  EventInfo;                                               // 0x0008(0x0048)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	};

	/**
	 * Function Char_VFXComponent.Char_VFXComponent_C.OnBrokenByViciousAttack
	 */
	struct UChar_VFXComponent_C_OnBrokenByViciousAttack_Params
	{	};

	/**
	 * Function Char_VFXComponent.Char_VFXComponent_C.HandleCharacterReset
	 */
	struct UChar_VFXComponent_C_HandleCharacterReset_Params
	{	};

	/**
	 * Function Char_VFXComponent.Char_VFXComponent_C.OnPlayerDestroyed
	 */
	struct UChar_VFXComponent_C_OnPlayerDestroyed_Params
	{
	public:
		class AActor*                                              DestroyedActor;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Char_VFXComponent.Char_VFXComponent_C.OnCharacterEnteredDBNO
	 */
	struct UChar_VFXComponent_C_OnCharacterEnteredDBNO_Params
	{
	public:
		class AIGCharacter*                                        Victim;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Char_VFXComponent.Char_VFXComponent_C.OnCharacterExitedDBNO
	 */
	struct UChar_VFXComponent_C_OnCharacterExitedDBNO_Params
	{
	public:
		class AIGCharacter*                                        Victim;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Char_VFXComponent.Char_VFXComponent_C.HandleStashUnstashVFXBP
	 */
	struct UChar_VFXComponent_C_HandleStashUnstashVFXBP_Params
	{
	public:
		bool                                                       IsStashing;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       IsLargeItem;                                             // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Char_VFXComponent.Char_VFXComponent_C.PreTeleport
	 */
	struct UChar_VFXComponent_C_PreTeleport_Params
	{	};

	/**
	 * Function Char_VFXComponent.Char_VFXComponent_C.PostTeleport
	 */
	struct UChar_VFXComponent_C_PostTeleport_Params
	{
	public:
		struct FVector                                             TeleportDestination;                                     // 0x0000(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Char_VFXComponent.Char_VFXComponent_C.HandleUnpocketVFXBP
	 */
	struct UChar_VFXComponent_C_HandleUnpocketVFXBP_Params
	{
	public:
		class AActor*                                              Attacker;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              Victim;                                                  // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       DroppedAnItem;                                           // 0x0010(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Char_VFXComponent.Char_VFXComponent_C.ExecuteUbergraph_Char_VFXComponent
	 */
	struct UChar_VFXComponent_C_ExecuteUbergraph_Char_VFXComponent_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
