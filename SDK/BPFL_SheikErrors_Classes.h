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
	 * BlueprintGeneratedClass BPFL_SheikErrors.BPFL_SheikErrors_C
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UBPFL_SheikErrors_C : public UBlueprintFunctionLibrary
	{
	public:
		void CreateSheikErrorPopup(const struct FSheikError& Error, class UObject* __WorldContext, int32_t* PopupId);
		void GetErrorHeaderAndBodyText(const struct FSheikError& Error, class UObject* __WorldContext, class FText* HeaderText, class FText* BodyText);
		void GetErrorCodeText(const struct FSheikError& Error, class UObject* __WorldContext, class FText* Text);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
