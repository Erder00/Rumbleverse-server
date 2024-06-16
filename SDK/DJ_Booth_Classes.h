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
	 * BlueprintGeneratedClass DJ_Booth.DJ_Booth_C
	 * Size -> 0x0040 (FullSize[0x03D8] - InheritedSize[0x0398])
	 */
	class ADJ_Booth_C : public AIGStaticInteractableActorHitReact
	{
	public:
		unsigned char                                              UnknownData_0H49[0x8];                                   // 0x0398(0x0008) Fix Super Size
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x03A0(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UStaticMeshComponent*                                ENV_Brg_Props_SoundMixer_01;                             // 0x03A8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UStaticMeshComponent*                                ENV_Brg_Props_TurnTable_02;                              // 0x03B0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UStaticMeshComponent*                                ENV_Brg_Props_TurnTable_01;                              // 0x03B8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		TArray<class AStaticMeshActor*>                            ScreenMeshes;                                            // 0x03C0(0x0010) Edit, BlueprintVisible, DisableEditOnTemplate
		float                                                      ScreenVisualIncrement;                                   // 0x03D0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      FXDelay;                                                 // 0x03D4(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void OnInteracting(EIGStaticInteractableActorState NewParam);
		void HandleInteractableStateChanged_BP(EIGStaticInteractableActorState PreviousState, EIGStaticInteractableActorState NewState);
		void ExecuteUbergraph_DJ_Booth(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
