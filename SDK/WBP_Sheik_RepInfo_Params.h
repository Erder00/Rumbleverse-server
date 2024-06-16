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
	 * Function WBP_Sheik_RepInfo.WBP_Sheik_RepInfo_C.SetText
	 */
	struct UWBP_Sheik_RepInfo_C_SetText_Params
	{
	public:
		class FText                                                RepName;                                                 // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		class FText                                                RepDescription;                                          // 0x0018(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function WBP_Sheik_RepInfo.WBP_Sheik_RepInfo_C.ConstructOnlyOnce
	 */
	struct UWBP_Sheik_RepInfo_C_ConstructOnlyOnce_Params
	{	};

	/**
	 * Function WBP_Sheik_RepInfo.WBP_Sheik_RepInfo_C.ExecuteUbergraph_WBP_Sheik_RepInfo
	 */
	struct UWBP_Sheik_RepInfo_C_ExecuteUbergraph_WBP_Sheik_RepInfo_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
