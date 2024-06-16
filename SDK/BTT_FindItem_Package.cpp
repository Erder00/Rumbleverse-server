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
	 * 		Name   -> Function BTT_FindItem.BTT_FindItem_C.IsWeaponValidTarget
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EMoveTier                                          Tier                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		EIGStashabilityType                                Stashability                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	bool UBTT_FindItem_C::IsWeaponValidTarget(EMoveTier Tier, EIGStashabilityType Stashability)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BTT_FindItem.BTT_FindItem_C.IsWeaponValidTarget");
		
		UBTT_FindItem_C_IsWeaponValidTarget_Params params {};
		params.Tier = Tier;
		params.Stashability = Stashability;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BTT_FindItem.BTT_FindItem_C.HasValidGameplayTags
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGameplayTagContainer                       ItemTags                                                   (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		struct FGameplayTagContainer                       DesiredTags                                                (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	bool UBTT_FindItem_C::HasValidGameplayTags(const struct FGameplayTagContainer& ItemTags, const struct FGameplayTagContainer& DesiredTags)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BTT_FindItem.BTT_FindItem_C.HasValidGameplayTags");
		
		UBTT_FindItem_C_HasValidGameplayTags_Params params {};
		params.ItemTags = ItemTags;
		params.DesiredTags = DesiredTags;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BTT_FindItem.BTT_FindItem_C.GetNumSpecialMoves
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Moves                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBTT_FindItem_C::GetNumSpecialMoves(int32_t* Moves)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BTT_FindItem.BTT_FindItem_C.GetNumSpecialMoves");
		
		UBTT_FindItem_C_GetNumSpecialMoves_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Moves != nullptr)
			*Moves = params.Moves;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BTT_FindItem.BTT_FindItem_C.GetWeaponTagsForActiveProfile
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGameplayTagContainer                       TagContainer                                               (Parm, OutParm)
	 */
	void UBTT_FindItem_C::GetWeaponTagsForActiveProfile(struct FGameplayTagContainer* TagContainer)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BTT_FindItem.BTT_FindItem_C.GetWeaponTagsForActiveProfile");
		
		UBTT_FindItem_C_GetWeaponTagsForActiveProfile_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (TagContainer != nullptr)
			*TagContainer = params.TagContainer;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BTT_FindItem.BTT_FindItem_C.GetWeaponsDesired
	 * 		Flags  -> ()
	 */
	bool UBTT_FindItem_C::GetWeaponsDesired()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BTT_FindItem.BTT_FindItem_C.GetWeaponsDesired");
		
		UBTT_FindItem_C_GetWeaponsDesired_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BTT_FindItem.BTT_FindItem_C.FindItemWithAnyTags
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGameplayTagContainer                       DesiredGameplayTags                                        (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		TArray<class AActor*>                              InActors                                                   (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		class AActor*                                      Item                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Found                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBTT_FindItem_C::FindItemWithAnyTags(const struct FGameplayTagContainer& DesiredGameplayTags, TArray<class AActor*>* InActors, class AActor** Item, bool* Found)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BTT_FindItem.BTT_FindItem_C.FindItemWithAnyTags");
		
		UBTT_FindItem_C_FindItemWithAnyTags_Params params {};
		params.DesiredGameplayTags = DesiredGameplayTags;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (InActors != nullptr)
			*InActors = params.InActors;
		if (Item != nullptr)
			*Item = params.Item;
		if (Found != nullptr)
			*Found = params.Found;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BTT_FindItem.BTT_FindItem_C.FindBestTarget
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<class AActor*>                              InActors                                                   (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		class AActor*                                      BestTarget                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBTT_FindItem_C::FindBestTarget(TArray<class AActor*>* InActors, class AActor** BestTarget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BTT_FindItem.BTT_FindItem_C.FindBestTarget");
		
		UBTT_FindItem_C_FindBestTarget_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (InActors != nullptr)
			*InActors = params.InActors;
		if (BestTarget != nullptr)
			*BestTarget = params.BestTarget;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BTT_FindItem.BTT_FindItem_C.FilterTargetableActors
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<class AActor*>                              InActors                                                   (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		TArray<class AActor*>                              OutActors                                                  (Parm, OutParm)
	 */
	void UBTT_FindItem_C::FilterTargetableActors(TArray<class AActor*>* InActors, TArray<class AActor*>* OutActors)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BTT_FindItem.BTT_FindItem_C.FilterTargetableActors");
		
		UBTT_FindItem_C_FilterTargetableActors_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (InActors != nullptr)
			*InActors = params.InActors;
		if (OutActors != nullptr)
			*OutActors = params.OutActors;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BTT_FindItem.BTT_FindItem_C.ClaimTarget
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      Target                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Claimed                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBTT_FindItem_C::ClaimTarget(class AActor* Target, bool* Claimed)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BTT_FindItem.BTT_FindItem_C.ClaimTarget");
		
		UBTT_FindItem_C_ClaimTarget_Params params {};
		params.Target = Target;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Claimed != nullptr)
			*Claimed = params.Claimed;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BTT_FindItem.BTT_FindItem_C.ChooseClosestPriorityItem
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<class AActor*>                              FoundItems                                                 (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		class AActor*                                      BestItem                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBTT_FindItem_C::ChooseClosestPriorityItem(TArray<class AActor*>* FoundItems, class AActor** BestItem)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BTT_FindItem.BTT_FindItem_C.ChooseClosestPriorityItem");
		
		UBTT_FindItem_C_ChooseClosestPriorityItem_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (FoundItems != nullptr)
			*FoundItems = params.FoundItems;
		if (BestItem != nullptr)
			*BestItem = params.BestItem;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BTT_FindItem.BTT_FindItem_C.CheckItemLootingConditions
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGameplayTagContainer                       DesiredGameplayTags                                        (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		bool                                               LootDesired                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		EBotItemCategory                                   Category                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBTT_FindItem_C::CheckItemLootingConditions(const struct FGameplayTagContainer& DesiredGameplayTags, bool* LootDesired, EBotItemCategory* Category)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BTT_FindItem.BTT_FindItem_C.CheckItemLootingConditions");
		
		UBTT_FindItem_C_CheckItemLootingConditions_Params params {};
		params.DesiredGameplayTags = DesiredGameplayTags;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (LootDesired != nullptr)
			*LootDesired = params.LootDesired;
		if (Category != nullptr)
			*Category = params.Category;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BTT_FindItem.BTT_FindItem_C.CheckForFullPathToItem
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      Item                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               FullPathGenerated                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBTT_FindItem_C::CheckForFullPathToItem(class AActor* Item, bool* FullPathGenerated)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BTT_FindItem.BTT_FindItem_C.CheckForFullPathToItem");
		
		UBTT_FindItem_C_CheckForFullPathToItem_Params params {};
		params.Item = Item;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (FullPathGenerated != nullptr)
			*FullPathGenerated = params.FullPathGenerated;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BTT_FindItem.BTT_FindItem_C.QueryFinished
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UEnvQueryInstanceBlueprintWrapper*           QueryInstance                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		EEnvQueryStatus                                    QueryStatus                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBTT_FindItem_C::QueryFinished(class UEnvQueryInstanceBlueprintWrapper* QueryInstance, EEnvQueryStatus QueryStatus)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BTT_FindItem.BTT_FindItem_C.QueryFinished");
		
		UBTT_FindItem_C_QueryFinished_Params params {};
		params.QueryInstance = QueryInstance;
		params.QueryStatus = QueryStatus;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BTT_FindItem.BTT_FindItem_C.ReceiveExecuteAI
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AAIController*                               OwnerController                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class APawn*                                       ControlledPawn                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBTT_FindItem_C::ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BTT_FindItem.BTT_FindItem_C.ReceiveExecuteAI");
		
		UBTT_FindItem_C_ReceiveExecuteAI_Params params {};
		params.OwnerController = OwnerController;
		params.ControlledPawn = ControlledPawn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BTT_FindItem.BTT_FindItem_C.ReceiveAbortAI
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AAIController*                               OwnerController                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class APawn*                                       ControlledPawn                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBTT_FindItem_C::ReceiveAbortAI(class AAIController* OwnerController, class APawn* ControlledPawn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BTT_FindItem.BTT_FindItem_C.ReceiveAbortAI");
		
		UBTT_FindItem_C_ReceiveAbortAI_Params params {};
		params.OwnerController = OwnerController;
		params.ControlledPawn = ControlledPawn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BTT_FindItem.BTT_FindItem_C.ExecuteUbergraph_BTT_FindItem
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBTT_FindItem_C::ExecuteUbergraph_BTT_FindItem(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BTT_FindItem.BTT_FindItem_C.ExecuteUbergraph_BTT_FindItem");
		
		UBTT_FindItem_C_ExecuteUbergraph_BTT_FindItem_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBTT_FindItem_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBTT_FindItem_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BTT_FindItem.BTT_FindItem_C");
		return ptr;
	}

}


