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
	 * BlueprintGeneratedClass BTD_InAttackRange.BTD_InAttackRange_C
	 * Size -> 0x0054 (FullSize[0x00F4] - InheritedSize[0x00A0])
	 */
	class UBTD_InAttackRange_C : public UBTDecorator_BlueprintBase
	{
	public:
		struct FBlackboardKeySelector                              TargetActorKey;                                          // 0x00A0(0x0028) Edit, BlueprintVisible
		struct FBlackboardKeySelector                              ChosenAttackRangeKey;                                    // 0x00C8(0x0028) Edit, BlueprintVisible
		float                                                      MaxVerticalAttackRange;                                  // 0x00F0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		bool PerformConditionCheckAI(class AAIController* OwnerController, class APawn* ControlledPawn);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
