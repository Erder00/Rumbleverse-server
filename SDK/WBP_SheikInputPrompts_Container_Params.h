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
	 * Function WBP_SheikInputPrompts_Container.WBP_SheikInputPrompts_Container_C.UpdateSnowballFightInputPrompts
	 */
	struct UWBP_SheikInputPrompts_Container_C_UpdateSnowballFightInputPrompts_Params
	{	};

	/**
	 * Function WBP_SheikInputPrompts_Container.WBP_SheikInputPrompts_Container_C.GetIsSnowballFight
	 */
	struct UWBP_SheikInputPrompts_Container_C_GetIsSnowballFight_Params
	{
	public:
		bool                                                       IsSnowballFight;                                         // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_D9F2[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function WBP_SheikInputPrompts_Container.WBP_SheikInputPrompts_Container_C.UpdateDodgeControls
	 */
	struct UWBP_SheikInputPrompts_Container_C_UpdateDodgeControls_Params
	{
	public:
		EInputSource                                               InputSource;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_SheikInputPrompts_Container.WBP_SheikInputPrompts_Container_C.ConstructOnlyOnce
	 */
	struct UWBP_SheikInputPrompts_Container_C_ConstructOnlyOnce_Params
	{	};

	/**
	 * Function WBP_SheikInputPrompts_Container.WBP_SheikInputPrompts_Container_C.OnInputSourceChanged
	 */
	struct UWBP_SheikInputPrompts_Container_C_OnInputSourceChanged_Params
	{
	public:
		struct FUserControllerData                                 OldInputSource;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
		struct FUserControllerData                                 NewInputSource;                                          // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	};

	/**
	 * Function WBP_SheikInputPrompts_Container.WBP_SheikInputPrompts_Container_C.ExecuteUbergraph_WBP_SheikInputPrompts_Container
	 */
	struct UWBP_SheikInputPrompts_Container_C_ExecuteUbergraph_WBP_SheikInputPrompts_Container_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
