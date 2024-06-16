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
	 * BlueprintGeneratedClass BPFL_SheikPartyMember.BPFL_SheikPartyMember_C
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UBPFL_SheikPartyMember_C : public UBlueprintFunctionLibrary
	{
	public:
		void GetColorByPartyID(int32_t PartyMemberID, class UObject* __WorldContext, struct FSlateColor* PartySlateColor, struct FLinearColor* PartyLinearColor);
		void FindFloatAttribute(const struct FPartyMemberInfo& PartyMember, const class FString& AttributeName, class UObject* __WorldContext, float* Value, bool* bFound);
		void ResolvePlatformImage(const struct FPartyMemberInfo& PartyMember, class UObject* __WorldContext, struct FSlateBrush* Brush);
		void FindStringAttribute(const struct FPartyMemberInfo& PartyMember, const class FString& AttributeName, class UObject* __WorldContext, class FString* Value, bool* bFound);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
