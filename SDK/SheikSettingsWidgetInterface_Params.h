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
	 * Function SheikSettingsWidgetInterface.SheikSettingsWidgetInterface_C.SetDescription
	 */
	struct USheikSettingsWidgetInterface_C_SetDescription_Params
	{
	public:
		class FText                                                Description;                                             // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function SheikSettingsWidgetInterface.SheikSettingsWidgetInterface_C.SetName
	 */
	struct USheikSettingsWidgetInterface_C_SetName_Params
	{
	public:
		class FText                                                Name;                                                    // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function SheikSettingsWidgetInterface.SheikSettingsWidgetInterface_C.GetDescription
	 */
	struct USheikSettingsWidgetInterface_C_GetDescription_Params
	{
	public:
		class FText                                                Description;                                             // 0x0000(0x0018)  (Parm, OutParm)
	};

	/**
	 * Function SheikSettingsWidgetInterface.SheikSettingsWidgetInterface_C.GetName
	 */
	struct USheikSettingsWidgetInterface_C_GetName_Params
	{
	public:
		class FText                                                Name;                                                    // 0x0000(0x0018)  (Parm, OutParm)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
