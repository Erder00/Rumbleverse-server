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
	 * Function WBP_Sheik_LegendKey.WBP_Sheik_LegendKey_C.SequenceEvent__ENTRYPOINTWBP_Sheik_LegendKey_1
	 */
	struct UWBP_Sheik_LegendKey_C_SequenceEvent__ENTRYPOINTWBP_Sheik_LegendKey_1_Params
	{	};

	/**
	 * Function WBP_Sheik_LegendKey.WBP_Sheik_LegendKey_C.PlayFocusedSound
	 */
	struct UWBP_Sheik_LegendKey_C_PlayFocusedSound_Params
	{	};

	/**
	 * Function WBP_Sheik_LegendKey.WBP_Sheik_LegendKey_C.PlaySelectSound
	 */
	struct UWBP_Sheik_LegendKey_C_PlaySelectSound_Params
	{	};

	/**
	 * Function WBP_Sheik_LegendKey.WBP_Sheik_LegendKey_C.PlayUISound
	 */
	struct UWBP_Sheik_LegendKey_C_PlayUISound_Params
	{
	public:
		bool                                                       bPlaySound;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		EUISounds                                                  SoundType;                                               // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Sheik_LegendKey.WBP_Sheik_LegendKey_C.OnPreviewMouseButtonDown
	 */
	struct UWBP_Sheik_LegendKey_C_OnPreviewMouseButtonDown_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FPointerEvent                                       MouseEvent;                                              // 0x0038(0x0070)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		struct FEventReply                                         ReturnValue;                                             // 0x00A8(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function WBP_Sheik_LegendKey.WBP_Sheik_LegendKey_C.SetLabelOverride
	 */
	struct UWBP_Sheik_LegendKey_C_SetLabelOverride_Params
	{
	public:
		class FText                                                Label;                                                   // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function WBP_Sheik_LegendKey.WBP_Sheik_LegendKey_C.GetKey
	 */
	struct UWBP_Sheik_LegendKey_C_GetKey_Params
	{
	public:
		struct FS_Sheik_InputBindingKeyEntry                       Key;                                                     // 0x0000(0x0028)  (Parm, OutParm, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Sheik_LegendKey.WBP_Sheik_LegendKey_C.SetKey
	 */
	struct UWBP_Sheik_LegendKey_C_SetKey_Params
	{
	public:
		struct FS_Sheik_InputBindingKeyEntry                       InputBindingKeyEntry;                                    // 0x0000(0x0028)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Sheik_LegendKey.WBP_Sheik_LegendKey_C.PreConstruct
	 */
	struct UWBP_Sheik_LegendKey_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_Sheik_LegendKey.WBP_Sheik_LegendKey_C.ConstructOnlyOnce
	 */
	struct UWBP_Sheik_LegendKey_C_ConstructOnlyOnce_Params
	{	};

	/**
	 * Function WBP_Sheik_LegendKey.WBP_Sheik_LegendKey_C.OnSelected
	 */
	struct UWBP_Sheik_LegendKey_C_OnSelected_Params
	{
	public:
		int32_t                                                    UserIndex;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Sheik_LegendKey.WBP_Sheik_LegendKey_C.SelectedEvent
	 */
	struct UWBP_Sheik_LegendKey_C_SelectedEvent_Params
	{	};

	/**
	 * Function WBP_Sheik_LegendKey.WBP_Sheik_LegendKey_C.OnGainFocus
	 */
	struct UWBP_Sheik_LegendKey_C_OnGainFocus_Params
	{
	public:
		int32_t                                                    UserIndex;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Sheik_LegendKey.WBP_Sheik_LegendKey_C.OnLoseFocus
	 */
	struct UWBP_Sheik_LegendKey_C_OnLoseFocus_Params
	{
	public:
		int32_t                                                    UserIndex;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Sheik_LegendKey.WBP_Sheik_LegendKey_C.ExecuteUbergraph_WBP_Sheik_LegendKey
	 */
	struct UWBP_Sheik_LegendKey_C_ExecuteUbergraph_WBP_Sheik_LegendKey_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
