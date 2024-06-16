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
	 * BlueprintGeneratedClass BP_SheikCharacter.BP_SheikCharacter_C
	 * Size -> 0x0058 (FullSize[0x1338] - InheritedSize[0x12E0])
	 */
	class ABP_SheikCharacter_C : public ASheikCharacter
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x12E0(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class USceneComponent*                                     AudioListenerAttenuationComponent;                       // 0x12E8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UBP_Sheik_SpectatorWidgetComponent_C*                SpectatorWidget;                                         // 0x12F0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USheikNavigationInvokerComponent*                    SheikNavigationInvoker;                                  // 0x12F8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UAIPerceptionStimuliSourceComponent*                 AIPerceptionStimuliSource;                               // 0x1300(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UBP_CameraSpringArmComponent_C*                      BP_CameraSpringArmComponent;                             // 0x1308(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UDecalComponent*                                     DropShadow;                                              // 0x1310(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UChar_VFXComponent_C*                                Char_VFXComponent;                                       // 0x1318(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UCameraComponent*                                    CannonAimingCamera;                                      // 0x1320(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UChar_SFXComponent_C*                                Char_SFXComponent;                                       // 0x1328(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UPostProcessComponent*                               PostProcess;                                             // 0x1330(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash

	public:
		EMoveTier GetSpecialMoveDisplayTier(class UIGMoveMontage* Move, EMoveTier OverridableTier);
		void OnClientIsAimingCannonChanged(bool NewIsAimingCannon);
		void ReceiveBeginPlay();
		void OnClientFiredCannon();
		void SetSpectatorInfoVisibility(bool bIsVisible);
		void OnProjectileAimEnter();
		void OnProjectileAimExit();
		void SupplyPlayerStateToSpectatorInfo();
		void ExecuteUbergraph_BP_SheikCharacter(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
