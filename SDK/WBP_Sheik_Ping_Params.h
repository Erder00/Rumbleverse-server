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
	 * Function WBP_Sheik_Ping.WBP_Sheik_Ping_C.UpdateArrowVisibility
	 */
	struct UWBP_Sheik_Ping_C_UpdateArrowVisibility_Params
	{
	public:
		ESheikPingDirection                                        PingDirection;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Sheik_Ping.WBP_Sheik_Ping_C.UpdateScreenLocation
	 */
	struct UWBP_Sheik_Ping_C_UpdateScreenLocation_Params
	{	};

	/**
	 * Function WBP_Sheik_Ping.WBP_Sheik_Ping_C.Hide
	 */
	struct UWBP_Sheik_Ping_C_Hide_Params
	{	};

	/**
	 * Function WBP_Sheik_Ping.WBP_Sheik_Ping_C.SetColorAndLocation
	 */
	struct UWBP_Sheik_Ping_C_SetColorAndLocation_Params
	{
	public:
		int32_t                                                    PartyMemberID;                                           // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             PingLocation;                                            // 0x0004(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Sheik_Ping.WBP_Sheik_Ping_C.ConstructOnlyOnce
	 */
	struct UWBP_Sheik_Ping_C_ConstructOnlyOnce_Params
	{	};

	/**
	 * Function WBP_Sheik_Ping.WBP_Sheik_Ping_C.Tick
	 */
	struct UWBP_Sheik_Ping_C_Tick_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		float                                                      InDeltaTime;                                             // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Sheik_Ping.WBP_Sheik_Ping_C.ExecuteUbergraph_WBP_Sheik_Ping
	 */
	struct UWBP_Sheik_Ping_C_ExecuteUbergraph_WBP_Sheik_Ping_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
