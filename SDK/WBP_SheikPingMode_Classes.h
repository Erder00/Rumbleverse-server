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
	 * WidgetBlueprintGeneratedClass WBP_SheikPingMode.WBP_SheikPingMode_C
	 * Size -> 0x0030 (FullSize[0x04B0] - InheritedSize[0x0480])
	 */
	class UWBP_SheikPingMode_C : public USheikScreenBase
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0480(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UWidgetAnimation*                                    PulseAnim;                                               // 0x0488(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UImage*                                              ReticleImage;                                            // 0x0490(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		struct FTimerHandle                                        AutoHideFailSafeTimerHandle;                             // 0x0498(0x0008) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		float                                                      AutoHideFailSafeTimeout;                                 // 0x04A0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      ShowWidgetTime;                                          // 0x04A4(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FTimerHandle                                        ShowWidgetTimerHandle;                                   // 0x04A8(0x0008) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash

	public:
		void ClosePingContext();
		void ExitPingMode();
		void EnterPingMode();
		void ConstructOnlyOnce();
		void OnPerformSpecialMoveEquipChoice(class UIGMoveMontage* MoveMontage, EMoveTier ExecutionTier);
		void EmoteUIOpen(bool IsOpen);
		void OnCharacterDied(ECauseOfDeath Cause);
		void OnCharacterDamaged(const struct FIGInstanceHitData& HitData);
		void ExecuteUbergraph_WBP_SheikPingMode(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
