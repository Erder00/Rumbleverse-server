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
	 * Function WBP_Sheik_ContextualMenuButton.WBP_Sheik_ContextualMenuButton_C.SetDefaultBG
	 */
	struct UWBP_Sheik_ContextualMenuButton_C_SetDefaultBG_Params
	{	};

	/**
	 * Function WBP_Sheik_ContextualMenuButton.WBP_Sheik_ContextualMenuButton_C.PreConstruct
	 */
	struct UWBP_Sheik_ContextualMenuButton_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_Sheik_ContextualMenuButton.WBP_Sheik_ContextualMenuButton_C.ConstructOnlyOnce
	 */
	struct UWBP_Sheik_ContextualMenuButton_C_ConstructOnlyOnce_Params
	{	};

	/**
	 * Function WBP_Sheik_ContextualMenuButton.WBP_Sheik_ContextualMenuButton_C.OnGainFocus
	 */
	struct UWBP_Sheik_ContextualMenuButton_C_OnGainFocus_Params
	{
	public:
		int32_t                                                    UserIndex;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Sheik_ContextualMenuButton.WBP_Sheik_ContextualMenuButton_C.OnLoseFocus
	 */
	struct UWBP_Sheik_ContextualMenuButton_C_OnLoseFocus_Params
	{
	public:
		int32_t                                                    UserIndex;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Sheik_ContextualMenuButton.WBP_Sheik_ContextualMenuButton_C.OnSelected
	 */
	struct UWBP_Sheik_ContextualMenuButton_C_OnSelected_Params
	{
	public:
		int32_t                                                    UserIndex;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Sheik_ContextualMenuButton.WBP_Sheik_ContextualMenuButton_C.ExecuteUbergraph_WBP_Sheik_ContextualMenuButton
	 */
	struct UWBP_Sheik_ContextualMenuButton_C_ExecuteUbergraph_WBP_Sheik_ContextualMenuButton_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
