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
	 * BlueprintGeneratedClass BPFL_SheikPlayerAccounts.BPFL_SheikPlayerAccounts_C
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UBPFL_SheikPlayerAccounts_C : public UBlueprintFunctionLibrary
	{
	public:
		void PrintSocialEntry(const struct FSheikPlayerSocialEntry& SocialEntry, class UObject* __WorldContext);
		void GetServicePlatformImage(ESheikPlatformService Service, class UObject* __WorldContext, struct FSlateBrush* Brush);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
