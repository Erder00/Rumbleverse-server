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
	 * Function WBP_Sheik_PlaygroundPopupScreen.WBP_Sheik_PlaygroundPopupScreen_C.ShouldShowHudPopup
	 */
	struct UWBP_Sheik_PlaygroundPopupScreen_C_ShouldShowHudPopup_Params
	{
	public:
		struct FDataTableRowHandle                                 InRowHandle;                                             // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
		bool                                                       Out;                                                     // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_76Q5[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function WBP_Sheik_PlaygroundPopupScreen.WBP_Sheik_PlaygroundPopupScreen_C.OnGainFocus
	 */
	struct UWBP_Sheik_PlaygroundPopupScreen_C_OnGainFocus_Params
	{
	public:
		int32_t                                                    UserIndex;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Sheik_PlaygroundPopupScreen.WBP_Sheik_PlaygroundPopupScreen_C.OnLoseFocus
	 */
	struct UWBP_Sheik_PlaygroundPopupScreen_C_OnLoseFocus_Params
	{
	public:
		int32_t                                                    UserIndex;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Sheik_PlaygroundPopupScreen.WBP_Sheik_PlaygroundPopupScreen_C.BndEvt__WBP_Sheik_PlaygroundPopupScreen_PopupWidget_K2Node_ComponentBoundEvent_0_OnClosePopup__DelegateSignature
	 */
	struct UWBP_Sheik_PlaygroundPopupScreen_C_BndEvt__WBP_Sheik_PlaygroundPopupScreen_PopupWidget_K2Node_ComponentBoundEvent_0_OnClosePopup__DelegateSignature_Params
	{	};

	/**
	 * Function WBP_Sheik_PlaygroundPopupScreen.WBP_Sheik_PlaygroundPopupScreen_C.ExecuteUbergraph_WBP_Sheik_PlaygroundPopupScreen
	 */
	struct UWBP_Sheik_PlaygroundPopupScreen_C_ExecuteUbergraph_WBP_Sheik_PlaygroundPopupScreen_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
