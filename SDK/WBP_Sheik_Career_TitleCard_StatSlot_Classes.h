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
	 * WidgetBlueprintGeneratedClass WBP_Sheik_Career_TitleCard_StatSlot.WBP_Sheik_Career_TitleCard_StatSlot_C
	 * Size -> 0x01D8 (FullSize[0x0690] - InheritedSize[0x04B8])
	 */
	class UWBP_Sheik_Career_TitleCard_StatSlot_C : public USheikWidgetBase
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x04B8(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UWidgetAnimation*                                    AnimFocus;                                               // 0x04C0(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UImage*                                              EmptyBG;                                                 // 0x04C8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              FocusedFrameImage;                                       // 0x04D0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class URichTextBlock*                                      SeasonalTag;                                             // 0x04D8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              StatBG;                                                  // 0x04E0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UOverlay*                                            StatContentOverlay;                                      // 0x04E8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          StatName;                                                // 0x04F0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          StatValue;                                               // 0x04F8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		bool                                                       IsEmpty;                                                 // 0x0500(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn
		unsigned char                                              UnknownData_DD7R[0x7];                                   // 0x0501(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             CurrentWidgetUpdated;                                    // 0x0508(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		ETitleCardStackOrder                                       RewardSlot;                                              // 0x0518(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
		unsigned char                                              UnknownData_I926[0x7];                                   // 0x0519(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             RewardSlotSelected;                                      // 0x0520(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		struct FIGTitleCardStat                                    StatInfo;                                                // 0x0530(0x0138) Edit, BlueprintVisible, DisableEditOnInstance
		class FText                                                Name;                                                    // 0x0668(0x0018) Edit, BlueprintVisible, DisableEditOnInstance
		class UWBP_Sheik_Career_TitleCard_C*                       TitleCardRef;                                            // 0x0680(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class USheikGameInstance*                                  SheikGameInstance;                                       // 0x0688(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash

	public:
		void SetStatSeasonalTag();
		void GetNonComplexStatValue(struct FSheikPlayerDataStat* Stat, EIGTitleCardStatType StatType, const class FString& RawStatName, EIGSeasonIdentifier StatSeason, struct FSheikSeasonalStatFieldsData* SeasonData, bool HasSeasonalData, float* StatValue);
		void Init(class UWBP_Sheik_Career_TitleCard_C* InTitleCard);
		void FormatStatValue(const struct FIGTitleCardStat& TitleCardStat, class FText* FormattedValue);
		void SetStatNameAndValue(const struct FIGTitleCardStat& Stat);
		void SetStatSlotBackground();
		void HandleFocus(bool Focus);
		void OnSelect(const struct FInputEventData& InputEventData);
		void UpdateStatSlotInfo(const struct FIGTitleCardStat& StatRewardInfo);
		void SetVisuals(bool IsEmpty);
		void ConstructOnlyOnce();
		void PreConstruct(bool IsDesignTime);
		void OnGainFocus(int32_t UserIndex);
		void OnLoseFocus(int32_t UserIndex);
		void ExecuteUbergraph_WBP_Sheik_Career_TitleCard_StatSlot(int32_t EntryPoint);
		void RewardSlotSelected__DelegateSignature(ETitleCardStackOrder InRewardSlot);
		void CurrentWidgetUpdated__DelegateSignature(ETitleCardStackOrder InRewardSlot);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
