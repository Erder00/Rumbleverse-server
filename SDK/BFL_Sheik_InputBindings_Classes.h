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
	 * BlueprintGeneratedClass BFL_Sheik_InputBindings.BFL_Sheik_InputBindings_C
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UBFL_Sheik_InputBindings_C : public UBlueprintFunctionLibrary
	{
	public:
		void GetPlatformDefaultGamepad(ESheikPlatform Platform, class UObject* __WorldContext, EInputSource* Out);
		void GetKeysForComboAction(const class FName& InActionName, class UObject* __WorldContext, TArray<class FName>* Out);
		void IsComboAction(const class FName& InActionName, class UObject* __WorldContext, bool* Out);
		void GetSecondaryKeyFromBoundKeyInfo(const struct FBoundKeyInfo& InBoundInfo, class UObject* __WorldContext, struct FKey* OutKey);
		void GetPrimaryKeyFromBoundKeyInfo(const struct FBoundKeyInfo& InBoundInfo, class UObject* __WorldContext, struct FKey* OutKey);
		void GetDisplayNameForAction(const class FName& InActionName, class UObject* __WorldContext, class FText* OutDisplayName);
		void IsKeyBannedFromAssignment(const struct FKey& InKey, class UObject* __WorldContext, bool* OutBanned);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
