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
	 * BlueprintGeneratedClass BucketContainerT3.BucketContainerT3_C
	 * Size -> 0x0008 (FullSize[0x0808] - InheritedSize[0x0800])
	 */
	class ABucketContainerT3_C : public ABP_IGWeaponContainer_Parent_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0800(0x0008) ZeroConstructor, Transient, DuplicateTransient

	public:
		void OnWeaponContainerHit_BP(bool bWasSuccessfulHit);
		void ExecuteUbergraph_BucketContainerT3(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
