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
	 * Enum IGDataTable.EIGDTSourceEditor
	 */
	enum class EIGDTSourceEditor : uint8_t
	{
		Default = 0,
		XLSM    = 1,
		Text    = 2,
		Custom  = 3,
		MAX     = 4
	};

	/**
	 * Enum IGDataTable.EIGDTSourceFormat
	 */
	enum class EIGDTSourceFormat : uint8_t
	{
		CSV  = 0,
		JSON = 1,
		MAX  = 2
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
