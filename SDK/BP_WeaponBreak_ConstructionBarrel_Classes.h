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
	 * BlueprintGeneratedClass BP_WeaponBreak_ConstructionBarrel.BP_WeaponBreak_ConstructionBarrel_C
	 * Size -> 0x000C (FullSize[0x02A0] - InheritedSize[0x0294])
	 */
	class ABP_WeaponBreak_ConstructionBarrel_C : public ABP_VFXPhysActor_Parent_C
	{
	public:
		unsigned char                                              UnknownData_S6FM[0x4];                                   // 0x0294(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0298(0x0008) ZeroConstructor, Transient, DuplicateTransient

	public:
		void OnRemovedFromPool();
		void ExecuteUbergraph_BP_WeaponBreak_ConstructionBarrel(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
