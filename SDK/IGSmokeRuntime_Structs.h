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
	// # Enums
	// --------------------------------------------------
	/**
	 * Enum IGSmokeRuntime.ESmokeTaskState
	 */
	enum class ESmokeTaskState : uint8_t
	{
		Begin      = 0,
		InProgress = 1,
		End        = 2,
		MAX        = 3
	};

	/**
	 * Enum IGSmokeRuntime.ESmokeTaskManagerState
	 */
	enum class ESmokeTaskManagerState : uint8_t
	{
		STM_NotRunning         = 0,
		STM_ConfirmMap         = 1,
		STM_WaitingToSwitchMap = 2,
		STM_Initializing       = 3,
		STM_Running            = 4,
		STM_Holding            = 5,
		STM_MAX                = 6
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
