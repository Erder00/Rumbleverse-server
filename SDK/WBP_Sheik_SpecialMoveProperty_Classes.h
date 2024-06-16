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
	 * WidgetBlueprintGeneratedClass WBP_Sheik_SpecialMoveProperty.WBP_Sheik_SpecialMoveProperty_C
	 * Size -> 0x0038 (FullSize[0x0450] - InheritedSize[0x0418])
	 */
	class UWBP_Sheik_SpecialMoveProperty_C : public UIGUI_WidgetBase
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0418(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UImage*                                              Icon;                                                    // 0x0420(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          Name;                                                    // 0x0428(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		struct FS_Sheik_SpecialMoveProperty                        SpecialMoveProperty;                                     // 0x0430(0x0020) Edit, BlueprintVisible, ExposeOnSpawn, HasGetValueTypeHash

	public:
		void UpdatePropertyInfo(const struct FS_Sheik_SpecialMoveProperty& PropertyInfo);
		void ConstructOnlyOnce();
		void PreConstruct(bool IsDesignTime);
		void ExecuteUbergraph_WBP_Sheik_SpecialMoveProperty(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
