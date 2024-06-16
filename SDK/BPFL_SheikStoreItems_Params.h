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
	// # Structs
	// --------------------------------------------------
	/**
	 * Function BPFL_SheikStoreItems.BPFL_SheikStoreItems_C.GetSeasonalTagFromStatReward
	 */
	struct UBPFL_SheikStoreItems_C_GetSeasonalTagFromStatReward_Params
	{
	public:
		struct FIGTitleCardStat                                    InStatReward;                                            // 0x0000(0x0138)  (BlueprintVisible, BlueprintReadOnly, Parm)
		class UObject*                                             __WorldContext;                                          // 0x0138(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FText                                                SeasonalText;                                            // 0x0140(0x0018)  (Parm, OutParm)
	};

	/**
	 * Function BPFL_SheikStoreItems.BPFL_SheikStoreItems_C.GetSeasonalTagFromBaseReward
	 */
	struct UBPFL_SheikStoreItems_C_GetSeasonalTagFromBaseReward_Params
	{
	public:
		struct FIGTitleCardBase                                    InTextReward;                                            // 0x0000(0x00C0)  (BlueprintVisible, BlueprintReadOnly, Parm)
		class UObject*                                             __WorldContext;                                          // 0x00C0(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FText                                                SeasonalText;                                            // 0x00C8(0x0018)  (Parm, OutParm)
	};

	/**
	 * Function BPFL_SheikStoreItems.BPFL_SheikStoreItems_C.GetSetPrice
	 */
	struct UBPFL_SheikStoreItems_C_GetSetPrice_Params
	{
	public:
		struct FSheikStoreItem                                     StoreItem;                                               // 0x0000(0x0320)  (BlueprintVisible, BlueprintReadOnly, Parm)
		class UObject*                                             __WorldContext;                                          // 0x0320(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    Price;                                                   // 0x0328(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPFL_SheikStoreItems.BPFL_SheikStoreItems_C.GetBasePrices
	 */
	struct UBPFL_SheikStoreItems_C_GetBasePrices_Params
	{
	public:
		struct FSheikStoreItem                                     StoreItem;                                               // 0x0000(0x0320)  (BlueprintVisible, BlueprintReadOnly, Parm)
		class UObject*                                             __WorldContext;                                          // 0x0320(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    RegularPrice;                                            // 0x0328(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    DiscountPrice;                                           // 0x032C(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPFL_SheikStoreItems.BPFL_SheikStoreItems_C.GetWalletSystem
	 */
	struct UBPFL_SheikStoreItems_C_GetWalletSystem_Params
	{
	public:
		class UObject*                                             __WorldContext;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class USheikWalletSystem*                                  WalletSystem;                                            // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPFL_SheikStoreItems.BPFL_SheikStoreItems_C.GetStoreSystem
	 */
	struct UBPFL_SheikStoreItems_C_GetStoreSystem_Params
	{
	public:
		class UObject*                                             __WorldContext;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class USheikStoreSystem*                                   StoreSystem;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPFL_SheikStoreItems.BPFL_SheikStoreItems_C.GetRarity
	 */
	struct UBPFL_SheikStoreItems_C_GetRarity_Params
	{
	public:
		struct FSheikStoreItem                                     StoreItem;                                               // 0x0000(0x0320)  (BlueprintVisible, BlueprintReadOnly, Parm)
		class UObject*                                             __WorldContext;                                          // 0x0320(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		EAccessoryItemRarity                                       ItemRarity;                                              // 0x0328(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPFL_SheikStoreItems.BPFL_SheikStoreItems_C.GetHighestRarity
	 */
	struct UBPFL_SheikStoreItems_C_GetHighestRarity_Params
	{
	public:
		struct FSheikStoreItem                                     StoreItem;                                               // 0x0000(0x0320)  (BlueprintVisible, BlueprintReadOnly, Parm)
		class UObject*                                             __WorldContext;                                          // 0x0320(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		EAccessoryItemRarity                                       ItemRarity;                                              // 0x0328(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPFL_SheikStoreItems.BPFL_SheikStoreItems_C.GetDescriptionText
	 */
	struct UBPFL_SheikStoreItems_C_GetDescriptionText_Params
	{
	public:
		struct FSheikStoreItem                                     StoreItem;                                               // 0x0000(0x0320)  (BlueprintVisible, BlueprintReadOnly, Parm)
		class UObject*                                             __WorldContext;                                          // 0x0320(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FText                                                Text;                                                    // 0x0328(0x0018)  (Parm, OutParm)
	};

	/**
	 * Function BPFL_SheikStoreItems.BPFL_SheikStoreItems_C.GetNameText
	 */
	struct UBPFL_SheikStoreItems_C_GetNameText_Params
	{
	public:
		struct FSheikStoreItem                                     StoreItem;                                               // 0x0000(0x0320)  (BlueprintVisible, BlueprintReadOnly, Parm)
		class UObject*                                             __WorldContext;                                          // 0x0320(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FText                                                Text;                                                    // 0x0328(0x0018)  (Parm, OutParm)
	};

	/**
	 * Function BPFL_SheikStoreItems.BPFL_SheikStoreItems_C.GetTypeText
	 */
	struct UBPFL_SheikStoreItems_C_GetTypeText_Params
	{
	public:
		struct FSheikStoreItem                                     StoreItem;                                               // 0x0000(0x0320)  (BlueprintVisible, BlueprintReadOnly, Parm)
		class UObject*                                             __WorldContext;                                          // 0x0320(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FText                                                Text;                                                    // 0x0328(0x0018)  (Parm, OutParm)
	};

	/**
	 * Function BPFL_SheikStoreItems.BPFL_SheikStoreItems_C.IsItemEntryOwned
	 */
	struct UBPFL_SheikStoreItems_C_IsItemEntryOwned_Params
	{
	public:
		struct FSheikStoreItemEntry                                StoreItemEntry;                                          // 0x0000(0x0100)  (BlueprintVisible, BlueprintReadOnly, Parm)
		class UObject*                                             __WorldContext;                                          // 0x0100(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       IsOwned;                                                 // 0x0108(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_9J68[0x7];                                   // 0x0109(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BPFL_SheikStoreItems.BPFL_SheikStoreItems_C.IsOwned
	 */
	struct UBPFL_SheikStoreItems_C_IsOwned_Params
	{
	public:
		struct FSheikStoreItem                                     StoreItem;                                               // 0x0000(0x0320)  (BlueprintVisible, BlueprintReadOnly, Parm)
		class UObject*                                             __WorldContext;                                          // 0x0320(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       IsOwned;                                                 // 0x0328(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_8B7V[0x7];                                   // 0x0329(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BPFL_SheikStoreItems.BPFL_SheikStoreItems_C.IsValidWalletAsset
	 */
	struct UBPFL_SheikStoreItems_C_IsValidWalletAsset_Params
	{
	public:
		struct FIGWalletAssetInfo                                  WalletAsset;                                             // 0x0000(0x00F0)  (BlueprintVisible, BlueprintReadOnly, Parm)
		class UObject*                                             __WorldContext;                                          // 0x00F0(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       IsValid;                                                 // 0x00F8(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_D2E8[0x7];                                   // 0x00F9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BPFL_SheikStoreItems.BPFL_SheikStoreItems_C.GetDataForRarity
	 */
	struct UBPFL_SheikStoreItems_C_GetDataForRarity_Params
	{
	public:
		EAccessoryItemRarity                                       Rarity;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_TIX9[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UObject*                                             __WorldContext;                                          // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FLinearColor                                        Color;                                                   // 0x0010(0x0010)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FText                                                RarityText;                                              // 0x0020(0x0018)  (Parm, OutParm)
		class UTexture2D*                                          RarityIcon;                                              // 0x0038(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPFL_SheikStoreItems.BPFL_SheikStoreItems_C.GetPrimaryVirtualCurrencyName
	 */
	struct UBPFL_SheikStoreItems_C_GetPrimaryVirtualCurrencyName_Params
	{
	public:
		bool                                                       Uppercase;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_WZLF[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UObject*                                             __WorldContext;                                          // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FText                                                CurrencyName;                                            // 0x0010(0x0018)  (Parm, OutParm)
	};

	/**
	 * Function BPFL_SheikStoreItems.BPFL_SheikStoreItems_C.GetWalletAssetTypeText
	 */
	struct UBPFL_SheikStoreItems_C_GetWalletAssetTypeText_Params
	{
	public:
		EIGWalletAssetType                                         WalletAssetType;                                         // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       Uppercase;                                               // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_MI92[0x6];                                   // 0x0002(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UObject*                                             __WorldContext;                                          // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FText                                                Text;                                                    // 0x0010(0x0018)  (Parm, OutParm)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
