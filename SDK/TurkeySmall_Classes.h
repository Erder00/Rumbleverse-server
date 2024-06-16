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
	 * BlueprintGeneratedClass TurkeySmall.TurkeySmall_C
	 * Size -> 0x0038 (FullSize[0x0738] - InheritedSize[0x0700])
	 */
	class ATurkeySmall_C : public AIGHealthAndStaminaConsumable
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0700(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UBP_ProjectileFXComponent_C*                         BP_ProjectileFXComponent;                                // 0x0708(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		float                                                      Projectile_SFX_Oscillator_Timeline_Pitch_Multiplier_D357E4494D6EAFC6FFED2683520FAFED; // 0x0710(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      Projectile_SFX_Oscillator_Timeline_Volume_Multiplier_D357E4494D6EAFC6FFED2683520FAFED; // 0x0714(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		ETimelineDirection                                         Projectile_SFX_Oscillator_Timeline__Direction_D357E4494D6EAFC6FFED2683520FAFED; // 0x0718(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_9BS5[0x7];                                   // 0x0719(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTimelineComponent*                                  ProjectileSFXOscillatorTimeline;                         // 0x0720(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UParticleSystemComponent*                            ParticleReference;                                       // 0x0728(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UAudioComponent*                                     AudioReference;                                          // 0x0730(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void SpawnPoofVFX();
		void ProjectileSFXOscillatorTimeline__FinishedFunc();
		void ProjectileSFXOscillatorTimeline__UpdateFunc();
		void OnUse();
		void OnActivateProjectile();
		void OnDeactivateProjectile();
		void BndEvt__ProjectileMovementComponent_K2Node_ComponentBoundEvent_0_OnProjectileBounceDelegate__DelegateSignature(const struct FHitResult& ImpactResult, const struct FVector& ImpactVelocity);
		void BndEvt__ProjectileMovementComponent_K2Node_ComponentBoundEvent_1_OnProjectileStopDelegate__DelegateSignature(const struct FHitResult& ImpactResult);
		void ExecuteUbergraph_TurkeySmall(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
