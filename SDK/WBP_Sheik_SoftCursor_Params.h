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
	 * Function WBP_Sheik_SoftCursor.WBP_Sheik_SoftCursor_C.OnInputSourceChanged
	 */
	struct UWBP_Sheik_SoftCursor_C_OnInputSourceChanged_Params
	{
	public:
		struct FUserControllerData                                 OldInputSource;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
		struct FUserControllerData                                 NewInputSource;                                          // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	};

	/**
	 * Function WBP_Sheik_SoftCursor.WBP_Sheik_SoftCursor_C.ConstructOnlyOnce
	 */
	struct UWBP_Sheik_SoftCursor_C_ConstructOnlyOnce_Params
	{	};

	/**
	 * Function WBP_Sheik_SoftCursor.WBP_Sheik_SoftCursor_C.OnAllowCursorChanged
	 */
	struct UWBP_Sheik_SoftCursor_C_OnAllowCursorChanged_Params
	{
	public:
		bool                                                       UseMenuInput;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_Sheik_SoftCursor.WBP_Sheik_SoftCursor_C.RefreshCursorVisibility
	 */
	struct UWBP_Sheik_SoftCursor_C_RefreshCursorVisibility_Params
	{	};

	/**
	 * Function WBP_Sheik_SoftCursor.WBP_Sheik_SoftCursor_C.ExecuteUbergraph_WBP_Sheik_SoftCursor
	 */
	struct UWBP_Sheik_SoftCursor_C_ExecuteUbergraph_WBP_Sheik_SoftCursor_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
