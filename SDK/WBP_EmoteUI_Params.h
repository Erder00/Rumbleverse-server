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
	 * Function WBP_EmoteUI.WBP_EmoteUI_C.MuteAllSlotSounds
	 */
	struct UWBP_EmoteUI_C_MuteAllSlotSounds_Params
	{	};

	/**
	 * Function WBP_EmoteUI.WBP_EmoteUI_C.SetPlayPageSlotSounds
	 */
	struct UWBP_EmoteUI_C_SetPlayPageSlotSounds_Params
	{
	public:
		class UWBP_EmoteUIPage_C*                                  EmoteUIPage;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       inPlaySound;                                             // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_BV3U[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function WBP_EmoteUI.WBP_EmoteUI_C.UpdateNextButton
	 */
	struct UWBP_EmoteUI_C_UpdateNextButton_Params
	{
	public:
		int32_t                                                    PageNumber;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_EmoteUI.WBP_EmoteUI_C.WBP_EmoteUI_PopulatePagesAndSlots
	 */
	struct UWBP_EmoteUI_C_WBP_EmoteUI_PopulatePagesAndSlots_Params
	{	};

	/**
	 * Function WBP_EmoteUI.WBP_EmoteUI_C.WBP_EmoteUI_PlayShowAnim
	 */
	struct UWBP_EmoteUI_C_WBP_EmoteUI_PlayShowAnim_Params
	{	};

	/**
	 * Function WBP_EmoteUI.WBP_EmoteUI_C.WBP_EmoteUI_Display
	 */
	struct UWBP_EmoteUI_C_WBP_EmoteUI_Display_Params
	{	};

	/**
	 * Function WBP_EmoteUI.WBP_EmoteUI_C.WBP Emote UI Load
	 */
	struct UWBP_EmoteUI_C_WBPEmoteUILoad_Params
	{	};

	/**
	 * Function WBP_EmoteUI.WBP_EmoteUI_C.WBP_EmoteUI_Open
	 */
	struct UWBP_EmoteUI_C_WBP_EmoteUI_Open_Params
	{
	public:
		bool                                                       IsOpen;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_EmoteUI.WBP_EmoteUI_C.ConstructOnlyOnce
	 */
	struct UWBP_EmoteUI_C_ConstructOnlyOnce_Params
	{	};

	/**
	 * Function WBP_EmoteUI.WBP_EmoteUI_C.ExecuteUbergraph_WBP_EmoteUI
	 */
	struct UWBP_EmoteUI_C_ExecuteUbergraph_WBP_EmoteUI_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
