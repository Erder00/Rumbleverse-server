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
	 * Function WBP_PlaygroundServerNotification.WBP_PlaygroundServerNotification_C.Construct
	 */
	struct UWBP_PlaygroundServerNotification_C_Construct_Params
	{	};

	/**
	 * Function WBP_PlaygroundServerNotification.WBP_PlaygroundServerNotification_C.ShowWarning
	 */
	struct UWBP_PlaygroundServerNotification_C_ShowWarning_Params
	{
	public:
		int32_t                                                    Seconds;                                                 // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_PlaygroundServerNotification.WBP_PlaygroundServerNotification_C.ExecuteUbergraph_WBP_PlaygroundServerNotification
	 */
	struct UWBP_PlaygroundServerNotification_C_ExecuteUbergraph_WBP_PlaygroundServerNotification_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
