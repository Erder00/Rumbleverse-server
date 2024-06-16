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
	 * BlueprintGeneratedClass BPFL_Sheik_SpecialMoves.BPFL_Sheik_SpecialMoves_C
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UBPFL_Sheik_SpecialMoves_C : public UBlueprintFunctionLibrary
	{
	public:
		void GetSpecialMoveDisplayTier(class UIGMoveMontage* Move, EMoveTier FunctionalTier, class UObject* __WorldContext, EMoveTier* DisplayTier);
		void GetSpecialMoveEffects(class UIGMoveMontage* Move, EMoveTier Tier, class UObject* __WorldContext, TArray<EIGSpecialMoveEffect>* SpecialMoveEffectsDescriptions);
		void GetSpecialMoveTierInfo(class UIGMoveMontage* Move, EMoveTier Tier, class UObject* __WorldContext, class UTexture2D** BGColor, class UTexture2D** CoinTireIcon);
		void GetTierDisplayInfo(const struct FS_Sheik_SpecialMoveLookupRow& LookupRow, EMoveTier ExecutionTier, class UObject* __WorldContext, class FText* OutName, class UTexture2D** OutTier, class UTexture2D** OutBGColor);
		void GetWeaponDisplayName(class UClass* WeaponClass, class UObject* __WorldContext, class FText* DisplayText);
		void GetStatColor(ESheikMoveType MoveType, class UObject* __WorldContext, struct FLinearColor* SlateColor);
		void GetSpecialMoveType(class UIGMoveMontage* Move, class UObject* __WorldContext, ESheikMoveType* MoveType);
		void GetSpecialMoveData(class UIGMoveMontage* Move, class UObject* __WorldContext, struct FS_Sheik_SpecialMoveLookupRow* Description);
		void GetSpecialMoveDescription(class UIGMoveMontage* Move, EMoveTier Tier, class UObject* __WorldContext, TArray<class FText>* Descriptions);
		void IsMoveUIDataValid(class UIGMoveMontage* Move, class UObject* __WorldContext, bool* IsValid);
		void GetSpecialMoveIcon(class UIGMoveMontage* Move, EMoveTier Tier, class UObject* __WorldContext, class UTexture2D** Icon);
		void GetSpecialMoveDisplayName(class UIGMoveMontage* Move, EMoveTier Tier, class UObject* __WorldContext, class FText* DisplayText);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
