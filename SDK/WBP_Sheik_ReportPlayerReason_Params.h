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
	 * Function WBP_Sheik_ReportPlayerReason.WBP_Sheik_ReportPlayerReason_C.ClearCheckmark
	 */
	struct UWBP_Sheik_ReportPlayerReason_C_ClearCheckmark_Params
	{	};

	/**
	 * Function WBP_Sheik_ReportPlayerReason.WBP_Sheik_ReportPlayerReason_C.HandleSelected
	 */
	struct UWBP_Sheik_ReportPlayerReason_C_HandleSelected_Params
	{	};

	/**
	 * Function WBP_Sheik_ReportPlayerReason.WBP_Sheik_ReportPlayerReason_C.HandleFocus
	 */
	struct UWBP_Sheik_ReportPlayerReason_C_HandleFocus_Params
	{
	public:
		bool                                                       SkipAnimations;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       IsFocused;                                               // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_Sheik_ReportPlayerReason.WBP_Sheik_ReportPlayerReason_C.PreConstruct
	 */
	struct UWBP_Sheik_ReportPlayerReason_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_Sheik_ReportPlayerReason.WBP_Sheik_ReportPlayerReason_C.OnGainFocus
	 */
	struct UWBP_Sheik_ReportPlayerReason_C_OnGainFocus_Params
	{
	public:
		int32_t                                                    UserIndex;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Sheik_ReportPlayerReason.WBP_Sheik_ReportPlayerReason_C.OnLoseFocus
	 */
	struct UWBP_Sheik_ReportPlayerReason_C_OnLoseFocus_Params
	{
	public:
		int32_t                                                    UserIndex;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Sheik_ReportPlayerReason.WBP_Sheik_ReportPlayerReason_C.OnSelected
	 */
	struct UWBP_Sheik_ReportPlayerReason_C_OnSelected_Params
	{
	public:
		int32_t                                                    UserIndex;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Sheik_ReportPlayerReason.WBP_Sheik_ReportPlayerReason_C.ConstructOnlyOnce
	 */
	struct UWBP_Sheik_ReportPlayerReason_C_ConstructOnlyOnce_Params
	{	};

	/**
	 * Function WBP_Sheik_ReportPlayerReason.WBP_Sheik_ReportPlayerReason_C.ExecuteUbergraph_WBP_Sheik_ReportPlayerReason
	 */
	struct UWBP_Sheik_ReportPlayerReason_C_ExecuteUbergraph_WBP_Sheik_ReportPlayerReason_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Sheik_ReportPlayerReason.WBP_Sheik_ReportPlayerReason_C.UpdateReportReason__DelegateSignature
	 */
	struct UWBP_Sheik_ReportPlayerReason_C_UpdateReportReason__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
