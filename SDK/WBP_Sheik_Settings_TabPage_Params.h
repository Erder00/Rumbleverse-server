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
	 * Function WBP_Sheik_Settings_TabPage.WBP_Sheik_Settings_TabPage_C.GetSavedSettings
	 */
	struct UWBP_Sheik_Settings_TabPage_C_GetSavedSettings_Params
	{
	public:
		class USheikSavedSettings*                                 OutSettings;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Sheik_Settings_TabPage.WBP_Sheik_Settings_TabPage_C.OnWidgetFocused_cb
	 */
	struct UWBP_Sheik_Settings_TabPage_C_OnWidgetFocused_cb_Params
	{
	public:
		class UIGUI_WidgetBase*                                    Widget;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    UserIndex;                                               // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_2AW9[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function WBP_Sheik_Settings_TabPage.WBP_Sheik_Settings_TabPage_C.BindAllOnWidgetFocused
	 */
	struct UWBP_Sheik_Settings_TabPage_C_BindAllOnWidgetFocused_Params
	{
	public:
		class UWBP_Sheik_Settings_DescriptionPanel_C*              DescriptionPanel;                                        // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
