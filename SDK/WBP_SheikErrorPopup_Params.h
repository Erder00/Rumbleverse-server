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
	 * Function WBP_SheikErrorPopup.WBP_SheikErrorPopup_C.PlayShowAnim
	 */
	struct UWBP_SheikErrorPopup_C_PlayShowAnim_Params
	{	};

	/**
	 * Function WBP_SheikErrorPopup.WBP_SheikErrorPopup_C.SetHeaderText
	 */
	struct UWBP_SheikErrorPopup_C_SetHeaderText_Params
	{
	public:
		class FText                                                HeaderText;                                              // 0x0000(0x0018)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function WBP_SheikErrorPopup.WBP_SheikErrorPopup_C.SetDimBackground
	 */
	struct UWBP_SheikErrorPopup_C_SetDimBackground_Params
	{
	public:
		bool                                                       DimBackground;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_SheikErrorPopup.WBP_SheikErrorPopup_C.AddLegend
	 */
	struct UWBP_SheikErrorPopup_C_AddLegend_Params
	{
	public:
		TArray<struct FLegendData>                                 LegendPrompts;                                           // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	};

	/**
	 * Function WBP_SheikErrorPopup.WBP_SheikErrorPopup_C.SetBodyText
	 */
	struct UWBP_SheikErrorPopup_C_SetBodyText_Params
	{
	public:
		class FText                                                BodyText;                                                // 0x0000(0x0018)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		bool                                                       bUseDefaultFormatting;                                   // 0x0018(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_SheikErrorPopup.WBP_SheikErrorPopup_C.SetErrorCodeText
	 */
	struct UWBP_SheikErrorPopup_C_SetErrorCodeText_Params
	{
	public:
		class FText                                                ErrorCodeText;                                           // 0x0000(0x0018)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function WBP_SheikErrorPopup.WBP_SheikErrorPopup_C.ExecuteUbergraph_WBP_SheikErrorPopup
	 */
	struct UWBP_SheikErrorPopup_C_ExecuteUbergraph_WBP_SheikErrorPopup_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
