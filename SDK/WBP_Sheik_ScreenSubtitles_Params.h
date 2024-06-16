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
	 * Function WBP_Sheik_ScreenSubtitles.WBP_Sheik_ScreenSubtitles_C.OnSetSubtitleText_cb
	 */
	struct UWBP_Sheik_ScreenSubtitles_C_OnSetSubtitleText_cb_Params
	{
	public:
		class FText                                                SubtitleText;                                            // 0x0000(0x0018)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function WBP_Sheik_ScreenSubtitles.WBP_Sheik_ScreenSubtitles_C.Construct
	 */
	struct UWBP_Sheik_ScreenSubtitles_C_Construct_Params
	{	};

	/**
	 * Function WBP_Sheik_ScreenSubtitles.WBP_Sheik_ScreenSubtitles_C.ExecuteUbergraph_WBP_Sheik_ScreenSubtitles
	 */
	struct UWBP_Sheik_ScreenSubtitles_C_ExecuteUbergraph_WBP_Sheik_ScreenSubtitles_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_ZDAT[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
