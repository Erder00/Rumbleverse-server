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
	 * Function WBP_Sheik_TextBox.WBP_Sheik_TextBox_C.GetString
	 */
	struct UWBP_Sheik_TextBox_C_GetString_Params
	{
	public:
		class FString                                              String;                                                  // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Sheik_TextBox.WBP_Sheik_TextBox_C.OpenVirtualKeyboard
	 */
	struct UWBP_Sheik_TextBox_C_OpenVirtualKeyboard_Params
	{	};

	/**
	 * Function WBP_Sheik_TextBox.WBP_Sheik_TextBox_C.GetText
	 */
	struct UWBP_Sheik_TextBox_C_GetText_Params
	{
	public:
		class FText                                                Text;                                                    // 0x0000(0x0018)  (Parm, OutParm)
	};

	/**
	 * Function WBP_Sheik_TextBox.WBP_Sheik_TextBox_C.SetText
	 */
	struct UWBP_Sheik_TextBox_C_SetText_Params
	{
	public:
		class FText                                                Text;                                                    // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function WBP_Sheik_TextBox.WBP_Sheik_TextBox_C.OnPreviewMouseButtonDown
	 */
	struct UWBP_Sheik_TextBox_C_OnPreviewMouseButtonDown_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FPointerEvent                                       MouseEvent;                                              // 0x0038(0x0070)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		struct FEventReply                                         ReturnValue;                                             // 0x00A8(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function WBP_Sheik_TextBox.WBP_Sheik_TextBox_C.PreConstruct
	 */
	struct UWBP_Sheik_TextBox_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_Sheik_TextBox.WBP_Sheik_TextBox_C.Construct
	 */
	struct UWBP_Sheik_TextBox_C_Construct_Params
	{	};

	/**
	 * Function WBP_Sheik_TextBox.WBP_Sheik_TextBox_C.BndEvt__EditableTextBox_K2Node_ComponentBoundEvent_0_OnEditableTextBoxCommittedEvent__DelegateSignature
	 */
	struct UWBP_Sheik_TextBox_C_BndEvt__EditableTextBox_K2Node_ComponentBoundEvent_0_OnEditableTextBoxCommittedEvent__DelegateSignature_Params
	{
	public:
		class FText                                                Text;                                                    // 0x0000(0x0018)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		ETextCommit                                                CommitMethod;                                            // 0x0018(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Sheik_TextBox.WBP_Sheik_TextBox_C.OnGainFocus
	 */
	struct UWBP_Sheik_TextBox_C_OnGainFocus_Params
	{
	public:
		int32_t                                                    UserIndex;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Sheik_TextBox.WBP_Sheik_TextBox_C.OnLoseFocus
	 */
	struct UWBP_Sheik_TextBox_C_OnLoseFocus_Params
	{
	public:
		int32_t                                                    UserIndex;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Sheik_TextBox.WBP_Sheik_TextBox_C.BndEvt__WBP_Sheik_TextBox_EditableTextBox_K2Node_ComponentBoundEvent_1_OnEditableTextBoxChangedEvent__DelegateSignature
	 */
	struct UWBP_Sheik_TextBox_C_BndEvt__WBP_Sheik_TextBox_EditableTextBox_K2Node_ComponentBoundEvent_1_OnEditableTextBoxChangedEvent__DelegateSignature_Params
	{
	public:
		class FText                                                Text;                                                    // 0x0000(0x0018)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function WBP_Sheik_TextBox.WBP_Sheik_TextBox_C.ExecuteUbergraph_WBP_Sheik_TextBox
	 */
	struct UWBP_Sheik_TextBox_C_ExecuteUbergraph_WBP_Sheik_TextBox_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Sheik_TextBox.WBP_Sheik_TextBox_C.TextChanged__DelegateSignature
	 */
	struct UWBP_Sheik_TextBox_C_TextChanged__DelegateSignature_Params
	{	};

	/**
	 * Function WBP_Sheik_TextBox.WBP_Sheik_TextBox_C.TextCommitted__DelegateSignature
	 */
	struct UWBP_Sheik_TextBox_C_TextCommitted__DelegateSignature_Params
	{	};

	/**
	 * Function WBP_Sheik_TextBox.WBP_Sheik_TextBox_C.TextboxSelected__DelegateSignature
	 */
	struct UWBP_Sheik_TextBox_C_TextboxSelected__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
