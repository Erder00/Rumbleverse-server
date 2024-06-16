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
	 * BlueprintGeneratedClass BTD_IsOTG.BTD_IsOTG_C
	 * Size -> 0x0029 (FullSize[0x00C9] - InheritedSize[0x00A0])
	 */
	class UBTD_IsOTG_C : public UBTDecorator_BlueprintBase
	{
	public:
		struct FBlackboardKeySelector                              TargetActorKey;                                          // 0x00A0(0x0028) Edit, BlueprintVisible
		bool                                                       IncludeDBNO_AsOTG;                                       // 0x00C8(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor

	public:
		bool PerformConditionCheckAI(class AAIController* OwnerController, class APawn* ControlledPawn);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
