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
	 * Function BP_ProjectileFXComponent.BP_ProjectileFXComponent_C.SetupOceanHitEvent
	 */
	struct UBP_ProjectileFXComponent_C_SetupOceanHitEvent_Params
	{	};

	/**
	 * Function BP_ProjectileFXComponent.BP_ProjectileFXComponent_C.ProjectileOceanHit
	 */
	struct UBP_ProjectileFXComponent_C_ProjectileOceanHit_Params
	{	};

	/**
	 * Function BP_ProjectileFXComponent.BP_ProjectileFXComponent_C.WeaponBreakVFX
	 */
	struct UBP_ProjectileFXComponent_C_WeaponBreakVFX_Params
	{
	public:
		class USkeletalMeshComponent*                              SkeletalMesh;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FName                                                BoneName;                                                // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_ProjectileFXComponent.BP_ProjectileFXComponent_C.SetBounceSFX_Volume_Pitch_Location
	 */
	struct UBP_ProjectileFXComponent_C_SetBounceSFX_Volume_Pitch_Location_Params
	{
	public:
		struct FVector                                             BounceLocation;                                          // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      VolumeMultiplier;                                        // 0x000C(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      PitchMultiplier;                                         // 0x0010(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		EPhysicalSurface                                           SurfaceType;                                             // 0x0014(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_2TMU[0x3];                                   // 0x0015(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_ProjectileFXComponent.BP_ProjectileFXComponent_C.BounceSFX
	 */
	struct UBP_ProjectileFXComponent_C_BounceSFX_Params
	{
	public:
		struct FGameplayTagContainer                               GameplayTag;                                             // 0x0000(0x0020)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function BP_ProjectileFXComponent.BP_ProjectileFXComponent_C.BounceVFX
	 */
	struct UBP_ProjectileFXComponent_C_BounceVFX_Params
	{
	public:
		struct FGameplayTagContainer                               GameplayTag;                                             // 0x0000(0x0020)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function BP_ProjectileFXComponent.BP_ProjectileFXComponent_C.Audio Spawn
	 */
	struct UBP_ProjectileFXComponent_C_AudioSpawn_Params
	{
	public:
		struct FGameplayTagContainer                               GameplayTag;                                             // 0x0000(0x0020)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function BP_ProjectileFXComponent.BP_ProjectileFXComponent_C.VFX Spawn
	 */
	struct UBP_ProjectileFXComponent_C_VFXSpawn_Params
	{
	public:
		struct FGameplayTagContainer                               GameplayTag;                                             // 0x0000(0x0020)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function BP_ProjectileFXComponent.BP_ProjectileFXComponent_C.ProjectileActivated
	 */
	struct UBP_ProjectileFXComponent_C_ProjectileActivated_Params
	{
	public:
		struct FGameplayTagContainer                               GameplayTags;                                            // 0x0000(0x0020)  (BlueprintVisible, BlueprintReadOnly, Parm)
		class UCapsuleComponent*                                   CapsuleComponent;                                        // 0x0020(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_ProjectileFXComponent.BP_ProjectileFXComponent_C.ProjectileDeactivated
	 */
	struct UBP_ProjectileFXComponent_C_ProjectileDeactivated_Params
	{
	public:
		class UParticleSystemComponent*                            ParticleReference;                                       // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UAudioComponent*                                     SoundReference;                                          // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_ProjectileFXComponent.BP_ProjectileFXComponent_C.ProjectileBounced
	 */
	struct UBP_ProjectileFXComponent_C_ProjectileBounced_Params
	{
	public:
		struct FHitResult                                          Hit;                                                     // 0x0000(0x0088)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
		struct FVector                                             Velocity;                                                // 0x0088(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_BFR9[0x4];                                   // 0x0094(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FGameplayTagContainer                               GameplayTag;                                             // 0x0098(0x0020)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function BP_ProjectileFXComponent.BP_ProjectileFXComponent_C.ProjectileStopped
	 */
	struct UBP_ProjectileFXComponent_C_ProjectileStopped_Params
	{
	public:
		struct FHitResult                                          Hit;                                                     // 0x0000(0x0088)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
		struct FGameplayTagContainer                               GameplayTag;                                             // 0x0088(0x0020)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function BP_ProjectileFXComponent.BP_ProjectileFXComponent_C.ReceiveBeginPlay
	 */
	struct UBP_ProjectileFXComponent_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BP_ProjectileFXComponent.BP_ProjectileFXComponent_C.ExecuteUbergraph_BP_ProjectileFXComponent
	 */
	struct UBP_ProjectileFXComponent_C_ExecuteUbergraph_BP_ProjectileFXComponent_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_6S08[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
