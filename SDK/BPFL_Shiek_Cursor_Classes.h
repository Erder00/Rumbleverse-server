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
	// # Classes
	// --------------------------------------------------
	/**
	 * BlueprintGeneratedClass BPFL_Shiek_Cursor.BPFL_Shiek_Cursor_C
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UBPFL_Shiek_Cursor_C : public UBlueprintFunctionLibrary
	{
	public:
		void ForceDefaultInputSource(class UObject* __WorldContext);
		void SetCursorAllowedForGameplayMenus(bool UseMenuInput, class UObject* __WorldContext);
		void SetupSoftCursorOnHUDLoad(class UObject* Context, bool AllowCursorByDefault, class UObject* __WorldContext);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
