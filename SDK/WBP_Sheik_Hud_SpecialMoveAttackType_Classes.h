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
	 * WidgetBlueprintGeneratedClass WBP_Sheik_Hud_SpecialMoveAttackType.WBP_Sheik_Hud_SpecialMoveAttackType_C
	 * Size -> 0x00C8 (FullSize[0x04E0] - InheritedSize[0x0418])
	 */
	class UWBP_Sheik_Hud_SpecialMoveAttackType_C : public UIGUI_WidgetBase
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0418(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UImage*                                              AttackIcon;                                              // 0x0420(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              EffectBG;                                                // 0x0428(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          PropertyTextBlock;                                       // 0x0430(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		bool                                                       ShowBG;                                                  // 0x0438(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn
		bool                                                       ShowPropertyText;                                        // 0x0439(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn
		unsigned char                                              UnknownData_NKE9[0x6];                                   // 0x043A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FSlateColor                                         PoisonColor;                                             // 0x0440(0x0028) Edit, BlueprintVisible, DisableEditOnInstance
		struct FSlateColor                                         ChargableColor;                                          // 0x0468(0x0028) Edit, BlueprintVisible, DisableEditOnInstance
		struct FSlateColor                                         UnblockableColor;                                        // 0x0490(0x0028) Edit, BlueprintVisible, DisableEditOnInstance
		struct FSlateColor                                         HighPriorityColor;                                       // 0x04B8(0x0028) Edit, BlueprintVisible, DisableEditOnInstance

	public:
		void SetIcon(E_Sheik_SpecialMoveEffect AttackType);
		void PreConstruct(bool IsDesignTime);
		void ExecuteUbergraph_WBP_Sheik_Hud_SpecialMoveAttackType(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
