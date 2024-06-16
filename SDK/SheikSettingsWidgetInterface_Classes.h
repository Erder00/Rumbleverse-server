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
	 * BlueprintGeneratedClass SheikSettingsWidgetInterface.SheikSettingsWidgetInterface_C
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class USheikSettingsWidgetInterface_C : public UInterface
	{
	public:
		void SetDescription(const class FText& Description);
		void SetName(const class FText& Name);
		void GetDescription(class FText* Description);
		void GetName(class FText* Name);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
