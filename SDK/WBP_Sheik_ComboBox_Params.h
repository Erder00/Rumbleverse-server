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
	 * Function WBP_Sheik_ComboBox.WBP_Sheik_ComboBox_C.OnFocusReceived
	 */
	struct UWBP_Sheik_ComboBox_C_OnFocusReceived_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FFocusEvent                                         InFocusEvent;                                            // 0x0038(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
		struct FEventReply                                         ReturnValue;                                             // 0x0040(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function WBP_Sheik_ComboBox.WBP_Sheik_ComboBox_C.GetSelection
	 */
	struct UWBP_Sheik_ComboBox_C_GetSelection_Params
	{
	public:
		class FString                                              Selection;                                               // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Sheik_ComboBox.WBP_Sheik_ComboBox_C.GetComboBox
	 */
	struct UWBP_Sheik_ComboBox_C_GetComboBox_Params
	{
	public:
		class UComboBoxString*                                     ComboBox;                                                // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Sheik_ComboBox.WBP_Sheik_ComboBox_C.HasSelection
	 */
	struct UWBP_Sheik_ComboBox_C_HasSelection_Params
	{
	public:
		bool                                                       HasSelection;                                            // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_DMUC[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function WBP_Sheik_ComboBox.WBP_Sheik_ComboBox_C.Clear
	 */
	struct UWBP_Sheik_ComboBox_C_Clear_Params
	{	};

	/**
	 * Function WBP_Sheik_ComboBox.WBP_Sheik_ComboBox_C.BndEvt__WBP_Sheik_ComboBox_ComboBox_K2Node_ComponentBoundEvent_0_OnSelectionChangedEvent__DelegateSignature
	 */
	struct UWBP_Sheik_ComboBox_C_BndEvt__WBP_Sheik_ComboBox_ComboBox_K2Node_ComponentBoundEvent_0_OnSelectionChangedEvent__DelegateSignature_Params
	{
	public:
		class FString                                              SelectedItem;                                            // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		ESelectInfo                                                SelectionType;                                           // 0x0010(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Sheik_ComboBox.WBP_Sheik_ComboBox_C.BndEvt__WBP_Sheik_ComboBox_ComboBox_K2Node_ComponentBoundEvent_1_OnOpeningEvent__DelegateSignature
	 */
	struct UWBP_Sheik_ComboBox_C_BndEvt__WBP_Sheik_ComboBox_ComboBox_K2Node_ComponentBoundEvent_1_OnOpeningEvent__DelegateSignature_Params
	{	};

	/**
	 * Function WBP_Sheik_ComboBox.WBP_Sheik_ComboBox_C.Construct
	 */
	struct UWBP_Sheik_ComboBox_C_Construct_Params
	{	};

	/**
	 * Function WBP_Sheik_ComboBox.WBP_Sheik_ComboBox_C.PreConstruct
	 */
	struct UWBP_Sheik_ComboBox_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_Sheik_ComboBox.WBP_Sheik_ComboBox_C.OnAddedToFocusPath
	 */
	struct UWBP_Sheik_ComboBox_C_OnAddedToFocusPath_Params
	{
	public:
		struct FFocusEvent                                         InFocusEvent;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	};

	/**
	 * Function WBP_Sheik_ComboBox.WBP_Sheik_ComboBox_C.OnRemovedFromFocusPath
	 */
	struct UWBP_Sheik_ComboBox_C_OnRemovedFromFocusPath_Params
	{
	public:
		struct FFocusEvent                                         InFocusEvent;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	};

	/**
	 * Function WBP_Sheik_ComboBox.WBP_Sheik_ComboBox_C.BndEvt__WBP_Sheik_ComboBox_ComboBox_K2Node_ComponentBoundEvent_2_OnClosingEvent__DelegateSignature
	 */
	struct UWBP_Sheik_ComboBox_C_BndEvt__WBP_Sheik_ComboBox_ComboBox_K2Node_ComponentBoundEvent_2_OnClosingEvent__DelegateSignature_Params
	{	};

	/**
	 * Function WBP_Sheik_ComboBox.WBP_Sheik_ComboBox_C.ExecuteUbergraph_WBP_Sheik_ComboBox
	 */
	struct UWBP_Sheik_ComboBox_C_ExecuteUbergraph_WBP_Sheik_ComboBox_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_CAIQ[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function WBP_Sheik_ComboBox.WBP_Sheik_ComboBox_C.OnComboClosing__DelegateSignature
	 */
	struct UWBP_Sheik_ComboBox_C_OnComboClosing__DelegateSignature_Params
	{
	public:
		class UComboBoxString*                                     ComboBox;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Sheik_ComboBox.WBP_Sheik_ComboBox_C.OnComboOpening__DelegateSignature
	 */
	struct UWBP_Sheik_ComboBox_C_OnComboOpening__DelegateSignature_Params
	{
	public:
		class UComboBoxString*                                     ComboBox;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Sheik_ComboBox.WBP_Sheik_ComboBox_C.OnComboSelectionChanged__DelegateSignature
	 */
	struct UWBP_Sheik_ComboBox_C_OnComboSelectionChanged__DelegateSignature_Params
	{
	public:
		class FString                                              Selection;                                               // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
