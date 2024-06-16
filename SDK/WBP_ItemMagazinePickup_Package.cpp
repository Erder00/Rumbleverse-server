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
	 * 		Name   -> Function WBP_ItemMagazinePickup.WBP_ItemMagazinePickup_C.GetItemImageFromLookupName
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        InName                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            InDurability                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UTexture2D*                                  OutImage                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_ItemMagazinePickup_C::GetItemImageFromLookupName(const class FName& InName, int32_t InDurability, class UTexture2D** OutImage)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_ItemMagazinePickup.WBP_ItemMagazinePickup_C.GetItemImageFromLookupName");
		
		UWBP_ItemMagazinePickup_C_GetItemImageFromLookupName_Params params {};
		params.InName = InName;
		params.InDurability = InDurability;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutImage != nullptr)
			*OutImage = params.OutImage;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_ItemMagazinePickup.WBP_ItemMagazinePickup_C.OnDurabilityChanged_cb
	 * 		Flags  -> ()
	 */
	void UWBP_ItemMagazinePickup_C::OnDurabilityChanged_cb()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_ItemMagazinePickup.WBP_ItemMagazinePickup_C.OnDurabilityChanged_cb");
		
		UWBP_ItemMagazinePickup_C_OnDurabilityChanged_cb_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_ItemMagazinePickup.WBP_ItemMagazinePickup_C.GetCharacterSafePromptPosition
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                                     InteractableLocation                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		EInteractablePromptBehavior                        PromptBehavior                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector2D                                   WidgetPosition                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_ItemMagazinePickup_C::GetCharacterSafePromptPosition(const struct FVector& InteractableLocation, EInteractablePromptBehavior PromptBehavior, struct FVector2D* WidgetPosition)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_ItemMagazinePickup.WBP_ItemMagazinePickup_C.GetCharacterSafePromptPosition");
		
		UWBP_ItemMagazinePickup_C_GetCharacterSafePromptPosition_Params params {};
		params.InteractableLocation = InteractableLocation;
		params.PromptBehavior = PromptBehavior;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (WidgetPosition != nullptr)
			*WidgetPosition = params.WidgetPosition;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_ItemMagazinePickup.WBP_ItemMagazinePickup_C.CreateItemDescription
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<class FText>                                DescirptionLines                                           (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UWBP_ItemMagazinePickup_C::CreateItemDescription(TArray<class FText>* DescirptionLines)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_ItemMagazinePickup.WBP_ItemMagazinePickup_C.CreateItemDescription");
		
		UWBP_ItemMagazinePickup_C_CreateItemDescription_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (DescirptionLines != nullptr)
			*DescirptionLines = params.DescirptionLines;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_ItemMagazinePickup.WBP_ItemMagazinePickup_C.SpawnItemEffectsIcons
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<EIGSpecialMoveEffect>                       Array                                                      (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		class UVerticalBox*                                VerticalBox                                                (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_ItemMagazinePickup_C::SpawnItemEffectsIcons(TArray<EIGSpecialMoveEffect>* Array, class UVerticalBox** VerticalBox)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_ItemMagazinePickup.WBP_ItemMagazinePickup_C.SpawnItemEffectsIcons");
		
		UWBP_ItemMagazinePickup_C_SpawnItemEffectsIcons_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Array != nullptr)
			*Array = params.Array;
		if (VerticalBox != nullptr)
			*VerticalBox = params.VerticalBox;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_ItemMagazinePickup.WBP_ItemMagazinePickup_C.CreateDuribilityPip
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UHorizontalBox*                              PipContainer                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		EIGItemType                                        ItemType                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_ItemMagazinePickup_C::CreateDuribilityPip(class UHorizontalBox* PipContainer, EIGItemType ItemType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_ItemMagazinePickup.WBP_ItemMagazinePickup_C.CreateDuribilityPip");
		
		UWBP_ItemMagazinePickup_C_CreateDuribilityPip_Params params {};
		params.PipContainer = PipContainer;
		params.ItemType = ItemType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_ItemMagazinePickup.WBP_ItemMagazinePickup_C.OnInteractableStatusChanged_cb
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AIGCharacter*                                InteractableActor                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_ItemMagazinePickup_C::OnInteractableStatusChanged_cb(class AIGCharacter* InteractableActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_ItemMagazinePickup.WBP_ItemMagazinePickup_C.OnInteractableStatusChanged_cb");
		
		UWBP_ItemMagazinePickup_C_OnInteractableStatusChanged_cb_Params params {};
		params.InteractableActor = InteractableActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_ItemMagazinePickup.WBP_ItemMagazinePickup_C.OnItemUseCompleted_cb
	 * 		Flags  -> ()
	 */
	void UWBP_ItemMagazinePickup_C::OnItemUseCompleted_cb()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_ItemMagazinePickup.WBP_ItemMagazinePickup_C.OnItemUseCompleted_cb");
		
		UWBP_ItemMagazinePickup_C_OnItemUseCompleted_cb_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_ItemMagazinePickup.WBP_ItemMagazinePickup_C.OnItemUseStarted_cb
	 * 		Flags  -> ()
	 */
	void UWBP_ItemMagazinePickup_C::OnItemUseStarted_cb()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_ItemMagazinePickup.WBP_ItemMagazinePickup_C.OnItemUseStarted_cb");
		
		UWBP_ItemMagazinePickup_C_OnItemUseStarted_cb_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_ItemMagazinePickup.WBP_ItemMagazinePickup_C.SetVendingVisiblity
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsNotAnItem                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_ItemMagazinePickup_C::SetVendingVisiblity(bool IsNotAnItem)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_ItemMagazinePickup.WBP_ItemMagazinePickup_C.SetVendingVisiblity");
		
		UWBP_ItemMagazinePickup_C_SetVendingVisiblity_Params params {};
		params.IsNotAnItem = IsNotAnItem;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_ItemMagazinePickup.WBP_ItemMagazinePickup_C.UpdateItemDurability
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            RemainingUses                                              (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		EIGItemType                                        ItemType                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_ItemMagazinePickup_C::UpdateItemDurability(int32_t* RemainingUses, EIGItemType ItemType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_ItemMagazinePickup.WBP_ItemMagazinePickup_C.UpdateItemDurability");
		
		UWBP_ItemMagazinePickup_C_UpdateItemDurability_Params params {};
		params.ItemType = ItemType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (RemainingUses != nullptr)
			*RemainingUses = params.RemainingUses;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_ItemMagazinePickup.WBP_ItemMagazinePickup_C.OnContextInteractableActorChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UIGInteractableBoxComponent*                 InteractableBoxComponent                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     Interactable                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_ItemMagazinePickup_C::OnContextInteractableActorChanged(class UIGInteractableBoxComponent* InteractableBoxComponent, class UObject* Interactable)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_ItemMagazinePickup.WBP_ItemMagazinePickup_C.OnContextInteractableActorChanged");
		
		UWBP_ItemMagazinePickup_C_OnContextInteractableActorChanged_Params params {};
		params.InteractableBoxComponent = InteractableBoxComponent;
		params.Interactable = Interactable;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_ItemMagazinePickup.WBP_ItemMagazinePickup_C.SpawnMagazineEffectsIcons
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UVerticalBox*                                VerticalBox                                                (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		TArray<EIGSpecialMoveEffect>                       SpecialAttackTypes                                         (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UWBP_ItemMagazinePickup_C::SpawnMagazineEffectsIcons(class UVerticalBox** VerticalBox, TArray<EIGSpecialMoveEffect>* SpecialAttackTypes)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_ItemMagazinePickup.WBP_ItemMagazinePickup_C.SpawnMagazineEffectsIcons");
		
		UWBP_ItemMagazinePickup_C_SpawnMagazineEffectsIcons_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (VerticalBox != nullptr)
			*VerticalBox = params.VerticalBox;
		if (SpecialAttackTypes != nullptr)
			*SpecialAttackTypes = params.SpecialAttackTypes;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_ItemMagazinePickup.WBP_ItemMagazinePickup_C.UpdateItemTierIcon_andColor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EMoveTier                                          ItemTier                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_ItemMagazinePickup_C::UpdateItemTierIcon_andColor(EMoveTier ItemTier)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_ItemMagazinePickup.WBP_ItemMagazinePickup_C.UpdateItemTierIcon_andColor");
		
		UWBP_ItemMagazinePickup_C_UpdateItemTierIcon_andColor_Params params {};
		params.ItemTier = ItemTier;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_ItemMagazinePickup.WBP_ItemMagazinePickup_C.UpdateDurabilityVisibility
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EIGItemType                                        ItemsType                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_ItemMagazinePickup_C::UpdateDurabilityVisibility(EIGItemType ItemsType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_ItemMagazinePickup.WBP_ItemMagazinePickup_C.UpdateDurabilityVisibility");
		
		UWBP_ItemMagazinePickup_C_UpdateDurabilityVisibility_Params params {};
		params.ItemsType = ItemsType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_ItemMagazinePickup.WBP_ItemMagazinePickup_C.UpdatePromptInfo
	 * 		Flags  -> ()
	 */
	void UWBP_ItemMagazinePickup_C::UpdatePromptInfo()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_ItemMagazinePickup.WBP_ItemMagazinePickup_C.UpdatePromptInfo");
		
		UWBP_ItemMagazinePickup_C_UpdatePromptInfo_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_ItemMagazinePickup.WBP_ItemMagazinePickup_C.UpdatePromptPosition
	 * 		Flags  -> ()
	 */
	void UWBP_ItemMagazinePickup_C::UpdatePromptPosition()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_ItemMagazinePickup.WBP_ItemMagazinePickup_C.UpdatePromptPosition");
		
		UWBP_ItemMagazinePickup_C_UpdatePromptPosition_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_ItemMagazinePickup.WBP_ItemMagazinePickup_C.UpdateInteractText
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        PromptText                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UWBP_ItemMagazinePickup_C::UpdateInteractText(const class FText& PromptText)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_ItemMagazinePickup.WBP_ItemMagazinePickup_C.UpdateInteractText");
		
		UWBP_ItemMagazinePickup_C_UpdateInteractText_Params params {};
		params.PromptText = PromptText;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_ItemMagazinePickup.WBP_ItemMagazinePickup_C.UpdatePromptVisibility
	 * 		Flags  -> ()
	 */
	void UWBP_ItemMagazinePickup_C::UpdatePromptVisibility()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_ItemMagazinePickup.WBP_ItemMagazinePickup_C.UpdatePromptVisibility");
		
		UWBP_ItemMagazinePickup_C_UpdatePromptVisibility_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_ItemMagazinePickup.WBP_ItemMagazinePickup_C.ConstructOnlyOnce
	 * 		Flags  -> ()
	 */
	void UWBP_ItemMagazinePickup_C::ConstructOnlyOnce()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_ItemMagazinePickup.WBP_ItemMagazinePickup_C.ConstructOnlyOnce");
		
		UWBP_ItemMagazinePickup_C_ConstructOnlyOnce_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_ItemMagazinePickup.WBP_ItemMagazinePickup_C.Tick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_ItemMagazinePickup_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_ItemMagazinePickup.WBP_ItemMagazinePickup_C.Tick");
		
		UWBP_ItemMagazinePickup_C_Tick_Params params {};
		params.MyGeometry = MyGeometry;
		params.InDeltaTime = InDeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_ItemMagazinePickup.WBP_ItemMagazinePickup_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_ItemMagazinePickup_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_ItemMagazinePickup.WBP_ItemMagazinePickup_C.PreConstruct");
		
		UWBP_ItemMagazinePickup_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_ItemMagazinePickup.WBP_ItemMagazinePickup_C.ExecuteUbergraph_WBP_ItemMagazinePickup
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_ItemMagazinePickup_C::ExecuteUbergraph_WBP_ItemMagazinePickup(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_ItemMagazinePickup.WBP_ItemMagazinePickup_C.ExecuteUbergraph_WBP_ItemMagazinePickup");
		
		UWBP_ItemMagazinePickup_C_ExecuteUbergraph_WBP_ItemMagazinePickup_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWBP_ItemMagazinePickup_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWBP_ItemMagazinePickup_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_ItemMagazinePickup.WBP_ItemMagazinePickup_C");
		return ptr;
	}

}


