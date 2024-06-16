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
	 * Function WBP_Sheik_LR_GridLegendKey.WBP_Sheik_LR_GridLegendKey_C.GetInputBinding_PressAndHold
	 */
	struct UWBP_Sheik_LR_GridLegendKey_C_GetInputBinding_PressAndHold_Params
	{
	public:
		class UWBP_Sheik_ButtonAction_C*                           InputBinding_PressAndHold;                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Sheik_LR_GridLegendKey.WBP_Sheik_LR_GridLegendKey_C.PlayFocusedSound
	 */
	struct UWBP_Sheik_LR_GridLegendKey_C_PlayFocusedSound_Params
	{	};

	/**
	 * Function WBP_Sheik_LR_GridLegendKey.WBP_Sheik_LR_GridLegendKey_C.PlaySelectSound
	 */
	struct UWBP_Sheik_LR_GridLegendKey_C_PlaySelectSound_Params
	{	};

	/**
	 * Function WBP_Sheik_LR_GridLegendKey.WBP_Sheik_LR_GridLegendKey_C.PlayUISound
	 */
	struct UWBP_Sheik_LR_GridLegendKey_C_PlayUISound_Params
	{
	public:
		bool                                                       bPlaySound;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		EUISounds                                                  SoundType;                                               // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Sheik_LR_GridLegendKey.WBP_Sheik_LR_GridLegendKey_C.SetPressAndHold
	 */
	struct UWBP_Sheik_LR_GridLegendKey_C_SetPressAndHold_Params
	{
	public:
		bool                                                       InPressAndHold;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_Sheik_LR_GridLegendKey.WBP_Sheik_LR_GridLegendKey_C.OnPreviewMouseButtonDown
	 */
	struct UWBP_Sheik_LR_GridLegendKey_C_OnPreviewMouseButtonDown_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FPointerEvent                                       MouseEvent;                                              // 0x0038(0x0070)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		struct FEventReply                                         ReturnValue;                                             // 0x00A8(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function WBP_Sheik_LR_GridLegendKey.WBP_Sheik_LR_GridLegendKey_C.SetLabelOverride
	 */
	struct UWBP_Sheik_LR_GridLegendKey_C_SetLabelOverride_Params
	{
	public:
		class FText                                                Label;                                                   // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function WBP_Sheik_LR_GridLegendKey.WBP_Sheik_LR_GridLegendKey_C.GetKey
	 */
	struct UWBP_Sheik_LR_GridLegendKey_C_GetKey_Params
	{
	public:
		struct FS_Sheik_InputBindingKeyEntry                       Key;                                                     // 0x0000(0x0028)  (Parm, OutParm, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Sheik_LR_GridLegendKey.WBP_Sheik_LR_GridLegendKey_C.SetKey
	 */
	struct UWBP_Sheik_LR_GridLegendKey_C_SetKey_Params
	{
	public:
		struct FS_Sheik_InputBindingKeyEntry                       InputBindingKeyEntry;                                    // 0x0000(0x0028)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Sheik_LR_GridLegendKey.WBP_Sheik_LR_GridLegendKey_C.PreConstruct
	 */
	struct UWBP_Sheik_LR_GridLegendKey_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_Sheik_LR_GridLegendKey.WBP_Sheik_LR_GridLegendKey_C.ConstructOnlyOnce
	 */
	struct UWBP_Sheik_LR_GridLegendKey_C_ConstructOnlyOnce_Params
	{	};

	/**
	 * Function WBP_Sheik_LR_GridLegendKey.WBP_Sheik_LR_GridLegendKey_C.OnSelected
	 */
	struct UWBP_Sheik_LR_GridLegendKey_C_OnSelected_Params
	{
	public:
		int32_t                                                    UserIndex;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Sheik_LR_GridLegendKey.WBP_Sheik_LR_GridLegendKey_C.SelectedEvent
	 */
	struct UWBP_Sheik_LR_GridLegendKey_C_SelectedEvent_Params
	{	};

	/**
	 * Function WBP_Sheik_LR_GridLegendKey.WBP_Sheik_LR_GridLegendKey_C.OnActivated
	 */
	struct UWBP_Sheik_LR_GridLegendKey_C_OnActivated_Params
	{	};

	/**
	 * Function WBP_Sheik_LR_GridLegendKey.WBP_Sheik_LR_GridLegendKey_C.OnDeactivated
	 */
	struct UWBP_Sheik_LR_GridLegendKey_C_OnDeactivated_Params
	{	};

	/**
	 * Function WBP_Sheik_LR_GridLegendKey.WBP_Sheik_LR_GridLegendKey_C.OnGainFocus
	 */
	struct UWBP_Sheik_LR_GridLegendKey_C_OnGainFocus_Params
	{
	public:
		int32_t                                                    UserIndex;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Sheik_LR_GridLegendKey.WBP_Sheik_LR_GridLegendKey_C.OnLoseFocus
	 */
	struct UWBP_Sheik_LR_GridLegendKey_C_OnLoseFocus_Params
	{
	public:
		int32_t                                                    UserIndex;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Sheik_LR_GridLegendKey.WBP_Sheik_LR_GridLegendKey_C.ExecuteUbergraph_WBP_Sheik_LR_GridLegendKey
	 */
	struct UWBP_Sheik_LR_GridLegendKey_C_ExecuteUbergraph_WBP_Sheik_LR_GridLegendKey_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
