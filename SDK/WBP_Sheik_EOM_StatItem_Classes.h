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
	 * WidgetBlueprintGeneratedClass WBP_Sheik_EOM_StatItem.WBP_Sheik_EOM_StatItem_C
	 * Size -> 0x00D2 (FullSize[0x04EA] - InheritedSize[0x0418])
	 */
	class UWBP_Sheik_EOM_StatItem_C : public UIGUI_WidgetBase
	{
	public:
		class UWidgetAnimation*                                    BuildOn;                                                 // 0x0418(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UTextBlock*                                          ItemLabel;                                               // 0x0420(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          OptionalCallout;                                         // 0x0428(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              ValueBacking;                                            // 0x0430(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          ValueText;                                               // 0x0438(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		struct FSlateColor                                         DefaultColor;                                            // 0x0440(0x0028) Edit, BlueprintVisible, DisableEditOnInstance
		struct FSlateColor                                         NewRecordColor;                                          // 0x0468(0x0028) Edit, BlueprintVisible, DisableEditOnInstance
		struct FSlateColor                                         CoolNumberColor;                                         // 0x0490(0x0028) Edit, BlueprintVisible, DisableEditOnInstance
		class FText                                                NewRecordText;                                           // 0x04B8(0x0018) Edit, BlueprintVisible, DisableEditOnInstance
		class FText                                                CoolNumberText;                                          // 0x04D0(0x0018) Edit, BlueprintVisible, DisableEditOnInstance
		EUISounds                                                  StatItemShowSound;                                       // 0x04E8(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bPlaySound;                                              // 0x04E9(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor

	public:
		void SequenceEvent__ENTRYPOINTWBP_Sheik_EOM_StatItem_1();
		void PlayShowSound();
		void PlayUISound(EUISounds SoundType);
		void SetDisplayValues(const class FText& Name, int32_t Amount, bool IsNewRecord, bool IsCoolNumber);
		void Show();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
