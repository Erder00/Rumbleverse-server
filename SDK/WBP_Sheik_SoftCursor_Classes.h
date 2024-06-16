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
	 * WidgetBlueprintGeneratedClass WBP_Sheik_SoftCursor.WBP_Sheik_SoftCursor_C
	 * Size -> 0x0013 (FullSize[0x042B] - InheritedSize[0x0418])
	 */
	class UWBP_Sheik_SoftCursor_C : public UIGUI_WidgetBase
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0418(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UImage*                                              CursorImage;                                             // 0x0420(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		bool                                                       CachedUseMenuInput;                                      // 0x0428(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		EInputSource                                               CachedLastInputSource;                                   // 0x0429(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       CachedVisibility;                                        // 0x042A(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void OnInputSourceChanged(const struct FUserControllerData& OldInputSource, const struct FUserControllerData& NewInputSource);
		void ConstructOnlyOnce();
		void OnAllowCursorChanged(bool UseMenuInput);
		void RefreshCursorVisibility();
		void ExecuteUbergraph_WBP_Sheik_SoftCursor(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
