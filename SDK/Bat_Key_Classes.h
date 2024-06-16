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
	 * BlueprintGeneratedClass Bat_Key.Bat_Key_C
	 * Size -> 0x0048 (FullSize[0x07C0] - InheritedSize[0x0778])
	 */
	class ABat_Key_C : public ABP_WeaponBase_Parent_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0778(0x0008) ZeroConstructor, Transient, DuplicateTransient
		bool                                                       KeyAttached;                                             // 0x0780(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_F0U7[0x7];                                   // 0x0781(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UParticleSystemComponent*                            P_LockedCrateRadar;                                      // 0x0788(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    EffectTiers;                                             // 0x0790(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_9V0K[0x4];                                   // 0x0794(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UParticleSystem*>                             LockedCrateRadarVFX;                                     // 0x0798(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		class UAudioComponent*                                     KeyBatPingSFX;                                           // 0x07A8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<class USoundBase*>                                  LockedCrateRadarSFX;                                     // 0x07B0(0x0010) Edit, BlueprintVisible, DisableEditOnInstance

	public:
		void LockedCrateRadarVFX_Deactivate();
		void LockedCrateRadarVFX_Spawn();
		void SpawnKeyVFX();
		void OnDurabilityChanged();
		void OnPickedUp();
		void OnDropped();
		void OnLockedCrateRadarTierChanged(int32_t EffectTiers);
		void ExecuteUbergraph_Bat_Key(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
