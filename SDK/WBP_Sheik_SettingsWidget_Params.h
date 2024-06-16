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
	 * Function WBP_Sheik_SettingsWidget.WBP_Sheik_SettingsWidget_C.GetDescription
	 */
	struct UWBP_Sheik_SettingsWidget_C_GetDescription_Params
	{
	public:
		class FText                                                Description;                                             // 0x0000(0x0018)  (Parm, OutParm)
	};

	/**
	 * Function WBP_Sheik_SettingsWidget.WBP_Sheik_SettingsWidget_C.GetName
	 */
	struct UWBP_Sheik_SettingsWidget_C_GetName_Params
	{
	public:
		class FText                                                Name;                                                    // 0x0000(0x0018)  (Parm, OutParm)
	};

	/**
	 * Function WBP_Sheik_SettingsWidget.WBP_Sheik_SettingsWidget_C.SetDescription
	 */
	struct UWBP_Sheik_SettingsWidget_C_SetDescription_Params
	{
	public:
		class FText                                                Description;                                             // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function WBP_Sheik_SettingsWidget.WBP_Sheik_SettingsWidget_C.SetName
	 */
	struct UWBP_Sheik_SettingsWidget_C_SetName_Params
	{
	public:
		class FText                                                Name;                                                    // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function WBP_Sheik_SettingsWidget.WBP_Sheik_SettingsWidget_C.ExecuteUbergraph_WBP_Sheik_SettingsWidget
	 */
	struct UWBP_Sheik_SettingsWidget_C_ExecuteUbergraph_WBP_Sheik_SettingsWidget_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_FPTP[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
