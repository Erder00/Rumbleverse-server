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
	 * BlueprintGeneratedClass BPFL_SheikShared.BPFL_SheikShared_C
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UBPFL_SheikShared_C : public UBlueprintFunctionLibrary
	{
	public:
		void CreateSaveCustomizationsPopup(const class FScriptDelegate& SaveAndLeavePage_Delegate, const class FScriptDelegate& DiscardChangesAndLeavePage_Delegate, const class FScriptDelegate& Cancel_Delegate, class UObject* __WorldContext);
		void GetTestLoremIpsumDescription(int32_t LengthMin, int32_t LengthMax, class UObject* __WorldContext, class FString* String, class FText* Text);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
