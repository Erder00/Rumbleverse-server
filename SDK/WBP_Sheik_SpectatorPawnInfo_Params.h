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
	 * Function WBP_Sheik_SpectatorPawnInfo.WBP_Sheik_SpectatorPawnInfo_C.SetScale
	 */
	struct UWBP_Sheik_SpectatorPawnInfo_C_SetScale_Params
	{
	public:
		float                                                      Scale;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Sheik_SpectatorPawnInfo.WBP_Sheik_SpectatorPawnInfo_C.SetHealthbarVisibility
	 */
	struct UWBP_Sheik_SpectatorPawnInfo_C_SetHealthbarVisibility_Params
	{
	public:
		bool                                                       IsVisible;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_Sheik_SpectatorPawnInfo.WBP_Sheik_SpectatorPawnInfo_C.HandleSpectatorInfoUpdated
	 */
	struct UWBP_Sheik_SpectatorPawnInfo_C_HandleSpectatorInfoUpdated_Params
	{
	public:
		struct FSheikSpectatorInfo                                 SpectatorInfo;                                           // 0x0000(0x00E0)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function WBP_Sheik_SpectatorPawnInfo.WBP_Sheik_SpectatorPawnInfo_C.SetForPlayer
	 */
	struct UWBP_Sheik_SpectatorPawnInfo_C_SetForPlayer_Params
	{
	public:
		class ASheikPlayerStateCommon*                             SheikPlayerState;                                        // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Sheik_SpectatorPawnInfo.WBP_Sheik_SpectatorPawnInfo_C.ConstructOnlyOnce
	 */
	struct UWBP_Sheik_SpectatorPawnInfo_C_ConstructOnlyOnce_Params
	{	};

	/**
	 * Function WBP_Sheik_SpectatorPawnInfo.WBP_Sheik_SpectatorPawnInfo_C.ExecuteUbergraph_WBP_Sheik_SpectatorPawnInfo
	 */
	struct UWBP_Sheik_SpectatorPawnInfo_C_ExecuteUbergraph_WBP_Sheik_SpectatorPawnInfo_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
