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
	 * WidgetBlueprintGeneratedClass WBP_Sheik_Career_TitleCard.WBP_Sheik_Career_TitleCard_C
	 * Size -> 0x05F9 (FullSize[0x0BA9] - InheritedSize[0x05B0])
	 */
	class UWBP_Sheik_Career_TitleCard_C : public USheikTitleCardBase
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x05B0(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UWidgetAnimation*                                    UnfocusAnim;                                             // 0x05B8(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UWidgetAnimation*                                    AssignRewardFocusAnim;                                   // 0x05C0(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UWBP_Sheik_LR_GridLegendKey_C*                       EquipKey;                                                // 0x05C8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UOverlay*                                            InputPrompts;                                            // 0x05D0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UOverlay*                                            KOdOverlay;                                              // 0x05D8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWBP_Sheik_Career_MedalSlotContainer_C*              MedalSlotContainer;                                      // 0x05E0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          PlatformName;                                            // 0x05E8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              PlayerPlatformIcon;                                      // 0x05F0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWBP_Sheik_Career_TitleCard_TitleSlot_C*             PlayerTitle;                                             // 0x05F8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWBP_Sheik_LR_GridLegendKey_C*                       RandomizeKey;                                            // 0x0600(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWBP_Sheik_Career_StatSlotContainer_C*               StatSlotContainer;                                       // 0x0608(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              StatsSlotPreloader_Image;                                // 0x0610(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              TitleCardBG;                                             // 0x0618(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              TitleCardBorder;                                         // 0x0620(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UOverlay*                                            TitleCardOverlay;                                        // 0x0628(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              TitleCardPreloader_Image;                                // 0x0630(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWBP_Sheik_Career_StatSlot_C*                        CurrentlySelectedStat;                                   // 0x0638(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		ETitleCardStackOrder                                       CurrentRewardSlot;                                       // 0x0640(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_N2BC[0x7];                                   // 0x0641(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             SwitchBackToRewardGrid;                                  // 0x0648(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		TArray<struct FIGTitleCardMedal>                           EquippedMedals;                                          // 0x0658(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		TArray<struct FIGTitleCardStat>                            EquippedStats;                                           // 0x0668(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		unsigned char                                              CameraRenderTarget[0x28];                                // 0x0678(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		struct FTitleCardLoadout                                   CachedTitleCardLoadout;                                  // 0x06A0(0x04B0) Edit, BlueprintVisible, DisableEditOnInstance
		class ASceneCapture2D*                                     CaptureActor;                                            // 0x0B50(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FScriptMulticastDelegate                             TitleCardDataReady;                                      // 0x0B58(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FString                                              PlayerUsername;                                          // 0x0B68(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash
		class USheikGameInstance*                                  SheikGameInstance;                                       // 0x0B78(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		class FScriptMulticastDelegate                             SetNewMedalToSlot;                                       // 0x0B80(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             SetNewStatToSlot;                                        // 0x0B90(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class UWBP_Sheik_Career_RewardSlot_C*                      CurrentlySelectedMedal;                                  // 0x0BA0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       IsEOM;                                                   // 0x0BA8(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor

	public:
		void SetTitleCardLoadingVisuals(bool IsLoading);
		void SetStatsLoadingVisuals(bool IsLoading);
		void SlotContainerInit();
		void SetEOM_PlayerPlatformIcon(class ASheikPlayerStateCommon* PlayerState);
		void UnfocusContainers(bool Focus);
		void GetSelectedMedalInfo(ETitleCardStackOrder InRewardSlot);
		void FrontendLoadTitleCard(const class FString& UserName, const struct FTitleCardLoadout& TitleCardLoadout);
		void SetIsDead(bool IsDead);
		void SetBackgroundFromRenderTarget(class UTextureRenderTarget2D* InRenderTarget);
		void LoadCurrentTitleCard(const struct FTitleCardLoadout& TitleCardLoadout);
		void FindCaptureActor();
		void MakeSlateBrushFromVariableImageData(const struct FIGVariableImageData& InImageData, struct FSlateBrush* OutBrush);
		void CaptureCharacter();
		void ResetCurrentRewardSlot();
		void BindNewRewardToStatSlot(ETitleCardStackOrder InRewardSlot, const struct FIGTitleCardStat& InStatInfo);
		void BindNewRewardToMedalSlot(ETitleCardStackOrder InRewardSlot, const struct FIGTitleCardMedal& InMedalSlot);
		void GetSelectedStatInfo(struct FIGTitleCardStat* StatInfo);
		void DeactivateCurrentRewardContainer();
		void ActivateCurrentRewardContainer();
		void SetBorder(const struct FIGTitleCardBorder& BorderReward);
		void SetPlayerTitle(const struct FIGTitleCardPlayerTitle& TitleInfo);
		void SetUsername(const class FString& InText);
		void LoadMedals(TArray<struct FIGTitleCardMedal>* InMedals);
		void LoadStats(TArray<struct FIGTitleCardStat>* InStats);
		void GetNavigableWidgets(TArray<class UIGUI_WidgetBase*>* NavigableWidgets);
		void BndEvt__MedalSlotContainer_K2Node_ComponentBoundEvent_6_BindRewardToMedalSlot__DelegateSignature(ETitleCardStackOrder InRewardSlot);
		void SetBackgroundVisible(bool BackgroundVisible);
		void SetCurrentTitleCard(const struct FTitleCardLoadout& TitleCardLoadout, const class FString& UserName, TArray<float> StatArray, bool bPlayerIsDead);
		void ConstructOnlyOnce();
		void HandleOnLoadoutSoftPointersLoadSuccessful();
		void OnDeactivated();
		void BndEvt__StatSlotContainer_K2Node_ComponentBoundEvent_2_UpdateCurrentStatSlot__DelegateSignature(ETitleCardStackOrder InRewardSlot);
		void BndEvt__StatSlotContainer_K2Node_ComponentBoundEvent_3_BindRewardToStatSlot__DelegateSignature(ETitleCardStackOrder InRewardSlot);
		void OnActivated();
		void BndEvt__MedalSlotContainer_K2Node_ComponentBoundEvent_1_UpdateCurrentMedalSlot__DelegateSignature(ETitleCardStackOrder InRewardSlot);
		void ExecuteUbergraph_WBP_Sheik_Career_TitleCard(int32_t EntryPoint);
		void SetNewStatToSlot__DelegateSignature(ETitleCardStackOrder RewardSlot, const struct FIGTitleCardStat& NewStat);
		void SetNewMedalToSlot__DelegateSignature(ETitleCardStackOrder RewardSlot, const struct FIGTitleCardMedal& NewMedal);
		void TitleCardDataReady__DelegateSignature(const struct FTitleCardLoadout& Loadout, class UWBP_Sheik_Career_TitleCard_C* TitleCardRef);
		void SwitchBackToRewardGrid__DelegateSignature(ESheikTitleCardDataType RewardType);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
