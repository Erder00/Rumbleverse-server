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
	// # Structs
	// --------------------------------------------------
	/**
	 * UserDefinedStruct S_Sheik_SpecialMove_Effects.S_Sheik_SpecialMove_Effects
	 * Size -> 0x0030
	 */
	struct FS_Sheik_SpecialMove_Effects
	{
	public:
		TArray<E_Sheik_SpecialMoveEffect>                          Tier1_8_47081CD246FEC576F895F68D0F304FCD;                // 0x0000(0x0010) Edit, BlueprintVisible
		TArray<E_Sheik_SpecialMoveEffect>                          Tier2_9_9078E85847E2C852579B669F7D6BED7F;                // 0x0010(0x0010) Edit, BlueprintVisible
		TArray<E_Sheik_SpecialMoveEffect>                          Tier3_10_635C72EF45339049D687458E8107D92B;               // 0x0020(0x0010) Edit, BlueprintVisible
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
