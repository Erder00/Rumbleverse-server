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
	 * Function WBP_SpectatorHUD.WBP_SpectatorHUD_C.OnVoiceChatMuteListChanged
	 */
	struct UWBP_SpectatorHUD_C_OnVoiceChatMuteListChanged_Params
	{	};

	/**
	 * Function WBP_SpectatorHUD.WBP_SpectatorHUD_C.SetMutePromptText
	 */
	struct UWBP_SpectatorHUD_C_SetMutePromptText_Params
	{
	public:
		bool                                                       IsAllMuted;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_SpectatorHUD.WBP_SpectatorHUD_C.OpenSettingsMenu
	 */
	struct UWBP_SpectatorHUD_C_OpenSettingsMenu_Params
	{
	public:
		struct FInputEventData                                     InputEventData;                                          // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function WBP_SpectatorHUD.WBP_SpectatorHUD_C.OnVoiceChatOptionsChanged
	 */
	struct UWBP_SpectatorHUD_C_OnVoiceChatOptionsChanged_Params
	{
	public:
		bool                                                       IsEnabled;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       IsMuted;                                                 // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       IsDefeaned;                                              // 0x0002(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       IsPushToTalk;                                            // 0x0003(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_SpectatorHUD.WBP_SpectatorHUD_C.OnNextPlayerPressed_cb
	 */
	struct UWBP_SpectatorHUD_C_OnNextPlayerPressed_cb_Params
	{
	public:
		struct FInputEventData                                     InputEventData;                                          // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function WBP_SpectatorHUD.WBP_SpectatorHUD_C.OnFreeCamPressed_cb
	 */
	struct UWBP_SpectatorHUD_C_OnFreeCamPressed_cb_Params
	{
	public:
		struct FInputEventData                                     InputEventData;                                          // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function WBP_SpectatorHUD.WBP_SpectatorHUD_C.OnAutoControlCamPressed_cb
	 */
	struct UWBP_SpectatorHUD_C_OnAutoControlCamPressed_cb_Params
	{
	public:
		struct FInputEventData                                     InputEventData;                                          // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function WBP_SpectatorHUD.WBP_SpectatorHUD_C.OnTeammateDied
	 */
	struct UWBP_SpectatorHUD_C_OnTeammateDied_Params
	{
	public:
		class AIGPlayerState*                                      TeammatePlayerState;                                     // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_SpectatorHUD.WBP_SpectatorHUD_C.UpdateSpectatedPlayerPlatformImage
	 */
	struct UWBP_SpectatorHUD_C_UpdateSpectatedPlayerPlatformImage_Params
	{
	public:
		class ASheikPlayerStateCommon*                             Target;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_SpectatorHUD.WBP_SpectatorHUD_C.SetInitialSounds
	 */
	struct UWBP_SpectatorHUD_C_SetInitialSounds_Params
	{	};

	/**
	 * Function WBP_SpectatorHUD.WBP_SpectatorHUD_C.SetInitialStates
	 */
	struct UWBP_SpectatorHUD_C_SetInitialStates_Params
	{	};

	/**
	 * Function WBP_SpectatorHUD.WBP_SpectatorHUD_C.ToggleSpectatorVisibility
	 */
	struct UWBP_SpectatorHUD_C_ToggleSpectatorVisibility_Params
	{
	public:
		bool                                                       Show;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_SpectatorHUD.WBP_SpectatorHUD_C.SetIsSpectatorMovementAllowed
	 */
	struct UWBP_SpectatorHUD_C_SetIsSpectatorMovementAllowed_Params
	{
	public:
		bool                                                       CachedSpecatorMovementAllowed;                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_SpectatorHUD.WBP_SpectatorHUD_C.ManageInputSubscriptions
	 */
	struct UWBP_SpectatorHUD_C_ManageInputSubscriptions_Params
	{
	public:
		bool                                                       Subscribe;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_SpectatorHUD.WBP_SpectatorHUD_C.SetVisibilityForPlayerSpecificHUD
	 */
	struct UWBP_SpectatorHUD_C_SetVisibilityForPlayerSpecificHUD_Params
	{
	public:
		bool                                                       IsVisible;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_SpectatorHUD.WBP_SpectatorHUD_C.OnPlayerViewToggleChanged
	 */
	struct UWBP_SpectatorHUD_C_OnPlayerViewToggleChanged_Params
	{	};

	/**
	 * Function WBP_SpectatorHUD.WBP_SpectatorHUD_C.OnPlayerFollowingChanged
	 */
	struct UWBP_SpectatorHUD_C_OnPlayerFollowingChanged_Params
	{
	public:
		bool                                                       IsFollowingPlayer;                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_91QR[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function WBP_SpectatorHUD.WBP_SpectatorHUD_C.ConstructOnlyOnce
	 */
	struct UWBP_SpectatorHUD_C_ConstructOnlyOnce_Params
	{	};

	/**
	 * Function WBP_SpectatorHUD.WBP_SpectatorHUD_C.ExecuteUbergraph_WBP_SpectatorHUD
	 */
	struct UWBP_SpectatorHUD_C_ExecuteUbergraph_WBP_SpectatorHUD_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
