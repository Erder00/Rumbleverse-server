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
	 * BlueprintGeneratedClass BPFL_SheikStoreItems.BPFL_SheikStoreItems_C
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UBPFL_SheikStoreItems_C : public UBlueprintFunctionLibrary
	{
	public:
		void GetSeasonalTagFromStatReward(const struct FIGTitleCardStat& InStatReward, class UObject* __WorldContext, class FText* SeasonalText);
		void GetSeasonalTagFromBaseReward(const struct FIGTitleCardBase& InTextReward, class UObject* __WorldContext, class FText* SeasonalText);
		void GetSetPrice(const struct FSheikStoreItem& StoreItem, class UObject* __WorldContext, int32_t* Price);
		void GetBasePrices(const struct FSheikStoreItem& StoreItem, class UObject* __WorldContext, int32_t* RegularPrice, int32_t* DiscountPrice);
		void GetWalletSystem(class UObject* __WorldContext, class USheikWalletSystem** WalletSystem);
		void GetStoreSystem(class UObject* __WorldContext, class USheikStoreSystem** StoreSystem);
		void GetRarity(const struct FSheikStoreItem& StoreItem, class UObject* __WorldContext, EAccessoryItemRarity* ItemRarity);
		void GetHighestRarity(const struct FSheikStoreItem& StoreItem, class UObject* __WorldContext, EAccessoryItemRarity* ItemRarity);
		void GetDescriptionText(const struct FSheikStoreItem& StoreItem, class UObject* __WorldContext, class FText* Text);
		void GetNameText(const struct FSheikStoreItem& StoreItem, class UObject* __WorldContext, class FText* Text);
		void GetTypeText(const struct FSheikStoreItem& StoreItem, class UObject* __WorldContext, class FText* Text);
		void IsItemEntryOwned(const struct FSheikStoreItemEntry& StoreItemEntry, class UObject* __WorldContext, bool* IsOwned);
		void IsOwned(const struct FSheikStoreItem& StoreItem, class UObject* __WorldContext, bool* IsOwned);
		void IsValidWalletAsset(const struct FIGWalletAssetInfo& WalletAsset, class UObject* __WorldContext, bool* IsValid);
		void GetDataForRarity(EAccessoryItemRarity Rarity, class UObject* __WorldContext, struct FLinearColor* Color, class FText* RarityText, class UTexture2D** RarityIcon);
		void GetPrimaryVirtualCurrencyName(bool Uppercase, class UObject* __WorldContext, class FText* CurrencyName);
		void GetWalletAssetTypeText(EIGWalletAssetType WalletAssetType, bool Uppercase, class UObject* __WorldContext, class FText* Text);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
