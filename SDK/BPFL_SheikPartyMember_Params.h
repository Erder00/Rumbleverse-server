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
	 * Function BPFL_SheikPartyMember.BPFL_SheikPartyMember_C.GetColorByPartyID
	 */
	struct UBPFL_SheikPartyMember_C_GetColorByPartyID_Params
	{
	public:
		int32_t                                                    PartyMemberID;                                           // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_36F6[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UObject*                                             __WorldContext;                                          // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FSlateColor                                         PartySlateColor;                                         // 0x0010(0x0028)  (Parm, OutParm)
		struct FLinearColor                                        PartyLinearColor;                                        // 0x0038(0x0010)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPFL_SheikPartyMember.BPFL_SheikPartyMember_C.FindFloatAttribute
	 */
	struct UBPFL_SheikPartyMember_C_FindFloatAttribute_Params
	{
	public:
		struct FPartyMemberInfo                                    PartyMember;                                             // 0x0000(0x0090)  (BlueprintVisible, BlueprintReadOnly, Parm)
		class FString                                              AttributeName;                                           // 0x0090(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		class UObject*                                             __WorldContext;                                          // 0x00A0(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      Value;                                                   // 0x00A8(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bFound;                                                  // 0x00AC(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_B1Y6[0x3];                                   // 0x00AD(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BPFL_SheikPartyMember.BPFL_SheikPartyMember_C.ResolvePlatformImage
	 */
	struct UBPFL_SheikPartyMember_C_ResolvePlatformImage_Params
	{
	public:
		struct FPartyMemberInfo                                    PartyMember;                                             // 0x0000(0x0090)  (BlueprintVisible, BlueprintReadOnly, Parm)
		class UObject*                                             __WorldContext;                                          // 0x0090(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FSlateBrush                                         Brush;                                                   // 0x0098(0x0088)  (Parm, OutParm)
	};

	/**
	 * Function BPFL_SheikPartyMember.BPFL_SheikPartyMember_C.FindStringAttribute
	 */
	struct UBPFL_SheikPartyMember_C_FindStringAttribute_Params
	{
	public:
		struct FPartyMemberInfo                                    PartyMember;                                             // 0x0000(0x0090)  (BlueprintVisible, BlueprintReadOnly, Parm)
		class FString                                              AttributeName;                                           // 0x0090(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		class UObject*                                             __WorldContext;                                          // 0x00A0(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FString                                              Value;                                                   // 0x00A8(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
		bool                                                       bFound;                                                  // 0x00B8(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_PHCP[0x3];                                   // 0x00B9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
