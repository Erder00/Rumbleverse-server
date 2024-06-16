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
	 * BlueprintGeneratedClass BPFL_AI_Behaviors.BPFL_AI_Behaviors_C
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UBPFL_AI_Behaviors_C : public UBlueprintFunctionLibrary
	{
	public:
		float GetCharacterHealthPercentage(class AIGCharacter* IGCharacter, class UObject* __WorldContext);
		void GetItemCategory(const struct FGameplayTagContainer& GameplayTagContainer, class UObject* __WorldContext, EBotItemCategory* Category);
		float GetRingRadius(class ASheikCharacterAIController_BP_C* AIController, class UObject* __WorldContext);
		void GetLowestTierStashedWeapon(class ASheikCharacter* Target, bool IncludeHandSlot, class UObject* __WorldContext, bool* WeaponFound, EIGInventorySlot* InventorySlot, EMoveTier* Tier);
		void GetHighestTierStashedWeapon(class ASheikCharacter* Target, bool IncludeHandSlot, class UObject* __WorldContext, bool* WeaponFound, EIGInventorySlot* InventorySlot, EMoveTier* Tier);
		void GetEmptyInventorySlotCount(class ASheikCharacter* Target, bool IncludeHandSlot, class UObject* __WorldContext, int32_t* Count);
		bool GetOnBarge(class UObject* __WorldContext);
		void GetActorsFacingEachOther(class AActor* A, class AActor* B, class UObject* __WorldContext, bool* FacingEachOther);
		void GetActorFacingTarget(class AActor* Actor, class AActor* Target, class UObject* __WorldContext, bool* ActorFacingTarget, float* Dot);
		void SprintIfAllowed(class ASheikCharacterAIController_BP_C* AIController, class UObject* __WorldContext);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
