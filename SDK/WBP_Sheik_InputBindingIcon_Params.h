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
	 * Function WBP_Sheik_InputBindingIcon.WBP_Sheik_InputBindingIcon_C.SetKeyboardBindingsName
	 */
	struct UWBP_Sheik_InputBindingIcon_C_SetKeyboardBindingsName_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Sheik_InputBindingIcon.WBP_Sheik_InputBindingIcon_C.OnPreviewMouseButtonDown
	 */
	struct UWBP_Sheik_InputBindingIcon_C_OnPreviewMouseButtonDown_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FPointerEvent                                       MouseEvent;                                              // 0x0038(0x0070)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		struct FEventReply                                         ReturnValue;                                             // 0x00A8(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function WBP_Sheik_InputBindingIcon.WBP_Sheik_InputBindingIcon_C.DetectCurrentInputSource
	 */
	struct UWBP_Sheik_InputBindingIcon_C_DetectCurrentInputSource_Params
	{
	public:
		EInputSource                                               OutInputSource;                                          // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Sheik_InputBindingIcon.WBP_Sheik_InputBindingIcon_C.GetShortKeyName
	 */
	struct UWBP_Sheik_InputBindingIcon_C_GetShortKeyName_Params
	{
	public:
		struct FKey                                                KeyText;                                                 // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
		class FText                                                NewParam;                                                // 0x0018(0x0018)  (Parm, OutParm)
	};

	/**
	 * Function WBP_Sheik_InputBindingIcon.WBP_Sheik_InputBindingIcon_C.SetActionMappingName
	 */
	struct UWBP_Sheik_InputBindingIcon_C_SetActionMappingName_Params
	{
	public:
		class FName                                                InActionMappingName;                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Sheik_InputBindingIcon.WBP_Sheik_InputBindingIcon_C.OnKeybindingsChanged
	 */
	struct UWBP_Sheik_InputBindingIcon_C_OnKeybindingsChanged_Params
	{	};

	/**
	 * Function WBP_Sheik_InputBindingIcon.WBP_Sheik_InputBindingIcon_C.SetBindingFromActionMapping
	 */
	struct UWBP_Sheik_InputBindingIcon_C_SetBindingFromActionMapping_Params
	{	};

	/**
	 * Function WBP_Sheik_InputBindingIcon.WBP_Sheik_InputBindingIcon_C.GetBinding
	 */
	struct UWBP_Sheik_InputBindingIcon_C_GetBinding_Params
	{
	public:
		struct FDataTableRowHandle                                 Binding;                                                 // 0x0000(0x0010)  (Parm, OutParm, NoDestructor)
	};

	/**
	 * Function WBP_Sheik_InputBindingIcon.WBP_Sheik_InputBindingIcon_C.SetBinding
	 */
	struct UWBP_Sheik_InputBindingIcon_C_SetBinding_Params
	{
	public:
		struct FDataTableRowHandle                                 Binding;                                                 // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	};

	/**
	 * Function WBP_Sheik_InputBindingIcon.WBP_Sheik_InputBindingIcon_C.UpdateBinding
	 */
	struct UWBP_Sheik_InputBindingIcon_C_UpdateBinding_Params
	{
	public:
		EInputSource                                               InputSource;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_U476[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function WBP_Sheik_InputBindingIcon.WBP_Sheik_InputBindingIcon_C.Construct
	 */
	struct UWBP_Sheik_InputBindingIcon_C_Construct_Params
	{	};

	/**
	 * Function WBP_Sheik_InputBindingIcon.WBP_Sheik_InputBindingIcon_C.OnInputSourceChanged
	 */
	struct UWBP_Sheik_InputBindingIcon_C_OnInputSourceChanged_Params
	{
	public:
		struct FUserControllerData                                 OldInputSource;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
		struct FUserControllerData                                 NewInputSource;                                          // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	};

	/**
	 * Function WBP_Sheik_InputBindingIcon.WBP_Sheik_InputBindingIcon_C.PreConstruct
	 */
	struct UWBP_Sheik_InputBindingIcon_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_Sheik_InputBindingIcon.WBP_Sheik_InputBindingIcon_C.ConstructOnlyOnce
	 */
	struct UWBP_Sheik_InputBindingIcon_C_ConstructOnlyOnce_Params
	{	};

	/**
	 * Function WBP_Sheik_InputBindingIcon.WBP_Sheik_InputBindingIcon_C.OnSelected
	 */
	struct UWBP_Sheik_InputBindingIcon_C_OnSelected_Params
	{
	public:
		int32_t                                                    UserIndex;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Sheik_InputBindingIcon.WBP_Sheik_InputBindingIcon_C.ExecuteUbergraph_WBP_Sheik_InputBindingIcon
	 */
	struct UWBP_Sheik_InputBindingIcon_C_ExecuteUbergraph_WBP_Sheik_InputBindingIcon_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
