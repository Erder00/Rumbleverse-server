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
	 * Function BTT_FindItem.BTT_FindItem_C.IsWeaponValidTarget
	 */
	struct UBTT_FindItem_C_IsWeaponValidTarget_Params
	{
	public:
		EMoveTier                                                  Tier;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		EIGStashabilityType                                        Stashability;                                            // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       ReturnValue;                                             // 0x0002(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BTT_FindItem.BTT_FindItem_C.HasValidGameplayTags
	 */
	struct UBTT_FindItem_C_HasValidGameplayTags_Params
	{
	public:
		struct FGameplayTagContainer                               ItemTags;                                                // 0x0000(0x0020)  (BlueprintVisible, BlueprintReadOnly, Parm)
		struct FGameplayTagContainer                               DesiredTags;                                             // 0x0020(0x0020)  (BlueprintVisible, BlueprintReadOnly, Parm)
		bool                                                       ReturnValue;                                             // 0x0040(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BTT_FindItem.BTT_FindItem_C.GetNumSpecialMoves
	 */
	struct UBTT_FindItem_C_GetNumSpecialMoves_Params
	{
	public:
		int32_t                                                    Moves;                                                   // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_35HT[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BTT_FindItem.BTT_FindItem_C.GetWeaponTagsForActiveProfile
	 */
	struct UBTT_FindItem_C_GetWeaponTagsForActiveProfile_Params
	{
	public:
		struct FGameplayTagContainer                               TagContainer;                                            // 0x0000(0x0020)  (Parm, OutParm)
	};

	/**
	 * Function BTT_FindItem.BTT_FindItem_C.GetWeaponsDesired
	 */
	struct UBTT_FindItem_C_GetWeaponsDesired_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BTT_FindItem.BTT_FindItem_C.FindItemWithAnyTags
	 */
	struct UBTT_FindItem_C_FindItemWithAnyTags_Params
	{
	public:
		struct FGameplayTagContainer                               DesiredGameplayTags;                                     // 0x0000(0x0020)  (BlueprintVisible, BlueprintReadOnly, Parm)
		TArray<class AActor*>                                      InActors;                                                // 0x0020(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		class AActor*                                              Item;                                                    // 0x0030(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       Found;                                                   // 0x0038(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BTT_FindItem.BTT_FindItem_C.FindBestTarget
	 */
	struct UBTT_FindItem_C_FindBestTarget_Params
	{
	public:
		TArray<class AActor*>                                      InActors;                                                // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		class AActor*                                              BestTarget;                                              // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BTT_FindItem.BTT_FindItem_C.FilterTargetableActors
	 */
	struct UBTT_FindItem_C_FilterTargetableActors_Params
	{
	public:
		TArray<class AActor*>                                      InActors;                                                // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		TArray<class AActor*>                                      OutActors;                                               // 0x0010(0x0010)  (Parm, OutParm)
	};

	/**
	 * Function BTT_FindItem.BTT_FindItem_C.ClaimTarget
	 */
	struct UBTT_FindItem_C_ClaimTarget_Params
	{
	public:
		class AActor*                                              Target;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       Claimed;                                                 // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BTT_FindItem.BTT_FindItem_C.ChooseClosestPriorityItem
	 */
	struct UBTT_FindItem_C_ChooseClosestPriorityItem_Params
	{
	public:
		TArray<class AActor*>                                      FoundItems;                                              // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		class AActor*                                              BestItem;                                                // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BTT_FindItem.BTT_FindItem_C.CheckItemLootingConditions
	 */
	struct UBTT_FindItem_C_CheckItemLootingConditions_Params
	{
	public:
		struct FGameplayTagContainer                               DesiredGameplayTags;                                     // 0x0000(0x0020)  (BlueprintVisible, BlueprintReadOnly, Parm)
		bool                                                       LootDesired;                                             // 0x0020(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		EBotItemCategory                                           Category;                                                // 0x0021(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BTT_FindItem.BTT_FindItem_C.CheckForFullPathToItem
	 */
	struct UBTT_FindItem_C_CheckForFullPathToItem_Params
	{
	public:
		class AActor*                                              Item;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       FullPathGenerated;                                       // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_XVCT[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BTT_FindItem.BTT_FindItem_C.QueryFinished
	 */
	struct UBTT_FindItem_C_QueryFinished_Params
	{
	public:
		class UEnvQueryInstanceBlueprintWrapper*                   QueryInstance;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		EEnvQueryStatus                                            QueryStatus;                                             // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_Q72Y[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BTT_FindItem.BTT_FindItem_C.ReceiveExecuteAI
	 */
	struct UBTT_FindItem_C_ReceiveExecuteAI_Params
	{
	public:
		class AAIController*                                       OwnerController;                                         // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class APawn*                                               ControlledPawn;                                          // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BTT_FindItem.BTT_FindItem_C.ReceiveAbortAI
	 */
	struct UBTT_FindItem_C_ReceiveAbortAI_Params
	{
	public:
		class AAIController*                                       OwnerController;                                         // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class APawn*                                               ControlledPawn;                                          // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BTT_FindItem.BTT_FindItem_C.ExecuteUbergraph_BTT_FindItem
	 */
	struct UBTT_FindItem_C_ExecuteUbergraph_BTT_FindItem_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
