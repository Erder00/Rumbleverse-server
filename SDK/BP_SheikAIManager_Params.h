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
	 * Function BP_SheikAIManager.BP_SheikAIManager_C.GetSprintingEnabled
	 */
	struct UBP_SheikAIManager_C_GetSprintingEnabled_Params
	{
	public:
		bool                                                       SprintingEnabled;                                        // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_SheikAIManager.BP_SheikAIManager_C.GetBotName
	 */
	struct UBP_SheikAIManager_C_GetBotName_Params
	{
	public:
		class FString                                              OutName;                                                 // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_SheikAIManager.BP_SheikAIManager_C.RequestNamesFromTable
	 */
	struct UBP_SheikAIManager_C_RequestNamesFromTable_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
