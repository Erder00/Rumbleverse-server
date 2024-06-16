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
	 * Function WBP_ItemMagazinePickup.WBP_ItemMagazinePickup_C.GetItemImageFromLookupName
	 */
	struct UWBP_ItemMagazinePickup_C_GetItemImageFromLookupName_Params
	{
	public:
		class FName                                                InName;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    InDurability;                                            // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_OGRT[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UTexture2D*                                          OutImage;                                                // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_ItemMagazinePickup.WBP_ItemMagazinePickup_C.OnDurabilityChanged_cb
	 */
	struct UWBP_ItemMagazinePickup_C_OnDurabilityChanged_cb_Params
	{	};

	/**
	 * Function WBP_ItemMagazinePickup.WBP_ItemMagazinePickup_C.GetCharacterSafePromptPosition
	 */
	struct UWBP_ItemMagazinePickup_C_GetCharacterSafePromptPosition_Params
	{
	public:
		struct FVector                                             InteractableLocation;                                    // 0x0000(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		EInteractablePromptBehavior                                PromptBehavior;                                          // 0x000C(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_BG9L[0x3];                                   // 0x000D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FVector2D                                           WidgetPosition;                                          // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_ItemMagazinePickup.WBP_ItemMagazinePickup_C.CreateItemDescription
	 */
	struct UWBP_ItemMagazinePickup_C_CreateItemDescription_Params
	{
	public:
		TArray<class FText>                                        DescirptionLines;                                        // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function WBP_ItemMagazinePickup.WBP_ItemMagazinePickup_C.SpawnItemEffectsIcons
	 */
	struct UWBP_ItemMagazinePickup_C_SpawnItemEffectsIcons_Params
	{
	public:
		TArray<EIGSpecialMoveEffect>                               Array;                                                   // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		class UVerticalBox*                                        VerticalBox;                                             // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_ItemMagazinePickup.WBP_ItemMagazinePickup_C.CreateDuribilityPip
	 */
	struct UWBP_ItemMagazinePickup_C_CreateDuribilityPip_Params
	{
	public:
		class UHorizontalBox*                                      PipContainer;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		EIGItemType                                                ItemType;                                                // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_PM6S[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function WBP_ItemMagazinePickup.WBP_ItemMagazinePickup_C.OnInteractableStatusChanged_cb
	 */
	struct UWBP_ItemMagazinePickup_C_OnInteractableStatusChanged_cb_Params
	{
	public:
		class AIGCharacter*                                        InteractableActor;                                       // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_ItemMagazinePickup.WBP_ItemMagazinePickup_C.OnItemUseCompleted_cb
	 */
	struct UWBP_ItemMagazinePickup_C_OnItemUseCompleted_cb_Params
	{	};

	/**
	 * Function WBP_ItemMagazinePickup.WBP_ItemMagazinePickup_C.OnItemUseStarted_cb
	 */
	struct UWBP_ItemMagazinePickup_C_OnItemUseStarted_cb_Params
	{	};

	/**
	 * Function WBP_ItemMagazinePickup.WBP_ItemMagazinePickup_C.SetVendingVisiblity
	 */
	struct UWBP_ItemMagazinePickup_C_SetVendingVisiblity_Params
	{
	public:
		bool                                                       IsNotAnItem;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_ItemMagazinePickup.WBP_ItemMagazinePickup_C.UpdateItemDurability
	 */
	struct UWBP_ItemMagazinePickup_C_UpdateItemDurability_Params
	{
	public:
		int32_t                                                    RemainingUses;                                           // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		EIGItemType                                                ItemType;                                                // 0x0004(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_E6IE[0x3];                                   // 0x0005(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function WBP_ItemMagazinePickup.WBP_ItemMagazinePickup_C.OnContextInteractableActorChanged
	 */
	struct UWBP_ItemMagazinePickup_C_OnContextInteractableActorChanged_Params
	{
	public:
		class UIGInteractableBoxComponent*                         InteractableBoxComponent;                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UObject*                                             Interactable;                                            // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_ItemMagazinePickup.WBP_ItemMagazinePickup_C.SpawnMagazineEffectsIcons
	 */
	struct UWBP_ItemMagazinePickup_C_SpawnMagazineEffectsIcons_Params
	{
	public:
		class UVerticalBox*                                        VerticalBox;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		TArray<EIGSpecialMoveEffect>                               SpecialAttackTypes;                                      // 0x0008(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function WBP_ItemMagazinePickup.WBP_ItemMagazinePickup_C.UpdateItemTierIcon_andColor
	 */
	struct UWBP_ItemMagazinePickup_C_UpdateItemTierIcon_andColor_Params
	{
	public:
		EMoveTier                                                  ItemTier;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_LG5B[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function WBP_ItemMagazinePickup.WBP_ItemMagazinePickup_C.UpdateDurabilityVisibility
	 */
	struct UWBP_ItemMagazinePickup_C_UpdateDurabilityVisibility_Params
	{
	public:
		EIGItemType                                                ItemsType;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_ItemMagazinePickup.WBP_ItemMagazinePickup_C.UpdatePromptInfo
	 */
	struct UWBP_ItemMagazinePickup_C_UpdatePromptInfo_Params
	{	};

	/**
	 * Function WBP_ItemMagazinePickup.WBP_ItemMagazinePickup_C.UpdatePromptPosition
	 */
	struct UWBP_ItemMagazinePickup_C_UpdatePromptPosition_Params
	{	};

	/**
	 * Function WBP_ItemMagazinePickup.WBP_ItemMagazinePickup_C.UpdateInteractText
	 */
	struct UWBP_ItemMagazinePickup_C_UpdateInteractText_Params
	{
	public:
		class FText                                                PromptText;                                              // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function WBP_ItemMagazinePickup.WBP_ItemMagazinePickup_C.UpdatePromptVisibility
	 */
	struct UWBP_ItemMagazinePickup_C_UpdatePromptVisibility_Params
	{	};

	/**
	 * Function WBP_ItemMagazinePickup.WBP_ItemMagazinePickup_C.ConstructOnlyOnce
	 */
	struct UWBP_ItemMagazinePickup_C_ConstructOnlyOnce_Params
	{	};

	/**
	 * Function WBP_ItemMagazinePickup.WBP_ItemMagazinePickup_C.Tick
	 */
	struct UWBP_ItemMagazinePickup_C_Tick_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		float                                                      InDeltaTime;                                             // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_ItemMagazinePickup.WBP_ItemMagazinePickup_C.PreConstruct
	 */
	struct UWBP_ItemMagazinePickup_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_ItemMagazinePickup.WBP_ItemMagazinePickup_C.ExecuteUbergraph_WBP_ItemMagazinePickup
	 */
	struct UWBP_ItemMagazinePickup_C_ExecuteUbergraph_WBP_ItemMagazinePickup_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_P1G9[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
