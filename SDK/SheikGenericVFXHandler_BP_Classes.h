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
	 * BlueprintGeneratedClass SheikGenericVFXHandler_BP.SheikGenericVFXHandler_BP_C
	 * Size -> 0x00F8 (FullSize[0x0318] - InheritedSize[0x0220])
	 */
	class ASheikGenericVFXHandler_BP_C : public ASheikVFXHandlerActor
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0220(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UPostProcessComponent*                               VFXPostProcess;                                          // 0x0228(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class ABP_SheikCharacter_C*                                CharacterRef;                                            // 0x0230(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              SkyActor[0x28];                                          // 0x0238(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		unsigned char                                              SkyLightActor[0x28];                                     // 0x0260(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		class UMaterialInstanceDynamic*                            SkyMaterial;                                             // 0x0288(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ADirectionalLight*                                   WorldSkyLightActor;                                      // 0x0290(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      DefaultSkyLightIntensity;                                // 0x0298(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_69G1[0x4];                                   // 0x029C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class USheikGameInfo_BP_C*                                 LocalGameInfo;                                           // 0x02A0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMaterialInstanceDynamic*                            TKOPP_Mat;                                               // 0x02A8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMaterialInstanceDynamic*                            OutOfRingPP_Mat;                                         // 0x02B0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMaterialInstanceDynamic*                            TKO_OutOfRing_PP_Mat;                                    // 0x02B8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UParticleSystemComponent*                            PS_CannonLaunchPing;                                     // 0x02C0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TMap<int32_t, class UParticleSystemComponent*>             CannonLaunchPingMap;                                     // 0x02C8(0x0050) Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference

	public:
		bool GetBasicPingingEnabled();
		void SpawnHealthNumberVFX(class UObject* TargetHealed, float HealedAmount);
		void OnPingExpired(int32_t PartyMemberID);
		void OnPingAtLocation(EIGPingType PingType, int32_t PartyMemberID, const struct FVector& PingLocation, const struct FVector& PingNormal);
		void PostProcessSetup();
		void EventWon(TArray<class ASheikCharacter*>* WinningCharacters);
		void HandlePerkGainedNotifyVFXBP(const struct FIGVFXPerkNotifyInfo& EventInfo);
		void HandlePerkActivateNotifyVFXBP(const struct FIGVFXPerkNotifyInfo& EventInfo);
		void HandlePerkRemovedNotifyVFXBP(const struct FIGVFXPerkNotifyInfo& EventInfo);
		void HandlePerkDeactivateNotifyVFXBP(const struct FIGVFXPerkNotifyInfo& EventInfo);
		void HandleFallEndNotifyVFXBP(const class FName& EventName, const struct FIGVFXFallEndNotifyInfo& EventInfo);
		void ReceiveBeginPlay();
		void HandleFallTierNotifyVFXBP(const struct FIGVFXFallTierNotifyInfo& EventInfo);
		void HandleRemoteCharacterDisplaySecondsChangeVFXBP(int32_t Value, class AIGCharacter* Target);
		void OnEventVictoryRewarded(const class FString& WinnerName, const class FString& RewardText, bool bLocalPlayerParticipated, bool bLocalPlayerWon, TArray<class ASheikCharacter*> WinningCharacters);
		void HandleVictimStatusNotificationBP(class AActor* Attacker, class AActor* Victim, EQueuedAttackVictimStatus Status);
		void HandleHealingNotifyVFXBP(class AActor* TargetHealed, float HealedAmount);
		void HandleResetAllFallVFXBP(class AActor* Character);
		void ExecuteUbergraph_SheikGenericVFXHandler_BP(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
