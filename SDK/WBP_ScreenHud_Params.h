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
	 * Function WBP_ScreenHud.WBP_ScreenHud_C.SetSpecialMovesNotWinded
	 */
	struct UWBP_ScreenHud_C_SetSpecialMovesNotWinded_Params
	{	};

	/**
	 * Function WBP_ScreenHud.WBP_ScreenHud_C.ShowEOMScreen
	 */
	struct UWBP_ScreenHud_C_ShowEOMScreen_Params
	{	};

	/**
	 * Function WBP_ScreenHud.WBP_ScreenHud_C.OnTimeTillFreeRoamEnds
	 */
	struct UWBP_ScreenHud_C_OnTimeTillFreeRoamEnds_Params
	{
	public:
		int32_t                                                    TimeTillFreeRoamEnd;                                     // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_PA81[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function WBP_ScreenHud.WBP_ScreenHud_C.IsPlaygroundMode
	 */
	struct UWBP_ScreenHud_C_IsPlaygroundMode_Params
	{
	public:
		bool                                                       Out;                                                     // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_RG2J[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function WBP_ScreenHud.WBP_ScreenHud_C.OpenPlaygroundPopup
	 */
	struct UWBP_ScreenHud_C_OpenPlaygroundPopup_Params
	{
	public:
		struct FDataTableRowHandle                                 ReadableContent;                                         // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	};

	/**
	 * Function WBP_ScreenHud.WBP_ScreenHud_C.SetHudRegionVisibility
	 */
	struct UWBP_ScreenHud_C_SetHudRegionVisibility_Params
	{	};

	/**
	 * Function WBP_ScreenHud.WBP_ScreenHud_C.GetHudRegionVisibility
	 */
	struct UWBP_ScreenHud_C_GetHudRegionVisibility_Params
	{
	public:
		ESheikHudRegion                                            HudRegion;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		ESlateVisibility                                           OutVisibility;                                           // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_ScreenHud.WBP_ScreenHud_C.ToggleHudRegionVisibility
	 */
	struct UWBP_ScreenHud_C_ToggleHudRegionVisibility_Params
	{
	public:
		ESheikHudRegion                                            InRegion;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       InVisibility;                                            // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_ScreenHud.WBP_ScreenHud_C.HandleOnGoingToBackground
	 */
	struct UWBP_ScreenHud_C_HandleOnGoingToBackground_Params
	{	};

	/**
	 * Function WBP_ScreenHud.WBP_ScreenHud_C.OpenMagazineEquipScreen
	 */
	struct UWBP_ScreenHud_C_OpenMagazineEquipScreen_Params
	{
	public:
		class UIGMoveMontage*                                      MoveMontage;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		EMoveTier                                                  MoveTier;                                                // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_64FS[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function WBP_ScreenHud.WBP_ScreenHud_C.OnRoundFinished_cb
	 */
	struct UWBP_ScreenHud_C_OnRoundFinished_cb_Params
	{
	public:
		TArray<class AIGPlayerState*>                              WinningPlayer;                                           // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		bool                                                       isLocalPlayer;                                           // 0x0010(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       IsSpectating;                                            // 0x0011(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_XNT8[0x6];                                   // 0x0012(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function WBP_ScreenHud.WBP_ScreenHud_C.OpenMapScreen
	 */
	struct UWBP_ScreenHud_C_OpenMapScreen_Params
	{
	public:
		struct FInputEventData                                     InputEventData;                                          // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function WBP_ScreenHud.WBP_ScreenHud_C.OpenPauseScreen
	 */
	struct UWBP_ScreenHud_C_OpenPauseScreen_Params
	{
	public:
		struct FInputEventData                                     InputEventData;                                          // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function WBP_ScreenHud.WBP_ScreenHud_C.DebugToggleVisibility
	 */
	struct UWBP_ScreenHud_C_DebugToggleVisibility_Params
	{
	public:
		struct FInputEventData                                     InputEventData;                                          // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function WBP_ScreenHud.WBP_ScreenHud_C.OnLoseFocus
	 */
	struct UWBP_ScreenHud_C_OnLoseFocus_Params
	{
	public:
		int32_t                                                    UserIndex;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_ScreenHud.WBP_ScreenHud_C.ShowPlaygroundModeBeginPopup
	 */
	struct UWBP_ScreenHud_C_ShowPlaygroundModeBeginPopup_Params
	{	};

	/**
	 * Function WBP_ScreenHud.WBP_ScreenHud_C.ExecBP_TestWinnerPrompt
	 */
	struct UWBP_ScreenHud_C_ExecBP_TestWinnerPrompt_Params
	{
	public:
		class FString                                              Param1;                                                  // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		class FString                                              Param2;                                                  // 0x0010(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		class FString                                              Param3;                                                  // 0x0020(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		class FString                                              Param4;                                                  // 0x0030(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_ScreenHud.WBP_ScreenHud_C.HideWinnerPrompt
	 */
	struct UWBP_ScreenHud_C_HideWinnerPrompt_Params
	{	};

	/**
	 * Function WBP_ScreenHud.WBP_ScreenHud_C.OnGainFocus
	 */
	struct UWBP_ScreenHud_C_OnGainFocus_Params
	{
	public:
		int32_t                                                    UserIndex;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_ScreenHud.WBP_ScreenHud_C.ConstructOnlyOnce
	 */
	struct UWBP_ScreenHud_C_ConstructOnlyOnce_Params
	{	};

	/**
	 * Function WBP_ScreenHud.WBP_ScreenHud_C.ExecuteUbergraph_WBP_ScreenHud
	 */
	struct UWBP_ScreenHud_C_ExecuteUbergraph_WBP_ScreenHud_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_ScreenHud.WBP_ScreenHud_C.OnMinigameInput__DelegateSignature
	 */
	struct UWBP_ScreenHud_C_OnMinigameInput__DelegateSignature_Params
	{
	public:
		struct FSheikMinigameResults                               MinigameResults;                                         // 0x0000(0x0020)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	};

	/**
	 * Function WBP_ScreenHud.WBP_ScreenHud_C.OnMinigameStarted__DelegateSignature
	 */
	struct UWBP_ScreenHud_C_OnMinigameStarted__DelegateSignature_Params
	{
	public:
		struct FSheikMinigameInfo                                  MinigameInfo;                                            // 0x0000(0x0030)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
