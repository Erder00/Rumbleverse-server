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
	 * WidgetBlueprintGeneratedClass WBP_Sheik_Stats.WBP_Sheik_Stats_C
	 * Size -> 0x0011 (FullSize[0x0429] - InheritedSize[0x0418])
	 */
	class UWBP_Sheik_Stats_C : public UIGUI_WidgetBase
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0418(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UWBP_Sheik_StatSlot_Combined_C*                      WBP_Sheik_StatSlot_Combined;                             // 0x0420(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		bool                                                       isSpectator;                                             // 0x0428(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn

	public:
		void SetForPlayer(class ASheikPlayerStateCommon* SheikPlayerState);
		void ConstructOnlyOnce();
		void ExecuteUbergraph_WBP_Sheik_Stats(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
