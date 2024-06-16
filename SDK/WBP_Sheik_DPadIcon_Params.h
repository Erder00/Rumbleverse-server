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
	 * Function WBP_Sheik_DPadIcon.WBP_Sheik_DPadIcon_C.SetIconVisibility
	 */
	struct UWBP_Sheik_DPadIcon_C_SetIconVisibility_Params
	{
	public:
		bool                                                       Visible;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_Sheik_DPadIcon.WBP_Sheik_DPadIcon_C.SetImageByDirection
	 */
	struct UWBP_Sheik_DPadIcon_C_SetImageByDirection_Params
	{	};

	/**
	 * Function WBP_Sheik_DPadIcon.WBP_Sheik_DPadIcon_C.PreConstruct
	 */
	struct UWBP_Sheik_DPadIcon_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_Sheik_DPadIcon.WBP_Sheik_DPadIcon_C.ExecuteUbergraph_WBP_Sheik_DPadIcon
	 */
	struct UWBP_Sheik_DPadIcon_C_ExecuteUbergraph_WBP_Sheik_DPadIcon_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
