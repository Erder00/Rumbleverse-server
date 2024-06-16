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
	 * Function Char_SFXComponent.Char_SFXComponent_C.Stop Waterfall Collide SFX
	 */
	struct UChar_SFXComponent_C_StopWaterfallCollideSFX_Params
	{	};

	/**
	 * Function Char_SFXComponent.Char_SFXComponent_C.Play Waterfall Collide SFX
	 */
	struct UChar_SFXComponent_C_PlayWaterfallCollideSFX_Params
	{	};

	/**
	 * Function Char_SFXComponent.Char_SFXComponent_C.StartViciousChargedFall
	 */
	struct UChar_SFXComponent_C_StartViciousChargedFall_Params
	{	};

	/**
	 * Function Char_SFXComponent.Char_SFXComponent_C.Stop Poison Mist SFX
	 */
	struct UChar_SFXComponent_C_StopPoisonMistSFX_Params
	{	};

	/**
	 * Function Char_SFXComponent.Char_SFXComponent_C.Play Poison Mist SFX
	 */
	struct UChar_SFXComponent_C_PlayPoisonMistSFX_Params
	{	};

	/**
	 * Function Char_SFXComponent.Char_SFXComponent_C.Play Pole Swing Whoosh on Rotation
	 */
	struct UChar_SFXComponent_C_PlayPoleSwingWhooshonRotation_Params
	{	};

	/**
	 * Function Char_SFXComponent.Char_SFXComponent_C.End PoleSwing SFX
	 */
	struct UChar_SFXComponent_C_EndPoleSwingSFX_Params
	{	};

	/**
	 * Function Char_SFXComponent.Char_SFXComponent_C.Start PoleSwing SFX
	 */
	struct UChar_SFXComponent_C_StartPoleSwingSFX_Params
	{	};

	/**
	 * Function Char_SFXComponent.Char_SFXComponent_C.Kill Spawned SFX
	 */
	struct UChar_SFXComponent_C_KillSpawnedSFX_Params
	{
	public:
		class UAudioComponent*                                     AudioComponent;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      FadeOutDuration;                                         // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		EAudioFaderCurve                                           FadeCurve;                                               // 0x000C(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Char_SFXComponent.Char_SFXComponent_C.Spawn Attached SFX
	 */
	struct UChar_SFXComponent_C_SpawnAttachedSFX_Params
	{
	public:
		class UAudioComponent*                                     StopAudioComponent;                                      // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      FadeOutDuration;                                         // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_TSBU[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class USoundBase*                                          NewSound;                                                // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class USceneComponent*                                     AttachToComponent;                                       // 0x0018(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FName                                                AttachPointName;                                         // 0x0020(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UAudioComponent*                                     SpawnedAudioComponent;                                   // 0x0028(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Char_SFXComponent.Char_SFXComponent_C.Play Fountain EMO OS
	 */
	struct UChar_SFXComponent_C_PlayFountainEMOOS_Params
	{	};

	/**
	 * Function Char_SFXComponent.Char_SFXComponent_C.Stop Fountain Emo
	 */
	struct UChar_SFXComponent_C_StopFountainEmo_Params
	{	};

	/**
	 * Function Char_SFXComponent.Char_SFXComponent_C.Play Fountain Emo
	 */
	struct UChar_SFXComponent_C_PlayFountainEmo_Params
	{	};

	/**
	 * Function Char_SFXComponent.Char_SFXComponent_C.Stop Keen Dance Emote
	 */
	struct UChar_SFXComponent_C_StopKeenDanceEmote_Params
	{	};

	/**
	 * Function Char_SFXComponent.Char_SFXComponent_C.Play Keen Dance Emote
	 */
	struct UChar_SFXComponent_C_PlayKeenDanceEmote_Params
	{	};

	/**
	 * Function Char_SFXComponent.Char_SFXComponent_C.Stop Edge Hold SFX
	 */
	struct UChar_SFXComponent_C_StopEdgeHoldSFX_Params
	{	};

	/**
	 * Function Char_SFXComponent.Char_SFXComponent_C.Play Edge Hold SFX
	 */
	struct UChar_SFXComponent_C_PlayEdgeHoldSFX_Params
	{	};

	/**
	 * Function Char_SFXComponent.Char_SFXComponent_C.Play Wall Slide Attach
	 */
	struct UChar_SFXComponent_C_PlayWallSlideAttach_Params
	{
	public:
		struct FIGAdditionalParams                                 AdditionalParams;                                        // 0x0000(0x0028)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	};

	/**
	 * Function Char_SFXComponent.Char_SFXComponent_C.Play KeyBat Flip Loop
	 */
	struct UChar_SFXComponent_C_PlayKeyBatFlipLoop_Params
	{	};

	/**
	 * Function Char_SFXComponent.Char_SFXComponent_C.Stop KeyBat Flip Loop
	 */
	struct UChar_SFXComponent_C_StopKeyBatFlipLoop_Params
	{	};

	/**
	 * Function Char_SFXComponent.Char_SFXComponent_C.Stop Starfish_Whoosh_LP
	 */
	struct UChar_SFXComponent_C_StopStarfish_Whoosh_LP_Params
	{	};

	/**
	 * Function Char_SFXComponent.Char_SFXComponent_C.Play Starfish_Whoosh_LP
	 */
	struct UChar_SFXComponent_C_PlayStarfish_Whoosh_LP_Params
	{	};

	/**
	 * Function Char_SFXComponent.Char_SFXComponent_C.Stop BullRush_LP
	 */
	struct UChar_SFXComponent_C_StopBullRush_LP_Params
	{	};

	/**
	 * Function Char_SFXComponent.Char_SFXComponent_C.Play BullRush_LP
	 */
	struct UChar_SFXComponent_C_PlayBullRush_LP_Params
	{	};

	/**
	 * Function Char_SFXComponent.Char_SFXComponent_C.Stop Keybat_Fly_LP
	 */
	struct UChar_SFXComponent_C_StopKeybat_Fly_LP_Params
	{	};

	/**
	 * Function Char_SFXComponent.Char_SFXComponent_C.Play Keybat_Fly_LP
	 */
	struct UChar_SFXComponent_C_PlayKeybat_Fly_LP_Params
	{	};

	/**
	 * Function Char_SFXComponent.Char_SFXComponent_C.Stop BroomSweep_LP
	 */
	struct UChar_SFXComponent_C_StopBroomSweep_LP_Params
	{	};

	/**
	 * Function Char_SFXComponent.Char_SFXComponent_C.Play BroomSweep_LP
	 */
	struct UChar_SFXComponent_C_PlayBroomSweep_LP_Params
	{	};

	/**
	 * Function Char_SFXComponent.Char_SFXComponent_C.Play ReviveFailed SFX
	 */
	struct UChar_SFXComponent_C_PlayReviveFailedSFX_Params
	{	};

	/**
	 * Function Char_SFXComponent.Char_SFXComponent_C.Play ReviveCharge SFX
	 */
	struct UChar_SFXComponent_C_PlayReviveChargeSFX_Params
	{	};

	/**
	 * Function Char_SFXComponent.Char_SFXComponent_C.Debug Print to Screen
	 */
	struct UChar_SFXComponent_C_DebugPrinttoScreen_Params
	{
	public:
		class FString                                              inString;                                                // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		struct FLinearColor                                        TextColor;                                               // 0x0010(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Char_SFXComponent.Char_SFXComponent_C.Fade Out By Fall Trajectory
	 */
	struct UChar_SFXComponent_C_FadeOutByFallTrajectory_Params
	{
	public:
		class UAudioComponent*                                     in_AudioComponent;                                       // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      DownwardDrawDistance;                                    // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      ClampMin;                                                // 0x000C(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      ClampMax;                                                // 0x0010(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		EDrawDebugTrace                                            DebugDrawType;                                           // 0x0014(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_I0SC[0x3];                                   // 0x0015(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Char_SFXComponent.Char_SFXComponent_C.Stop SuperStar Falling SFX
	 */
	struct UChar_SFXComponent_C_StopSuperStarFallingSFX_Params
	{	};

	/**
	 * Function Char_SFXComponent.Char_SFXComponent_C.Play SuperStar Falling SFX
	 */
	struct UChar_SFXComponent_C_PlaySuperStarFallingSFX_Params
	{	};

	/**
	 * Function Char_SFXComponent.Char_SFXComponent_C.Trace Fall Trajectory
	 */
	struct UChar_SFXComponent_C_TraceFallTrajectory_Params
	{
	public:
		float                                                      DownwardDistance;                                        // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		EDrawDebugTrace                                            DebugDraw;                                               // 0x0004(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_FHZB[0x3];                                   // 0x0005(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FHitResult                                          OutHit;                                                  // 0x0008(0x0088)  (Parm, OutParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	};

	/**
	 * Function Char_SFXComponent.Char_SFXComponent_C.Spawn Attached Sound By Role
	 */
	struct UChar_SFXComponent_C_SpawnAttachedSoundByRole_Params
	{
	public:
		class USoundBase*                                          LocalSound;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class USoundAttenuation*                                   LocalAttenuation;                                        // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class USoundBase*                                          FriendlySound;                                           // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class USoundAttenuation*                                   FriendlyAttenuation;                                     // 0x0018(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class USoundBase*                                          EnemySound;                                              // 0x0020(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class USoundAttenuation*                                   EnemyAttenuation;                                        // 0x0028(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FName                                                AttachPoint;                                             // 0x0030(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UAudioComponent*                                     SpawnedSound;                                            // 0x0038(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Char_SFXComponent.Char_SFXComponent_C.Play Grab Activation SFX
	 */
	struct UChar_SFXComponent_C_PlayGrabActivationSFX_Params
	{	};

	/**
	 * Function Char_SFXComponent.Char_SFXComponent_C.Validate Footstep SFX
	 */
	struct UChar_SFXComponent_C_ValidateFootstepSFX_Params
	{
	public:
		class USoundBase*                                          inFootstepSound;                                         // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       IsLocalOrFriendly;                                       // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_2Z2X[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class USoundBase*                                          outFootstepSound;                                        // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Char_SFXComponent.Char_SFXComponent_C.OnMovementModeChanged_cb
	 */
	struct UChar_SFXComponent_C_OnMovementModeChanged_cb_Params
	{
	public:
		class ACharacter*                                          Character;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		EMovementMode                                              PrevMovementMode;                                        // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              PreviousCustomMode;                                      // 0x0009(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Char_SFXComponent.Char_SFXComponent_C.Movement Mode Set
	 */
	struct UChar_SFXComponent_C_MovementModeSet_Params
	{
	public:
		class ACharacter*                                          Character;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		EMovementMode                                              PrevMovementMode;                                        // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              PreviousCustomMode;                                      // 0x0009(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Char_SFXComponent.Char_SFXComponent_C.Set Cliffhanger SFX
	 */
	struct UChar_SFXComponent_C_SetCliffhangerSFX_Params
	{
	public:
		class ACharacter*                                          Character;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              MovementMode;                                            // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_H4SN[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Char_SFXComponent.Char_SFXComponent_C.Stop Teampose4 Wind Loop
	 */
	struct UChar_SFXComponent_C_StopTeampose4WindLoop_Params
	{	};

	/**
	 * Function Char_SFXComponent.Char_SFXComponent_C.Play Teampose4 Wind Loop
	 */
	struct UChar_SFXComponent_C_PlayTeampose4WindLoop_Params
	{	};

	/**
	 * Function Char_SFXComponent.Char_SFXComponent_C.Play Teampose0 Sparkle
	 */
	struct UChar_SFXComponent_C_PlayTeampose0Sparkle_Params
	{	};

	/**
	 * Function Char_SFXComponent.Char_SFXComponent_C.Stop Teampose0 Sparkle Loop
	 */
	struct UChar_SFXComponent_C_StopTeampose0SparkleLoop_Params
	{	};

	/**
	 * Function Char_SFXComponent.Char_SFXComponent_C.EmoteButterflyEnd
	 */
	struct UChar_SFXComponent_C_EmoteButterflyEnd_Params
	{	};

	/**
	 * Function Char_SFXComponent.Char_SFXComponent_C.EmoteButterflyLanded
	 */
	struct UChar_SFXComponent_C_EmoteButterflyLanded_Params
	{	};

	/**
	 * Function Char_SFXComponent.Char_SFXComponent_C.Stop Firework Emote SFX Loop
	 */
	struct UChar_SFXComponent_C_StopFireworkEmoteSFXLoop_Params
	{	};

	/**
	 * Function Char_SFXComponent.Char_SFXComponent_C.Play Firework Emote SFX Loop
	 */
	struct UChar_SFXComponent_C_PlayFireworkEmoteSFXLoop_Params
	{	};

	/**
	 * Function Char_SFXComponent.Char_SFXComponent_C.Play Special Move Activation SFX
	 */
	struct UChar_SFXComponent_C_PlaySpecialMoveActivationSFX_Params
	{	};

	/**
	 * Function Char_SFXComponent.Char_SFXComponent_C.Play ReviveTaker SFX
	 */
	struct UChar_SFXComponent_C_PlayReviveTakerSFX_Params
	{	};

	/**
	 * Function Char_SFXComponent.Char_SFXComponent_C.Play ReviveGiver SFX
	 */
	struct UChar_SFXComponent_C_PlayReviveGiverSFX_Params
	{	};

	/**
	 * Function Char_SFXComponent.Char_SFXComponent_C.Stop Ball Bounce SFX
	 */
	struct UChar_SFXComponent_C_StopBallBounceSFX_Params
	{	};

	/**
	 * Function Char_SFXComponent.Char_SFXComponent_C.Play Ball Bounce SFX
	 */
	struct UChar_SFXComponent_C_PlayBallBounceSFX_Params
	{	};

	/**
	 * Function Char_SFXComponent.Char_SFXComponent_C.Play Stamina SFX
	 */
	struct UChar_SFXComponent_C_PlayStaminaSFX_Params
	{
	public:
		class USceneComponent*                                     AttachToComponent;                                       // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Char_SFXComponent.Char_SFXComponent_C.Set Landing Sound Volume
	 */
	struct UChar_SFXComponent_C_SetLandingSoundVolume_Params
	{
	public:
		bool                                                       UseDefaultJumpLandVolume;                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_RKAL[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Char_SFXComponent.Char_SFXComponent_C.Adjust Pitch and Volume by BodyType
	 */
	struct UChar_SFXComponent_C_AdjustPitchandVolumebyBodyType_Params
	{
	public:
		EIGBodyType                                                BodyType;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_XCJ6[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Char_SFXComponent.Char_SFXComponent_C.Stop Cannon Free Fall Wind SFX
	 */
	struct UChar_SFXComponent_C_StopCannonFreeFallWindSFX_Params
	{	};

	/**
	 * Function Char_SFXComponent.Char_SFXComponent_C.Play Cannon Free Fall Wind SFX
	 */
	struct UChar_SFXComponent_C_PlayCannonFreeFallWindSFX_Params
	{	};

	/**
	 * Function Char_SFXComponent.Char_SFXComponent_C.Stop Cannon Launch Wind SFX
	 */
	struct UChar_SFXComponent_C_StopCannonLaunchWindSFX_Params
	{	};

	/**
	 * Function Char_SFXComponent.Char_SFXComponent_C.Play Cannon Launch Wind SFX
	 */
	struct UChar_SFXComponent_C_PlayCannonLaunchWindSFX_Params
	{	};

	/**
	 * Function Char_SFXComponent.Char_SFXComponent_C.Stop Long Jump Loop
	 */
	struct UChar_SFXComponent_C_StopLongJumpLoop_Params
	{	};

	/**
	 * Function Char_SFXComponent.Char_SFXComponent_C.Play Long Jump Loop
	 */
	struct UChar_SFXComponent_C_PlayLongJumpLoop_Params
	{	};

	/**
	 * Function Char_SFXComponent.Char_SFXComponent_C.Play Falling Meteor Impact SFX
	 */
	struct UChar_SFXComponent_C_PlayFallingMeteorImpactSFX_Params
	{	};

	/**
	 * Function Char_SFXComponent.Char_SFXComponent_C.Play Special Falling Meteor Impact SFX
	 */
	struct UChar_SFXComponent_C_PlaySpecialFallingMeteorImpactSFX_Params
	{	};

	/**
	 * Function Char_SFXComponent.Char_SFXComponent_C.Play Ground Impact SFX
	 */
	struct UChar_SFXComponent_C_PlayGroundImpactSFX_Params
	{	};

	/**
	 * Function Char_SFXComponent.Char_SFXComponent_C.Play Foley SFX
	 */
	struct UChar_SFXComponent_C_PlayFoleySFX_Params
	{
	public:
		class USoundBase*                                          SoundCue;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Char_SFXComponent.Char_SFXComponent_C.Play Local And Remote Surface SFX
	 */
	struct UChar_SFXComponent_C_PlayLocalAndRemoteSurfaceSFX_Params
	{	};

	/**
	 * Function Char_SFXComponent.Char_SFXComponent_C.Get Player Movement Speed and Footstep Volume
	 */
	struct UChar_SFXComponent_C_GetPlayerMovementSpeedandFootstepVolume_Params
	{
	public:
		class FName                                                AdditionalParamsNameParam;                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Char_SFXComponent.Char_SFXComponent_C.Stop Rocket Jump Charge
	 */
	struct UChar_SFXComponent_C_StopRocketJumpCharge_Params
	{	};

	/**
	 * Function Char_SFXComponent.Char_SFXComponent_C.Play RocketJump Charge SFX
	 */
	struct UChar_SFXComponent_C_PlayRocketJumpChargeSFX_Params
	{	};

	/**
	 * Function Char_SFXComponent.Char_SFXComponent_C.Perk Deactivate
	 */
	struct UChar_SFXComponent_C_PerkDeactivate_Params
	{
	public:
		class UObject*                                             PerkAsset;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Char_SFXComponent.Char_SFXComponent_C.Perk Removed
	 */
	struct UChar_SFXComponent_C_PerkRemoved_Params
	{
	public:
		class UObject*                                             PerkAsset;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Char_SFXComponent.Char_SFXComponent_C.Perk Gained
	 */
	struct UChar_SFXComponent_C_PerkGained_Params
	{
	public:
		class UObject*                                             PerkAsset;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Char_SFXComponent.Char_SFXComponent_C.Perk Activated
	 */
	struct UChar_SFXComponent_C_PerkActivated_Params
	{
	public:
		class UObject*                                             PerkAsset;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Char_SFXComponent.Char_SFXComponent_C.Stop PowerUp Block Loop SFX
	 */
	struct UChar_SFXComponent_C_StopPowerUpBlockLoopSFX_Params
	{	};

	/**
	 * Function Char_SFXComponent.Char_SFXComponent_C.Play PowerUp Block Loop SFX
	 */
	struct UChar_SFXComponent_C_PlayPowerUpBlockLoopSFX_Params
	{	};

	/**
	 * Function Char_SFXComponent.Char_SFXComponent_C.Play Consumable Magazine SFX
	 */
	struct UChar_SFXComponent_C_PlayConsumableMagazineSFX_Params
	{
	public:
		struct FGameplayTag                                        DynamicParamsTag;                                        // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Char_SFXComponent.Char_SFXComponent_C.Play Consumable Powder SFX
	 */
	struct UChar_SFXComponent_C_PlayConsumablePowderSFX_Params
	{
	public:
		struct FGameplayTag                                        DynamicParamsTag;                                        // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Char_SFXComponent.Char_SFXComponent_C.Play Consumable Drink SFX
	 */
	struct UChar_SFXComponent_C_PlayConsumableDrinkSFX_Params
	{
	public:
		struct FGameplayTag                                        DynamicParamsTag;                                        // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Char_SFXComponent.Char_SFXComponent_C.Stop Consumable SFX
	 */
	struct UChar_SFXComponent_C_StopConsumableSFX_Params
	{	};

	/**
	 * Function Char_SFXComponent.Char_SFXComponent_C.Play Consumable Food SFX
	 */
	struct UChar_SFXComponent_C_PlayConsumableFoodSFX_Params
	{
	public:
		struct FGameplayTag                                        DynamicParamsTag;                                        // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Char_SFXComponent.Char_SFXComponent_C.Stop PowerUp Loop SFX
	 */
	struct UChar_SFXComponent_C_StopPowerUpLoopSFX_Params
	{	};

	/**
	 * Function Char_SFXComponent.Char_SFXComponent_C.Update Traversal Free Fall SFX Volume
	 */
	struct UChar_SFXComponent_C_UpdateTraversalFreeFallSFXVolume_Params
	{	};

	/**
	 * Function Char_SFXComponent.Char_SFXComponent_C.Stop Traversal Free Fall SFX Volume Update
	 */
	struct UChar_SFXComponent_C_StopTraversalFreeFallSFXVolumeUpdate_Params
	{	};

	/**
	 * Function Char_SFXComponent.Char_SFXComponent_C.Start Traversal Free Fall SFX Volume Update
	 */
	struct UChar_SFXComponent_C_StartTraversalFreeFallSFXVolumeUpdate_Params
	{
	public:
		float                                                      UpdateInterval;                                          // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Char_SFXComponent.Char_SFXComponent_C.Update Player Falling Duration
	 */
	struct UChar_SFXComponent_C_UpdatePlayerFallingDuration_Params
	{	};

	/**
	 * Function Char_SFXComponent.Char_SFXComponent_C.Stop Player Falling Update
	 */
	struct UChar_SFXComponent_C_StopPlayerFallingUpdate_Params
	{	};

	/**
	 * Function Char_SFXComponent.Char_SFXComponent_C.Start Player Falling Update
	 */
	struct UChar_SFXComponent_C_StartPlayerFallingUpdate_Params
	{
	public:
		float                                                      UpdateInterval;                                          // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Char_SFXComponent.Char_SFXComponent_C.Stop Traversal Free Fall SFX
	 */
	struct UChar_SFXComponent_C_StopTraversalFreeFallSFX_Params
	{	};

	/**
	 * Function Char_SFXComponent.Char_SFXComponent_C.Play Traversal Free Fall SFX
	 */
	struct UChar_SFXComponent_C_PlayTraversalFreeFallSFX_Params
	{	};

	/**
	 * Function Char_SFXComponent.Char_SFXComponent_C.Stop Free Fall VO
	 */
	struct UChar_SFXComponent_C_StopFreeFallVO_Params
	{	};

	/**
	 * Function Char_SFXComponent.Char_SFXComponent_C.Play Free Fall VO
	 */
	struct UChar_SFXComponent_C_PlayFreeFallVO_Params
	{
	public:
		class FName                                                VOGruntName;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Char_SFXComponent.Char_SFXComponent_C.Stop Free Fall SFX
	 */
	struct UChar_SFXComponent_C_StopFreeFallSFX_Params
	{
	public:
		bool                                                       HardStop;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_GJ16[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Char_SFXComponent.Char_SFXComponent_C.Play Free Fall SFX
	 */
	struct UChar_SFXComponent_C_PlayFreeFallSFX_Params
	{	};

	/**
	 * Function Char_SFXComponent.Char_SFXComponent_C.Stop 1stLvl Free Fall SFX
	 */
	struct UChar_SFXComponent_C_Stop1stLvlFreeFallSFX_Params
	{	};

	/**
	 * Function Char_SFXComponent.Char_SFXComponent_C.Play 1stLvl Free Fall SFX
	 */
	struct UChar_SFXComponent_C_Play1stLvlFreeFallSFX_Params
	{	};

	/**
	 * Function Char_SFXComponent.Char_SFXComponent_C.Play 3rdLvl Falling Meteor SFX
	 */
	struct UChar_SFXComponent_C_Play3rdLvlFallingMeteorSFX_Params
	{	};

	/**
	 * Function Char_SFXComponent.Char_SFXComponent_C.Play 2ndLvl Falling Meteor SFX
	 */
	struct UChar_SFXComponent_C_Play2ndLvlFallingMeteorSFX_Params
	{	};

	/**
	 * Function Char_SFXComponent.Char_SFXComponent_C.Play 1stLvl Falling Meteor SFX
	 */
	struct UChar_SFXComponent_C_Play1stLvlFallingMeteorSFX_Params
	{	};

	/**
	 * Function Char_SFXComponent.Char_SFXComponent_C.Play LowLvl Falling Meteor SFX
	 */
	struct UChar_SFXComponent_C_PlayLowLvlFallingMeteorSFX_Params
	{	};

	/**
	 * Function Char_SFXComponent.Char_SFXComponent_C.Stop Charge Up Start SFX
	 */
	struct UChar_SFXComponent_C_StopChargeUpStartSFX_Params
	{	};

	/**
	 * Function Char_SFXComponent.Char_SFXComponent_C.Play Charge Up Start SFX
	 */
	struct UChar_SFXComponent_C_PlayChargeUpStartSFX_Params
	{	};

	/**
	 * Function Char_SFXComponent.Char_SFXComponent_C.Stop Charge Up Hold SFX
	 */
	struct UChar_SFXComponent_C_StopChargeUpHoldSFX_Params
	{	};

	/**
	 * Function Char_SFXComponent.Char_SFXComponent_C.Play Charge Up Hold SFX
	 */
	struct UChar_SFXComponent_C_PlayChargeUpHoldSFX_Params
	{	};

	/**
	 * Function Char_SFXComponent.Char_SFXComponent_C.Stop Falling Meteor SFX
	 */
	struct UChar_SFXComponent_C_StopFallingMeteorSFX_Params
	{	};

	/**
	 * Function Char_SFXComponent.Char_SFXComponent_C.HandleAnimNotifyAudioBP
	 */
	struct UChar_SFXComponent_C_HandleAnimNotifyAudioBP_Params
	{
	public:
		class FName                                                EventName;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FIGCharacterAudioAnimNotifyEventInfo                EventInfo;                                               // 0x0008(0x0048)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	};

	/**
	 * Function Char_SFXComponent.Char_SFXComponent_C.HandleAnimNotifyStateBeginAudioBP
	 */
	struct UChar_SFXComponent_C_HandleAnimNotifyStateBeginAudioBP_Params
	{
	public:
		class FName                                                EventName;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FIGCharacterAudioAnimNotifyEventInfo                EventInfo;                                               // 0x0008(0x0048)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	};

	/**
	 * Function Char_SFXComponent.Char_SFXComponent_C.HandleAnimNotifyStateEndAudioBP
	 */
	struct UChar_SFXComponent_C_HandleAnimNotifyStateEndAudioBP_Params
	{
	public:
		class FName                                                EventName;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FIGCharacterAudioAnimNotifyEventInfo                EventInfo;                                               // 0x0008(0x0048)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	};

	/**
	 * Function Char_SFXComponent.Char_SFXComponent_C.Event MinFallingDurationExceeded
	 */
	struct UChar_SFXComponent_C_EventMinFallingDurationExceeded_Params
	{	};

	/**
	 * Function Char_SFXComponent.Char_SFXComponent_C.ReceiveBeginPlay
	 */
	struct UChar_SFXComponent_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function Char_SFXComponent.Char_SFXComponent_C.OnCannonFired
	 */
	struct UChar_SFXComponent_C_OnCannonFired_Params
	{	};

	/**
	 * Function Char_SFXComponent.Char_SFXComponent_C.On BR Free Fall End
	 */
	struct UChar_SFXComponent_C_OnBRFreeFallEnd_Params
	{	};

	/**
	 * Function Char_SFXComponent.Char_SFXComponent_C.HandleClashAudioBP
	 */
	struct UChar_SFXComponent_C_HandleClashAudioBP_Params
	{
	public:
		class AActor*                                              Attacker;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              Victim;                                                  // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Char_SFXComponent.Char_SFXComponent_C.HandleCannonLaunchEnd
	 */
	struct UChar_SFXComponent_C_HandleCannonLaunchEnd_Params
	{	};

	/**
	 * Function Char_SFXComponent.Char_SFXComponent_C.HandleCharacterReset
	 */
	struct UChar_SFXComponent_C_HandleCharacterReset_Params
	{	};

	/**
	 * Function Char_SFXComponent.Char_SFXComponent_C.OnEnteredSuperStarModeSFX
	 */
	struct UChar_SFXComponent_C_OnEnteredSuperStarModeSFX_Params
	{	};

	/**
	 * Function Char_SFXComponent.Char_SFXComponent_C.OnExitedSuperStarModeSFX
	 */
	struct UChar_SFXComponent_C_OnExitedSuperStarModeSFX_Params
	{	};

	/**
	 * Function Char_SFXComponent.Char_SFXComponent_C.CustomTick
	 */
	struct UChar_SFXComponent_C_CustomTick_Params
	{	};

	/**
	 * Function Char_SFXComponent.Char_SFXComponent_C.Event ResetFreeFallSFX
	 */
	struct UChar_SFXComponent_C_EventResetFreeFallSFX_Params
	{	};

	/**
	 * Function Char_SFXComponent.Char_SFXComponent_C.OnBrokenByViciousAttack
	 */
	struct UChar_SFXComponent_C_OnBrokenByViciousAttack_Params
	{	};

	/**
	 * Function Char_SFXComponent.Char_SFXComponent_C.HandleStashUnstashAudioBP
	 */
	struct UChar_SFXComponent_C_HandleStashUnstashAudioBP_Params
	{
	public:
		bool                                                       IsStashing;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       IsLargeItem;                                             // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Char_SFXComponent.Char_SFXComponent_C.PreTeleport
	 */
	struct UChar_SFXComponent_C_PreTeleport_Params
	{	};

	/**
	 * Function Char_SFXComponent.Char_SFXComponent_C.PostTeleport
	 */
	struct UChar_SFXComponent_C_PostTeleport_Params
	{
	public:
		struct FVector                                             TeleportDestination;                                     // 0x0000(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Char_SFXComponent.Char_SFXComponent_C.HandleUnpocketSFXBP
	 */
	struct UChar_SFXComponent_C_HandleUnpocketSFXBP_Params
	{
	public:
		class AActor*                                              Attacker;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              Victim;                                                  // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       DroppedAnItem;                                           // 0x0010(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Char_SFXComponent.Char_SFXComponent_C.ExecuteUbergraph_Char_SFXComponent
	 */
	struct UChar_SFXComponent_C_ExecuteUbergraph_Char_SFXComponent_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Char_SFXComponent.Char_SFXComponent_C.OnResetFreeFallSFX__DelegateSignature
	 */
	struct UChar_SFXComponent_C_OnResetFreeFallSFX__DelegateSignature_Params
	{	};

	/**
	 * Function Char_SFXComponent.Char_SFXComponent_C.OnMinFallingDurationExceeded__DelegateSignature
	 */
	struct UChar_SFXComponent_C_OnMinFallingDurationExceeded__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
