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
	 * Function WBP_SheikPopupSystem.WBP_SheikPopupSystem_C.AddNewCustomPopup
	 */
	struct UWBP_SheikPopupSystem_C_AddNewCustomPopup_Params
	{
	public:
		struct FPopupQueueData                                     PopupQueueData;                                          // 0x0000(0x0078)  (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference)
	};

	/**
	 * Function WBP_SheikPopupSystem.WBP_SheikPopupSystem_C.DestroyPopup
	 */
	struct UWBP_SheikPopupSystem_C_DestroyPopup_Params
	{
	public:
		int32_t                                                    ID;                                                      // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_CEGI[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function WBP_SheikPopupSystem.WBP_SheikPopupSystem_C.CreateNewPopup
	 */
	struct UWBP_SheikPopupSystem_C_CreateNewPopup_Params
	{
	public:
		struct FPopupQueueData                                     PopupQueueData;                                          // 0x0000(0x0078)  (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference)
	};

	/**
	 * Function WBP_SheikPopupSystem.WBP_SheikPopupSystem_C.HandleOnPopupInfoUpdated
	 */
	struct UWBP_SheikPopupSystem_C_HandleOnPopupInfoUpdated_Params
	{
	public:
		int32_t                                                    PopupId;                                                 // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_VO53[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function WBP_SheikPopupSystem.WBP_SheikPopupSystem_C.ConstructOnlyOnce
	 */
	struct UWBP_SheikPopupSystem_C_ConstructOnlyOnce_Params
	{	};

	/**
	 * Function WBP_SheikPopupSystem.WBP_SheikPopupSystem_C.ShowPopup
	 */
	struct UWBP_SheikPopupSystem_C_ShowPopup_Params
	{
	public:
		struct FPopupQueueData                                     PopupData;                                               // 0x0000(0x0078)  (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference)
	};

	/**
	 * Function WBP_SheikPopupSystem.WBP_SheikPopupSystem_C.ClosePopup_BP
	 */
	struct UWBP_SheikPopupSystem_C_ClosePopup_BP_Params
	{
	public:
		int32_t                                                    ID;                                                      // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_SheikPopupSystem.WBP_SheikPopupSystem_C.ExecuteUbergraph_WBP_SheikPopupSystem
	 */
	struct UWBP_SheikPopupSystem_C_ExecuteUbergraph_WBP_SheikPopupSystem_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
