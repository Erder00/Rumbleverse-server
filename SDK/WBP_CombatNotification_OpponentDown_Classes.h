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
	 * WidgetBlueprintGeneratedClass WBP_CombatNotification_OpponentDown.WBP_CombatNotification_OpponentDown_C
	 * Size -> 0x0080 (FullSize[0x0498] - InheritedSize[0x0418])
	 */
	class UWBP_CombatNotification_OpponentDown_C : public UIGUI_WidgetBase
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0418(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UWidgetAnimation*                                    ShiftNotifAnim;                                          // 0x0420(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UWidgetAnimation*                                    ShowNotifAnim;                                           // 0x0428(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UTextBlock*                                          DownedStatus;                                            // 0x0430(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          OpponentName;                                            // 0x0438(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		EKnockoutType                                              KnockoutType;                                            // 0x0440(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_VDXL[0x7];                                   // 0x0441(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FSlateColor                                         DownedColor;                                             // 0x0448(0x0028) Edit, BlueprintVisible
		struct FSlateColor                                         KOdColor;                                                // 0x0470(0x0028) Edit, BlueprintVisible

	public:
		void ShowNotifComplete();
		void SetPlayerInfo(const class FText& PlayerName, const class FText& PlayerKnockout, EKnockoutType KnockoutType);
		void ShiftDown(const class FText& Name, const class FText& Status, EKnockoutType KnockoutType);
		void ShowCombatNotif(const class FText& Name, const class FText& PlayerStatus, EKnockoutType KnockoutType);
		void ConstructOnlyOnce();
		void ExecuteUbergraph_WBP_CombatNotification_OpponentDown(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
