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
	 * Function BPFL_SheikPlayerAccounts.BPFL_SheikPlayerAccounts_C.PrintSocialEntry
	 */
	struct UBPFL_SheikPlayerAccounts_C_PrintSocialEntry_Params
	{
	public:
		struct FSheikPlayerSocialEntry                             SocialEntry;                                             // 0x0000(0x03C8)  (BlueprintVisible, BlueprintReadOnly, Parm)
		class UObject*                                             __WorldContext;                                          // 0x03C8(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPFL_SheikPlayerAccounts.BPFL_SheikPlayerAccounts_C.GetServicePlatformImage
	 */
	struct UBPFL_SheikPlayerAccounts_C_GetServicePlatformImage_Params
	{
	public:
		ESheikPlatformService                                      Service;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_7BYH[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UObject*                                             __WorldContext;                                          // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FSlateBrush                                         Brush;                                                   // 0x0010(0x0088)  (Parm, OutParm)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
