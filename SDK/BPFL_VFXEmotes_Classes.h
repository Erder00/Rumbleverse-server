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
	 * BlueprintGeneratedClass BPFL_VFXEmotes.BPFL_VFXEmotes_C
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UBPFL_VFXEmotes_C : public UBlueprintFunctionLibrary
	{
	public:
		void BL_TeamPose4End(class UObject* __WorldContext);
		void BL_TeamPose4Start(class USkeletalMeshComponent* SkeletalMesh, EIGBodyType BodyType, class UObject* __WorldContext, class UParticleSystemComponent** PSystem);
		void BL_SetButterflyLanded(class UParticleSystemComponent* PSystem, class UObject* __WorldContext);
		void BL_TeamPose2Stop(class UParticleSystemComponent* PSystem, bool ButterflyLanded, class USkeletalMeshComponent* SkeletalMesh, class UObject* __WorldContext);
		void BL_TeamPose2Start(class USkeletalMeshComponent* SkeletalMesh, class UObject* __WorldContext, class UParticleSystemComponent** PSystem);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
