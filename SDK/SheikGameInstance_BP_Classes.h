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
	 * BlueprintGeneratedClass SheikGameInstance_BP.SheikGameInstance_BP_C
	 * Size -> 0x0028 (FullSize[0x0E00] - InheritedSize[0x0DD8])
	 */
	class USheikGameInstance_BP_C : public USheikGameInstance
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0DD8(0x0008) ZeroConstructor, Transient, DuplicateTransient
		TArray<class UActorComponent*>                             FrontendPersistentComponents;                            // 0x0DE0(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference
		class UAudioComponent*                                     FrontendMusic;                                           // 0x0DF0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UAudioComponent*                                     FrontendLogoSFX;                                         // 0x0DF8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void GetErrorText(const struct FSheikError& Error, class FText* HeaderText, class FText* BodyText, class FText* ErrorCodeText);
		void InitGraphicsSettings();
		void InitAccessibilitySettings();
		void InitAllSettings();
		void InitCultureSettings();
		void InitAudioSettings();
		void FadeOutFrontendLogoSFX();
		void PlayFrontendLogoSFX();
		void RemoveAllFrontendComponents();
		void FadeOutFrontendMusic();
		void PlayFrontendMusic();
		void InitializeAudioSettings();
		void ReceiveInit();
		void ExecuteUbergraph_SheikGameInstance_BP(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
