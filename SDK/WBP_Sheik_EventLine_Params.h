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
	 * Function WBP_Sheik_EventLine.WBP_Sheik_EventLine_C.GetEventText
	 */
	struct UWBP_Sheik_EventLine_C_GetEventText_Params
	{
	public:
		class FText                                                ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function WBP_Sheik_EventLine.WBP_Sheik_EventLine_C.ShowEventAnimFinished
	 */
	struct UWBP_Sheik_EventLine_C_ShowEventAnimFinished_Params
	{	};

	/**
	 * Function WBP_Sheik_EventLine.WBP_Sheik_EventLine_C.ConstructOnlyOnce
	 */
	struct UWBP_Sheik_EventLine_C_ConstructOnlyOnce_Params
	{	};

	/**
	 * Function WBP_Sheik_EventLine.WBP_Sheik_EventLine_C.ShowEvent
	 */
	struct UWBP_Sheik_EventLine_C_ShowEvent_Params
	{
	public:
		class FText                                                EventText;                                               // 0x0000(0x0018)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function WBP_Sheik_EventLine.WBP_Sheik_EventLine_C.ShiftDown
	 */
	struct UWBP_Sheik_EventLine_C_ShiftDown_Params
	{	};

	/**
	 * Function WBP_Sheik_EventLine.WBP_Sheik_EventLine_C.ExecuteUbergraph_WBP_Sheik_EventLine
	 */
	struct UWBP_Sheik_EventLine_C_ExecuteUbergraph_WBP_Sheik_EventLine_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Sheik_EventLine.WBP_Sheik_EventLine_C.EventFinished__DelegateSignature
	 */
	struct UWBP_Sheik_EventLine_C_EventFinished__DelegateSignature_Params
	{
	public:
		class UIGUI_WidgetBase*                                    Source;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
