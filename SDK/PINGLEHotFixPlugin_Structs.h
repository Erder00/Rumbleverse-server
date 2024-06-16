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
	 * Enum PINGLEHotFixPlugin.EPatchType
	 */
	enum class EPatchType : uint8_t
	{
		Unknown      = 0,
		Localization = 1,
		GameSettings = 2,
		MAX          = 3
	};

	/**
	 * Enum PINGLEHotFixPlugin.EAutoApplyPatch
	 */
	enum class EAutoApplyPatch : uint8_t
	{
		None                 = 0,
		OnPostInitProperties = 1,
		DoNotApplyPatch      = 2,
		AfterPatchDownLoaded = 3,
		MAX                  = 4
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
