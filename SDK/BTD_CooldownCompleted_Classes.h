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
	 * BlueprintGeneratedClass BTD_CooldownCompleted.BTD_CooldownCompleted_C
	 * Size -> 0x0050 (FullSize[0x00F0] - InheritedSize[0x00A0])
	 */
	class UBTD_CooldownCompleted_C : public UBTDecorator_BlueprintBase
	{
	public:
		struct FBlackboardKeySelector                              CooldownDurationKey;                                     // 0x00A0(0x0028) Edit, BlueprintVisible
		struct FBlackboardKeySelector                              TimestampKey;                                            // 0x00C8(0x0028) Edit, BlueprintVisible

	public:
		bool PerformConditionCheckAI(class AAIController* OwnerController, class APawn* ControlledPawn);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
