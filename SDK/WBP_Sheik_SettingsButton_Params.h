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
	 * Function WBP_Sheik_SettingsButton.WBP_Sheik_SettingsButton_C.GetDescription
	 */
	struct UWBP_Sheik_SettingsButton_C_GetDescription_Params
	{
	public:
		class FText                                                Description;                                             // 0x0000(0x0018)  (Parm, OutParm)
	};

	/**
	 * Function WBP_Sheik_SettingsButton.WBP_Sheik_SettingsButton_C.GetName
	 */
	struct UWBP_Sheik_SettingsButton_C_GetName_Params
	{
	public:
		class FText                                                Name;                                                    // 0x0000(0x0018)  (Parm, OutParm)
	};

	/**
	 * Function WBP_Sheik_SettingsButton.WBP_Sheik_SettingsButton_C.HandleDisabling
	 */
	struct UWBP_Sheik_SettingsButton_C_HandleDisabling_Params
	{
	public:
		bool                                                       Condition;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_Sheik_SettingsButton.WBP_Sheik_SettingsButton_C.ShowLoading
	 */
	struct UWBP_Sheik_SettingsButton_C_ShowLoading_Params
	{
	public:
		bool                                                       Show;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_Sheik_SettingsButton.WBP_Sheik_SettingsButton_C.OnGainFocus
	 */
	struct UWBP_Sheik_SettingsButton_C_OnGainFocus_Params
	{
	public:
		int32_t                                                    UserIndex;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Sheik_SettingsButton.WBP_Sheik_SettingsButton_C.OnLoseFocus
	 */
	struct UWBP_Sheik_SettingsButton_C_OnLoseFocus_Params
	{
	public:
		int32_t                                                    UserIndex;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Sheik_SettingsButton.WBP_Sheik_SettingsButton_C.OnSelected
	 */
	struct UWBP_Sheik_SettingsButton_C_OnSelected_Params
	{
	public:
		int32_t                                                    UserIndex;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Sheik_SettingsButton.WBP_Sheik_SettingsButton_C.SetDescription
	 */
	struct UWBP_Sheik_SettingsButton_C_SetDescription_Params
	{
	public:
		class FText                                                Description;                                             // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function WBP_Sheik_SettingsButton.WBP_Sheik_SettingsButton_C.SetName
	 */
	struct UWBP_Sheik_SettingsButton_C_SetName_Params
	{
	public:
		class FText                                                Name;                                                    // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function WBP_Sheik_SettingsButton.WBP_Sheik_SettingsButton_C.SetDisabled
	 */
	struct UWBP_Sheik_SettingsButton_C_SetDisabled_Params
	{
	public:
		bool                                                       bDisabled;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_Sheik_SettingsButton.WBP_Sheik_SettingsButton_C.SetDisabledWithoutAnimation
	 */
	struct UWBP_Sheik_SettingsButton_C_SetDisabledWithoutAnimation_Params
	{
	public:
		bool                                                       bDisabled;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_Sheik_SettingsButton.WBP_Sheik_SettingsButton_C.ExecuteUbergraph_WBP_Sheik_SettingsButton
	 */
	struct UWBP_Sheik_SettingsButton_C_ExecuteUbergraph_WBP_Sheik_SettingsButton_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
