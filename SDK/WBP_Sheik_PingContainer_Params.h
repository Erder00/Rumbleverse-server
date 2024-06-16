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
	 * Function WBP_Sheik_PingContainer.WBP_Sheik_PingContainer_C.GetAdvancedPingingEnabled
	 */
	struct UWBP_Sheik_PingContainer_C_GetAdvancedPingingEnabled_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_6V5H[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function WBP_Sheik_PingContainer.WBP_Sheik_PingContainer_C.ClearAllPings
	 */
	struct UWBP_Sheik_PingContainer_C_ClearAllPings_Params
	{	};

	/**
	 * Function WBP_Sheik_PingContainer.WBP_Sheik_PingContainer_C.GetUnusedPingWidget
	 */
	struct UWBP_Sheik_PingContainer_C_GetUnusedPingWidget_Params
	{
	public:
		class UWBP_Sheik_Ping_C*                                   PingWidget;                                              // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Sheik_PingContainer.WBP_Sheik_PingContainer_C.PingExpired
	 */
	struct UWBP_Sheik_PingContainer_C_PingExpired_Params
	{
	public:
		int32_t                                                    PartyMemberID;                                           // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_EP4J[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function WBP_Sheik_PingContainer.WBP_Sheik_PingContainer_C.PingCreated
	 */
	struct UWBP_Sheik_PingContainer_C_PingCreated_Params
	{
	public:
		EIGPingType                                                PingType;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_E010[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    PartyMemberID;                                           // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             PingLocation;                                            // 0x0008(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             PingNormal;                                              // 0x0014(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Sheik_PingContainer.WBP_Sheik_PingContainer_C.ConstructOnlyOnce
	 */
	struct UWBP_Sheik_PingContainer_C_ConstructOnlyOnce_Params
	{	};

	/**
	 * Function WBP_Sheik_PingContainer.WBP_Sheik_PingContainer_C.OnPlayerFollowingChanged
	 */
	struct UWBP_Sheik_PingContainer_C_OnPlayerFollowingChanged_Params
	{
	public:
		bool                                                       IsFollowingPlayer;                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_Sheik_PingContainer.WBP_Sheik_PingContainer_C.ExecuteUbergraph_WBP_Sheik_PingContainer
	 */
	struct UWBP_Sheik_PingContainer_C_ExecuteUbergraph_WBP_Sheik_PingContainer_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
