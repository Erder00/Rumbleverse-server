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
	 * WidgetBlueprintGeneratedClass WBP_Sheik_EOM_Placement.WBP_Sheik_EOM_Placement_C
	 * Size -> 0x00C0 (FullSize[0x04D8] - InheritedSize[0x0418])
	 */
	class UWBP_Sheik_EOM_Placement_C : public UIGUI_WidgetBase
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0418(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UWidgetAnimation*                                    ShrinkPlacement;                                         // 0x0420(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UWidgetAnimation*                                    DisplayPlacement;                                        // 0x0428(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UTextBlock*                                          EncouragmentTextBlock;                                   // 0x0430(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UOverlay*                                            PlacementOverlay;                                        // 0x0438(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          PlacementTextBlock;                                      // 0x0440(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          PlayerName;                                              // 0x0448(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWBP_Sheik_Career_TitleCard_TitleSlot_C*             PlayerTitleSlot;                                         // 0x0450(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWBP_Sheik_Career_TitleCard_C*                       TitleCard;                                               // 0x0458(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UOverlay*                                            TitleCardOverlay;                                        // 0x0460(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          TotalPlayersTextBlock;                                   // 0x0468(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class ASheikGameStateBR*                                   SheikGameState;                                          // 0x0470(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       IsShowing;                                               // 0x0478(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_ZVHS[0x7];                                   // 0x0479(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnPlacementSequenceCompleted;                            // 0x0480(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		bool                                                       SkipEOM;                                                 // 0x0490(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       IsWinner;                                                // 0x0491(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_UKZ5[0x6];                                   // 0x0492(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             SkipSequenceCompleted;                                   // 0x0498(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class ASheikCaptureManager*                                CaptureManager;                                          // 0x04A8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    RenderTargetIndex;                                       // 0x04B0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_7IUT[0x4];                                   // 0x04B4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UMaterialInstanceDynamic*                            TitleCardBackgroundDynamicMaterial;                      // 0x04B8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FName                                                TextureParamName;                                        // 0x04C0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ASheikPlayerStateCommon*                             TitleCardPlayerState;                                    // 0x04C8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ASheikPlayerStateCommon*                             PlayerStateOfPlayerWhoEliminatedMe;                      // 0x04D0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void SequenceEvent__ENTRYPOINTWBP_Sheik_EOM_Placement_6();
		void SequenceEvent__ENTRYPOINTWBP_Sheik_EOM_Placement_5();
		void SequenceEvent__ENTRYPOINTWBP_Sheik_EOM_Placement_4();
		void SequenceEvent__ENTRYPOINTWBP_Sheik_EOM_Placement_3();
		void SequenceEvent__ENTRYPOINTWBP_Sheik_EOM_Placement_2();
		void SequenceEvent__ENTRYPOINTWBP_Sheik_EOM_Placement_1();
		void LoadEOMPlayerInfoData(const class FString& UserName, const struct FTitleCardLoadout& TitleCardLoadout);
		void ValidateLoadoutPoseAndBackgroundData(const struct FTitleCardLoadout& InLoadout, bool* LoadoutIsValid);
		void GetCharacterDescriptionFromLoadout(const struct FTitleCardLoadout& Loadout, struct FCharDesc* CharacterDescription);
		void PlayUISound(bool bPlaySound, EUISounds SoundType);
		void _3SequenceCompleted();
		void _2PlayShrinkAnim();
		void _1PlayPlacementAnims(bool ShowTitleCard);
		void LoadTitleCardData(const struct FTitleCardLoadout& TitleCardLoadout);
		void ResetAnimSequence(bool ShowTitleCard);
		void UpdateRoundPlacement(int32_t Place);
		void SetDisplayInfoAndBeginSequence(bool LocalPlayerIsWinner, bool ShowTitleCard, bool IsTagTeam, bool SkipEOM, class ASheikPlayerStateCommon* PlayerStateOfPlayerWhoEliminatedMe);
		void DisplayPlacementAnim_ShowPlayerCard();
		void ConstructOnlyOnce();
		void ShrinkPlacementAnim_Finished();
		void HandleLoadoutSoftpointersReady(const struct FTitleCardLoadout& Loadout, class UWBP_Sheik_Career_TitleCard_C* TitleCardRef);
		void HandleOnCaptureReady(int32_t CaptureIndex);
		void DisplayPlacementAnim_FInished();
		void HandleSoftPointerLoadFailed();
		void ExecuteUbergraph_WBP_Sheik_EOM_Placement(int32_t EntryPoint);
		void SkipSequenceCompleted__DelegateSignature();
		void OnPlacementSequenceCompleted__DelegateSignature(class UIGUI_WidgetBase* Source);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
