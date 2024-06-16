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
	 * WidgetBlueprintGeneratedClass WBP_Sheik_ThrownItemIndicator.WBP_Sheik_ThrownItemIndicator_C
	 * Size -> 0x0030 (FullSize[0x0458] - InheritedSize[0x0428])
	 */
	class UWBP_Sheik_ThrownItemIndicator_C : public USheikThrownItemIndicator
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0428(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UWidgetAnimation*                                    ExclamationAnim;                                         // 0x0430(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UImage*                                              ExMarkImage;                                             // 0x0438(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		struct FTimerHandle                                        AutoHideFailSafeTimerHandle;                             // 0x0440(0x0008) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		float                                                      AutoHideFailSafeTimeout;                                 // 0x0448(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      ShowWidgetTime;                                          // 0x044C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FTimerHandle                                        ShowWidgetTimerHandle;                                   // 0x0450(0x0008) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash

	public:
		void ShowWidget();
		void AutoHideWidget();
		void HandleOnThrownItemNoLongerTargetingPlayer_BP(class AIGInteractablePickup* ThrownItem);
		void ConstructOnlyOnce();
		void HandleOnThrownItemTargetingPlayer_BP(class AIGInteractablePickup* ThrownItem);
		void ExecuteUbergraph_WBP_Sheik_ThrownItemIndicator(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
