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
	 * WidgetBlueprintGeneratedClass WBP_Sheik_Legend.WBP_Sheik_Legend_C
	 * Size -> 0x0039 (FullSize[0x0451] - InheritedSize[0x0418])
	 */
	class UWBP_Sheik_Legend_C : public UIGUI_WidgetBase
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0418(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UHorizontalBox*                                      RootHorizontalBox;                                       // 0x0420(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		TArray<struct FS_Sheik_InputBindingKeyEntry>               InputBindingKeys;                                        // 0x0428(0x0010) Edit, BlueprintVisible, ExposeOnSpawn
		struct FVector2D                                           ImageSize;                                               // 0x0438(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      ItemSpacing;                                             // 0x0440(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
		unsigned char                                              UnknownData_WQC3[0x4];                                   // 0x0444(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UDataTable*                                          BindingDataTable;                                        // 0x0448(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       UseKeyBackings;                                          // 0x0450(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor

	public:
		void CreateKeyFromBindingName(const class FName& BindingName, const class FText& LabelOverride);
		void ClearKeys();
		void CreateKey(const struct FS_Sheik_InputBindingKeyEntry& KeyEntry);
		void GetKeys(TArray<struct FS_Sheik_InputBindingKeyEntry>* Keys);
		void SetKeys(TArray<struct FS_Sheik_InputBindingKeyEntry>* InputBindingKeys);
		void PreConstruct(bool IsDesignTime);
		void ExecuteUbergraph_WBP_Sheik_Legend(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
