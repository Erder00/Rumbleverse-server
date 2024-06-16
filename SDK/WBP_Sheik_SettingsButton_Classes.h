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
	 * WidgetBlueprintGeneratedClass WBP_Sheik_SettingsButton.WBP_Sheik_SettingsButton_C
	 * Size -> 0x0058 (FullSize[0x0520] - InheritedSize[0x04C8])
	 */
	class UWBP_Sheik_SettingsButton_C : public USheikButtonBase
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x04C8(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UImage*                                              BGImage_2;                                               // 0x04D0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              Image_146;                                               // 0x04D8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UThrobber*                                           LoadingThrobber;                                         // 0x04E0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		bool                                                       IsDisabled;                                              // 0x04E8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       PlayNavClickAudio;                                       // 0x04E9(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_NHXF[0x6];                                   // 0x04EA(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FText                                                Name;                                                    // 0x04F0(0x0018) Edit, BlueprintVisible
		class FText                                                Description;                                             // 0x0508(0x0018) Edit, BlueprintVisible

	public:
		void GetDescription(class FText* Description);
		void GetName(class FText* Name);
		void HandleDisabling(bool Condition);
		void ShowLoading(bool Show);
		void OnGainFocus(int32_t UserIndex);
		void OnLoseFocus(int32_t UserIndex);
		void OnSelected(int32_t UserIndex);
		void SetDescription(const class FText& Description);
		void SetName(const class FText& Name);
		void SetDisabled(bool bDisabled);
		void SetDisabledWithoutAnimation(bool bDisabled);
		void ExecuteUbergraph_WBP_Sheik_SettingsButton(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
