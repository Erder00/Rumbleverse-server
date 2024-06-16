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
	 * Function WBP_Sheik_MultiToggleIndicatorContainer.WBP_Sheik_MultiToggleIndicatorContainer_C.HideIndicatorAtIndex
	 */
	struct UWBP_Sheik_MultiToggleIndicatorContainer_C_HideIndicatorAtIndex_Params
	{
	public:
		int32_t                                                    IndexToHide;                                             // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Sheik_MultiToggleIndicatorContainer.WBP_Sheik_MultiToggleIndicatorContainer_C.RemoveOption
	 */
	struct UWBP_Sheik_MultiToggleIndicatorContainer_C_RemoveOption_Params
	{
	public:
		int32_t                                                    OptionIndex;                                             // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Sheik_MultiToggleIndicatorContainer.WBP_Sheik_MultiToggleIndicatorContainer_C.SelectedOptionChanged
	 */
	struct UWBP_Sheik_MultiToggleIndicatorContainer_C_SelectedOptionChanged_Params
	{
	public:
		int32_t                                                    OldOptionIndex;                                          // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    NewOptionIndex;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Sheik_MultiToggleIndicatorContainer.WBP_Sheik_MultiToggleIndicatorContainer_C.Construct Indicators
	 */
	struct UWBP_Sheik_MultiToggleIndicatorContainer_C_ConstructIndicators_Params
	{
	public:
		int32_t                                                    NumOptions;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       ShouldHideIndicator;                                     // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_66K5[0x3];                                   // 0x0005(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
