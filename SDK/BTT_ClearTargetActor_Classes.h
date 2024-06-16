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
	 * BlueprintGeneratedClass BTT_ClearTargetActor.BTT_ClearTargetActor_C
	 * Size -> 0x00A8 (FullSize[0x0150] - InheritedSize[0x00A8])
	 */
	class UBTT_ClearTargetActor_C : public UBTTask_BlueprintBase
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x00A8(0x0008) ZeroConstructor, Transient, DuplicateTransient
		struct FBlackboardKeySelector                              TargetActorKey;                                          // 0x00B0(0x0028) Edit, BlueprintVisible
		struct FBlackboardKeySelector                              LastTargetActorKey;                                      // 0x00D8(0x0028) Edit, BlueprintVisible
		struct FBlackboardKeySelector                              IsCombatTargetKey;                                       // 0x0100(0x0028) Edit, BlueprintVisible
		struct FBlackboardKeySelector                              WanderCountKey;                                          // 0x0128(0x0028) Edit, BlueprintVisible

	public:
		void ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn);
		void ExecuteUbergraph_BTT_ClearTargetActor(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
