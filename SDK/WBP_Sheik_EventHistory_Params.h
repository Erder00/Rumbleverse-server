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
	 * Function WBP_Sheik_EventHistory.WBP_Sheik_EventHistory_C.GetPlayerPlatformIcon
	 */
	struct UWBP_Sheik_EventHistory_C_GetPlayerPlatformIcon_Params
	{
	public:
		class APlayerState*                                        Player;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FText                                                PlatformIcon;                                            // 0x0008(0x0018)  (Parm, OutParm)
	};

	/**
	 * Function WBP_Sheik_EventHistory.WBP_Sheik_EventHistory_C.SetupLines
	 */
	struct UWBP_Sheik_EventHistory_C_SetupLines_Params
	{	};

	/**
	 * Function WBP_Sheik_EventHistory.WBP_Sheik_EventHistory_C.IsTeammate
	 */
	struct UWBP_Sheik_EventHistory_C_IsTeammate_Params
	{
	public:
		class APlayerState*                                        Player;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       IsTeammate;                                              // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_C9G5[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function WBP_Sheik_EventHistory.WBP_Sheik_EventHistory_C.OnEventFinished_cb
	 */
	struct UWBP_Sheik_EventHistory_C_OnEventFinished_cb_Params
	{
	public:
		class UIGUI_WidgetBase*                                    Source;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Sheik_EventHistory.WBP_Sheik_EventHistory_C.OnKnockoutOccurred_cb
	 */
	struct UWBP_Sheik_EventHistory_C_OnKnockoutOccurred_cb_Params
	{
	public:
		struct FIGKnockOutData                                     KnockOutData;                                            // 0x0000(0x0030)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	};

	/**
	 * Function WBP_Sheik_EventHistory.WBP_Sheik_EventHistory_C.ConstructOnlyOnce
	 */
	struct UWBP_Sheik_EventHistory_C_ConstructOnlyOnce_Params
	{	};

	/**
	 * Function WBP_Sheik_EventHistory.WBP_Sheik_EventHistory_C.ExecuteUbergraph_WBP_Sheik_EventHistory
	 */
	struct UWBP_Sheik_EventHistory_C_ExecuteUbergraph_WBP_Sheik_EventHistory_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
