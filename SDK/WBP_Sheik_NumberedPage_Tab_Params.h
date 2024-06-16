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
	 * Function WBP_Sheik_NumberedPage_Tab.WBP_Sheik_NumberedPage_Tab_C.HandleFocus
	 */
	struct UWBP_Sheik_NumberedPage_Tab_C_HandleFocus_Params
	{
	public:
		bool                                                       IsFocused;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_O2NX[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function WBP_Sheik_NumberedPage_Tab.WBP_Sheik_NumberedPage_Tab_C.SetPageNumber
	 */
	struct UWBP_Sheik_NumberedPage_Tab_C_SetPageNumber_Params
	{
	public:
		int32_t                                                    InPageNumber;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_9YSX[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function WBP_Sheik_NumberedPage_Tab.WBP_Sheik_NumberedPage_Tab_C.SetNumberVisibility
	 */
	struct UWBP_Sheik_NumberedPage_Tab_C_SetNumberVisibility_Params
	{
	public:
		bool                                                       Visible;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_Sheik_NumberedPage_Tab.WBP_Sheik_NumberedPage_Tab_C.Set Active Tab
	 */
	struct UWBP_Sheik_NumberedPage_Tab_C_SetActiveTab_Params
	{
	public:
		bool                                                       IsActive;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_651O[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function WBP_Sheik_NumberedPage_Tab.WBP_Sheik_NumberedPage_Tab_C.ConstructOnlyOnce
	 */
	struct UWBP_Sheik_NumberedPage_Tab_C_ConstructOnlyOnce_Params
	{	};

	/**
	 * Function WBP_Sheik_NumberedPage_Tab.WBP_Sheik_NumberedPage_Tab_C.OnSelected
	 */
	struct UWBP_Sheik_NumberedPage_Tab_C_OnSelected_Params
	{
	public:
		int32_t                                                    UserIndex;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Sheik_NumberedPage_Tab.WBP_Sheik_NumberedPage_Tab_C.OnGainFocus
	 */
	struct UWBP_Sheik_NumberedPage_Tab_C_OnGainFocus_Params
	{
	public:
		int32_t                                                    UserIndex;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Sheik_NumberedPage_Tab.WBP_Sheik_NumberedPage_Tab_C.OnLoseFocus
	 */
	struct UWBP_Sheik_NumberedPage_Tab_C_OnLoseFocus_Params
	{
	public:
		int32_t                                                    UserIndex;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Sheik_NumberedPage_Tab.WBP_Sheik_NumberedPage_Tab_C.ExecuteUbergraph_WBP_Sheik_NumberedPage_Tab
	 */
	struct UWBP_Sheik_NumberedPage_Tab_C_ExecuteUbergraph_WBP_Sheik_NumberedPage_Tab_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Sheik_NumberedPage_Tab.WBP_Sheik_NumberedPage_Tab_C.PageTabSelected__DelegateSignature
	 */
	struct UWBP_Sheik_NumberedPage_Tab_C_PageTabSelected__DelegateSignature_Params
	{
	public:
		int32_t                                                    PageNumber;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
