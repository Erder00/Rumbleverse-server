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
	 * BlueprintGeneratedClass BTD_ChooseAttack.BTD_ChooseAttack_C
	 * Size -> 0x00A0 (FullSize[0x0140] - InheritedSize[0x00A0])
	 */
	class UBTD_ChooseAttack_C : public UBTDecorator_BlueprintBase
	{
	public:
		struct FBlackboardKeySelector                              ChosenAttackKey;                                         // 0x00A0(0x0028) Edit, BlueprintVisible
		struct FBlackboardKeySelector                              ChosenAttackRangeKey;                                    // 0x00C8(0x0028) Edit, BlueprintVisible
		struct FBlackboardKeySelector                              MissTypeKey;                                             // 0x00F0(0x0028) Edit, BlueprintVisible
		struct FBlackboardKeySelector                              TargetActorKey;                                          // 0x0118(0x0028) Edit, BlueprintVisible

	public:
		void ChooseAttack(class ASheikCharacterAIController_BP_C* AIController, bool TargetKnockedDown, bool* AttackChosen);
		bool PerformConditionCheckAI(class AAIController* OwnerController, class APawn* ControlledPawn);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
