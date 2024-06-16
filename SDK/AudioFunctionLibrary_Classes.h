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
	 * BlueprintGeneratedClass AudioFunctionLibrary.AudioFunctionLibrary_C
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UAudioFunctionLibrary_C : public UBlueprintFunctionLibrary
	{
	public:
		void GetPlayerCharReference(class UObject* __WorldContext, class ABP_SheikCharacter_C** BPCharacter);
		void HandleScrollableListSound(class UWidget* CallingWidget, float ScrollOffset, float ScrollSoundOffset, class UObject* __WorldContext, float* NewScrollSoundOffset);
		void HandleButtonReleasedSound(class UWidget* CallingWidget, class UAudioComponent* inHoldButtonLoop, class UObject* __WorldContext);
		void HandleButtonHeldSound(class UWidget* CallingWidget, class UObject* __WorldContext, class UAudioComponent** outHoldButtonLoop);
		void PlayUISound(class UWidget* CallingWidget, EUISounds SoundType, class UObject* __WorldContext);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
