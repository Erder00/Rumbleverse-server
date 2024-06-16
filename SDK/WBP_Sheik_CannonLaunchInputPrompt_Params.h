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
	 * Function WBP_Sheik_CannonLaunchInputPrompt.WBP_Sheik_CannonLaunchInputPrompt_C.OnCannonFired_cb
	 */
	struct UWBP_Sheik_CannonLaunchInputPrompt_C_OnCannonFired_cb_Params
	{	};

	/**
	 * Function WBP_Sheik_CannonLaunchInputPrompt.WBP_Sheik_CannonLaunchInputPrompt_C.OnCannonIsAiming_cb
	 */
	struct UWBP_Sheik_CannonLaunchInputPrompt_C_OnCannonIsAiming_cb_Params
	{
	public:
		bool                                                       IsAimingCannon;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_MKM9[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function WBP_Sheik_CannonLaunchInputPrompt.WBP_Sheik_CannonLaunchInputPrompt_C.OnLaunchInputPressed
	 */
	struct UWBP_Sheik_CannonLaunchInputPrompt_C_OnLaunchInputPressed_Params
	{	};

	/**
	 * Function WBP_Sheik_CannonLaunchInputPrompt.WBP_Sheik_CannonLaunchInputPrompt_C.ConstructOnlyOnce
	 */
	struct UWBP_Sheik_CannonLaunchInputPrompt_C_ConstructOnlyOnce_Params
	{	};

	/**
	 * Function WBP_Sheik_CannonLaunchInputPrompt.WBP_Sheik_CannonLaunchInputPrompt_C.ExecuteUbergraph_WBP_Sheik_CannonLaunchInputPrompt
	 */
	struct UWBP_Sheik_CannonLaunchInputPrompt_C_ExecuteUbergraph_WBP_Sheik_CannonLaunchInputPrompt_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_CDGI[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
