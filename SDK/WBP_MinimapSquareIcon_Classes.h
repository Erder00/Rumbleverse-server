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
	 * WidgetBlueprintGeneratedClass WBP_MinimapSquareIcon.WBP_MinimapSquareIcon_C
	 * Size -> 0x0018 (FullSize[0x0440] - InheritedSize[0x0428])
	 */
	class UWBP_MinimapSquareIcon_C : public USheikMinimapIcon
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0428(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UImage*                                              MainImage;                                               // 0x0430(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UMaterialInstanceDynamic*                            MainMaterial;                                            // 0x0438(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void Construct();
		void SetTopLeft(const struct FVector2D& Value);
		void SetCenter(const struct FVector2D& Value);
		void SetCosineOfNegativeRotation(float Value);
		void SetOpacity(float NewOpacity);
		void SetImage(class UTexture2D* NewTexture);
		void SetSize(const struct FVector2D& NewSize);
		void SetBottomRight(const struct FVector2D& Value);
		void SetSineOfNegativeRotation(float Value);
		void ExecuteUbergraph_WBP_MinimapSquareIcon(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
