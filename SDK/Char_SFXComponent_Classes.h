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
	 * BlueprintGeneratedClass Char_SFXComponent.Char_SFXComponent_C
	 * Size -> 0x05E1 (FullSize[0x06A9] - InheritedSize[0x00C8])
	 */
	class UChar_SFXComponent_C : public UIGCharacterSFXComponent
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x00C8(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UAudioComponent*                                     LowLvlWindLoopSFXReference;                              // 0x00D0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UAudioComponent*                                     LowLvlWhistleLoopSFXReference;                           // 0x00D8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UAudioComponent*                                     LowLvlDistCrackleLoopSFXReference;                       // 0x00E0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UAudioComponent*                                     LowLvlPhaserSizzleLoopSFXReference;                      // 0x00E8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UAudioComponent*                                     ChargeUpRocketHoldSFX;                                   // 0x00F0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UAudioComponent*                                     ChargeUpStartSFXReference;                               // 0x00F8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UAudioComponent*                                     _1stLvlLoopSFXReference;                                 // 0x0100(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UAudioComponent*                                     _2ndLvlLoopSFXReference;                                 // 0x0108(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UAudioComponent*                                     _3rdLvlLoopSFXReference;                                 // 0x0110(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class USkeletalMeshComponent*                              PlayerCharMesh;                                          // 0x0118(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ABP_SheikCharacter_C*                                PlayerCharReference;                                     // 0x0120(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UAudioComponent*                                     TraversalFreeFallLoopSFXReference;                       // 0x0128(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UAudioComponent*                                     FreeFallVOReference;                                     // 0x0130(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UAudioComponent*                                     BRCannonLaunchLoopSFXReference;                          // 0x0138(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UAudioComponent*                                     FreeFall1stLvlLoopSFXReference;                          // 0x0140(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UAudioComponent*                                     BRCannonFreefallLoopSFX;                                 // 0x0148(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class USheikMatchmakingCallbacks*                          MatchmakingCallbacks;                                    // 0x0150(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class USoundBase*                                          FreeFallVOGruntSoundcue;                                 // 0x0158(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FTimerHandle                                        TraversalFreeFallSFXVolumeUpdate;                        // 0x0160(0x0008) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		struct FTimerHandle                                        PlayerFallingDurationUpdate;                             // 0x0168(0x0008) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		float                                                      FreeFallSFXVolume;                                       // 0x0170(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      PlayerFallingDuration;                                   // 0x0174(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<class UAudioComponent*>                             PowerUpLoopSFX;                                          // 0x0178(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference
		class UAudioComponent*                                     ConsumableFoodSFXReference;                              // 0x0188(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UAudioComponent*                                     ConsumableDrink_Lrg_SFXReference;                        // 0x0190(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UAudioComponent*                                     ConsumableDrink_Sm_SFXReference;                         // 0x0198(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UAudioComponent*                                     ConsumablePowder_SFXReference;                           // 0x01A0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UAudioComponent*                                     ConsumableMagazine_SFXReference;                         // 0x01A8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UAudioComponent*                                     PowerUpBlockLoopSFX;                                     // 0x01B0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UAudioComponent*                                     TemperSFXReference;                                      // 0x01B8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UAudioComponent*                                     HealthLoopSFXReference;                                  // 0x01C0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UAudioComponent*                                     TheBurnSFXReference;                                     // 0x01C8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UAudioComponent*                                     PoisonedSFXReference;                                    // 0x01D0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UAudioComponent*                                     HotHandsLoopSFXReference;                                // 0x01D8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      PlayerMovementSpeed;                                     // 0x01E0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      FootstepVolume;                                          // 0x01E4(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      JumpandLandVolume;                                       // 0x01E8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      FoleyVolume;                                             // 0x01EC(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FIGCharacterAudioAnimNotifyEventInfo                OneShotEventInfo;                                        // 0x01F0(0x0048) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor
		float                                                      FootstepPitch;                                           // 0x0238(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    MovementType;                                            // 0x023C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    FoleySoundcue;                                           // 0x0240(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       IsIdle;                                                  // 0x0244(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_HISQ[0x3];                                   // 0x0245(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    ImpactSize;                                              // 0x0248(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    GroundslamImpactLevel;                                   // 0x024C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UAudioComponent*                                     LongJumpSFXReference;                                    // 0x0250(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ASheikPlayerController_BP_C*                         PlayerControllerRef;                                     // 0x0258(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TMap<EIGBodyType, float>                                   fsVolumePerChar;                                         // 0x0260(0x0050) Edit, BlueprintVisible, DisableEditOnInstance
		TMap<EIGBodyType, float>                                   fsPitchPerChar;                                          // 0x02B0(0x0050) Edit, BlueprintVisible, DisableEditOnInstance
		class UAudioComponent*                                     StaminaLoopSFX;                                          // 0x0300(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UAudioComponent*                                     BallBounceSFXReference;                                  // 0x0308(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UAudioComponent*                                     SuperstarLoopAudio;                                      // 0x0310(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class USoundSubmix*                                        SuperStarSubmixFX1;                                      // 0x0318(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class USoundSubmix*                                        SuperStarSubmixFX2;                                      // 0x0320(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UIGCharacterVFXComponent*                            CharVFXCompReference;                                    // 0x0328(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<class USoundBase*>                                  ElbowDrop_ExlposionSFX;                                  // 0x0330(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		class UAudioComponent*                                     TeamPoseFirework;                                        // 0x0340(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       IsEmoting;                                               // 0x0348(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_YOFI[0x7];                                   // 0x0349(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UAudioComponent*                                     MeditativeLoopSFXReference;                              // 0x0350(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class USoundEffectSubmixPreset*                            SuperStarFXPreset1;                                      // 0x0358(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class USoundEffectSubmixPreset*                            SuperStarFXPreset2;                                      // 0x0360(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    SubmixChainIndex;                                        // 0x0368(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_R8IL[0x4];                                   // 0x036C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UAudioComponent*                                     TeamPose0_Sparkle;                                       // 0x0370(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UAudioComponent*                                     TeamPose4_Wind;                                          // 0x0378(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UAudioComponent*                                     ButterflyLoop;                                           // 0x0380(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bHasCliffHangerPerk;                                     // 0x0388(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_40ZA[0x7];                                   // 0x0389(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UAudioComponent*                                     CliffHangerLoop;                                         // 0x0390(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class USoundBase*                                          Enemy_Step_Default;                                      // 0x0398(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class USoundBase*                                          Enemy_Jump_Default;                                      // 0x03A0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class USoundBase*                                          Enemy_Land_Default;                                      // 0x03A8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class USoundBase*                                          Friendly_Step_Default;                                   // 0x03B0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class USoundBase*                                          Friendly_Jump_Default;                                   // 0x03B8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class USoundBase*                                          Friendly_Land_Default;                                   // 0x03C0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class USheikEndOfMatchCallbacks*                           EOMCallbacks;                                            // 0x03C8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      MinFallingDuration;                                      // 0x03D0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_G3OV[0x4];                                   // 0x03D4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TMap<class FName, class USoundBase*>                       Freefall_Traversal_Soundcues;                            // 0x03D8(0x0050) Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance
		TMap<class FName, class USoundBase*>                       Freefall_1stLvl_Soundcues;                               // 0x0428(0x0050) Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance
		TMap<class FName, class USoundBase*>                       BRCannon_Launch_Soundcues;                               // 0x0478(0x0050) Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance
		TMap<class FName, class USoundBase*>                       Falling_LongJump_Soundcues;                              // 0x04C8(0x0050) Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance
		TMap<class FName, class USoundBase*>                       BRCannon_Freefall_Soundcues;                             // 0x0518(0x0050) Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance
		class UAudioComponent*                                     SuperstarFallingLoop;                                    // 0x0568(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class USoundBase*                                          SuperStarFallingLoopSound;                               // 0x0570(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FTimerHandle                                        DebugTickUpdate;                                         // 0x0578(0x0008) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		class FScriptMulticastDelegate                             OnMinFallingDurationExceeded;                            // 0x0580(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		bool                                                       TraversalFallSFXPlaying;                                 // 0x0590(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_EGG2[0x7];                                   // 0x0591(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnResetFreeFallSFX;                                      // 0x0598(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class UAudioComponent*                                     ReviveGiverSFX;                                          // 0x05A8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UAudioComponent*                                     ReviveChargeSFX;                                         // 0x05B0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UAudioComponent*                                     ReviveTakerSFX;                                          // 0x05B8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UAudioComponent*                                     BroomSweep_LP;                                           // 0x05C0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UAudioComponent*                                     Keybat_Fly_LP;                                           // 0x05C8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UAudioComponent*                                     BullRush_LP;                                             // 0x05D0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<class USoundBase*>                                  FallImpact_ViciousAOE;                                   // 0x05D8(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		class UAudioComponent*                                     Starfish_Woosh_LP;                                       // 0x05E8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UAudioComponent*                                     KeyBatFlipLoop;                                          // 0x05F0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TMap<class UPhysicalMaterial*, class USoundCue*>           ClimbSlideSurfaceType;                                   // 0x05F8(0x0050) Edit, BlueprintVisible, DisableEditOnInstance
		class UAudioComponent*                                     EdgeHoldSfxRef;                                          // 0x0648(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UAudioComponent*                                     Keen_Dance_Emo;                                          // 0x0650(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UAudioComponent*                                     FountainSFX;                                             // 0x0658(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UAudioComponent*                                     FountainEmoOS;                                           // 0x0660(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UAudioComponent*                                     PopcornHealingSFXLoop;                                   // 0x0668(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bIsHealing;                                              // 0x0670(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_Y50G[0x7];                                   // 0x0671(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UAudioComponent*                                     PoleSwingLoop;                                           // 0x0678(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UAudioComponent*                                     PoleSwingWhoosh;                                         // 0x0680(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FTimerHandle                                        PoleSwingWhooshTimer;                                    // 0x0688(0x0008) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		class UAudioComponent*                                     PoisonMistAudioRef;                                      // 0x0690(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    LastViciousImpactLevel;                                  // 0x0698(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_LN0B[0x4];                                   // 0x069C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UAudioComponent*                                     WaterfallCollide;                                        // 0x06A0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       OceanSurfaceOverride;                                    // 0x06A8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void StopWaterfallCollideSFX();
		void PlayWaterfallCollideSFX();
		void StartViciousChargedFall();
		void StopPoisonMistSFX();
		void PlayPoisonMistSFX();
		void PlayPoleSwingWhooshonRotation();
		void EndPoleSwingSFX();
		void StartPoleSwingSFX();
		void KillSpawnedSFX(class UAudioComponent* AudioComponent, float FadeOutDuration, EAudioFaderCurve FadeCurve);
		void SpawnAttachedSFX(class UAudioComponent* StopAudioComponent, float FadeOutDuration, class USoundBase* NewSound, class USceneComponent* AttachToComponent, const class FName& AttachPointName, class UAudioComponent** SpawnedAudioComponent);
		void PlayFountainEMOOS();
		void StopFountainEmo();
		void PlayFountainEmo();
		void StopKeenDanceEmote();
		void PlayKeenDanceEmote();
		void StopEdgeHoldSFX();
		void PlayEdgeHoldSFX();
		void PlayWallSlideAttach(const struct FIGAdditionalParams& AdditionalParams);
		void PlayKeyBatFlipLoop();
		void StopKeyBatFlipLoop();
		void StopStarfish_Whoosh_LP();
		void PlayStarfish_Whoosh_LP();
		void StopBullRush_LP();
		void PlayBullRush_LP();
		void StopKeybat_Fly_LP();
		void PlayKeybat_Fly_LP();
		void StopBroomSweep_LP();
		void PlayBroomSweep_LP();
		void PlayReviveFailedSFX();
		void PlayReviveChargeSFX();
		void DebugPrinttoScreen(const class FString& inString, const struct FLinearColor& TextColor);
		void FadeOutByFallTrajectory(class UAudioComponent* in_AudioComponent, float DownwardDrawDistance, float ClampMin, float ClampMax, EDrawDebugTrace DebugDrawType);
		void StopSuperStarFallingSFX();
		void PlaySuperStarFallingSFX();
		void TraceFallTrajectory(float DownwardDistance, EDrawDebugTrace DebugDraw, struct FHitResult* OutHit);
		void SpawnAttachedSoundByRole(class USoundBase* LocalSound, class USoundAttenuation* LocalAttenuation, class USoundBase* FriendlySound, class USoundAttenuation* FriendlyAttenuation, class USoundBase* EnemySound, class USoundAttenuation* EnemyAttenuation, const class FName& AttachPoint, class UAudioComponent** SpawnedSound);
		void PlayGrabActivationSFX();
		void ValidateFootstepSFX(class USoundBase* inFootstepSound, bool IsLocalOrFriendly, class USoundBase** outFootstepSound);
		void OnMovementModeChanged_cb(class ACharacter* Character, EMovementMode PrevMovementMode, unsigned char PreviousCustomMode);
		void MovementModeSet(class ACharacter* Character, EMovementMode PrevMovementMode, unsigned char PreviousCustomMode);
		void SetCliffhangerSFX(class ACharacter* Character, unsigned char MovementMode);
		void StopTeampose4WindLoop();
		void PlayTeampose4WindLoop();
		void PlayTeampose0Sparkle();
		void StopTeampose0SparkleLoop();
		void EmoteButterflyEnd();
		void EmoteButterflyLanded();
		void StopFireworkEmoteSFXLoop();
		void PlayFireworkEmoteSFXLoop();
		void PlaySpecialMoveActivationSFX();
		void PlayReviveTakerSFX();
		void PlayReviveGiverSFX();
		void StopBallBounceSFX();
		void PlayBallBounceSFX();
		void PlayStaminaSFX(class USceneComponent* AttachToComponent);
		void SetLandingSoundVolume(bool UseDefaultJumpLandVolume);
		void AdjustPitchandVolumebyBodyType(EIGBodyType BodyType);
		void StopCannonFreeFallWindSFX();
		void PlayCannonFreeFallWindSFX();
		void StopCannonLaunchWindSFX();
		void PlayCannonLaunchWindSFX();
		void StopLongJumpLoop();
		void PlayLongJumpLoop();
		void PlayFallingMeteorImpactSFX();
		void PlaySpecialFallingMeteorImpactSFX();
		void PlayGroundImpactSFX();
		void PlayFoleySFX(class USoundBase* SoundCue);
		void PlayLocalAndRemoteSurfaceSFX();
		void GetPlayerMovementSpeedandFootstepVolume(const class FName& AdditionalParamsNameParam);
		void StopRocketJumpCharge();
		void PlayRocketJumpChargeSFX();
		void PerkDeactivate(class UObject* PerkAsset);
		void PerkRemoved(class UObject* PerkAsset);
		void PerkGained(class UObject* PerkAsset);
		void PerkActivated(class UObject* PerkAsset);
		void StopPowerUpBlockLoopSFX();
		void PlayPowerUpBlockLoopSFX();
		void PlayConsumableMagazineSFX(const struct FGameplayTag& DynamicParamsTag);
		void PlayConsumablePowderSFX(const struct FGameplayTag& DynamicParamsTag);
		void PlayConsumableDrinkSFX(const struct FGameplayTag& DynamicParamsTag);
		void StopConsumableSFX();
		void PlayConsumableFoodSFX(const struct FGameplayTag& DynamicParamsTag);
		void StopPowerUpLoopSFX();
		void UpdateTraversalFreeFallSFXVolume();
		void StopTraversalFreeFallSFXVolumeUpdate();
		void StartTraversalFreeFallSFXVolumeUpdate(float UpdateInterval);
		void UpdatePlayerFallingDuration();
		void StopPlayerFallingUpdate();
		void StartPlayerFallingUpdate(float UpdateInterval);
		void StopTraversalFreeFallSFX();
		void PlayTraversalFreeFallSFX();
		void StopFreeFallVO();
		void PlayFreeFallVO(const class FName& VOGruntName);
		void StopFreeFallSFX(bool HardStop);
		void PlayFreeFallSFX();
		void Stop1stLvlFreeFallSFX();
		void Play1stLvlFreeFallSFX();
		void Play3rdLvlFallingMeteorSFX();
		void Play2ndLvlFallingMeteorSFX();
		void Play1stLvlFallingMeteorSFX();
		void PlayLowLvlFallingMeteorSFX();
		void StopChargeUpStartSFX();
		void PlayChargeUpStartSFX();
		void StopChargeUpHoldSFX();
		void PlayChargeUpHoldSFX();
		void StopFallingMeteorSFX();
		void HandleAnimNotifyAudioBP(const class FName& EventName, const struct FIGCharacterAudioAnimNotifyEventInfo& EventInfo);
		void HandleAnimNotifyStateBeginAudioBP(const class FName& EventName, const struct FIGCharacterAudioAnimNotifyEventInfo& EventInfo);
		void HandleAnimNotifyStateEndAudioBP(const class FName& EventName, const struct FIGCharacterAudioAnimNotifyEventInfo& EventInfo);
		void EventMinFallingDurationExceeded();
		void ReceiveBeginPlay();
		void OnCannonFired();
		void OnBRFreeFallEnd();
		void HandleClashAudioBP(class AActor* Attacker, class AActor* Victim);
		void HandleCannonLaunchEnd();
		void HandleCharacterReset();
		void OnEnteredSuperStarModeSFX();
		void OnExitedSuperStarModeSFX();
		void CustomTick();
		void EventResetFreeFallSFX();
		void OnBrokenByViciousAttack();
		void HandleStashUnstashAudioBP(bool IsStashing, bool IsLargeItem);
		void PreTeleport();
		void PostTeleport(const struct FVector& TeleportDestination);
		void HandleUnpocketSFXBP(class AActor* Attacker, class AActor* Victim, bool DroppedAnItem);
		void ExecuteUbergraph_Char_SFXComponent(int32_t EntryPoint);
		void OnResetFreeFallSFX__DelegateSignature();
		void OnMinFallingDurationExceeded__DelegateSignature();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
