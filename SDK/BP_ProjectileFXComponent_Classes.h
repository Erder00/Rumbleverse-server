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
	 * BlueprintGeneratedClass BP_ProjectileFXComponent.BP_ProjectileFXComponent_C
	 * Size -> 0x00AC (FullSize[0x015C] - InheritedSize[0x00B0])
	 */
	class UBP_ProjectileFXComponent_C : public UActorComponent
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x00B0(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UCapsuleComponent*                                   CurrentCapsuleComponent;                                 // 0x00B8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UParticleSystemComponent*                            ParticleReference;                                       // 0x00C0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UAudioComponent*                                     AudioReference;                                          // 0x00C8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FHitResult                                          BounceHitInfo;                                           // 0x00D0(0x0088) Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, ContainsInstancedReference
		float                                                      ImpactIntensity;                                         // 0x0158(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void SetupOceanHitEvent();
		void ProjectileOceanHit();
		void WeaponBreakVFX(class USkeletalMeshComponent* SkeletalMesh, const class FName& BoneName);
		void SetBounceSFX_Volume_Pitch_Location(struct FVector* BounceLocation, float* VolumeMultiplier, float* PitchMultiplier, EPhysicalSurface* SurfaceType);
		void BounceSFX(const struct FGameplayTagContainer& GameplayTag);
		void BounceVFX(const struct FGameplayTagContainer& GameplayTag);
		void AudioSpawn(const struct FGameplayTagContainer& GameplayTag);
		void VFXSpawn(const struct FGameplayTagContainer& GameplayTag);
		void ProjectileActivated(const struct FGameplayTagContainer& GameplayTags, class UCapsuleComponent* CapsuleComponent);
		void ProjectileDeactivated(class UParticleSystemComponent* ParticleReference, class UAudioComponent* SoundReference);
		void ProjectileBounced(const struct FHitResult& Hit, const struct FVector& Velocity, const struct FGameplayTagContainer& GameplayTag);
		void ProjectileStopped(const struct FHitResult& Hit, const struct FGameplayTagContainer& GameplayTag);
		void ReceiveBeginPlay();
		void ExecuteUbergraph_BP_ProjectileFXComponent(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
