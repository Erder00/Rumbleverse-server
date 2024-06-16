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
	 * Function BFL_Sheik_InputBindings.BFL_Sheik_InputBindings_C.GetPlatformDefaultGamepad
	 */
	struct UBFL_Sheik_InputBindings_C_GetPlatformDefaultGamepad_Params
	{
	public:
		ESheikPlatform                                             Platform;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_U02B[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UObject*                                             __WorldContext;                                          // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		EInputSource                                               Out;                                                     // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BFL_Sheik_InputBindings.BFL_Sheik_InputBindings_C.GetKeysForComboAction
	 */
	struct UBFL_Sheik_InputBindings_C_GetKeysForComboAction_Params
	{
	public:
		class FName                                                InActionName;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UObject*                                             __WorldContext;                                          // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		TArray<class FName>                                        Out;                                                     // 0x0010(0x0010)  (Parm, OutParm)
	};

	/**
	 * Function BFL_Sheik_InputBindings.BFL_Sheik_InputBindings_C.IsComboAction
	 */
	struct UBFL_Sheik_InputBindings_C_IsComboAction_Params
	{
	public:
		class FName                                                InActionName;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UObject*                                             __WorldContext;                                          // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       Out;                                                     // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BFL_Sheik_InputBindings.BFL_Sheik_InputBindings_C.GetSecondaryKeyFromBoundKeyInfo
	 */
	struct UBFL_Sheik_InputBindings_C_GetSecondaryKeyFromBoundKeyInfo_Params
	{
	public:
		struct FBoundKeyInfo                                       InBoundInfo;                                             // 0x0000(0x0020)  (BlueprintVisible, BlueprintReadOnly, Parm)
		class UObject*                                             __WorldContext;                                          // 0x0020(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FKey                                                OutKey;                                                  // 0x0028(0x0018)  (Parm, OutParm, HasGetValueTypeHash)
	};

	/**
	 * Function BFL_Sheik_InputBindings.BFL_Sheik_InputBindings_C.GetPrimaryKeyFromBoundKeyInfo
	 */
	struct UBFL_Sheik_InputBindings_C_GetPrimaryKeyFromBoundKeyInfo_Params
	{
	public:
		struct FBoundKeyInfo                                       InBoundInfo;                                             // 0x0000(0x0020)  (BlueprintVisible, BlueprintReadOnly, Parm)
		class UObject*                                             __WorldContext;                                          // 0x0020(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FKey                                                OutKey;                                                  // 0x0028(0x0018)  (Parm, OutParm, HasGetValueTypeHash)
	};

	/**
	 * Function BFL_Sheik_InputBindings.BFL_Sheik_InputBindings_C.GetDisplayNameForAction
	 */
	struct UBFL_Sheik_InputBindings_C_GetDisplayNameForAction_Params
	{
	public:
		class FName                                                InActionName;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UObject*                                             __WorldContext;                                          // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FText                                                OutDisplayName;                                          // 0x0010(0x0018)  (Parm, OutParm)
	};

	/**
	 * Function BFL_Sheik_InputBindings.BFL_Sheik_InputBindings_C.IsKeyBannedFromAssignment
	 */
	struct UBFL_Sheik_InputBindings_C_IsKeyBannedFromAssignment_Params
	{
	public:
		struct FKey                                                InKey;                                                   // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
		class UObject*                                             __WorldContext;                                          // 0x0018(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       OutBanned;                                               // 0x0020(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_ATDV[0x7];                                   // 0x0021(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
