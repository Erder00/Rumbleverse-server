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
	 * WidgetBlueprintGeneratedClass WBP_Sheik_Career_TitleCard_MedalSlot.WBP_Sheik_Career_TitleCard_MedalSlot_C
	 * Size -> 0x0160 (FullSize[0x0618] - InheritedSize[0x04B8])
	 */
	class UWBP_Sheik_Career_TitleCard_MedalSlot_C : public USheikWidgetBase
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x04B8(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UWidgetAnimation*                                    AnimFocus;                                               // 0x04C0(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UImage*                                              MedalImage;                                              // 0x04C8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		bool                                                       IsEmpty;                                                 // 0x04D0(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn
		ETitleCardStackOrder                                       RewardSlot;                                              // 0x04D1(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
		unsigned char                                              UnknownData_IJD5[0x6];                                   // 0x04D2(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             CurrentWidgetUpdated;                                    // 0x04D8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             RewardSlotSelected;                                      // 0x04E8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		struct FIGTitleCardMedal                                   RewardInfo;                                              // 0x04F8(0x0120) Edit, BlueprintVisible, DisableEditOnInstance

	public:
		void UpdateMedalSlotInfo(const struct FIGTitleCardMedal& RewardInfo);
		void HandleFocus(bool Focus);
		void OnSelect(const struct FInputEventData& InputEventData);
		void SetVisuals(bool IsEmpty);
		void ConstructOnlyOnce();
		void PreConstruct(bool IsDesignTime);
		void OnGainFocus(int32_t UserIndex);
		void OnLoseFocus(int32_t UserIndex);
		void ExecuteUbergraph_WBP_Sheik_Career_TitleCard_MedalSlot(int32_t EntryPoint);
		void RewardSlotSelected__DelegateSignature(ETitleCardStackOrder InRewardSlot);
		void CurrentWidgetUpdated__DelegateSignature(ETitleCardStackOrder InRewardSlot);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
