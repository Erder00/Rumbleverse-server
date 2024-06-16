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
	 * Function WBP_Sheik_ScreenMagazineEquip.WBP_Sheik_ScreenMagazineEquip_C.UpdateSpecialMovePromtText
	 */
	struct UWBP_Sheik_ScreenMagazineEquip_C_UpdateSpecialMovePromtText_Params
	{	};

	/**
	 * Function WBP_Sheik_ScreenMagazineEquip.WBP_Sheik_ScreenMagazineEquip_C.SpawnEffectsIcons
	 */
	struct UWBP_Sheik_ScreenMagazineEquip_C_SpawnEffectsIcons_Params
	{
	public:
		class UVerticalBox*                                        VerticalBox;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		TArray<EIGSpecialMoveEffect>                               SpecialEffect;                                           // 0x0008(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function WBP_Sheik_ScreenMagazineEquip.WBP_Sheik_ScreenMagazineEquip_C.OnSpecialTwoInput_cb
	 */
	struct UWBP_Sheik_ScreenMagazineEquip_C_OnSpecialTwoInput_cb_Params
	{
	public:
		struct FInputEventData                                     Input;                                                   // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function WBP_Sheik_ScreenMagazineEquip.WBP_Sheik_ScreenMagazineEquip_C.OnSpecialOneInput_cb
	 */
	struct UWBP_Sheik_ScreenMagazineEquip_C_OnSpecialOneInput_cb_Params
	{
	public:
		struct FInputEventData                                     Input;                                                   // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function WBP_Sheik_ScreenMagazineEquip.WBP_Sheik_ScreenMagazineEquip_C.PopulatePropertiesBox
	 */
	struct UWBP_Sheik_ScreenMagazineEquip_C_PopulatePropertiesBox_Params
	{
	public:
		class UVerticalBox*                                        Box;                                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		TArray<struct FS_Sheik_SpecialMoveProperty>                PropertyData;                                            // 0x0008(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function WBP_Sheik_ScreenMagazineEquip.WBP_Sheik_ScreenMagazineEquip_C.ChoosePerk_cb
	 */
	struct UWBP_Sheik_ScreenMagazineEquip_C_ChoosePerk_cb_Params
	{
	public:
		struct FInputEventData                                     InputEvent;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function WBP_Sheik_ScreenMagazineEquip.WBP_Sheik_ScreenMagazineEquip_C.UpdateSpecialToEquip
	 */
	struct UWBP_Sheik_ScreenMagazineEquip_C_UpdateSpecialToEquip_Params
	{	};

	/**
	 * Function WBP_Sheik_ScreenMagazineEquip.WBP_Sheik_ScreenMagazineEquip_C.CloseEquipScreen
	 */
	struct UWBP_Sheik_ScreenMagazineEquip_C_CloseEquipScreen_Params
	{	};

	/**
	 * Function WBP_Sheik_ScreenMagazineEquip.WBP_Sheik_ScreenMagazineEquip_C.ConstructOnlyOnce
	 */
	struct UWBP_Sheik_ScreenMagazineEquip_C_ConstructOnlyOnce_Params
	{	};

	/**
	 * Function WBP_Sheik_ScreenMagazineEquip.WBP_Sheik_ScreenMagazineEquip_C.ShowNewMoveToEquip
	 */
	struct UWBP_Sheik_ScreenMagazineEquip_C_ShowNewMoveToEquip_Params
	{
	public:
		class UIGMoveMontage*                                      MoveMontage;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		EMoveTier                                                  MoveTier;                                                // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Sheik_ScreenMagazineEquip.WBP_Sheik_ScreenMagazineEquip_C.OnGainFocus
	 */
	struct UWBP_Sheik_ScreenMagazineEquip_C_OnGainFocus_Params
	{
	public:
		int32_t                                                    UserIndex;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Sheik_ScreenMagazineEquip.WBP_Sheik_ScreenMagazineEquip_C.OnLoseFocus
	 */
	struct UWBP_Sheik_ScreenMagazineEquip_C_OnLoseFocus_Params
	{
	public:
		int32_t                                                    UserIndex;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Sheik_ScreenMagazineEquip.WBP_Sheik_ScreenMagazineEquip_C.SubscribeToInputEvents
	 */
	struct UWBP_Sheik_ScreenMagazineEquip_C_SubscribeToInputEvents_Params
	{	};

	/**
	 * Function WBP_Sheik_ScreenMagazineEquip.WBP_Sheik_ScreenMagazineEquip_C.ExecuteUbergraph_WBP_Sheik_ScreenMagazineEquip
	 */
	struct UWBP_Sheik_ScreenMagazineEquip_C_ExecuteUbergraph_WBP_Sheik_ScreenMagazineEquip_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_L6WU[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
