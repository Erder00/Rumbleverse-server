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
	 * BlueprintGeneratedClass BTD_TargetActorStatusChangeRequired.BTD_TargetActorStatusChangeRequired_C
	 * Size -> 0x007C (FullSize[0x011C] - InheritedSize[0x00A0])
	 */
	class UBTD_TargetActorStatusChangeRequired_C : public UBTDecorator_BlueprintBase
	{
	public:
		struct FBlackboardKeySelector                              IsCombatTargetKey;                                       // 0x00A0(0x0028) Edit, BlueprintVisible
		struct FBlackboardKeySelector                              TargetActorKey;                                          // 0x00C8(0x0028) Edit, BlueprintVisible
		struct FBlackboardKeySelector                              TimeTargetActorChosenKey;                                // 0x00F0(0x0028) Edit, BlueprintVisible
		float                                                      MaxTimeBetweenHits;                                      // 0x0118(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		bool PerformConditionCheckAI(class AAIController* OwnerController, class APawn* ControlledPawn);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
