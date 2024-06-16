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
	 * BlueprintGeneratedClass BTD_TargetActorClimbing.BTD_TargetActorClimbing_C
	 * Size -> 0x0052 (FullSize[0x00F2] - InheritedSize[0x00A0])
	 */
	class UBTD_TargetActorClimbing_C : public UBTDecorator_BlueprintBase
	{
	public:
		struct FBlackboardKeySelector                              IsCombatTargetKey;                                       // 0x00A0(0x0028) Edit, BlueprintVisible
		struct FBlackboardKeySelector                              TargetActorKey;                                          // 0x00C8(0x0028) Edit, BlueprintVisible
		bool                                                       ClimbingEscapesCombat;                                   // 0x00F0(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       ClimbingEscapesFlirting;                                 // 0x00F1(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor

	public:
		bool PerformConditionCheckAI(class AAIController* OwnerController, class APawn* ControlledPawn);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
