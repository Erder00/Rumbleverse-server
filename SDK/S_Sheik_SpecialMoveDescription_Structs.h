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
	 * UserDefinedStruct S_Sheik_SpecialMoveDescription.S_Sheik_SpecialMoveDescription
	 * Size -> 0x0020
	 */
	struct FS_Sheik_SpecialMoveDescription
	{
	public:
		TArray<class FText>                                        DescriptionLines_9_7094D5CA433B5E15822409AB6C3FB4C7;     // 0x0000(0x0010) Edit, BlueprintVisible
		TArray<EIGSpecialMoveEffect>                               SpecialMoveEffectLines_12_3204959B4EB445CBFF502DA7F6605B44; // 0x0010(0x0010) Edit, BlueprintVisible
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
