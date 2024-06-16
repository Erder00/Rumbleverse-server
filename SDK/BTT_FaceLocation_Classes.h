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
	 * BlueprintGeneratedClass BTT_FaceLocation.BTT_FaceLocation_C
	 * Size -> 0x0029 (FullSize[0x00D1] - InheritedSize[0x00A8])
	 */
	class UBTT_FaceLocation_C : public UBTTask_BlueprintBase
	{
	public:
		struct FBlackboardKeySelector                              LocationKey;                                             // 0x00A8(0x0028) Edit, BlueprintVisible
		bool                                                       WantRandomFacing;                                        // 0x00D0(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor

	public:
		void ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn);
		void GetYawDelta(class APawn* Bot, const struct FVector& TargetLocation, float* YawDelta, bool* IsNonzero);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
