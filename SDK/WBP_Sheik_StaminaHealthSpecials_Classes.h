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
	 * WidgetBlueprintGeneratedClass WBP_Sheik_StaminaHealthSpecials.WBP_Sheik_StaminaHealthSpecials_C
	 * Size -> 0x0021 (FullSize[0x0439] - InheritedSize[0x0418])
	 */
	class UWBP_Sheik_StaminaHealthSpecials_C : public UIGUI_WidgetBase
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0418(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UWBP_Sheik_Fame_C*                                   WBP_Sheik_Fame;                                          // 0x0420(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWBP_Sheik_Health_C*                                 WBP_Sheik_Health;                                        // 0x0428(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWBP_Sheik_Stamina_C*                                WBP_Sheik_Stamina;                                       // 0x0430(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		bool                                                       isSpectator;                                             // 0x0438(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor

	public:
		void SetForPlayer(class ASheikPlayerStateCommon* SheikPlayerState);
		void PreConstruct(bool IsDesignTime);
		void ExecuteUbergraph_WBP_Sheik_StaminaHealthSpecials(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
