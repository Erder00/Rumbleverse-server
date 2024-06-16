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
	 * BlueprintGeneratedClass Char_VFXComponent.Char_VFXComponent_C
	 * Size -> 0x0580 (FullSize[0x06A8] - InheritedSize[0x0128])
	 */
	class UChar_VFXComponent_C : public UIGCharacterVFXComponent
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0128(0x0008) ZeroConstructor, Transient, DuplicateTransient
		float                                                      ChargeUpAmount;                                          // 0x0130(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_XLAJ[0x4];                                   // 0x0134(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTimerHandle                                        CurrentTimer;                                            // 0x0138(0x0008) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		float                                                      TimerElapsedTime;                                        // 0x0140(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_S7Z5[0x4];                                   // 0x0144(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class ABP_SheikCharacter_C*                                CharRef;                                                 // 0x0148(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      ChargeIncrementAmount;                                   // 0x0150(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_G12R[0x4];                                   // 0x0154(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UMaterialInstanceDynamic*                            SpeedPostProcessMat;                                     // 0x0158(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    ImpactLevel;                                             // 0x0160(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      CameraLagSpeedDefault;                                   // 0x0164(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ASheikPlayerControllerCommon*                        ActivatedShakenController;                               // 0x0168(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UParticleSystemComponent*                            ConsumePS;                                               // 0x0170(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FTimerHandle                                        UpdateConsumableLocTimer;                                // 0x0178(0x0008) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		TArray<class UParticleSystemComponent*>                    ConsumableParticles;                                     // 0x0180(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference
		class UMaterialInstanceDynamic*                            BRStartSpeedPostProcessMat;                              // 0x0190(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<class UParticleSystem*>                             StoneVFX;                                                // 0x0198(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		TArray<class UParticleSystem*>                             GrassVFX;                                                // 0x01A8(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		TArray<class UParticleSystem*>                             DirtVFX;                                                 // 0x01B8(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		TArray<class UParticleSystem*>                             WaterVFX;                                                // 0x01C8(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		TArray<class UParticleSystem*>                             LeavesVFX;                                               // 0x01D8(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		TArray<class UParticleSystem*>                             FallImpact_Intensity;                                    // 0x01E8(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		TArray<class UParticleSystem*>                             FallImpact_ViciousAOE;                                   // 0x01F8(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		TArray<class UParticleSystem*>                             FallImpactSurface_Stone;                                 // 0x0208(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		TArray<class UParticleSystem*>                             FallImpactSurface_Grass;                                 // 0x0218(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		TArray<class UParticleSystem*>                             FallImpactSurface_Glass;                                 // 0x0228(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		TArray<class UParticleSystem*>                             FallImpactSurface_Water;                                 // 0x0238(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		TArray<class UParticleSystem*>                             FallImpactSurface_Leaves;                                // 0x0248(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		class ABP_SheikCharacter_C*                                FallingAttacker;                                         // 0x0258(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ABP_SheikCharacter_C*                                FallingDefender;                                         // 0x0260(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ASheikPlayerControllerCommon*                        FallingAttackerController;                               // 0x0268(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ASheikPlayerControllerCommon*                        FallingDefenderController;                               // 0x0270(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    FallingTier;                                             // 0x0278(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_M3GZ[0x4];                                   // 0x027C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UParticleSystemComponent*                            CurrentFallEffect;                                       // 0x0280(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      FallingDistance;                                         // 0x0288(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		EFallingType                                               FallNotifyType;                                          // 0x028C(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_4TRN[0x3];                                   // 0x028D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UParticleSystemComponent*                            CurrentMistVFX;                                          // 0x0290(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UParticleSystemComponent*                            PS_AimBeam;                                              // 0x0298(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UParticleSystemComponent*                            PSAimEnd;                                                // 0x02A0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UParticleSystemComponent*                            Perk_PS_Temper;                                          // 0x02A8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UParticleSystemComponent*                            Perk_PS_Healing;                                         // 0x02B0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UParticleSystemComponent*                            Perk_PS_Poisoned;                                        // 0x02B8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UParticleSystemComponent*                            Perk_PS_Meditative;                                      // 0x02C0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UParticleSystemComponent*                            Perk_PS_HotHandsLeft;                                    // 0x02C8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UParticleSystemComponent*                            Perk_PS_HotHandsRight;                                   // 0x02D0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class USheikGameInfo_BP_C*                                 LocalGameInfo;                                           // 0x02D8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UParticleSystemComponent*                            Perk_PS_MeatSweats;                                      // 0x02E0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              GameVFXHandler[0x28];                                    // 0x02E8(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		class UParticleSystemComponent*                            PS_CannonLaunch;                                         // 0x0310(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UParticleSystemComponent*                            Perk_PS_Rude;                                            // 0x0318(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UParticleSystemComponent*                            Perk_PS_CliffHanger;                                     // 0x0320(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UParticleSystemComponent*                            Perk_PS_Energized;                                       // 0x0328(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UParticleSystemComponent*                            Perk_PS_PopcornHeal;                                     // 0x0330(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UParticleSystemComponent*                            Perk_PS_Strength;                                        // 0x0338(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UParticleSystemComponent*                            Perk_PS_RoarHealing;                                     // 0x0340(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UParticleSystemComponent*                            Perk_PS_Aggression;                                      // 0x0348(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UParticleSystemComponent*                            Perk_PS_Guts;                                            // 0x0350(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bHasEagernessPerk;                                       // 0x0358(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_V4HG[0x7];                                   // 0x0359(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UParticleSystemComponent*                            PS_TeammateBeacon;                                       // 0x0360(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UParticleSystemComponent*                            PS_BRFreeFall;                                           // 0x0368(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FTimerHandle                                        TKOFunctionUpdate;                                       // 0x0370(0x0008) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		float                                                      DefaultFOV;                                              // 0x0378(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      FOVAmount;                                               // 0x037C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      FOVIncrementAmount;                                      // 0x0380(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      PostProcessFadeAmount;                                   // 0x0384(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      PostProcessIncrementAmount;                              // 0x0388(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       KOHit;                                                   // 0x038C(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_4CRM[0x3];                                   // 0x038D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      TKOFOV;                                                  // 0x0390(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_B1VH[0x4];                                   // 0x0394(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UParticleSystem*>                             FallImpactSurface_Wood;                                  // 0x0398(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		TMap<class UPhysicalMaterial*, class UMaterialInterface*>  ClimbSurfaceDecalTypes;                                  // 0x03A8(0x0050) Edit, BlueprintVisible, DisableEditOnInstance
		class UCurveFloat*                                         ChargeCurve;                                             // 0x03F8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UCurveFloat*                                         FlashCurve;                                              // 0x0400(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      UnblockableIncrementAmount;                              // 0x0408(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_8GUK[0x4];                                   // 0x040C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UCurveFloat*                                         FallDamageSizeCurve;                                     // 0x0410(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FTimerHandle                                        DamageNumberTimer;                                       // 0x0418(0x0008) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		class UParticleSystemComponent*                            PS_BlockingShield_Start;                                 // 0x0420(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UParticleSystemComponent*                            PS_BlockingShield_Loop;                                  // 0x0428(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UParticleSystemComponent*                            PS_BlockingShield_Stop;                                  // 0x0430(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UParticleSystemComponent*                            P_BlockHit;                                              // 0x0438(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      StaminaMax;                                              // 0x0440(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      CurrentStaminaScaled;                                    // 0x0444(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       StaminaIncreaseFXActive;                                 // 0x0448(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_4195[0x3];                                   // 0x0449(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      ShieldScaleMin;                                          // 0x044C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       BlockingInAir;                                           // 0x0450(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_C9UL[0x7];                                   // 0x0451(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UMaterialInstanceDynamic*                            DMI_PP_DanzerZone;                                       // 0x0458(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       InDangerZone;                                            // 0x0460(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       FallFXOffset;                                            // 0x0461(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_BVEO[0x6];                                   // 0x0462(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UParticleSystemComponent*                            PSystem_Winded;                                          // 0x0468(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       ChargedWhileInSuperstar;                                 // 0x0470(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_MLY0[0x3];                                   // 0x0471(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FIGAdditionalParams                                 ChargedUpParams;                                         // 0x0474(0x0028) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor
		unsigned char                                              UnknownData_M662[0x4];                                   // 0x049C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UParticleSystemComponent*                            P_SuperstarActive;                                       // 0x04A0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UParticleSystemComponent*                            StaminaPS;                                               // 0x04A8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UParticleSystemComponent*                            P_SuperstarHelix;                                        // 0x04B0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UDecalComponent*                                     SuperstarDecal;                                          // 0x04B8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class USkeletalMeshComponent*                              ConsumeableSK;                                           // 0x04C0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bHasAerodynamicPerk;                                     // 0x04C8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_VE0E[0x7];                                   // 0x04C9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UParticleSystemComponent*                            P_Emote;                                                 // 0x04D0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       ButterflyLanded;                                         // 0x04D8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bHasCliffHangerPerk;                                     // 0x04D9(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_SYDL[0x6];                                   // 0x04DA(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class ASheikGameStateBR_BP_C*                              ShiekGameState;                                          // 0x04E0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		class UParticleSystemComponent*                            PS_RocketJump;                                           // 0x04E8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       AllowDodgeBoostEffect;                                   // 0x04F0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_UJGI[0x7];                                   // 0x04F1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UParticleSystemComponent*                            P_SpecialAttack;                                         // 0x04F8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UParticleSystemComponent*                            P_NonCombatMode;                                         // 0x0500(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TMap<class UPhysicalMaterial*, class UMaterialInterface*>  ClimbSlideSurfaceDecalTypes;                             // 0x0508(0x0050) Edit, BlueprintVisible, DisableEditOnInstance
		TMap<class FName, class UParticleSystem*>                  WaterfallLiquids;                                        // 0x0558(0x0050) Edit, BlueprintVisible, DisableEditOnInstance
		class UParticleSystemComponent*                            P_HidingLeaves;                                          // 0x05A8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UParticleSystemComponent*                            P_WaterWake;                                             // 0x05B0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UDecalComponent*                                     TeamDecal;                                               // 0x05B8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    NumOfBushes;                                             // 0x05C0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_01DA[0x4];                                   // 0x05C4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class USkeletalMeshComponent*                              CurrentlyHeldWeapon;                                     // 0x05C8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      GC_CurrentTime;                                          // 0x05D0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_7QXJ[0x4];                                   // 0x05D4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UParticleSystemComponent*                            P_GC_Meter;                                              // 0x05D8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    NumOfWaterfalls;                                         // 0x05E0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_CKO3[0x4];                                   // 0x05E4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UParticleSystemComponent*                            P_WaterfallSplashing;                                    // 0x05E8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bOceanSurfaceOverride;                                   // 0x05F0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_FBPH[0x3];                                   // 0x05F1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      OceanHeight;                                             // 0x05F4(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UParticleSystemComponent*                            PS_PoleSwing;                                            // 0x05F8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      ImpactRadiusOverride;                                    // 0x0600(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_2EQD[0x4];                                   // 0x0604(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<float>                                              FallDistanceAmounts;                                     // 0x0608(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		TArray<float>                                              ImpactAoEAmounts;                                        // 0x0618(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		struct FGameplayTagContainer                               FallingMoveTags;                                         // 0x0628(0x0020) Edit, BlueprintVisible, DisableEditOnInstance
		TMap<struct FGameplayTag, float>                           ImpactOffsets;                                           // 0x0648(0x0050) Edit, BlueprintVisible, DisableEditOnInstance
		bool                                                       bNonCombatMode;                                          // 0x0698(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_VWSS[0x7];                                   // 0x0699(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UCurveFloat*                                         Destroyer_FOVCurve;                                      // 0x06A0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void EmotesStop(const struct FIGAdditionalParams& IGAdditionalParams);
		void StopFOVUpdate();
		void FOVTimerUpdate();
		void StartFOVUpdate();
		void Emotes(const struct FIGAdditionalParams& IGAdditionalParams);
		void PoleSwingingEnd();
		void PoleSwingingStart();
		void HandleUnpocketVFX(class AActor* Attacker, class AActor* Victim, bool DroppedAnItem);
		void StopWaterfallVFX();
		void SpawnWaterfallVFX(const class FName& WaterType);
		void GC_UpdateTime();
		void GC_SpawnMeterResult();
		void GC_DeactivateMeterTry();
		void GC_SpawnMeterTry();
		void SpecialImpactDecal(const struct FIGAdditionalParams& IGAdditionalParams);
		void StopBroomWiggle();
		void StartBroomWiggle();
		void ApplyTeamDecals();
		void OnTeamInfoUpdated();
		void StopWaterWakeIfActive();
		void WaterWakeLoop(const struct FIGVFXCharacterAnimNotifyEventInfo& IGVFXCharacterAnimNotifyEventInfo);
		void SpawnWaterWake(const struct FIGVFXCharacterAnimNotifyEventInfo& EventInfo);
		void StopHidingLeaves();
		void SpawnHidingLeaves(const struct FLinearColor& LeafColor, const struct FVector& LeafScale, class UParticleSystem* LeafEmitter);
		void OnCombatModeChanged(bool IsInCombatMode);
		void PerkPocketDimension(bool IsStashing, bool IsLargeItem);
		void SpecialAttacksDeactivate();
		void SpawnAirDodgeBounce();
		void AirDodgeBoostTimer();
		void OnCharacterBounced(float BounceIntensity);
		void RocketJump(bool Start, const struct FIGAdditionalParams& IGAdditionalParams, const struct FIGDynamicParams& IGDynamicParams);
		void SetWaterColor(class UFXSystemComponent* PSystem);
		void GetGameState();
		void TeamPose4Stop();
		void TeamPose4Start();
		void SetCliffHangerVFX(class ACharacter* Character, unsigned char MovementMode);
		void MovementModeChanged(class ACharacter* Character, EMovementMode PrevMovementMode, unsigned char PreviousCustomMode);
		void SetButterflyLanded(const class FName& EventName, float EmitterTime, int32_t ParticleTime, const struct FVector& Location, const struct FVector& Velocity, const struct FVector& Direction);
		void TeamPose2Stop();
		void TeamPose2Start();
		void ClearFallingVFX();
		void DeactivateSuperstarHelix();
		void SpawnSuperstarHelix();
		void SpawnStaminaVFX(class UParticleSystem* EmitterTemplate, class USceneComponent* Attachment, class USkeletalMeshComponent* ConsumeableSK, bool PuffOut);
		void StartWorldCameraShake(const struct FIGAdditionalParams& AdditionalParams);
		void OnExitedSuperstarMode();
		void OnEnteredSuperstarMode();
		void ShieldBreakVicious();
		void GroundImpact(const struct FIGAdditionalParams& IGAdditionalParams);
		void StopCameraShake();
		void StartCameraShake(const struct FIGAdditionalParams& IGAdditionalParams);
		void RoundEnded(TArray<class AIGPlayerState*> WinningPlayers, bool isLocalPlayer, bool isSpectator);
		void OnNoLongerWinded();
		void OnWinded(float StaminaPercentage);
		void OffsetCannonVFX();
		void SetBlockShieldOffset(class UParticleSystemComponent* PSystem);
		void BlockHit(const struct FIGAdditionalParams& AdditionalParams);
		void BlockStartExit();
		void BlockingEnd(const struct FIGAdditionalParams& AdditionalParams);
		void BlockLoop(const struct FIGAdditionalParams& AdditionalParams);
		void StartBlockLoop(const struct FIGAdditionalParams& AdditionalParams);
		void BlockingStart(const struct FIGAdditionalParams& AdditionalParams);
		void SpecialAttacksSpawn(const struct FIGVFXCharacterAnimNotifyEventInfo& EventInfo);
		void IncrementUnblockable();
		void UnblockableFlash();
		void InvincibleFlash(bool On);
		void UnblockableEnd();
		void UnblockableHold(const struct FIGAdditionalParams& IGAdditionalParams);
		void SurfaceVFX(const struct FIGVFXCharacterAnimNotifyEventInfo& EventInfo);
		void WallBounce();
		void ClimbDecal(const struct FIGAdditionalParams& AdditionalParams);
		void KOUpdate();
		void ShowOrHideDangerZoneVFX(bool DangerZoneStatus);
		void GetPartyMemberIDColor(class APlayerState* PlayerState, struct FLinearColor* PartyLinearColor);
		void MagazineEnd();
		void EventWon(TArray<class ASheikCharacter*>* Winners);
		void GetDefenderImpactPoint(bool* FloorHit, float* Distance, struct FVector* ImpactPoint, struct FRotator* ImpactRotation);
		void PerkRemoved(class UObject* PerkAsset, float Value);
		void PerkDeactivated(class UObject* PerkAsset, float Value);
		void PerkActivated(class UObject* PerkAsset, float Value);
		void PerkGained(class UObject* PerkAsset, float Value);
		void OnAimUpdated(const struct FVector& StartPoint, const struct FVector& EndPoint, const struct FVector& StartTangent, const struct FVector& EndTangent, const struct FVector& ImpactNormal);
		void OnAimExited();
		void OnAimStarted();
		void MistAttackEnd(const struct FIGAdditionalParams& AdditionalParams);
		void MistAttackStart(const struct FIGAdditionalParams& AdditionalParams);
		void UpdateConsumableLocation();
		void ConsumableEnd();
		void ConsumableStart(const struct FIGDynamicParams& DynamicParams);
		void GetAttackerImpactPoint(bool* FloorHit, float* Distance, struct FVector* ImpactPoint, struct FRotator* ImpactRotation);
		void SpawnCannonCloudVFX();
		void BRFreefallEnd();
		void KillActiveVFX(bool PlayerDestroyed);
		void BRFreeFallStart();
		void BRFallEnd();
		void BRFallStart();
		void SetupVariables();
		void FallSpeedImpact(const struct FIGVFXFallEndNotifyInfo& EventInfo, const class FName& EventName);
		void FallSpeed(const struct FIGVFXFallTierNotifyInfo& IGVFXFallInfo);
		void StopTimer();
		void ChargeUpEnd();
		void ChargedUp(const struct FIGAdditionalParams& AdditionalParams);
		void IncrementCharge();
		void ChargeUp(const struct FIGAdditionalParams& AdditionalParams);
		void HandleAnimNotifyStateEndVFXBP(const class FName& EventName, const struct FIGVFXCharacterAnimNotifyEventInfo& EventInfo);
		void HandleAnimNotifyStateBeginVFXBP(const class FName& EventName, const struct FIGVFXCharacterAnimNotifyEventInfo& EventInfo);
		void HandleAnimNotifyStateTickVFXBP(const class FName& EventName, const struct FIGVFXCharacterAnimNotifyEventInfo& EventInfo);
		void ReceiveBeginPlay();
		void AimArcUpdated(const struct FVector& StartPoint, const struct FVector& EndPoint, const struct FVector& StartTangent, const struct FVector& EndTangent, const struct FVector& ImpactNormal);
		void AimStarted();
		void AimExited();
		void CannonSequenceStarted();
		void CannonSequenceEnded();
		void DangerZoneStatusChanged(bool DangerZoneStatus);
		void KO_VFX(bool KOHit);
		void HandleClashVFXBP(class AActor* Attacker, class AActor* Victim);
		void HandleDamageNumberNotification(float DamageValue, class UParticleSystem* DamageNumberEffect, const struct FVector& NumberSpawnLocation, const struct FVector& NumberSpawnScale, bool bAttackerWasInSuper);
		void StopDamageNumbers();
		void HandleAnimNotifyVFXBP(const class FName& EventName, const struct FIGVFXCharacterAnimNotifyEventInfo& EventInfo);
		void OnBrokenByViciousAttack();
		void HandleCharacterReset();
		void OnPlayerDestroyed(class AActor* DestroyedActor);
		void OnCharacterEnteredDBNO(class AIGCharacter* Victim);
		void OnCharacterExitedDBNO(class AIGCharacter* Victim);
		void HandleStashUnstashVFXBP(bool IsStashing, bool IsLargeItem);
		void PreTeleport();
		void PostTeleport(const struct FVector& TeleportDestination);
		void HandleUnpocketVFXBP(class AActor* Attacker, class AActor* Victim, bool DroppedAnItem);
		void ExecuteUbergraph_Char_VFXComponent(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
