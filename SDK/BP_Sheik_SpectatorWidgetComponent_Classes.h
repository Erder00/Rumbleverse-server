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
	 * BlueprintGeneratedClass BP_Sheik_SpectatorWidgetComponent.BP_Sheik_SpectatorWidgetComponent_C
	 * Size -> 0x0008 (FullSize[0x0608] - InheritedSize[0x0600])
	 */
	class UBP_Sheik_SpectatorWidgetComponent_C : public USheikCharacterInfoWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0600(0x0008) ZeroConstructor, Transient, DuplicateTransient

	public:
		void SetHealthbarVisibility22(bool IsVisible);
		void SetWidgetShouldBeShown(bool NewVisibility);
		void SetForPlayer(class ASheikPlayerStateCommon* SheikPlayerState);
		void UpdateRenderScale(const struct FVector2D& NewScale);
		void SetHealthbarVisiblity(bool IsVisible);
		void ExecuteUbergraph_BP_Sheik_SpectatorWidgetComponent(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
