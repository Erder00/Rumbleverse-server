/**
 * Name: Rumbleverse
 * Version: Latest
 */

#include "pch.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPFL_SheikStoreItems.BPFL_SheikStoreItems_C.GetSeasonalTagFromStatReward
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FIGTitleCardStat                            InStatReward                                               (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FText                                        SeasonalText                                               (Parm, OutParm)
	 */
	void UBPFL_SheikStoreItems_C::GetSeasonalTagFromStatReward(const struct FIGTitleCardStat& InStatReward, class UObject* __WorldContext, class FText* SeasonalText)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPFL_SheikStoreItems.BPFL_SheikStoreItems_C.GetSeasonalTagFromStatReward");
		
		UBPFL_SheikStoreItems_C_GetSeasonalTagFromStatReward_Params params {};
		params.InStatReward = InStatReward;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (SeasonalText != nullptr)
			*SeasonalText = params.SeasonalText;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPFL_SheikStoreItems.BPFL_SheikStoreItems_C.GetSeasonalTagFromBaseReward
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FIGTitleCardBase                            InTextReward                                               (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FText                                        SeasonalText                                               (Parm, OutParm)
	 */
	void UBPFL_SheikStoreItems_C::GetSeasonalTagFromBaseReward(const struct FIGTitleCardBase& InTextReward, class UObject* __WorldContext, class FText* SeasonalText)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPFL_SheikStoreItems.BPFL_SheikStoreItems_C.GetSeasonalTagFromBaseReward");
		
		UBPFL_SheikStoreItems_C_GetSeasonalTagFromBaseReward_Params params {};
		params.InTextReward = InTextReward;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (SeasonalText != nullptr)
			*SeasonalText = params.SeasonalText;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPFL_SheikStoreItems.BPFL_SheikStoreItems_C.GetSetPrice
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSheikStoreItem                             StoreItem                                                  (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            Price                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPFL_SheikStoreItems_C::GetSetPrice(const struct FSheikStoreItem& StoreItem, class UObject* __WorldContext, int32_t* Price)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPFL_SheikStoreItems.BPFL_SheikStoreItems_C.GetSetPrice");
		
		UBPFL_SheikStoreItems_C_GetSetPrice_Params params {};
		params.StoreItem = StoreItem;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Price != nullptr)
			*Price = params.Price;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPFL_SheikStoreItems.BPFL_SheikStoreItems_C.GetBasePrices
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSheikStoreItem                             StoreItem                                                  (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            RegularPrice                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            DiscountPrice                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPFL_SheikStoreItems_C::GetBasePrices(const struct FSheikStoreItem& StoreItem, class UObject* __WorldContext, int32_t* RegularPrice, int32_t* DiscountPrice)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPFL_SheikStoreItems.BPFL_SheikStoreItems_C.GetBasePrices");
		
		UBPFL_SheikStoreItems_C_GetBasePrices_Params params {};
		params.StoreItem = StoreItem;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (RegularPrice != nullptr)
			*RegularPrice = params.RegularPrice;
		if (DiscountPrice != nullptr)
			*DiscountPrice = params.DiscountPrice;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPFL_SheikStoreItems.BPFL_SheikStoreItems_C.GetWalletSystem
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class USheikWalletSystem*                          WalletSystem                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPFL_SheikStoreItems_C::GetWalletSystem(class UObject* __WorldContext, class USheikWalletSystem** WalletSystem)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPFL_SheikStoreItems.BPFL_SheikStoreItems_C.GetWalletSystem");
		
		UBPFL_SheikStoreItems_C_GetWalletSystem_Params params {};
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (WalletSystem != nullptr)
			*WalletSystem = params.WalletSystem;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPFL_SheikStoreItems.BPFL_SheikStoreItems_C.GetStoreSystem
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class USheikStoreSystem*                           StoreSystem                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPFL_SheikStoreItems_C::GetStoreSystem(class UObject* __WorldContext, class USheikStoreSystem** StoreSystem)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPFL_SheikStoreItems.BPFL_SheikStoreItems_C.GetStoreSystem");
		
		UBPFL_SheikStoreItems_C_GetStoreSystem_Params params {};
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (StoreSystem != nullptr)
			*StoreSystem = params.StoreSystem;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPFL_SheikStoreItems.BPFL_SheikStoreItems_C.GetRarity
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSheikStoreItem                             StoreItem                                                  (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		EAccessoryItemRarity                               ItemRarity                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPFL_SheikStoreItems_C::GetRarity(const struct FSheikStoreItem& StoreItem, class UObject* __WorldContext, EAccessoryItemRarity* ItemRarity)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPFL_SheikStoreItems.BPFL_SheikStoreItems_C.GetRarity");
		
		UBPFL_SheikStoreItems_C_GetRarity_Params params {};
		params.StoreItem = StoreItem;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ItemRarity != nullptr)
			*ItemRarity = params.ItemRarity;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPFL_SheikStoreItems.BPFL_SheikStoreItems_C.GetHighestRarity
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSheikStoreItem                             StoreItem                                                  (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		EAccessoryItemRarity                               ItemRarity                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPFL_SheikStoreItems_C::GetHighestRarity(const struct FSheikStoreItem& StoreItem, class UObject* __WorldContext, EAccessoryItemRarity* ItemRarity)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPFL_SheikStoreItems.BPFL_SheikStoreItems_C.GetHighestRarity");
		
		UBPFL_SheikStoreItems_C_GetHighestRarity_Params params {};
		params.StoreItem = StoreItem;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ItemRarity != nullptr)
			*ItemRarity = params.ItemRarity;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPFL_SheikStoreItems.BPFL_SheikStoreItems_C.GetDescriptionText
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSheikStoreItem                             StoreItem                                                  (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FText                                        Text                                                       (Parm, OutParm)
	 */
	void UBPFL_SheikStoreItems_C::GetDescriptionText(const struct FSheikStoreItem& StoreItem, class UObject* __WorldContext, class FText* Text)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPFL_SheikStoreItems.BPFL_SheikStoreItems_C.GetDescriptionText");
		
		UBPFL_SheikStoreItems_C_GetDescriptionText_Params params {};
		params.StoreItem = StoreItem;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Text != nullptr)
			*Text = params.Text;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPFL_SheikStoreItems.BPFL_SheikStoreItems_C.GetNameText
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSheikStoreItem                             StoreItem                                                  (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FText                                        Text                                                       (Parm, OutParm)
	 */
	void UBPFL_SheikStoreItems_C::GetNameText(const struct FSheikStoreItem& StoreItem, class UObject* __WorldContext, class FText* Text)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPFL_SheikStoreItems.BPFL_SheikStoreItems_C.GetNameText");
		
		UBPFL_SheikStoreItems_C_GetNameText_Params params {};
		params.StoreItem = StoreItem;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Text != nullptr)
			*Text = params.Text;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPFL_SheikStoreItems.BPFL_SheikStoreItems_C.GetTypeText
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSheikStoreItem                             StoreItem                                                  (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FText                                        Text                                                       (Parm, OutParm)
	 */
	void UBPFL_SheikStoreItems_C::GetTypeText(const struct FSheikStoreItem& StoreItem, class UObject* __WorldContext, class FText* Text)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPFL_SheikStoreItems.BPFL_SheikStoreItems_C.GetTypeText");
		
		UBPFL_SheikStoreItems_C_GetTypeText_Params params {};
		params.StoreItem = StoreItem;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Text != nullptr)
			*Text = params.Text;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPFL_SheikStoreItems.BPFL_SheikStoreItems_C.IsItemEntryOwned
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSheikStoreItemEntry                        StoreItemEntry                                             (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               IsOwned                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBPFL_SheikStoreItems_C::IsItemEntryOwned(const struct FSheikStoreItemEntry& StoreItemEntry, class UObject* __WorldContext, bool* IsOwned)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPFL_SheikStoreItems.BPFL_SheikStoreItems_C.IsItemEntryOwned");
		
		UBPFL_SheikStoreItems_C_IsItemEntryOwned_Params params {};
		params.StoreItemEntry = StoreItemEntry;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (IsOwned != nullptr)
			*IsOwned = params.IsOwned;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPFL_SheikStoreItems.BPFL_SheikStoreItems_C.IsOwned
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSheikStoreItem                             StoreItem                                                  (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               IsOwned                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBPFL_SheikStoreItems_C::IsOwned(const struct FSheikStoreItem& StoreItem, class UObject* __WorldContext, bool* IsOwned)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPFL_SheikStoreItems.BPFL_SheikStoreItems_C.IsOwned");
		
		UBPFL_SheikStoreItems_C_IsOwned_Params params {};
		params.StoreItem = StoreItem;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (IsOwned != nullptr)
			*IsOwned = params.IsOwned;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPFL_SheikStoreItems.BPFL_SheikStoreItems_C.IsValidWalletAsset
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FIGWalletAssetInfo                          WalletAsset                                                (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               IsValid                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBPFL_SheikStoreItems_C::IsValidWalletAsset(const struct FIGWalletAssetInfo& WalletAsset, class UObject* __WorldContext, bool* IsValid)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPFL_SheikStoreItems.BPFL_SheikStoreItems_C.IsValidWalletAsset");
		
		UBPFL_SheikStoreItems_C_IsValidWalletAsset_Params params {};
		params.WalletAsset = WalletAsset;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (IsValid != nullptr)
			*IsValid = params.IsValid;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPFL_SheikStoreItems.BPFL_SheikStoreItems_C.GetDataForRarity
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EAccessoryItemRarity                               Rarity                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FLinearColor                                Color                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FText                                        RarityText                                                 (Parm, OutParm)
	 * 		class UTexture2D*                                  RarityIcon                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPFL_SheikStoreItems_C::GetDataForRarity(EAccessoryItemRarity Rarity, class UObject* __WorldContext, struct FLinearColor* Color, class FText* RarityText, class UTexture2D** RarityIcon)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPFL_SheikStoreItems.BPFL_SheikStoreItems_C.GetDataForRarity");
		
		UBPFL_SheikStoreItems_C_GetDataForRarity_Params params {};
		params.Rarity = Rarity;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Color != nullptr)
			*Color = params.Color;
		if (RarityText != nullptr)
			*RarityText = params.RarityText;
		if (RarityIcon != nullptr)
			*RarityIcon = params.RarityIcon;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPFL_SheikStoreItems.BPFL_SheikStoreItems_C.GetPrimaryVirtualCurrencyName
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Uppercase                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FText                                        CurrencyName                                               (Parm, OutParm)
	 */
	void UBPFL_SheikStoreItems_C::GetPrimaryVirtualCurrencyName(bool Uppercase, class UObject* __WorldContext, class FText* CurrencyName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPFL_SheikStoreItems.BPFL_SheikStoreItems_C.GetPrimaryVirtualCurrencyName");
		
		UBPFL_SheikStoreItems_C_GetPrimaryVirtualCurrencyName_Params params {};
		params.Uppercase = Uppercase;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (CurrencyName != nullptr)
			*CurrencyName = params.CurrencyName;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPFL_SheikStoreItems.BPFL_SheikStoreItems_C.GetWalletAssetTypeText
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EIGWalletAssetType                                 WalletAssetType                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Uppercase                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FText                                        Text                                                       (Parm, OutParm)
	 */
	void UBPFL_SheikStoreItems_C::GetWalletAssetTypeText(EIGWalletAssetType WalletAssetType, bool Uppercase, class UObject* __WorldContext, class FText* Text)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPFL_SheikStoreItems.BPFL_SheikStoreItems_C.GetWalletAssetTypeText");
		
		UBPFL_SheikStoreItems_C_GetWalletAssetTypeText_Params params {};
		params.WalletAssetType = WalletAssetType;
		params.Uppercase = Uppercase;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Text != nullptr)
			*Text = params.Text;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBPFL_SheikStoreItems_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBPFL_SheikStoreItems_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BPFL_SheikStoreItems.BPFL_SheikStoreItems_C");
		return ptr;
	}

}


