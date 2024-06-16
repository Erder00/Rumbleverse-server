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
	 * WidgetBlueprintGeneratedClass WBP_Sheik_PerksGrid.WBP_Sheik_PerksGrid_C
	 * Size -> 0x0100 (FullSize[0x0518] - InheritedSize[0x0418])
	 */
	class UWBP_Sheik_PerksGrid_C : public UIGUI_WidgetBase
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0418(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UUniformGridPanel*                                   PerkListGridPanel;                                       // 0x0420(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		TMap<class FString, class UWBP_Sheik_PerkSlot_C*>          PerkMap;                                                 // 0x0428(0x0050) Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference
		class USheikGameInfo_BP_C*                                 GameInfo;                                                // 0x0478(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<class UWBP_Sheik_PerkSlot_C*>                       PerkSlotPool;                                            // 0x0480(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference
		int32_t                                                    NumColumns;                                              // 0x0490(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_ELFY[0x4];                                   // 0x0494(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UWBP_Sheik_PerkSlot_C*>                       OriginalPerkSlotPool;                                    // 0x0498(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference
		TArray<class UWBP_Sheik_PerkSlot_C*>                       UsedPerkSlots;                                           // 0x04A8(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference
		bool                                                       isSpectator;                                             // 0x04B8(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_9Q34[0x7];                                   // 0x04B9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class ASheikPlayerStateCommon*                             CachedPlayerState;                                       // 0x04C0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              CachedPerkNames[0x50];                                   // 0x04C8(0x0050) UNKNOWN PROPERTY: SetProperty

	public:
		void GetIsSnowballFight(bool* IsSnowballFight);
		void OnSpectatorInfoChanged(struct FSheikSpectatorInfo* SpectatorInfo);
		void SetForPlayer(class ASheikPlayerStateCommon* PlayerState);
		void ClearandGeneratePerks();
		void GetFreePerkSlot(class UWBP_Sheik_PerkSlot_C** NewParam);
		void RemovePerk(const struct FIGPerkHUDInfo& ToRemove);
		void AddNewPerk(const struct FIGPerkHUDInfo& PerkInfo);
		void ConstructOnlyOnce();
		void ExecuteUbergraph_WBP_Sheik_PerksGrid(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
