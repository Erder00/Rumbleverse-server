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
	 * BlueprintGeneratedClass BTD_ShouldPerformSpecial.BTD_ShouldPerformSpecial_C
	 * Size -> 0x0080 (FullSize[0x0120] - InheritedSize[0x00A0])
	 */
	class UBTD_ShouldPerformSpecial_C : public UBTDecorator_BlueprintBase
	{
	public:
		bool                                                       CheckPerformLeft;                                        // 0x00A0(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_OJG3[0x7];                                   // 0x00A1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FBlackboardKeySelector                              LeftSpecialEquippedKey;                                  // 0x00A8(0x0028) Edit, BlueprintVisible
		struct FBlackboardKeySelector                              RightSpecialEquippedKey;                                 // 0x00D0(0x0028) Edit, BlueprintVisible
		struct FBlackboardKeySelector                              ShouldPerformLeftKey;                                    // 0x00F8(0x0028) Edit, BlueprintVisible

	public:
		bool PerformConditionCheckAI(class AAIController* OwnerController, class APawn* ControlledPawn);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
