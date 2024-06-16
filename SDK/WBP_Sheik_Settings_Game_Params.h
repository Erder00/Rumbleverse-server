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
	 * Function WBP_Sheik_Settings_Game.WBP_Sheik_Settings_Game_C.GetOptionIndexForAutoRelease
	 */
	struct UWBP_Sheik_Settings_Game_C_GetOptionIndexForAutoRelease_Params
	{
	public:
		class FName                                                ContextName;                                             // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       Value;                                                   // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_YKD0[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    index;                                                   // 0x000C(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Sheik_Settings_Game.WBP_Sheik_Settings_Game_C.GetOptionIndexForCombatBehavior
	 */
	struct UWBP_Sheik_Settings_Game_C_GetOptionIndexForCombatBehavior_Params
	{
	public:
		class FName                                                BehaviorName;                                            // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		EIGCombatContextBehavior                                   Behavior;                                                // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_HQ2M[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    OptionIndex;                                             // 0x000C(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Sheik_Settings_Game.WBP_Sheik_Settings_Game_C.RefreshCombatSettings
	 */
	struct UWBP_Sheik_Settings_Game_C_RefreshCombatSettings_Params
	{	};

	/**
	 * Function WBP_Sheik_Settings_Game.WBP_Sheik_Settings_Game_C.RefreshCameraSettings
	 */
	struct UWBP_Sheik_Settings_Game_C_RefreshCameraSettings_Params
	{	};

	/**
	 * Function WBP_Sheik_Settings_Game.WBP_Sheik_Settings_Game_C.RefreshPressAndHoldInput
	 */
	struct UWBP_Sheik_Settings_Game_C_RefreshPressAndHoldInput_Params
	{	};

	/**
	 * Function WBP_Sheik_Settings_Game.WBP_Sheik_Settings_Game_C.AreCreditsVisible
	 */
	struct UWBP_Sheik_Settings_Game_C_AreCreditsVisible_Params
	{
	public:
		bool                                                       Out;                                                     // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_Sheik_Settings_Game.WBP_Sheik_Settings_Game_C.GetNavigableWidgets
	 */
	struct UWBP_Sheik_Settings_Game_C_GetNavigableWidgets_Params
	{
	public:
		TArray<class UIGUI_WidgetBase*>                            NavigableWidgets;                                        // 0x0000(0x0010)  (Parm, OutParm, ContainsInstancedReference)
	};

	/**
	 * Function WBP_Sheik_Settings_Game.WBP_Sheik_Settings_Game_C.ToggleHudRegion
	 */
	struct UWBP_Sheik_Settings_Game_C_ToggleHudRegion_Params
	{
	public:
		int32_t                                                    InOption;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		ESheikHudRegion                                            InHudRegion;                                             // 0x0004(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Sheik_Settings_Game.WBP_Sheik_Settings_Game_C.SetHudRegionControlDefaultValue
	 */
	struct UWBP_Sheik_Settings_Game_C_SetHudRegionControlDefaultValue_Params
	{
	public:
		class UWBP_Sheik_MultiToggle_C*                            InWidget;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		ESheikHudRegion                                            HudRegion;                                               // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_ZT0X[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function WBP_Sheik_Settings_Game.WBP_Sheik_Settings_Game_C.BndEvt__KnockOutFeedToggle_K2Node_ComponentBoundEvent_3_OnOptionChanged__DelegateSignature
	 */
	struct UWBP_Sheik_Settings_Game_C_BndEvt__KnockOutFeedToggle_K2Node_ComponentBoundEvent_3_OnOptionChanged__DelegateSignature_Params
	{
	public:
		class UIGUI_WidgetBase*                                    Source;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FText                                                Text;                                                    // 0x0008(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		int32_t                                                    index;                                                   // 0x0020(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Sheik_Settings_Game.WBP_Sheik_Settings_Game_C.BndEvt__PerkHudToggle_K2Node_ComponentBoundEvent_2_OnOptionChanged__DelegateSignature
	 */
	struct UWBP_Sheik_Settings_Game_C_BndEvt__PerkHudToggle_K2Node_ComponentBoundEvent_2_OnOptionChanged__DelegateSignature_Params
	{
	public:
		class UIGUI_WidgetBase*                                    Source;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FText                                                Text;                                                    // 0x0008(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		int32_t                                                    index;                                                   // 0x0020(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Sheik_Settings_Game.WBP_Sheik_Settings_Game_C.OnActivated
	 */
	struct UWBP_Sheik_Settings_Game_C_OnActivated_Params
	{	};

	/**
	 * Function WBP_Sheik_Settings_Game.WBP_Sheik_Settings_Game_C.OnDeactivated
	 */
	struct UWBP_Sheik_Settings_Game_C_OnDeactivated_Params
	{	};

	/**
	 * Function WBP_Sheik_Settings_Game.WBP_Sheik_Settings_Game_C.BndEvt__AdvanceLockerRoomToggle_K2Node_ComponentBoundEvent_7_OnOptionChanged__DelegateSignature
	 */
	struct UWBP_Sheik_Settings_Game_C_BndEvt__AdvanceLockerRoomToggle_K2Node_ComponentBoundEvent_7_OnOptionChanged__DelegateSignature_Params
	{
	public:
		class UIGUI_WidgetBase*                                    Source;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FText                                                Text;                                                    // 0x0008(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		int32_t                                                    index;                                                   // 0x0020(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Sheik_Settings_Game.WBP_Sheik_Settings_Game_C.BndEvt__CameraTraversalFollowToggle_K2Node_ComponentBoundEvent_9_OnOptionChanged__DelegateSignature
	 */
	struct UWBP_Sheik_Settings_Game_C_BndEvt__CameraTraversalFollowToggle_K2Node_ComponentBoundEvent_9_OnOptionChanged__DelegateSignature_Params
	{
	public:
		class UIGUI_WidgetBase*                                    Source;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FText                                                Text;                                                    // 0x0008(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		int32_t                                                    index;                                                   // 0x0020(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Sheik_Settings_Game.WBP_Sheik_Settings_Game_C.BndEvt__CameraClimbingFollowToggle_K2Node_ComponentBoundEvent_10_OnOptionChanged__DelegateSignature
	 */
	struct UWBP_Sheik_Settings_Game_C_BndEvt__CameraClimbingFollowToggle_K2Node_ComponentBoundEvent_10_OnOptionChanged__DelegateSignature_Params
	{
	public:
		class UIGUI_WidgetBase*                                    Source;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FText                                                Text;                                                    // 0x0008(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		int32_t                                                    index;                                                   // 0x0020(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Sheik_Settings_Game.WBP_Sheik_Settings_Game_C.BndEvt__CameraCombatFollowToggle_K2Node_ComponentBoundEvent_11_OnOptionChanged__DelegateSignature
	 */
	struct UWBP_Sheik_Settings_Game_C_BndEvt__CameraCombatFollowToggle_K2Node_ComponentBoundEvent_11_OnOptionChanged__DelegateSignature_Params
	{
	public:
		class UIGUI_WidgetBase*                                    Source;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FText                                                Text;                                                    // 0x0008(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		int32_t                                                    index;                                                   // 0x0020(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Sheik_Settings_Game.WBP_Sheik_Settings_Game_C.BndEvt__InputHudToggle_K2Node_ComponentBoundEvent_1_OnOptionChanged__DelegateSignature
	 */
	struct UWBP_Sheik_Settings_Game_C_BndEvt__InputHudToggle_K2Node_ComponentBoundEvent_1_OnOptionChanged__DelegateSignature_Params
	{
	public:
		class UIGUI_WidgetBase*                                    Source;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FText                                                Text;                                                    // 0x0008(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		int32_t                                                    index;                                                   // 0x0020(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Sheik_Settings_Game.WBP_Sheik_Settings_Game_C.BndEvt__WBP_Sheik_Settings_Game_UIHoldsToggle_K2Node_ComponentBoundEvent_4_OnOptionChanged__DelegateSignature
	 */
	struct UWBP_Sheik_Settings_Game_C_BndEvt__WBP_Sheik_Settings_Game_UIHoldsToggle_K2Node_ComponentBoundEvent_4_OnOptionChanged__DelegateSignature_Params
	{
	public:
		class UIGUI_WidgetBase*                                    Source;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FText                                                Text;                                                    // 0x0008(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		int32_t                                                    index;                                                   // 0x0020(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Sheik_Settings_Game.WBP_Sheik_Settings_Game_C.BndEvt__DamageNumbersToggle_K2Node_ComponentBoundEvent_0_OnOptionChanged__DelegateSignature
	 */
	struct UWBP_Sheik_Settings_Game_C_BndEvt__DamageNumbersToggle_K2Node_ComponentBoundEvent_0_OnOptionChanged__DelegateSignature_Params
	{
	public:
		class UIGUI_WidgetBase*                                    Source;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FText                                                Text;                                                    // 0x0008(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		int32_t                                                    index;                                                   // 0x0020(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Sheik_Settings_Game.WBP_Sheik_Settings_Game_C.ConstructOnlyOnce
	 */
	struct UWBP_Sheik_Settings_Game_C_ConstructOnlyOnce_Params
	{	};

	/**
	 * Function WBP_Sheik_Settings_Game.WBP_Sheik_Settings_Game_C.BndEvt__ChopCharge_K2Node_ComponentBoundEvent_5_OnOptionChanged__DelegateSignature
	 */
	struct UWBP_Sheik_Settings_Game_C_BndEvt__ChopCharge_K2Node_ComponentBoundEvent_5_OnOptionChanged__DelegateSignature_Params
	{
	public:
		class UIGUI_WidgetBase*                                    Source;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FText                                                Text;                                                    // 0x0008(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		int32_t                                                    index;                                                   // 0x0020(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Sheik_Settings_Game.WBP_Sheik_Settings_Game_C.BndEvt__WeaponAttackCharge_K2Node_ComponentBoundEvent_6_OnOptionChanged__DelegateSignature
	 */
	struct UWBP_Sheik_Settings_Game_C_BndEvt__WeaponAttackCharge_K2Node_ComponentBoundEvent_6_OnOptionChanged__DelegateSignature_Params
	{
	public:
		class UIGUI_WidgetBase*                                    Source;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FText                                                Text;                                                    // 0x0008(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		int32_t                                                    index;                                                   // 0x0020(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Sheik_Settings_Game.WBP_Sheik_Settings_Game_C.BndEvt__AutoFinishWeaponCombo_K2Node_ComponentBoundEvent_15_OnOptionChanged__DelegateSignature
	 */
	struct UWBP_Sheik_Settings_Game_C_BndEvt__AutoFinishWeaponCombo_K2Node_ComponentBoundEvent_15_OnOptionChanged__DelegateSignature_Params
	{
	public:
		class UIGUI_WidgetBase*                                    Source;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FText                                                Text;                                                    // 0x0008(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		int32_t                                                    index;                                                   // 0x0020(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Sheik_Settings_Game.WBP_Sheik_Settings_Game_C.BndEvt__Block_K2Node_ComponentBoundEvent_9_OnOptionChanged__DelegateSignature
	 */
	struct UWBP_Sheik_Settings_Game_C_BndEvt__Block_K2Node_ComponentBoundEvent_9_OnOptionChanged__DelegateSignature_Params
	{
	public:
		class UIGUI_WidgetBase*                                    Source;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FText                                                Text;                                                    // 0x0008(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		int32_t                                                    index;                                                   // 0x0020(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Sheik_Settings_Game.WBP_Sheik_Settings_Game_C.BndEvt__RepeatedDash_K2Node_ComponentBoundEvent_8_OnOptionChanged__DelegateSignature
	 */
	struct UWBP_Sheik_Settings_Game_C_BndEvt__RepeatedDash_K2Node_ComponentBoundEvent_8_OnOptionChanged__DelegateSignature_Params
	{
	public:
		class UIGUI_WidgetBase*                                    Source;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FText                                                Text;                                                    // 0x0008(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		int32_t                                                    index;                                                   // 0x0020(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Sheik_Settings_Game.WBP_Sheik_Settings_Game_C.BndEvt__WBP_Sheik_Settings_Game_AutoChopAttackCombo_K2Node_ComponentBoundEvent_24_OnOptionChanged__DelegateSignature
	 */
	struct UWBP_Sheik_Settings_Game_C_BndEvt__WBP_Sheik_Settings_Game_AutoChopAttackCombo_K2Node_ComponentBoundEvent_24_OnOptionChanged__DelegateSignature_Params
	{
	public:
		class UIGUI_WidgetBase*                                    Source;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FText                                                Text;                                                    // 0x0008(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		int32_t                                                    index;                                                   // 0x0020(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Sheik_Settings_Game.WBP_Sheik_Settings_Game_C.BndEvt__AutoReleaseChargedChop_K2Node_ComponentBoundEvent_11_OnOptionChanged__DelegateSignature
	 */
	struct UWBP_Sheik_Settings_Game_C_BndEvt__AutoReleaseChargedChop_K2Node_ComponentBoundEvent_11_OnOptionChanged__DelegateSignature_Params
	{
	public:
		class UIGUI_WidgetBase*                                    Source;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FText                                                Text;                                                    // 0x0008(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		int32_t                                                    index;                                                   // 0x0020(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Sheik_Settings_Game.WBP_Sheik_Settings_Game_C.BndEvt__WBP_Sheik_Settings_Accessibility_ViciousAttack_K2Node_ComponentBoundEvent_16_OnOptionChanged__DelegateSignature
	 */
	struct UWBP_Sheik_Settings_Game_C_BndEvt__WBP_Sheik_Settings_Accessibility_ViciousAttack_K2Node_ComponentBoundEvent_16_OnOptionChanged__DelegateSignature_Params
	{
	public:
		class UIGUI_WidgetBase*                                    Source;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FText                                                Text;                                                    // 0x0008(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		int32_t                                                    index;                                                   // 0x0020(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Sheik_Settings_Game.WBP_Sheik_Settings_Game_C.BndEvt__WBP_Sheik_Settings_Accessibility_AutoReleaseChargedVicious_K2Node_ComponentBoundEvent_14_OnOptionChanged__DelegateSignature
	 */
	struct UWBP_Sheik_Settings_Game_C_BndEvt__WBP_Sheik_Settings_Accessibility_AutoReleaseChargedVicious_K2Node_ComponentBoundEvent_14_OnOptionChanged__DelegateSignature_Params
	{
	public:
		class UIGUI_WidgetBase*                                    Source;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FText                                                Text;                                                    // 0x0008(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		int32_t                                                    index;                                                   // 0x0020(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Sheik_Settings_Game.WBP_Sheik_Settings_Game_C.BndEvt__SpecialAttackCharge_K2Node_ComponentBoundEvent_7_OnOptionChanged__DelegateSignature
	 */
	struct UWBP_Sheik_Settings_Game_C_BndEvt__SpecialAttackCharge_K2Node_ComponentBoundEvent_7_OnOptionChanged__DelegateSignature_Params
	{
	public:
		class UIGUI_WidgetBase*                                    Source;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FText                                                Text;                                                    // 0x0008(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		int32_t                                                    index;                                                   // 0x0020(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Sheik_Settings_Game.WBP_Sheik_Settings_Game_C.BndEvt__AutoRealeaseChargedSpecialMove_K2Node_ComponentBoundEvent_13_OnOptionChanged__DelegateSignature
	 */
	struct UWBP_Sheik_Settings_Game_C_BndEvt__AutoRealeaseChargedSpecialMove_K2Node_ComponentBoundEvent_13_OnOptionChanged__DelegateSignature_Params
	{
	public:
		class UIGUI_WidgetBase*                                    Source;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FText                                                Text;                                                    // 0x0008(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		int32_t                                                    index;                                                   // 0x0020(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Sheik_Settings_Game.WBP_Sheik_Settings_Game_C.BndEvt__WeaponAiming_K2Node_ComponentBoundEvent_10_OnOptionChanged__DelegateSignature
	 */
	struct UWBP_Sheik_Settings_Game_C_BndEvt__WeaponAiming_K2Node_ComponentBoundEvent_10_OnOptionChanged__DelegateSignature_Params
	{
	public:
		class UIGUI_WidgetBase*                                    Source;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FText                                                Text;                                                    // 0x0008(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		int32_t                                                    index;                                                   // 0x0020(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Sheik_Settings_Game.WBP_Sheik_Settings_Game_C.BndEvt__AutoRealeaseChargedWeaponAttack_K2Node_ComponentBoundEvent_12_OnOptionChanged__DelegateSignature
	 */
	struct UWBP_Sheik_Settings_Game_C_BndEvt__AutoRealeaseChargedWeaponAttack_K2Node_ComponentBoundEvent_12_OnOptionChanged__DelegateSignature_Params
	{
	public:
		class UIGUI_WidgetBase*                                    Source;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FText                                                Text;                                                    // 0x0008(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		int32_t                                                    index;                                                   // 0x0020(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Sheik_Settings_Game.WBP_Sheik_Settings_Game_C.ExecuteUbergraph_WBP_Sheik_Settings_Game
	 */
	struct UWBP_Sheik_Settings_Game_C_ExecuteUbergraph_WBP_Sheik_Settings_Game_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
