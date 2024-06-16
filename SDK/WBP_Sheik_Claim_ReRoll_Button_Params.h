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
	 * Function WBP_Sheik_Claim-ReRoll_Button.WBP_Sheik_Claim-ReRoll_Button_C.SetPressAndHoldOverride
	 */
	struct UWBP_Sheik_ClaimReRoll_Button_C_SetPressAndHoldOverride_Params
	{
	public:
		bool                                                       InPressAndHold;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_Sheik_Claim-ReRoll_Button.WBP_Sheik_Claim-ReRoll_Button_C.OnPreviewMouseButtonDown
	 */
	struct UWBP_Sheik_ClaimReRoll_Button_C_OnPreviewMouseButtonDown_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FPointerEvent                                       MouseEvent;                                              // 0x0038(0x0070)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		struct FEventReply                                         ReturnValue;                                             // 0x00A8(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function WBP_Sheik_Claim-ReRoll_Button.WBP_Sheik_Claim-ReRoll_Button_C.PlayClaimOrRerollSound
	 */
	struct UWBP_Sheik_ClaimReRoll_Button_C_PlayClaimOrRerollSound_Params
	{	};

	/**
	 * Function WBP_Sheik_Claim-ReRoll_Button.WBP_Sheik_Claim-ReRoll_Button_C.PlayUISound
	 */
	struct UWBP_Sheik_ClaimReRoll_Button_C_PlayUISound_Params
	{
	public:
		bool                                                       bPlaySound;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		EUISounds                                                  SoundType;                                               // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Sheik_Claim-ReRoll_Button.WBP_Sheik_Claim-ReRoll_Button_C.PlayRerollAnim
	 */
	struct UWBP_Sheik_ClaimReRoll_Button_C_PlayRerollAnim_Params
	{	};

	/**
	 * Function WBP_Sheik_Claim-ReRoll_Button.WBP_Sheik_Claim-ReRoll_Button_C.SetLabel
	 */
	struct UWBP_Sheik_ClaimReRoll_Button_C_SetLabel_Params
	{
	public:
		class FText                                                InText;                                                  // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function WBP_Sheik_Claim-ReRoll_Button.WBP_Sheik_Claim-ReRoll_Button_C.OnSelectedAnimationFinished
	 */
	struct UWBP_Sheik_ClaimReRoll_Button_C_OnSelectedAnimationFinished_Params
	{	};

	/**
	 * Function WBP_Sheik_Claim-ReRoll_Button.WBP_Sheik_Claim-ReRoll_Button_C.GetButtonIndex
	 */
	struct UWBP_Sheik_ClaimReRoll_Button_C_GetButtonIndex_Params
	{
	public:
		int32_t                                                    index;                                                   // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Sheik_Claim-ReRoll_Button.WBP_Sheik_Claim-ReRoll_Button_C.SetDisabled
	 */
	struct UWBP_Sheik_ClaimReRoll_Button_C_SetDisabled_Params
	{
	public:
		bool                                                       IsDisabled;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_Sheik_Claim-ReRoll_Button.WBP_Sheik_Claim-ReRoll_Button_C.HandleSelect
	 */
	struct UWBP_Sheik_ClaimReRoll_Button_C_HandleSelect_Params
	{
	public:
		int32_t                                                    UserIndex;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Sheik_Claim-ReRoll_Button.WBP_Sheik_Claim-ReRoll_Button_C.ApplyContentOnPreConstruct
	 */
	struct UWBP_Sheik_ClaimReRoll_Button_C_ApplyContentOnPreConstruct_Params
	{	};

	/**
	 * Function WBP_Sheik_Claim-ReRoll_Button.WBP_Sheik_Claim-ReRoll_Button_C.PreConstruct
	 */
	struct UWBP_Sheik_ClaimReRoll_Button_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_Sheik_Claim-ReRoll_Button.WBP_Sheik_Claim-ReRoll_Button_C.ConstructOnlyOnce
	 */
	struct UWBP_Sheik_ClaimReRoll_Button_C_ConstructOnlyOnce_Params
	{	};

	/**
	 * Function WBP_Sheik_Claim-ReRoll_Button.WBP_Sheik_Claim-ReRoll_Button_C.OnDisabled
	 */
	struct UWBP_Sheik_ClaimReRoll_Button_C_OnDisabled_Params
	{	};

	/**
	 * Function WBP_Sheik_Claim-ReRoll_Button.WBP_Sheik_Claim-ReRoll_Button_C.OnEnabled
	 */
	struct UWBP_Sheik_ClaimReRoll_Button_C_OnEnabled_Params
	{	};

	/**
	 * Function WBP_Sheik_Claim-ReRoll_Button.WBP_Sheik_Claim-ReRoll_Button_C.OnSelected
	 */
	struct UWBP_Sheik_ClaimReRoll_Button_C_OnSelected_Params
	{
	public:
		int32_t                                                    UserIndex;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Sheik_Claim-ReRoll_Button.WBP_Sheik_Claim-ReRoll_Button_C.ExecuteUbergraph_WBP_Sheik_Claim-ReRoll_Button
	 */
	struct UWBP_Sheik_ClaimReRoll_Button_C_ExecuteUbergraph_WBP_Sheik_ClaimReRoll_Button_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
