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
	 * UserDefinedStruct S_Sheik_SpecialMoveLookupRow.S_Sheik_SpecialMoveLookupRow
	 * Size -> 0x0130
	 */
	struct FS_Sheik_SpecialMoveLookupRow
	{
	public:
		class FText                                                DisplayName_6_7DC8651144995216A0B37E9AC6E07207;          // 0x0000(0x0018) Edit, BlueprintVisible
		TArray<class UTexture2D*>                                  Icon_47_1FF7FBCE454632F48851F0BB8D8AECD0;                // 0x0018(0x0010) Edit, BlueprintVisible
		struct FS_Sheik_SpecialMove_Descriptions                   Description_59_C9D7E8014AD00B6702F3F2A902962CD0;         // 0x0028(0x0060) Edit, BlueprintVisible, HasGetValueTypeHash
		struct FS_Sheik_SpecialMoveStockProperties                 Properties_30_4E32B8834E55C01186B1B2BCA44B7C61;          // 0x0088(0x0010) Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FS_Sheik_SpecialMove_Effects                        Effects_49_DA10F2FC43B619E908AB25BCDE98F6CA;             // 0x0098(0x0030) Edit, BlueprintVisible, HasGetValueTypeHash
		int32_t                                                    Stars_24_0756349D450C09BAC95CF9AA074605AE;               // 0x00C8(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		ESheikMoveType                                             MoveType_42_04342F88403ADC1180E4E6A8420D8601;            // 0x00CC(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_06K0[0x3];                                   // 0x00CD(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class FText>                                        HigherTierDisplayNames_46_28CB5DB9487926E5A5D82E810EE8100D; // 0x00D0(0x0010) Edit, BlueprintVisible
		TMap<EMoveTier, EMoveTier>                                 OverrideDisplayTier_54_588659F64F6B0805E2B264BCE7ABD52C; // 0x00E0(0x0050) Edit, BlueprintVisible
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
