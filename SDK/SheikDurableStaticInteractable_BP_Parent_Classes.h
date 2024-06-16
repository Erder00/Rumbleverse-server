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
	 * BlueprintGeneratedClass SheikDurableStaticInteractable_BP_Parent.SheikDurableStaticInteractable_BP_Parent_C
	 * Size -> 0x0030 (FullSize[0x0400] - InheritedSize[0x03D0])
	 */
	class ASheikDurableStaticInteractable_BP_Parent_C : public ASheikDurableStaticInteractable
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x03D0(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class USkeletalMeshComponent*                              SkeletalMesh;                                            // 0x03D8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		bool                                                       HasLeftoverDecal;                                        // 0x03E0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_XVO3[0x3];                                   // 0x03E1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             FXSpawnLocation;                                         // 0x03E4(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FScriptMulticastDelegate                             OnDurabilityChanged;                                     // 0x03F0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable

	public:
		void HandleInteractableReset_BP();
		void TriggerEffects();
		void OnInteractionEnded(EIGStaticInteractableActorState PreviousState);
		void HandleInteractableStateChanged_BP(EIGStaticInteractableActorState PreviousState, EIGStaticInteractableActorState NewState);
		void ReceiveBeginPlay();
		void BP_OnDurabilityChanged(int32_t NewDurability);
		void InteractableHasBeenHit_BP(bool bWasSuccessfulHit);
		void ExecuteUbergraph_SheikDurableStaticInteractable_BP_Parent(int32_t EntryPoint);
		void OnDurabilityChanged__DelegateSignature();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
