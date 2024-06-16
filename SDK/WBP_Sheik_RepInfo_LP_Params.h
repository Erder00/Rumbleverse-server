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
	 * Function WBP_Sheik_RepInfo_LP.WBP_Sheik_RepInfo_LP_C.SetTextColor
	 */
	struct UWBP_Sheik_RepInfo_LP_C_SetTextColor_Params
	{
	public:
		struct FSlateColor                                         InColorAndOpacity;                                       // 0x0000(0x0028)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function WBP_Sheik_RepInfo_LP.WBP_Sheik_RepInfo_LP_C.SetText
	 */
	struct UWBP_Sheik_RepInfo_LP_C_SetText_Params
	{
	public:
		class FText                                                RepProgressText;                                         // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function WBP_Sheik_RepInfo_LP.WBP_Sheik_RepInfo_LP_C.ConstructOnlyOnce
	 */
	struct UWBP_Sheik_RepInfo_LP_C_ConstructOnlyOnce_Params
	{	};

	/**
	 * Function WBP_Sheik_RepInfo_LP.WBP_Sheik_RepInfo_LP_C.ExecuteUbergraph_WBP_Sheik_RepInfo_LP
	 */
	struct UWBP_Sheik_RepInfo_LP_C_ExecuteUbergraph_WBP_Sheik_RepInfo_LP_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
