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
	 * Function Sheik.BattlePassProgressionManager.PurchaseBattlePassTiersComplete
	 */
	struct UBattlePassProgressionManager_PurchaseBattlePassTiersComplete_Params
	{
	public:
		bool                                                       bSuccessful;                                             // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_MXML[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FSheikError                                         Error;                                                   // 0x0004(0x000C)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.BattlePassProgressionManager.PurchaseBattlePassComplete
	 */
	struct UBattlePassProgressionManager_PurchaseBattlePassComplete_Params
	{
	public:
		bool                                                       bSuccessful;                                             // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_BEYP[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FSheikError                                         Error;                                                   // 0x0004(0x000C)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.BattlePassProgressionManager.OnEntitlementsRefreshed
	 */
	struct UBattlePassProgressionManager_OnEntitlementsRefreshed_Params
	{	};

	/**
	 * Function Sheik.CloutProgressionManager.RefreshCloutLevel
	 */
	struct UCloutProgressionManager_RefreshCloutLevel_Params
	{	};

	/**
	 * Function Sheik.CloutProgressionManager.GetNextCloutLevelForDisplayOnly
	 */
	struct UCloutProgressionManager_GetNextCloutLevelForDisplayOnly_Params
	{
	public:
		struct FProgressionLevel                                   OutNextCloutLevel;                                       // 0x0000(0x0068)  (Parm, OutParm, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0068(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.CloutProgressionManager.GetMaxCloutLevel
	 */
	struct UCloutProgressionManager_GetMaxCloutLevel_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.CloutProgressionManager.GetCurrentNumCloutFans
	 */
	struct UCloutProgressionManager_GetCurrentNumCloutFans_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.CloutProgressionManager.GetCloutLevel
	 */
	struct UCloutProgressionManager_GetCloutLevel_Params
	{
	public:
		struct FProgressionLevel                                   OutProgressionLevel;                                     // 0x0000(0x0068)  (Parm, OutParm, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0068(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.CloutProgressionManager.CheckWillCloutLevelUpGivenCurrentFans
	 */
	struct UCloutProgressionManager_CheckWillCloutLevelUpGivenCurrentFans_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.FrontendHUD.GetSheikTitleCardFrontendUtility
	 */
	struct AFrontendHUD_GetSheikTitleCardFrontendUtility_Params
	{
	public:
		class ASheikTitleCardFrontendUtility*                      ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.FrontendHUD.GetSheikStoreSystem
	 */
	struct AFrontendHUD_GetSheikStoreSystem_Params
	{
	public:
		class USheikStoreSystem*                                   ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.FrontendHUD.GetSheikAccessorySystem
	 */
	struct AFrontendHUD_GetSheikAccessorySystem_Params
	{
	public:
		class USheikAccessorySystem*                               ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.IG_EditableTextBox.OpenVirtualKeyboard
	 */
	struct UIG_EditableTextBox_OpenVirtualKeyboard_Params
	{
	public:
		int32_t                                                    UserIndex;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.IGCollisionTransitionState.TriggerTransitionForTwoWallImpact
	 */
	struct UIGCollisionTransitionState_TriggerTransitionForTwoWallImpact_Params
	{
	public:
		class AIGCharacter*                                        Character;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FHitResult                                          Hit;                                                     // 0x0008(0x0088)  (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
		struct FVector                                             OldHitNormal;                                            // 0x0090(0x000C)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             MoveDelta;                                               // 0x009C(0x000C)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.IGCollisionTransitionState.TriggerTransitionForImpact
	 */
	struct UIGCollisionTransitionState_TriggerTransitionForImpact_Params
	{
	public:
		class AIGCharacter*                                        Character;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FHitResult                                          Hit;                                                     // 0x0008(0x0088)  (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
		float                                                      TimeSlice;                                               // 0x0090(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             MoveDelta;                                               // 0x0094(0x000C)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.MeshMergeFunctionLibrary.MergeMeshes
	 */
	struct UMeshMergeFunctionLibrary_MergeMeshes_Params
	{
	public:
		struct FSkeletalMeshMergeParams                            Params;                                                  // 0x0000(0x0040)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		class USkeletalMesh*                                       ReturnValue;                                             // 0x0040(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikAccessorySystem.VerifyUnlockedOutfits
	 */
	struct USheikAccessorySystem_VerifyUnlockedOutfits_Params
	{	};

	/**
	 * Function Sheik.SheikAccessorySystem.SetSheikWalletSystem
	 */
	struct USheikAccessorySystem_SetSheikWalletSystem_Params
	{
	public:
		class USheikWalletSystem*                                  InSheikWalletSystem;                                     // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikAccessorySystem.ProcessDataTables
	 */
	struct USheikAccessorySystem_ProcessDataTables_Params
	{	};

	/**
	 * Function Sheik.SheikAccessorySystem.LoadTextureAccessoryTable
	 */
	struct USheikAccessorySystem_LoadTextureAccessoryTable_Params
	{
	public:
		class UIGDataTable*                                        DataTable;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<struct FSoftObjectPath>                             OutPendingTextureAssets;                                 // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikAccessorySystem.HandleOnTextureIconsLoadComplete
	 */
	struct USheikAccessorySystem_HandleOnTextureIconsLoadComplete_Params
	{	};

	/**
	 * Function Sheik.SheikAccessorySystem.HandleOnDefaultUndergarmentsLoadComplete
	 */
	struct USheikAccessorySystem_HandleOnDefaultUndergarmentsLoadComplete_Params
	{	};

	/**
	 * Function Sheik.SheikAccessorySystem.HandleDevOnlyAccessoryLoadComplete
	 */
	struct USheikAccessorySystem_HandleDevOnlyAccessoryLoadComplete_Params
	{	};

	/**
	 * Function Sheik.SheikAccessorySystem.GetRegionZoomForBody
	 */
	struct USheikAccessorySystem_GetRegionZoomForBody_Params
	{
	public:
		EIGBodyType                                                BodyType;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EIGBodyRegion                                              DesiredRegion;                                           // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_W6OG[0x6];                                   // 0x0002(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FSheikBodyRegionInfo                                OutRegionInfo;                                           // 0x0008(0x0020)  (Parm, OutParm, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0028(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikAccessorySystem.GetRarityForOutfit
	 */
	struct USheikAccessorySystem_GetRarityForOutfit_Params
	{
	public:
		struct FSheikOutfitInfo                                    InOutfit;                                                // 0x0000(0x00B0)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		EAccessoryItemRarity                                       ReturnValue;                                             // 0x00B0(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikAccessorySystem.GetPerfCostForLoadout
	 */
	struct USheikAccessorySystem_GetPerfCostForLoadout_Params
	{
	public:
		struct FCharacterLoadout                                   InLoadout;                                               // 0x0000(0x0070)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		int32_t                                                    ReturnValue;                                             // 0x0070(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikAccessorySystem.GetGeneralDataByType
	 */
	struct USheikAccessorySystem_GetGeneralDataByType_Params
	{
	public:
		EAccessoryType                                             Type;                                                    // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_1G6R[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<struct FSheikAccessoryInfo>                         OutAccessories;                                          // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
		bool                                                       bFilterUnowned;                                          // 0x0018(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0019(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikAccessorySystem.GetBudgetLimit
	 */
	struct USheikAccessorySystem_GetBudgetLimit_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikAccessorySystem.GetBodyShapeIdByType
	 */
	struct USheikAccessorySystem_GetBodyShapeIdByType_Params
	{
	public:
		EIGBodyType                                                BodyType;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_H05N[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FName                                                OutBodyShapeId;                                          // 0x0004(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x000C(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikAccessorySystem.GetAccessoryByWalletId
	 */
	struct USheikAccessorySystem_GetAccessoryByWalletId_Params
	{
	public:
		class FName                                                WalletId;                                                // 0x0000(0x0008)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EIGBodyType                                                BodyType;                                                // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_KT4S[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FSheikAccessoryInfo                                 Accessory;                                               // 0x0010(0x05E0)  (Parm, OutParm, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x05F0(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikAccessorySystem.GetAccessory
	 */
	struct USheikAccessorySystem_GetAccessory_Params
	{
	public:
		class FName                                                ID;                                                      // 0x0000(0x0008)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EIGBodyType                                                BodyType;                                                // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_T73G[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FSheikAccessoryInfo                                 Accessory;                                               // 0x0010(0x05E0)  (Parm, OutParm, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x05F0(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikActorCollisionComponent.OnSurfaceHitStart
	 */
	struct USheikActorCollisionComponent_OnSurfaceHitStart_Params
	{
	public:
		class AActor*                                              OverlappedActor;                                         // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AActor*                                              OtherActor;                                              // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             NormalImpulse;                                           // 0x0010(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FHitResult                                          Hit;                                                     // 0x001C(0x0088)  (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikActorCollisionComponent.OnSurfaceCollisionStart
	 */
	struct USheikActorCollisionComponent_OnSurfaceCollisionStart_Params
	{
	public:
		class AActor*                                              OverlappedActor;                                         // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AActor*                                              OtherActor;                                              // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikActorCollisionComponent.OnSurfaceCollisionEnd
	 */
	struct USheikActorCollisionComponent_OnSurfaceCollisionEnd_Params
	{
	public:
		class AActor*                                              OverlappedActor;                                         // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AActor*                                              OtherActor;                                              // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikActorCollisionComponent.BP_OnSurfaceHitStart
	 */
	struct USheikActorCollisionComponent_BP_OnSurfaceHitStart_Params
	{
	public:
		class AActor*                                              OverlappedActor;                                         // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AActor*                                              OtherActor;                                              // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             NormalImpulse;                                           // 0x0010(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FHitResult                                          Hit;                                                     // 0x001C(0x0088)  (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikActorCollisionComponent.BP_OnSurfaceCollisionStart
	 */
	struct USheikActorCollisionComponent_BP_OnSurfaceCollisionStart_Params
	{
	public:
		class AActor*                                              OverlappedActor;                                         // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AActor*                                              OtherActor;                                              // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikActorCollisionComponent.BP_OnSurfaceCollisionEnd
	 */
	struct USheikActorCollisionComponent_BP_OnSurfaceCollisionEnd_Params
	{
	public:
		class AActor*                                              OverlappedActor;                                         // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AActor*                                              OtherActor;                                              // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikAgeGatingManager.QueryKidRequirements
	 */
	struct USheikAgeGatingManager_QueryKidRequirements_Params
	{
	public:
		class FScriptDelegate                                      Delegate;                                                // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction Sheik.SheikAgeGatingManager.OnQueryKidRequirements__DelegateSignature
	 */
	struct USheikAgeGatingManager_OnQueryKidRequirements__DelegateSignature_Params
	{
	public:
		bool                                                       bDateOfBirthRequired;                                    // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bPermissionsRequired;                                    // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bSuccessful;                                             // 0x0002(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_VFQP[0x1];                                   // 0x0003(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FSheikError                                         Error;                                                   // 0x0004(0x000C)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction Sheik.SheikAgeGatingManager.OnPermissionsUpdated__DelegateSignature
	 */
	struct USheikAgeGatingManager_OnPermissionsUpdated__DelegateSignature_Params
	{
	public:
		TArray<class FString>                                      Names;                                                   // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
		TArray<EKWSPermissionStatus>                               Statuses;                                                // 0x0010(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction Sheik.SheikAgeGatingManager.OnCommitParentEmail__DelegateSignature
	 */
	struct USheikAgeGatingManager_OnCommitParentEmail__DelegateSignature_Params
	{
	public:
		bool                                                       bSuccessful;                                             // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_5LVW[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FSheikError                                         Error;                                                   // 0x0004(0x000C)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction Sheik.SheikAgeGatingManager.OnCommitDateOfBirth__DelegateSignature
	 */
	struct USheikAgeGatingManager_OnCommitDateOfBirth__DelegateSignature_Params
	{
	public:
		bool                                                       bParentEmailRequired;                                    // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikAgeGatingManager.GetPermissions
	 */
	struct USheikAgeGatingManager_GetPermissions_Params
	{
	public:
		TArray<class FString>                                      Names;                                                   // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
		TArray<EKWSPermissionStatus>                               Statuses;                                                // 0x0010(0x0010)  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikAgeGatingManager.GetLastCommittedParentEmail
	 */
	struct USheikAgeGatingManager_GetLastCommittedParentEmail_Params
	{
	public:
		class FString                                              ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikAgeGatingManager.CommitParentEmail
	 */
	struct USheikAgeGatingManager_CommitParentEmail_Params
	{
	public:
		class FString                                              ParentEmail;                                             // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      Delegate;                                                // 0x0010(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikAgeGatingManager.CommitDateOfBirth
	 */
	struct USheikAgeGatingManager_CommitDateOfBirth_Params
	{
	public:
		struct FDateTime                                           DateOfBirth;                                             // 0x0000(0x0008)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      Delegate;                                                // 0x0008(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikAIController.OnSpringboardLaunched
	 */
	struct ASheikAIController_OnSpringboardLaunched_Params
	{	};

	/**
	 * DelegateFunction Sheik.SheikAIController.OnRoundPlacementChanged__DelegateSignature
	 */
	struct ASheikAIController_OnRoundPlacementChanged__DelegateSignature_Params
	{
	public:
		int32_t                                                    NewPlace;                                                // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikAIController.HasPlayerPlacementBeenProcessed
	 */
	struct ASheikAIController_HasPlayerPlacementBeenProcessed_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikAIController.GetSheikGameMode
	 */
	struct ASheikAIController_GetSheikGameMode_Params
	{
	public:
		class ASheikGameModeCommon*                                ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikAIController.GetRoundPlacement
	 */
	struct ASheikAIController_GetRoundPlacement_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikAIController.GetAIManager
	 */
	struct ASheikAIController_GetAIManager_Params
	{
	public:
		class USheikAIManager*                                     ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikAIController.EnableClimbSurfaceChecks
	 */
	struct ASheikAIController_EnableClimbSurfaceChecks_Params
	{
	public:
		bool                                                       bInShouldCheckForClimbableSurfaces;                      // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikAIController.BPNavAreaHandleEnteringEdgeNavLinkSegment
	 */
	struct ASheikAIController_BPNavAreaHandleEnteringEdgeNavLinkSegment_Params
	{
	public:
		int32_t                                                    SegmentStartIndex;                                       // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		ESheikNavAreaFlag                                          NavLinkType;                                             // 0x0004(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0005(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikAIController.BPNavArea4HandleFollowPathSegment
	 */
	struct ASheikAIController_BPNavArea4HandleFollowPathSegment_Params
	{
	public:
		class UIGCharacterMovementComponent*                       MoveComp;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      DeltaTime;                                               // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x000C(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikAIController.BPNavArea4HandleEnteringNavLinkSegment
	 */
	struct ASheikAIController_BPNavArea4HandleEnteringNavLinkSegment_Params
	{
	public:
		int32_t                                                    SegmentStartIndex;                                       // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikAIController.BPNavArea3HandleFollowPathSegment
	 */
	struct ASheikAIController_BPNavArea3HandleFollowPathSegment_Params
	{
	public:
		class UIGCharacterMovementComponent*                       MoveComp;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      DeltaTime;                                               // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x000C(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikAIController.BPNavArea3HandleEnteringNavLinkSegment
	 */
	struct ASheikAIController_BPNavArea3HandleEnteringNavLinkSegment_Params
	{
	public:
		int32_t                                                    SegmentStartIndex;                                       // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikAIController.BPNavArea2HandleFollowPathSegment
	 */
	struct ASheikAIController_BPNavArea2HandleFollowPathSegment_Params
	{
	public:
		class UIGCharacterMovementComponent*                       MoveComp;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      DeltaTime;                                               // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x000C(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikAIController.BPNavArea2HandleEnteringNavLinkSegment
	 */
	struct ASheikAIController_BPNavArea2HandleEnteringNavLinkSegment_Params
	{
	public:
		int32_t                                                    SegmentStartIndex;                                       // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikAIController.BPNavArea1HandleFollowPathSegment
	 */
	struct ASheikAIController_BPNavArea1HandleFollowPathSegment_Params
	{
	public:
		class UIGCharacterMovementComponent*                       MoveComp;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      DeltaTime;                                               // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x000C(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikAIController.BPNavArea1HandleEnteringNavLinkSegment
	 */
	struct ASheikAIController_BPNavArea1HandleEnteringNavLinkSegment_Params
	{
	public:
		int32_t                                                    SegmentStartIndex;                                       // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikAICharacterController.UnstashItem
	 */
	struct ASheikAICharacterController_UnstashItem_Params
	{
	public:
		EIGInventorySlot                                           Slot;                                                    // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikAICharacterController.UnregisterNavigation
	 */
	struct ASheikAICharacterController_UnregisterNavigation_Params
	{	};

	/**
	 * Function Sheik.SheikAICharacterController.TryClaimInteractable
	 */
	struct ASheikAICharacterController_TryClaimInteractable_Params
	{
	public:
		class AActor*                                              InInteractable;                                          // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikAICharacterController.TryClaimCharacter
	 */
	struct ASheikAICharacterController_TryClaimCharacter_Params
	{
	public:
		class ASheikCharacter*                                     InCharacter;                                             // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bForce;                                                  // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0009(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikAICharacterController.ToggleOverrideLootSpawn
	 */
	struct ASheikAICharacterController_ToggleOverrideLootSpawn_Params
	{
	public:
		bool                                                       bInShouldOverrideInventorySpawn;                         // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bInShouldOverrideSpecialMoveSpawn;                       // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikAICharacterController.ToggleFallDamageEnabled
	 */
	struct ASheikAICharacterController_ToggleFallDamageEnabled_Params
	{
	public:
		bool                                                       bEnabled;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikAICharacterController.StopObjectInteraction
	 */
	struct ASheikAICharacterController_StopObjectInteraction_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikAICharacterController.StopBrain
	 */
	struct ASheikAICharacterController_StopBrain_Params
	{	};

	/**
	 * Function Sheik.SheikAICharacterController.StashHeldItem
	 */
	struct ASheikAICharacterController_StashHeldItem_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikAICharacterController.StartObjectInteraction
	 */
	struct ASheikAICharacterController_StartObjectInteraction_Params
	{
	public:
		class UObject*                                             InObject;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikAICharacterController.StartNewBehaviorTree
	 */
	struct ASheikAICharacterController_StartNewBehaviorTree_Params
	{
	public:
		class FName                                                NewBehaviorProfile;                                      // 0x0000(0x0008)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikAICharacterController.StartNewAIProfile
	 */
	struct ASheikAICharacterController_StartNewAIProfile_Params
	{
	public:
		class FName                                                ProfileName;                                             // 0x0000(0x0008)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikAICharacterController.ResetInputDirection
	 */
	struct ASheikAICharacterController_ResetInputDirection_Params
	{	};

	/**
	 * Function Sheik.SheikAICharacterController.ResetBrain
	 */
	struct ASheikAICharacterController_ResetBrain_Params
	{	};

	/**
	 * Function Sheik.SheikAICharacterController.ReleaseInteractable
	 */
	struct ASheikAICharacterController_ReleaseInteractable_Params
	{	};

	/**
	 * Function Sheik.SheikAICharacterController.ReleaseInputEvent
	 */
	struct ASheikAICharacterController_ReleaseInputEvent_Params
	{
	public:
		EMoveTrack                                                 InputEventTrack;                                         // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikAICharacterController.ReleaseClaimedTargets
	 */
	struct ASheikAICharacterController_ReleaseClaimedTargets_Params
	{	};

	/**
	 * Function Sheik.SheikAICharacterController.ReleaseCharacter
	 */
	struct ASheikAICharacterController_ReleaseCharacter_Params
	{	};

	/**
	 * Function Sheik.SheikAICharacterController.ReleaseBlock
	 */
	struct ASheikAICharacterController_ReleaseBlock_Params
	{	};

	/**
	 * Function Sheik.SheikAICharacterController.RegisterNavigation
	 */
	struct ASheikAICharacterController_RegisterNavigation_Params
	{	};

	/**
	 * Function Sheik.SheikAICharacterController.RecordInputDirectionWorld
	 */
	struct ASheikAICharacterController_RecordInputDirectionWorld_Params
	{
	public:
		struct FVector                                             WorldDirection;                                          // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      TimeToPress;                                             // 0x000C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikAICharacterController.RecordInputDirectionLocal
	 */
	struct ASheikAICharacterController_RecordInputDirectionLocal_Params
	{
	public:
		float                                                      RightVal;                                                // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      ForwardVal;                                              // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      TimeToPress;                                             // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikAICharacterController.RecordInputDirection
	 */
	struct ASheikAICharacterController_RecordInputDirection_Params
	{
	public:
		EMoveInputDirection                                        InputDirection;                                          // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_S7E4[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      TimeToPress;                                             // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikAICharacterController.PressInputEvent
	 */
	struct ASheikAICharacterController_PressInputEvent_Params
	{
	public:
		EMoveTrack                                                 InputEventTrack;                                         // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_PCYY[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      TimeToPress;                                             // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikAICharacterController.PressBlock
	 */
	struct ASheikAICharacterController_PressBlock_Params
	{	};

	/**
	 * Function Sheik.SheikAICharacterController.OnNewAIProfileStarted
	 */
	struct ASheikAICharacterController_OnNewAIProfileStarted_Params
	{	};

	/**
	 * Function Sheik.SheikAICharacterController.OnCharacterInputToggled
	 */
	struct ASheikAICharacterController_OnCharacterInputToggled_Params
	{
	public:
		bool                                                       bIsEnabled;                                              // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikAICharacterController.OnAttackConnect
	 */
	struct ASheikAICharacterController_OnAttackConnect_Params
	{
	public:
		struct FQueuedAttack                                       InQueuedAttack;                                          // 0x0000(0x0080)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikAICharacterController.IsInteractableTargetable
	 */
	struct ASheikAICharacterController_IsInteractableTargetable_Params
	{
	public:
		class AActor*                                              InInteractable;                                          // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikAICharacterController.IsCharacterTargetable
	 */
	struct ASheikAICharacterController_IsCharacterTargetable_Params
	{
	public:
		class ASheikCharacter*                                     InCharacter;                                             // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikAICharacterController.HandleOnMoveMontageStarted
	 */
	struct ASheikAICharacterController_HandleOnMoveMontageStarted_Params
	{
	public:
		class UAnimMontage*                                        MoveMontage;                                             // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AIGCharacter*                                        Char;                                                    // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikAICharacterController.HandleOnMoveMontageEnded
	 */
	struct ASheikAICharacterController_HandleOnMoveMontageEnded_Params
	{
	public:
		class UAnimMontage*                                        MoveMontage;                                             // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bInterrupted;                                            // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikAICharacterController.HandleOnCharacterDied
	 */
	struct ASheikAICharacterController_HandleOnCharacterDied_Params
	{
	public:
		ECauseOfDeath                                              Cause;                                                   // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikAICharacterController.GetSpecialMoveConsumerComponent
	 */
	struct ASheikAICharacterController_GetSpecialMoveConsumerComponent_Params
	{
	public:
		class UIGSpecialMoveConsumer*                              ReturnValue;                                             // 0x0000(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikAICharacterController.GetLaunchAngle
	 */
	struct ASheikAICharacterController_GetLaunchAngle_Params
	{
	public:
		struct FVector                                             LaunchTarget;                                            // 0x0000(0x000C)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      ReturnValue;                                             // 0x000C(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikAICharacterController.GetDistanceNeededToHaltFreefallVelocity
	 */
	struct ASheikAICharacterController_GetDistanceNeededToHaltFreefallVelocity_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikAICharacterController.GetCurrentTargetLocation
	 */
	struct ASheikAICharacterController_GetCurrentTargetLocation_Params
	{
	public:
		struct FVector                                             OutLocation;                                             // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikAICharacterController.GetActiveAIProfile
	 */
	struct ASheikAICharacterController_GetActiveAIProfile_Params
	{
	public:
		struct FSheikAIProfileOptions                              ReturnValue;                                             // 0x0000(0x0130)  (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikAICharacterController.ConsumeSpecialMoveMagazine
	 */
	struct ASheikAICharacterController_ConsumeSpecialMoveMagazine_Params
	{
	public:
		bool                                                       bAssignToSlotOne;                                        // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_DNUS[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UIGMoveMontage*                                      MoveMontage;                                             // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EMoveTier                                                  ExecutionTier;                                           // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikAICharacterController.BPOnMoveMontageFinished
	 */
	struct ASheikAICharacterController_BPOnMoveMontageFinished_Params
	{
	public:
		class UAnimMontage*                                        MoveMontage;                                             // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bInterrupted;                                            // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikAICharacterController.BPOnAttackResultDetermined
	 */
	struct ASheikAICharacterController_BPOnAttackResultDetermined_Params
	{
	public:
		EQueuedAttackResult                                        AttackResult;                                            // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_JG40[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class AActor*                                              AttackedActor;                                           // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikAICharacterController.AttemptResurrectTeammate
	 */
	struct ASheikAICharacterController_AttemptResurrectTeammate_Params
	{
	public:
		class ASheikCharacter*                                     InTeammate;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikAICharacterController.AssignSpecialMoveToSlot
	 */
	struct ASheikAICharacterController_AssignSpecialMoveToSlot_Params
	{
	public:
		bool                                                       bAssignToSlotOne;                                        // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_OGY5[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UIGMoveMontage*                                      MoveMontage;                                             // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EMoveTier                                                  ExecutionTier;                                           // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikAIManager.ShouldUseStaticNavInvokers
	 */
	struct USheikAIManager_ShouldUseStaticNavInvokers_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikAIManager.ShouldUseBotProfileImprovements
	 */
	struct USheikAIManager_ShouldUseBotProfileImprovements_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikAIManager.RequestLaunchTarget
	 */
	struct USheikAIManager_RequestLaunchTarget_Params
	{
	public:
		struct FVector                                             ReturnValue;                                             // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikAIManager.ReportTrapped
	 */
	struct USheikAIManager_ReportTrapped_Params
	{
	public:
		class ASheikAICharacterController*                         InBotController;                                         // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EBotTrappedSource                                          Reason;                                                  // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikAIManager.OnRingShrinkEnd
	 */
	struct USheikAIManager_OnRingShrinkEnd_Params
	{	};

	/**
	 * Function Sheik.SheikAIManager.OnGameFlowStateUpdated
	 */
	struct USheikAIManager_OnGameFlowStateUpdated_Params
	{
	public:
		EGameFlowState                                             OldGameFlowState;                                        // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EGameFlowState                                             NewGameFlowState;                                        // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikAIManager.OnEnterFinalRing
	 */
	struct USheikAIManager_OnEnterFinalRing_Params
	{	};

	/**
	 * Function Sheik.SheikAIManager.OnEmoteAssetsLoadedComplete
	 */
	struct USheikAIManager_OnEmoteAssetsLoadedComplete_Params
	{	};

	/**
	 * Function Sheik.SheikAIManager.IsWeaponCombatAllowed
	 */
	struct USheikAIManager_IsWeaponCombatAllowed_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikAIManager.IsRingShrinking
	 */
	struct USheikAIManager_IsRingShrinking_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikAIManager.IsActorInPostShrinkRing
	 */
	struct USheikAIManager_IsActorInPostShrinkRing_Params
	{
	public:
		class AActor*                                              InActor;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikAIManager.GetUnlockedEmoteByName
	 */
	struct USheikAIManager_GetUnlockedEmoteByName_Params
	{
	public:
		class FName                                                EmoteDisplayName;                                        // 0x0000(0x0008)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FSheikBotEmoteInfo                                  OutEmoteInfo;                                            // 0x0008(0x0050)  (Parm, OutParm, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0058(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikAIManager.GetRandomUnlockedEmote
	 */
	struct USheikAIManager_GetRandomUnlockedEmote_Params
	{
	public:
		struct FGameplayTagContainer                               GameplayTags;                                            // 0x0000(0x0020)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		struct FSheikBotEmoteInfo                                  OutEmoteInfo;                                            // 0x0020(0x0050)  (Parm, OutParm, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0070(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikAIManager.GetBotName
	 */
	struct USheikAIManager_GetBotName_Params
	{
	public:
		class FString                                              OutName;                                                 // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikAIManager.GetAIGameInfo
	 */
	struct USheikAIManager_GetAIGameInfo_Params
	{
	public:
		class USheikAIGameInfo*                                    ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikAIPathFollowingComponent.GetPathLocationByIndex
	 */
	struct USheikAIPathFollowingComponent_GetPathLocationByIndex_Params
	{
	public:
		int32_t                                                    SegmentIndex;                                            // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             ReturnValue;                                             // 0x0004(0x000C)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikAIPathFollowingComponent.ForceNextPathSegment
	 */
	struct USheikAIPathFollowingComponent_ForceNextPathSegment_Params
	{	};

	/**
	 * Function Sheik.SheikAISpawner.TriggerSpawner
	 */
	struct ASheikAISpawner_TriggerSpawner_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikAnnouncementManager.UpdateActiveAnnouncement
	 */
	struct USheikAnnouncementManager_UpdateActiveAnnouncement_Params
	{	};

	/**
	 * Function Sheik.SheikAnnouncementManager.ShowAnnouncement_BP
	 */
	struct USheikAnnouncementManager_ShowAnnouncement_BP_Params
	{
	public:
		struct FSheikAnnouncement                                  AnnouncementData;                                        // 0x0000(0x0200)  (Parm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikAnnouncementManager.SetSpeedFactor_BP
	 */
	struct USheikAnnouncementManager_SetSpeedFactor_BP_Params
	{
	public:
		int32_t                                                    AnnouncementId;                                          // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      NewSpeedFactor;                                          // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikAnnouncementManager.QueueAnnouncement
	 */
	struct USheikAnnouncementManager_QueueAnnouncement_Params
	{
	public:
		struct FSheikAnnouncement                                  AnnouncementData;                                        // 0x0000(0x0200)  (Parm, NativeAccessSpecifierPublic)
		int32_t                                                    ReturnValue;                                             // 0x0200(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction Sheik.SheikAnnouncementManager.OnSheikAnnouncementDelegate__DelegateSignature
	 */
	struct USheikAnnouncementManager_OnSheikAnnouncementDelegate__DelegateSignature_Params
	{
	public:
		int32_t                                                    AnnouncementId;                                          // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		ESheikAnnouncementType                                     AnnouncementType;                                        // 0x0004(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikAnnouncementManager.IsAnnouncementPlaying
	 */
	struct USheikAnnouncementManager_IsAnnouncementPlaying_Params
	{
	public:
		int32_t                                                    AnnouncementId;                                          // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikAnnouncementManager.IsAnnouncementBeingShown
	 */
	struct USheikAnnouncementManager_IsAnnouncementBeingShown_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikAnnouncementManager.HandleOnAnnouncementForciblyClosed
	 */
	struct USheikAnnouncementManager_HandleOnAnnouncementForciblyClosed_Params
	{
	public:
		int32_t                                                    AnnouncementId;                                          // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikAnnouncementManager.HandleOnAnnouncementClosed
	 */
	struct USheikAnnouncementManager_HandleOnAnnouncementClosed_Params
	{
	public:
		int32_t                                                    AnnouncementId;                                          // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikAnnouncementManager.GetCurrentlyActiveAnnouncement
	 */
	struct USheikAnnouncementManager_GetCurrentlyActiveAnnouncement_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikAnnouncementManager.GetAnnouncementType
	 */
	struct USheikAnnouncementManager_GetAnnouncementType_Params
	{
	public:
		int32_t                                                    AnnouncementId;                                          // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		ESheikAnnouncementType                                     ReturnValue;                                             // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikAnnouncementManager.GetAnnouncementData
	 */
	struct USheikAnnouncementManager_GetAnnouncementData_Params
	{
	public:
		int32_t                                                    AnnouncementId;                                          // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_6YCI[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FSheikAnnouncement                                  ReturnValue;                                             // 0x0008(0x0200)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikAnnouncementManager.DoesAnnouncementWithIdExist
	 */
	struct USheikAnnouncementManager_DoesAnnouncementWithIdExist_Params
	{
	public:
		int32_t                                                    AnnouncementId;                                          // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikAnnouncementManager.DeactivateAllAnnouncementWidgets
	 */
	struct USheikAnnouncementManager_DeactivateAllAnnouncementWidgets_Params
	{	};

	/**
	 * Function Sheik.SheikAnnouncementManager.CloseAnnouncement_BP
	 */
	struct USheikAnnouncementManager_CloseAnnouncement_BP_Params
	{
	public:
		int32_t                                                    AnnouncementId;                                          // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikAnnouncementManager.CloseAnnouncement
	 */
	struct USheikAnnouncementManager_CloseAnnouncement_Params
	{
	public:
		int32_t                                                    AnnouncementId;                                          // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikAnnouncementManager.CloseAllAnnouncements
	 */
	struct USheikAnnouncementManager_CloseAllAnnouncements_Params
	{	};

	/**
	 * Function Sheik.SheikAnnouncementManager.CloseActiveAnnouncement
	 */
	struct USheikAnnouncementManager_CloseActiveAnnouncement_Params
	{	};

	/**
	 * Function Sheik.SheikAnnouncementWidget.StartAnnouncement_BP
	 */
	struct USheikAnnouncementWidget_StartAnnouncement_BP_Params
	{
	public:
		struct FSheikAnnouncement                                  SheikAnnouncementData;                                   // 0x0000(0x0200)  (Parm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikAnnouncementWidget.StartAnnouncement
	 */
	struct USheikAnnouncementWidget_StartAnnouncement_Params
	{
	public:
		struct FSheikAnnouncement                                  SheikAnnouncementData;                                   // 0x0000(0x0200)  (Parm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikAnnouncementWidget.SetSpeedFactor_BP
	 */
	struct USheikAnnouncementWidget_SetSpeedFactor_BP_Params
	{
	public:
		float                                                      NewSpeedFactor;                                          // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikAnnouncementWidget.SetSpeedFactor
	 */
	struct USheikAnnouncementWidget_SetSpeedFactor_Params
	{
	public:
		float                                                      NewSpeedFactor;                                          // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction Sheik.SheikAnnouncementWidget.OnSpeedFactorChanged__DelegateSignature
	 */
	struct USheikAnnouncementWidget_OnSpeedFactorChanged__DelegateSignature_Params
	{
	public:
		float                                                      NewSpeedFactor;                                          // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction Sheik.SheikAnnouncementWidget.OnAnnouncementStateChanged__DelegateSignature
	 */
	struct USheikAnnouncementWidget_OnAnnouncementStateChanged__DelegateSignature_Params
	{
	public:
		int32_t                                                    AnnouncementId;                                          // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikAnnouncementWidget.OnAnnouncementEnded
	 */
	struct USheikAnnouncementWidget_OnAnnouncementEnded_Params
	{	};

	/**
	 * Function Sheik.SheikAnnouncementWidget.IsAnnouncementPlaying
	 */
	struct USheikAnnouncementWidget_IsAnnouncementPlaying_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikAnnouncementWidget.GetSpeedFactor
	 */
	struct USheikAnnouncementWidget_GetSpeedFactor_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikAnnouncementWidget.GetAnnouncementId
	 */
	struct USheikAnnouncementWidget_GetAnnouncementId_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikAnnouncementWidget.ForciblyCloseAnnouncement
	 */
	struct USheikAnnouncementWidget_ForciblyCloseAnnouncement_Params
	{	};

	/**
	 * Function Sheik.SheikAnnouncementWidget.CloseAnnouncement_BP
	 */
	struct USheikAnnouncementWidget_CloseAnnouncement_BP_Params
	{	};

	/**
	 * Function Sheik.SheikAudioHandlerActor.OnTimeTillLaunchChanged
	 */
	struct ASheikAudioHandlerActor_OnTimeTillLaunchChanged_Params
	{
	public:
		int32_t                                                    TimeTillLaunch;                                          // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikMusicDataAsset.GetSheikMusicInfo
	 */
	struct USheikMusicDataAsset_GetSheikMusicInfo_Params
	{
	public:
		class FName                                                MusicName;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FSheikMusicInfo                                     SheikMusicInfo;                                          // 0x0008(0x0030)  (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
		bool                                                       IsFound;                                                 // 0x0038(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikAudioMusicManager.TriggerMusic
	 */
	struct ASheikAudioMusicManager_TriggerMusic_Params
	{
	public:
		class FName                                                TriggerName;                                             // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bIsBackgroundMusic;                                      // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikAudioMusicManager.StopCurrentMusic
	 */
	struct ASheikAudioMusicManager_StopCurrentMusic_Params
	{	};

	/**
	 * Function Sheik.SheikScreenBase.OnUpdateInputGroupEvent
	 */
	struct USheikScreenBase_OnUpdateInputGroupEvent_Params
	{
	public:
		class USheikWidgetBase*                                    Widget;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikBattlePassScreen.SimulatePurchaseButtonSelected
	 */
	struct USheikBattlePassScreen_SimulatePurchaseButtonSelected_Params
	{	};

	/**
	 * Function Sheik.SheikBattlePassScreen.AreFullscreenVirtualCurrencyCelebrationsAllowed
	 */
	struct USheikBattlePassScreen_AreFullscreenVirtualCurrencyCelebrationsAllowed_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikBlueprintStatics.UpdateMouseLockSettingsForPlayer
	 */
	struct USheikBlueprintStatics_UpdateMouseLockSettingsForPlayer_Params
	{
	public:
		class APlayerController*                                   ForPlayer;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikBlueprintStatics.UnlockMouseFromViewportForPlayer
	 */
	struct USheikBlueprintStatics_UnlockMouseFromViewportForPlayer_Params
	{
	public:
		class APlayerController*                                   ForPlayer;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikBlueprintStatics.SpawnVFXPhysActorFromPool
	 */
	struct USheikBlueprintStatics_SpawnVFXPhysActorFromPool_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_JFGU[0x8];                                   // 0x0008(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FTransform                                          SpawnTransform;                                          // 0x0010(0x0030)  (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		class UClass*                                              PhysActorToSpawn;                                        // 0x0040(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      Duration;                                                // 0x0048(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_BPJF[0x4];                                   // 0x004C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class AIGVFXPhysActor*                                     ReturnValue;                                             // 0x0050(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikBlueprintStatics.ShowAccountUpgradeUI
	 */
	struct USheikBlueprintStatics_ShowAccountUpgradeUI_Params
	{	};

	/**
	 * Function Sheik.SheikBlueprintStatics.SetServerType
	 */
	struct USheikBlueprintStatics_SetServerType_Params
	{
	public:
		EServerHostType                                            Type;                                                    // 0x0000(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikBlueprintStatics.ResetTitleFileStorageEnumerateCounter
	 */
	struct USheikBlueprintStatics_ResetTitleFileStorageEnumerateCounter_Params
	{	};

	/**
	 * Function Sheik.SheikBlueprintStatics.ReplacePlatformSpecificMatchmakingText
	 */
	struct USheikBlueprintStatics_ReplacePlatformSpecificMatchmakingText_Params
	{
	public:
		class FText                                                InSource;                                                // 0x0000(0x0018)  (Parm, NativeAccessSpecifierPublic)
		class FText                                                ReturnValue;                                             // 0x0018(0x0018)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikBlueprintStatics.PasteStringFromClipboard
	 */
	struct USheikBlueprintStatics_PasteStringFromClipboard_Params
	{
	public:
		class FString                                              ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikBlueprintStatics.LogRuntimeMessage
	 */
	struct USheikBlueprintStatics_LogRuntimeMessage_Params
	{
	public:
		class FString                                              InContext;                                               // 0x0000(0x0010)  (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              InMessage;                                               // 0x0010(0x0010)  (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ShowOnScreen;                                            // 0x0020(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bLogInShipping;                                          // 0x0021(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikBlueprintStatics.LockMouseToViewportForPlayer
	 */
	struct USheikBlueprintStatics_LockMouseToViewportForPlayer_Params
	{
	public:
		class APlayerController*                                   ForPlayer;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikBlueprintStatics.IsValidEmail
	 */
	struct USheikBlueprintStatics_IsValidEmail_Params
	{
	public:
		class FString                                              String;                                                  // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikBlueprintStatics.IsUserLoggedIntoEOS
	 */
	struct USheikBlueprintStatics_IsUserLoggedIntoEOS_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikBlueprintStatics.IsUserLoggedIntoCozmo
	 */
	struct USheikBlueprintStatics_IsUserLoggedIntoCozmo_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikBlueprintStatics.IsGDKUsingSimpleUserModel
	 */
	struct USheikBlueprintStatics_IsGDKUsingSimpleUserModel_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikBlueprintStatics.IsGDKUsingAdvancedUserModel
	 */
	struct USheikBlueprintStatics_IsGDKUsingAdvancedUserModel_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikBlueprintStatics.HasUserPrivilege
	 */
	struct USheikBlueprintStatics_HasUserPrivilege_Params
	{
	public:
		ESheikUserPrivilege                                        Type;                                                    // 0x0000(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikBlueprintStatics.GetSplitLocale
	 */
	struct USheikBlueprintStatics_GetSplitLocale_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              Language;                                                // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              Script;                                                  // 0x0018(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              CountryCode;                                             // 0x0028(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikBlueprintStatics.GetSheikGameInstance
	 */
	struct USheikBlueprintStatics_GetSheikGameInstance_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class USheikGameInstance*                                  ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikBlueprintStatics.GetServicePlatformFromString
	 */
	struct USheikBlueprintStatics_GetServicePlatformFromString_Params
	{
	public:
		class FString                                              PlatformServiceString;                                   // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		ESheikPlatformService                                      ReturnValue;                                             // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikBlueprintStatics.GetServicePlatformAsString
	 */
	struct USheikBlueprintStatics_GetServicePlatformAsString_Params
	{
	public:
		class FString                                              ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikBlueprintStatics.GetServicePlatform
	 */
	struct USheikBlueprintStatics_GetServicePlatform_Params
	{
	public:
		ESheikPlatformService                                      ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikBlueprintStatics.GetPlatformNickname
	 */
	struct USheikBlueprintStatics_GetPlatformNickname_Params
	{
	public:
		class FString                                              OutNickname;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikBlueprintStatics.GetPlatformFromString
	 */
	struct USheikBlueprintStatics_GetPlatformFromString_Params
	{
	public:
		class FString                                              PlatformString;                                          // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		ESheikPlatform                                             ReturnValue;                                             // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikBlueprintStatics.GetPlatformDefaultLanguage
	 */
	struct USheikBlueprintStatics_GetPlatformDefaultLanguage_Params
	{
	public:
		class FString                                              ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikBlueprintStatics.GetPlatformActiveUserIndex
	 */
	struct USheikBlueprintStatics_GetPlatformActiveUserIndex_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikBlueprintStatics.GetPlatformAccountInfo
	 */
	struct USheikBlueprintStatics_GetPlatformAccountInfo_Params
	{
	public:
		ESheikPlatform                                             OutPlatform;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		ESheikPlatformService                                      OutPlatformService;                                      // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_20V7[0x6];                                   // 0x0002(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              OutPlatformId;                                           // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              OutPlatformName;                                         // 0x0018(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              OutEosId;                                                // 0x0028(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              OutProductId;                                            // 0x0038(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0048(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikBlueprintStatics.GetPlatform
	 */
	struct USheikBlueprintStatics_GetPlatform_Params
	{
	public:
		ESheikPlatform                                             ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikBlueprintStatics.GetEOSActiveUserIndex
	 */
	struct USheikBlueprintStatics_GetEOSActiveUserIndex_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikBlueprintStatics.GetCozmoActiveUserIndex
	 */
	struct USheikBlueprintStatics_GetCozmoActiveUserIndex_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikBlueprintStatics.DisplaySonyChatResctrictionDialog
	 */
	struct USheikBlueprintStatics_DisplaySonyChatResctrictionDialog_Params
	{	};

	/**
	 * Function Sheik.SheikBlueprintStatics.DisplayCrossPlayRestrictedDialog
	 */
	struct USheikBlueprintStatics_DisplayCrossPlayRestrictedDialog_Params
	{	};

	/**
	 * Function Sheik.SheikBlueprintStatics.DescribeGameSessions
	 */
	struct USheikBlueprintStatics_DescribeGameSessions_Params
	{
	public:
		struct FDescribeGameSessionsRequest                        Request;                                                 // 0x0000(0x0058)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		TArray<struct FCozmoGameSession>                           GameSessionList;                                         // 0x0058(0x0010)  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
		class FString                                              ErrorString;                                             // 0x0068(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0078(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikBlueprintStatics.CopyStringToClipboard
	 */
	struct USheikBlueprintStatics_CopyStringToClipboard_Params
	{
	public:
		class FString                                              StringToCopy;                                            // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikBlueprintStatics.ConvertRenderTargetToBuffer
	 */
	struct USheikBlueprintStatics_ConvertRenderTargetToBuffer_Params
	{
	public:
		class UTextureRenderTarget2D*                              TextureRenderTarget;                                     // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<unsigned char>                                      OutBuffer;                                               // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0018(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikBlueprintStatics.ApplySavedCultureSetting
	 */
	struct USheikBlueprintStatics_ApplySavedCultureSetting_Params
	{
	public:
		class FString                                              InCulture;                                               // 0x0000(0x0010)  (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.RequestUserPriviligeCallbackProxy.RequestUserPrivilege
	 */
	struct URequestUserPriviligeCallbackProxy_RequestUserPrivilege_Params
	{
	public:
		ESheikUserPrivilege                                        InPrivilegeType;                                         // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_EA1O[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class URequestUserPriviligeCallbackProxy*                  ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.RequestUserPremiumStatusCallbackProxy.RequestUserPremiumStatus
	 */
	struct URequestUserPremiumStatusCallbackProxy_RequestUserPremiumStatus_Params
	{
	public:
		class URequestUserPremiumStatusCallbackProxy*              ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikButtonBase.WidgetUnfocused
	 */
	struct USheikButtonBase_WidgetUnfocused_Params
	{	};

	/**
	 * Function Sheik.SheikButtonBase.WidgetFocused
	 */
	struct USheikButtonBase_WidgetFocused_Params
	{	};

	/**
	 * Function Sheik.SheikButtonBase.WidgetEnabled
	 */
	struct USheikButtonBase_WidgetEnabled_Params
	{	};

	/**
	 * Function Sheik.SheikButtonBase.WidgetDisabled
	 */
	struct USheikButtonBase_WidgetDisabled_Params
	{	};

	/**
	 * Function Sheik.SheikButtonBase.SetWidgetFocus
	 */
	struct USheikButtonBase_SetWidgetFocus_Params
	{
	public:
		bool                                                       bSkipAnimations;                                         // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bFocused;                                                // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikButtonBase.SetLabel
	 */
	struct USheikButtonBase_SetLabel_Params
	{
	public:
		class FText                                                InText;                                                  // 0x0000(0x0018)  (Parm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikButtonBase.SetDisabledWithoutAnimation
	 */
	struct USheikButtonBase_SetDisabledWithoutAnimation_Params
	{
	public:
		bool                                                       bDisabled;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikButtonBase.SetDisabled
	 */
	struct USheikButtonBase_SetDisabled_Params
	{
	public:
		bool                                                       bDisabled;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikButtonBase.OnSelectedAnimationFinished
	 */
	struct USheikButtonBase_OnSelectedAnimationFinished_Params
	{	};

	/**
	 * Function Sheik.SheikButtonBase.HandleSelect
	 */
	struct USheikButtonBase_HandleSelect_Params
	{
	public:
		int32_t                                                    UserIndex;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikButtonBase.GetButtonIndex
	 */
	struct USheikButtonBase_GetButtonIndex_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikButtonBase.ApplyContentOnPreConstruct
	 */
	struct USheikButtonBase_ApplyContentOnPreConstruct_Params
	{	};

	/**
	 * Function Sheik.SheikCableComponent.SetAttachEndToComponent
	 */
	struct USheikCableComponent_SetAttachEndToComponent_Params
	{
	public:
		class USceneComponent*                                     Component;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                SocketName;                                              // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikCableComponent.SetAttachEndTo
	 */
	struct USheikCableComponent_SetAttachEndTo_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                ComponentProperty;                                       // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                SocketName;                                              // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikCableComponent.GetCableParticleLocations
	 */
	struct USheikCableComponent_GetCableParticleLocations_Params
	{
	public:
		TArray<struct FVector>                                     Locations;                                               // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikCableComponent.GetAttachedComponent
	 */
	struct USheikCableComponent_GetAttachedComponent_Params
	{
	public:
		class USceneComponent*                                     ReturnValue;                                             // 0x0000(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikCableComponent.GetAttachedActor
	 */
	struct USheikCableComponent_GetAttachedActor_Params
	{
	public:
		class AActor*                                              ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikCallbacksManager.GetMatchmakingCallbacks
	 */
	struct USheikCallbacksManager_GetMatchmakingCallbacks_Params
	{
	public:
		class USheikMatchmakingCallbacks*                          ReturnValue;                                             // 0x0000(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikCallbacksManager.GetEndOfMatchCallbacks
	 */
	struct USheikCallbacksManager_GetEndOfMatchCallbacks_Params
	{
	public:
		class USheikEndOfMatchCallbacks*                           ReturnValue;                                             // 0x0000(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikCaptureManager.SetTextCaptureResolution
	 */
	struct ASheikCaptureManager_SetTextCaptureResolution_Params
	{
	public:
		unsigned char                                              Target;                                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_BVXH[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    NewResX;                                                 // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    NewResY;                                                 // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikCaptureManager.SetCaptureResolution
	 */
	struct ASheikCaptureManager_SetCaptureResolution_Params
	{
	public:
		unsigned char                                              Target;                                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_Q17H[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    NewResX;                                                 // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    NewResY;                                                 // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikCaptureManager.SetAllCaptureResolutions
	 */
	struct ASheikCaptureManager_SetAllCaptureResolutions_Params
	{
	public:
		int32_t                                                    NewResX;                                                 // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    NewResY;                                                 // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikCaptureManager.QueueCapture
	 */
	struct ASheikCaptureManager_QueueCapture_Params
	{
	public:
		struct FCharDesc                                           CharacterDescription;                                    // 0x0000(0x0030)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
		unsigned char                                              RTIndex;                                                 // 0x0030(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_9EJ0[0x7];                                   // 0x0031(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<class UMaterialInterface*>                          OverrideMaterials;                                       // 0x0038(0x0010)  (Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
		bool                                                       allowLongLoads;                                          // 0x0048(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       invalidatePrevCapture;                                   // 0x0049(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x004A(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikCaptureManager.IsIndexValid
	 */
	struct ASheikCaptureManager_IsIndexValid_Params
	{
	public:
		unsigned char                                              RTIndex;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikCaptureManager.InvalidateCapture
	 */
	struct ASheikCaptureManager_InvalidateCapture_Params
	{
	public:
		unsigned char                                              TargetToInvalidate;                                      // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikCaptureManager.GetCaptureState
	 */
	struct ASheikCaptureManager_GetCaptureState_Params
	{
	public:
		unsigned char                                              RTIndex;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		ECaptureState                                              ReturnValue;                                             // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikCaptureManager.GetCapture
	 */
	struct ASheikCaptureManager_GetCapture_Params
	{
	public:
		unsigned char                                              RTIndex;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_6TH3[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UTexture*                                            OutUITexture;                                            // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UTexture2D*                                          fallbackTexture;                                         // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UTexture*                                            ReturnValue;                                             // 0x0018(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikCareersScreen.VerifyRequiredSeasonalStatsLoaded
	 */
	struct USheikCareersScreen_VerifyRequiredSeasonalStatsLoaded_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikCareersScreen.SetSheikTitleCardFrontendUtility
	 */
	struct USheikCareersScreen_SetSheikTitleCardFrontendUtility_Params
	{
	public:
		class ASheikTitleCardFrontendUtility*                      InTitleCardFrontendUtility;                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikCareersScreen.RewardIsOutOfSeason
	 */
	struct USheikCareersScreen_RewardIsOutOfSeason_Params
	{
	public:
		EIGSeasonIdentifier                                        RewardSeason;                                            // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikCareersScreen.ReleaseLoadedPreviewIcons
	 */
	struct USheikCareersScreen_ReleaseLoadedPreviewIcons_Params
	{	};

	/**
	 * DelegateFunction Sheik.SheikCareersScreen.OnPreviewIconSoftPointersLoadSucceeded__DelegateSignature
	 */
	struct USheikCareersScreen_OnPreviewIconSoftPointersLoadSucceeded__DelegateSignature_Params
	{	};

	/**
	 * DelegateFunction Sheik.SheikCareersScreen.OnPreviewIconSoftPointersLoadFailed__DelegateSignature
	 */
	struct USheikCareersScreen_OnPreviewIconSoftPointersLoadFailed__DelegateSignature_Params
	{	};

	/**
	 * DelegateFunction Sheik.SheikCareersScreen.OnCareerScreenStatsLoaded__DelegateSignature
	 */
	struct USheikCareersScreen_OnCareerScreenStatsLoaded__DelegateSignature_Params
	{	};

	/**
	 * Function Sheik.SheikCareersScreen.LoadAllPreviewIcons
	 */
	struct USheikCareersScreen_LoadAllPreviewIcons_Params
	{	};

	/**
	 * Function Sheik.SheikCareersScreen.Init
	 */
	struct USheikCareersScreen_Init_Params
	{	};

	/**
	 * Function Sheik.SheikCareersScreen.HaveCareerScreenStatsLoaded
	 */
	struct USheikCareersScreen_HaveCareerScreenStatsLoaded_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikCareersScreen.HandleProgressionDataDownloadComplete
	 */
	struct USheikCareersScreen_HandleProgressionDataDownloadComplete_Params
	{	};

	/**
	 * Function Sheik.SheikCareersScreen.HandleOnPreviewIconLoadComplete
	 */
	struct USheikCareersScreen_HandleOnPreviewIconLoadComplete_Params
	{	};

	/**
	 * Function Sheik.SheikCareersScreen.GetWalletSystemReference
	 */
	struct USheikCareersScreen_GetWalletSystemReference_Params
	{
	public:
		class USheikWalletSystem*                                  ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikCareersScreen.GetWalletSystem
	 */
	struct USheikCareersScreen_GetWalletSystem_Params
	{
	public:
		class USheikWalletSystem*                                  ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikCareersScreen.GetTimeLeftForTimedRewards
	 */
	struct USheikCareersScreen_GetTimeLeftForTimedRewards_Params
	{
	public:
		struct FTimespan                                           OutDaysAndHours;                                         // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikCareersScreen.GetStatByName
	 */
	struct USheikCareersScreen_GetStatByName_Params
	{
	public:
		class FName                                                RawStatName;                                             // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FSheikPlayerDataStat                                OutStat;                                                 // 0x0008(0x00D8)  (Parm, OutParm, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x00E0(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikCareersScreen.GetSingleGameRecordStats
	 */
	struct USheikCareersScreen_GetSingleGameRecordStats_Params
	{
	public:
		TArray<struct FSheikPlayerDataStat>                        ReturnValue;                                             // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikCareersScreen.GetPlayerStats
	 */
	struct USheikCareersScreen_GetPlayerStats_Params
	{
	public:
		TArray<struct FSheikPlayerDataStat>                        ReturnValue;                                             // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikCareersScreen.GetAllPreviewIconSoftObjectPaths
	 */
	struct USheikCareersScreen_GetAllPreviewIconSoftObjectPaths_Params
	{
	public:
		TArray<struct FSoftObjectPath>                             OutIconPaths;                                            // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikCareersScreen.FilterTitleCardData
	 */
	struct USheikCareersScreen_FilterTitleCardData_Params
	{
	public:
		ESheikCareerScreenFilterOption                             FilterOption;                                            // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_2PSU[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FIGTitleCardBase                                    NextReward;                                              // 0x0008(0x00C0)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x00C8(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikCareersScreen.DebugOnlySetCurrentlyHoveredReward
	 */
	struct USheikCareersScreen_DebugOnlySetCurrentlyHoveredReward_Params
	{
	public:
		class FName                                                RewardId;                                                // 0x0000(0x0008)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikCareersScreen.CompareTitleCardData
	 */
	struct USheikCareersScreen_CompareTitleCardData_Params
	{
	public:
		ESheikCareerScreenSortCriteria                             SortCriteria;                                            // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       LHSIsDefault;                                            // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_T3YR[0x6];                                   // 0x0002(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FIGTitleCardBase                                    LHS;                                                     // 0x0008(0x00C0)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		struct FIGTitleCardBase                                    RHS;                                                     // 0x00C8(0x00C0)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0188(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikCareersScreen.ApplyFilterAndSortStats
	 */
	struct USheikCareersScreen_ApplyFilterAndSortStats_Params
	{
	public:
		ESheikCareerScreenFilterOption                             FilterOption;                                            // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		ESheikCareerScreenSortCriteria                             SortCriteria;                                            // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_CU5Y[0x6];                                   // 0x0002(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<struct FIGTitleCardStat>                            OutStats;                                                // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikCareersScreen.ApplyFilterAndSortPlayerTitles
	 */
	struct USheikCareersScreen_ApplyFilterAndSortPlayerTitles_Params
	{
	public:
		ESheikCareerScreenFilterOption                             FilterOption;                                            // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		ESheikCareerScreenSortCriteria                             SortCriteria;                                            // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_POC8[0x6];                                   // 0x0002(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<struct FIGTitleCardPlayerTitle>                     OutTitles;                                               // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikCareersScreen.ApplyFilterAndSortPlayerPoses
	 */
	struct USheikCareersScreen_ApplyFilterAndSortPlayerPoses_Params
	{
	public:
		ESheikCareerScreenFilterOption                             FilterOption;                                            // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		ESheikCareerScreenSortCriteria                             SortCriteria;                                            // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_SASZ[0x6];                                   // 0x0002(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<struct FIGTitleCardPlayerPose>                      OutPoses;                                                // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikCareersScreen.ApplyFilterAndSortMedals
	 */
	struct USheikCareersScreen_ApplyFilterAndSortMedals_Params
	{
	public:
		ESheikCareerScreenFilterOption                             FilterOption;                                            // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		ESheikCareerScreenSortCriteria                             SortCriteria;                                            // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_5PCR[0x6];                                   // 0x0002(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<struct FIGTitleCardMedal>                           OutMedals;                                               // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikCareersScreen.ApplyFilterAndSortItemTypeBase
	 */
	struct USheikCareersScreen_ApplyFilterAndSortItemTypeBase_Params
	{
	public:
		ESheikTitleCardDataType                                    ItemType;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		ESheikCareerScreenFilterOption                             FilterOption;                                            // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		ESheikCareerScreenSortCriteria                             SortCriteria;                                            // 0x0002(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_JFJX[0x5];                                   // 0x0003(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<struct FIGTitleCardBase>                            OutBaseItems;                                            // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikCareersScreen.ApplyFilterAndSortBorders
	 */
	struct USheikCareersScreen_ApplyFilterAndSortBorders_Params
	{
	public:
		ESheikCareerScreenFilterOption                             FilterOption;                                            // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		ESheikCareerScreenSortCriteria                             SortCriteria;                                            // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_CYSV[0x6];                                   // 0x0002(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<struct FIGTitleCardBorder>                          OutBorders;                                              // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikCareersScreen.ApplyFilterAndSortBackgrounds
	 */
	struct USheikCareersScreen_ApplyFilterAndSortBackgrounds_Params
	{
	public:
		ESheikCareerScreenFilterOption                             FilterOption;                                            // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		ESheikCareerScreenSortCriteria                             SortCriteria;                                            // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_A33A[0x6];                                   // 0x0002(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<struct FIGTitleCardBackground>                      OutBackgrounds;                                          // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikCharacter.SetSpectatorInfoVisibility
	 */
	struct ASheikCharacter_SetSpectatorInfoVisibility_Params
	{
	public:
		bool                                                       bIsVisible;                                              // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikCharacter.SetSpectatorInfoHealthbarVisibility
	 */
	struct ASheikCharacter_SetSpectatorInfoHealthbarVisibility_Params
	{
	public:
		bool                                                       bIsVisible;                                              // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikCharacter.SetKOInsuranceAllowed
	 */
	struct ASheikCharacter_SetKOInsuranceAllowed_Params
	{
	public:
		bool                                                       bIsAllowed;                                              // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikCharacter.ServerSetAutoClimb
	 */
	struct ASheikCharacter_ServerSetAutoClimb_Params
	{
	public:
		bool                                                       bShouldAutoClimb;                                        // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikCharacter.ServerRequestFireCannon
	 */
	struct ASheikCharacter_ServerRequestFireCannon_Params
	{
	public:
		struct FRotator                                            LaunchRotation;                                          // 0x0000(0x000C)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikCharacter.ServerProcessLaunchAction
	 */
	struct ASheikCharacter_ServerProcessLaunchAction_Params
	{
	public:
		ESheikLaunchActionType                                     LaunchAction;                                            // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikCharacter.ServerDebugClearStatsAllPlayers
	 */
	struct ASheikCharacter_ServerDebugClearStatsAllPlayers_Params
	{	};

	/**
	 * Function Sheik.SheikCharacter.ReloadCharacter
	 */
	struct ASheikCharacter_ReloadCharacter_Params
	{
	public:
		struct FSheikSpawnParams                                   NewSpawnParams;                                          // 0x0000(0x0480)  (ConstParm, Parm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikCharacter.OnTheFlyMeshSwap
	 */
	struct ASheikCharacter_OnTheFlyMeshSwap_Params
	{
	public:
		unsigned char                                              UnknownData_N6WW[0x10];                                  // 0x0000(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		bool                                                       SwappingBaseSkeletalMesh;                                // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikCharacter.OnStopAiming
	 */
	struct ASheikCharacter_OnStopAiming_Params
	{	};

	/**
	 * Function Sheik.SheikCharacter.OnStartAiming
	 */
	struct ASheikCharacter_OnStartAiming_Params
	{	};

	/**
	 * Function Sheik.SheikCharacter.OnRep_ParticipatingEventBeacon
	 */
	struct ASheikCharacter_OnRep_ParticipatingEventBeacon_Params
	{	};

	/**
	 * Function Sheik.SheikCharacter.OnRep_LastRingExitTimeStamp
	 */
	struct ASheikCharacter_OnRep_LastRingExitTimeStamp_Params
	{	};

	/**
	 * Function Sheik.SheikCharacter.OnRep_IsWaitingToFireCannon
	 */
	struct ASheikCharacter_OnRep_IsWaitingToFireCannon_Params
	{	};

	/**
	 * Function Sheik.SheikCharacter.OnRep_IsNonParticipant
	 */
	struct ASheikCharacter_OnRep_IsNonParticipant_Params
	{	};

	/**
	 * Function Sheik.SheikCharacter.OnRep_IsKOInsuranceAllowed
	 */
	struct ASheikCharacter_OnRep_IsKOInsuranceAllowed_Params
	{	};

	/**
	 * Function Sheik.SheikCharacter.OnRep_IsAimingCannon
	 */
	struct ASheikCharacter_OnRep_IsAimingCannon_Params
	{	};

	/**
	 * Function Sheik.SheikCharacter.OnRep_EventScore
	 */
	struct ASheikCharacter_OnRep_EventScore_Params
	{	};

	/**
	 * Function Sheik.SheikCharacter.OnLaunchedPlayerLanded
	 */
	struct ASheikCharacter_OnLaunchedPlayerLanded_Params
	{	};

	/**
	 * Function Sheik.SheikCharacter.OnKOInsuranceMontageEnded
	 */
	struct ASheikCharacter_OnKOInsuranceMontageEnded_Params
	{
	public:
		class UAnimMontage*                                        Montage;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bInterrupted;                                            // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikCharacter.OnAudioHandlerReady
	 */
	struct ASheikCharacter_OnAudioHandlerReady_Params
	{
	public:
		class ASheikAudioHandlerActor*                             AudioHandler;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikCharacter.IsShowingDebugPlayerMeshes
	 */
	struct ASheikCharacter_IsShowingDebugPlayerMeshes_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikCharacter.IsResurrectionAllowed
	 */
	struct ASheikCharacter_IsResurrectionAllowed_Params
	{
	public:
		class ASheikCharacter*                                     ResurrectionTarget;                                      // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikCharacter.IsKOInsuranceAvailable
	 */
	struct ASheikCharacter_IsKOInsuranceAvailable_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikCharacter.IsCharacterOutsideOfRing
	 */
	struct ASheikCharacter_IsCharacterOutsideOfRing_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikCharacter.HasLaunchControl
	 */
	struct ASheikCharacter_HasLaunchControl_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikCharacter.GetSpecialMoveDisplayTier
	 */
	struct ASheikCharacter_GetSpecialMoveDisplayTier_Params
	{
	public:
		class UIGMoveMontage*                                      Move;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EMoveTier                                                  OverridableTier;                                         // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EMoveTier                                                  ReturnValue;                                             // 0x0009(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikCharacter.GetSheikStatBaseValue
	 */
	struct ASheikCharacter_GetSheikStatBaseValue_Params
	{
	public:
		ESheikModValueType                                         Type;                                                    // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_RPKN[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      ReturnValue;                                             // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikCharacter.GetPinComponent
	 */
	struct ASheikCharacter_GetPinComponent_Params
	{
	public:
		class USheikPinComponent*                                  ReturnValue;                                             // 0x0000(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikCharacter.ExecAddSheikStackFloat
	 */
	struct ASheikCharacter_ExecAddSheikStackFloat_Params
	{
	public:
		ESheikModValueType                                         TargetStat;                                              // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EIGModType                                                 ModType;                                                 // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_BL13[0x2];                                   // 0x0002(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      ModValue;                                                // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikCharacter.DebugSetShouldAutoClimb
	 */
	struct ASheikCharacter_DebugSetShouldAutoClimb_Params
	{
	public:
		bool                                                       InValue;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikCharacter.DebugSetMouseCameraSensitivity
	 */
	struct ASheikCharacter_DebugSetMouseCameraSensitivity_Params
	{
	public:
		float                                                      InValue;                                                 // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikCharacter.DebugSetMouseAimingSensitivity
	 */
	struct ASheikCharacter_DebugSetMouseAimingSensitivity_Params
	{
	public:
		float                                                      InValue;                                                 // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikCharacter.DebugSetInvertMouseCannonCameraY
	 */
	struct ASheikCharacter_DebugSetInvertMouseCannonCameraY_Params
	{
	public:
		bool                                                       InInvert;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikCharacter.DebugSetInvertMouseCameraY
	 */
	struct ASheikCharacter_DebugSetInvertMouseCameraY_Params
	{
	public:
		bool                                                       InInvert;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikCharacter.DebugSetInvertMouseAimingCameraY
	 */
	struct ASheikCharacter_DebugSetInvertMouseAimingCameraY_Params
	{
	public:
		bool                                                       InInvert;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikCharacter.DebugSetInvertGamepadCannonCameraY
	 */
	struct ASheikCharacter_DebugSetInvertGamepadCannonCameraY_Params
	{
	public:
		bool                                                       InInvert;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikCharacter.DebugSetInvertGamepadCannonCameraX
	 */
	struct ASheikCharacter_DebugSetInvertGamepadCannonCameraX_Params
	{
	public:
		bool                                                       InInvert;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikCharacter.DebugSetInvertGamepadCameraY
	 */
	struct ASheikCharacter_DebugSetInvertGamepadCameraY_Params
	{
	public:
		bool                                                       InInvert;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikCharacter.DebugSetInvertGamepadCameraX
	 */
	struct ASheikCharacter_DebugSetInvertGamepadCameraX_Params
	{
	public:
		bool                                                       InInvert;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikCharacter.DebugSetInvertGamepadAimingCameraY
	 */
	struct ASheikCharacter_DebugSetInvertGamepadAimingCameraY_Params
	{
	public:
		bool                                                       InInvert;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikCharacter.DebugSetInvertGamepadAimingCameraX
	 */
	struct ASheikCharacter_DebugSetInvertGamepadAimingCameraX_Params
	{
	public:
		bool                                                       InInvert;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikCharacter.DebugSetGamepadCameraSensitivity
	 */
	struct ASheikCharacter_DebugSetGamepadCameraSensitivity_Params
	{
	public:
		float                                                      InValue;                                                 // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikCharacter.DebugSetGamepadAimingSensitivity
	 */
	struct ASheikCharacter_DebugSetGamepadAimingSensitivity_Params
	{
	public:
		float                                                      InValue;                                                 // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikCharacter.ClientLaunchMasterFiredCannon
	 */
	struct ASheikCharacter_ClientLaunchMasterFiredCannon_Params
	{	};

	/**
	 * Function Sheik.SheikCharacter.CanResurrectTeammate
	 */
	struct ASheikCharacter_CanResurrectTeammate_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikCharacter.CannonLaunchMe
	 */
	struct ASheikCharacter_CannonLaunchMe_Params
	{	};

	/**
	 * Function Sheik.SheikCharacter.AddSheikMovementInputLocal
	 */
	struct ASheikCharacter_AddSheikMovementInputLocal_Params
	{
	public:
		float                                                      RightVal;                                                // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      ForwardVal;                                              // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikCharacter.AddSheikMovementDirection
	 */
	struct ASheikCharacter_AddSheikMovementDirection_Params
	{
	public:
		EMoveInputDirection                                        LocalDirection;                                          // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikCharacterInfoWidget.UpdateRenderScale
	 */
	struct USheikCharacterInfoWidget_UpdateRenderScale_Params
	{
	public:
		struct FVector2D                                           NewScale;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikCharacterInfoWidget.SetHealthbarVisiblity
	 */
	struct USheikCharacterInfoWidget_SetHealthbarVisiblity_Params
	{
	public:
		bool                                                       IsVisible;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikCharacterInfoWidget.SetDebugHide
	 */
	struct USheikCharacterInfoWidget_SetDebugHide_Params
	{
	public:
		bool                                                       bHide;                                                   // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction Sheik.SheikCharacterInfoWidget.OnRequestPlayerState__DelegateSignature
	 */
	struct USheikCharacterInfoWidget_OnRequestPlayerState__DelegateSignature_Params
	{	};

	/**
	 * Function Sheik.SheikCharacterInfoWidget.IsSpectatorPlayerStatePopulated
	 */
	struct USheikCharacterInfoWidget_IsSpectatorPlayerStatePopulated_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikCharacterInfoWidget.IsDebugHidden
	 */
	struct USheikCharacterInfoWidget_IsDebugHidden_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikConsolePresenceManager.OnMapStarted
	 */
	struct USheikConsolePresenceManager_OnMapStarted_Params
	{	};

	/**
	 * Function Sheik.SheikConsolePresenceManager.OnMapEnded
	 */
	struct USheikConsolePresenceManager_OnMapEnded_Params
	{	};

	/**
	 * Function Sheik.SheikCrystal.SwapMaterials
	 */
	struct ASheikCrystal_SwapMaterials_Params
	{
	public:
		bool                                                       IsTangible;                                              // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikCrystal.OnRep_ParentBeacon
	 */
	struct ASheikCrystal_OnRep_ParentBeacon_Params
	{	};

	/**
	 * Function Sheik.SheikCrystal.OnGameFlowStateChanged
	 */
	struct ASheikCrystal_OnGameFlowStateChanged_Params
	{
	public:
		EGameFlowState                                             NewState;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikEventBeaconInterface.StartEvent
	 */
	struct ASheikEventBeaconInterface_StartEvent_Params
	{	};

	/**
	 * Function Sheik.SheikEventBeaconInterface.StartCountdown
	 */
	struct ASheikEventBeaconInterface_StartCountdown_Params
	{	};

	/**
	 * Function Sheik.SheikEventBeaconInterface.ResizeRingMesh
	 */
	struct ASheikEventBeaconInterface_ResizeRingMesh_Params
	{	};

	/**
	 * Function Sheik.SheikEventBeaconInterface.OnRep_ShouldDisplayEventRing
	 */
	struct ASheikEventBeaconInterface_OnRep_ShouldDisplayEventRing_Params
	{	};

	/**
	 * Function Sheik.SheikEventBeaconInterface.OnRep_IsEventActive
	 */
	struct ASheikEventBeaconInterface_OnRep_IsEventActive_Params
	{	};

	/**
	 * Function Sheik.SheikEventBeaconInterface.MulticastEventRewardNotify
	 */
	struct ASheikEventBeaconInterface_MulticastEventRewardNotify_Params
	{
	public:
		TArray<class APlayerState*>                                WinnerState;                                             // 0x0000(0x0010)  (ConstParm, Parm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikEventBeaconInterface.IsPlayerParticipating
	 */
	struct ASheikEventBeaconInterface_IsPlayerParticipating_Params
	{
	public:
		class AActor*                                              Player;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikEventBeaconInterface.EndEvent
	 */
	struct ASheikEventBeaconInterface_EndEvent_Params
	{	};

	/**
	 * Function Sheik.SheikCrystalRunEventBeacon.RegisterPlayerScore
	 */
	struct ASheikCrystalRunEventBeacon_RegisterPlayerScore_Params
	{
	public:
		class AIGCharacter*                                        Character;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class ASheikCrystal*                                       Collectible;                                             // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikCrystalRunEventBeacon.IsOwnedCollectible
	 */
	struct ASheikCrystalRunEventBeacon_IsOwnedCollectible_Params
	{
	public:
		class ASheikCrystal*                                       Collectible;                                             // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikDurableStaticInteractable.OnRep_DurabilityChanged
	 */
	struct ASheikDurableStaticInteractable_OnRep_DurabilityChanged_Params
	{
	public:
		int32_t                                                    OldDurability;                                           // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikDurableStaticInteractable.NeedsKeyToReact
	 */
	struct ASheikDurableStaticInteractable_NeedsKeyToReact_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikDurableStaticInteractable.InteractableHasBeenHit_BP
	 */
	struct ASheikDurableStaticInteractable_InteractableHasBeenHit_BP_Params
	{
	public:
		bool                                                       bWasSuccessfulHit;                                       // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikDurableStaticInteractable.GetSkeletalMeshForDurability
	 */
	struct ASheikDurableStaticInteractable_GetSkeletalMeshForDurability_Params
	{
	public:
		class USkeletalMesh*                                       ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikDurableStaticInteractable.DuarabilityMaxReached_BP
	 */
	struct ASheikDurableStaticInteractable_DuarabilityMaxReached_BP_Params
	{	};

	/**
	 * Function Sheik.SheikDurableStaticInteractable.BP_OnDurabilityChanged
	 */
	struct ASheikDurableStaticInteractable_BP_OnDurabilityChanged_Params
	{
	public:
		int32_t                                                    NewDurability;                                           // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikEdgeNavLinks.GenerateLinks
	 */
	struct ASheikEdgeNavLinks_GenerateLinks_Params
	{	};

	/**
	 * Function Sheik.SheikWidgetBase.UpdateInputGroup
	 */
	struct USheikWidgetBase_UpdateInputGroup_Params
	{	};

	/**
	 * Function Sheik.SheikWidgetBase.SetActivated
	 */
	struct USheikWidgetBase_SetActivated_Params
	{
	public:
		bool                                                       bActivated;                                              // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikWidgetBase.OnDeactivated
	 */
	struct USheikWidgetBase_OnDeactivated_Params
	{	};

	/**
	 * Function Sheik.SheikWidgetBase.OnActivated
	 */
	struct USheikWidgetBase_OnActivated_Params
	{	};

	/**
	 * Function Sheik.SheikWidgetBase.GetNavigableWidgets
	 */
	struct USheikWidgetBase_GetNavigableWidgets_Params
	{
	public:
		TArray<class UIGUI_WidgetBase*>                            NavigableWidgets;                                        // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikWidgetBase.FocusWidgetForInputGroup
	 */
	struct USheikWidgetBase_FocusWidgetForInputGroup_Params
	{
	public:
		class UIGUI_WidgetBase*                                    Widget;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    UserIndex;                                               // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikWidgetBase.Deactivate
	 */
	struct USheikWidgetBase_Deactivate_Params
	{	};

	/**
	 * Function Sheik.SheikWidgetBase.Activate
	 */
	struct USheikWidgetBase_Activate_Params
	{	};

	/**
	 * Function Sheik.SheikEmotePage.ReleaseLoadedEmotes
	 */
	struct USheikEmotePage_ReleaseLoadedEmotes_Params
	{	};

	/**
	 * Function Sheik.SheikEmotePage.OnEmoteMontageLoadFailed
	 */
	struct USheikEmotePage_OnEmoteMontageLoadFailed_Params
	{	};

	/**
	 * Function Sheik.SheikEmotePage.OnEmoteMontageLoadComplete
	 */
	struct USheikEmotePage_OnEmoteMontageLoadComplete_Params
	{
	public:
		class UIGMoveMontage*                                      LoadedMontage;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikEmotePage.LoadEmoteMontage
	 */
	struct USheikEmotePage_LoadEmoteMontage_Params
	{	};

	/**
	 * Function Sheik.SheikEmotePage.HandleOnEmoteMontageLoadComplete
	 */
	struct USheikEmotePage_HandleOnEmoteMontageLoadComplete_Params
	{	};

	/**
	 * Function Sheik.SheikEndOfMatchCallbacks.StartSpectating
	 */
	struct USheikEndOfMatchCallbacks_StartSpectating_Params
	{	};

	/**
	 * Function Sheik.SheikEndOfMatchCallbacks.SetUsingFollowPlayerView
	 */
	struct USheikEndOfMatchCallbacks_SetUsingFollowPlayerView_Params
	{
	public:
		bool                                                       UseFollowPlayerView;                                     // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikEndOfMatchCallbacks.SetPlayerControllerToSpectatorMode
	 */
	struct USheikEndOfMatchCallbacks_SetPlayerControllerToSpectatorMode_Params
	{	};

	/**
	 * Function Sheik.SheikEndOfMatchCallbacks.SetAllowSpectatorMovement
	 */
	struct USheikEndOfMatchCallbacks_SetAllowSpectatorMovement_Params
	{
	public:
		bool                                                       AllowMovement;                                           // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikEndOfMatchCallbacks.RespawnCharacter
	 */
	struct USheikEndOfMatchCallbacks_RespawnCharacter_Params
	{	};

	/**
	 * DelegateFunction Sheik.SheikEndOfMatchCallbacks.OnTeamDied__DelegateSignature
	 */
	struct USheikEndOfMatchCallbacks_OnTeamDied__DelegateSignature_Params
	{	};

	/**
	 * DelegateFunction Sheik.SheikEndOfMatchCallbacks.OnFollowingPlayerDied__DelegateSignature
	 */
	struct USheikEndOfMatchCallbacks_OnFollowingPlayerDied__DelegateSignature_Params
	{	};

	/**
	 * Function Sheik.SheikEndOfMatchCallbacks.NumOfTeammatesStillAlive
	 */
	struct USheikEndOfMatchCallbacks_NumOfTeammatesStillAlive_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikEndOfMatchCallbacks.IsUsingFollowPlayerView
	 */
	struct USheikEndOfMatchCallbacks_IsUsingFollowPlayerView_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikEndOfMatchCallbacks.IsSpectatorMovementAllowed
	 */
	struct USheikEndOfMatchCallbacks_IsSpectatorMovementAllowed_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikEndOfMatchCallbacks.IsSpectatingSelf
	 */
	struct USheikEndOfMatchCallbacks_IsSpectatingSelf_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikEndOfMatchCallbacks.IsLocalPlayerWinner
	 */
	struct USheikEndOfMatchCallbacks_IsLocalPlayerWinner_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikEndOfMatchCallbacks.IsInFreeCam
	 */
	struct USheikEndOfMatchCallbacks_IsInFreeCam_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikEndOfMatchCallbacks.IsInATeam
	 */
	struct USheikEndOfMatchCallbacks_IsInATeam_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikEndOfMatchCallbacks.InitializeLocalPlayerControllerDelegates
	 */
	struct USheikEndOfMatchCallbacks_InitializeLocalPlayerControllerDelegates_Params
	{	};

	/**
	 * Function Sheik.SheikEndOfMatchCallbacks.HasTeammatesWhoAreStillAlive
	 */
	struct USheikEndOfMatchCallbacks_HasTeammatesWhoAreStillAlive_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikEndOfMatchCallbacks.HandleOnSpectatorInfoUpdateTimeout
	 */
	struct USheikEndOfMatchCallbacks_HandleOnSpectatorInfoUpdateTimeout_Params
	{	};

	/**
	 * Function Sheik.SheikEndOfMatchCallbacks.HandleOnPlayerFollowingChanged
	 */
	struct USheikEndOfMatchCallbacks_HandleOnPlayerFollowingChanged_Params
	{
	public:
		bool                                                       IsFollowingPlayer;                                       // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikEndOfMatchCallbacks.HandleOnKnockoutOccurred
	 */
	struct USheikEndOfMatchCallbacks_HandleOnKnockoutOccurred_Params
	{
	public:
		struct FIGKnockOutData                                     KnockOutData;                                            // 0x0000(0x0030)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikEndOfMatchCallbacks.HandleOnFollowingPlayerStateDied
	 */
	struct USheikEndOfMatchCallbacks_HandleOnFollowingPlayerStateDied_Params
	{	};

	/**
	 * Function Sheik.SheikEndOfMatchCallbacks.HandleOnEnteredSpectatorMode
	 */
	struct USheikEndOfMatchCallbacks_HandleOnEnteredSpectatorMode_Params
	{	};

	/**
	 * Function Sheik.SheikEndOfMatchCallbacks.HandleOldSpectatorInfoUpdated
	 */
	struct USheikEndOfMatchCallbacks_HandleOldSpectatorInfoUpdated_Params
	{
	public:
		struct FSheikSpectatorInfo                                 NewSpectatorInfo;                                        // 0x0000(0x00E0)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikEndOfMatchCallbacks.GetWinners
	 */
	struct USheikEndOfMatchCallbacks_GetWinners_Params
	{
	public:
		TArray<class AIGPlayerState*>                              ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikEndOfMatchCallbacks.GetTeammatesStats
	 */
	struct USheikEndOfMatchCallbacks_GetTeammatesStats_Params
	{
	public:
		TArray<struct FSheikPlayerStateStatInfo>                   OutTeammateStats;                                        // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikEndOfMatchCallbacks.GetTeammates
	 */
	struct USheikEndOfMatchCallbacks_GetTeammates_Params
	{
	public:
		TArray<class AIGPlayerState*>                              ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikEndOfMatchCallbacks.GetLocalPlayerStats
	 */
	struct USheikEndOfMatchCallbacks_GetLocalPlayerStats_Params
	{
	public:
		TArray<struct FSheikPlayerStat>                            ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikEndOfMatchCallbacks.FollowNextPlayerFromPlayerState
	 */
	struct USheikEndOfMatchCallbacks_FollowNextPlayerFromPlayerState_Params
	{
	public:
		class ASheikPlayerStateCommon*                             CurrentPlayerState;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikEndOfMatchCallbacks.FollowNextPlayer
	 */
	struct USheikEndOfMatchCallbacks_FollowNextPlayer_Params
	{	};

	/**
	 * Function Sheik.SheikEndOfMatchCallbacks.EnterFreeCam
	 */
	struct USheikEndOfMatchCallbacks_EnterFreeCam_Params
	{	};

	/**
	 * Function Sheik.SheikEndOfMatchCallbacks.ConvertPlayerStatsToUIStats
	 */
	struct USheikEndOfMatchCallbacks_ConvertPlayerStatsToUIStats_Params
	{
	public:
		TArray<struct FSheikPlayerDataStat>                        InPlayerStats;                                           // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
		TArray<struct FSheikPlayerStat>                            OutPlayerStats;                                          // 0x0010(0x0010)  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikErrorManager.GetLogoutError
	 */
	struct USheikErrorManager_GetLogoutError_Params
	{
	public:
		struct FSheikError                                         ReturnValue;                                             // 0x0000(0x000C)  (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikErrorManager.DoLogoutError
	 */
	struct USheikErrorManager_DoLogoutError_Params
	{
	public:
		struct FSheikError                                         Error;                                                   // 0x0000(0x000C)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikErrorManager.ConsumeNetworkLogout
	 */
	struct USheikErrorManager_ConsumeNetworkLogout_Params
	{
	public:
		bool                                                       LogoutOccurred;                                          // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_NAAH[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FText                                                HeaderText;                                              // 0x0008(0x0018)  (Parm, OutParm, NativeAccessSpecifierPublic)
		class FText                                                BodyText;                                                // 0x0020(0x0018)  (Parm, OutParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikErrorManager.ClearLogoutError
	 */
	struct USheikErrorManager_ClearLogoutError_Params
	{	};

	/**
	 * Function Sheik.SheikEventHistoryWidget.AddTextToEventLine
	 */
	struct USheikEventHistoryWidget_AddTextToEventLine_Params
	{
	public:
		class FText                                                EventText;                                               // 0x0000(0x0018)  (Parm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikEventLineWidget.ShowEvent
	 */
	struct USheikEventLineWidget_ShowEvent_Params
	{
	public:
		class FText                                                EventText;                                               // 0x0000(0x0018)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikEventLineWidget.ShiftDown
	 */
	struct USheikEventLineWidget_ShiftDown_Params
	{	};

	/**
	 * Function Sheik.SheikEventLineWidget.GetEventText
	 */
	struct USheikEventLineWidget_GetEventText_Params
	{
	public:
		class FText                                                ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikExecManager.ExecTriggerErrorTelemetry
	 */
	struct USheikExecManager_ExecTriggerErrorTelemetry_Params
	{
	public:
		int32_t                                                    SystemInt;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    SourceInt;                                               // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    CallCode;                                                // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    ErrorCode;                                               // 0x000C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikExecManager.ExecTestErrorPopup
	 */
	struct USheikExecManager_ExecTestErrorPopup_Params
	{
	public:
		int32_t                                                    SystemInt;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    SourceInt;                                               // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    CallCode;                                                // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    ErrorCode;                                               // 0x000C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikExecManager.ExecTestCozmoBanFlow
	 */
	struct USheikExecManager_ExecTestCozmoBanFlow_Params
	{
	public:
		class FString                                              Reason;                                                  // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              Expiration;                                              // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    Duration;                                                // 0x0020(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikExecManager.ExecStats_UploadSingle_Client
	 */
	struct USheikExecManager_ExecStats_UploadSingle_Client_Params
	{	};

	/**
	 * Function Sheik.SheikExecManager.ExecStats_UploadSeasonalStats
	 */
	struct USheikExecManager_ExecStats_UploadSeasonalStats_Params
	{	};

	/**
	 * Function Sheik.SheikExecManager.ExecStats_UploadCurrentStatsAsSeason
	 */
	struct USheikExecManager_ExecStats_UploadCurrentStatsAsSeason_Params
	{
	public:
		EIGSeasonIdentifier                                        Season;                                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikExecManager.ExecStats_SetAndUploadStatValue_Client
	 */
	struct USheikExecManager_ExecStats_SetAndUploadStatValue_Client_Params
	{
	public:
		class FString                                              StatBaseName;                                            // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      LifetimeValue;                                           // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      WatermarkValue;                                          // 0x0014(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      LiveSeasonLifetimeValue;                                 // 0x0018(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      LiveSeasonWatermarkValue;                                // 0x001C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikExecManager.ExecStats_ResetSeasonalStatsOnCozmo
	 */
	struct USheikExecManager_ExecStats_ResetSeasonalStatsOnCozmo_Params
	{
	public:
		EIGSeasonIdentifier                                        Season;                                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikExecManager.ExecStats_ResetAllStatsForLocalPlayer_Client
	 */
	struct USheikExecManager_ExecStats_ResetAllStatsForLocalPlayer_Client_Params
	{	};

	/**
	 * Function Sheik.SheikExecManager.ExecStats_PrintStatsGameInstance_Client
	 */
	struct USheikExecManager_ExecStats_PrintStatsGameInstance_Client_Params
	{	};

	/**
	 * Function Sheik.SheikExecManager.ExecStats_PrintSingleStat
	 */
	struct USheikExecManager_ExecStats_PrintSingleStat_Params
	{
	public:
		class FString                                              StatBaseName;                                            // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikExecManager.ExecStats_PrintAllStatBaseNames
	 */
	struct USheikExecManager_ExecStats_PrintAllStatBaseNames_Params
	{	};

	/**
	 * Function Sheik.SheikExecManager.ExecStats_DownloadSpecificStatField_Client
	 */
	struct USheikExecManager_ExecStats_DownloadSpecificStatField_Client_Params
	{
	public:
		class FString                                              StatBaseName;                                            // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              StatField;                                               // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikExecManager.ExecStats_DownloadSingle_Client
	 */
	struct USheikExecManager_ExecStats_DownloadSingle_Client_Params
	{	};

	/**
	 * Function Sheik.SheikExecManager.ExecStats_DownloadSeasonalStats
	 */
	struct USheikExecManager_ExecStats_DownloadSeasonalStats_Params
	{
	public:
		EIGSeasonIdentifier                                        Season;                                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikExecManager.ExecStats_ClearSeasonalStatsCache
	 */
	struct USheikExecManager_ExecStats_ClearSeasonalStatsCache_Params
	{	};

	/**
	 * Function Sheik.SheikExecManager.ExecShowNoticesPopup
	 */
	struct USheikExecManager_ExecShowNoticesPopup_Params
	{	};

	/**
	 * Function Sheik.SheikExecManager.ExecSheikToggleOverlay
	 */
	struct USheikExecManager_ExecSheikToggleOverlay_Params
	{
	public:
		class FString                                              OverlayName;                                             // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bOn;                                                     // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikExecManager.ExecSheikSetPresence
	 */
	struct USheikExecManager_ExecSheikSetPresence_Params
	{
	public:
		int32_t                                                    PresenceInt;                                             // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikExecManager.ExecSheikSetEOSConnectionStatus
	 */
	struct USheikExecManager_ExecSheikSetEOSConnectionStatus_Params
	{
	public:
		int32_t                                                    Status;                                                  // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikExecManager.ExecSheikRefreshPresence
	 */
	struct USheikExecManager_ExecSheikRefreshPresence_Params
	{
	public:
		class FString                                              ID;                                                      // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikExecManager.ExecSheikGetPresence
	 */
	struct USheikExecManager_ExecSheikGetPresence_Params
	{
	public:
		class FString                                              ID;                                                      // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikExecManager.ExecSheikAccountsEOSShowBlockUI
	 */
	struct USheikExecManager_ExecSheikAccountsEOSShowBlockUI_Params
	{
	public:
		class FString                                              EOSId;                                                   // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikExecManager.ExecSetLoginQueueOverride
	 */
	struct USheikExecManager_ExecSetLoginQueueOverride_Params
	{
	public:
		int32_t                                                    TicketId;                                                // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    ServingNumber;                                           // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    PollingIntervalSeconds;                                  // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikExecManager.ExecRep_SetWeeklyChallengeState
	 */
	struct USheikExecManager_ExecRep_SetWeeklyChallengeState_Params
	{
	public:
		class FString                                              WeekNumberOrLabel;                                       // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bEnabled;                                                // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikExecManager.ExecRep_SetAndUploadRepProgress_Client
	 */
	struct USheikExecManager_ExecRep_SetAndUploadRepProgress_Client_Params
	{
	public:
		class FString                                              RepName;                                                 // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      ProgressValue;                                           // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      Completed;                                               // 0x0014(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikExecManager.ExecRedeemCodes
	 */
	struct USheikExecManager_ExecRedeemCodes_Params
	{
	public:
		class FString                                              CommaSeparatedCodes;                                     // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikExecManager.ExecQuerySingleUserInfo
	 */
	struct USheikExecManager_ExecQuerySingleUserInfo_Params
	{
	public:
		class FString                                              EOSId;                                                   // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikExecManager.ExecQueryExternalUserId
	 */
	struct USheikExecManager_ExecQueryExternalUserId_Params
	{
	public:
		class FString                                              ExternalId;                                              // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikExecManager.ExecKWSResetAdultSave
	 */
	struct USheikExecManager_ExecKWSResetAdultSave_Params
	{	};

	/**
	 * Function Sheik.SheikExecManager.ExecKWSQueryKidRequirements
	 */
	struct USheikExecManager_ExecKWSQueryKidRequirements_Params
	{	};

	/**
	 * Function Sheik.SheikExecManager.ExecKWSCommitParentEmail
	 */
	struct USheikExecManager_ExecKWSCommitParentEmail_Params
	{
	public:
		class FString                                              ParentEmail;                                             // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikExecManager.ExecKWSCommitDOB
	 */
	struct USheikExecManager_ExecKWSCommitDOB_Params
	{
	public:
		int32_t                                                    Month;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    Day;                                                     // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    Year;                                                    // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikExecManager.ExecClearRecentPlayers
	 */
	struct USheikExecManager_ExecClearRecentPlayers_Params
	{	};

	/**
	 * Function Sheik.SheikExecManager.ExecAttemptLogout
	 */
	struct USheikExecManager_ExecAttemptLogout_Params
	{	};

	/**
	 * Function Sheik.SheikExecManager.ExecAttemptEOSLogin
	 */
	struct USheikExecManager_ExecAttemptEOSLogin_Params
	{
	public:
		class FString                                              ID;                                                      // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              Token;                                                   // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikExecManager.ExecAttemptCozmoLogin
	 */
	struct USheikExecManager_ExecAttemptCozmoLogin_Params
	{	};

	/**
	 * Function Sheik.SheikExecManager.ExecAddRecentPlayer
	 */
	struct USheikExecManager_ExecAddRecentPlayer_Params
	{
	public:
		class FString                                              EasId;                                                   // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		ESheikPlatformService                                      PlatformService;                                         // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikExecManager.DebugInputSubscriberDataMap
	 */
	struct USheikExecManager_DebugInputSubscriberDataMap_Params
	{
	public:
		bool                                                       bEnabled;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikFanCloutAnnouncementWidget.ShowPlayerLeveling
	 */
	struct USheikFanCloutAnnouncementWidget_ShowPlayerLeveling_Params
	{	};

	/**
	 * Function Sheik.SheikFanCloutAnnouncementWidget.SetLevelUpTiming
	 */
	struct USheikFanCloutAnnouncementWidget_SetLevelUpTiming_Params
	{	};

	/**
	 * Function Sheik.SheikFanCloutAnnouncementWidget.SetInitialCloutBarData
	 */
	struct USheikFanCloutAnnouncementWidget_SetInitialCloutBarData_Params
	{
	public:
		bool                                                       ShowIcons;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikFanCloutAnnouncementWidget.SetFinalCloutBarData
	 */
	struct USheikFanCloutAnnouncementWidget_SetFinalCloutBarData_Params
	{
	public:
		bool                                                       ShowIcons;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikFanCloutAnnouncementWidget.SetFanMailText
	 */
	struct USheikFanCloutAnnouncementWidget_SetFanMailText_Params
	{	};

	/**
	 * Function Sheik.SheikFanCloutAnnouncementWidget.SetCloutBarData
	 */
	struct USheikFanCloutAnnouncementWidget_SetCloutBarData_Params
	{
	public:
		int32_t                                                    CurrentLevel;                                            // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    NextLevel;                                               // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ShowIcons;                                               // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikFanCloutAnnouncementWidget.GetProgressBarUpdateTime
	 */
	struct USheikFanCloutAnnouncementWidget_GetProgressBarUpdateTime_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikFansService.HandleOnRingFinishedClosingSumFansAndNotify
	 */
	struct USheikFansService_HandleOnRingFinishedClosingSumFansAndNotify_Params
	{
	public:
		int32_t                                                    Time;                                                    // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikFansService.HandleOnKnockoutOccurredPotentiallyAwardFans
	 */
	struct USheikFansService_HandleOnKnockoutOccurredPotentiallyAwardFans_Params
	{
	public:
		struct FIGKnockOutData                                     KnockOutData;                                            // 0x0000(0x0030)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikFansService.CalculateFansAccrued
	 */
	struct USheikFansService_CalculateFansAccrued_Params
	{	};

	/**
	 * Function Sheik.SheikFriendsManager.UnblockPlayer
	 */
	struct USheikFriendsManager_UnblockPlayer_Params
	{
	public:
		struct FSheikPlayerAccount                                 Account;                                                 // 0x0000(0x02F0)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      Callback;                                                // 0x02F0(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction Sheik.SheikFriendsManager.OnUnblockPlayerDelegate__DelegateSignature
	 */
	struct USheikFriendsManager_OnUnblockPlayerDelegate__DelegateSignature_Params
	{
	public:
		bool                                                       bWasSuccessful;                                          // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_M4W6[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FSheikError                                         Error;                                                   // 0x0004(0x000C)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		class FString                                              CozmoId;                                                 // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction Sheik.SheikFriendsManager.OnFriendsListUpdated__DelegateSignature
	 */
	struct USheikFriendsManager_OnFriendsListUpdated__DelegateSignature_Params
	{
	public:
		bool                                                       bSuccessful;                                             // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction Sheik.SheikFriendsManager.OnFriendPresenceUpdated__DelegateSignature
	 */
	struct USheikFriendsManager_OnFriendPresenceUpdated__DelegateSignature_Params
	{
	public:
		struct FSheikPlayerAccount                                 Account;                                                 // 0x0000(0x02F0)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction Sheik.SheikFriendsManager.OnBlockPlayerDelegate__DelegateSignature
	 */
	struct USheikFriendsManager_OnBlockPlayerDelegate__DelegateSignature_Params
	{
	public:
		bool                                                       bWasSuccessful;                                          // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_YQMG[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FSheikError                                         Error;                                                   // 0x0004(0x000C)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		class FString                                              CozmoId;                                                 // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction Sheik.SheikFriendsManager.OnBlockedPlayersUpdated__DelegateSignature
	 */
	struct USheikFriendsManager_OnBlockedPlayersUpdated__DelegateSignature_Params
	{	};

	/**
	 * Function Sheik.SheikFriendsManager.GetFriendsList
	 */
	struct USheikFriendsManager_GetFriendsList_Params
	{
	public:
		TArray<struct FSheikPlayerAccount>                         ReturnValue;                                             // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikFriendsManager.GetBlockedPlayers
	 */
	struct USheikFriendsManager_GetBlockedPlayers_Params
	{
	public:
		TArray<struct FSheikPlayerAccount>                         ReturnValue;                                             // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikFriendsManager.GetBlockedCozmoPlayers
	 */
	struct USheikFriendsManager_GetBlockedCozmoPlayers_Params
	{
	public:
		TArray<struct FSheikCozmoAccount>                          ReturnValue;                                             // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikFriendsManager.GetBlockedByCozmoPlayers
	 */
	struct USheikFriendsManager_GetBlockedByCozmoPlayers_Params
	{
	public:
		TArray<struct FSheikCozmoAccount>                          ReturnValue;                                             // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikFriendsManager.DisplayPlatformPlayerProfileUI
	 */
	struct USheikFriendsManager_DisplayPlatformPlayerProfileUI_Params
	{
	public:
		struct FSheikPlayerAccount                                 Account;                                                 // 0x0000(0x02F0)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikFriendsManager.BlockPlayer
	 */
	struct USheikFriendsManager_BlockPlayer_Params
	{
	public:
		struct FSheikPlayerAccount                                 Account;                                                 // 0x0000(0x02F0)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      Callback;                                                // 0x02F0(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikFrontendPersistentScreen.RedirectFromBattlePassToVirtualCurrency
	 */
	struct USheikFrontendPersistentScreen_RedirectFromBattlePassToVirtualCurrency_Params
	{
	public:
		int32_t                                                    PriceToReach;                                            // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikFrontendPersistentScreen.OpenSocialMenu
	 */
	struct USheikFrontendPersistentScreen_OpenSocialMenu_Params
	{	};

	/**
	 * Function Sheik.SheikFrontendPersistentScreen.OpenSettingsMenu
	 */
	struct USheikFrontendPersistentScreen_OpenSettingsMenu_Params
	{	};

	/**
	 * Function Sheik.SheikFrontendPersistentScreen.NavigateToTabIndex
	 */
	struct USheikFrontendPersistentScreen_NavigateToTabIndex_Params
	{
	public:
		int32_t                                                    TabIndex;                                                // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikFrontendPersistentScreen.NavigateToTabClass
	 */
	struct USheikFrontendPersistentScreen_NavigateToTabClass_Params
	{	};

	/**
	 * Function Sheik.SheikFrontendPersistentScreen.IsTabInputEnabled
	 */
	struct USheikFrontendPersistentScreen_IsTabInputEnabled_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikFrontendPersistentScreen.HandleOnPartyMatchmakingStopped
	 */
	struct USheikFrontendPersistentScreen_HandleOnPartyMatchmakingStopped_Params
	{
	public:
		bool                                                       bIsLeader;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikFrontendPersistentScreen.HandleOnPartyMatchmakingStarted
	 */
	struct USheikFrontendPersistentScreen_HandleOnPartyMatchmakingStarted_Params
	{
	public:
		class FString                                              ConfigurationName;                                       // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bIsLeader;                                               // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikFrontendPersistentScreen.HandleOnPartyMatchmakingFound
	 */
	struct USheikFrontendPersistentScreen_HandleOnPartyMatchmakingFound_Params
	{
	public:
		bool                                                       bIsLeader;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikFrontendPersistentScreen.HandleOnPartyMatchmakingError
	 */
	struct USheikFrontendPersistentScreen_HandleOnPartyMatchmakingError_Params
	{
	public:
		class FText                                                ErrorText;                                               // 0x0000(0x0018)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		bool                                                       bIsPartyLeader;                                          // 0x0018(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikFrontendPersistentScreen.HandleFocusChanged
	 */
	struct USheikFrontendPersistentScreen_HandleFocusChanged_Params
	{
	public:
		bool                                                       bIsContextMenuFocused;                                   // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikFrontendPersistentScreen.GetTabIndexFromScreen
	 */
	struct USheikFrontendPersistentScreen_GetTabIndexFromScreen_Params
	{
	public:
		unsigned char                                              UnknownData_5KUY[0x28];                                  // 0x0000(0x0028) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ReturnValue;                                             // 0x0028(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikFrontendPersistentScreen.ExitSocialMenu
	 */
	struct USheikFrontendPersistentScreen_ExitSocialMenu_Params
	{	};

	/**
	 * Function Sheik.SheikFrontendPersistentScreen.ExitSettingsMenu
	 */
	struct USheikFrontendPersistentScreen_ExitSettingsMenu_Params
	{	};

	/**
	 * Function Sheik.SheikFrontendPersistentScreen.ExitGameModesMenu
	 */
	struct USheikFrontendPersistentScreen_ExitGameModesMenu_Params
	{	};

	/**
	 * Function Sheik.SheikFrontendPersistentScreen.EnableTabInput
	 */
	struct USheikFrontendPersistentScreen_EnableTabInput_Params
	{
	public:
		bool                                                       bEnableInput;                                            // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bAllowChangeWhileLoading;                                // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikFrontendPersistentScreen.EnableSocialMenuInput
	 */
	struct USheikFrontendPersistentScreen_EnableSocialMenuInput_Params
	{
	public:
		bool                                                       bEnableInput;                                            // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikFrontendPersistentScreen.EnableSettingsMenuInput
	 */
	struct USheikFrontendPersistentScreen_EnableSettingsMenuInput_Params
	{
	public:
		bool                                                       bEnableInput;                                            // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikFrontendPersistentScreen.DisablePersistentWidgets
	 */
	struct USheikFrontendPersistentScreen_DisablePersistentWidgets_Params
	{
	public:
		bool                                                       bHideBattlePass;                                         // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bHideTabs;                                               // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bHideAccountInfo;                                        // 0x0002(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikGameInfo.ShouldShowPerkXPMeter
	 */
	struct USheikGameInfo_ShouldShowPerkXPMeter_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikGameInfo.GetSheikModValue
	 */
	struct USheikGameInfo_GetSheikModValue_Params
	{
	public:
		ESheikModValueType                                         Type;                                                    // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_ONN7[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      ReturnValue;                                             // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikGameInstance.UpdateTeamFillSettings
	 */
	struct USheikGameInstance_UpdateTeamFillSettings_Params
	{
	public:
		bool                                                       bTeamFillToggle;                                         // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikGameInstance.UpdateRerollAllowanceForUI
	 */
	struct USheikGameInstance_UpdateRerollAllowanceForUI_Params
	{	};

	/**
	 * Function Sheik.SheikGameInstance.UpdateRepAllowanceForUI
	 */
	struct USheikGameInstance_UpdateRepAllowanceForUI_Params
	{	};

	/**
	 * Function Sheik.SheikGameInstance.UnregisterExecBPCall
	 */
	struct USheikGameInstance_UnregisterExecBPCall_Params
	{
	public:
		class FString                                              CallName;                                                // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikGameInstance.TestUpdatePlayerAttributeData
	 */
	struct USheikGameInstance_TestUpdatePlayerAttributeData_Params
	{
	public:
		class FString                                              PlayerName;                                              // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    PlatformService;                                         // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    CloutLevel;                                              // 0x0014(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    PlayerSkill;                                             // 0x0018(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    CrossPlaySettingEnabled;                                 // 0x001C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikGameInstance.TestUpdateFriends
	 */
	struct USheikGameInstance_TestUpdateFriends_Params
	{	};

	/**
	 * Function Sheik.SheikGameInstance.TestUnlockRestrictedMatchCreationEntitlement
	 */
	struct USheikGameInstance_TestUnlockRestrictedMatchCreationEntitlement_Params
	{	};

	/**
	 * Function Sheik.SheikGameInstance.TestSpectatorMode
	 */
	struct USheikGameInstance_TestSpectatorMode_Params
	{
	public:
		bool                                                       bEnable;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikGameInstance.TestShowPlayerProfileUI
	 */
	struct USheikGameInstance_TestShowPlayerProfileUI_Params
	{
	public:
		class FString                                              PlayerId;                                                // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikGameInstance.TestShowPartyInviteUI
	 */
	struct USheikGameInstance_TestShowPartyInviteUI_Params
	{	};

	/**
	 * Function Sheik.SheikGameInstance.TestSendMessageToParty
	 */
	struct USheikGameInstance_TestSendMessageToParty_Params
	{
	public:
		class FString                                              Message;                                                 // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikGameInstance.TestSaveRecentPlayers
	 */
	struct USheikGameInstance_TestSaveRecentPlayers_Params
	{	};

	/**
	 * Function Sheik.SheikGameInstance.TestNetworkFailure
	 */
	struct USheikGameInstance_TestNetworkFailure_Params
	{
	public:
		class FString                                              FailureType;                                             // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bLoadIntoFrontend;                                       // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikGameInstance.TestLogVoiceUserInfo
	 */
	struct USheikGameInstance_TestLogVoiceUserInfo_Params
	{	};

	/**
	 * Function Sheik.SheikGameInstance.TestLogPartyInfo
	 */
	struct USheikGameInstance_TestLogPartyInfo_Params
	{	};

	/**
	 * Function Sheik.SheikGameInstance.TestLogFriendsList
	 */
	struct USheikGameInstance_TestLogFriendsList_Params
	{	};

	/**
	 * Function Sheik.SheikGameInstance.TestLeaveParty
	 */
	struct USheikGameInstance_TestLeaveParty_Params
	{	};

	/**
	 * Function Sheik.SheikGameInstance.TestKickPlayerFromParty
	 */
	struct USheikGameInstance_TestKickPlayerFromParty_Params
	{
	public:
		class FString                                              PlayerId;                                                // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikGameInstance.TestJoinParty
	 */
	struct USheikGameInstance_TestJoinParty_Params
	{
	public:
		class FString                                              PartyId;                                                 // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikGameInstance.TestInviteToCozmoParty
	 */
	struct USheikGameInstance_TestInviteToCozmoParty_Params
	{
	public:
		class FString                                              PlayerId;                                                // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikGameInstance.TestEndOfMatchBonusCalculations
	 */
	struct USheikGameInstance_TestEndOfMatchBonusCalculations_Params
	{	};

	/**
	 * Function Sheik.SheikGameInstance.TestEndMatchmaking
	 */
	struct USheikGameInstance_TestEndMatchmaking_Params
	{
	public:
		bool                                                       FoundMatch;                                              // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikGameInstance.TestCreateParty
	 */
	struct USheikGameInstance_TestCreateParty_Params
	{
	public:
		bool                                                       bCreatePlatformParty;                                    // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikGameInstance.TestCloutCalculation
	 */
	struct USheikGameInstance_TestCloutCalculation_Params
	{
	public:
		int32_t                                                    Fans;                                                    // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikGameInstance.ShouldSkipToSpectator
	 */
	struct USheikGameInstance_ShouldSkipToSpectator_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikGameInstance.ShouldSkipEOMAutomatically
	 */
	struct USheikGameInstance_ShouldSkipEOMAutomatically_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction Sheik.SheikGameInstance.SheikPlatformActiveUserChangedDelegate__DelegateSignature
	 */
	struct USheikGameInstance_SheikPlatformActiveUserChangedDelegate__DelegateSignature_Params
	{	};

	/**
	 * DelegateFunction Sheik.SheikGameInstance.SheikOnViewportResizeDelegate__DelegateSignature
	 */
	struct USheikGameInstance_SheikOnViewportResizeDelegate__DelegateSignature_Params
	{	};

	/**
	 * DelegateFunction Sheik.SheikGameInstance.SheikOnSetSubtitleTextDelegate__DelegateSignature
	 */
	struct USheikGameInstance_SheikOnSetSubtitleTextDelegate__DelegateSignature_Params
	{
	public:
		class FText                                                SubtitleText;                                            // 0x0000(0x0018)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction Sheik.SheikGameInstance.SheikApplicationLifetimeDelegate__DelegateSignature
	 */
	struct USheikGameInstance_SheikApplicationLifetimeDelegate__DelegateSignature_Params
	{	};

	/**
	 * Function Sheik.SheikGameInstance.SetupForSmokeTest
	 */
	struct USheikGameInstance_SetupForSmokeTest_Params
	{
	public:
		class FString                                              TaskName;                                                // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bForever;                                                // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikGameInstance.SetupAutomaticMatchmaking
	 */
	struct USheikGameInstance_SetupAutomaticMatchmaking_Params
	{
	public:
		int32_t                                                    MatchmakingIndex;                                        // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikGameInstance.SetSpawnDefaultPlayerName
	 */
	struct USheikGameInstance_SetSpawnDefaultPlayerName_Params
	{
	public:
		class FString                                              InName;                                                  // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikGameInstance.SetRestrictedMatchHideMatchCode
	 */
	struct USheikGameInstance_SetRestrictedMatchHideMatchCode_Params
	{
	public:
		bool                                                       bHideInviteCode;                                         // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikGameInstance.SavePlayerData
	 */
	struct USheikGameInstance_SavePlayerData_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikGameInstance.ReRoll
	 */
	struct USheikGameInstance_ReRoll_Params
	{
	public:
		class FName                                                RepName;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FRepUIData                                          OutNewRep;                                               // 0x0008(0x0068)  (Parm, OutParm, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0070(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikGameInstance.ReportQueuedSettingChangeTelemetry
	 */
	struct USheikGameInstance_ReportQueuedSettingChangeTelemetry_Params
	{	};

	/**
	 * Function Sheik.SheikGameInstance.ReportPlayer
	 */
	struct USheikGameInstance_ReportPlayer_Params
	{
	public:
		struct FSheikPlayerAccount                                 ReportedPlayer;                                          // 0x0000(0x02F0)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		EReportReason                                              ReportReason;                                            // 0x02F0(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_HSEE[0x3];                                   // 0x02F1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FScriptDelegate                                      OnComplete;                                              // 0x02F4(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikGameInstance.ReportAutomaticSettingDetectionTelemetry
	 */
	struct USheikGameInstance_ReportAutomaticSettingDetectionTelemetry_Params
	{	};

	/**
	 * Function Sheik.SheikGameInstance.RegisterExecBPCall
	 */
	struct USheikGameInstance_RegisterExecBPCall_Params
	{
	public:
		class FString                                              CallName;                                                // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      Delegate;                                                // 0x0010(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikGameInstance.QueueSettingChangeTelemetry
	 */
	struct USheikGameInstance_QueueSettingChangeTelemetry_Params
	{
	public:
		class FString                                              SettingCategory;                                         // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              SettingName;                                             // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              OldValue;                                                // 0x0020(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              NewValue;                                                // 0x0030(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikGameInstance.PostErrorTelemetryEvent
	 */
	struct USheikGameInstance_PostErrorTelemetryEvent_Params
	{
	public:
		ESheikErrorSource                                          ErrorSource;                                             // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		ESheikErrorSystem                                          ErrorSystem;                                             // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_EQVL[0x2];                                   // 0x0002(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    CallCode;                                                // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    ErrorCode;                                               // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikGameInstance.PickRandomAccessories
	 */
	struct USheikGameInstance_PickRandomAccessories_Params
	{
	public:
		bool                                                       bForceAccessorySet;                                      // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikGameInstance.OverrideChangelist
	 */
	struct USheikGameInstance_OverrideChangelist_Params
	{
	public:
		int32_t                                                    OverrideCl;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikGameInstance.OnWorldCompositionWentIdleCallback
	 */
	struct USheikGameInstance_OnWorldCompositionWentIdleCallback_Params
	{	};

	/**
	 * Function Sheik.SheikGameInstance.OnWorldCompositionHighPriorityWentIdleCallback
	 */
	struct USheikGameInstance_OnWorldCompositionHighPriorityWentIdleCallback_Params
	{	};

	/**
	 * DelegateFunction Sheik.SheikGameInstance.OnUpdateTeamFillSettings__DelegateSignature
	 */
	struct USheikGameInstance_OnUpdateTeamFillSettings__DelegateSignature_Params
	{
	public:
		bool                                                       bTeamFillToggle;                                         // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikGameInstance.OnTitleScreenEnter
	 */
	struct USheikGameInstance_OnTitleScreenEnter_Params
	{	};

	/**
	 * DelegateFunction Sheik.SheikGameInstance.OnSplashMovieFinished__DelegateSignature
	 */
	struct USheikGameInstance_OnSplashMovieFinished__DelegateSignature_Params
	{	};

	/**
	 * Function Sheik.SheikGameInstance.OnSetSubtitleText
	 */
	struct USheikGameInstance_OnSetSubtitleText_Params
	{
	public:
		class FText                                                SubtitleText;                                            // 0x0000(0x0018)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction Sheik.SheikGameInstance.OnSendPlayerBehaviorReportCompleteCallback__DelegateSignature
	 */
	struct USheikGameInstance_OnSendPlayerBehaviorReportCompleteCallback__DelegateSignature_Params
	{
	public:
		bool                                                       bWasSuccessful;                                          // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_A9QS[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FSheikError                                         Error;                                                   // 0x0004(0x000C)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction Sheik.SheikGameInstance.OnRestrictedMatchHideMatchCodeChanged__DelegateSignature
	 */
	struct USheikGameInstance_OnRestrictedMatchHideMatchCodeChanged__DelegateSignature_Params
	{
	public:
		bool                                                       bHideInviteCode;                                         // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikGameInstance.OnPreLoadMap
	 */
	struct USheikGameInstance_OnPreLoadMap_Params
	{
	public:
		class FString                                              MapName;                                                 // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikGameInstance.OnPreClientTravel
	 */
	struct USheikGameInstance_OnPreClientTravel_Params
	{
	public:
		class FString                                              PendingURL;                                              // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		ETravelType                                                TravelType;                                              // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bIsSeamlessTravel;                                       // 0x0011(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikGameInstance.OnPostLoadMap
	 */
	struct USheikGameInstance_OnPostLoadMap_Params
	{
	public:
		class UWorld*                                              InLoadedWorld;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction Sheik.SheikGameInstance.OnPendingPartyInvite__DelegateSignature
	 */
	struct USheikGameInstance_OnPendingPartyInvite__DelegateSignature_Params
	{	};

	/**
	 * DelegateFunction Sheik.SheikGameInstance.OnNewRepAcquired__DelegateSignature
	 */
	struct USheikGameInstance_OnNewRepAcquired__DelegateSignature_Params
	{
	public:
		struct FRepUIData                                          OutNewRep;                                               // 0x0000(0x0068)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction Sheik.SheikGameInstance.OnLeaveGameMapDelegate__DelegateSignature
	 */
	struct USheikGameInstance_OnLeaveGameMapDelegate__DelegateSignature_Params
	{	};

	/**
	 * Function Sheik.SheikGameInstance.OnHotfixStatsUpdated
	 */
	struct USheikGameInstance_OnHotfixStatsUpdated_Params
	{
	public:
		struct FHotfixStatistics                                   InStats;                                                 // 0x0000(0x0018)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikGameInstance.OnFrontendExit
	 */
	struct USheikGameInstance_OnFrontendExit_Params
	{	};

	/**
	 * Function Sheik.SheikGameInstance.OnFrontendEnter
	 */
	struct USheikGameInstance_OnFrontendEnter_Params
	{	};

	/**
	 * DelegateFunction Sheik.SheikGameInstance.OnExecBPCall__DelegateSignature
	 */
	struct USheikGameInstance_OnExecBPCall__DelegateSignature_Params
	{
	public:
		class FString                                              Argument1;                                               // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              Argument2;                                               // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              Argument3;                                               // 0x0020(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              Argument4;                                               // 0x0030(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction Sheik.SheikGameInstance.OnEnterGameMapDelegate__DelegateSignature
	 */
	struct USheikGameInstance_OnEnterGameMapDelegate__DelegateSignature_Params
	{	};

	/**
	 * DelegateFunction Sheik.SheikGameInstance.OnEnterFrontendMapDelegate__DelegateSignature
	 */
	struct USheikGameInstance_OnEnterFrontendMapDelegate__DelegateSignature_Params
	{	};

	/**
	 * Function Sheik.SheikGameInstance.OnEditorProgressionDataRetrieved
	 */
	struct USheikGameInstance_OnEditorProgressionDataRetrieved_Params
	{
	public:
		bool                                                       bSuccessful;                                             // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_7061[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FSheikError                                         Error;                                                   // 0x0004(0x000C)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction Sheik.SheikGameInstance.OnControllerConnectionChanged__DelegateSignature
	 */
	struct USheikGameInstance_OnControllerConnectionChanged__DelegateSignature_Params
	{
	public:
		bool                                                       bConnected;                                              // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_JD6Y[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    PlatformUserId;                                          // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    ControllerId;                                            // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikGameInstance.OnAttemptEditorWorldCozmoLoginSuccess
	 */
	struct USheikGameInstance_OnAttemptEditorWorldCozmoLoginSuccess_Params
	{	};

	/**
	 * Function Sheik.SheikGameInstance.LoadAchievementProgressFromDisk
	 */
	struct USheikGameInstance_LoadAchievementProgressFromDisk_Params
	{	};

	/**
	 * Function Sheik.SheikGameInstance.IsStressingMatchmaking
	 */
	struct USheikGameInstance_IsStressingMatchmaking_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikGameInstance.IsRunningFromEpicLauncher
	 */
	struct USheikGameInstance_IsRunningFromEpicLauncher_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikGameInstance.IsRunningAutomaticMatchmaking
	 */
	struct USheikGameInstance_IsRunningAutomaticMatchmaking_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikGameInstance.IsOpeningSplashMoviePlaying
	 */
	struct USheikGameInstance_IsOpeningSplashMoviePlaying_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikGameInstance.IsOnConsole
	 */
	struct USheikGameInstance_IsOnConsole_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikGameInstance.IsInMatch
	 */
	struct USheikGameInstance_IsInMatch_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikGameInstance.IsInFrontend
	 */
	struct USheikGameInstance_IsInFrontend_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikGameInstance.IsInEntry
	 */
	struct USheikGameInstance_IsInEntry_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikGameInstance.IsDevServerAllowed
	 */
	struct USheikGameInstance_IsDevServerAllowed_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikGameInstance.IsCurrentlyMatchmaking
	 */
	struct USheikGameInstance_IsCurrentlyMatchmaking_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikGameInstance.InitializeLiveOps
	 */
	struct USheikGameInstance_InitializeLiveOps_Params
	{	};

	/**
	 * Function Sheik.SheikGameInstance.HasLiveOpsMessage
	 */
	struct USheikGameInstance_HasLiveOpsMessage_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikGameInstance.HandleLocalPlayerCozmoBanned
	 */
	struct USheikGameInstance_HandleLocalPlayerCozmoBanned_Params
	{
	public:
		class FString                                              Reason;                                                  // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              Expiration;                                              // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    Duration;                                                // 0x0020(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikGameInstance.HandleLoadFlowError
	 */
	struct USheikGameInstance_HandleLoadFlowError_Params
	{
	public:
		class FString                                              ErrorString;                                             // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikGameInstance.HandleApplicationWillTerminate
	 */
	struct USheikGameInstance_HandleApplicationWillTerminate_Params
	{	};

	/**
	 * Function Sheik.SheikGameInstance.HandleApplicationWillEnterBackground
	 */
	struct USheikGameInstance_HandleApplicationWillEnterBackground_Params
	{	};

	/**
	 * Function Sheik.SheikGameInstance.HandleApplicationWillDeactivate
	 */
	struct USheikGameInstance_HandleApplicationWillDeactivate_Params
	{	};

	/**
	 * Function Sheik.SheikGameInstance.HandleApplicationHasReactivated
	 */
	struct USheikGameInstance_HandleApplicationHasReactivated_Params
	{	};

	/**
	 * Function Sheik.SheikGameInstance.HandleApplicationHasEnteredForeground
	 */
	struct USheikGameInstance_HandleApplicationHasEnteredForeground_Params
	{	};

	/**
	 * Function Sheik.SheikGameInstance.GetUITitleStorageInterface
	 */
	struct USheikGameInstance_GetUITitleStorageInterface_Params
	{
	public:
		class USheikUITitleStorageInterface*                       ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikGameInstance.GetTitleCardDataManager
	 */
	struct USheikGameInstance_GetTitleCardDataManager_Params
	{
	public:
		class USheikTitleCardDataManager*                          ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikGameInstance.GetSheikStatsAdapter
	 */
	struct USheikGameInstance_GetSheikStatsAdapter_Params
	{
	public:
		class USheikStatsAdapter*                                  ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikGameInstance.GetSheikSavedSettings
	 */
	struct USheikGameInstance_GetSheikSavedSettings_Params
	{
	public:
		class USheikSavedSettings*                                 ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikGameInstance.GetSheikCaptureManager
	 */
	struct USheikGameInstance_GetSheikCaptureManager_Params
	{
	public:
		class ASheikCaptureManager*                                ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikGameInstance.GetSeasonalStatsManager
	 */
	struct USheikGameInstance_GetSeasonalStatsManager_Params
	{
	public:
		class USheikSeasonalStatsManager*                          ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikGameInstance.GetSavedPlayerName
	 */
	struct USheikGameInstance_GetSavedPlayerName_Params
	{
	public:
		class FString                                              ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikGameInstance.GetRestrictedMatchWalletId
	 */
	struct USheikGameInstance_GetRestrictedMatchWalletId_Params
	{
	public:
		class FName                                                ReturnValue;                                             // 0x0000(0x0008)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikGameInstance.GetRepSystem
	 */
	struct USheikGameInstance_GetRepSystem_Params
	{
	public:
		class UIGRepSystem*                                        ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikGameInstance.GetRedemptionCodeManager
	 */
	struct USheikGameInstance_GetRedemptionCodeManager_Params
	{
	public:
		class USheikRedemptionCodeManager*                         ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikGameInstance.GetProgressionSystem
	 */
	struct USheikGameInstance_GetProgressionSystem_Params
	{
	public:
		class USheikProgressionSystem*                             ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikGameInstance.GetPlayerMatchmakingSkill
	 */
	struct USheikGameInstance_GetPlayerMatchmakingSkill_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikGameInstance.GetPlayerDataManager
	 */
	struct USheikGameInstance_GetPlayerDataManager_Params
	{
	public:
		class USheikPlayerDataManager*                             ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikGameInstance.GetPlayerData
	 */
	struct USheikGameInstance_GetPlayerData_Params
	{
	public:
		class USheikPlayerData*                                    ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikGameInstance.GetPlayerAccountsManager
	 */
	struct USheikGameInstance_GetPlayerAccountsManager_Params
	{
	public:
		class USheikPlayerAccountsManager*                         ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikGameInstance.GetPartyManager
	 */
	struct USheikGameInstance_GetPartyManager_Params
	{
	public:
		class USheikPartyManager*                                  ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikGameInstance.GetNotificationsManager
	 */
	struct USheikGameInstance_GetNotificationsManager_Params
	{
	public:
		class USheikNotificationsManager*                          ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikGameInstance.GetNoticesManager
	 */
	struct USheikGameInstance_GetNoticesManager_Params
	{
	public:
		class USheikNoticesManager*                                ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikGameInstance.GetLoginManager
	 */
	struct USheikGameInstance_GetLoginManager_Params
	{
	public:
		class USheikLoginManager*                                  ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikGameInstance.GetLoadingScreen
	 */
	struct USheikGameInstance_GetLoadingScreen_Params
	{
	public:
		class USheikLoadingScreen*                                 ReturnValue;                                             // 0x0000(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikGameInstance.GetIsMilestoneBuild
	 */
	struct USheikGameInstance_GetIsMilestoneBuild_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikGameInstance.GetIsDemoBuild
	 */
	struct USheikGameInstance_GetIsDemoBuild_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikGameInstance.GetHotfixSystem
	 */
	struct USheikGameInstance_GetHotfixSystem_Params
	{
	public:
		class USheikHotfixSystem*                                  ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikGameInstance.GetGroupingForRep
	 */
	struct USheikGameInstance_GetGroupingForRep_Params
	{
	public:
		class FName                                                RowName;                                                 // 0x0000(0x0008)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FRepGrouping                                        OutRepGrouping;                                          // 0x0008(0x0068)  (Parm, OutParm, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0070(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikGameInstance.GetFrontendLevelName
	 */
	struct USheikGameInstance_GetFrontendLevelName_Params
	{
	public:
		class FName                                                ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikGameInstance.GetFriendsManager
	 */
	struct USheikGameInstance_GetFriendsManager_Params
	{
	public:
		class USheikFriendsManager*                                ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikGameInstance.GetErrorText
	 */
	struct USheikGameInstance_GetErrorText_Params
	{
	public:
		struct FSheikError                                         Error;                                                   // 0x0000(0x000C)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_5B9E[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FText                                                HeaderText;                                              // 0x0010(0x0018)  (Parm, OutParm, NativeAccessSpecifierPublic)
		class FText                                                BodyText;                                                // 0x0028(0x0018)  (Parm, OutParm, NativeAccessSpecifierPublic)
		class FText                                                ErrorCodeText;                                           // 0x0040(0x0018)  (Parm, OutParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikGameInstance.GetErrorManager
	 */
	struct USheikGameInstance_GetErrorManager_Params
	{
	public:
		class USheikErrorManager*                                  ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikGameInstance.GetEntryLevelName
	 */
	struct USheikGameInstance_GetEntryLevelName_Params
	{
	public:
		class FName                                                ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikGameInstance.GetDesiredMatchConfigTypeForPlayer
	 */
	struct USheikGameInstance_GetDesiredMatchConfigTypeForPlayer_Params
	{
	public:
		EMatchConfigType                                           ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikGameInstance.GetCurrentReps
	 */
	struct USheikGameInstance_GetCurrentReps_Params
	{
	public:
		TArray<struct FRepUIData>                                  ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikGameInstance.GetCozmoId
	 */
	struct USheikGameInstance_GetCozmoId_Params
	{
	public:
		class FString                                              CozmoId;                                                 // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikGameInstance.GetChangelistNumber
	 */
	struct USheikGameInstance_GetChangelistNumber_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikGameInstance.GetCallbacksManager
	 */
	struct USheikGameInstance_GetCallbacksManager_Params
	{
	public:
		class USheikCallbacksManager*                              ReturnValue;                                             // 0x0000(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikGameInstance.GetAnyRepsIfNeeded
	 */
	struct USheikGameInstance_GetAnyRepsIfNeeded_Params
	{
	public:
		ERepType                                                   RepType;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikGameInstance.GetAgeGatingManager
	 */
	struct USheikGameInstance_GetAgeGatingManager_Params
	{
	public:
		class USheikAgeGatingManager*                              ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikGameInstance.ExecXpBoosterManager_StopConsuming
	 */
	struct USheikGameInstance_ExecXpBoosterManager_StopConsuming_Params
	{	};

	/**
	 * Function Sheik.SheikGameInstance.ExecXpBoosterManager_StartConsuming
	 */
	struct USheikGameInstance_ExecXpBoosterManager_StartConsuming_Params
	{	};

	/**
	 * Function Sheik.SheikGameInstance.ExecXpBoosterManager_PrintCurrentBoosterPlusCozmoData
	 */
	struct USheikGameInstance_ExecXpBoosterManager_PrintCurrentBoosterPlusCozmoData_Params
	{	};

	/**
	 * Function Sheik.SheikGameInstance.ExecXpBoosterManager_PrintCurrentBooster
	 */
	struct USheikGameInstance_ExecXpBoosterManager_PrintCurrentBooster_Params
	{	};

	/**
	 * Function Sheik.SheikGameInstance.ExecXpBoosterManager_ConsumeMinutesForCurrentBooster
	 */
	struct USheikGameInstance_ExecXpBoosterManager_ConsumeMinutesForCurrentBooster_Params
	{
	public:
		int32_t                                                    Minutes;                                                 // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikGameInstance.ExecWriteToFilePlayerData
	 */
	struct USheikGameInstance_ExecWriteToFilePlayerData_Params
	{	};

	/**
	 * Function Sheik.SheikGameInstance.ExecUploadPlayerData
	 */
	struct USheikGameInstance_ExecUploadPlayerData_Params
	{	};

	/**
	 * Function Sheik.SheikGameInstance.ExecUploadClientTrackedPlayerStats
	 */
	struct USheikGameInstance_ExecUploadClientTrackedPlayerStats_Params
	{	};

	/**
	 * Function Sheik.SheikGameInstance.ExecUpdateRemotePlayerDataLifetimeXp
	 */
	struct USheikGameInstance_ExecUpdateRemotePlayerDataLifetimeXp_Params
	{
	public:
		float                                                      Data;                                                    // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikGameInstance.ExecUpdatePlayerSympathyValue
	 */
	struct USheikGameInstance_ExecUpdatePlayerSympathyValue_Params
	{
	public:
		int32_t                                                    NewSymapathyValue;                                       // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikGameInstance.ExecUpdatePlayerOnboardingValue
	 */
	struct USheikGameInstance_ExecUpdatePlayerOnboardingValue_Params
	{
	public:
		int32_t                                                    NewOnboardingValue;                                      // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikGameInstance.ExecUpdatePlayerMatchmakingRank
	 */
	struct USheikGameInstance_ExecUpdatePlayerMatchmakingRank_Params
	{
	public:
		int32_t                                                    NewRank;                                                 // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikGameInstance.ExecUpdateLocalPlayerData
	 */
	struct USheikGameInstance_ExecUpdateLocalPlayerData_Params
	{
	public:
		int32_t                                                    Type;                                                    // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_RYRD[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              Data;                                                    // 0x0008(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikGameInstance.ExecUpdateAchievement
	 */
	struct USheikGameInstance_ExecUpdateAchievement_Params
	{
	public:
		int32_t                                                    AchievementId;                                           // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    ProgressToIncreaseBy;                                    // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikGameInstance.ExecToggleMuteVoiceOutput
	 */
	struct USheikGameInstance_ExecToggleMuteVoiceOutput_Params
	{	};

	/**
	 * Function Sheik.SheikGameInstance.ExecToggleMuteVoiceInput
	 */
	struct USheikGameInstance_ExecToggleMuteVoiceInput_Params
	{	};

	/**
	 * Function Sheik.SheikGameInstance.ExecToggleFanAccrualAsSeconds
	 */
	struct USheikGameInstance_ExecToggleFanAccrualAsSeconds_Params
	{
	public:
		bool                                                       bUseSeconds;                                             // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikGameInstance.ExecToggleDisplayPartyInfo
	 */
	struct USheikGameInstance_ExecToggleDisplayPartyInfo_Params
	{
	public:
		bool                                                       bShow;                                                   // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikGameInstance.ExecTitleCard_UploadTitleCardLoadout
	 */
	struct USheikGameInstance_ExecTitleCard_UploadTitleCardLoadout_Params
	{	};

	/**
	 * Function Sheik.SheikGameInstance.ExecTitleCard_SoftUnlockHoveredReward
	 */
	struct USheikGameInstance_ExecTitleCard_SoftUnlockHoveredReward_Params
	{	};

	/**
	 * Function Sheik.SheikGameInstance.ExecTitleCard_SoftUnlockAllTitleCardRewards
	 */
	struct USheikGameInstance_ExecTitleCard_SoftUnlockAllTitleCardRewards_Params
	{	};

	/**
	 * Function Sheik.SheikGameInstance.ExecTitleCard_DownloadTitleCardLoadout
	 */
	struct USheikGameInstance_ExecTitleCard_DownloadTitleCardLoadout_Params
	{	};

	/**
	 * Function Sheik.SheikGameInstance.ExecTestFindOptimalPurchaseOfferCombination
	 */
	struct USheikGameInstance_ExecTestFindOptimalPurchaseOfferCombination_Params
	{
	public:
		int32_t                                                    NumTiersToPurchase;                                      // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikGameInstance.ExecTestBattlePassCelebration
	 */
	struct USheikGameInstance_ExecTestBattlePassCelebration_Params
	{	};

	/**
	 * Function Sheik.SheikGameInstance.ExecTestBattlePassCalculation
	 */
	struct USheikGameInstance_ExecTestBattlePassCalculation_Params
	{
	public:
		int32_t                                                    Fans;                                                    // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikGameInstance.ExecTestAllProgressionCalculation
	 */
	struct USheikGameInstance_ExecTestAllProgressionCalculation_Params
	{
	public:
		int32_t                                                    Fans;                                                    // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikGameInstance.ExecStopAllProgression
	 */
	struct USheikGameInstance_ExecStopAllProgression_Params
	{
	public:
		bool                                                       StopProgression;                                         // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikGameInstance.ExecStartHotfixCheck
	 */
	struct USheikGameInstance_ExecStartHotfixCheck_Params
	{
	public:
		int32_t                                                    Version;                                                 // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikGameInstance.ExecShowPlayerReviewDialog
	 */
	struct USheikGameInstance_ExecShowPlayerReviewDialog_Params
	{	};

	/**
	 * Function Sheik.SheikGameInstance.ExecShowCommerceDialog
	 */
	struct USheikGameInstance_ExecShowCommerceDialog_Params
	{	};

	/**
	 * Function Sheik.SheikGameInstance.ExecSetVoipPlayerMute
	 */
	struct USheikGameInstance_ExecSetVoipPlayerMute_Params
	{
	public:
		class FString                                              PlayerId;                                                // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bIsMuted;                                                // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikGameInstance.ExecSetPlayerSympathy
	 */
	struct USheikGameInstance_ExecSetPlayerSympathy_Params
	{
	public:
		bool                                                       bHasSympathyMatch;                                       // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikGameInstance.ExecSetFanMailCount
	 */
	struct USheikGameInstance_ExecSetFanMailCount_Params
	{
	public:
		int32_t                                                    NewFanMailCount;                                         // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikGameInstance.ExecSetFanAccrualTime
	 */
	struct USheikGameInstance_ExecSetFanAccrualTime_Params
	{
	public:
		int32_t                                                    Minutes;                                                 // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikGameInstance.ExecSetEndOfMatchBonusLedgerMidnightToPast
	 */
	struct USheikGameInstance_ExecSetEndOfMatchBonusLedgerMidnightToPast_Params
	{
	public:
		EEndOfMatchBonusName                                       BonusName;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikGameInstance.ExecSetConstantNumFansPerAccrual
	 */
	struct USheikGameInstance_ExecSetConstantNumFansPerAccrual_Params
	{
	public:
		int32_t                                                    FansPerAccrual;                                          // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikGameInstance.ExecSetAllowTeamFill
	 */
	struct USheikGameInstance_ExecSetAllowTeamFill_Params
	{
	public:
		bool                                                       bAllowTeamFill;                                          // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikGameInstance.ExecSetActiveVoipParty
	 */
	struct USheikGameInstance_ExecSetActiveVoipParty_Params
	{
	public:
		int32_t                                                    PartyType;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikGameInstance.ExecSetAccountPermissionSetting
	 */
	struct USheikGameInstance_ExecSetAccountPermissionSetting_Params
	{
	public:
		bool                                                       bAccountPerm;                                            // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikGameInstance.ExecResetProgressionToDefaultTitleStorageValues
	 */
	struct USheikGameInstance_ExecResetProgressionToDefaultTitleStorageValues_Params
	{	};

	/**
	 * Function Sheik.SheikGameInstance.ExecResetProgressionPlacementAndRoundStatesToDefault
	 */
	struct USheikGameInstance_ExecResetProgressionPlacementAndRoundStatesToDefault_Params
	{	};

	/**
	 * Function Sheik.SheikGameInstance.ExecResetPlayerMatchmakingRank
	 */
	struct USheikGameInstance_ExecResetPlayerMatchmakingRank_Params
	{	};

	/**
	 * Function Sheik.SheikGameInstance.ExecResetLastKnownSeason
	 */
	struct USheikGameInstance_ExecResetLastKnownSeason_Params
	{	};

	/**
	 * Function Sheik.SheikGameInstance.ExecResetCloutProgressionLevel
	 */
	struct USheikGameInstance_ExecResetCloutProgressionLevel_Params
	{	};

	/**
	 * Function Sheik.SheikGameInstance.ExecResetBattlePassProgress
	 */
	struct USheikGameInstance_ExecResetBattlePassProgress_Params
	{	};

	/**
	 * Function Sheik.SheikGameInstance.ExecResetBattlePassMatchAccumulationData
	 */
	struct USheikGameInstance_ExecResetBattlePassMatchAccumulationData_Params
	{	};

	/**
	 * Function Sheik.SheikGameInstance.ExecResetAllProgression
	 */
	struct USheikGameInstance_ExecResetAllProgression_Params
	{	};

	/**
	 * Function Sheik.SheikGameInstance.ExecResetAllCozmoEntitlements
	 */
	struct USheikGameInstance_ExecResetAllCozmoEntitlements_Params
	{	};

	/**
	 * Function Sheik.SheikGameInstance.ExecRep_SetRerollAllowance
	 */
	struct USheikGameInstance_ExecRep_SetRerollAllowance_Params
	{
	public:
		int32_t                                                    Allowance;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikGameInstance.ExecRep_SetRepAllowance
	 */
	struct USheikGameInstance_ExecRep_SetRepAllowance_Params
	{
	public:
		int32_t                                                    Allowance;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikGameInstance.ExecRep_SetLastTimeRepAcquired
	 */
	struct USheikGameInstance_ExecRep_SetLastTimeRepAcquired_Params
	{
	public:
		int32_t                                                    MinutesBack;                                             // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikGameInstance.ExecRep_SetLastTimeGainedReroll
	 */
	struct USheikGameInstance_ExecRep_SetLastTimeGainedReroll_Params
	{
	public:
		int32_t                                                    MinutesBack;                                             // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikGameInstance.ExecRep_RerollDebug
	 */
	struct USheikGameInstance_ExecRep_RerollDebug_Params
	{	};

	/**
	 * Function Sheik.SheikGameInstance.ExecRep_PrintRerollAllowance
	 */
	struct USheikGameInstance_ExecRep_PrintRerollAllowance_Params
	{	};

	/**
	 * Function Sheik.SheikGameInstance.ExecRep_PrintRepNames
	 */
	struct USheikGameInstance_ExecRep_PrintRepNames_Params
	{	};

	/**
	 * Function Sheik.SheikGameInstance.ExecRep_PrintRepLedger
	 */
	struct USheikGameInstance_ExecRep_PrintRepLedger_Params
	{	};

	/**
	 * Function Sheik.SheikGameInstance.ExecRep_PrintRepHistory
	 */
	struct USheikGameInstance_ExecRep_PrintRepHistory_Params
	{	};

	/**
	 * Function Sheik.SheikGameInstance.ExecRep_PrintRepAllowance
	 */
	struct USheikGameInstance_ExecRep_PrintRepAllowance_Params
	{	};

	/**
	 * Function Sheik.SheikGameInstance.ExecRep_PrintLastTimeRerollAcquired
	 */
	struct USheikGameInstance_ExecRep_PrintLastTimeRerollAcquired_Params
	{	};

	/**
	 * Function Sheik.SheikGameInstance.ExecRep_PrintLastTimeRepAcquired
	 */
	struct USheikGameInstance_ExecRep_PrintLastTimeRepAcquired_Params
	{	};

	/**
	 * Function Sheik.SheikGameInstance.ExecRep_GetReps
	 */
	struct USheikGameInstance_ExecRep_GetReps_Params
	{	};

	/**
	 * Function Sheik.SheikGameInstance.ExecRep_GetNewRepByName
	 */
	struct USheikGameInstance_ExecRep_GetNewRepByName_Params
	{
	public:
		class FName                                                RepName;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikGameInstance.ExecRep_GetNewRandomRep
	 */
	struct USheikGameInstance_ExecRep_GetNewRandomRep_Params
	{	};

	/**
	 * Function Sheik.SheikGameInstance.ExecRep_CompleteRepByNameOnClient
	 */
	struct USheikGameInstance_ExecRep_CompleteRepByNameOnClient_Params
	{
	public:
		class FName                                                RepName;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikGameInstance.ExecRep_CompleteAllWeeklyRepsOnClient
	 */
	struct USheikGameInstance_ExecRep_CompleteAllWeeklyRepsOnClient_Params
	{	};

	/**
	 * Function Sheik.SheikGameInstance.ExecRep_CompleteAllRepsOnClient
	 */
	struct USheikGameInstance_ExecRep_CompleteAllRepsOnClient_Params
	{	};

	/**
	 * Function Sheik.SheikGameInstance.ExecRep_CompleteAllFTUE
	 */
	struct USheikGameInstance_ExecRep_CompleteAllFTUE_Params
	{	};

	/**
	 * Function Sheik.SheikGameInstance.ExecRep_CompleteAllDailyRepsOnClient
	 */
	struct USheikGameInstance_ExecRep_CompleteAllDailyRepsOnClient_Params
	{	};

	/**
	 * Function Sheik.SheikGameInstance.ExecRep_ClearAllRepLedgerData
	 */
	struct USheikGameInstance_ExecRep_ClearAllRepLedgerData_Params
	{	};

	/**
	 * Function Sheik.SheikGameInstance.ExecRep_ClaimRepByName
	 */
	struct USheikGameInstance_ExecRep_ClaimRepByName_Params
	{
	public:
		class FName                                                RepName;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikGameInstance.ExecRefreshAchievementsFromDiskAndPrint
	 */
	struct USheikGameInstance_ExecRefreshAchievementsFromDiskAndPrint_Params
	{	};

	/**
	 * Function Sheik.SheikGameInstance.ExecQueryAchievements
	 */
	struct USheikGameInstance_ExecQueryAchievements_Params
	{	};

	/**
	 * Function Sheik.SheikGameInstance.ExecQueryAchievementDescriptions
	 */
	struct USheikGameInstance_ExecQueryAchievementDescriptions_Params
	{	};

	/**
	 * Function Sheik.SheikGameInstance.ExecPurchaseBattlePassTiers
	 */
	struct USheikGameInstance_ExecPurchaseBattlePassTiers_Params
	{
	public:
		int32_t                                                    NumTiersToPurchase;                                      // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikGameInstance.ExecPurchaseBattlePass
	 */
	struct USheikGameInstance_ExecPurchaseBattlePass_Params
	{	};

	/**
	 * Function Sheik.SheikGameInstance.ExecPrintSeasons
	 */
	struct USheikGameInstance_ExecPrintSeasons_Params
	{	};

	/**
	 * Function Sheik.SheikGameInstance.ExecPrintNextCloutLevel
	 */
	struct USheikGameInstance_ExecPrintNextCloutLevel_Params
	{	};

	/**
	 * Function Sheik.SheikGameInstance.ExecPrintEndOfMatchTracking
	 */
	struct USheikGameInstance_ExecPrintEndOfMatchTracking_Params
	{	};

	/**
	 * Function Sheik.SheikGameInstance.ExecPrintCozmoId
	 */
	struct USheikGameInstance_ExecPrintCozmoId_Params
	{	};

	/**
	 * Function Sheik.SheikGameInstance.ExecPrintAchievementsFromCache
	 */
	struct USheikGameInstance_ExecPrintAchievementsFromCache_Params
	{	};

	/**
	 * Function Sheik.SheikGameInstance.ExecLogSkillValue
	 */
	struct USheikGameInstance_ExecLogSkillValue_Params
	{	};

	/**
	 * Function Sheik.SheikGameInstance.ExecLogPlayerData
	 */
	struct USheikGameInstance_ExecLogPlayerData_Params
	{	};

	/**
	 * Function Sheik.SheikGameInstance.ExecLogPartyMatchmakingTypes
	 */
	struct USheikGameInstance_ExecLogPartyMatchmakingTypes_Params
	{	};

	/**
	 * Function Sheik.SheikGameInstance.ExecLogLocalHotfixVersion
	 */
	struct USheikGameInstance_ExecLogLocalHotfixVersion_Params
	{	};

	/**
	 * Function Sheik.SheikGameInstance.ExecLoginClearAcceptedLegalDocs
	 */
	struct USheikGameInstance_ExecLoginClearAcceptedLegalDocs_Params
	{	};

	/**
	 * Function Sheik.SheikGameInstance.ExecLoadRepData
	 */
	struct USheikGameInstance_ExecLoadRepData_Params
	{	};

	/**
	 * Function Sheik.SheikGameInstance.ExecLeaveTeamParty
	 */
	struct USheikGameInstance_ExecLeaveTeamParty_Params
	{	};

	/**
	 * Function Sheik.SheikGameInstance.ExecForceStopFanAccrual
	 */
	struct USheikGameInstance_ExecForceStopFanAccrual_Params
	{	};

	/**
	 * Function Sheik.SheikGameInstance.ExecForceStartFanAccrual
	 */
	struct USheikGameInstance_ExecForceStartFanAccrual_Params
	{	};

	/**
	 * Function Sheik.SheikGameInstance.ExecForceBattlePassTierSelected
	 */
	struct USheikGameInstance_ExecForceBattlePassTierSelected_Params
	{
	public:
		int32_t                                                    TierId;                                                  // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikGameInstance.ExecFireRingStartsClosingDelegate
	 */
	struct USheikGameInstance_ExecFireRingStartsClosingDelegate_Params
	{	};

	/**
	 * Function Sheik.SheikGameInstance.ExecFireRingFinishedClosingDelegate
	 */
	struct USheikGameInstance_ExecFireRingFinishedClosingDelegate_Params
	{	};

	/**
	 * Function Sheik.SheikGameInstance.ExecFireFinalRingStateDelegate
	 */
	struct USheikGameInstance_ExecFireFinalRingStateDelegate_Params
	{	};

	/**
	 * Function Sheik.SheikGameInstance.ExecFindAndJoinTeamParty
	 */
	struct USheikGameInstance_ExecFindAndJoinTeamParty_Params
	{
	public:
		class FString                                              PartyGuid;                                               // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikGameInstance.ExecEnableLockerRoomAdvanceMode
	 */
	struct USheikGameInstance_ExecEnableLockerRoomAdvanceMode_Params
	{
	public:
		bool                                                       bEnabled;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikGameInstance.ExecDumpClientTrackedPlayerStats
	 */
	struct USheikGameInstance_ExecDumpClientTrackedPlayerStats_Params
	{	};

	/**
	 * Function Sheik.SheikGameInstance.ExecDownloadProgressionDataTitleStorage
	 */
	struct USheikGameInstance_ExecDownloadProgressionDataTitleStorage_Params
	{	};

	/**
	 * Function Sheik.SheikGameInstance.ExecDownloadPlayerData
	 */
	struct USheikGameInstance_ExecDownloadPlayerData_Params
	{	};

	/**
	 * Function Sheik.SheikGameInstance.ExecDownloadClientTrackedPlayerStats
	 */
	struct USheikGameInstance_ExecDownloadClientTrackedPlayerStats_Params
	{	};

	/**
	 * Function Sheik.SheikGameInstance.ExecDebugRevertAllHotfixes
	 */
	struct USheikGameInstance_ExecDebugRevertAllHotfixes_Params
	{	};

	/**
	 * Function Sheik.SheikGameInstance.ExecDebugRestrictedMatchLogic
	 */
	struct USheikGameInstance_ExecDebugRestrictedMatchLogic_Params
	{
	public:
		bool                                                       IsRestrictedMatch;                                       // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikGameInstance.ExecCreateTeamParty
	 */
	struct USheikGameInstance_ExecCreateTeamParty_Params
	{	};

	/**
	 * Function Sheik.SheikGameInstance.ExecClearRemoteData
	 */
	struct USheikGameInstance_ExecClearRemoteData_Params
	{	};

	/**
	 * Function Sheik.SheikGameInstance.ExecCheckWillCloutLevelup
	 */
	struct USheikGameInstance_ExecCheckWillCloutLevelup_Params
	{	};

	/**
	 * Function Sheik.SheikGameInstance.ExecBPCall
	 */
	struct USheikGameInstance_ExecBPCall_Params
	{
	public:
		class FString                                              CallName;                                                // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              Argument1;                                               // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              Argument2;                                               // 0x0020(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              Argument3;                                               // 0x0030(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              Argument4;                                               // 0x0040(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikGameInstance.ExecAllowCozmoLogging
	 */
	struct USheikGameInstance_ExecAllowCozmoLogging_Params
	{
	public:
		bool                                                       bAllowLogging;                                           // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikGameInstance.ExecAddVirtualCurrency
	 */
	struct USheikGameInstance_ExecAddVirtualCurrency_Params
	{
	public:
		int32_t                                                    Amount;                                                  // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikGameInstance.DevDisableAchievements
	 */
	struct USheikGameInstance_DevDisableAchievements_Params
	{	};

	/**
	 * Function Sheik.SheikGameInstance.DebugTriggerFanAnnouncementWithLevelUp
	 */
	struct USheikGameInstance_DebugTriggerFanAnnouncementWithLevelUp_Params
	{
	public:
		int32_t                                                    CurrentLevelId;                                          // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    OldFanCount;                                             // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    NumFansToAdd;                                            // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    FansNeededToLevelUp;                                     // 0x000C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    NumNewFanMail;                                           // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EReasonFansAwarded                                         ReasonFansAwarded;                                       // 0x0014(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikGameInstance.DebugTriggerFanAnnouncementNoLevelUp
	 */
	struct USheikGameInstance_DebugTriggerFanAnnouncementNoLevelUp_Params
	{
	public:
		int32_t                                                    CurrentLevelId;                                          // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    OldFanCount;                                             // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    NumFansToAdd;                                            // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    FansNeededToLevelUp;                                     // 0x000C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EReasonFansAwarded                                         ReasonFansAwarded;                                       // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikGameInstance.CreateLiveOpsPopup
	 */
	struct USheikGameInstance_CreateLiveOpsPopup_Params
	{	};

	/**
	 * Function Sheik.SheikGameInstance.CommitSavedSettingsChangesForEntryMap
	 */
	struct USheikGameInstance_CommitSavedSettingsChangesForEntryMap_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikGameInstance.ClearNetworkFailures
	 */
	struct USheikGameInstance_ClearNetworkFailures_Params
	{	};

	/**
	 * Function Sheik.SheikGameInstance.ClearAndResetSettingsCacheOnProfileSwitch
	 */
	struct USheikGameInstance_ClearAndResetSettingsCacheOnProfileSwitch_Params
	{	};

	/**
	 * Function Sheik.SheikGameInstance.ClaimRep
	 */
	struct USheikGameInstance_ClaimRep_Params
	{
	public:
		class FName                                                RepName;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikGameInstance.BroadcastHotfixSystemComplete
	 */
	struct USheikGameInstance_BroadcastHotfixSystemComplete_Params
	{
	public:
		int32_t                                                    ServerVersion;                                           // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikGameInstance.AttemptSaveAchievementProgress
	 */
	struct USheikGameInstance_AttemptSaveAchievementProgress_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikGameInstance.AttemptEditorWorldCozmoLogin
	 */
	struct USheikGameInstance_AttemptEditorWorldCozmoLogin_Params
	{
	public:
		class FScriptDelegate                                      OnCompleteDelegate;                                      // 0x0000(0x0010)  (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikGameModeCommon.SheikBotPlayMoveMontage
	 */
	struct ASheikGameModeCommon_SheikBotPlayMoveMontage_Params
	{
	public:
		class FString                                              MoveName;                                                // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikGameModeCommon.ResetGameMatchReporter
	 */
	struct ASheikGameModeCommon_ResetGameMatchReporter_Params
	{	};

	/**
	 * Function Sheik.SheikGameModeCommon.RequestPS5AccessToken
	 */
	struct ASheikGameModeCommon_RequestPS5AccessToken_Params
	{	};

	/**
	 * Function Sheik.SheikGameModeCommon.OnSinglePlayerSkillDownloaded
	 */
	struct ASheikGameModeCommon_OnSinglePlayerSkillDownloaded_Params
	{
	public:
		class ASheikPlayerStateCommon*                             PlayerState;                                             // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction Sheik.SheikGameModeCommon.OnGameFlowStateUpdated__DelegateSignature
	 */
	struct ASheikGameModeCommon_OnGameFlowStateUpdated__DelegateSignature_Params
	{
	public:
		EGameFlowState                                             PreviousGameFlowState;                                   // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EGameFlowState                                             CurrentGameFlowState;                                    // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikGameModeCommon.GetTotalPlayers
	 */
	struct ASheikGameModeCommon_GetTotalPlayers_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikGameModeCommon.GetGameplaySettings
	 */
	struct ASheikGameModeCommon_GetGameplaySettings_Params
	{
	public:
		class UCommonGameplaySettingsData*                         ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikGameModeCommon.GetAIGameInfo
	 */
	struct ASheikGameModeCommon_GetAIGameInfo_Params
	{
	public:
		class USheikAIGameInfo*                                    ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikGameModeCommon.CreateGameMatch
	 */
	struct ASheikGameModeCommon_CreateGameMatch_Params
	{	};

	/**
	 * Function Sheik.SheikGameModeCommon.BuildInGameRoster
	 */
	struct ASheikGameModeCommon_BuildInGameRoster_Params
	{	};

	/**
	 * Function Sheik.SheikGameModeBR.SetPlaygroundTimeLeft
	 */
	struct ASheikGameModeBR_SetPlaygroundTimeLeft_Params
	{
	public:
		float                                                      TimeLeft;                                                // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikGameModeBR.IsActorInRing
	 */
	struct ASheikGameModeBR_IsActorInRing_Params
	{
	public:
		class AActor*                                              InActor;                                                 // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      PaddedRingRadius;                                        // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x000C(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikGameModeBR.DisplayFromTwoPlayerNames
	 */
	struct ASheikGameModeBR_DisplayFromTwoPlayerNames_Params
	{
	public:
		class FString                                              FirstPlayerName;                                         // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              SecondPlayerName;                                        // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikGameModeBR.DisplayFromPlayerName
	 */
	struct ASheikGameModeBR_DisplayFromPlayerName_Params
	{
	public:
		class FString                                              PlayerName;                                              // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikGameModesScreen.OnExitScreen
	 */
	struct USheikGameModesScreen_OnExitScreen_Params
	{	};

	/**
	 * Function Sheik.SheikGameMonitor.EnterRequestedState
	 */
	struct ASheikGameMonitor_EnterRequestedState_Params
	{	};

	/**
	 * Function Sheik.SheikGameMonitor.EnterInactiveState
	 */
	struct ASheikGameMonitor_EnterInactiveState_Params
	{	};

	/**
	 * Function Sheik.SheikGameMonitor.EnterDisplayState
	 */
	struct ASheikGameMonitor_EnterDisplayState_Params
	{
	public:
		EIGMonitorLayout                                           MonitorLayout;                                           // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_YB4B[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class ASheikGameMonitorManager*                            Manager;                                                 // 0x0008(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikGameMonitorManager.SetupNextCapture
	 */
	struct ASheikGameMonitorManager_SetupNextCapture_Params
	{	};

	/**
	 * Function Sheik.SheikGameMonitorManager.SetupCaptureActors
	 */
	struct ASheikGameMonitorManager_SetupCaptureActors_Params
	{	};

	/**
	 * Function Sheik.SheikGameMonitorManager.ResolveNextMeshMerge
	 */
	struct ASheikGameMonitorManager_ResolveNextMeshMerge_Params
	{	};

	/**
	 * Function Sheik.SheikGameMonitorManager.ResolveCaptureActors
	 */
	struct ASheikGameMonitorManager_ResolveCaptureActors_Params
	{	};

	/**
	 * Function Sheik.SheikGameMonitorManager.ResolveAssetLoads
	 */
	struct ASheikGameMonitorManager_ResolveAssetLoads_Params
	{	};

	/**
	 * Function Sheik.SheikGameMonitorManager.ResetMonitorManagerState
	 */
	struct ASheikGameMonitorManager_ResetMonitorManagerState_Params
	{	};

	/**
	 * Function Sheik.SheikGameMonitorManager.OnTitleCardAssetsLoaded
	 */
	struct ASheikGameMonitorManager_OnTitleCardAssetsLoaded_Params
	{	};

	/**
	 * Function Sheik.SheikGameMonitorManager.OnMinTimerExpired
	 */
	struct ASheikGameMonitorManager_OnMinTimerExpired_Params
	{	};

	/**
	 * Function Sheik.SheikGameMonitorManager.OnMeshMergeReady
	 */
	struct ASheikGameMonitorManager_OnMeshMergeReady_Params
	{	};

	/**
	 * Function Sheik.SheikGameMonitorManager.OnMaxTimeExpired
	 */
	struct ASheikGameMonitorManager_OnMaxTimeExpired_Params
	{	};

	/**
	 * Function Sheik.SheikGameMonitorManager.OnCaptureReady
	 */
	struct ASheikGameMonitorManager_OnCaptureReady_Params
	{
	public:
		int32_t                                                    CaptureIndex;                                            // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikGameMonitorManager.NetMulticastIncomingEvent
	 */
	struct ASheikGameMonitorManager_NetMulticastIncomingEvent_Params
	{
	public:
		struct FMonitorEvent                                       IncomingEvent;                                           // 0x0000(0x0058)  (Parm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikGameMonitorManager.GetSecondPlayerMaterialInstance
	 */
	struct ASheikGameMonitorManager_GetSecondPlayerMaterialInstance_Params
	{
	public:
		class UMaterialInstanceDynamic*                            ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikGameMonitorManager.GetFirstPlayerMaterialInstance
	 */
	struct ASheikGameMonitorManager_GetFirstPlayerMaterialInstance_Params
	{
	public:
		class UMaterialInstanceDynamic*                            ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikGameMonitorManager.GatherAssetsForCapture
	 */
	struct ASheikGameMonitorManager_GatherAssetsForCapture_Params
	{
	public:
		class APlayerState*                                        PlayerState;                                             // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    CaptureIndex;                                            // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikGameMonitorManager.EnteringRequestedState
	 */
	struct ASheikGameMonitorManager_EnteringRequestedState_Params
	{	};

	/**
	 * Function Sheik.SheikGameMonitorManager.EnteringInactiveState
	 */
	struct ASheikGameMonitorManager_EnteringInactiveState_Params
	{	};

	/**
	 * Function Sheik.SheikGameMonitorManager.EnteringDisplayState
	 */
	struct ASheikGameMonitorManager_EnteringDisplayState_Params
	{	};

	/**
	 * Function Sheik.SheikGameMonitorManager.AddAssetsToLoadForPlayerState
	 */
	struct ASheikGameMonitorManager_AddAssetsToLoadForPlayerState_Params
	{
	public:
		class APlayerState*                                        PlayerState;                                             // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<struct FSoftObjectPath>                             InOutAssetsToLoad;                                       // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikGameStateCommon.ReportInputSourceChanged
	 */
	struct ASheikGameStateCommon_ReportInputSourceChanged_Params
	{
	public:
		struct FUserControllerData                                 OldInputSource;                                          // 0x0000(0x0008)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
		struct FUserControllerData                                 NewInputSource;                                          // 0x0008(0x0008)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction Sheik.SheikGameStateCommon.OnServerHotfixVersionChanged__DelegateSignature
	 */
	struct ASheikGameStateCommon_OnServerHotfixVersionChanged__DelegateSignature_Params
	{
	public:
		int32_t                                                    ServerVersion;                                           // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikGameStateCommon.OnRep_ServerHotfixVersion
	 */
	struct ASheikGameStateCommon_OnRep_ServerHotfixVersion_Params
	{	};

	/**
	 * Function Sheik.SheikGameStateCommon.OnRep_NumTeamsAliveChanged
	 */
	struct ASheikGameStateCommon_OnRep_NumTeamsAliveChanged_Params
	{	};

	/**
	 * Function Sheik.SheikGameStateCommon.OnRep_NumPlayersAliveChanged
	 */
	struct ASheikGameStateCommon_OnRep_NumPlayersAliveChanged_Params
	{	};

	/**
	 * Function Sheik.SheikGameStateCommon.OnRep_CurrentTeamMode
	 */
	struct ASheikGameStateCommon_OnRep_CurrentTeamMode_Params
	{	};

	/**
	 * Function Sheik.SheikGameStateCommon.OnRep_CurrentGameModeType
	 */
	struct ASheikGameStateCommon_OnRep_CurrentGameModeType_Params
	{	};

	/**
	 * Function Sheik.SheikGameStateCommon.OnRep_CurrentGameFlowChanged
	 */
	struct ASheikGameStateCommon_OnRep_CurrentGameFlowChanged_Params
	{
	public:
		struct FGameFlowData                                       LastGameFlowData;                                        // 0x0000(0x0028)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction Sheik.SheikGameStateCommon.OnNumberOfPlayersChanged__DelegateSignature
	 */
	struct ASheikGameStateCommon_OnNumberOfPlayersChanged__DelegateSignature_Params
	{
	public:
		int32_t                                                    TotalPlayers;                                            // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       HasPlayerBeenAdded;                                      // 0x0004(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikGameStateCommon.GetGameplaySettings
	 */
	struct ASheikGameStateCommon_GetGameplaySettings_Params
	{
	public:
		class UCommonGameplaySettingsData*                         ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikGameStateCommon.Client_OnNewCratesIncoming
	 */
	struct ASheikGameStateCommon_Client_OnNewCratesIncoming_Params
	{	};

	/**
	 * Function Sheik.SheikGameStateCommon.BroadcastNumberOfPlayersChanged
	 */
	struct ASheikGameStateCommon_BroadcastNumberOfPlayersChanged_Params
	{
	public:
		int32_t                                                    CurrentTotalPlayers;                                     // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bHasPlayerBeenAdded;                                     // 0x0004(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikGameStateCommon.AutomaticMatchmakingQuitTimerReached
	 */
	struct ASheikGameStateCommon_AutomaticMatchmakingQuitTimerReached_Params
	{	};

	/**
	 * Function Sheik.SheikGameStateBR.OnRep_SuddenDeathRingShrinkCountChanged
	 */
	struct ASheikGameStateBR_OnRep_SuddenDeathRingShrinkCountChanged_Params
	{	};

	/**
	 * Function Sheik.SheikGameStateBR.OnRep_OnlyUseDemoRings
	 */
	struct ASheikGameStateBR_OnRep_OnlyUseDemoRings_Params
	{	};

	/**
	 * Function Sheik.SheikGameStateBR.OnRep_IsFinalRingStateChanged
	 */
	struct ASheikGameStateBR_OnRep_IsFinalRingStateChanged_Params
	{	};

	/**
	 * Function Sheik.SheikGameStateBR.OnEventStartHandler
	 */
	struct ASheikGameStateBR_OnEventStartHandler_Params
	{
	public:
		int32_t                                                    EventTime;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bIsParticipating;                                        // 0x0004(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikGameStateBR.OnEventCountdownStartHandler
	 */
	struct ASheikGameStateBR_OnEventCountdownStartHandler_Params
	{
	public:
		int32_t                                                    EventTime;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikGameStateBR.GetMatchTimerInfo
	 */
	struct ASheikGameStateBR_GetMatchTimerInfo_Params
	{
	public:
		class ASheikCharacter*                                     InCharacter;                                             // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FSheikMatchTimerHUDInfo                             ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikGameStateBR.Client_OnBargeBanterEvent
	 */
	struct ASheikGameStateBR_Client_OnBargeBanterEvent_Params
	{	};

	/**
	 * Function Sheik.SheikGenericPopup.SetHeaderText
	 */
	struct USheikGenericPopup_SetHeaderText_Params
	{
	public:
		class FText                                                HeaderText;                                              // 0x0000(0x0018)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikGenericPopup.SetErrorCodeText
	 */
	struct USheikGenericPopup_SetErrorCodeText_Params
	{
	public:
		class FText                                                ErrorCodeText;                                           // 0x0000(0x0018)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikGenericPopup.SetDimBackground
	 */
	struct USheikGenericPopup_SetDimBackground_Params
	{
	public:
		bool                                                       DimBackground;                                           // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikGenericPopup.SetBodyText
	 */
	struct USheikGenericPopup_SetBodyText_Params
	{
	public:
		class FText                                                BodyText;                                                // 0x0000(0x0018)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		bool                                                       bUseDefaultFormatting;                                   // 0x0018(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikGenericPopup.AddLegend
	 */
	struct USheikGenericPopup_AddLegend_Params
	{
	public:
		TArray<struct FLegendData>                                 LegendPrompts;                                           // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikHUD.ToggleDebugMenu
	 */
	struct ASheikHUD_ToggleDebugMenu_Params
	{	};

	/**
	 * Function Sheik.SheikHUD.StartMinigame
	 */
	struct ASheikHUD_StartMinigame_Params
	{
	public:
		struct FSheikMinigameInfo                                  MinigameInfo;                                            // 0x0000(0x0030)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikHUD.ShouldShowFullMap
	 */
	struct ASheikHUD_ShouldShowFullMap_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikHUD.ShouldShowDirectLine
	 */
	struct ASheikHUD_ShouldShowDirectLine_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikHUD.SetPlayerCharacterPawnToFollow
	 */
	struct ASheikHUD_SetPlayerCharacterPawnToFollow_Params
	{
	public:
		class ASheikCharacter*                                     SheikCharacter;                                          // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikHUD.SetAllowCursorInput
	 */
	struct ASheikHUD_SetAllowCursorInput_Params
	{
	public:
		bool                                                       bUseMenuInput;                                           // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikHUD.SendWaypointInfo
	 */
	struct ASheikHUD_SendWaypointInfo_Params
	{	};

	/**
	 * Function Sheik.SheikHUD.ResetAllowCheckCannonLaunch
	 */
	struct ASheikHUD_ResetAllowCheckCannonLaunch_Params
	{	};

	/**
	 * DelegateFunction Sheik.SheikHUD.OnUpdateWaypoints__DelegateSignature
	 */
	struct ASheikHUD_OnUpdateWaypoints__DelegateSignature_Params
	{
	public:
		TArray<struct FSheikWaypointInfo>                          Waypoints;                                               // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction Sheik.SheikHUD.OnUpdateShowPlayZoneDirectPath__DelegateSignature
	 */
	struct ASheikHUD_OnUpdateShowPlayZoneDirectPath__DelegateSignature_Params
	{	};

	/**
	 * DelegateFunction Sheik.SheikHUD.OnUpdateShowingFullMap__DelegateSignature
	 */
	struct ASheikHUD_OnUpdateShowingFullMap__DelegateSignature_Params
	{	};

	/**
	 * DelegateFunction Sheik.SheikHUD.OnUpdateOwningPlayerInfo__DelegateSignature
	 */
	struct ASheikHUD_OnUpdateOwningPlayerInfo__DelegateSignature_Params
	{
	public:
		struct FSheikOwningPlayerInfo                              OwningPlayerInfo;                                        // 0x0000(0x0018)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction Sheik.SheikHUD.OnUpdateMapLookupInfo__DelegateSignature
	 */
	struct ASheikHUD_OnUpdateMapLookupInfo__DelegateSignature_Params
	{
	public:
		struct FSheikMapLookupInfo                                 MapLookupInfo;                                           // 0x0000(0x0030)  (Parm, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction Sheik.SheikHUD.OnUpdateLaunchCone__DelegateSignature
	 */
	struct ASheikHUD_OnUpdateLaunchCone__DelegateSignature_Params
	{
	public:
		struct FSheikCannonConeData                                CannonConeLaunchData;                                    // 0x0000(0x001C)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction Sheik.SheikHUD.OnTeammateGameplayEvent__DelegateSignature
	 */
	struct ASheikHUD_OnTeammateGameplayEvent__DelegateSignature_Params
	{
	public:
		class AIGPlayerState*                                      TeammateState;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bValue;                                                  // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction Sheik.SheikHUD.OnTeammateCannonLanded__DelegateSignature
	 */
	struct ASheikHUD_OnTeammateCannonLanded__DelegateSignature_Params
	{
	public:
		class AIGPlayerState*                                      TeammateState;                                           // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction Sheik.SheikHUD.OnCannonFired__DelegateSignature
	 */
	struct ASheikHUD_OnCannonFired__DelegateSignature_Params
	{	};

	/**
	 * DelegateFunction Sheik.SheikHUD.OnAllowCursorInputChanged__DelegateSignature
	 */
	struct ASheikHUD_OnAllowCursorInputChanged__DelegateSignature_Params
	{
	public:
		bool                                                       UseMenuInput;                                            // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikHUD.LoadMapLookupInfo
	 */
	struct ASheikHUD_LoadMapLookupInfo_Params
	{	};

	/**
	 * Function Sheik.SheikHUD.IsDisplayingScreenOfType
	 */
	struct ASheikHUD_IsDisplayingScreenOfType_Params
	{
	public:
		unsigned char                                              UnknownData_6DQF[0x28];                                  // 0x0000(0x0028) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		bool                                                       ReturnValue;                                             // 0x0028(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikHUD.HideDebugMenu
	 */
	struct ASheikHUD_HideDebugMenu_Params
	{	};

	/**
	 * Function Sheik.SheikHUD.HasFoundMapLookupInfo
	 */
	struct ASheikHUD_HasFoundMapLookupInfo_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikHUD.HandleOnTeammateInCombatAlert
	 */
	struct ASheikHUD_HandleOnTeammateInCombatAlert_Params
	{
	public:
		class AIGPlayerState*                                      TeammateState;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bIsTeammateInCombat;                                     // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikHUD.HandleOnTeammateHPAlert
	 */
	struct ASheikHUD_HandleOnTeammateHPAlert_Params
	{
	public:
		class AIGPlayerState*                                      TeammateState;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bIsTeammateLowHealth;                                    // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikHUD.HandleOnTeammateCannonLanded
	 */
	struct ASheikHUD_HandleOnTeammateCannonLanded_Params
	{
	public:
		class AIGPlayerState*                                      TeammateState;                                           // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikHUD.HandleOnPingExpired
	 */
	struct ASheikHUD_HandleOnPingExpired_Params
	{
	public:
		int32_t                                                    PartyMemberID;                                           // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikHUD.HandleOnPingAtLocation
	 */
	struct ASheikHUD_HandleOnPingAtLocation_Params
	{
	public:
		EIGPingType                                                PingType;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_3OFK[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    PartyMemberID;                                           // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             PingLocation;                                            // 0x0008(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             PingNormal;                                              // 0x0014(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikHUD.HandleOnPinEvent
	 */
	struct ASheikHUD_HandleOnPinEvent_Params
	{
	public:
		ESheikPinEventType                                         EventType;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_3XTT[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class ASheikCharacter*                                     Attacker;                                                // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class ASheikCharacter*                                     Victim;                                                  // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikHUD.HandleOnKnockOutOccured
	 */
	struct ASheikHUD_HandleOnKnockOutOccured_Params
	{
	public:
		struct FIGKnockOutData                                     KnockOutData;                                            // 0x0000(0x0030)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikHUD.HandleOnGameFlowStateChanged
	 */
	struct ASheikHUD_HandleOnGameFlowStateChanged_Params
	{
	public:
		EGameFlowState                                             NewState;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikHUD.HandleOnClientFiredCannon
	 */
	struct ASheikHUD_HandleOnClientFiredCannon_Params
	{	};

	/**
	 * Function Sheik.SheikHUD.GetTexture2DFromPayload
	 */
	struct ASheikHUD_GetTexture2DFromPayload_Params
	{
	public:
		struct FSheikPayload                                       Payload;                                                 // 0x0000(0x01E0)  (Parm, NativeAccessSpecifierPublic)
		class FString                                              KeyName;                                                 // 0x01E0(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       OutSuccessful;                                           // 0x01F0(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_1QDU[0x7];                                   // 0x01F1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Sheik.SheikHUD.GetTextFromPayload
	 */
	struct ASheikHUD_GetTextFromPayload_Params
	{
	public:
		struct FSheikPayload                                       Payload;                                                 // 0x0000(0x01E0)  (Parm, NativeAccessSpecifierPublic)
		class FString                                              KeyName;                                                 // 0x01E0(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       OutSuccessful;                                           // 0x01F0(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_KKZI[0x7];                                   // 0x01F1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FText                                                ReturnValue;                                             // 0x01F8(0x0018)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikHUD.GetStringFromPayload
	 */
	struct ASheikHUD_GetStringFromPayload_Params
	{
	public:
		struct FSheikPayload                                       Payload;                                                 // 0x0000(0x01E0)  (Parm, NativeAccessSpecifierPublic)
		class FString                                              KeyName;                                                 // 0x01E0(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       OutSuccessful;                                           // 0x01F0(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_L4PF[0x7];                                   // 0x01F1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              ReturnValue;                                             // 0x01F8(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikHUD.GetPlayZoneDirectPathLineDimensions
	 */
	struct ASheikHUD_GetPlayZoneDirectPathLineDimensions_Params
	{
	public:
		struct FVector2D                                           MapDimensions;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       IsFullMap;                                               // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       Successful;                                              // 0x0009(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_4BHB[0x2];                                   // 0x000A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FVector                                             UseThisPlayerLocation;                                   // 0x000C(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FSheikDirectLineToPlayZoneData                      ReturnValue;                                             // 0x0018(0x0028)  (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikHUD.GetMapLookupInfo
	 */
	struct ASheikHUD_GetMapLookupInfo_Params
	{
	public:
		struct FSheikMapLookupInfo                                 ReturnValue;                                             // 0x0000(0x0030)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikHUD.GetIntFromPayload
	 */
	struct ASheikHUD_GetIntFromPayload_Params
	{
	public:
		struct FSheikPayload                                       Payload;                                                 // 0x0000(0x01E0)  (Parm, NativeAccessSpecifierPublic)
		class FString                                              KeyName;                                                 // 0x01E0(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       OutSuccessful;                                           // 0x01F0(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_KC8C[0x3];                                   // 0x01F1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ReturnValue;                                             // 0x01F4(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikHUD.GetFloatFromPayload
	 */
	struct ASheikHUD_GetFloatFromPayload_Params
	{
	public:
		struct FSheikPayload                                       Payload;                                                 // 0x0000(0x01E0)  (Parm, NativeAccessSpecifierPublic)
		class FString                                              KeyName;                                                 // 0x01E0(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       OutSuccessful;                                           // 0x01F0(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_7OBM[0x3];                                   // 0x01F1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      ReturnValue;                                             // 0x01F4(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikHUD.GetDimensionsOfRotatedSquareOverlapInMinimapSection
	 */
	struct ASheikHUD_GetDimensionsOfRotatedSquareOverlapInMinimapSection_Params
	{
	public:
		float                                                      WidthOfMinimapSide;                                      // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      HeightOfMinimapSide;                                     // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector2D                                           CenterOfSquare;                                          // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      SquareSideLength;                                        // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      SquareRotationInDegrees;                                 // 0x0014(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_YE3X[0x8];                                   // 0x0018(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FSheikMinimapOverlapInfo                            ReturnValue;                                             // 0x0020(0x0050)  (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikHUD.GetDimensionsOfCircleOverlapInMinimapSection
	 */
	struct ASheikHUD_GetDimensionsOfCircleOverlapInMinimapSection_Params
	{
	public:
		float                                                      WidthOfMinimapSide;                                      // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      HeightOfMinimapSide;                                     // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector2D                                           CenterOfCircle;                                          // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      CircleRadius;                                            // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_BDNE[0xC];                                   // 0x0014(0x000C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FSheikMinimapOverlapInfo                            ReturnValue;                                             // 0x0020(0x0050)  (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikHUD.GetCurrentNetSimulationSettings
	 */
	struct ASheikHUD_GetCurrentNetSimulationSettings_Params
	{
	public:
		struct FCurrentNetSimulationSettings                       ReturnValue;                                             // 0x0000(0x0014)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikHUD.GetCalculatedDirectLineData
	 */
	struct ASheikHUD_GetCalculatedDirectLineData_Params
	{
	public:
		struct FVector2D                                           StartPositionInCanvasPanel;                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector2D                                           EndPositionInCanvasPanel;                                // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector2D                                           TopLeftCornerOfPanel;                                    // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector2D                                           BottomRightCornerOfPanel;                                // 0x0018(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FSheikDirectLineCalculatedData                      ReturnValue;                                             // 0x0020(0x0010)  (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikHUD.GetBooleanFromPayload
	 */
	struct ASheikHUD_GetBooleanFromPayload_Params
	{
	public:
		struct FSheikPayload                                       Payload;                                                 // 0x0000(0x01E0)  (Parm, NativeAccessSpecifierPublic)
		class FString                                              KeyName;                                                 // 0x01E0(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       OutSuccessful;                                           // 0x01F0(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x01F1(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikHUD.GetAngleBetweenTwoPoints
	 */
	struct ASheikHUD_GetAngleBetweenTwoPoints_Params
	{
	public:
		struct FVector2D                                           PointA;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector2D                                           PointB;                                                  // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      ReturnValue;                                             // 0x0010(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikHUD.EndMinigame
	 */
	struct ASheikHUD_EndMinigame_Params
	{	};

	/**
	 * Function Sheik.SheikHUD.EnableGlobalInvalidation
	 */
	struct ASheikHUD_EnableGlobalInvalidation_Params
	{
	public:
		bool                                                       bEnabled;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikHUD.DebugStartMinigame
	 */
	struct ASheikHUD_DebugStartMinigame_Params
	{
	public:
		float                                                      StartingPosition;                                        // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      TargetPosition;                                          // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      TargetSize;                                              // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      GradientSize;                                            // 0x000C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      Speed;                                                   // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       BounceBackOnHit;                                         // 0x0014(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_QG5K[0x3];                                   // 0x0015(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    NumOfBounces;                                            // 0x0018(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikHUD.DebugOnMinigameResults
	 */
	struct ASheikHUD_DebugOnMinigameResults_Params
	{
	public:
		struct FSheikMinigameResults                               MinigameResults;                                         // 0x0000(0x0020)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikHUD.DebugEndMinigame
	 */
	struct ASheikHUD_DebugEndMinigame_Params
	{	};

	/**
	 * Function Sheik.SheikHUD.DebugContinueMinigame
	 */
	struct ASheikHUD_DebugContinueMinigame_Params
	{
	public:
		bool                                                       ResetCursorPosition;                                     // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikHUD.ContinueMinigame
	 */
	struct ASheikHUD_ContinueMinigame_Params
	{
	public:
		bool                                                       ResetCursorPosition;                                     // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikHUD.AddTexture2DToPayload
	 */
	struct ASheikHUD_AddTexture2DToPayload_Params
	{
	public:
		struct FSheikPayload                                       Payload;                                                 // 0x0000(0x01E0)  (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		class FString                                              KeyName;                                                 // 0x01E0(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikHUD.AddTextToPayload
	 */
	struct ASheikHUD_AddTextToPayload_Params
	{
	public:
		struct FSheikPayload                                       Payload;                                                 // 0x0000(0x01E0)  (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		class FString                                              KeyName;                                                 // 0x01E0(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FText                                                Value;                                                   // 0x01F0(0x0018)  (Parm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikHUD.AddStringToPayload
	 */
	struct ASheikHUD_AddStringToPayload_Params
	{
	public:
		struct FSheikPayload                                       Payload;                                                 // 0x0000(0x01E0)  (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		class FString                                              KeyName;                                                 // 0x01E0(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              Value;                                                   // 0x01F0(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikHUD.AddIntToPayload
	 */
	struct ASheikHUD_AddIntToPayload_Params
	{
	public:
		struct FSheikPayload                                       Payload;                                                 // 0x0000(0x01E0)  (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		class FString                                              KeyName;                                                 // 0x01E0(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    Value;                                                   // 0x01F0(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikHUD.AddFloatToPayload
	 */
	struct ASheikHUD_AddFloatToPayload_Params
	{
	public:
		struct FSheikPayload                                       Payload;                                                 // 0x0000(0x01E0)  (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		class FString                                              KeyName;                                                 // 0x01E0(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      Value;                                                   // 0x01F0(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikHUD.AddBooleanToPayload
	 */
	struct ASheikHUD_AddBooleanToPayload_Params
	{
	public:
		struct FSheikPayload                                       Payload;                                                 // 0x0000(0x01E0)  (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		class FString                                              KeyName;                                                 // 0x01E0(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       Value;                                                   // 0x01F0(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikInputPrompts.HandleOnUpdatedInputPrompts
	 */
	struct USheikInputPrompts_HandleOnUpdatedInputPrompts_Params
	{
	public:
		struct FSheikInputPromptContainerData                      PromptContainerData;                                     // 0x0000(0x0080)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikInputPrompts.GetTextForGenericPrompt
	 */
	struct USheikInputPrompts_GetTextForGenericPrompt_Params
	{
	public:
		ESheikGenericInputPrompt                                   InputPrompt;                                             // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_0TX3[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FText                                                ReturnValue;                                             // 0x0008(0x0018)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikInputPromptsCallbacks.UpdatePromptDataWithHeldItemPrompts
	 */
	struct USheikInputPromptsCallbacks_UpdatePromptDataWithHeldItemPrompts_Params
	{
	public:
		class ASheikCharacter*                                     PlayerCharacter;                                         // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FSheikInputPromptContainerData                      ContainerData;                                           // 0x0008(0x0080)  (Parm, OutParm, NativeAccessSpecifierPublic)
		bool                                                       UseInAirPrompts;                                         // 0x0088(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       IgnoreTopPrompt;                                         // 0x0089(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       IgnoreConsume;                                           // 0x008A(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x008B(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikInputPromptsCallbacks.UpdateInputPrompts
	 */
	struct USheikInputPromptsCallbacks_UpdateInputPrompts_Params
	{	};

	/**
	 * Function Sheik.SheikInputPromptsCallbacks.SubscribeToCharacterDelegates
	 */
	struct USheikInputPromptsCallbacks_SubscribeToCharacterDelegates_Params
	{
	public:
		class ASheikCharacter*                                     NewCharacter;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction Sheik.SheikInputPromptsCallbacks.OnUpdatedInputPrompts__DelegateSignature
	 */
	struct USheikInputPromptsCallbacks_OnUpdatedInputPrompts__DelegateSignature_Params
	{
	public:
		struct FSheikInputPromptContainerData                      PromptContainerData;                                     // 0x0000(0x0080)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikInputPromptsCallbacks.IsInMovesetMontage
	 */
	struct USheikInputPromptsCallbacks_IsInMovesetMontage_Params
	{
	public:
		ESheikMovesetPromptType                                    MovesetPromptType;                                       // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikInputPromptsCallbacks.IsInCombo
	 */
	struct USheikInputPromptsCallbacks_IsInCombo_Params
	{
	public:
		class UIGMovesetComponent*                                 MovesetComponent;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikInputPromptsCallbacks.HandleShowComboPromptTimerEvent
	 */
	struct USheikInputPromptsCallbacks_HandleShowComboPromptTimerEvent_Params
	{	};

	/**
	 * Function Sheik.SheikInputPromptsCallbacks.HandleOnWallGrabPromptChanged
	 */
	struct USheikInputPromptsCallbacks_HandleOnWallGrabPromptChanged_Params
	{
	public:
		struct FVector                                             SurfaceLoc;                                              // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikInputPromptsCallbacks.HandleOnMovesetDataUpdated
	 */
	struct USheikInputPromptsCallbacks_HandleOnMovesetDataUpdated_Params
	{	};

	/**
	 * Function Sheik.SheikInputPromptsCallbacks.HandleOnMovementModeChanged
	 */
	struct USheikInputPromptsCallbacks_HandleOnMovementModeChanged_Params
	{
	public:
		class ACharacter*                                          Character;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EMovementMode                                              PrevMovementMode;                                        // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              PreviousCustomMode;                                      // 0x0009(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikInputPromptsCallbacks.HandleOnMontageStarted
	 */
	struct USheikInputPromptsCallbacks_HandleOnMontageStarted_Params
	{
	public:
		class UAnimMontage*                                        Montage;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikInputPromptsCallbacks.HandleOnMontageChanged
	 */
	struct USheikInputPromptsCallbacks_HandleOnMontageChanged_Params
	{
	public:
		class UAnimMontage*                                        Montage;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bInteruppted;                                            // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikInputPromptsCallbacks.HandleOnLaunchControlUpdated
	 */
	struct USheikInputPromptsCallbacks_HandleOnLaunchControlUpdated_Params
	{
	public:
		bool                                                       bLaunchControl;                                          // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikInputPromptsCallbacks.HandleOnInteractVolumeExited
	 */
	struct USheikInputPromptsCallbacks_HandleOnInteractVolumeExited_Params
	{
	public:
		class UIGInteractableBoxComponent*                         InteractableBoxComponent;                                // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikInputPromptsCallbacks.HandleOnInteractVolumeEntered
	 */
	struct USheikInputPromptsCallbacks_HandleOnInteractVolumeEntered_Params
	{
	public:
		class UIGInteractableBoxComponent*                         InteractableBoxComponent;                                // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikInputPromptsCallbacks.HandleOnInteractableStatusChanged
	 */
	struct USheikInputPromptsCallbacks_HandleOnInteractableStatusChanged_Params
	{
	public:
		class AIGCharacter*                                        InteractableActor;                                       // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikInputPromptsCallbacks.HandleOnFreefallStart
	 */
	struct USheikInputPromptsCallbacks_HandleOnFreefallStart_Params
	{	};

	/**
	 * Function Sheik.SheikInputPromptsCallbacks.HandleOnClientIsAimingCannonChanged
	 */
	struct USheikInputPromptsCallbacks_HandleOnClientIsAimingCannonChanged_Params
	{
	public:
		bool                                                       IsAimingCannon;                                          // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikInputPromptsCallbacks.HandleOnClientFiredCannon
	 */
	struct USheikInputPromptsCallbacks_HandleOnClientFiredCannon_Params
	{	};

	/**
	 * Function Sheik.SheikInputPromptsCallbacks.HandleOnCharacterPawnChanged
	 */
	struct USheikInputPromptsCallbacks_HandleOnCharacterPawnChanged_Params
	{
	public:
		class ASheikCharacter*                                     NewCharacter;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikInputPromptsCallbacks.HandleOnCharacterDamaged
	 */
	struct USheikInputPromptsCallbacks_HandleOnCharacterDamaged_Params
	{
	public:
		struct FIGInstanceHitData                                  HitData;                                                 // 0x0000(0x0048)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikInputPromptsCallbacks.HandleOnCannonLaunchPhase2Start
	 */
	struct USheikInputPromptsCallbacks_HandleOnCannonLaunchPhase2Start_Params
	{	};

	/**
	 * Function Sheik.SheikInputPromptsCallbacks.HandleOnCannonLaunchCanEnterFreeFall
	 */
	struct USheikInputPromptsCallbacks_HandleOnCannonLaunchCanEnterFreeFall_Params
	{	};

	/**
	 * Function Sheik.SheikInputPromptsCallbacks.BindEventsToLocalPlayerController
	 */
	struct USheikInputPromptsCallbacks_BindEventsToLocalPlayerController_Params
	{	};

	/**
	 * Function Sheik.SheikInputPromptsCallbacks.AreInputPromptsEmpty
	 */
	struct USheikInputPromptsCallbacks_AreInputPromptsEmpty_Params
	{
	public:
		struct FSheikInputPromptContainerData                      PromptContainerData;                                     // 0x0000(0x0080)  (Parm, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0080(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikKeybindingManager.SaveKeyBindings
	 */
	struct USheikKeybindingManager_SaveKeyBindings_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikKeybindingManager.ResetKeyboardBindings
	 */
	struct USheikKeybindingManager_ResetKeyboardBindings_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikKeybindingManager.ResetKeyBindings
	 */
	struct USheikKeybindingManager_ResetKeyBindings_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikKeybindingManager.ResetGamepadBindings
	 */
	struct USheikKeybindingManager_ResetGamepadBindings_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikKeybindingManager.RebindActionForKeyboard
	 */
	struct USheikKeybindingManager_RebindActionForKeyboard_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                ActionName;                                              // 0x0008(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FKey                                                OldKey;                                                  // 0x0010(0x0018)  (ConstParm, Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FKey                                                NewKey;                                                  // 0x0028(0x0018)  (ConstParm, Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		ESheikActionBindingSlot                                    Slot;                                                    // 0x0040(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_UYN7[0x7];                                   // 0x0041(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<class FName>                                        ActionNameFilter;                                        // 0x0048(0x0010)  (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
		class FName                                                Context;                                                 // 0x0058(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikKeybindingManager.RebindActionForGamepad
	 */
	struct USheikKeybindingManager_RebindActionForGamepad_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                ActionName;                                              // 0x0008(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FKey                                                OldKey;                                                  // 0x0010(0x0018)  (ConstParm, Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FKey                                                NewKey;                                                  // 0x0028(0x0018)  (ConstParm, Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<class FName>                                        ActionNameFilter;                                        // 0x0040(0x0010)  (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
		class FName                                                Context;                                                 // 0x0050(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikKeybindingManager.IsActionBound
	 */
	struct USheikKeybindingManager_IsActionBound_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                InActionName;                                            // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikKeybindingManager.GetTextureForKey
	 */
	struct USheikKeybindingManager_GetTextureForKey_Params
	{
	public:
		struct FKey                                                InKey;                                                   // 0x0000(0x0018)  (ConstParm, Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EInputSource                                               Source;                                                  // 0x0018(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_1VU8[0x7];                                   // 0x0019(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UDataTable*                                          KeyToTextureDataTable;                                   // 0x0020(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UTexture*                                            ReturnValue;                                             // 0x0028(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikKeybindingManager.GetTextureForAction
	 */
	struct USheikKeybindingManager_GetTextureForAction_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                InAction;                                                // 0x0008(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EInputSource                                               Source;                                                  // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_TADW[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UDataTable*                                          KeyToTextureDataTable;                                   // 0x0018(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UTexture*                                            ReturnValue;                                             // 0x0020(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikKeybindingManager.GetLocalPlayerController
	 */
	struct USheikKeybindingManager_GetLocalPlayerController_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class APlayerController*                                   ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikKeybindingManager.GetKeyboardKeysForActionByName
	 */
	struct USheikKeybindingManager_GetKeyboardKeysForActionByName_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                ActionName;                                              // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FBoundKeyInfo                                       ReturnValue;                                             // 0x0010(0x0020)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikKeybindingManager.GetKeyboardBindings
	 */
	struct USheikKeybindingManager_GetKeyboardBindings_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bIncludeUnboundActions;                                  // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_98SU[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<struct FBoundKeyInfo>                               ReturnValue;                                             // 0x0010(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikKeybindingManager.GetGamepadKeysForActionByName
	 */
	struct USheikKeybindingManager_GetGamepadKeysForActionByName_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                ActionName;                                              // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FBoundKeyInfo                                       ReturnValue;                                             // 0x0010(0x0020)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikKeybindingManager.GetGamepadBindings
	 */
	struct USheikKeybindingManager_GetGamepadBindings_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bIncludeUnboundActions;                                  // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_CLGO[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<struct FBoundKeyInfo>                               ReturnValue;                                             // 0x0010(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikKeybindingManager.GetActionByKey
	 */
	struct USheikKeybindingManager_GetActionByKey_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FKey                                                InKey;                                                   // 0x0008(0x0018)  (ConstParm, Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                ReturnValue;                                             // 0x0020(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikKeybindingManager.DoesActionExist
	 */
	struct USheikKeybindingManager_DoesActionExist_Params
	{
	public:
		class FName                                                InActionName;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikLiveOpsSystem.KickToTitleScreen
	 */
	struct USheikLiveOpsSystem_KickToTitleScreen_Params
	{	};

	/**
	 * Function Sheik.SheikLoaderGameModeBase.GetLoadFlowManager
	 */
	struct ASheikLoaderGameModeBase_GetLoadFlowManager_Params
	{
	public:
		class USheikLoadFlowManager*                               ReturnValue;                                             // 0x0000(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikLoadFlowManager.RestartHotfixCheckForDesiredVersion
	 */
	struct USheikLoadFlowManager_RestartHotfixCheckForDesiredVersion_Params
	{
	public:
		EUpdateCompletionStatus                                    Result;                                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikLoadFlowManager.OnHotfixDefer
	 */
	struct USheikLoadFlowManager_OnHotfixDefer_Params
	{
	public:
		TArray<int32_t>                                            AvailableVersions;                                       // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikLoadFlowManager.OnHotfixComplete
	 */
	struct USheikLoadFlowManager_OnHotfixComplete_Params
	{
	public:
		EUpdateCompletionStatus                                    Result;                                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikLoadFlowManager.OnDeferredHotfixComplete
	 */
	struct USheikLoadFlowManager_OnDeferredHotfixComplete_Params
	{
	public:
		EUpdateCompletionStatus                                    Result;                                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikLoadFlowManager.GetCurrentState
	 */
	struct USheikLoadFlowManager_GetCurrentState_Params
	{
	public:
		ELoadFlowState                                             ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikLoadingScreen.ShowEstimatedProgress
	 */
	struct USheikLoadingScreen_ShowEstimatedProgress_Params
	{
	public:
		float                                                      EstimatedProgress;                                       // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikLoadingScreen.OnUITitleStorageDataRetrieved
	 */
	struct USheikLoadingScreen_OnUITitleStorageDataRetrieved_Params
	{
	public:
		bool                                                       bSuccessful;                                             // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_4OPJ[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FSheikError                                         Error;                                                   // 0x0004(0x000C)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction Sheik.SheikLoadingScreen.OnTriggerLoadFinished__DelegateSignature
	 */
	struct USheikLoadingScreen_OnTriggerLoadFinished__DelegateSignature_Params
	{	};

	/**
	 * Function Sheik.SheikLoadingScreen.OnSpinnerFrameUpdated
	 */
	struct USheikLoadingScreen_OnSpinnerFrameUpdated_Params
	{
	public:
		int32_t                                                    Frame;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikLoadingScreen.OnSeasonVerificationCompleted
	 */
	struct USheikLoadingScreen_OnSeasonVerificationCompleted_Params
	{
	public:
		bool                                                       bSuccessful;                                             // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_1WO4[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FSheikError                                         Error;                                                   // 0x0004(0x000C)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikLoadingScreen.OnProgressionDataRetrieved
	 */
	struct USheikLoadingScreen_OnProgressionDataRetrieved_Params
	{
	public:
		bool                                                       bSuccessful;                                             // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_WQUO[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FSheikError                                         Error;                                                   // 0x0004(0x000C)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikLoadingScreen.OnPlayerDataRetrieved
	 */
	struct USheikLoadingScreen_OnPlayerDataRetrieved_Params
	{	};

	/**
	 * Function Sheik.SheikLoadingScreen.OnEntitlementsOwnedRefreshComplete
	 */
	struct USheikLoadingScreen_OnEntitlementsOwnedRefreshComplete_Params
	{	};

	/**
	 * Function Sheik.SheikLoadingScreen.OnAchievementsProgressSaved
	 */
	struct USheikLoadingScreen_OnAchievementsProgressSaved_Params
	{
	public:
		bool                                                       bSuccessful;                                             // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikLoadingScreen.IsLoadFinished
	 */
	struct USheikLoadingScreen_IsLoadFinished_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikLockerRoom.ZoomCameraToRegion
	 */
	struct USheikLockerRoom_ZoomCameraToRegion_Params
	{
	public:
		EIGBodyType                                                BodyType;                                                // 0x0000(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EIGBodyRegion                                              ZoomRegion;                                              // 0x0001(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bSmoothZoom;                                             // 0x0002(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikLockerRoom.UnPreviewAccessory
	 */
	struct USheikLockerRoom_UnPreviewAccessory_Params
	{	};

	/**
	 * Function Sheik.SheikLockerRoom.ToggleCharacterPreviewVisibility
	 */
	struct USheikLockerRoom_ToggleCharacterPreviewVisibility_Params
	{
	public:
		bool                                                       bIsHidden;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikLockerRoom.SpawnCharacterPreview
	 */
	struct USheikLockerRoom_SpawnCharacterPreview_Params
	{	};

	/**
	 * Function Sheik.SheikLockerRoom.SortAccessoryList
	 */
	struct USheikLockerRoom_SortAccessoryList_Params
	{
	public:
		TArray<struct FSheikAccessoryInfo>                         Accessories;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikLockerRoom.SetSheikAccessorySystem
	 */
	struct USheikLockerRoom_SetSheikAccessorySystem_Params
	{
	public:
		class USheikAccessorySystem*                               SheikAccSys;                                             // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikLockerRoom.SetCameraPositionByItem
	 */
	struct USheikLockerRoom_SetCameraPositionByItem_Params
	{
	public:
		struct FSheikAccessoryInfo                                 FocusItem;                                               // 0x0000(0x05E0)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikLockerRoom.SetCameraForCurrentBodyType
	 */
	struct USheikLockerRoom_SetCameraForCurrentBodyType_Params
	{	};

	/**
	 * Function Sheik.SheikLockerRoom.SaveCurrentLoadoutAsPreset
	 */
	struct USheikLockerRoom_SaveCurrentLoadoutAsPreset_Params
	{
	public:
		int32_t                                                    PresetSlotIndex;                                         // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikLockerRoom.SaveCharacterLoadout
	 */
	struct USheikLockerRoom_SaveCharacterLoadout_Params
	{	};

	/**
	 * Function Sheik.SheikLockerRoom.ResetCamera
	 */
	struct USheikLockerRoom_ResetCamera_Params
	{	};

	/**
	 * Function Sheik.SheikLockerRoom.RemoveFilter
	 */
	struct USheikLockerRoom_RemoveFilter_Params
	{
	public:
		ESheikFilterType                                           FilterType;                                              // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       RefreshAccessories;                                      // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikLockerRoom.RemoveAllFilters
	 */
	struct USheikLockerRoom_RemoveAllFilters_Params
	{
	public:
		bool                                                       RefreshAccessories;                                      // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikLockerRoom.RemoveAccessory
	 */
	struct USheikLockerRoom_RemoveAccessory_Params
	{
	public:
		class FName                                                ID;                                                      // 0x0000(0x0008)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikLockerRoom.RefreshAccessoryData
	 */
	struct USheikLockerRoom_RefreshAccessoryData_Params
	{	};

	/**
	 * Function Sheik.SheikLockerRoom.RandomizeBodyOptions
	 */
	struct USheikLockerRoom_RandomizeBodyOptions_Params
	{	};

	/**
	 * Function Sheik.SheikLockerRoom.RandomizeAccessories
	 */
	struct USheikLockerRoom_RandomizeAccessories_Params
	{	};

	/**
	 * Function Sheik.SheikLockerRoom.ProcessDataTables
	 */
	struct USheikLockerRoom_ProcessDataTables_Params
	{	};

	/**
	 * Function Sheik.SheikLockerRoom.PreviewAccessory
	 */
	struct USheikLockerRoom_PreviewAccessory_Params
	{
	public:
		class FName                                                ID;                                                      // 0x0000(0x0008)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bIsTogglingUndies;                                       // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction Sheik.SheikLockerRoom.OnRefreshAccessoryList__DelegateSignature
	 */
	struct USheikLockerRoom_OnRefreshAccessoryList__DelegateSignature_Params
	{	};

	/**
	 * DelegateFunction Sheik.SheikLockerRoom.OnErrorOccurred__DelegateSignature
	 */
	struct USheikLockerRoom_OnErrorOccurred__DelegateSignature_Params
	{
	public:
		class FText                                                ErrorMsg;                                                // 0x0000(0x0018)  (Parm, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction Sheik.SheikLockerRoom.OnConflictOccurred__DelegateSignature
	 */
	struct USheikLockerRoom_OnConflictOccurred__DelegateSignature_Params
	{
	public:
		TArray<struct FSheikAccessoryInfo>                         ConflictingItems;                                        // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction Sheik.SheikLockerRoom.OnAccessoryLoadUpdate__DelegateSignature
	 */
	struct USheikLockerRoom_OnAccessoryLoadUpdate__DelegateSignature_Params
	{	};

	/**
	 * Function Sheik.SheikLockerRoom.MakePreviewBodyShapeSameAsBase
	 */
	struct USheikLockerRoom_MakePreviewBodyShapeSameAsBase_Params
	{	};

	/**
	 * Function Sheik.SheikLockerRoom.LogLockerRoomOpenEventOnFirstInteraction
	 */
	struct USheikLockerRoom_LogLockerRoomOpenEventOnFirstInteraction_Params
	{	};

	/**
	 * Function Sheik.SheikLockerRoom.IsOutfitEqualToLoadout
	 */
	struct USheikLockerRoom_IsOutfitEqualToLoadout_Params
	{
	public:
		struct FSheikOutfitInfo                                    InOutfitInfo;                                            // 0x0000(0x00B0)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		struct FCharacterLoadout                                   InLoadout;                                               // 0x00B0(0x0070)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0120(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikLockerRoom.IsFilterLocked
	 */
	struct USheikLockerRoom_IsFilterLocked_Params
	{
	public:
		ESheikFilterType                                           FilterType;                                              // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikLockerRoom.IsAnyVariationUnseen
	 */
	struct USheikLockerRoom_IsAnyVariationUnseen_Params
	{
	public:
		class FName                                                VariationGroupName;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikLockerRoom.IsAdvancedLockerRoomEnabled
	 */
	struct USheikLockerRoom_IsAdvancedLockerRoomEnabled_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikLockerRoom.IsAccessoryAlreadyEquipped
	 */
	struct USheikLockerRoom_IsAccessoryAlreadyEquipped_Params
	{
	public:
		class FName                                                ID;                                                      // 0x0000(0x0008)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikLockerRoom.HasMultipleVariations
	 */
	struct USheikLockerRoom_HasMultipleVariations_Params
	{
	public:
		class FName                                                VariationGroupName;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikLockerRoom.HasFilter
	 */
	struct USheikLockerRoom_HasFilter_Params
	{
	public:
		ESheikFilterType                                           FilterType;                                              // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikLockerRoom.HandleOnVisibilityChangedEvent
	 */
	struct USheikLockerRoom_HandleOnVisibilityChangedEvent_Params
	{
	public:
		ESlateVisibility                                           InVisibility;                                            // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikLockerRoom.HandleOnMatchFound
	 */
	struct USheikLockerRoom_HandleOnMatchFound_Params
	{
	public:
		bool                                                       bSuccessful;                                             // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_1GCP[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FSheikError                                         Error;                                                   // 0x0004(0x000C)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikLockerRoom.HandleOnCustomizerUpdateComplete
	 */
	struct USheikLockerRoom_HandleOnCustomizerUpdateComplete_Params
	{	};

	/**
	 * Function Sheik.SheikLockerRoom.HandleNavigationButtonPressEvent
	 */
	struct USheikLockerRoom_HandleNavigationButtonPressEvent_Params
	{
	public:
		struct FInputEventData                                     InputEvent;                                              // 0x0000(0x0038)  (Parm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikLockerRoom.GetWalletSystem
	 */
	struct USheikLockerRoom_GetWalletSystem_Params
	{
	public:
		class USheikWalletSystem*                                  ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikLockerRoom.GetVariationGroupNames
	 */
	struct USheikLockerRoom_GetVariationGroupNames_Params
	{
	public:
		TArray<class FName>                                        ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikLockerRoom.GetVariationGroupAccessories
	 */
	struct USheikLockerRoom_GetVariationGroupAccessories_Params
	{
	public:
		class FName                                                VariationGroupName;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       FilterByCurrentBody;                                     // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_F6Y3[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<struct FSheikAccessoryInfo>                         ReturnValue;                                             // 0x0010(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikLockerRoom.GetUnlockedOutfits
	 */
	struct USheikLockerRoom_GetUnlockedOutfits_Params
	{
	public:
		TArray<struct FSheikOutfitInfo>                            ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikLockerRoom.GetUngroupedAccessoryVariations
	 */
	struct USheikLockerRoom_GetUngroupedAccessoryVariations_Params
	{
	public:
		TArray<struct FSheikAccessoryInfo>                         ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikLockerRoom.GetSubcategoryFilters
	 */
	struct USheikLockerRoom_GetSubcategoryFilters_Params
	{
	public:
		ESheikFilterType                                           InFilterType;                                            // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_YHMU[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<ESheikFilterType>                                   ReturnValue;                                             // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikLockerRoom.GetStoreSystem
	 */
	struct USheikLockerRoom_GetStoreSystem_Params
	{
	public:
		class USheikStoreSystem*                                   ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikLockerRoom.GetPlayersCurrentBudget
	 */
	struct USheikLockerRoom_GetPlayersCurrentBudget_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikLockerRoom.GetPlayerData
	 */
	struct USheikLockerRoom_GetPlayerData_Params
	{
	public:
		class USheikPlayerData*                                    ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikLockerRoom.GetNewestOutfitStoreOffer
	 */
	struct USheikLockerRoom_GetNewestOutfitStoreOffer_Params
	{
	public:
		struct FSheikStoreItem                                     OutStoreOffer;                                           // 0x0000(0x0320)  (Parm, OutParm, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0320(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikLockerRoom.GetListOfAccessories
	 */
	struct USheikLockerRoom_GetListOfAccessories_Params
	{
	public:
		TArray<EAccessoryType>                                     AccessoryTypes;                                          // 0x0000(0x0010)  (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
		bool                                                       SortAccessories;                                         // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       AdvancedMode;                                            // 0x0011(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_IUFB[0x6];                                   // 0x0012(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<struct FSheikAccessoryInfo>                         ReturnValue;                                             // 0x0018(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikLockerRoom.GetDisplayNameForSort
	 */
	struct USheikLockerRoom_GetDisplayNameForSort_Params
	{
	public:
		ESheikSortingType                                          SortingType;                                             // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_VN26[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FText                                                ReturnValue;                                             // 0x0008(0x0018)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikLockerRoom.GetDisplayNameForFilter
	 */
	struct USheikLockerRoom_GetDisplayNameForFilter_Params
	{
	public:
		ESheikFilterType                                           FilterType;                                              // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_EBZI[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FText                                                ReturnValue;                                             // 0x0008(0x0018)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikLockerRoom.GetCurrentSortingType
	 */
	struct USheikLockerRoom_GetCurrentSortingType_Params
	{
	public:
		ESheikSortingType                                          ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikLockerRoom.GetCreatedPresetCount
	 */
	struct USheikLockerRoom_GetCreatedPresetCount_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikLockerRoom.GetConflictsForAccessory
	 */
	struct USheikLockerRoom_GetConflictsForAccessory_Params
	{
	public:
		class FName                                                ID;                                                      // 0x0000(0x0008)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<struct FSheikAccessoryInfo>                         OutConflicts;                                            // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikLockerRoom.GetAccessoryLabel
	 */
	struct USheikLockerRoom_GetAccessoryLabel_Params
	{
	public:
		class FName                                                ID;                                                      // 0x0000(0x0008)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FText                                                ReturnValue;                                             // 0x0008(0x0018)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikLockerRoom.FilterEmotesByCategoryTag
	 */
	struct USheikLockerRoom_FilterEmotesByCategoryTag_Params
	{
	public:
		TArray<struct FSheikAccessoryInfo>                         InEmotes;                                                // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
		struct FGameplayTag                                        InTag;                                                   // 0x0010(0x0008)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<struct FSheikAccessoryInfo>                         ReturnValue;                                             // 0x0018(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikLockerRoom.ExecShowAccessories
	 */
	struct USheikLockerRoom_ExecShowAccessories_Params
	{	};

	/**
	 * Function Sheik.SheikLockerRoom.EquipSavedLoadoutIndex
	 */
	struct USheikLockerRoom_EquipSavedLoadoutIndex_Params
	{
	public:
		int32_t                                                    InLoadoutIndex;                                          // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikLockerRoom.EquipPreset
	 */
	struct USheikLockerRoom_EquipPreset_Params
	{
	public:
		int32_t                                                    PresetIndex;                                             // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikLockerRoom.EquipOutfit
	 */
	struct USheikLockerRoom_EquipOutfit_Params
	{
	public:
		struct FSheikOutfitInfo                                    InOutfit;                                                // 0x0000(0x00B0)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		bool                                                       bIsPreviewing;                                           // 0x00B0(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikLockerRoom.EquipLoadout
	 */
	struct USheikLockerRoom_EquipLoadout_Params
	{
	public:
		struct FCharacterLoadout                                   CharacterLoadout;                                        // 0x0000(0x0070)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikLockerRoom.EquipAccessory
	 */
	struct USheikLockerRoom_EquipAccessory_Params
	{
	public:
		class FName                                                ID;                                                      // 0x0000(0x0008)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikLockerRoom.DoesItemPassFilters
	 */
	struct USheikLockerRoom_DoesItemPassFilters_Params
	{
	public:
		struct FSheikAccessoryInfo                                 AccessoryInfo;                                           // 0x0000(0x05E0)  (Parm, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x05E0(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikLockerRoom.DoesAccessoryCauseStyleBudgetOverage
	 */
	struct USheikLockerRoom_DoesAccessoryCauseStyleBudgetOverage_Params
	{
	public:
		struct FCharacterLoadout                                   BaseLoadout;                                             // 0x0000(0x0070)  (Parm, NativeAccessSpecifierPublic)
		struct FSheikAccessoryInfo                                 InAccessory;                                             // 0x0070(0x05E0)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0650(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikLockerRoom.ClearAccessoriesNoSave
	 */
	struct USheikLockerRoom_ClearAccessoriesNoSave_Params
	{	};

	/**
	 * Function Sheik.SheikLockerRoom.ClearAccessories
	 */
	struct USheikLockerRoom_ClearAccessories_Params
	{	};

	/**
	 * Function Sheik.SheikLockerRoom.ChangeSortingType
	 */
	struct USheikLockerRoom_ChangeSortingType_Params
	{
	public:
		ESheikSortingType                                          SortingType;                                             // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikLockerRoom.CanCreateNewPreset
	 */
	struct USheikLockerRoom_CanCreateNewPreset_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikLockerRoom.CalculateAccessoriesDisallowedByStyleBudget
	 */
	struct USheikLockerRoom_CalculateAccessoriesDisallowedByStyleBudget_Params
	{
	public:
		TArray<struct FSheikAccessoryInfo>                         InAccessories;                                           // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
		TArray<bool>                                               ReturnValue;                                             // 0x0010(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikLockerRoom.AddFilter
	 */
	struct USheikLockerRoom_AddFilter_Params
	{
	public:
		ESheikFilterType                                           FilterType;                                              // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       RefreshAccessories;                                      // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikLockerRoomClothingPage.RefreshUnseenMapEntriesForLoadout
	 */
	struct USheikLockerRoomClothingPage_RefreshUnseenMapEntriesForLoadout_Params
	{
	public:
		class USheikLockerRoom*                                    LockerRoom;                                              // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<struct FSheikAccessoryInfo>                         InAccessories;                                           // 0x0008(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikLockerRoomClothingPage.RefreshStackingDecoratorsNative
	 */
	struct USheikLockerRoomClothingPage_RefreshStackingDecoratorsNative_Params
	{
	public:
		class USheikLockerRoom*                                    LockerRoom;                                              // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<class UIGUI_WidgetBase*>                            NavigableWidgets;                                        // 0x0008(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikLockerRoomClothingPage.FilterLockedAccessoriesNative
	 */
	struct USheikLockerRoomClothingPage_FilterLockedAccessoriesNative_Params
	{
	public:
		TArray<struct FSheikAccessoryInfo>                         InAccessories;                                           // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
		class USheikWalletSystem*                                  WalletSys;                                               // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<struct FSheikAccessoryInfo>                         ReturnValue;                                             // 0x0018(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikLockerRoomItemBase.SetStackingEnabled
	 */
	struct USheikLockerRoomItemBase_SetStackingEnabled_Params
	{
	public:
		bool                                                       StackingEnabled;                                         // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikLockerRoomItemBase.SetNewContentNative
	 */
	struct USheikLockerRoomItemBase_SetNewContentNative_Params
	{
	public:
		bool                                                       New;                                                     // 0x0000(0x0001)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikLockerRoomItemBase.SetItemImageNative
	 */
	struct USheikLockerRoomItemBase_SetItemImageNative_Params
	{
	public:
		class UTexture2D*                                          Texture;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UImage*                                              Image;                                                   // 0x0008(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UCircularThrobber*                                   Spinner;                                                 // 0x0010(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikLockerRoomItemBase.SetItemColorNative
	 */
	struct USheikLockerRoomItemBase_SetItemColorNative_Params
	{
	public:
		struct FLinearColor                                        Color;                                                   // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UImage*                                              Image;                                                   // 0x0010(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikLockerRoomItemBase.SetEquippedStylingNative
	 */
	struct USheikLockerRoomItemBase_SetEquippedStylingNative_Params
	{
	public:
		bool                                                       Equipped;                                                // 0x0000(0x0001)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_Y0L6[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UImage*                                              EquippedFrame;                                           // 0x0008(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UImage*                                              EquippedCheckmark;                                       // 0x0010(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UTextBlock*                                          NewIcon;                                                 // 0x0018(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UOverlay*                                            EquippedNewOverlay;                                      // 0x0020(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikLockerRoomItemBase.SetEquippedNewVisibilityNative
	 */
	struct USheikLockerRoomItemBase_SetEquippedNewVisibilityNative_Params
	{
	public:
		class UOverlay*                                            EquippedNewOverlay;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikLockerRoomItemBase.SetCostNative
	 */
	struct USheikLockerRoomItemBase_SetCostNative_Params
	{
	public:
		bool                                                       ShowCost;                                                // 0x0000(0x0001)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_6AV2[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    BudgetCost;                                              // 0x0004(0x0004)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UOverlay*                                            StyleBudgetOverlay;                                      // 0x0008(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UTextBlock*                                          CostTextBlock;                                           // 0x0010(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikLockerRoomItemBase.PushChangesToContentNative
	 */
	struct USheikLockerRoomItemBase_PushChangesToContentNative_Params
	{
	public:
		struct FSheikAccessoryInfo                                 ItemAccessory;                                           // 0x0000(0x05E0)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		class UImage*                                              Image;                                                   // 0x05E0(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UCircularThrobber*                                   Spinner;                                                 // 0x05E8(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UOverlay*                                            StyleBudgetOverlay;                                      // 0x05F0(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UTextBlock*                                          CostTextBlock;                                           // 0x05F8(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UTextBlock*                                          NewIcon;                                                 // 0x0600(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UOverlay*                                            EquippedNewOverlay;                                      // 0x0608(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UImage*                                              EquippedFrame;                                           // 0x0610(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UImage*                                              EquippedCheckmark;                                       // 0x0618(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikLockerRoomUniformGridList.RefreshNavigationOverridesNative
	 */
	struct USheikLockerRoomUniformGridList_RefreshNavigationOverridesNative_Params
	{
	public:
		TArray<class UIGUI_WidgetBase*>                            Items;                                                   // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
		int32_t                                                    CountOverride;                                           // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    NumberOfCells;                                           // 0x0014(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EOrientation                                               ScrollOrientation;                                       // 0x0018(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       WrapUp;                                                  // 0x0019(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       WrapDown;                                                // 0x001A(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       WrapLeft;                                                // 0x001B(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       WrapRight;                                               // 0x001C(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikLoginManager.QueueIntoCozmo
	 */
	struct USheikLoginManager_QueueIntoCozmo_Params
	{
	public:
		class FScriptDelegate                                      UpdateDelegate;                                          // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      CompletionDelegate;                                      // 0x0010(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		struct FSheikError                                         Error;                                                   // 0x0020(0x000C)  (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x002C(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction Sheik.SheikLoginManager.OnFullLogoutCompleteDelegate__DelegateSignature
	 */
	struct USheikLoginManager_OnFullLogoutCompleteDelegate__DelegateSignature_Params
	{
	public:
		int32_t                                                    LocalUserNum;                                            // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bWasSuccessful;                                          // 0x0004(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_0E85[0x3];                                   // 0x0005(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FSheikError                                         Error;                                                   // 0x0008(0x000C)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction Sheik.SheikLoginManager.OnCozmoQueueUpdateDelegate__DelegateSignature
	 */
	struct USheikLoginManager_OnCozmoQueueUpdateDelegate__DelegateSignature_Params
	{
	public:
		int32_t                                                    TicketId;                                                // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    ServingNumber;                                           // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction Sheik.SheikLoginManager.OnCozmoQueueCompleteDelegate__DelegateSignature
	 */
	struct USheikLoginManager_OnCozmoQueueCompleteDelegate__DelegateSignature_Params
	{
	public:
		bool                                                       bWasSuccessful;                                          // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_27IM[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FSheikError                                         Error;                                                   // 0x0004(0x000C)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikLoginManager.NotifyOnConsoleSubsystemLoginComplete
	 */
	struct USheikLoginManager_NotifyOnConsoleSubsystemLoginComplete_Params
	{
	public:
		class FScriptDelegate                                      OnComplete;                                              // 0x0000(0x0010)  (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikLoginManager.Logout
	 */
	struct USheikLoginManager_Logout_Params
	{
	public:
		class FScriptDelegate                                      InDelegate;                                              // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		struct FSheikError                                         Error;                                                   // 0x0010(0x000C)  (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x001C(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikLoginManager.LoginIntoEOS
	 */
	struct USheikLoginManager_LoginIntoEOS_Params
	{
	public:
		class FString                                              ID;                                                      // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              Token;                                                   // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      InDelegate;                                              // 0x0020(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		struct FSheikError                                         Error;                                                   // 0x0030(0x000C)  (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x003C(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikLoginManager.LoginIntoCozmo
	 */
	struct USheikLoginManager_LoginIntoCozmo_Params
	{
	public:
		class FScriptDelegate                                      InDelegate;                                              // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		struct FSheikError                                         Error;                                                   // 0x0010(0x000C)  (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x001C(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikLoginManager.IsUserLoggedIntoPlatform
	 */
	struct USheikLoginManager_IsUserLoggedIntoPlatform_Params
	{
	public:
		ESheikLoginStatus                                          ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikLoginManager.IsUserLoggedIntoEOS
	 */
	struct USheikLoginManager_IsUserLoggedIntoEOS_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikLoginManager.IsUserLoggedIntoCozmo
	 */
	struct USheikLoginManager_IsUserLoggedIntoCozmo_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikLoginManager.IsLoggingOut
	 */
	struct USheikLoginManager_IsLoggingOut_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikLoginManager.DisplayPlatformLoginUI
	 */
	struct USheikLoginManager_DisplayPlatformLoginUI_Params
	{
	public:
		class FScriptDelegate                                      InDelegate;                                              // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikLoginManager.CozmoBanInfoRequest
	 */
	struct USheikLoginManager_CozmoBanInfoRequest_Params
	{
	public:
		class FScriptDelegate                                      InDelegate;                                              // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		struct FSheikError                                         Error;                                                   // 0x0010(0x000C)  (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x001C(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikLoginManager.CancelQueueIntoCozmo
	 */
	struct USheikLoginManager_CancelQueueIntoCozmo_Params
	{	};

	/**
	 * Function Sheik.SheikMagazineEquipScreen.TakePerk
	 */
	struct USheikMagazineEquipScreen_TakePerk_Params
	{	};

	/**
	 * Function Sheik.SheikMagazineEquipScreen.StopReading
	 */
	struct USheikMagazineEquipScreen_StopReading_Params
	{	};

	/**
	 * Function Sheik.SheikMagazineEquipScreen.ShowNewMoveToEquip
	 */
	struct USheikMagazineEquipScreen_ShowNewMoveToEquip_Params
	{
	public:
		class UIGMoveMontage*                                      MoveMontage;                                             // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EMoveTier                                                  MoveTier;                                                // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikMagazineEquipScreen.HandleOnClientIsAimingCannonChanged
	 */
	struct USheikMagazineEquipScreen_HandleOnClientIsAimingCannonChanged_Params
	{
	public:
		bool                                                       IsAimingCannon;                                          // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikMagazineEquipScreen.HandleOnCharacterDied
	 */
	struct USheikMagazineEquipScreen_HandleOnCharacterDied_Params
	{
	public:
		ECauseOfDeath                                              CauseOfDeath;                                            // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikMagazineEquipScreen.HandleOnCharacterDamaged
	 */
	struct USheikMagazineEquipScreen_HandleOnCharacterDamaged_Params
	{
	public:
		struct FIGInstanceHitData                                  HitData;                                                 // 0x0000(0x0048)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikMagazineEquipScreen.GetLocalPlayerMovesetComponent
	 */
	struct USheikMagazineEquipScreen_GetLocalPlayerMovesetComponent_Params
	{
	public:
		class UIGMovesetComponent*                                 ReturnValue;                                             // 0x0000(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikMagazineEquipScreen.GetExistingSlotTwoTier
	 */
	struct USheikMagazineEquipScreen_GetExistingSlotTwoTier_Params
	{
	public:
		EMoveTier                                                  ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikMagazineEquipScreen.GetExistingSlotTwoMove
	 */
	struct USheikMagazineEquipScreen_GetExistingSlotTwoMove_Params
	{
	public:
		class UIGMoveMontage*                                      ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikMagazineEquipScreen.GetExistingSlotOneTier
	 */
	struct USheikMagazineEquipScreen_GetExistingSlotOneTier_Params
	{
	public:
		EMoveTier                                                  ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikMagazineEquipScreen.GetExistingSlotOneMove
	 */
	struct USheikMagazineEquipScreen_GetExistingSlotOneMove_Params
	{
	public:
		class UIGMoveMontage*                                      ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikMagazineEquipScreen.GetCurrentMoveToEquip
	 */
	struct USheikMagazineEquipScreen_GetCurrentMoveToEquip_Params
	{
	public:
		class UIGMoveMontage*                                      ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikMagazineEquipScreen.EnableExtremeLogging
	 */
	struct USheikMagazineEquipScreen_EnableExtremeLogging_Params
	{
	public:
		bool                                                       bEnable;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikMagazineEquipScreen.CloseEquipScreen
	 */
	struct USheikMagazineEquipScreen_CloseEquipScreen_Params
	{	};

	/**
	 * Function Sheik.SheikMagazineEquipScreen.BindToCharacterDelegates
	 */
	struct USheikMagazineEquipScreen_BindToCharacterDelegates_Params
	{	};

	/**
	 * Function Sheik.SheikMagazineEquipScreen.AssignMoveToSlotTwo
	 */
	struct USheikMagazineEquipScreen_AssignMoveToSlotTwo_Params
	{	};

	/**
	 * Function Sheik.SheikMagazineEquipScreen.AssignMoveToSlotOne
	 */
	struct USheikMagazineEquipScreen_AssignMoveToSlotOne_Params
	{	};

	/**
	 * Function Sheik.SheikMainMenu.ToggleMenuActorVisibility
	 */
	struct USheikMainMenu_ToggleMenuActorVisibility_Params
	{
	public:
		bool                                                       bIsHidden;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikMainMenu.SetupPartyActors
	 */
	struct USheikMainMenu_SetupPartyActors_Params
	{	};

	/**
	 * Function Sheik.SheikMainMenu.SetSheikWalletSystem
	 */
	struct USheikMainMenu_SetSheikWalletSystem_Params
	{
	public:
		class USheikWalletSystem*                                  InWalletSystem;                                          // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikMainMenu.SetSheikStoreSystem
	 */
	struct USheikMainMenu_SetSheikStoreSystem_Params
	{
	public:
		class USheikStoreSystem*                                   InStoreSystem;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikMainMenu.SetSheikAccessorySystem
	 */
	struct USheikMainMenu_SetSheikAccessorySystem_Params
	{
	public:
		class USheikAccessorySystem*                               SheikAccSys;                                             // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikMainMenu.OnWalletIdRevocationOccurred
	 */
	struct USheikMainMenu_OnWalletIdRevocationOccurred_Params
	{
	public:
		TArray<class FName>                                        RevokedWalledIds;                                        // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction Sheik.SheikMainMenu.OnGrantEntitlementCheckComplete__DelegateSignature
	 */
	struct USheikMainMenu_OnGrantEntitlementCheckComplete__DelegateSignature_Params
	{	};

	/**
	 * DelegateFunction Sheik.SheikMainMenu.OnAccessoryLoadComplete__DelegateSignature
	 */
	struct USheikMainMenu_OnAccessoryLoadComplete__DelegateSignature_Params
	{	};

	/**
	 * Function Sheik.SheikMainMenu.HandleMenuActorScaling
	 */
	struct USheikMainMenu_HandleMenuActorScaling_Params
	{	};

	/**
	 * Function Sheik.SheikMainMenu.GrantEntitlementsCheck
	 */
	struct USheikMainMenu_GrantEntitlementsCheck_Params
	{	};

	/**
	 * Function Sheik.SheikMainMenu.GetLeaguesWidget
	 */
	struct USheikMainMenu_GetLeaguesWidget_Params
	{
	public:
		class UIGUI_WidgetBase*                                    ReturnValue;                                             // 0x0000(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikMainMenu.EquipAccessories
	 */
	struct USheikMainMenu_EquipAccessories_Params
	{	};

	/**
	 * Function Sheik.SheikMap.UpdatePersistentSquareRing
	 */
	struct USheikMap_UpdatePersistentSquareRing_Params
	{
	public:
		struct FSheikWaypointInfo                                  WaypointInfo;                                            // 0x0000(0x0028)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		class UWidget*                                             RingWaypoint;                                            // 0x0028(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UMaterialInstanceDynamic*                            RingMaterial;                                            // 0x0030(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikMap.UpdatePersistentCircleRing
	 */
	struct USheikMap_UpdatePersistentCircleRing_Params
	{
	public:
		struct FSheikWaypointInfo                                  WaypointInfo;                                            // 0x0000(0x0028)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		class UWidget*                                             RingWaypoint;                                            // 0x0028(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UMaterialInstanceDynamic*                            RingMaterial;                                            // 0x0030(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikMap.SetWaypoint
	 */
	struct USheikMap_SetWaypoint_Params
	{
	public:
		struct FSheikWaypointInfo                                  WaypointInfo;                                            // 0x0000(0x0028)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikMap.SetForPlayer
	 */
	struct USheikMap_SetForPlayer_Params
	{
	public:
		class ASheikPlayerStateCommon*                             SheikPlayerState;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikMap.RemoveWaypoint
	 */
	struct USheikMap_RemoveWaypoint_Params
	{
	public:
		struct FSheikPooledWaypoint                                WaypointWidget;                                          // 0x0000(0x0020)  (Parm, OutParm, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikMap.HideLaunchCone
	 */
	struct USheikMap_HideLaunchCone_Params
	{	};

	/**
	 * Function Sheik.SheikMap.HideDirectLine
	 */
	struct USheikMap_HideDirectLine_Params
	{	};

	/**
	 * Function Sheik.SheikMap.HideAllDynamicWaypointWidgets
	 */
	struct USheikMap_HideAllDynamicWaypointWidgets_Params
	{	};

	/**
	 * Function Sheik.SheikMap.HandleOnUpdateWaypoints_BP
	 */
	struct USheikMap_HandleOnUpdateWaypoints_BP_Params
	{
	public:
		TArray<struct FSheikWaypointInfo>                          Waypoints;                                               // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikMap.HandleOnUpdateWaypoints
	 */
	struct USheikMap_HandleOnUpdateWaypoints_Params
	{
	public:
		TArray<struct FSheikWaypointInfo>                          Waypoints;                                               // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikMap.HandleOnUpdateOwningPlayerInfo_BP
	 */
	struct USheikMap_HandleOnUpdateOwningPlayerInfo_BP_Params
	{
	public:
		struct FSheikOwningPlayerInfo                              OwningPlayerInfo;                                        // 0x0000(0x0018)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikMap.HandleOnUpdateOwningPlayerInfo
	 */
	struct USheikMap_HandleOnUpdateOwningPlayerInfo_Params
	{
	public:
		struct FSheikOwningPlayerInfo                              OwningPlayerInfo;                                        // 0x0000(0x0018)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikMap.HandleOnUpdateMapLookupInfo_BP
	 */
	struct USheikMap_HandleOnUpdateMapLookupInfo_BP_Params
	{
	public:
		struct FSheikMapLookupInfo                                 LookupInfo;                                              // 0x0000(0x0030)  (Parm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikMap.HandleOnUpdateMapLookupInfo
	 */
	struct USheikMap_HandleOnUpdateMapLookupInfo_Params
	{
	public:
		struct FSheikMapLookupInfo                                 LookupInfo;                                              // 0x0000(0x0030)  (Parm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikMap.HandleOnUpdateLaunchCone
	 */
	struct USheikMap_HandleOnUpdateLaunchCone_Params
	{
	public:
		struct FSheikCannonConeData                                CannonConeData;                                          // 0x0000(0x001C)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikMap.HandleOnTeammateRescueAlert
	 */
	struct USheikMap_HandleOnTeammateRescueAlert_Params
	{
	public:
		class AIGPlayerState*                                      TeammateState;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bIsTeammateDowned;                                       // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikMap.HandleOnTeammateInCombatAlert
	 */
	struct USheikMap_HandleOnTeammateInCombatAlert_Params
	{
	public:
		class AIGPlayerState*                                      TeammateState;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bIsTeammateInCombat;                                     // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikMap.HandleOnTeammateHPAlert
	 */
	struct USheikMap_HandleOnTeammateHPAlert_Params
	{
	public:
		class AIGPlayerState*                                      TeammateState;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bIsTeammateLowHealth;                                    // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikMap.HandleOnTeammateCannonLanded
	 */
	struct USheikMap_HandleOnTeammateCannonLanded_Params
	{
	public:
		class AIGPlayerState*                                      TeammateState;                                           // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikMap.HandleOnStopShowingFullMap_BP
	 */
	struct USheikMap_HandleOnStopShowingFullMap_BP_Params
	{	};

	/**
	 * Function Sheik.SheikMap.HandleOnStopShowingFullMap
	 */
	struct USheikMap_HandleOnStopShowingFullMap_Params
	{	};

	/**
	 * Function Sheik.SheikMap.HandleOnShowPlayZoneDirectPath
	 */
	struct USheikMap_HandleOnShowPlayZoneDirectPath_Params
	{	};

	/**
	 * Function Sheik.SheikMap.HandleOnShowFullMap_BP
	 */
	struct USheikMap_HandleOnShowFullMap_BP_Params
	{	};

	/**
	 * Function Sheik.SheikMap.HandleOnShowFullMap
	 */
	struct USheikMap_HandleOnShowFullMap_Params
	{	};

	/**
	 * Function Sheik.SheikMap.HandleOnMapTextureLoaded
	 */
	struct USheikMap_HandleOnMapTextureLoaded_Params
	{	};

	/**
	 * Function Sheik.SheikMap.HandleOnHidePlayZoneDirectPath
	 */
	struct USheikMap_HandleOnHidePlayZoneDirectPath_Params
	{	};

	/**
	 * Function Sheik.SheikMap.DrawDirectLineToPlayZone
	 */
	struct USheikMap_DrawDirectLineToPlayZone_Params
	{	};

	/**
	 * Function Sheik.SheikMap.CreateAndPlaceWaypoint
	 */
	struct USheikMap_CreateAndPlaceWaypoint_Params
	{
	public:
		class UClass*                                              WidgetClass;                                             // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FSheikWaypointInfo                                  WaypointInfo;                                            // 0x0008(0x0028)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		struct FSheikWaypointMarkerInfo                            WaypointMarkerInfo;                                      // 0x0030(0x0090)  (Parm, NativeAccessSpecifierPublic)
		struct FSheikPooledWaypoint                                ReturnValue;                                             // 0x00C0(0x0020)  (Parm, OutParm, ReturnParm, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikMap.ClearWaypoints
	 */
	struct USheikMap_ClearWaypoints_Params
	{	};

	/**
	 * Function Sheik.SheikMapStateManager.GetStartingRingLocation
	 */
	struct USheikMapStateManager_GetStartingRingLocation_Params
	{
	public:
		struct FVector                                             InLocation;                                              // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x000C(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikMapStateManager.GetRingsSurvived
	 */
	struct USheikMapStateManager_GetRingsSurvived_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikMapStateManager.GetFinalRingLocation
	 */
	struct USheikMapStateManager_GetFinalRingLocation_Params
	{
	public:
		struct FVector                                             InLocation;                                              // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x000C(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikMatchmakingCallbacks.UpdateHotfixesToVersion
	 */
	struct USheikMatchmakingCallbacks_UpdateHotfixesToVersion_Params
	{
	public:
		int32_t                                                    DesiredVersion;                                          // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikMatchmakingCallbacks.UpdateHotfixes
	 */
	struct USheikMatchmakingCallbacks_UpdateHotfixes_Params
	{	};

	/**
	 * Function Sheik.SheikMatchmakingCallbacks.StartMatchmaking
	 */
	struct USheikMatchmakingCallbacks_StartMatchmaking_Params
	{
	public:
		class FString                                              MatchConfig;                                             // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bShouldCreateRestrictedGame;                             // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_TWLA[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              RestrictedSessionGameCode;                               // 0x0018(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    TimeToRestrictGameSession;                               // 0x0028(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       RestrictedSessionOpenToPublic;                           // 0x002C(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_IT2E[0x3];                                   // 0x002D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FSheikError                                         Error;                                                   // 0x0030(0x000C)  (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x003C(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikMatchmakingCallbacks.RefreshMatchmakingConfigsList
	 */
	struct USheikMatchmakingCallbacks_RefreshMatchmakingConfigsList_Params
	{	};

	/**
	 * DelegateFunction Sheik.SheikMatchmakingCallbacks.OnRestrictedMatchFound__DelegateSignature
	 */
	struct USheikMatchmakingCallbacks_OnRestrictedMatchFound__DelegateSignature_Params
	{
	public:
		class FString                                              InviteCode;                                              // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction Sheik.SheikMatchmakingCallbacks.OnPlayerJoinsTeam__DelegateSignature
	 */
	struct USheikMatchmakingCallbacks_OnPlayerJoinsTeam__DelegateSignature_Params
	{
	public:
		bool                                                       bIsLeader;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction Sheik.SheikMatchmakingCallbacks.OnMatchmakingStatusChanged__DelegateSignature
	 */
	struct USheikMatchmakingCallbacks_OnMatchmakingStatusChanged__DelegateSignature_Params
	{
	public:
		EMatchmakingStatus                                         NewStatus;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction Sheik.SheikMatchmakingCallbacks.OnMatchmakingComplete__DelegateSignature
	 */
	struct USheikMatchmakingCallbacks_OnMatchmakingComplete__DelegateSignature_Params
	{
	public:
		bool                                                       bSuccessful;                                             // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_42B2[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FSheikError                                         Error;                                                   // 0x0004(0x000C)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction Sheik.SheikMatchmakingCallbacks.OnLeftMatchmaking__DelegateSignature
	 */
	struct USheikMatchmakingCallbacks_OnLeftMatchmaking__DelegateSignature_Params
	{
	public:
		bool                                                       bSuccessful;                                             // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_ZQZU[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FSheikError                                         Error;                                                   // 0x0004(0x000C)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction Sheik.SheikMatchmakingCallbacks.OnJoinedMatchmaking__DelegateSignature
	 */
	struct USheikMatchmakingCallbacks_OnJoinedMatchmaking__DelegateSignature_Params
	{
	public:
		class FString                                              MatchConfig;                                             // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikMatchmakingCallbacks.OnHotfixSystemComplete
	 */
	struct USheikMatchmakingCallbacks_OnHotfixSystemComplete_Params
	{
	public:
		EUpdateCompletionStatus                                    CompletionStatus;                                        // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction Sheik.SheikMatchmakingCallbacks.OnHotfixingComplete__DelegateSignature
	 */
	struct USheikMatchmakingCallbacks_OnHotfixingComplete__DelegateSignature_Params
	{
	public:
		bool                                                       bSuccessful;                                             // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EUpdateCompletionStatus                                    Result;                                                  // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_WSA4[0x2];                                   // 0x0002(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FSheikError                                         Error;                                                   // 0x0004(0x000C)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikMatchmakingCallbacks.JoinFoundMatchmakingServer
	 */
	struct USheikMatchmakingCallbacks_JoinFoundMatchmakingServer_Params
	{	};

	/**
	 * Function Sheik.SheikMatchmakingCallbacks.IsPlayerTeamLeader
	 */
	struct USheikMatchmakingCallbacks_IsPlayerTeamLeader_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikMatchmakingCallbacks.IsPlayerInTeam
	 */
	struct USheikMatchmakingCallbacks_IsPlayerInTeam_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikMatchmakingCallbacks.IsMatchConfigPlayground
	 */
	struct USheikMatchmakingCallbacks_IsMatchConfigPlayground_Params
	{
	public:
		struct FMatchmakingConfiguration                           InConfig;                                                // 0x0000(0x0070)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0070(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikMatchmakingCallbacks.IsMatchConfigForTeams
	 */
	struct USheikMatchmakingCallbacks_IsMatchConfigForTeams_Params
	{
	public:
		struct FMatchmakingConfiguration                           InConfig;                                                // 0x0000(0x0070)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0070(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikMatchmakingCallbacks.IsMatchConfigExcludedFromFiltering
	 */
	struct USheikMatchmakingCallbacks_IsMatchConfigExcludedFromFiltering_Params
	{
	public:
		struct FMatchmakingConfiguration                           InConfig;                                                // 0x0000(0x0070)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0070(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikMatchmakingCallbacks.IsInMatchmaking
	 */
	struct USheikMatchmakingCallbacks_IsInMatchmaking_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikMatchmakingCallbacks.GetUpdatedCurrentMatchConfig
	 */
	struct USheikMatchmakingCallbacks_GetUpdatedCurrentMatchConfig_Params
	{
	public:
		class FString                                              OutConfig;                                               // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikMatchmakingCallbacks.GetUnfilteredListOfMatchmakingConfigs
	 */
	struct USheikMatchmakingCallbacks_GetUnfilteredListOfMatchmakingConfigs_Params
	{
	public:
		TArray<struct FMatchmakingConfiguration>                   ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikMatchmakingCallbacks.GetTimeElapsed
	 */
	struct USheikMatchmakingCallbacks_GetTimeElapsed_Params
	{
	public:
		struct FTimespan                                           ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikMatchmakingCallbacks.GetTextForMatchmakingStatus
	 */
	struct USheikMatchmakingCallbacks_GetTextForMatchmakingStatus_Params
	{
	public:
		EMatchmakingStatus                                         MatchmakingStatus;                                       // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_0EBD[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FText                                                ReturnValue;                                             // 0x0008(0x0018)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikMatchmakingCallbacks.GetRestrictedMatchJoinCode
	 */
	struct USheikMatchmakingCallbacks_GetRestrictedMatchJoinCode_Params
	{
	public:
		class FString                                              ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikMatchmakingCallbacks.GetMatchTypeFromConfig
	 */
	struct USheikMatchmakingCallbacks_GetMatchTypeFromConfig_Params
	{
	public:
		struct FMatchmakingConfiguration                           InConfig;                                                // 0x0000(0x0070)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		EMatchConfigType                                           ReturnValue;                                             // 0x0070(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikMatchmakingCallbacks.GetMatchmakingStatus
	 */
	struct USheikMatchmakingCallbacks_GetMatchmakingStatus_Params
	{
	public:
		EMatchmakingStatus                                         ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikMatchmakingCallbacks.GetMatchConfiguration
	 */
	struct USheikMatchmakingCallbacks_GetMatchConfiguration_Params
	{
	public:
		class FString                                              MatchConfigName;                                         // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FMatchmakingConfiguration                           MatchConfig;                                             // 0x0010(0x0070)  (Parm, OutParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikMatchmakingCallbacks.GetLocalizedStringsFromDisplayName
	 */
	struct USheikMatchmakingCallbacks_GetLocalizedStringsFromDisplayName_Params
	{
	public:
		class FString                                              DisplayName;                                             // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FText                                                Title;                                                   // 0x0010(0x0018)  (Parm, OutParm, NativeAccessSpecifierPublic)
		class FText                                                SubTitle;                                                // 0x0028(0x0018)  (Parm, OutParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikMatchmakingCallbacks.GetListOfMatchmakingConfigs
	 */
	struct USheikMatchmakingCallbacks_GetListOfMatchmakingConfigs_Params
	{
	public:
		TArray<struct FMatchmakingConfiguration>                   ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikMatchmakingCallbacks.GetDummyDevServerMatchConfig
	 */
	struct USheikMatchmakingCallbacks_GetDummyDevServerMatchConfig_Params
	{
	public:
		struct FMatchmakingConfiguration                           ReturnValue;                                             // 0x0000(0x0070)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikMatchmakingCallbacks.GetCurrentMatchConfig
	 */
	struct USheikMatchmakingCallbacks_GetCurrentMatchConfig_Params
	{
	public:
		class FString                                              ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikMatchmakingCallbacks.Debug_EndMatchmaking
	 */
	struct USheikMatchmakingCallbacks_Debug_EndMatchmaking_Params
	{
	public:
		bool                                                       bMatchFound;                                             // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikMatchmakingCallbacks.CleanupOldSessions
	 */
	struct USheikMatchmakingCallbacks_CleanupOldSessions_Params
	{	};

	/**
	 * Function Sheik.SheikMatchmakingCallbacks.CancelMatchmaking
	 */
	struct USheikMatchmakingCallbacks_CancelMatchmaking_Params
	{
	public:
		struct FSheikError                                         Error;                                                   // 0x0000(0x000C)  (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x000C(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikMinigame.UpdateMinigame_BP
	 */
	struct USheikMinigame_UpdateMinigame_BP_Params
	{	};

	/**
	 * Function Sheik.SheikMinigame.StartMinigame_BP
	 */
	struct USheikMinigame_StartMinigame_BP_Params
	{
	public:
		struct FSheikMinigameInfo                                  MinigameSpecs;                                           // 0x0000(0x0030)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikMinigame.StartMinigame
	 */
	struct USheikMinigame_StartMinigame_Params
	{
	public:
		struct FSheikMinigameInfo                                  MinigameSpecs;                                           // 0x0000(0x0030)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikMinigame.ProcessInputOnMinigame
	 */
	struct USheikMinigame_ProcessInputOnMinigame_Params
	{
	public:
		bool                                                       AutoFail;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikMinigame.IsCursorInTarget
	 */
	struct USheikMinigame_IsCursorInTarget_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikMinigame.IsCursorInGradient
	 */
	struct USheikMinigame_IsCursorInGradient_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikMinigame.EndMinigame_BP
	 */
	struct USheikMinigame_EndMinigame_BP_Params
	{	};

	/**
	 * Function Sheik.SheikMinigame.EndMinigame
	 */
	struct USheikMinigame_EndMinigame_Params
	{	};

	/**
	 * Function Sheik.SheikMinigame.ContinueGame_BP
	 */
	struct USheikMinigame_ContinueGame_BP_Params
	{
	public:
		bool                                                       ResetCursorPosition;                                     // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikMinigame.ContinueGame
	 */
	struct USheikMinigame_ContinueGame_Params
	{
	public:
		bool                                                       ResetCursorPosition;                                     // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikMinigame.AutoSucceedMinigame
	 */
	struct USheikMinigame_AutoSucceedMinigame_Params
	{	};

	/**
	 * Function Sheik.SheikMinimapIcon.UpdateTeammateRescueAlert
	 */
	struct USheikMinimapIcon_UpdateTeammateRescueAlert_Params
	{
	public:
		bool                                                       bIsTeammateDowned;                                       // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikMinimapIcon.UpdateTeammateInCombatAlert
	 */
	struct USheikMinimapIcon_UpdateTeammateInCombatAlert_Params
	{
	public:
		bool                                                       bIsTeammateInCombat;                                     // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikMinimapIcon.UpdateTeammateHPAlert
	 */
	struct USheikMinimapIcon_UpdateTeammateHPAlert_Params
	{
	public:
		bool                                                       bIsTeammateLowHealth;                                    // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikMinimapIcon.UpdateTeammateHeightThreshold
	 */
	struct USheikMinimapIcon_UpdateTeammateHeightThreshold_Params
	{
	public:
		ESheikWaypointVerticalDirection                            TeammateVerticalDirection;                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikMinimapIcon.SetTopLeft
	 */
	struct USheikMinimapIcon_SetTopLeft_Params
	{
	public:
		struct FVector2D                                           Value;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikMinimapIcon.SetTint
	 */
	struct USheikMinimapIcon_SetTint_Params
	{
	public:
		struct FLinearColor                                        NewTint;                                                 // 0x0000(0x0010)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikMinimapIcon.SetSize
	 */
	struct USheikMinimapIcon_SetSize_Params
	{
	public:
		struct FVector2D                                           NewSize;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikMinimapIcon.SetSineOfNegativeRotation
	 */
	struct USheikMinimapIcon_SetSineOfNegativeRotation_Params
	{
	public:
		float                                                      Value;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikMinimapIcon.SetOpacity
	 */
	struct USheikMinimapIcon_SetOpacity_Params
	{
	public:
		float                                                      NewOpacity;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikMinimapIcon.SetMaskDimensions
	 */
	struct USheikMinimapIcon_SetMaskDimensions_Params
	{
	public:
		float                                                      Left;                                                    // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      Top;                                                     // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      Width;                                                   // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      Height;                                                  // 0x000C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikMinimapIcon.SetImage
	 */
	struct USheikMinimapIcon_SetImage_Params
	{
	public:
		class UTexture2D*                                          NewTexture;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikMinimapIcon.SetCosineOfNegativeRotation
	 */
	struct USheikMinimapIcon_SetCosineOfNegativeRotation_Params
	{
	public:
		float                                                      Value;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikMinimapIcon.SetCenter
	 */
	struct USheikMinimapIcon_SetCenter_Params
	{
	public:
		struct FVector2D                                           Value;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikMinimapIcon.SetBottomRight
	 */
	struct USheikMinimapIcon_SetBottomRight_Params
	{
	public:
		struct FVector2D                                           Value;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikMinimapIcon.SetAngle
	 */
	struct USheikMinimapIcon_SetAngle_Params
	{
	public:
		float                                                      Angle;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikMinimapIcon.PlayPingAnimation
	 */
	struct USheikMinimapIcon_PlayPingAnimation_Params
	{
	public:
		bool                                                       bIsOutOfBounds;                                          // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikMinimapIcon.OnTeammateLanded
	 */
	struct USheikMinimapIcon_OnTeammateLanded_Params
	{	};

	/**
	 * Function Sheik.SheikMinimapIcon.HandleTeamInfoUpdated
	 */
	struct USheikMinimapIcon_HandleTeamInfoUpdated_Params
	{	};

	/**
	 * Function Sheik.SheikNavInvokerActorBase.UpdateGenerationShape
	 */
	struct ASheikNavInvokerActorBase_UpdateGenerationShape_Params
	{
	public:
		EInvokerShape                                              NewShape;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikNavInvokerActorBase.UpdateGenerationRadius
	 */
	struct ASheikNavInvokerActorBase_UpdateGenerationRadius_Params
	{
	public:
		float                                                      NewGenerationRadius;                                     // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikNavInvokerActorBase.UpdateBoxGenerationExtents
	 */
	struct ASheikNavInvokerActorBase_UpdateBoxGenerationExtents_Params
	{
	public:
		float                                                      Width;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      Height;                                                  // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikNavInvokerActorBase.ShutdownInvoker
	 */
	struct ASheikNavInvokerActorBase_ShutdownInvoker_Params
	{	};

	/**
	 * Function Sheik.SheikNavInvokerActorBase.RegisterInvoker
	 */
	struct ASheikNavInvokerActorBase_RegisterInvoker_Params
	{	};

	/**
	 * Function Sheik.SheikNoticesManager.GetProcessedNotices
	 */
	struct USheikNoticesManager_GetProcessedNotices_Params
	{
	public:
		TArray<struct FNoticesUIData>                              ReturnValue;                                             // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikNoticesManager.CanShowNotices
	 */
	struct USheikNoticesManager_CanShowNotices_Params
	{
	public:
		int32_t                                                    HoursBetweenShowingPopupNotices;                         // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FIGTimeOfDay                                        NoticesPopupResetTime;                                   // 0x0004(0x0008)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x000C(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikNotificationsManager.RemoveNotification
	 */
	struct USheikNotificationsManager_RemoveNotification_Params
	{
	public:
		struct FSheikFrontendNotification                          NotificationToRemove;                                    // 0x0000(0x0030)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikNotificationsManager.QueueNotification
	 */
	struct USheikNotificationsManager_QueueNotification_Params
	{
	public:
		struct FSheikFrontendNotification                          Notification;                                            // 0x0000(0x0030)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction Sheik.SheikNotificationsManager.OnNotificationsUpdated__DelegateSignature
	 */
	struct USheikNotificationsManager_OnNotificationsUpdated__DelegateSignature_Params
	{	};

	/**
	 * DelegateFunction Sheik.SheikNotificationsManager.OnNotificationExpired__DelegateSignature
	 */
	struct USheikNotificationsManager_OnNotificationExpired__DelegateSignature_Params
	{
	public:
		struct FSheikFrontendNotification                          Notification;                                            // 0x0000(0x0030)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikNotificationsManager.HasNotifications
	 */
	struct USheikNotificationsManager_HasNotifications_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikNotificationsManager.GetNotificationsCount
	 */
	struct USheikNotificationsManager_GetNotificationsCount_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikNotificationsManager.GetNotifications
	 */
	struct USheikNotificationsManager_GetNotifications_Params
	{
	public:
		TArray<struct FSheikFrontendNotification>                  ReturnValue;                                             // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikNotificationsManager.GetNotification
	 */
	struct USheikNotificationsManager_GetNotification_Params
	{
	public:
		struct FSheikFrontendNotification                          Notification;                                            // 0x0000(0x0030)  (Parm, OutParm, NativeAccessSpecifierPublic)
		bool                                                       bValid;                                                  // 0x0030(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikNotificationsManager.AcceptNotificationAction
	 */
	struct USheikNotificationsManager_AcceptNotificationAction_Params
	{	};

	/**
	 * Function Sheik.SheikPartyManager.UpdateSkillData
	 */
	struct USheikPartyManager_UpdateSkillData_Params
	{	};

	/**
	 * Function Sheik.SheikPartyManager.UpdatePlayerAttributeData
	 */
	struct USheikPartyManager_UpdatePlayerAttributeData_Params
	{
	public:
		class FString                                              PlayerName;                                              // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		ESheikPlatformService                                      PlatformService;                                         // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_ACIY[0x3];                                   // 0x0011(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    CloutLevel;                                              // 0x0014(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    HotfixVersion;                                           // 0x0018(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    PlayerSkill;                                             // 0x001C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    CrossPlaySettingEnabled;                                 // 0x0020(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikPartyManager.UpdateHotfixVersionToParty
	 */
	struct USheikPartyManager_UpdateHotfixVersionToParty_Params
	{	};

	/**
	 * Function Sheik.SheikPartyManager.UpdateCrossPlayEnabledSetting
	 */
	struct USheikPartyManager_UpdateCrossPlayEnabledSetting_Params
	{	};

	/**
	 * Function Sheik.SheikPartyManager.UpdateAvailableAudioDevices
	 */
	struct USheikPartyManager_UpdateAvailableAudioDevices_Params
	{	};

	/**
	 * Function Sheik.SheikPartyManager.ToggleVoiceOutputMute
	 */
	struct USheikPartyManager_ToggleVoiceOutputMute_Params
	{	};

	/**
	 * Function Sheik.SheikPartyManager.ToggleVoiceInputMute
	 */
	struct USheikPartyManager_ToggleVoiceInputMute_Params
	{	};

	/**
	 * Function Sheik.SheikPartyManager.ToggleVoiceChatPushToTalkMode
	 */
	struct USheikPartyManager_ToggleVoiceChatPushToTalkMode_Params
	{	};

	/**
	 * Function Sheik.SheikPartyManager.ToggleVoiceChatPushToTalk
	 */
	struct USheikPartyManager_ToggleVoiceChatPushToTalk_Params
	{
	public:
		bool                                                       bCanTalk;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikPartyManager.ToggleVoiceChatMutedForPlayer
	 */
	struct USheikPartyManager_ToggleVoiceChatMutedForPlayer_Params
	{
	public:
		class FString                                              PlayerName;                                              // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikPartyManager.ToggleVoiceChatMuted
	 */
	struct USheikPartyManager_ToggleVoiceChatMuted_Params
	{	};

	/**
	 * Function Sheik.SheikPartyManager.ToggleVoiceChatEnabled
	 */
	struct USheikPartyManager_ToggleVoiceChatEnabled_Params
	{	};

	/**
	 * Function Sheik.SheikPartyManager.ToggleVoiceChatDeafened
	 */
	struct USheikPartyManager_ToggleVoiceChatDeafened_Params
	{	};

	/**
	 * Function Sheik.SheikPartyManager.SyncPartyToLeaderHotfixVersion
	 */
	struct USheikPartyManager_SyncPartyToLeaderHotfixVersion_Params
	{	};

	/**
	 * Function Sheik.SheikPartyManager.ShowPlayerReviewDialog
	 */
	struct USheikPartyManager_ShowPlayerReviewDialog_Params
	{
	public:
		class FString                                              MatchID;                                                 // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      OnCompleteDelegate;                                      // 0x0010(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikPartyManager.ShowChatRestrictionDialogue
	 */
	struct USheikPartyManager_ShowChatRestrictionDialogue_Params
	{	};

	/**
	 * Function Sheik.SheikPartyManager.SetVoiceOutputVolume
	 */
	struct USheikPartyManager_SetVoiceOutputVolume_Params
	{
	public:
		float                                                      Volume;                                                  // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikPartyManager.SetVoiceChatPushToTalkMode
	 */
	struct USheikPartyManager_SetVoiceChatPushToTalkMode_Params
	{
	public:
		bool                                                       bIsPushToTalk;                                           // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikPartyManager.SetVoiceChatMuteStatusForPlayer
	 */
	struct USheikPartyManager_SetVoiceChatMuteStatusForPlayer_Params
	{
	public:
		class FString                                              PlayerName;                                              // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bIsMuted;                                                // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikPartyManager.SetVoiceChatEnabled
	 */
	struct USheikPartyManager_SetVoiceChatEnabled_Params
	{
	public:
		bool                                                       bIsEnabled;                                              // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikPartyManager.SetVoiceChatActiveParty
	 */
	struct USheikPartyManager_SetVoiceChatActiveParty_Params
	{
	public:
		ESheikVOIPPartyType                                        VoipPartyType;                                           // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikPartyManager.SetUsingMultiplayerFeatures
	 */
	struct USheikPartyManager_SetUsingMultiplayerFeatures_Params
	{
	public:
		bool                                                       bUsingMP;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bIsUsingCrossPlay;                                       // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikPartyManager.SetAudioOutputDevice
	 */
	struct USheikPartyManager_SetAudioOutputDevice_Params
	{
	public:
		class FString                                              OutputDeviceId;                                          // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikPartyManager.SetAudioInputDevice
	 */
	struct USheikPartyManager_SetAudioInputDevice_Params
	{
	public:
		class FString                                              InputDeviceId;                                           // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikPartyManager.SetAttemptingMatchmaking
	 */
	struct USheikPartyManager_SetAttemptingMatchmaking_Params
	{
	public:
		bool                                                       InAttemptingMatchmaking;                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikPartyManager.SendMessageToParty
	 */
	struct USheikPartyManager_SendMessageToParty_Params
	{
	public:
		class FString                                              Message;                                                 // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikPartyManager.SendCozmoInviteResponse
	 */
	struct USheikPartyManager_SendCozmoInviteResponse_Params
	{
	public:
		struct FPartyInvitation                                    PartyInvitation;                                         // 0x0000(0x0030)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		bool                                                       bAcceptedInvite;                                         // 0x0030(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikPartyManager.ReportFailureToSyncToPartyHotfixVersion
	 */
	struct USheikPartyManager_ReportFailureToSyncToPartyHotfixVersion_Params
	{	};

	/**
	 * Function Sheik.SheikPartyManager.PromotePlayerToPartyLeader
	 */
	struct USheikPartyManager_PromotePlayerToPartyLeader_Params
	{
	public:
		class FString                                              CozmoId;                                                 // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              EOSPuid;                                                 // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction Sheik.SheikPartyManager.OnVoiceChatPlayerTalkingUpdated__DelegateSignature
	 */
	struct USheikPartyManager_OnVoiceChatPlayerTalkingUpdated__DelegateSignature_Params
	{
	public:
		class FString                                              ChannelName;                                             // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              ProductUserId;                                           // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bIsTalking;                                              // 0x0020(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bIsLocalPlayer;                                          // 0x0021(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction Sheik.SheikPartyManager.OnVoiceChatOptionsUpdated__DelegateSignature
	 */
	struct USheikPartyManager_OnVoiceChatOptionsUpdated__DelegateSignature_Params
	{
	public:
		bool                                                       bIsLocalVOIPEnabled;                                     // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bIsLocalVOIPMuted;                                       // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bIsLocalVOIPDeafened;                                    // 0x0002(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bIsLocalVOIPPushToTalk;                                  // 0x0003(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction Sheik.SheikPartyManager.OnVoiceChatMuteListChanged__DelegateSignature
	 */
	struct USheikPartyManager_OnVoiceChatMuteListChanged__DelegateSignature_Params
	{	};

	/**
	 * DelegateFunction Sheik.SheikPartyManager.OnVoiceChatAvailableAudioDevicesChanged__DelegateSignature
	 */
	struct USheikPartyManager_OnVoiceChatAvailableAudioDevicesChanged__DelegateSignature_Params
	{	};

	/**
	 * DelegateFunction Sheik.SheikPartyManager.OnPSNActivityEventReceived__DelegateSignature
	 */
	struct USheikPartyManager_OnPSNActivityEventReceived__DelegateSignature_Params
	{	};

	/**
	 * Function Sheik.SheikPartyManager.OnPreLoadMap
	 */
	struct USheikPartyManager_OnPreLoadMap_Params
	{
	public:
		class FString                                              MapUrl;                                                  // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction Sheik.SheikPartyManager.OnPartyUpdated__DelegateSignature
	 */
	struct USheikPartyManager_OnPartyUpdated__DelegateSignature_Params
	{	};

	/**
	 * DelegateFunction Sheik.SheikPartyManager.OnPartyPlayerLeft__DelegateSignature
	 */
	struct USheikPartyManager_OnPartyPlayerLeft__DelegateSignature_Params
	{
	public:
		class FString                                              PlayerId;                                                // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction Sheik.SheikPartyManager.OnPartyPlayerKicked__DelegateSignature
	 */
	struct USheikPartyManager_OnPartyPlayerKicked__DelegateSignature_Params
	{
	public:
		class FString                                              PlayerId;                                                // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction Sheik.SheikPartyManager.OnPartyPlayerJoined__DelegateSignature
	 */
	struct USheikPartyManager_OnPartyPlayerJoined__DelegateSignature_Params
	{
	public:
		class FString                                              PlayerId;                                                // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              MetaData;                                                // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<struct FMatchmakerPlayerAttribute>                  Attributes;                                              // 0x0020(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction Sheik.SheikPartyManager.OnPartyInviteResponseSent__DelegateSignature
	 */
	struct USheikPartyManager_OnPartyInviteResponseSent__DelegateSignature_Params
	{
	public:
		struct FPartyInvitation                                    PartyInvitation;                                         // 0x0000(0x0030)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		bool                                                       bAccepted;                                               // 0x0030(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction Sheik.SheikPartyManager.OnPartyHotfixVersionSyncComplete__DelegateSignature
	 */
	struct USheikPartyManager_OnPartyHotfixVersionSyncComplete__DelegateSignature_Params
	{
	public:
		bool                                                       bWasSuccessful;                                          // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_QESY[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FSheikError                                         Error;                                                   // 0x0004(0x000C)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikPartyManager.OnGameExit
	 */
	struct USheikPartyManager_OnGameExit_Params
	{	};

	/**
	 * Function Sheik.SheikPartyManager.OnEnterGameMap
	 */
	struct USheikPartyManager_OnEnterGameMap_Params
	{	};

	/**
	 * DelegateFunction Sheik.SheikPartyManager.OnCozmoPartyPlayerAttributesUpdated__DelegateSignature
	 */
	struct USheikPartyManager_OnCozmoPartyPlayerAttributesUpdated__DelegateSignature_Params
	{
	public:
		class FString                                              PlayerId;                                                // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FPlayerPartyAttributesInfo                          UpdatedPlayerInfo;                                       // 0x0010(0x00E0)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction Sheik.SheikPartyManager.OnCozmoPartyInviteReceivedWithAccountInfo__DelegateSignature
	 */
	struct USheikPartyManager_OnCozmoPartyInviteReceivedWithAccountInfo__DelegateSignature_Params
	{
	public:
		struct FPartyInvitation                                    PartyInvitation;                                         // 0x0000(0x0030)  (Parm, NativeAccessSpecifierPublic)
		struct FSheikPlayerAccount                                 Account;                                                 // 0x0030(0x02F0)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction Sheik.SheikPartyManager.OnCozmoPartyInviteReceived__DelegateSignature
	 */
	struct USheikPartyManager_OnCozmoPartyInviteReceived__DelegateSignature_Params
	{
	public:
		struct FPartyInvitation                                    PartyInvitation;                                         // 0x0000(0x0030)  (Parm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikPartyManager.OnCozmoMatchmakingCanceled
	 */
	struct USheikPartyManager_OnCozmoMatchmakingCanceled_Params
	{
	public:
		bool                                                       bSuccessful;                                             // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_ZJ2J[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FSheikError                                         Error;                                                   // 0x0004(0x000C)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction Sheik.SheikPartyManager.OnAcceptedPlatformInviteBypassStartupScreen__DelegateSignature
	 */
	struct USheikPartyManager_OnAcceptedPlatformInviteBypassStartupScreen__DelegateSignature_Params
	{	};

	/**
	 * Function Sheik.SheikPartyManager.MuteAllPlayers
	 */
	struct USheikPartyManager_MuteAllPlayers_Params
	{
	public:
		bool                                                       bMuteAll;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikPartyManager.LeaveTeamParty
	 */
	struct USheikPartyManager_LeaveTeamParty_Params
	{	};

	/**
	 * Function Sheik.SheikPartyManager.LeaveParty
	 */
	struct USheikPartyManager_LeaveParty_Params
	{
	public:
		bool                                                       bLeaveCozmoParty;                                        // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bLeaveTeamParty;                                         // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikPartyManager.KickPlayerFromParty
	 */
	struct USheikPartyManager_KickPlayerFromParty_Params
	{
	public:
		class FString                                              PlayerCozmoId;                                           // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikPartyManager.JoinPrivateParty
	 */
	struct USheikPartyManager_JoinPrivateParty_Params
	{
	public:
		class FString                                              PartyId;                                                 // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bJoinCozmoParty;                                         // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikPartyManager.JoinPartyByLeaderId
	 */
	struct USheikPartyManager_JoinPartyByLeaderId_Params
	{
	public:
		class FString                                              LeaderPlayerId;                                          // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              PlatformAccountId;                                       // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bJoinCozmoParty;                                         // 0x0020(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikPartyManager.JoinPartyByGuid
	 */
	struct USheikPartyManager_JoinPartyByGuid_Params
	{
	public:
		class FString                                              PartyGuid;                                               // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              PlatformAccountId;                                       // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bJoinCozmoParty;                                         // 0x0020(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikPartyManager.JoinPartyByAccount
	 */
	struct USheikPartyManager_JoinPartyByAccount_Params
	{
	public:
		struct FSheikPlayerAccount                                 Account;                                                 // 0x0000(0x02F0)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikPartyManager.IsVoiceChatMutedForPlayer
	 */
	struct USheikPartyManager_IsVoiceChatMutedForPlayer_Params
	{
	public:
		class FString                                              PlayerName;                                              // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikPartyManager.IsVoiceChatEnabled
	 */
	struct USheikPartyManager_IsVoiceChatEnabled_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikPartyManager.IsPlayerInVOIPParty
	 */
	struct USheikPartyManager_IsPlayerInVOIPParty_Params
	{
	public:
		class FString                                              PlayerName;                                              // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		ESheikVOIPPartyType                                        VOIPParty;                                               // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0011(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikPartyManager.IsPlayerInMuteList
	 */
	struct USheikPartyManager_IsPlayerInMuteList_Params
	{
	public:
		class FString                                              PlayerName;                                              // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikPartyManager.IsPartyOnSameHotfixVersion
	 */
	struct USheikPartyManager_IsPartyOnSameHotfixVersion_Params
	{
	public:
		bool                                                       bMemberIsOutOfDate;                                      // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bLocalIsOutOfDate;                                       // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0002(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikPartyManager.IsPartyFull
	 */
	struct USheikPartyManager_IsPartyFull_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikPartyManager.IsPartyChatOnlyEnabled
	 */
	struct USheikPartyManager_IsPartyChatOnlyEnabled_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikPartyManager.IsLocalPlayerVoiceChatMuted
	 */
	struct USheikPartyManager_IsLocalPlayerVoiceChatMuted_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikPartyManager.IsLocalPlayerVoiceChatDeafened
	 */
	struct USheikPartyManager_IsLocalPlayerVoiceChatDeafened_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikPartyManager.IsLocalPlayerPartyLeader
	 */
	struct USheikPartyManager_IsLocalPlayerPartyLeader_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikPartyManager.IsLocalPlayerLobbyLeader
	 */
	struct USheikPartyManager_IsLocalPlayerLobbyLeader_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikPartyManager.IsInEOSLobby
	 */
	struct USheikPartyManager_IsInEOSLobby_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikPartyManager.IsAttemptingMatchmaking
	 */
	struct USheikPartyManager_IsAttemptingMatchmaking_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikPartyManager.InviteToPlatformParty
	 */
	struct USheikPartyManager_InviteToPlatformParty_Params
	{
	public:
		struct FSheikPlayerAccount                                 PlayerAccount;                                           // 0x0000(0x02F0)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikPartyManager.InviteToCozmoParty
	 */
	struct USheikPartyManager_InviteToCozmoParty_Params
	{
	public:
		class FString                                              PlayerCozmoId;                                           // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikPartyManager.InitializeVoiceChat
	 */
	struct USheikPartyManager_InitializeVoiceChat_Params
	{	};

	/**
	 * Function Sheik.SheikPartyManager.HasVoiceChatPrivilege
	 */
	struct USheikPartyManager_HasVoiceChatPrivilege_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikPartyManager.HasPSNActivityIntent
	 */
	struct USheikPartyManager_HasPSNActivityIntent_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikPartyManager.HasPlatformParty
	 */
	struct USheikPartyManager_HasPlatformParty_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikPartyManager.HasEOSParty
	 */
	struct USheikPartyManager_HasEOSParty_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikPartyManager.HasCozmoParty
	 */
	struct USheikPartyManager_HasCozmoParty_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikPartyManager.HandleRestrictedMatchFound
	 */
	struct USheikPartyManager_HandleRestrictedMatchFound_Params
	{
	public:
		class FString                                              InviteCode;                                              // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikPartyManager.GetVoiceChatMuteStatusForPlayer
	 */
	struct USheikPartyManager_GetVoiceChatMuteStatusForPlayer_Params
	{
	public:
		class FString                                              PlayerName;                                              // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikPartyManager.GetVoiceChatActiveParty
	 */
	struct USheikPartyManager_GetVoiceChatActiveParty_Params
	{
	public:
		ESheikVOIPPartyType                                        ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikPartyManager.GetTimeElapsed
	 */
	struct USheikPartyManager_GetTimeElapsed_Params
	{
	public:
		struct FTimespan                                           ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikPartyManager.GetPlayersInVoiceChannel
	 */
	struct USheikPartyManager_GetPlayersInVoiceChannel_Params
	{
	public:
		TArray<class FString>                                      ReturnValue;                                             // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikPartyManager.GetPlatformPartyId
	 */
	struct USheikPartyManager_GetPlatformPartyId_Params
	{
	public:
		class FString                                              ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikPartyManager.GetPartyMemberNames
	 */
	struct USheikPartyManager_GetPartyMemberNames_Params
	{
	public:
		TArray<class FString>                                      ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikPartyManager.GetLocalProductUserId
	 */
	struct USheikPartyManager_GetLocalProductUserId_Params
	{
	public:
		class FString                                              ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikPartyManager.GetLocalPlayerAttributeData
	 */
	struct USheikPartyManager_GetLocalPlayerAttributeData_Params
	{
	public:
		struct FPlayerPartyAttributesInfo                          ReturnValue;                                             // 0x0000(0x00E0)  (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikPartyManager.GetLoadoutFromAttributes
	 */
	struct USheikPartyManager_GetLoadoutFromAttributes_Params
	{
	public:
		TArray<struct FMatchmakerPlayerAttribute>                  AttributeList;                                           // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
		struct FCharacterLoadout                                   OutLoadout;                                              // 0x0010(0x0070)  (Parm, OutParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikPartyManager.GetEOSPartyId
	 */
	struct USheikPartyManager_GetEOSPartyId_Params
	{
	public:
		class FString                                              ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikPartyManager.GetEosAudioOutputDeviceMuted
	 */
	struct USheikPartyManager_GetEosAudioOutputDeviceMuted_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikPartyManager.GetEosAudioInputDeviceMuted
	 */
	struct USheikPartyManager_GetEosAudioInputDeviceMuted_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikPartyManager.GetDefaultAudioOutputDevice
	 */
	struct USheikPartyManager_GetDefaultAudioOutputDevice_Params
	{
	public:
		struct FEOSVoiceChatDeviceInfo                             ReturnValue;                                             // 0x0000(0x0020)  (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikPartyManager.GetDefaultAudioInputDevice
	 */
	struct USheikPartyManager_GetDefaultAudioInputDevice_Params
	{
	public:
		struct FEOSVoiceChatDeviceInfo                             ReturnValue;                                             // 0x0000(0x0020)  (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikPartyManager.GetCurrentAudioOutputDevice
	 */
	struct USheikPartyManager_GetCurrentAudioOutputDevice_Params
	{
	public:
		struct FEOSVoiceChatDeviceInfo                             ReturnValue;                                             // 0x0000(0x0020)  (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikPartyManager.GetCurrentAudioInputDevice
	 */
	struct USheikPartyManager_GetCurrentAudioInputDevice_Params
	{
	public:
		struct FEOSVoiceChatDeviceInfo                             ReturnValue;                                             // 0x0000(0x0020)  (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikPartyManager.GetCozmoPartyId
	 */
	struct USheikPartyManager_GetCozmoPartyId_Params
	{
	public:
		class FString                                              ReturnValue;                                             // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikPartyManager.GetAvailableAudioOutputDevices
	 */
	struct USheikPartyManager_GetAvailableAudioOutputDevices_Params
	{
	public:
		TArray<struct FEOSVoiceChatDeviceInfo>                     ReturnValue;                                             // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikPartyManager.GetAvailableAudioInputDevices
	 */
	struct USheikPartyManager_GetAvailableAudioInputDevices_Params
	{
	public:
		TArray<struct FEOSVoiceChatDeviceInfo>                     ReturnValue;                                             // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikPartyManager.DisplayPlatformInviteUI
	 */
	struct USheikPartyManager_DisplayPlatformInviteUI_Params
	{	};

	/**
	 * Function Sheik.SheikPartyManager.DisplayPartyInfo
	 */
	struct USheikPartyManager_DisplayPartyInfo_Params
	{
	public:
		class AHUD*                                                HUD;                                                     // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      TextStartX;                                              // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      TextStartY;                                              // 0x000C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      TextVerticalOffset;                                      // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikPartyManager.CreateTeamPartyIfNotRunning
	 */
	struct USheikPartyManager_CreateTeamPartyIfNotRunning_Params
	{	};

	/**
	 * Function Sheik.SheikPartyManager.CreatePrivateParty
	 */
	struct USheikPartyManager_CreatePrivateParty_Params
	{	};

	/**
	 * Function Sheik.SheikPartyManager.ClearPSNActivityIntent
	 */
	struct USheikPartyManager_ClearPSNActivityIntent_Params
	{	};

	/**
	 * Function Sheik.SheikPartyManager.CheckAvailableAudioDevicesForDeviceName
	 */
	struct USheikPartyManager_CheckAvailableAudioDevicesForDeviceName_Params
	{
	public:
		class FString                                              AudioDeviceName;                                         // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<struct FEOSVoiceChatDeviceInfo>                     AvailableAudioDevices;                                   // 0x0010(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0020(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikPartyManager.CheckActivityForMatchmakingConfig
	 */
	struct USheikPartyManager_CheckActivityForMatchmakingConfig_Params
	{
	public:
		class FString                                              ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikPartyManager.CanInviteToParty
	 */
	struct USheikPartyManager_CanInviteToParty_Params
	{
	public:
		struct FSheikPlayerAccount                                 Account;                                                 // 0x0000(0x02F0)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x02F0(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikPartyManager.AreAllPlayersMuted
	 */
	struct USheikPartyManager_AreAllPlayersMuted_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikPinComponent.VictimMontageEnded
	 */
	struct USheikPinComponent_VictimMontageEnded_Params
	{
	public:
		class UAnimMontage*                                        Montage;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bInterrupted;                                            // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikPinComponent.ServerReportMinigameResultsForVictim
	 */
	struct USheikPinComponent_ServerReportMinigameResultsForVictim_Params
	{
	public:
		bool                                                       bSuccess;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikPinComponent.ServerReportMinigameInputSuccess
	 */
	struct USheikPinComponent_ServerReportMinigameInputSuccess_Params
	{
	public:
		int32_t                                                    SuccessfulInputs;                                        // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikPinComponent.ServerReportMinigameHasBegun
	 */
	struct USheikPinComponent_ServerReportMinigameHasBegun_Params
	{	};

	/**
	 * Function Sheik.SheikPinComponent.ServerReportMinigameAutoSuccessForVictim
	 */
	struct USheikPinComponent_ServerReportMinigameAutoSuccessForVictim_Params
	{	};

	/**
	 * Function Sheik.SheikPinComponent.OnResInterrupted
	 */
	struct USheikPinComponent_OnResInterrupted_Params
	{
	public:
		struct FIGInstanceHitData                                  HitData;                                                 // 0x0000(0x0048)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikPinComponent.OnResAborted
	 */
	struct USheikPinComponent_OnResAborted_Params
	{	};

	/**
	 * Function Sheik.SheikPinComponent.OnRep_PinStateInfo
	 */
	struct USheikPinComponent_OnRep_PinStateInfo_Params
	{	};

	/**
	 * Function Sheik.SheikPinComponent.OnRep_PinningCollisionEnabled
	 */
	struct USheikPinComponent_OnRep_PinningCollisionEnabled_Params
	{	};

	/**
	 * Function Sheik.SheikPinComponent.OnPinInterrupted
	 */
	struct USheikPinComponent_OnPinInterrupted_Params
	{
	public:
		struct FIGInstanceHitData                                  HitData;                                                 // 0x0000(0x0048)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikPinComponent.OnPinAborted
	 */
	struct USheikPinComponent_OnPinAborted_Params
	{	};

	/**
	 * Function Sheik.SheikPinComponent.OnOwnerRecovered
	 */
	struct USheikPinComponent_OnOwnerRecovered_Params
	{
	public:
		class AIGCharacter*                                        InRecovered;                                             // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikPinComponent.OnOwnerDowned
	 */
	struct USheikPinComponent_OnOwnerDowned_Params
	{
	public:
		class AIGCharacter*                                        InVictim;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikPinComponent.OnMinigameTargetHitTimerExpired
	 */
	struct USheikPinComponent_OnMinigameTargetHitTimerExpired_Params
	{	};

	/**
	 * Function Sheik.SheikPinComponent.OnMinigameStarted
	 */
	struct USheikPinComponent_OnMinigameStarted_Params
	{
	public:
		struct FSheikMinigameInfo                                  MinigameInfo;                                            // 0x0000(0x0030)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikPinComponent.OnMinigamePenaltyTimerExpired
	 */
	struct USheikPinComponent_OnMinigamePenaltyTimerExpired_Params
	{	};

	/**
	 * Function Sheik.SheikPinComponent.OnMinigameInput
	 */
	struct USheikPinComponent_OnMinigameInput_Params
	{
	public:
		struct FSheikMinigameResults                               MinigameResults;                                         // 0x0000(0x0020)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikPinComponent.OnExitPinNotifyArea
	 */
	struct USheikPinComponent_OnExitPinNotifyArea_Params
	{
	public:
		class UPrimitiveComponent*                                 OverlappedComponent;                                     // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AActor*                                              OtherActor;                                              // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UPrimitiveComponent*                                 OtherComp;                                               // 0x0010(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    OtherBodyIndex;                                          // 0x0018(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikPinComponent.OnExitPinArea
	 */
	struct USheikPinComponent_OnExitPinArea_Params
	{
	public:
		class UPrimitiveComponent*                                 OverlappedComponent;                                     // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AActor*                                              OtherActor;                                              // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UPrimitiveComponent*                                 OtherComp;                                               // 0x0010(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    OtherBodyIndex;                                          // 0x0018(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikPinComponent.OnEnterPinNotifyArea
	 */
	struct USheikPinComponent_OnEnterPinNotifyArea_Params
	{
	public:
		class UPrimitiveComponent*                                 OverlappedComponent;                                     // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AActor*                                              OtherActor;                                              // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UPrimitiveComponent*                                 OtherComp;                                               // 0x0010(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    OtherBodyIndex;                                          // 0x0018(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bFromSweep;                                              // 0x001C(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_GFGJ[0x3];                                   // 0x001D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FHitResult                                          SweepResult;                                             // 0x0020(0x0088)  (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikPinComponent.OnEnterPinArea
	 */
	struct USheikPinComponent_OnEnterPinArea_Params
	{
	public:
		class UPrimitiveComponent*                                 OverlappedComponent;                                     // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AActor*                                              OtherActor;                                              // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UPrimitiveComponent*                                 OtherComp;                                               // 0x0010(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    OtherBodyIndex;                                          // 0x0018(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bFromSweep;                                              // 0x001C(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_SXLS[0x3];                                   // 0x001D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FHitResult                                          SweepResult;                                             // 0x0020(0x0088)  (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikPinComponent.GetPinMinigameSettings
	 */
	struct USheikPinComponent_GetPinMinigameSettings_Params
	{
	public:
		TArray<struct FSheikPinMinigameSettings>                   ReturnValue;                                             // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikPinComponent.GetPinMinigameHitsNeededForKickout
	 */
	struct USheikPinComponent_GetPinMinigameHitsNeededForKickout_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikPinComponent.GetPinMinigameHitsForCurrentPin
	 */
	struct USheikPinComponent_GetPinMinigameHitsForCurrentPin_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikPinComponent.GetPinMingameSettingsForCurrentKnockdown
	 */
	struct USheikPinComponent_GetPinMingameSettingsForCurrentKnockdown_Params
	{
	public:
		struct FSheikPinMinigameSettings                           ReturnValue;                                             // 0x0000(0x0108)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikPinComponent.ClientStartMinigameForVictim
	 */
	struct USheikPinComponent_ClientStartMinigameForVictim_Params
	{	};

	/**
	 * Function Sheik.SheikPinComponent.ClientSetCharacterCollisionEnabled
	 */
	struct USheikPinComponent_ClientSetCharacterCollisionEnabled_Params
	{
	public:
		bool                                                       bEnabled;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_ORKT[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class ASheikCharacter*                                     Attacker;                                                // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class ASheikCharacter*                                     Victim;                                                  // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikPinComponent.ClientEndMinigameForVictim
	 */
	struct USheikPinComponent_ClientEndMinigameForVictim_Params
	{	};

	/**
	 * Function Sheik.SheikPinComponent.ClientBroadcastPinMinigameInputSuccess
	 */
	struct USheikPinComponent_ClientBroadcastPinMinigameInputSuccess_Params
	{
	public:
		class ASheikCharacter*                                     Attacker;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class ASheikCharacter*                                     Victim;                                                  // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    SuccessfulInputs;                                        // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikPinComponent.ClientBroadcastPinEvent
	 */
	struct USheikPinComponent_ClientBroadcastPinEvent_Params
	{
	public:
		ESheikPinEventType                                         InType;                                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_WXK0[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class ASheikCharacter*                                     Attacker;                                                // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class ASheikCharacter*                                     Victim;                                                  // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikPinComponent.AttackerMontageEnded
	 */
	struct USheikPinComponent_AttackerMontageEnded_Params
	{
	public:
		class UAnimMontage*                                        Montage;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bInterrupted;                                            // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikPing.GetReflectedVectorWidgetLocation
	 */
	struct USheikPing_GetReflectedVectorWidgetLocation_Params
	{
	public:
		struct FVector2D                                           ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikPing.GetDesiredScreenLocation
	 */
	struct USheikPing_GetDesiredScreenLocation_Params
	{
	public:
		struct FVector2D                                           InWidgetPosition;                                        // 0x0000(0x0008)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bForceToTopOrBottomEdge;                                 // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_B4GE[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FSheikPingScreenLocation                            ReturnValue;                                             // 0x000C(0x000C)  (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikPlayerAccountsManager.SetPresence
	 */
	struct USheikPlayerAccountsManager_SetPresence_Params
	{
	public:
		ESheikPresence                                             Presence;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikPlayerAccountsManager.SendFunnelTelemetry
	 */
	struct USheikPlayerAccountsManager_SendFunnelTelemetry_Params
	{
	public:
		ESheikFunnelLocation                                       Location;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikPlayerAccountsManager.ResolveServiceToDisplay
	 */
	struct USheikPlayerAccountsManager_ResolveServiceToDisplay_Params
	{
	public:
		struct FSheikPlayerSocialEntry                             SocialEntry;                                             // 0x0000(0x03C8)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		ESheikPlatformService                                      ReturnValue;                                             // 0x03C8(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikPlayerAccountsManager.ResolveDisplayName
	 */
	struct USheikPlayerAccountsManager_ResolveDisplayName_Params
	{
	public:
		struct FSheikPlayerSocialEntry                             SocialEntry;                                             // 0x0000(0x03C8)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		class FString                                              ReturnValue;                                             // 0x03C8(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikPlayerAccountsManager.QueryPartyMemberAccountData
	 */
	struct USheikPlayerAccountsManager_QueryPartyMemberAccountData_Params
	{
	public:
		struct FPartyMemberInfo                                    PartyMemberInfo;                                         // 0x0000(0x0090)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      Delegate;                                                // 0x0090(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction Sheik.SheikPlayerAccountsManager.OnQueryPartyMemberAccountData__DelegateSignature
	 */
	struct USheikPlayerAccountsManager_OnQueryPartyMemberAccountData__DelegateSignature_Params
	{
	public:
		struct FSheikPlayerAccount                                 FoundAccount;                                            // 0x0000(0x02F0)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		bool                                                       bWasSuccessful;                                          // 0x02F0(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction Sheik.SheikPlayerAccountsManager.OnGetSocialData__DelegateSignature
	 */
	struct USheikPlayerAccountsManager_OnGetSocialData__DelegateSignature_Params
	{
	public:
		TArray<struct FSheikPlayerSocialEntry>                     SocialEntries;                                           // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
		bool                                                       bWasSuccessful;                                          // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction Sheik.SheikPlayerAccountsManager.OnGetRecentPlayers__DelegateSignature
	 */
	struct USheikPlayerAccountsManager_OnGetRecentPlayers__DelegateSignature_Params
	{
	public:
		TArray<struct FSheikPlayerSocialEntry>                     SocialEntries;                                           // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
		bool                                                       bWasSuccessful;                                          // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikPlayerAccountsManager.IsValidPlayerSocialEntry
	 */
	struct USheikPlayerAccountsManager_IsValidPlayerSocialEntry_Params
	{
	public:
		struct FSheikPlayerSocialEntry                             PlayerSocialEntry;                                       // 0x0000(0x03C8)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x03C8(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikPlayerAccountsManager.IsValidPlayerAccount
	 */
	struct USheikPlayerAccountsManager_IsValidPlayerAccount_Params
	{
	public:
		struct FSheikPlayerAccount                                 Account;                                                 // 0x0000(0x02F0)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x02F0(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikPlayerAccountsManager.IsValidPartyMemberInfo
	 */
	struct USheikPlayerAccountsManager_IsValidPartyMemberInfo_Params
	{
	public:
		struct FPartyMemberInfo                                    PartyMemberInfo;                                         // 0x0000(0x0090)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0090(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikPlayerAccountsManager.IsValidPartyInvitation
	 */
	struct USheikPlayerAccountsManager_IsValidPartyInvitation_Params
	{
	public:
		struct FPartyInvitation                                    PartyInvitation;                                         // 0x0000(0x0030)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0030(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikPlayerAccountsManager.GetRecentPlayers
	 */
	struct USheikPlayerAccountsManager_GetRecentPlayers_Params
	{
	public:
		class FScriptDelegate                                      Delegate;                                                // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikPlayerAccountsManager.GetPlayerSocialData
	 */
	struct USheikPlayerAccountsManager_GetPlayerSocialData_Params
	{
	public:
		class FScriptDelegate                                      Delegate;                                                // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikPlayerAccountsManager.GetMyPlatformsExternalAccount
	 */
	struct USheikPlayerAccountsManager_GetMyPlatformsExternalAccount_Params
	{
	public:
		struct FSheikPlayerAccount                                 Account;                                                 // 0x0000(0x02F0)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		struct FSheikExternalAccount                               ExternalAccount;                                         // 0x02F0(0x0040)  (Parm, OutParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikPlayerAccountsManager.GetLatestExternalAccount
	 */
	struct USheikPlayerAccountsManager_GetLatestExternalAccount_Params
	{
	public:
		struct FSheikPlayerAccount                                 SheikAccount;                                            // 0x0000(0x02F0)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		struct FSheikExternalAccount                               ReturnValue;                                             // 0x02F0(0x0040)  (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikPlayerAccountsManager.GenerateRandomSocialEntry
	 */
	struct USheikPlayerAccountsManager_GenerateRandomSocialEntry_Params
	{
	public:
		struct FSheikPlayerSocialEntry                             Entry;                                                   // 0x0000(0x03C8)  (Parm, OutParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikPlayerControllerCommon.UseIntensiveAccessorySet
	 */
	struct ASheikPlayerControllerCommon_UseIntensiveAccessorySet_Params
	{	};

	/**
	 * Function Sheik.SheikPlayerControllerCommon.UpdateTimePlayed
	 */
	struct ASheikPlayerControllerCommon_UpdateTimePlayed_Params
	{	};

	/**
	 * Function Sheik.SheikPlayerControllerCommon.TriggerNearestEvent
	 */
	struct ASheikPlayerControllerCommon_TriggerNearestEvent_Params
	{
	public:
		float                                                      TimeTillEventStart;                                      // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      LengthOfEvent;                                           // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikPlayerControllerCommon.TriggerAISpawnersOfTag
	 */
	struct ASheikPlayerControllerCommon_TriggerAISpawnersOfTag_Params
	{
	public:
		class FName                                                Tag;                                                     // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikPlayerControllerCommon.ToggleShowPerkXPMeter
	 */
	struct ASheikPlayerControllerCommon_ToggleShowPerkXPMeter_Params
	{	};

	/**
	 * Function Sheik.SheikPlayerControllerCommon.SwapBodyType
	 */
	struct ASheikPlayerControllerCommon_SwapBodyType_Params
	{
	public:
		int32_t                                                    index;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikPlayerControllerCommon.SkipWaitForPlayers
	 */
	struct ASheikPlayerControllerCommon_SkipWaitForPlayers_Params
	{	};

	/**
	 * Function Sheik.SheikPlayerControllerCommon.ShouldLeaveParty
	 */
	struct ASheikPlayerControllerCommon_ShouldLeaveParty_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikPlayerControllerCommon.SetPlayerShouldMoveToSpectator
	 */
	struct ASheikPlayerControllerCommon_SetPlayerShouldMoveToSpectator_Params
	{	};

	/**
	 * Function Sheik.SheikPlayerControllerCommon.ServerTriggerAISpawnersOfTag
	 */
	struct ASheikPlayerControllerCommon_ServerTriggerAISpawnersOfTag_Params
	{
	public:
		class FName                                                Tag;                                                     // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikPlayerControllerCommon.ServerToggleBotVisualization
	 */
	struct ASheikPlayerControllerCommon_ServerToggleBotVisualization_Params
	{
	public:
		bool                                                       bEnable;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikPlayerControllerCommon.ServerSwapBodyType
	 */
	struct ASheikPlayerControllerCommon_ServerSwapBodyType_Params
	{
	public:
		struct FSheikSpawnParams                                   NewSpawnParams;                                          // 0x0000(0x0480)  (ConstParm, Parm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikPlayerControllerCommon.ServerStartHotfixCheck
	 */
	struct ASheikPlayerControllerCommon_ServerStartHotfixCheck_Params
	{	};

	/**
	 * Function Sheik.SheikPlayerControllerCommon.ServerSetEOSLobbyId
	 */
	struct ASheikPlayerControllerCommon_ServerSetEOSLobbyId_Params
	{
	public:
		struct FGuid                                               TeamID;                                                  // 0x0000(0x0010)  (ConstParm, Parm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              InEOSLobbyId;                                            // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikPlayerControllerCommon.ServerSendPlayerSpawnInfo
	 */
	struct ASheikPlayerControllerCommon_ServerSendPlayerSpawnInfo_Params
	{
	public:
		struct FSheikSpawnParams                                   InSpawnParams;                                           // 0x0000(0x0480)  (Parm, NativeAccessSpecifierPublic)
		TArray<class FName>                                        InAccessoriesLoadoutIds;                                 // 0x0480(0x0010)  (ConstParm, Parm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
		struct FTitleCardLoadoutIds                                InTitleCardLoadoutsId;                                   // 0x0490(0x0048)  (Parm, NativeAccessSpecifierPublic)
		TArray<class FName>                                        InStatsToTrack;                                          // 0x04D8(0x0010)  (ConstParm, Parm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
		TArray<class FName>                                        InSeasonalStatBaseNames;                                 // 0x04E8(0x0010)  (ConstParm, Parm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
		TArray<class FName>                                        InSeasonalFields;                                        // 0x04F8(0x0010)  (ConstParm, Parm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikPlayerControllerCommon.ServerSendPlatformAccountInfo
	 */
	struct ASheikPlayerControllerCommon_ServerSendPlatformAccountInfo_Params
	{
	public:
		class FString                                              CozmoId;                                                 // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		ESheikPlatform                                             Platform;                                                // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		ESheikPlatformService                                      PlatformService;                                         // 0x0011(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_09O8[0x6];                                   // 0x0012(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              PlatformId;                                              // 0x0018(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              PlatformName;                                            // 0x0028(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              EOSId;                                                   // 0x0038(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              ProductId;                                               // 0x0048(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikPlayerControllerCommon.ServerSendAntiCheatMessage
	 */
	struct ASheikPlayerControllerCommon_ServerSendAntiCheatMessage_Params
	{
	public:
		TArray<unsigned char>                                      Data;                                                    // 0x0000(0x0010)  (ConstParm, Parm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikPlayerControllerCommon.ServerRequestTeleport
	 */
	struct ASheikPlayerControllerCommon_ServerRequestTeleport_Params
	{
	public:
		class ATeleportLocation*                                   TeleportLocation;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikPlayerControllerCommon.ServerRequestSimplePingType
	 */
	struct ASheikPlayerControllerCommon_ServerRequestSimplePingType_Params
	{
	public:
		EIGPingType                                                PingType;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_F7W2[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FVector                                             OriginLocation;                                          // 0x0004(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             OriginDirection;                                         // 0x0010(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikPlayerControllerCommon.ServerRequestRespawn
	 */
	struct ASheikPlayerControllerCommon_ServerRequestRespawn_Params
	{	};

	/**
	 * Function Sheik.SheikPlayerControllerCommon.ServerRequestMapChange
	 */
	struct ASheikPlayerControllerCommon_ServerRequestMapChange_Params
	{
	public:
		class FString                                              MapName;                                                 // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikPlayerControllerCommon.ServerRequestBRLaunch
	 */
	struct ASheikPlayerControllerCommon_ServerRequestBRLaunch_Params
	{
	public:
		class FString                                              LocationName;                                            // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikPlayerControllerCommon.ServerNotifyTeamOfPing
	 */
	struct ASheikPlayerControllerCommon_ServerNotifyTeamOfPing_Params
	{
	public:
		bool                                                       bIncludeSelf;                                            // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EIGPingType                                                PingType;                                                // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_TV16[0x2];                                   // 0x0002(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FVector                                             PingLocation;                                            // 0x0004(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             PingNormal;                                              // 0x0010(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_QOW4[0x4];                                   // 0x001C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UObject*                                             PingedObj;                                               // 0x0020(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikPlayerControllerCommon.ServerControllerLeavingGameSession
	 */
	struct ASheikPlayerControllerCommon_ServerControllerLeavingGameSession_Params
	{
	public:
		TArray<class FString>                                      PartyMemberIds;                                          // 0x0000(0x0010)  (ConstParm, Parm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikPlayerControllerCommon.ServerClearAllBots
	 */
	struct ASheikPlayerControllerCommon_ServerClearAllBots_Params
	{	};

	/**
	 * Function Sheik.SheikPlayerControllerCommon.ServerAcceptPlayerSession
	 */
	struct ASheikPlayerControllerCommon_ServerAcceptPlayerSession_Params
	{
	public:
		class FString                                              PlayerSessionId;                                         // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		uint32_t                                                   PlayerUniqueID;                                          // 0x0010(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikPlayerControllerCommon.ReturnToFrontend
	 */
	struct ASheikPlayerControllerCommon_ReturnToFrontend_Params
	{	};

	/**
	 * Function Sheik.SheikPlayerControllerCommon.RequestTriggerNearestEvent
	 */
	struct ASheikPlayerControllerCommon_RequestTriggerNearestEvent_Params
	{
	public:
		float                                                      TimeTillEventStart;                                      // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      LengthOfEvent;                                           // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikPlayerControllerCommon.RequestSkipWaitForPlayers
	 */
	struct ASheikPlayerControllerCommon_RequestSkipWaitForPlayers_Params
	{	};

	/**
	 * Function Sheik.SheikPlayerControllerCommon.RequestNewFinalRoundOverrideBeacon
	 */
	struct ASheikPlayerControllerCommon_RequestNewFinalRoundOverrideBeacon_Params
	{
	public:
		class ASheikFinalRoundBeacon*                              NewVal;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikPlayerControllerCommon.RequestChangeOnlyUseDemoRingsFlag
	 */
	struct ASheikPlayerControllerCommon_RequestChangeOnlyUseDemoRingsFlag_Params
	{
	public:
		bool                                                       Val;                                                     // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikPlayerControllerCommon.RecieveNewFinalRoundOverrideBeacon
	 */
	struct ASheikPlayerControllerCommon_RecieveNewFinalRoundOverrideBeacon_Params
	{
	public:
		class ASheikFinalRoundBeacon*                              NewVal;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikPlayerControllerCommon.PingContextReset
	 */
	struct ASheikPlayerControllerCommon_PingContextReset_Params
	{	};

	/**
	 * DelegateFunction Sheik.SheikPlayerControllerCommon.OnTeamInfoUpdated__DelegateSignature
	 */
	struct ASheikPlayerControllerCommon_OnTeamInfoUpdated__DelegateSignature_Params
	{	};

	/**
	 * DelegateFunction Sheik.SheikPlayerControllerCommon.OnRoundPlacementChanged__DelegateSignature
	 */
	struct ASheikPlayerControllerCommon_OnRoundPlacementChanged__DelegateSignature_Params
	{
	public:
		int32_t                                                    NewPlace;                                                // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikPlayerControllerCommon.OnRep_RoundPlacement
	 */
	struct ASheikPlayerControllerCommon_OnRep_RoundPlacement_Params
	{	};

	/**
	 * Function Sheik.SheikPlayerControllerCommon.OnRep_MakeTeammatesVisible
	 */
	struct ASheikPlayerControllerCommon_OnRep_MakeTeammatesVisible_Params
	{	};

	/**
	 * Function Sheik.SheikPlayerControllerCommon.OnPlayerSetAsTeamLeader
	 */
	struct ASheikPlayerControllerCommon_OnPlayerSetAsTeamLeader_Params
	{
	public:
		bool                                                       bIsTeamLeader;                                           // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction Sheik.SheikPlayerControllerCommon.OnEnteredSpectatorMode__DelegateSignature
	 */
	struct ASheikPlayerControllerCommon_OnEnteredSpectatorMode__DelegateSignature_Params
	{	};

	/**
	 * DelegateFunction Sheik.SheikPlayerControllerCommon.OnCharacterPawnChanged__DelegateSignature
	 */
	struct ASheikPlayerControllerCommon_OnCharacterPawnChanged__DelegateSignature_Params
	{
	public:
		class ASheikCharacter*                                     SheikCharacter;                                          // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction Sheik.SheikPlayerControllerCommon.OnCharacterDied__DelegateSignature
	 */
	struct ASheikPlayerControllerCommon_OnCharacterDied__DelegateSignature_Params
	{
	public:
		ECauseOfDeath                                              Cause;                                                   // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction Sheik.SheikPlayerControllerCommon.OnCharacterDamaged__DelegateSignature
	 */
	struct ASheikPlayerControllerCommon_OnCharacterDamaged__DelegateSignature_Params
	{
	public:
		struct FIGInstanceHitData                                  HitData;                                                 // 0x0000(0x0048)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikPlayerControllerCommon.LogServerStateInfo
	 */
	struct ASheikPlayerControllerCommon_LogServerStateInfo_Params
	{
	public:
		struct FServerStateInfo                                    StateInfo;                                               // 0x0000(0x0040)  (ConstParm, Parm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikPlayerControllerCommon.IsPlayerInParty
	 */
	struct ASheikPlayerControllerCommon_IsPlayerInParty_Params
	{
	public:
		class ASheikPlayerStateCommon*                             InPlayerState;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikPlayerControllerCommon.IsInTeam
	 */
	struct ASheikPlayerControllerCommon_IsInTeam_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikPlayerControllerCommon.IsCharacterMeshCached
	 */
	struct ASheikPlayerControllerCommon_IsCharacterMeshCached_Params
	{
	public:
		int32_t                                                    PlayerId;                                                // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikPlayerControllerCommon.InformTeammateOfDeath
	 */
	struct ASheikPlayerControllerCommon_InformTeammateOfDeath_Params
	{
	public:
		ECauseOfDeath                                              Cause;                                                   // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikPlayerControllerCommon.HasPlayerPlacementBeenProcessed
	 */
	struct ASheikPlayerControllerCommon_HasPlayerPlacementBeenProcessed_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikPlayerControllerCommon.HandleTeamInfoUpdatedWithoutLobby
	 */
	struct ASheikPlayerControllerCommon_HandleTeamInfoUpdatedWithoutLobby_Params
	{	};

	/**
	 * Function Sheik.SheikPlayerControllerCommon.HandleTeamInfoUpdated
	 */
	struct ASheikPlayerControllerCommon_HandleTeamInfoUpdated_Params
	{	};

	/**
	 * Function Sheik.SheikPlayerControllerCommon.HandleOnGameFlowStateChanged
	 */
	struct ASheikPlayerControllerCommon_HandleOnGameFlowStateChanged_Params
	{
	public:
		EGameFlowState                                             GameFlowState;                                           // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikPlayerControllerCommon.HandleOnCharacterDied
	 */
	struct ASheikPlayerControllerCommon_HandleOnCharacterDied_Params
	{
	public:
		ECauseOfDeath                                              Cause;                                                   // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikPlayerControllerCommon.GetTeammatesInfo
	 */
	struct ASheikPlayerControllerCommon_GetTeammatesInfo_Params
	{
	public:
		bool                                                       bIncludeLocalPlayer;                                     // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_TQXT[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<class AIGPlayerState*>                              ReturnValue;                                             // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikPlayerControllerCommon.GetSheikXpSystem
	 */
	struct ASheikPlayerControllerCommon_GetSheikXpSystem_Params
	{
	public:
		class USheikXpSystem*                                      ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikPlayerControllerCommon.GetSheikCharacter
	 */
	struct ASheikPlayerControllerCommon_GetSheikCharacter_Params
	{
	public:
		class ASheikCharacter*                                     ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikPlayerControllerCommon.GetRoundPlacement
	 */
	struct ASheikPlayerControllerCommon_GetRoundPlacement_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikPlayerControllerCommon.GetNumTeammatesAlive
	 */
	struct ASheikPlayerControllerCommon_GetNumTeammatesAlive_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikPlayerControllerCommon.GetNumTeammates
	 */
	struct ASheikPlayerControllerCommon_GetNumTeammates_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikPlayerControllerCommon.GetLocalPlayerGameInfo
	 */
	struct ASheikPlayerControllerCommon_GetLocalPlayerGameInfo_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class USheikGameInfo*                                      ReturnValue;                                             // 0x0008(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikPlayerControllerCommon.GetAllowedPingVersion
	 */
	struct ASheikPlayerControllerCommon_GetAllowedPingVersion_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikPlayerControllerCommon.ForceUserToMainMenu_BP
	 */
	struct ASheikPlayerControllerCommon_ForceUserToMainMenu_BP_Params
	{	};

	/**
	 * Function Sheik.SheikPlayerControllerCommon.FlushKeys
	 */
	struct ASheikPlayerControllerCommon_FlushKeys_Params
	{	};

	/**
	 * Function Sheik.SheikPlayerControllerCommon.ExecUploadAllServerTrackedPlayerStats
	 */
	struct ASheikPlayerControllerCommon_ExecUploadAllServerTrackedPlayerStats_Params
	{	};

	/**
	 * Function Sheik.SheikPlayerControllerCommon.ExecToggleBotVisualization
	 */
	struct ASheikPlayerControllerCommon_ExecToggleBotVisualization_Params
	{
	public:
		bool                                                       bEnable;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikPlayerControllerCommon.ExecToggleBotSpawnWithTreeOnPing
	 */
	struct ASheikPlayerControllerCommon_ExecToggleBotSpawnWithTreeOnPing_Params
	{
	public:
		bool                                                       bIsEnabled;                                              // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_2VB4[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              ProfileToSpawn;                                          // 0x0008(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikPlayerControllerCommon.ExecToggleBotSpawnOnPing
	 */
	struct ASheikPlayerControllerCommon_ExecToggleBotSpawnOnPing_Params
	{
	public:
		bool                                                       bIsEnabled;                                              // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_UYM3[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              ProfileToSpawn;                                          // 0x0008(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikPlayerControllerCommon.ExecStoreXpInPlayerData
	 */
	struct ASheikPlayerControllerCommon_ExecStoreXpInPlayerData_Params
	{	};

	/**
	 * Function Sheik.SheikPlayerControllerCommon.ExecStopAllRepProgressOnServer
	 */
	struct ASheikPlayerControllerCommon_ExecStopAllRepProgressOnServer_Params
	{
	public:
		bool                                                       StopRepProgression;                                      // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikPlayerControllerCommon.ExecStats_UploadSingle_Server
	 */
	struct ASheikPlayerControllerCommon_ExecStats_UploadSingle_Server_Params
	{	};

	/**
	 * Function Sheik.SheikPlayerControllerCommon.ExecStats_UnlockStatsForRead_Server
	 */
	struct ASheikPlayerControllerCommon_ExecStats_UnlockStatsForRead_Server_Params
	{	};

	/**
	 * Function Sheik.SheikPlayerControllerCommon.ExecStats_SetStatValue_Server
	 */
	struct ASheikPlayerControllerCommon_ExecStats_SetStatValue_Server_Params
	{
	public:
		class FName                                                StatName;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      Value;                                                   // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikPlayerControllerCommon.ExecStats_PrintStatsPlayerController_Server
	 */
	struct ASheikPlayerControllerCommon_ExecStats_PrintStatsPlayerController_Server_Params
	{	};

	/**
	 * Function Sheik.SheikPlayerControllerCommon.ExecStats_PrintStatsPlayerController_Client
	 */
	struct ASheikPlayerControllerCommon_ExecStats_PrintStatsPlayerController_Client_Params
	{	};

	/**
	 * Function Sheik.SheikPlayerControllerCommon.ExecStats_PrintComplexStats_Client
	 */
	struct ASheikPlayerControllerCommon_ExecStats_PrintComplexStats_Client_Params
	{	};

	/**
	 * Function Sheik.SheikPlayerControllerCommon.ExecStats_DownloadSingle_Server
	 */
	struct ASheikPlayerControllerCommon_ExecStats_DownloadSingle_Server_Params
	{	};

	/**
	 * Function Sheik.SheikPlayerControllerCommon.ExecStats_DownloadAll_Server
	 */
	struct ASheikPlayerControllerCommon_ExecStats_DownloadAll_Server_Params
	{	};

	/**
	 * Function Sheik.SheikPlayerControllerCommon.ExecStartServerHotfixCheck
	 */
	struct ASheikPlayerControllerCommon_ExecStartServerHotfixCheck_Params
	{	};

	/**
	 * Function Sheik.SheikPlayerControllerCommon.ExecStartPlayground
	 */
	struct ASheikPlayerControllerCommon_ExecStartPlayground_Params
	{	};

	/**
	 * Function Sheik.SheikPlayerControllerCommon.ExecStartFromMD_CurrentMap
	 */
	struct ASheikPlayerControllerCommon_ExecStartFromMD_CurrentMap_Params
	{
	public:
		class FString                                              ModeDescriptor;                                          // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikPlayerControllerCommon.ExecStartFromMD
	 */
	struct ASheikPlayerControllerCommon_ExecStartFromMD_Params
	{
	public:
		class FString                                              ModeDescriptor;                                          // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikPlayerControllerCommon.ExecStartCTF_NoMapTransition
	 */
	struct ASheikPlayerControllerCommon_ExecStartCTF_NoMapTransition_Params
	{
	public:
		unsigned char                                              NumPlayersPerTeam;                                       // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bKeepPartyID;                                            // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bBackFillBots;                                           // 0x0002(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikPlayerControllerCommon.ExecStartBR_NoMapTransition
	 */
	struct ASheikPlayerControllerCommon_ExecStartBR_NoMapTransition_Params
	{
	public:
		unsigned char                                              NumPlayersPerTeam;                                       // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bKeepPartyID;                                            // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bBackFillBots;                                           // 0x0002(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikPlayerControllerCommon.ExecStartBR
	 */
	struct ASheikPlayerControllerCommon_ExecStartBR_Params
	{
	public:
		unsigned char                                              NumPlayersPerTeam;                                       // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bKeepPartyID;                                            // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikPlayerControllerCommon.ExecSkipCannons
	 */
	struct ASheikPlayerControllerCommon_ExecSkipCannons_Params
	{
	public:
		bool                                                       bSkipCannons;                                            // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikPlayerControllerCommon.ExecSimulateLongTimeAway
	 */
	struct ASheikPlayerControllerCommon_ExecSimulateLongTimeAway_Params
	{	};

	/**
	 * Function Sheik.SheikPlayerControllerCommon.ExecSetTeammatesVisible
	 */
	struct ASheikPlayerControllerCommon_ExecSetTeammatesVisible_Params
	{
	public:
		bool                                                       bVisible;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikPlayerControllerCommon.ExecSetNumBackfillBots
	 */
	struct ASheikPlayerControllerCommon_ExecSetNumBackfillBots_Params
	{
	public:
		int32_t                                                    NumBots;                                                 // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikPlayerControllerCommon.ExecSetNewPlayerPolicy
	 */
	struct ASheikPlayerControllerCommon_ExecSetNewPlayerPolicy_Params
	{
	public:
		bool                                                       bCanAcceptNewPlayers;                                    // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikPlayerControllerCommon.ExecSetNewFinalRoundBeacon
	 */
	struct ASheikPlayerControllerCommon_ExecSetNewFinalRoundBeacon_Params
	{
	public:
		class FString                                              BeaconName;                                              // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikPlayerControllerCommon.ExecSetBRTeamMode
	 */
	struct ASheikPlayerControllerCommon_ExecSetBRTeamMode_Params
	{
	public:
		unsigned char                                              TeamSize;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikPlayerControllerCommon.ExecSetAllowSpectateBots
	 */
	struct ASheikPlayerControllerCommon_ExecSetAllowSpectateBots_Params
	{
	public:
		bool                                                       bAllow;                                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikPlayerControllerCommon.ExecResetRingStateTimeline
	 */
	struct ASheikPlayerControllerCommon_ExecResetRingStateTimeline_Params
	{	};

	/**
	 * Function Sheik.SheikPlayerControllerCommon.ExecResetMatchXp
	 */
	struct ASheikPlayerControllerCommon_ExecResetMatchXp_Params
	{	};

	/**
	 * Function Sheik.SheikPlayerControllerCommon.ExecResetLifetimeXp
	 */
	struct ASheikPlayerControllerCommon_ExecResetLifetimeXp_Params
	{	};

	/**
	 * Function Sheik.SheikPlayerControllerCommon.ExecResetAdditionalXp
	 */
	struct ASheikPlayerControllerCommon_ExecResetAdditionalXp_Params
	{	};

	/**
	 * Function Sheik.SheikPlayerControllerCommon.ExecRep_SetRepProgress
	 */
	struct ASheikPlayerControllerCommon_ExecRep_SetRepProgress_Params
	{
	public:
		class FName                                                RepName;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    ProgressValue;                                           // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikPlayerControllerCommon.ExecRep_ResetAllRepProgressOnServer
	 */
	struct ASheikPlayerControllerCommon_ExecRep_ResetAllRepProgressOnServer_Params
	{	};

	/**
	 * Function Sheik.SheikPlayerControllerCommon.ExecRep_RemoveAllRepProgressOnServer
	 */
	struct ASheikPlayerControllerCommon_ExecRep_RemoveAllRepProgressOnServer_Params
	{	};

	/**
	 * Function Sheik.SheikPlayerControllerCommon.ExecRep_PrintRepProgressOnServer
	 */
	struct ASheikPlayerControllerCommon_ExecRep_PrintRepProgressOnServer_Params
	{	};

	/**
	 * Function Sheik.SheikPlayerControllerCommon.ExecRep_CompleteRepByNameOnServer
	 */
	struct ASheikPlayerControllerCommon_ExecRep_CompleteRepByNameOnServer_Params
	{
	public:
		class FName                                                RepName;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikPlayerControllerCommon.ExecRep_CompleteAllRepsOnServer
	 */
	struct ASheikPlayerControllerCommon_ExecRep_CompleteAllRepsOnServer_Params
	{	};

	/**
	 * Function Sheik.SheikPlayerControllerCommon.ExecPinningEnabled
	 */
	struct ASheikPlayerControllerCommon_ExecPinningEnabled_Params
	{
	public:
		bool                                                       bEnabled;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikPlayerControllerCommon.ExecLogServerHotfixVersion
	 */
	struct ASheikPlayerControllerCommon_ExecLogServerHotfixVersion_Params
	{	};

	/**
	 * Function Sheik.SheikPlayerControllerCommon.ExecLogPartyStatus
	 */
	struct ASheikPlayerControllerCommon_ExecLogPartyStatus_Params
	{	};

	/**
	 * Function Sheik.SheikPlayerControllerCommon.ExecLogCurrentXpValues
	 */
	struct ASheikPlayerControllerCommon_ExecLogCurrentXpValues_Params
	{	};

	/**
	 * Function Sheik.SheikPlayerControllerCommon.ExecLeaveTeam
	 */
	struct ASheikPlayerControllerCommon_ExecLeaveTeam_Params
	{	};

	/**
	 * Function Sheik.SheikPlayerControllerCommon.ExecGetServerStateInfo
	 */
	struct ASheikPlayerControllerCommon_ExecGetServerStateInfo_Params
	{	};

	/**
	 * Function Sheik.SheikPlayerControllerCommon.ExecForceResetRewards
	 */
	struct ASheikPlayerControllerCommon_ExecForceResetRewards_Params
	{	};

	/**
	 * Function Sheik.SheikPlayerControllerCommon.ExecFireRoundPlacementChangedDelegate
	 */
	struct ASheikPlayerControllerCommon_ExecFireRoundPlacementChangedDelegate_Params
	{
	public:
		int32_t                                                    Placement;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikPlayerControllerCommon.ExecEnablePerkXP
	 */
	struct ASheikPlayerControllerCommon_ExecEnablePerkXP_Params
	{
	public:
		bool                                                       bEnabled;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikPlayerControllerCommon.ExecDownloadAllServerTrackedPlayerStats
	 */
	struct ASheikPlayerControllerCommon_ExecDownloadAllServerTrackedPlayerStats_Params
	{	};

	/**
	 * Function Sheik.SheikPlayerControllerCommon.ExecDontGoToFreeRoamWhenRoundsEnds
	 */
	struct ASheikPlayerControllerCommon_ExecDontGoToFreeRoamWhenRoundsEnds_Params
	{
	public:
		bool                                                       NoFreeRoam;                                              // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikPlayerControllerCommon.ExecDangerZoneEnabled
	 */
	struct ASheikPlayerControllerCommon_ExecDangerZoneEnabled_Params
	{
	public:
		bool                                                       bEnabled;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikPlayerControllerCommon.ExecBotBackfillEnabled
	 */
	struct ASheikPlayerControllerCommon_ExecBotBackfillEnabled_Params
	{
	public:
		bool                                                       bEnabled;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikPlayerControllerCommon.ExecAssignTeams
	 */
	struct ASheikPlayerControllerCommon_ExecAssignTeams_Params
	{
	public:
		unsigned char                                              NumPlayersPerTeam;                                       // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikPlayerControllerCommon.ExecAssignMeAsLeader
	 */
	struct ASheikPlayerControllerCommon_ExecAssignMeAsLeader_Params
	{	};

	/**
	 * Function Sheik.SheikPlayerControllerCommon.ExecAddRingStateToTimeline
	 */
	struct ASheikPlayerControllerCommon_ExecAddRingStateToTimeline_Params
	{
	public:
		float                                                      Radius;                                                  // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      MorphTimeOffset;                                         // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      WaitTimeOffset;                                          // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      EventCountdownTimeOffset;                                // 0x000C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      EventTimeOffset;                                         // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      EventTimeEndOffset;                                      // 0x0014(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       WillRerollLoot;                                          // 0x0018(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikPlayerControllerCommon.ExecAddAdditionalXp
	 */
	struct ASheikPlayerControllerCommon_ExecAddAdditionalXp_Params
	{
	public:
		float                                                      Value;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikPlayerControllerCommon.DebugTriggerRepAnnouncement
	 */
	struct ASheikPlayerControllerCommon_DebugTriggerRepAnnouncement_Params
	{
	public:
		int32_t                                                    CurrProgress;                                            // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    Target;                                                  // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikPlayerControllerCommon.DebugRequestBRTimelineString
	 */
	struct ASheikPlayerControllerCommon_DebugRequestBRTimelineString_Params
	{	};

	/**
	 * Function Sheik.SheikPlayerControllerCommon.DebugReceiveBRTimelineString
	 */
	struct ASheikPlayerControllerCommon_DebugReceiveBRTimelineString_Params
	{
	public:
		class FString                                              TimelineString;                                          // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikPlayerControllerCommon.ClientTeammateKOInsuranceActivated
	 */
	struct ASheikPlayerControllerCommon_ClientTeammateKOInsuranceActivated_Params
	{	};

	/**
	 * Function Sheik.SheikPlayerControllerCommon.ClientStartAntiCheatSession
	 */
	struct ASheikPlayerControllerCommon_ClientStartAntiCheatSession_Params
	{	};

	/**
	 * Function Sheik.SheikPlayerControllerCommon.ClientRequestPlayerSpawnInfo
	 */
	struct ASheikPlayerControllerCommon_ClientRequestPlayerSpawnInfo_Params
	{	};

	/**
	 * Function Sheik.SheikPlayerControllerCommon.ClientReceiveAntiCheatMessage
	 */
	struct ASheikPlayerControllerCommon_ClientReceiveAntiCheatMessage_Params
	{
	public:
		TArray<unsigned char>                                      Data;                                                    // 0x0000(0x0010)  (ConstParm, Parm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikPlayerControllerCommon.ClientProcessPingTypeAtLocation
	 */
	struct ASheikPlayerControllerCommon_ClientProcessPingTypeAtLocation_Params
	{
	public:
		EIGPingType                                                PingType;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_QWGQ[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class ASheikPlayerStateCommon*                             OriginPlayerState;                                       // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             PingLocation;                                            // 0x0010(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             PingNormal;                                              // 0x001C(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UObject*                                             PingedObj;                                               // 0x0028(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikPlayerControllerCommon.ClientLogStatTransferSummary
	 */
	struct ASheikPlayerControllerCommon_ClientLogStatTransferSummary_Params
	{
	public:
		class FString                                              Filename;                                                // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              SummaryString;                                           // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              GameSessionId;                                           // 0x0020(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              PlayerSessionId;                                         // 0x0030(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikPlayerControllerCommon.ClientLogServerHotfixVersion
	 */
	struct ASheikPlayerControllerCommon_ClientLogServerHotfixVersion_Params
	{
	public:
		int32_t                                                    ServerVersion;                                           // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikPlayerControllerCommon.ClientLeavingGameSession
	 */
	struct ASheikPlayerControllerCommon_ClientLeavingGameSession_Params
	{	};

	/**
	 * Function Sheik.SheikPlayerControllerCommon.ClientForceUserToMainMenu
	 */
	struct ASheikPlayerControllerCommon_ClientForceUserToMainMenu_Params
	{	};

	/**
	 * Function Sheik.SheikPlayerControllerCommon.ClientAddFans
	 */
	struct ASheikPlayerControllerCommon_ClientAddFans_Params
	{
	public:
		float                                                      FansToGive;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EReasonFansAwarded                                         Reason;                                                  // 0x0004(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikPlayerControllerCommon.ClientAcceptPlayerSessionPostLogin
	 */
	struct ASheikPlayerControllerCommon_ClientAcceptPlayerSessionPostLogin_Params
	{
	public:
		uint32_t                                                   PlayerUniqueID;                                          // 0x0000(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikPlayerControllerCommon.ClearAllBots
	 */
	struct ASheikPlayerControllerCommon_ClearAllBots_Params
	{	};

	/**
	 * Function Sheik.SheikPlayerControllerCommon.BroadcastOnCharacterDied
	 */
	struct ASheikPlayerControllerCommon_BroadcastOnCharacterDied_Params
	{
	public:
		ECauseOfDeath                                              Cause;                                                   // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikPlayerControllerCommon.BroadcastOnCharacterDamaged
	 */
	struct ASheikPlayerControllerCommon_BroadcastOnCharacterDamaged_Params
	{
	public:
		struct FIGInstanceHitData                                  HitData;                                                 // 0x0000(0x0048)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikPlayerControllerCommon.BRLaunchAllPlayers
	 */
	struct ASheikPlayerControllerCommon_BRLaunchAllPlayers_Params
	{
	public:
		class FString                                              LocationName;                                            // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikPlayerControllerCommon.AreAnyTeammatesAlive
	 */
	struct ASheikPlayerControllerCommon_AreAnyTeammatesAlive_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikPlayerData.UpdateWalletAssetSeen
	 */
	struct USheikPlayerData_UpdateWalletAssetSeen_Params
	{
	public:
		class FName                                                InWalletAssetId;                                         // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bUploadData;                                             // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0009(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikPlayerData.UpdateCreatorCode
	 */
	struct USheikPlayerData_UpdateCreatorCode_Params
	{	};

	/**
	 * Function Sheik.SheikPlayerData.SetCreatorCode
	 */
	struct USheikPlayerData_SetCreatorCode_Params
	{
	public:
		class FString                                              CreatorCode;                                             // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikPlayerData.SetActiveCharacterLoadout
	 */
	struct USheikPlayerData_SetActiveCharacterLoadout_Params
	{
	public:
		int32_t                                                    InActiveLoadout;                                         // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikPlayerData.SaveStoreSeenItems
	 */
	struct USheikPlayerData_SaveStoreSeenItems_Params
	{	};

	/**
	 * Function Sheik.SheikPlayerData.SaveEmoteIdList
	 */
	struct USheikPlayerData_SaveEmoteIdList_Params
	{
	public:
		TArray<class FName>                                        EmoteIdList;                                             // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikPlayerData.ResetCharacterProfileToDefault
	 */
	struct USheikPlayerData_ResetCharacterProfileToDefault_Params
	{	};

	/**
	 * Function Sheik.SheikPlayerData.RemoveCharacterLoadout
	 */
	struct USheikPlayerData_RemoveCharacterLoadout_Params
	{
	public:
		int32_t                                                    SavedLoadoutIndex;                                       // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikPlayerData.OnPurchaseMultipleOffersComplete
	 */
	struct USheikPlayerData_OnPurchaseMultipleOffersComplete_Params
	{
	public:
		TArray<class FName>                                        WalletIds;                                               // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
		bool                                                       bSuccessful;                                             // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikPlayerData.OnEntitlementsOwnedRefreshedScrubLoadout
	 */
	struct USheikPlayerData_OnEntitlementsOwnedRefreshedScrubLoadout_Params
	{	};

	/**
	 * Function Sheik.SheikPlayerData.HasWalletAssetBeenSeen
	 */
	struct USheikPlayerData_HasWalletAssetBeenSeen_Params
	{
	public:
		class FName                                                InWalletAssetId;                                         // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikPlayerData.HandlePresetsWithInvalidIndex
	 */
	struct USheikPlayerData_HandlePresetsWithInvalidIndex_Params
	{	};

	/**
	 * Function Sheik.SheikPlayerData.HandleOnGameFlowStateChanged
	 */
	struct USheikPlayerData_HandleOnGameFlowStateChanged_Params
	{
	public:
		EGameFlowState                                             NewState;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikPlayerData.GetUnseenItemIds
	 */
	struct USheikPlayerData_GetUnseenItemIds_Params
	{	};

	/**
	 * Function Sheik.SheikPlayerData.GetTitleCardLoadoutIds
	 */
	struct USheikPlayerData_GetTitleCardLoadoutIds_Params
	{
	public:
		struct FTitleCardLoadoutIds                                ReturnValue;                                             // 0x0000(0x0048)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikPlayerData.GetTimeTillNextReroll
	 */
	struct USheikPlayerData_GetTimeTillNextReroll_Params
	{
	public:
		struct FTimespan                                           ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikPlayerData.GetTimeTillNextRepAllowance
	 */
	struct USheikPlayerData_GetTimeTillNextRepAllowance_Params
	{
	public:
		struct FTimespan                                           ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikPlayerData.GetRerollAllowance
	 */
	struct USheikPlayerData_GetRerollAllowance_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikPlayerData.GetRepsQueued
	 */
	struct USheikPlayerData_GetRepsQueued_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikPlayerData.GetRecentPlayers
	 */
	struct USheikPlayerData_GetRecentPlayers_Params
	{
	public:
		struct FRecentPlayers                                      ReturnValue;                                             // 0x0000(0x0028)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikPlayerData.GetNumCharacterLoadouts
	 */
	struct USheikPlayerData_GetNumCharacterLoadouts_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikPlayerData.GetNeedsFirstTimeReps
	 */
	struct USheikPlayerData_GetNeedsFirstTimeReps_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikPlayerData.GetMaxRerollAllowance
	 */
	struct USheikPlayerData_GetMaxRerollAllowance_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikPlayerData.GetMaxNumberOfRepsAllowedToTrack
	 */
	struct USheikPlayerData_GetMaxNumberOfRepsAllowedToTrack_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikPlayerData.GetLastTimeRepAllowanceUpdated
	 */
	struct USheikPlayerData_GetLastTimeRepAllowanceUpdated_Params
	{
	public:
		struct FDateTime                                           ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikPlayerData.GetLastTimeGainedReroll
	 */
	struct USheikPlayerData_GetLastTimeGainedReroll_Params
	{
	public:
		struct FDateTime                                           ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikPlayerData.GetEmoteIdList
	 */
	struct USheikPlayerData_GetEmoteIdList_Params
	{
	public:
		TArray<class FName>                                        ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikPlayerData.GetCreatorCode
	 */
	struct USheikPlayerData_GetCreatorCode_Params
	{
	public:
		class FString                                              ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikPlayerData.GetCharacterProfile
	 */
	struct USheikPlayerData_GetCharacterProfile_Params
	{
	public:
		struct FCharacterProfile                                   ReturnValue;                                             // 0x0000(0x0098)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikPlayerData.GetActiveCharacterLoadoutBP
	 */
	struct USheikPlayerData_GetActiveCharacterLoadoutBP_Params
	{
	public:
		struct FCharacterLoadout                                   ReturnValue;                                             // 0x0000(0x0070)  (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikPlayerData.DoesLoadoutExist
	 */
	struct USheikPlayerData_DoesLoadoutExist_Params
	{
	public:
		class FString                                              InLoadoutName;                                           // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikPlayerData.bHasMaxRerolls
	 */
	struct USheikPlayerData_bHasMaxRerolls_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikPlayerData.AddNewCharacterLoadout
	 */
	struct USheikPlayerData_AddNewCharacterLoadout_Params
	{
	public:
		bool                                                       bMakeActive;                                             // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bUpload;                                                 // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_RKY1[0x2];                                   // 0x0002(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ReturnValue;                                             // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikPlayerDataManager.UploadServerTrackedStatsSinglePlayer
	 */
	struct USheikPlayerDataManager_UploadServerTrackedStatsSinglePlayer_Params
	{
	public:
		class APlayerController*                                   PlayerController;                                        // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikPlayerDataManager.UploadServerTrackedStatsAllPlayers
	 */
	struct USheikPlayerDataManager_UploadServerTrackedStatsAllPlayers_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikPlayerDataManager.UploadPlayerData
	 */
	struct USheikPlayerDataManager_UploadPlayerData_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikPlayerDataManager.UploadClientTrackedStatsAllPlayers
	 */
	struct USheikPlayerDataManager_UploadClientTrackedStatsAllPlayers_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikPlayerDataManager.UploadCharacterProfileData
	 */
	struct USheikPlayerDataManager_UploadCharacterProfileData_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikPlayerDataManager.OnUploadStatsSingle_Server_Completed
	 */
	struct USheikPlayerDataManager_OnUploadStatsSingle_Server_Completed_Params
	{
	public:
		bool                                                       bSuccess;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_P5QO[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              ErrorString;                                             // 0x0008(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikPlayerDataManager.OnUploadStatsSingle_Client_Completed
	 */
	struct USheikPlayerDataManager_OnUploadStatsSingle_Client_Completed_Params
	{
	public:
		bool                                                       bSuccess;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_GRGO[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              ErrorString;                                             // 0x0008(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikPlayerDataManager.OnDownloadStatsSingle_Server_Completed
	 */
	struct USheikPlayerDataManager_OnDownloadStatsSingle_Server_Completed_Params
	{
	public:
		bool                                                       bSuccess;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_F0WH[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              ErrorString;                                             // 0x0008(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikPlayerDataManager.OnDownloadStatsSingle_Client_Completed
	 */
	struct USheikPlayerDataManager_OnDownloadStatsSingle_Client_Completed_Params
	{
	public:
		bool                                                       bSuccess;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_FPNA[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              ErrorString;                                             // 0x0008(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikPlayerDataManager.OnDownloadStatsAll_Server_Completed
	 */
	struct USheikPlayerDataManager_OnDownloadStatsAll_Server_Completed_Params
	{
	public:
		bool                                                       bSuccess;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_I9SA[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              ErrorString;                                             // 0x0008(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikPlayerDataManager.HasPlayerDataDownloadedAtLeastOnce
	 */
	struct USheikPlayerDataManager_HasPlayerDataDownloadedAtLeastOnce_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikPlayerDataManager.DownloadSkillDataSinglePlayer
	 */
	struct USheikPlayerDataManager_DownloadSkillDataSinglePlayer_Params
	{
	public:
		class APlayerController*                                   PlayerController;                                        // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikPlayerDataManager.DownloadSkillDataForLoginUpdate
	 */
	struct USheikPlayerDataManager_DownloadSkillDataForLoginUpdate_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikPlayerDataManager.DownloadSkillDataAllPlayers
	 */
	struct USheikPlayerDataManager_DownloadSkillDataAllPlayers_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikPlayerDataManager.DownloadServerTrackedStatsSinglePlayer
	 */
	struct USheikPlayerDataManager_DownloadServerTrackedStatsSinglePlayer_Params
	{
	public:
		class APlayerController*                                   PlayerController;                                        // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikPlayerDataManager.DownloadServerTrackedStatsDirectlyToClient
	 */
	struct USheikPlayerDataManager_DownloadServerTrackedStatsDirectlyToClient_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikPlayerDataManager.DownloadServerTrackedStatsAllPlayers
	 */
	struct USheikPlayerDataManager_DownloadServerTrackedStatsAllPlayers_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikPlayerDataManager.DownloadPlayerRepDataToTheServer
	 */
	struct USheikPlayerDataManager_DownloadPlayerRepDataToTheServer_Params
	{
	public:
		TArray<class FString>                                      PlayerIds;                                               // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikPlayerDataManager.DownloadPlayerDataDirectlyToTheClient
	 */
	struct USheikPlayerDataManager_DownloadPlayerDataDirectlyToTheClient_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikPlayerDataManager.DownloadClientTrackedStatsSinglePlayer
	 */
	struct USheikPlayerDataManager_DownloadClientTrackedStatsSinglePlayer_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikPlayerDataManager.DownloadClientTrackedStatsAllPlayers
	 */
	struct USheikPlayerDataManager_DownloadClientTrackedStatsAllPlayers_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikPlayerSkillManager.OnRep_SkillData
	 */
	struct USheikPlayerSkillManager_OnRep_SkillData_Params
	{	};

	/**
	 * Function Sheik.SheikPlayerSkillManager.OnRep_IsUploadingDataFromServer
	 */
	struct USheikPlayerSkillManager_OnRep_IsUploadingDataFromServer_Params
	{	};

	/**
	 * Function Sheik.SheikPlayerStateCommon.UpdateWithDeath
	 */
	struct ASheikPlayerStateCommon_UpdateWithDeath_Params
	{	};

	/**
	 * Function Sheik.SheikPlayerStateCommon.UpdatePlatformAccountInfo
	 */
	struct ASheikPlayerStateCommon_UpdatePlatformAccountInfo_Params
	{
	public:
		class FString                                              CozmoId;                                                 // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		ESheikPlatform                                             Platform;                                                // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		ESheikPlatformService                                      PlatformService;                                         // 0x0011(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_BQV6[0x6];                                   // 0x0012(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              PlatformId;                                              // 0x0018(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              PlatformName;                                            // 0x0028(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              InEosId;                                                 // 0x0038(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              InProductId;                                             // 0x0048(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikPlayerStateCommon.UpdatePawnLocationAndRotation
	 */
	struct ASheikPlayerStateCommon_UpdatePawnLocationAndRotation_Params
	{
	public:
		struct FVector                                             PawnLocation;                                            // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FRotator                                            PawnRotation;                                            // 0x000C(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikPlayerStateCommon.UpdateModValues
	 */
	struct ASheikPlayerStateCommon_UpdateModValues_Params
	{
	public:
		float                                                      ArmValue;                                                // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      CoreValue;                                               // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      LegsValue;                                               // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      MaxModValue;                                             // 0x000C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikPlayerStateCommon.UpdateHealth
	 */
	struct ASheikPlayerStateCommon_UpdateHealth_Params
	{
	public:
		float                                                      HealthPercetange;                                        // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      HealthMax;                                               // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikPlayerStateCommon.UpdateDownedInfo
	 */
	struct ASheikPlayerStateCommon_UpdateDownedInfo_Params
	{
	public:
		bool                                                       bIsDBNO;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_0AI7[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      DownedTimeLeft;                                          // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikPlayerStateCommon.SetTitleCardLoadOutIds
	 */
	struct ASheikPlayerStateCommon_SetTitleCardLoadOutIds_Params
	{
	public:
		struct FTitleCardLoadoutIds                                InTitleCardLoadoutIds;                                   // 0x0000(0x0048)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		TArray<class FName>                                        InStatsToTrack;                                          // 0x0048(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
		TArray<class FName>                                        InSeasonalStatBaseNames;                                 // 0x0058(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
		TArray<class FName>                                        InSeasonalFields;                                        // 0x0068(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikPlayerStateCommon.SetShowSpectatorWidget
	 */
	struct ASheikPlayerStateCommon_SetShowSpectatorWidget_Params
	{
	public:
		bool                                                       bShow;                                                   // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikPlayerStateCommon.ServerUpdateAllowRepProgression
	 */
	struct ASheikPlayerStateCommon_ServerUpdateAllowRepProgression_Params
	{
	public:
		bool                                                       InAllowRepProgression;                                   // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikPlayerStateCommon.ServerUpdateAllowAchievementToUpdate
	 */
	struct ASheikPlayerStateCommon_ServerUpdateAllowAchievementToUpdate_Params
	{
	public:
		bool                                                       bCanUpdateAchievements;                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikPlayerStateCommon.ServerSpectator_UpdateIsOnConsole
	 */
	struct ASheikPlayerStateCommon_ServerSpectator_UpdateIsOnConsole_Params
	{
	public:
		bool                                                       IsOnConsole;                                             // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikPlayerStateCommon.ServerSetEOSLobbyStatus
	 */
	struct ASheikPlayerStateCommon_ServerSetEOSLobbyStatus_Params
	{
	public:
		EEOSLobbyStatus                                            InStatus;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction Sheik.SheikPlayerStateCommon.OnSpectatorInfoUpdated__DelegateSignature
	 */
	struct ASheikPlayerStateCommon_OnSpectatorInfoUpdated__DelegateSignature_Params
	{
	public:
		struct FSheikSpectatorInfo                                 NewSpectatorInfo;                                        // 0x0000(0x00E0)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikPlayerStateCommon.OnRep_RepSystem
	 */
	struct ASheikPlayerStateCommon_OnRep_RepSystem_Params
	{	};

	/**
	 * Function Sheik.SheikPlayerStateCommon.OnRep_OnSpectatorInfoUpdated
	 */
	struct ASheikPlayerStateCommon_OnRep_OnSpectatorInfoUpdated_Params
	{	};

	/**
	 * Function Sheik.SheikPlayerStateCommon.OnRep_OnLobbyStatusUpdated
	 */
	struct ASheikPlayerStateCommon_OnRep_OnLobbyStatusUpdated_Params
	{	};

	/**
	 * Function Sheik.SheikPlayerStateCommon.OnRep_OnLaunchControlUpdated
	 */
	struct ASheikPlayerStateCommon_OnRep_OnLaunchControlUpdated_Params
	{	};

	/**
	 * Function Sheik.SheikPlayerStateCommon.OnRep_AllTeammatesID
	 */
	struct ASheikPlayerStateCommon_OnRep_AllTeammatesID_Params
	{	};

	/**
	 * DelegateFunction Sheik.SheikPlayerStateCommon.OnPlayerDied__DelegateSignature
	 */
	struct ASheikPlayerStateCommon_OnPlayerDied__DelegateSignature_Params
	{	};

	/**
	 * DelegateFunction Sheik.SheikPlayerStateCommon.OnNameUpdated__DelegateSignature
	 */
	struct ASheikPlayerStateCommon_OnNameUpdated__DelegateSignature_Params
	{	};

	/**
	 * DelegateFunction Sheik.SheikPlayerStateCommon.OnLobbyStatusUpdated__DelegateSignature
	 */
	struct ASheikPlayerStateCommon_OnLobbyStatusUpdated__DelegateSignature_Params
	{	};

	/**
	 * DelegateFunction Sheik.SheikPlayerStateCommon.OnLaunchControlUpdated__DelegateSignature
	 */
	struct ASheikPlayerStateCommon_OnLaunchControlUpdated__DelegateSignature_Params
	{
	public:
		bool                                                       bNewLaunchControlValue;                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikPlayerStateCommon.MulticastPlayerStateDeath
	 */
	struct ASheikPlayerStateCommon_MulticastPlayerStateDeath_Params
	{	};

	/**
	 * Function Sheik.SheikPlayerStateCommon.GetSkillManager
	 */
	struct ASheikPlayerStateCommon_GetSkillManager_Params
	{
	public:
		class USheikPlayerSkillManager*                            ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikPlayerStateCommon.GetRepSystem
	 */
	struct ASheikPlayerStateCommon_GetRepSystem_Params
	{
	public:
		class USheikRepSystem*                                     ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikPlayerStateCommon.GetPlayerStatePawn
	 */
	struct ASheikPlayerStateCommon_GetPlayerStatePawn_Params
	{
	public:
		class APawn*                                               ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikPlayerStateCommon.ClientTriggerPlayerSkillDataUpdate
	 */
	struct ASheikPlayerStateCommon_ClientTriggerPlayerSkillDataUpdate_Params
	{	};

	/**
	 * Function Sheik.SheikPlayerStateCommon.ClientSetAllowAchievementToUpdate
	 */
	struct ASheikPlayerStateCommon_ClientSetAllowAchievementToUpdate_Params
	{
	public:
		bool                                                       bCanUpdateAchievements;                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikPlayerStateCommon.ClientRepThresholdMetNotify
	 */
	struct ASheikPlayerStateCommon_ClientRepThresholdMetNotify_Params
	{
	public:
		TArray<struct FRepUIData>                                  NotificationReps;                                        // 0x0000(0x0010)  (ConstParm, Parm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikPlayerStateCommon.ClientOnConsoleCheck
	 */
	struct ASheikPlayerStateCommon_ClientOnConsoleCheck_Params
	{	};

	/**
	 * Function Sheik.SheikPlayerStateCommon.ClientCheckAllowRepProgression
	 */
	struct ASheikPlayerStateCommon_ClientCheckAllowRepProgression_Params
	{
	public:
		bool                                                       InAllowRepProgression;                                   // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikPlayerStateCommon.ClientCheckAllowAchievementToUpdate
	 */
	struct ASheikPlayerStateCommon_ClientCheckAllowAchievementToUpdate_Params
	{
	public:
		bool                                                       bCanUpdateAchievements;                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikPlayerStateCommon.Client_LoadRepData
	 */
	struct ASheikPlayerStateCommon_Client_LoadRepData_Params
	{	};

	/**
	 * Function Sheik.SheikPlayerStateCommon.AreCharacterMeshesValidForCapture
	 */
	struct ASheikPlayerStateCommon_AreCharacterMeshesValidForCapture_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikPlaygroundPopupScreen.UnbindCharacterDelegates
	 */
	struct USheikPlaygroundPopupScreen_UnbindCharacterDelegates_Params
	{	};

	/**
	 * Function Sheik.SheikPlaygroundPopupScreen.ShowNewPlaygroundPopup
	 */
	struct USheikPlaygroundPopupScreen_ShowNewPlaygroundPopup_Params
	{
	public:
		struct FDataTableRowHandle                                 InPopupRowHandle;                                        // 0x0000(0x0010)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikPlaygroundPopupScreen.OnLoadFailed
	 */
	struct USheikPlaygroundPopupScreen_OnLoadFailed_Params
	{	};

	/**
	 * Function Sheik.SheikPlaygroundPopupScreen.LogStatusMessage
	 */
	struct USheikPlaygroundPopupScreen_LogStatusMessage_Params
	{
	public:
		class FString                                              InMessage;                                               // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikPlaygroundPopupScreen.LoadPopupMovie
	 */
	struct USheikPlaygroundPopupScreen_LoadPopupMovie_Params
	{	};

	/**
	 * Function Sheik.SheikPlaygroundPopupScreen.LoadPopupImage
	 */
	struct USheikPlaygroundPopupScreen_LoadPopupImage_Params
	{	};

	/**
	 * Function Sheik.SheikPlaygroundPopupScreen.HandleOnLoadComplete
	 */
	struct USheikPlaygroundPopupScreen_HandleOnLoadComplete_Params
	{	};

	/**
	 * Function Sheik.SheikPlaygroundPopupScreen.HandleOnCharacterDied
	 */
	struct USheikPlaygroundPopupScreen_HandleOnCharacterDied_Params
	{
	public:
		ECauseOfDeath                                              CauseOfDeath;                                            // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikPlaygroundPopupScreen.Dismiss
	 */
	struct USheikPlaygroundPopupScreen_Dismiss_Params
	{	};

	/**
	 * Function Sheik.SheikPlaygroundPopupScreen.ClosePlaygroundPopupScreen
	 */
	struct USheikPlaygroundPopupScreen_ClosePlaygroundPopupScreen_Params
	{	};

	/**
	 * Function Sheik.SheikPlaygroundPopupScreen.CloseFullscreenPopup
	 */
	struct USheikPlaygroundPopupScreen_CloseFullscreenPopup_Params
	{
	public:
		struct FDataTableRowHandle                                 InPopupRowHandle;                                        // 0x0000(0x0010)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikPlaygroundPopupScreen.BindToCharacterDelegates
	 */
	struct USheikPlaygroundPopupScreen_BindToCharacterDelegates_Params
	{	};

	/**
	 * Function Sheik.SheikPopupSystem.ShowPopup
	 */
	struct USheikPopupSystem_ShowPopup_Params
	{
	public:
		struct FPopupQueueData                                     PopupData;                                               // 0x0000(0x0078)  (Parm, ContainsInstancedReference, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikPopupSystem.ShowNextPopup
	 */
	struct USheikPopupSystem_ShowNextPopup_Params
	{	};

	/**
	 * Function Sheik.SheikPopupSystem.SetUpLegendInput
	 */
	struct USheikPopupSystem_SetUpLegendInput_Params
	{
	public:
		int32_t                                                    ID;                                                      // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikPopupSystem.SetPopupWidget
	 */
	struct USheikPopupSystem_SetPopupWidget_Params
	{
	public:
		int32_t                                                    PopupId;                                                 // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_PTFW[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UIGUI_WidgetBase*                                    PopupWidget;                                             // 0x0008(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikPopupSystem.SetHeaderText
	 */
	struct USheikPopupSystem_SetHeaderText_Params
	{
	public:
		int32_t                                                    PopupId;                                                 // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_8MUO[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FText                                                HeaderText;                                              // 0x0008(0x0018)  (Parm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikPopupSystem.SetDimBackground
	 */
	struct USheikPopupSystem_SetDimBackground_Params
	{
	public:
		int32_t                                                    PopupId;                                                 // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       DimBackground;                                           // 0x0004(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikPopupSystem.SetBodyText
	 */
	struct USheikPopupSystem_SetBodyText_Params
	{
	public:
		int32_t                                                    PopupId;                                                 // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_10LF[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FText                                                BodyText;                                                // 0x0008(0x0018)  (Parm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikPopupSystem.RemoveLegendPrompts
	 */
	struct USheikPopupSystem_RemoveLegendPrompts_Params
	{
	public:
		int32_t                                                    PopupId;                                                 // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction Sheik.SheikPopupSystem.OnPopupInfoUpdated__DelegateSignature
	 */
	struct USheikPopupSystem_OnPopupInfoUpdated__DelegateSignature_Params
	{
	public:
		int32_t                                                    PopupId;                                                 // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikPopupSystem.IsPopupBeingShown
	 */
	struct USheikPopupSystem_IsPopupBeingShown_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikPopupSystem.IsPopupActive
	 */
	struct USheikPopupSystem_IsPopupActive_Params
	{
	public:
		int32_t                                                    PopupId;                                                 // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikPopupSystem.HandleInput
	 */
	struct USheikPopupSystem_HandleInput_Params
	{
	public:
		struct FInputEventData                                     InputEvent;                                              // 0x0000(0x0038)  (Parm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikPopupSystem.GetSheikPopupSystem
	 */
	struct USheikPopupSystem_GetSheikPopupSystem_Params
	{
	public:
		class USheikPopupSystem*                                   ReturnValue;                                             // 0x0000(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikPopupSystem.GetPopupWidget
	 */
	struct USheikPopupSystem_GetPopupWidget_Params
	{
	public:
		int32_t                                                    PopupId;                                                 // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_OVQR[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UIGUI_WidgetBase*                                    ReturnValue;                                             // 0x0008(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikPopupSystem.GetPopupQueueData
	 */
	struct USheikPopupSystem_GetPopupQueueData_Params
	{
	public:
		int32_t                                                    PopupId;                                                 // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_HCO8[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FPopupQueueData                                     ReturnValue;                                             // 0x0008(0x0078)  (Parm, OutParm, ReturnParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikPopupSystem.GetCurrentlyActivePopup
	 */
	struct USheikPopupSystem_GetCurrentlyActivePopup_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikPopupSystem.GenericCloseCallback
	 */
	struct USheikPopupSystem_GenericCloseCallback_Params
	{
	public:
		int32_t                                                    ID;                                                      // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                BindingName;                                             // 0x0004(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikPopupSystem.DoesPopupWithIdExist
	 */
	struct USheikPopupSystem_DoesPopupWithIdExist_Params
	{
	public:
		int32_t                                                    PopupId;                                                 // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikPopupSystem.CreatePopup
	 */
	struct USheikPopupSystem_CreatePopup_Params
	{
	public:
		EPopupType                                                 PopupType;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EPopupPriority                                             PopupPriority;                                           // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_0AWI[0x6];                                   // 0x0002(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FText                                                HeaderText;                                              // 0x0008(0x0018)  (Parm, NativeAccessSpecifierPublic)
		class FText                                                BodyText;                                                // 0x0020(0x0018)  (Parm, NativeAccessSpecifierPublic)
		class FText                                                ErrorCodeText;                                           // 0x0038(0x0018)  (Parm, NativeAccessSpecifierPublic)
		bool                                                       DimBackground;                                           // 0x0050(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_X0UX[0x7];                                   // 0x0051(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<struct FLegendData>                                 LegendPrompts;                                           // 0x0058(0x0010)  (Parm, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
		bool                                                       bUseDefaultFormatting;                                   // 0x0068(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_TBEY[0x3];                                   // 0x0069(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ReturnValue;                                             // 0x006C(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikPopupSystem.CreateGenericError
	 */
	struct USheikPopupSystem_CreateGenericError_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikPopupSystem.CreateErrorWithCallback
	 */
	struct USheikPopupSystem_CreateErrorWithCallback_Params
	{
	public:
		class FText                                                HeaderText;                                              // 0x0000(0x0018)  (Parm, NativeAccessSpecifierPublic)
		class FText                                                BodyText;                                                // 0x0018(0x0018)  (Parm, NativeAccessSpecifierPublic)
		class FText                                                ErrorCode;                                               // 0x0030(0x0018)  (Parm, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      ConfirmCallback;                                         // 0x0048(0x0010)  (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
		int32_t                                                    ReturnValue;                                             // 0x0058(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikPopupSystem.CreateError
	 */
	struct USheikPopupSystem_CreateError_Params
	{
	public:
		class FText                                                HeaderText;                                              // 0x0000(0x0018)  (Parm, NativeAccessSpecifierPublic)
		class FText                                                BodyText;                                                // 0x0018(0x0018)  (Parm, NativeAccessSpecifierPublic)
		class FText                                                ErrorCode;                                               // 0x0030(0x0018)  (Parm, NativeAccessSpecifierPublic)
		int32_t                                                    ReturnValue;                                             // 0x0048(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikPopupSystem.CreateConfirmPopupWithCallback
	 */
	struct USheikPopupSystem_CreateConfirmPopupWithCallback_Params
	{
	public:
		class FText                                                HeaderText;                                              // 0x0000(0x0018)  (Parm, NativeAccessSpecifierPublic)
		class FText                                                BodyText;                                                // 0x0018(0x0018)  (Parm, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      ConfirmCallback;                                         // 0x0030(0x0010)  (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
		int32_t                                                    ReturnValue;                                             // 0x0040(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikPopupSystem.CreateConfirmPopup
	 */
	struct USheikPopupSystem_CreateConfirmPopup_Params
	{
	public:
		class FText                                                HeaderText;                                              // 0x0000(0x0018)  (Parm, NativeAccessSpecifierPublic)
		class FText                                                BodyText;                                                // 0x0018(0x0018)  (Parm, NativeAccessSpecifierPublic)
		int32_t                                                    ReturnValue;                                             // 0x0030(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikPopupSystem.CreateConfirmCancelPopup
	 */
	struct USheikPopupSystem_CreateConfirmCancelPopup_Params
	{
	public:
		class FText                                                HeaderText;                                              // 0x0000(0x0018)  (Parm, NativeAccessSpecifierPublic)
		class FText                                                BodyText;                                                // 0x0018(0x0018)  (Parm, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      ConfirmCallback;                                         // 0x0030(0x0010)  (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      CancelCallback;                                          // 0x0040(0x0010)  (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
		int32_t                                                    ReturnValue;                                             // 0x0050(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikPopupSystem.ClosePopup_BP
	 */
	struct USheikPopupSystem_ClosePopup_BP_Params
	{
	public:
		int32_t                                                    ID;                                                      // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikPopupSystem.ClosePopup
	 */
	struct USheikPopupSystem_ClosePopup_Params
	{
	public:
		int32_t                                                    PopupId;                                                 // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikPopupSystem.CloseAllPopups
	 */
	struct USheikPopupSystem_CloseAllPopups_Params
	{	};

	/**
	 * Function Sheik.SheikPopupSystem.ClearPopupWidget
	 */
	struct USheikPopupSystem_ClearPopupWidget_Params
	{
	public:
		int32_t                                                    PopupId;                                                 // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikPopupSystem.AddMultipleLegendPrompts
	 */
	struct USheikPopupSystem_AddMultipleLegendPrompts_Params
	{
	public:
		int32_t                                                    PopupId;                                                 // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_AOU4[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<struct FLegendData>                                 LegendPrompts;                                           // 0x0008(0x0010)  (Parm, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikPopupSystem.AddLegendPrompt
	 */
	struct USheikPopupSystem_AddLegendPrompt_Params
	{
	public:
		int32_t                                                    PopupId;                                                 // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_V4KL[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FLegendData                                         LegendPrompt;                                            // 0x0008(0x0030)  (Parm, ContainsInstancedReference, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikPopupSystem.AddCustomPopup
	 */
	struct USheikPopupSystem_AddCustomPopup_Params
	{
	public:
		EPopupPriority                                             PopupPriority;                                           // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_ZI3U[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UIGUI_WidgetBase*                                    PopupWidget;                                             // 0x0008(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<struct FLegendData>                                 LegendPrompts;                                           // 0x0010(0x0010)  (Parm, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
		int32_t                                                    ReturnValue;                                             // 0x0020(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikProgressionSystem.UpdateLastBattlePassCelebrationToCurrent
	 */
	struct USheikProgressionSystem_UpdateLastBattlePassCelebrationToCurrent_Params
	{	};

	/**
	 * Function Sheik.SheikProgressionSystem.SetWalletSystem
	 */
	struct USheikProgressionSystem_SetWalletSystem_Params
	{
	public:
		class USheikWalletSystem*                                  InWalletSystem;                                          // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikProgressionSystem.SetStoreSystem
	 */
	struct USheikProgressionSystem_SetStoreSystem_Params
	{
	public:
		class USheikStoreSystem*                                   InStoreSystem;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikProgressionSystem.RefreshCloutLevel
	 */
	struct USheikProgressionSystem_RefreshCloutLevel_Params
	{	};

	/**
	 * Function Sheik.SheikProgressionSystem.PurchaseBattlePassTiers
	 */
	struct USheikProgressionSystem_PurchaseBattlePassTiers_Params
	{
	public:
		int32_t                                                    NumOfTiersToPurchase;                                    // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikProgressionSystem.PurchaseBattlePass
	 */
	struct USheikProgressionSystem_PurchaseBattlePass_Params
	{
	public:
		struct FSheikStoreItem                                     Offer;                                                   // 0x0000(0x0320)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		struct FSheikError                                         Error;                                                   // 0x0320(0x000C)  (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x032C(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikProgressionSystem.OpenFanMail
	 */
	struct USheikProgressionSystem_OpenFanMail_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikProgressionSystem.OpenAllFanMail
	 */
	struct USheikProgressionSystem_OpenAllFanMail_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction Sheik.SheikProgressionSystem.OnDataRetrieved__DelegateSignature
	 */
	struct USheikProgressionSystem_OnDataRetrieved__DelegateSignature_Params
	{
	public:
		bool                                                       bSuccessful;                                             // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_KN4W[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FSheikError                                         Error;                                                   // 0x0004(0x000C)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikProgressionSystem.IsTodayWithinEndingPeriodOfActiveSeason
	 */
	struct USheikProgressionSystem_IsTodayWithinEndingPeriodOfActiveSeason_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikProgressionSystem.IsTodayWithinActiveSeason
	 */
	struct USheikProgressionSystem_IsTodayWithinActiveSeason_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikProgressionSystem.IsTodayWithinActiveBattlePassSeason
	 */
	struct USheikProgressionSystem_IsTodayWithinActiveBattlePassSeason_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikProgressionSystem.IsTodayOutsideSeasonDateRange
	 */
	struct USheikProgressionSystem_IsTodayOutsideSeasonDateRange_Params
	{
	public:
		EIGSeasonIdentifier                                        InSeason;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikProgressionSystem.IsDebugAnnouncementDataEnabled
	 */
	struct USheikProgressionSystem_IsDebugAnnouncementDataEnabled_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikProgressionSystem.IsDateWithinRange
	 */
	struct USheikProgressionSystem_IsDateWithinRange_Params
	{
	public:
		struct FIGDateRange                                        DateRange;                                               // 0x0000(0x0028)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
		struct FDateTime                                           Date;                                                    // 0x0028(0x0008)  (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0030(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikProgressionSystem.IsBattlePassTierComplete
	 */
	struct USheikProgressionSystem_IsBattlePassTierComplete_Params
	{
	public:
		int32_t                                                    TierId;                                                  // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikProgressionSystem.IsBattlePassOwned
	 */
	struct USheikProgressionSystem_IsBattlePassOwned_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikProgressionSystem.IsAccountProgressionDataDownloaded
	 */
	struct USheikProgressionSystem_IsAccountProgressionDataDownloaded_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikProgressionSystem.InitializeCustomizableActor
	 */
	struct USheikProgressionSystem_InitializeCustomizableActor_Params
	{
	public:
		class UClass*                                              UIActorClass;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             ActorLocation;                                           // 0x0008(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_CBNF[0xC];                                   // 0x0014(0x000C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FQuat                                               ActorDefaultRotation;                                    // 0x0020(0x0010)  (Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikProgressionSystem.HasAnyXpBoosters
	 */
	struct USheikProgressionSystem_HasAnyXpBoosters_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikProgressionSystem.HandleOnPlayerWon
	 */
	struct USheikProgressionSystem_HandleOnPlayerWon_Params
	{
	public:
		TArray<class AIGPlayerState*>                              WinningPlayers;                                          // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
		bool                                                       isLocalPlayer;                                           // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       isSpectator;                                             // 0x0011(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikProgressionSystem.HandleOnPlayerDied
	 */
	struct USheikProgressionSystem_HandleOnPlayerDied_Params
	{
	public:
		ECauseOfDeath                                              Cause;                                                   // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikProgressionSystem.HandleOnPlacementChanged
	 */
	struct USheikProgressionSystem_HandleOnPlacementChanged_Params
	{
	public:
		int32_t                                                    Placement;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikProgressionSystem.HandleOnNonFinalRingFinishedClosing
	 */
	struct USheikProgressionSystem_HandleOnNonFinalRingFinishedClosing_Params
	{
	public:
		int32_t                                                    Time;                                                    // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikProgressionSystem.HandleOnFinalRingSurvivedUntil
	 */
	struct USheikProgressionSystem_HandleOnFinalRingSurvivedUntil_Params
	{	};

	/**
	 * Function Sheik.SheikProgressionSystem.HadAtLeastOneXpBoosterActiveDuringSession
	 */
	struct USheikProgressionSystem_HadAtLeastOneXpBoosterActiveDuringSession_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikProgressionSystem.GetTotalXpBoosterTime
	 */
	struct USheikProgressionSystem_GetTotalXpBoosterTime_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikProgressionSystem.GetTimeLeftInCurrentSeason
	 */
	struct USheikProgressionSystem_GetTimeLeftInCurrentSeason_Params
	{
	public:
		struct FTimespan                                           OutDaysAndHoursLeft;                                     // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikProgressionSystem.GetTimeLeftInCurrentBattlePassSeason
	 */
	struct USheikProgressionSystem_GetTimeLeftInCurrentBattlePassSeason_Params
	{
	public:
		struct FTimespan                                           OutDaysAndHoursLeft;                                     // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikProgressionSystem.GetTiersToCelebrateOnBattlePassPurchase
	 */
	struct USheikProgressionSystem_GetTiersToCelebrateOnBattlePassPurchase_Params
	{
	public:
		TArray<int32_t>                                            OutTierIds;                                              // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
		EBattlePassCelebrationReason                               ReturnValue;                                             // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikProgressionSystem.GetSingleBattlePassTierPrice
	 */
	struct USheikProgressionSystem_GetSingleBattlePassTierPrice_Params
	{
	public:
		int32_t                                                    OutPrice;                                                // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikProgressionSystem.GetNextCloutLevelForDisplayOnly
	 */
	struct USheikProgressionSystem_GetNextCloutLevelForDisplayOnly_Params
	{
	public:
		struct FProgressionLevel                                   OutNextCloutLevel;                                       // 0x0000(0x0068)  (Parm, OutParm, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0068(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikProgressionSystem.GetNewFansAnnouncements
	 */
	struct USheikProgressionSystem_GetNewFansAnnouncements_Params
	{
	public:
		TArray<struct FSheikPayload>                               OutAnnouncements;                                        // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikProgressionSystem.GetMaxCloutLevel
	 */
	struct USheikProgressionSystem_GetMaxCloutLevel_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikProgressionSystem.GetFanMailCount
	 */
	struct USheikProgressionSystem_GetFanMailCount_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikProgressionSystem.GetCurrentSeasonDefinition
	 */
	struct USheikProgressionSystem_GetCurrentSeasonDefinition_Params
	{
	public:
		struct FIGSeasonDefinition                                 OutCurrentSeasonDef;                                     // 0x0000(0x0050)  (Parm, OutParm, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0050(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikProgressionSystem.GetCurrentNumCloutFans
	 */
	struct USheikProgressionSystem_GetCurrentNumCloutFans_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikProgressionSystem.GetCurrentNumBattlePassFans
	 */
	struct USheikProgressionSystem_GetCurrentNumBattlePassFans_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikProgressionSystem.GetCurrentBattlePassTierId
	 */
	struct USheikProgressionSystem_GetCurrentBattlePassTierId_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikProgressionSystem.GetCurrentBattlePassTier
	 */
	struct USheikProgressionSystem_GetCurrentBattlePassTier_Params
	{
	public:
		struct FBattlePassTier                                     OutCurrentTier;                                          // 0x0000(0x0048)  (Parm, OutParm, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0048(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikProgressionSystem.GetCurrentBattlePassSeasonDefinition
	 */
	struct USheikProgressionSystem_GetCurrentBattlePassSeasonDefinition_Params
	{
	public:
		struct FIGSeasonDefinition                                 OutCurrentSeasonDef;                                     // 0x0000(0x0050)  (Parm, OutParm, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0050(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikProgressionSystem.GetCompletedBattlePassTierIdsNeedingCelebration
	 */
	struct USheikProgressionSystem_GetCompletedBattlePassTierIdsNeedingCelebration_Params
	{
	public:
		TArray<int32_t>                                            OutTierIds;                                              // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
		EBattlePassCelebrationReason                               ReturnValue;                                             // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikProgressionSystem.GetCloutLevel
	 */
	struct USheikProgressionSystem_GetCloutLevel_Params
	{
	public:
		struct FProgressionLevel                                   OutProgressionLevel;                                     // 0x0000(0x0068)  (Parm, OutParm, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0068(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikProgressionSystem.GetBattlePassTiers
	 */
	struct USheikProgressionSystem_GetBattlePassTiers_Params
	{
	public:
		TArray<struct FBattlePassTier>                             BattlePassTiers;                                         // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikProgressionSystem.GetBattlePassTierById
	 */
	struct USheikProgressionSystem_GetBattlePassTierById_Params
	{
	public:
		int32_t                                                    InTierId;                                                // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_NYM0[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FBattlePassTier                                     OutBattlePassTier;                                       // 0x0008(0x0048)  (Parm, OutParm, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0050(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikProgressionSystem.GetBattlePassRewardTypeLocTextByEnum
	 */
	struct USheikProgressionSystem_GetBattlePassRewardTypeLocTextByEnum_Params
	{
	public:
		EBattlePassRewardType                                      RewardType;                                              // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_17NY[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FText                                                ReturnValue;                                             // 0x0008(0x0018)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikProgressionSystem.GetBattlePassOffers
	 */
	struct USheikProgressionSystem_GetBattlePassOffers_Params
	{
	public:
		TArray<struct FSheikStoreItem>                             OutBattlePassOffers;                                     // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikProgressionSystem.GetBattlePassMatchAccumulationData
	 */
	struct USheikProgressionSystem_GetBattlePassMatchAccumulationData_Params
	{
	public:
		struct FBattlePassMatchAccumulationData                    ReturnValue;                                             // 0x0000(0x0068)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikProgressionSystem.FanMailRollComplete
	 */
	struct USheikProgressionSystem_FanMailRollComplete_Params
	{
	public:
		TArray<class FName>                                        WalletIds;                                               // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
		TArray<class FName>                                        FailedCodes;                                             // 0x0010(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
		bool                                                       bRedeemed;                                               // 0x0020(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikProgressionSystem.ClearCustomizer
	 */
	struct USheikProgressionSystem_ClearCustomizer_Params
	{	};

	/**
	 * Function Sheik.SheikProgressionSystem.CheckWillCloutLevelUpGivenCurrentFans
	 */
	struct USheikProgressionSystem_CheckWillCloutLevelUpGivenCurrentFans_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikProgressionSystem.CheckForGameFlowState
	 */
	struct USheikProgressionSystem_CheckForGameFlowState_Params
	{
	public:
		EGameFlowState                                             NewState;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikProgressionSystem.CanPurchaseNumTiers
	 */
	struct USheikProgressionSystem_CanPurchaseNumTiers_Params
	{
	public:
		int32_t                                                    NumTiersToPurchase;                                      // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikProgressionSystem.CanPurchaseBattlePass
	 */
	struct USheikProgressionSystem_CanPurchaseBattlePass_Params
	{
	public:
		struct FSheikStoreItem                                     Offer;                                                   // 0x0000(0x0320)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0320(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikProgressionSystem.CalculateAllProgressionAndUpload
	 */
	struct USheikProgressionSystem_CalculateAllProgressionAndUpload_Params
	{
	public:
		float                                                      NewFans;                                                 // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EReasonFansAwarded                                         ReasonForAddingFans;                                     // 0x0004(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikRepSystem.OnRepTitleStorageDownloadCompleted
	 */
	struct USheikRepSystem_OnRepTitleStorageDownloadCompleted_Params
	{	};

	/**
	 * Function Sheik.SheikSavedSettingBlueprintLibrary.SetHudRegionVisibility
	 */
	struct USheikSavedSettingBlueprintLibrary_SetHudRegionVisibility_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		ESheikHudRegion                                            HudRegion;                                               // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bVisible;                                                // 0x0009(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikSavedSettingBlueprintLibrary.SetGameBrightness
	 */
	struct USheikSavedSettingBlueprintLibrary_SetGameBrightness_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      InBrightness;                                            // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikSavedSettingBlueprintLibrary.SetDamageNumberVisibility
	 */
	struct USheikSavedSettingBlueprintLibrary_SetDamageNumberVisibility_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bVisible;                                                // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikSavedSettingBlueprintLibrary.RefreshControlMappingsFromSavedSettings
	 */
	struct USheikSavedSettingBlueprintLibrary_RefreshControlMappingsFromSavedSettings_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UPlayerInput*                                        InPlayerInput;                                           // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikSavedSettingBlueprintLibrary.GetHudRegionVisibility
	 */
	struct USheikSavedSettingBlueprintLibrary_GetHudRegionVisibility_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		ESheikHudRegion                                            HudRegion;                                               // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0009(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikSavedSettingBlueprintLibrary.GetGameBrightness
	 */
	struct USheikSavedSettingBlueprintLibrary_GetGameBrightness_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      ReturnValue;                                             // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikSavedSettingBlueprintLibrary.GetDamageNumberVisibility
	 */
	struct USheikSavedSettingBlueprintLibrary_GetDamageNumberVisibility_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikSavedSettings.SetDataForPreset
	 */
	struct USheikSavedSettings_SetDataForPreset_Params
	{
	public:
		class FString                                              InPresetName;                                            // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<unsigned char>                                      InData;                                                  // 0x0010(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikSavedSettings.RemoveDataForPreset
	 */
	struct USheikSavedSettings_RemoveDataForPreset_Params
	{
	public:
		class FString                                              InPresetName;                                            // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikSavedSettings.GetDataForPreset
	 */
	struct USheikSavedSettings_GetDataForPreset_Params
	{
	public:
		class FString                                              InPresetName;                                            // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<unsigned char>                                      ReturnValue;                                             // 0x0010(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikSavedSettings.DoesPresetExist
	 */
	struct USheikSavedSettings_DoesPresetExist_Params
	{
	public:
		class FString                                              InPresetName;                                            // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikSeasonalStatsManager.OnUploadPastSeasonsStats
	 */
	struct USheikSeasonalStatsManager_OnUploadPastSeasonsStats_Params
	{
	public:
		class FString                                              ErrorString;                                             // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikSeasonalStatsManager.OnDownloadSeasonalStats
	 */
	struct USheikSeasonalStatsManager_OnDownloadSeasonalStats_Params
	{
	public:
		struct FGetCozmoStatsResult                                Result;                                                  // 0x0000(0x0050)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		class FString                                              ErrorString;                                             // 0x0050(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikSeasonalStatsManager.IsPreviousSeason
	 */
	struct USheikSeasonalStatsManager_IsPreviousSeason_Params
	{
	public:
		EIGSeasonIdentifier                                        Season;                                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikSeasonalStatsManager.GetCurrentSeason
	 */
	struct USheikSeasonalStatsManager_GetCurrentSeason_Params
	{
	public:
		EIGSeasonIdentifier                                        ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikSpectatorHUDScreen.SetSpectatorsPawnInfoVisibility
	 */
	struct USheikSpectatorHUDScreen_SetSpectatorsPawnInfoVisibility_Params
	{
	public:
		class ASheikCharacter*                                     SheikCharacter;                                          // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bIsVisible;                                              // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikSpectatorHUDScreen.SetOtherSpectatorsPawnInfoVisibility
	 */
	struct USheikSpectatorHUDScreen_SetOtherSpectatorsPawnInfoVisibility_Params
	{
	public:
		bool                                                       bIsVisible;                                              // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikSpringboardComponent.UpdateArrowTransform
	 */
	struct USheikSpringboardComponent_UpdateArrowTransform_Params
	{	};

	/**
	 * Function Sheik.SheikSpringboardInterface.OnSpringboardHitCallback
	 */
	struct USheikSpringboardInterface_OnSpringboardHitCallback_Params
	{
	public:
		class UPrimitiveComponent*                                 HitComp;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AActor*                                              OtherActor;                                              // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UPrimitiveComponent*                                 OtherComp;                                               // 0x0010(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             NormalImpulse;                                           // 0x0018(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FHitResult                                          Hit;                                                     // 0x0024(0x0088)  (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikSpringboardStaticMeshComp.UpdateArrowTransform
	 */
	struct USheikSpringboardStaticMeshComp_UpdateArrowTransform_Params
	{	};

	/**
	 * Function Sheik.SheikStatsAdapter.IsComplexStat
	 */
	struct USheikStatsAdapter_IsComplexStat_Params
	{
	public:
		class UIGStatsSystem*                                      StatsSystem;                                             // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                ComplexStatName;                                         // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikStatsAdapter.GetTranslatedStatWithSeasonalData
	 */
	struct USheikStatsAdapter_GetTranslatedStatWithSeasonalData_Params
	{
	public:
		class UIGStatsSystem*                                      StatsSystem;                                             // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class USheikSeasonalStatsManager*                          SeasonalStatsManager;                                    // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                Name;                                                    // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EIGSeasonIdentifier                                        StatSeason;                                              // 0x0018(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_H7QI[0x7];                                   // 0x0019(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FSheikPlayerDataStat                                OutStat;                                                 // 0x0020(0x00D8)  (Parm, OutParm, NativeAccessSpecifierPublic)
		struct FSheikSeasonalStatFieldsData                        OutRequestedSeasonData;                                  // 0x00F8(0x0030)  (Parm, OutParm, NativeAccessSpecifierPublic)
		bool                                                       OutHasSeasonalData;                                      // 0x0128(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0129(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikStatsAdapter.GetTranslatedStat
	 */
	struct USheikStatsAdapter_GetTranslatedStat_Params
	{
	public:
		class UIGStatsSystem*                                      StatsSystem;                                             // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                Name;                                                    // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FSheikPlayerDataStat                                OutStat;                                                 // 0x0010(0x00D8)  (Parm, OutParm, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x00E8(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikStatsAdapter.GetFormattedStatValueText
	 */
	struct USheikStatsAdapter_GetFormattedStatValueText_Params
	{
	public:
		class UIGStatsSystem*                                      StatsSystem;                                             // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FSheikPlayerDataStat                                InStat;                                                  // 0x0008(0x00D8)  (Parm, NativeAccessSpecifierPublic)
		EIGSeasonIdentifier                                        StatSeason;                                              // 0x00E0(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_CJOV[0x3];                                   // 0x00E1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      InStatValue;                                             // 0x00E4(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FText                                                ReturnValue;                                             // 0x00E8(0x0018)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikStatsAdapter.GetAllTranslatedStats
	 */
	struct USheikStatsAdapter_GetAllTranslatedStats_Params
	{
	public:
		class UIGStatsSystem*                                      StatsSystem;                                             // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<struct FSheikPlayerDataStat>                        OutStatsArray;                                           // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
		bool                                                       ShowHiddenStats;                                         // 0x0018(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0019(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikStatsAdapter.CalculateComplexStatFromGivenValues
	 */
	struct USheikStatsAdapter_CalculateComplexStatFromGivenValues_Params
	{
	public:
		class UIGStatsSystem*                                      StatsSystem;                                             // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                ComplexStatName;                                         // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<float>                                              TrackedTitleCardStatValues;                              // 0x0010(0x0010)  (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
		class FText                                                ReturnValue;                                             // 0x0020(0x0018)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikStatsDownloadManager.TransferRequestTimedOut
	 */
	struct USheikStatsDownloadManager_TransferRequestTimedOut_Params
	{	};

	/**
	 * Function Sheik.SheikStatsUploadManager.TransferRequestTimedOut
	 */
	struct USheikStatsUploadManager_TransferRequestTimedOut_Params
	{	};

	/**
	 * Function Sheik.SheikStoreScreen.SetDeepLinkArguments
	 */
	struct USheikStoreScreen_SetDeepLinkArguments_Params
	{
	public:
		TMap<class FName, class FString>                           InDeepLinkArguments;                                     // 0x0000(0x0050)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikStoreScreen.ClearDeepLinkArguments
	 */
	struct USheikStoreScreen_ClearDeepLinkArguments_Params
	{	};

	/**
	 * Function Sheik.SheikStoreSystem.TogglePlatformInStoreUi
	 */
	struct USheikStoreSystem_TogglePlatformInStoreUi_Params
	{
	public:
		bool                                                       bEnabled;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikStoreSystem.SortItemsForDisplay
	 */
	struct USheikStoreSystem_SortItemsForDisplay_Params
	{
	public:
		TArray<struct FSheikStoreItem>                             StoreItems;                                              // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
		TArray<struct FSheikStoreItem>                             SortedStoreItems;                                        // 0x0010(0x0010)  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikStoreSystem.SortCategoriesForDisplay
	 */
	struct USheikStoreSystem_SortCategoriesForDisplay_Params
	{
	public:
		TArray<struct FSheikStoreCategory>                         Categories;                                              // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikStoreSystem.SaveCharacterLoadout
	 */
	struct USheikStoreSystem_SaveCharacterLoadout_Params
	{	};

	/**
	 * Function Sheik.SheikStoreSystem.QueryPlatformStoreData
	 */
	struct USheikStoreSystem_QueryPlatformStoreData_Params
	{	};

	/**
	 * Function Sheik.SheikStoreSystem.PurchaseItem
	 */
	struct USheikStoreSystem_PurchaseItem_Params
	{
	public:
		struct FSheikStoreItem                                     StoreItem;                                               // 0x0000(0x0320)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      Delegate;                                                // 0x0320(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikStoreSystem.PostStoreTelemetryEvent
	 */
	struct USheikStoreSystem_PostStoreTelemetryEvent_Params
	{
	public:
		class FString                                              Location;                                                // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              EventType;                                               // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikStoreSystem.PostStoreItemVCTelemetryEvent
	 */
	struct USheikStoreSystem_PostStoreItemVCTelemetryEvent_Params
	{
	public:
		struct FSheikStoreItem                                     StoreItem;                                               // 0x0000(0x0320)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		struct FSheikStoreItem                                     VCPackage;                                               // 0x0320(0x0320)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		class FString                                              Location;                                                // 0x0640(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              EventType;                                               // 0x0650(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikStoreSystem.PostStoreItemTelemetryEvent
	 */
	struct USheikStoreSystem_PostStoreItemTelemetryEvent_Params
	{
	public:
		struct FSheikStoreItem                                     StoreItem;                                               // 0x0000(0x0320)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		class FString                                              Location;                                                // 0x0320(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              EventType;                                               // 0x0330(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikStoreSystem.OnWalletIdRevocationOccurred
	 */
	struct USheikStoreSystem_OnWalletIdRevocationOccurred_Params
	{
	public:
		TArray<class FName>                                        RevokedWalledIds;                                        // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction Sheik.SheikStoreSystem.OnVirtualCurrencyUpdated__DelegateSignature
	 */
	struct USheikStoreSystem_OnVirtualCurrencyUpdated__DelegateSignature_Params
	{
	public:
		int32_t                                                    NewAmount;                                               // 0x0000(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    OldAmount;                                               // 0x0004(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		ESheikStoreErrorType                                       Error;                                                   // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction Sheik.SheikStoreSystem.OnUnlockMultipleWalletIdsComplete__DelegateSignature
	 */
	struct USheikStoreSystem_OnUnlockMultipleWalletIdsComplete__DelegateSignature_Params
	{
	public:
		TArray<class FName>                                        WalletIds;                                               // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
		bool                                                       bSuccessful;                                             // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction Sheik.SheikStoreSystem.OnRefreshStoreForItems__DelegateSignature
	 */
	struct USheikStoreSystem_OnRefreshStoreForItems__DelegateSignature_Params
	{
	public:
		TArray<struct FSheikStoreItem>                             StoreItems;                                              // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction Sheik.SheikStoreSystem.OnPurchaseItem__DelegateSignature
	 */
	struct USheikStoreSystem_OnPurchaseItem__DelegateSignature_Params
	{
	public:
		bool                                                       bSuccessful;                                             // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_NHXS[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FSheikError                                         Error;                                                   // 0x0004(0x000C)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction Sheik.SheikStoreSystem.OnPurchaseComplete__DelegateSignature
	 */
	struct USheikStoreSystem_OnPurchaseComplete__DelegateSignature_Params
	{
	public:
		struct FSheikStoreItem                                     StoreItem;                                               // 0x0000(0x0320)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		bool                                                       bSuccessful;                                             // 0x0320(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction Sheik.SheikStoreSystem.OnPlatformOffersRetrieved__DelegateSignature
	 */
	struct USheikStoreSystem_OnPlatformOffersRetrieved__DelegateSignature_Params
	{	};

	/**
	 * DelegateFunction Sheik.SheikStoreSystem.OnInitialStoreDataRetrieved__DelegateSignature
	 */
	struct USheikStoreSystem_OnInitialStoreDataRetrieved__DelegateSignature_Params
	{	};

	/**
	 * Function Sheik.SheikStoreSystem.OnEnteredFrontendHandleSyncOfflinePurchasesError
	 */
	struct USheikStoreSystem_OnEnteredFrontendHandleSyncOfflinePurchasesError_Params
	{	};

	/**
	 * Function Sheik.SheikStoreSystem.OnApplicationReactivated
	 */
	struct USheikStoreSystem_OnApplicationReactivated_Params
	{	};

	/**
	 * Function Sheik.SheikStoreSystem.LogStorePurchaseEvent
	 */
	struct USheikStoreSystem_LogStorePurchaseEvent_Params
	{
	public:
		class APlayerState*                                        OwningPlayerState;                                       // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<struct FSheikStoreItem>                             StoreItems;                                              // 0x0008(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
		bool                                                       bSuccessful;                                             // 0x0018(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikStoreSystem.IsPlatformStoreCommunicationEnabled
	 */
	struct USheikStoreSystem_IsPlatformStoreCommunicationEnabled_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikStoreSystem.IsDataDownloaded
	 */
	struct USheikStoreSystem_IsDataDownloaded_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikStoreSystem.IsBattlePassStoreCategory
	 */
	struct USheikStoreSystem_IsBattlePassStoreCategory_Params
	{
	public:
		struct FSheikStoreCategory                                 InCategory;                                              // 0x0000(0x00B8)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x00B8(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikStoreSystem.InitializeCustomizableActor
	 */
	struct USheikStoreSystem_InitializeCustomizableActor_Params
	{
	public:
		class UClass*                                              UIActorClass;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             ActorLocation;                                           // 0x0008(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_BU04[0xC];                                   // 0x0014(0x000C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FQuat                                               ActorDefaultRotation;                                    // 0x0020(0x0010)  (Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikStoreSystem.Initialize
	 */
	struct USheikStoreSystem_Initialize_Params
	{	};

	/**
	 * Function Sheik.SheikStoreSystem.HasPlatformStoreCategory
	 */
	struct USheikStoreSystem_HasPlatformStoreCategory_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikStoreSystem.GetWalletSystem
	 */
	struct USheikStoreSystem_GetWalletSystem_Params
	{
	public:
		class USheikWalletSystem*                                  ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikStoreSystem.GetVirtualCurrency
	 */
	struct USheikStoreSystem_GetVirtualCurrency_Params
	{
	public:
		ESheikStoreErrorType                                       Error;                                                   // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_1D08[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ReturnValue;                                             // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikStoreSystem.GetStoreItems
	 */
	struct USheikStoreSystem_GetStoreItems_Params
	{
	public:
		TArray<struct FSheikStoreItem>                             OutItems;                                                // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
		ESheikStoreErrorType                                       Error;                                                   // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		ESheikStoreItemType                                        TypeFilter;                                              // 0x0011(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikStoreSystem.GetStoreCategory
	 */
	struct USheikStoreSystem_GetStoreCategory_Params
	{
	public:
		class FString                                              ID;                                                      // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FSheikStoreCategory                                 Category;                                                // 0x0010(0x00B8)  (Parm, OutParm, NativeAccessSpecifierPublic)
		bool                                                       bFound;                                                  // 0x00C8(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikStoreSystem.GetStoreCategories
	 */
	struct USheikStoreSystem_GetStoreCategories_Params
	{
	public:
		TArray<struct FSheikStoreCategory>                         Categories;                                              // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
		ESheikStoreErrorType                                       Error;                                                   // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bIncludeBattlePassCategories;                            // 0x0011(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bIncludePlatformRmtCategories;                           // 0x0012(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikStoreSystem.GetRMTCategoryDefinition
	 */
	struct USheikStoreSystem_GetRMTCategoryDefinition_Params
	{
	public:
		class FName                                                InCategoryName;                                          // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FSheikRMTCategoryDefinition                         OutCategory;                                             // 0x0008(0x0068)  (Parm, OutParm, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0070(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikStoreSystem.GetPlatformStoreRmtCategoryByName
	 */
	struct USheikStoreSystem_GetPlatformStoreRmtCategoryByName_Params
	{
	public:
		class FName                                                InName;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FSheikStoreCategory                                 OutCategory;                                             // 0x0008(0x00B8)  (Parm, OutParm, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x00C0(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikStoreSystem.GetPlatformStoreCategoryNames
	 */
	struct USheikStoreSystem_GetPlatformStoreCategoryNames_Params
	{
	public:
		TArray<class FName>                                        ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikStoreSystem.GetPlatformStoreCategory
	 */
	struct USheikStoreSystem_GetPlatformStoreCategory_Params
	{
	public:
		struct FSheikStoreCategory                                 Category;                                                // 0x0000(0x00B8)  (Parm, OutParm, NativeAccessSpecifierPublic)
		bool                                                       bSorted;                                                 // 0x00B8(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikStoreSystem.GetPlatformRmtCategoryStoreItems
	 */
	struct USheikStoreSystem_GetPlatformRmtCategoryStoreItems_Params
	{
	public:
		struct FSheikRMTCategoryDefinition                         CategoryDefinition;                                      // 0x0000(0x0068)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		TArray<struct FSheikStoreItem>                             OutItems;                                                // 0x0068(0x0010)  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0078(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikStoreSystem.GetPlatformOffersQueryError
	 */
	struct USheikStoreSystem_GetPlatformOffersQueryError_Params
	{
	public:
		ESheikStoreErrorType                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikStoreSystem.GetCategoryForStoreItem
	 */
	struct USheikStoreSystem_GetCategoryForStoreItem_Params
	{
	public:
		class FString                                              InStoreItemOfferId;                                      // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FSheikStoreCategory                                 OutCategory;                                             // 0x0010(0x00B8)  (Parm, OutParm, NativeAccessSpecifierPublic)
		ESheikStoreErrorType                                       Error;                                                   // 0x00C8(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x00C9(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikStoreSystem.GetBattlePassStoreCategory
	 */
	struct USheikStoreSystem_GetBattlePassStoreCategory_Params
	{
	public:
		struct FSheikStoreCategory                                 Category;                                                // 0x0000(0x00B8)  (Parm, OutParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikStoreSystem.GenerateRandomStoreItem
	 */
	struct USheikStoreSystem_GenerateRandomStoreItem_Params
	{
	public:
		struct FSheikStoreItem                                     StoreItem;                                               // 0x0000(0x0320)  (Parm, OutParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikStoreSystem.DebugPurchasePlatformStoreOffer
	 */
	struct USheikStoreSystem_DebugPurchasePlatformStoreOffer_Params
	{	};

	/**
	 * Function Sheik.SheikStoreSystem.DebugGiftRandomEntitlement
	 */
	struct USheikStoreSystem_DebugGiftRandomEntitlement_Params
	{	};

	/**
	 * Function Sheik.SheikStoreSystem.DebugGetRandomEntitlement
	 */
	struct USheikStoreSystem_DebugGetRandomEntitlement_Params
	{
	public:
		int32_t                                                    NumToGet;                                                // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                ReturnValue;                                             // 0x0004(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikStoreSystem.DebugGetAllEntitlements
	 */
	struct USheikStoreSystem_DebugGetAllEntitlements_Params
	{	};

	/**
	 * Function Sheik.SheikStoreSystem.DebugClearAllEntitlements
	 */
	struct USheikStoreSystem_DebugClearAllEntitlements_Params
	{	};

	/**
	 * Function Sheik.SheikStoreSystem.DebugAddVirtualCurrency
	 */
	struct USheikStoreSystem_DebugAddVirtualCurrency_Params
	{
	public:
		int32_t                                                    Amount;                                                  // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikTabBase.SetTabImage
	 */
	struct USheikTabBase_SetTabImage_Params
	{
	public:
		class UTexture2D*                                          InTexture;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bMatchTextureSize;                                       // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikTabBase.SetLabel
	 */
	struct USheikTabBase_SetLabel_Params
	{
	public:
		class FText                                                InLabel;                                                 // 0x0000(0x0018)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikTabBase.SelectTab
	 */
	struct USheikTabBase_SelectTab_Params
	{
	public:
		bool                                                       IsSelected;                                              // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       SkipAnimation;                                           // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikTabBase.OnTabUnfocused
	 */
	struct USheikTabBase_OnTabUnfocused_Params
	{
	public:
		class UIGUI_WidgetBase*                                    InWidget;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    UserIndex;                                               // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikTabBase.OnTabSelected
	 */
	struct USheikTabBase_OnTabSelected_Params
	{
	public:
		class UIGUI_WidgetBase*                                    InWidget;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    UserIndex;                                               // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikTabBase.OnTabFocused
	 */
	struct USheikTabBase_OnTabFocused_Params
	{
	public:
		class UIGUI_WidgetBase*                                    InWidget;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    UserIndex;                                               // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikTabBase.GetLabel
	 */
	struct USheikTabBase_GetLabel_Params
	{
	public:
		class FText                                                ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikTabBase.GetIsSelected
	 */
	struct USheikTabBase_GetIsSelected_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikTabBase.FocusTab
	 */
	struct USheikTabBase_FocusTab_Params
	{
	public:
		bool                                                       bFocused;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikTabBase.ApplyContentOnPreConstruct
	 */
	struct USheikTabBase_ApplyContentOnPreConstruct_Params
	{	};

	/**
	 * Function Sheik.SheikTeammateLocationPrompt.UpdateTeammateNameVisibilityOnTeamSize
	 */
	struct USheikTeammateLocationPrompt_UpdateTeammateNameVisibilityOnTeamSize_Params
	{
	public:
		int32_t                                                    NumAliveTeammates;                                       // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikTeammateLocationPrompt.UpdateTeammateNameVisibility
	 */
	struct USheikTeammateLocationPrompt_UpdateTeammateNameVisibility_Params
	{	};

	/**
	 * Function Sheik.SheikTeammateLocationPrompt.UpdatePromptVisibility
	 */
	struct USheikTeammateLocationPrompt_UpdatePromptVisibility_Params
	{	};

	/**
	 * Function Sheik.SheikTeammateLocationPrompt.UpdatePromptTimer
	 */
	struct USheikTeammateLocationPrompt_UpdatePromptTimer_Params
	{	};

	/**
	 * Function Sheik.SheikTeammateLocationPrompt.UpdatePromptPosition
	 */
	struct USheikTeammateLocationPrompt_UpdatePromptPosition_Params
	{
	public:
		float                                                      DeltaTime;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikThrownItemIndicator.SetForPlayer
	 */
	struct USheikThrownItemIndicator_SetForPlayer_Params
	{
	public:
		class ASheikPlayerStateCommon*                             SpectatorState;                                          // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikThrownItemIndicator.HideWidget_BP
	 */
	struct USheikThrownItemIndicator_HideWidget_BP_Params
	{	};

	/**
	 * Function Sheik.SheikThrownItemIndicator.HandleOnThrownItemTargetingPlayer_BP
	 */
	struct USheikThrownItemIndicator_HandleOnThrownItemTargetingPlayer_BP_Params
	{
	public:
		class AIGInteractablePickup*                               ThrownItem;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikThrownItemIndicator.HandleOnThrownItemNoLongerTargetingPlayer_BP
	 */
	struct USheikThrownItemIndicator_HandleOnThrownItemNoLongerTargetingPlayer_BP_Params
	{
	public:
		class AIGInteractablePickup*                               ThrownItem;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikTitleCardBase.TryGetStatByName
	 */
	struct USheikTitleCardBase_TryGetStatByName_Params
	{
	public:
		class FName                                                RawStatName;                                             // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FSheikPlayerDataStat                                OutStat;                                                 // 0x0008(0x00D8)  (Parm, OutParm, NativeAccessSpecifierPublic)
		class USheikGameInstance*                                  GameInstanceRef;                                         // 0x00E0(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x00E8(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikTitleCardBase.SetEnemyStatInfo
	 */
	struct USheikTitleCardBase_SetEnemyStatInfo_Params
	{
	public:
		class UIGStatsSystem*                                      StatsSystem;                                             // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<struct FIGTitleCardStat>                            TitleCardStats;                                          // 0x0008(0x0010)  (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
		TArray<float>                                              TitleCardStatValues;                                     // 0x0018(0x0010)  (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikTitleCardBase.SetCurrentTitleCard
	 */
	struct USheikTitleCardBase_SetCurrentTitleCard_Params
	{
	public:
		struct FTitleCardLoadout                                   TitleCardLoadout;                                        // 0x0000(0x04B0)  (Parm, NativeAccessSpecifierPublic)
		class FString                                              UserName;                                                // 0x04B0(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<float>                                              StatArray;                                               // 0x04C0(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
		bool                                                       bPlayerIsDead;                                           // 0x04D0(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikTitleCardBase.SetBackgroundVisible
	 */
	struct USheikTitleCardBase_SetBackgroundVisible_Params
	{
	public:
		bool                                                       BackgroundVisible;                                       // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikTitleCardBase.ReleaseLoadedTitleCardData
	 */
	struct USheikTitleCardBase_ReleaseLoadedTitleCardData_Params
	{	};

	/**
	 * Function Sheik.SheikTitleCardBase.OnVariableImageLoadFailed
	 */
	struct USheikTitleCardBase_OnVariableImageLoadFailed_Params
	{	};

	/**
	 * DelegateFunction Sheik.SheikTitleCardBase.OnVariableImageDataReady__DelegateSignature
	 */
	struct USheikTitleCardBase_OnVariableImageDataReady__DelegateSignature_Params
	{	};

	/**
	 * DelegateFunction Sheik.SheikTitleCardBase.OnLoadoutSoftPointersLoadSucceeded__DelegateSignature
	 */
	struct USheikTitleCardBase_OnLoadoutSoftPointersLoadSucceeded__DelegateSignature_Params
	{	};

	/**
	 * DelegateFunction Sheik.SheikTitleCardBase.OnLoadoutSoftPointersLoadFailed__DelegateSignature
	 */
	struct USheikTitleCardBase_OnLoadoutSoftPointersLoadFailed__DelegateSignature_Params
	{	};

	/**
	 * Function Sheik.SheikTitleCardBase.LoadVariableImageData
	 */
	struct USheikTitleCardBase_LoadVariableImageData_Params
	{
	public:
		struct FIGVariableImageData                                InImageData;                                             // 0x0000(0x0058)  (Parm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikTitleCardBase.LoadAllLoadoutSoftPointers
	 */
	struct USheikTitleCardBase_LoadAllLoadoutSoftPointers_Params
	{
	public:
		struct FTitleCardLoadout                                   InTitleCardLoadout;                                      // 0x0000(0x04B0)  (Parm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikTitleCardBase.HandleOnVariableImageDataLoadComplete
	 */
	struct USheikTitleCardBase_HandleOnVariableImageDataLoadComplete_Params
	{	};

	/**
	 * Function Sheik.SheikTitleCardBase.HandleOnLoadoutSoftPointersLoadComplete
	 */
	struct USheikTitleCardBase_HandleOnLoadoutSoftPointersLoadComplete_Params
	{	};

	/**
	 * Function Sheik.SheikTitleCardBase.GetSoftObjectPathsFromLoadout
	 */
	struct USheikTitleCardBase_GetSoftObjectPathsFromLoadout_Params
	{
	public:
		struct FTitleCardLoadout                                   InTitleCardLoadout;                                      // 0x0000(0x04B0)  (Parm, OutParm, NativeAccessSpecifierPublic)
		TArray<struct FSoftObjectPath>                             ReturnValue;                                             // 0x04B0(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikTitleCardDataManager.TranslateFromIdsToLoadout
	 */
	struct USheikTitleCardDataManager_TranslateFromIdsToLoadout_Params
	{
	public:
		struct FTitleCardLoadoutIds                                InLoadoutIds;                                            // 0x0000(0x0048)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		struct FTitleCardLoadout                                   OutLoadoutData;                                          // 0x0048(0x04B0)  (Parm, OutParm, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x04F8(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikTitleCardDataManager.HandleOnWalletAssetUnlocked
	 */
	struct USheikTitleCardDataManager_HandleOnWalletAssetUnlocked_Params
	{
	public:
		TArray<class FName>                                        WalletIds;                                               // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
		TArray<class FName>                                        FailedCodes;                                             // 0x0010(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikTitleCardFrontendUtility.UnequipRewardFromSlot
	 */
	struct ASheikTitleCardFrontendUtility_UnequipRewardFromSlot_Params
	{
	public:
		ESheikTitleCardDataType                                    RewardType;                                              // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		ETitleCardStackOrder                                       SlotToUse;                                               // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikTitleCardFrontendUtility.UnequipReward
	 */
	struct ASheikTitleCardFrontendUtility_UnequipReward_Params
	{
	public:
		ESheikTitleCardDataType                                    RewardType;                                              // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikTitleCardFrontendUtility.SpawnCharacterPreview
	 */
	struct ASheikTitleCardFrontendUtility_SpawnCharacterPreview_Params
	{	};

	/**
	 * Function Sheik.SheikTitleCardFrontendUtility.SetupUtility
	 */
	struct ASheikTitleCardFrontendUtility_SetupUtility_Params
	{	};

	/**
	 * Function Sheik.SheikTitleCardFrontendUtility.SetupTitleCardLoadout
	 */
	struct ASheikTitleCardFrontendUtility_SetupTitleCardLoadout_Params
	{	};

	/**
	 * Function Sheik.SheikTitleCardFrontendUtility.SetSheikAccessorySystem
	 */
	struct ASheikTitleCardFrontendUtility_SetSheikAccessorySystem_Params
	{
	public:
		class USheikAccessorySystem*                               InAccessorySystem;                                       // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikTitleCardFrontendUtility.SaveNewLoadout
	 */
	struct ASheikTitleCardFrontendUtility_SaveNewLoadout_Params
	{	};

	/**
	 * Function Sheik.SheikTitleCardFrontendUtility.ReleaseLoadedPoseMontages
	 */
	struct ASheikTitleCardFrontendUtility_ReleaseLoadedPoseMontages_Params
	{	};

	/**
	 * Function Sheik.SheikTitleCardFrontendUtility.RandomizeReward
	 */
	struct ASheikTitleCardFrontendUtility_RandomizeReward_Params
	{
	public:
		ESheikTitleCardDataType                                    RewardType;                                              // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikTitleCardFrontendUtility.RandomizeAllTitleCardRewards
	 */
	struct ASheikTitleCardFrontendUtility_RandomizeAllTitleCardRewards_Params
	{	};

	/**
	 * Function Sheik.SheikTitleCardFrontendUtility.PreviewTitleCardBackground
	 */
	struct ASheikTitleCardFrontendUtility_PreviewTitleCardBackground_Params
	{
	public:
		struct FIGTitleCardBackground                              NewBackground;                                           // 0x0000(0x0120)  (Parm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikTitleCardFrontendUtility.PreviewStatInSlot
	 */
	struct ASheikTitleCardFrontendUtility_PreviewStatInSlot_Params
	{
	public:
		struct FIGTitleCardStat                                    NewStat;                                                 // 0x0000(0x0138)  (Parm, NativeAccessSpecifierPublic)
		ETitleCardStackOrder                                       SlotToUse;                                               // 0x0138(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikTitleCardFrontendUtility.PreviewPlayerTitle
	 */
	struct ASheikTitleCardFrontendUtility_PreviewPlayerTitle_Params
	{
	public:
		struct FIGTitleCardPlayerTitle                             NewPlayerTitle;                                          // 0x0000(0x0100)  (Parm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikTitleCardFrontendUtility.PreviewPlayerPose
	 */
	struct ASheikTitleCardFrontendUtility_PreviewPlayerPose_Params
	{
	public:
		struct FIGTitleCardPlayerPose                              NewPose;                                                 // 0x0000(0x0150)  (Parm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikTitleCardFrontendUtility.PreviewMedalInSlot
	 */
	struct ASheikTitleCardFrontendUtility_PreviewMedalInSlot_Params
	{
	public:
		struct FIGTitleCardMedal                                   NewMedal;                                                // 0x0000(0x0120)  (Parm, NativeAccessSpecifierPublic)
		ETitleCardStackOrder                                       SlotToUse;                                               // 0x0120(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikTitleCardFrontendUtility.PreviewBorder
	 */
	struct ASheikTitleCardFrontendUtility_PreviewBorder_Params
	{
	public:
		struct FIGTitleCardBorder                                  NewBorder;                                               // 0x0000(0x0120)  (Parm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikTitleCardFrontendUtility.PoseCharacter
	 */
	struct ASheikTitleCardFrontendUtility_PoseCharacter_Params
	{
	public:
		struct FIGTitleCardPlayerPose                              PoseToUse;                                               // 0x0000(0x0150)  (Parm, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0150(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction Sheik.SheikTitleCardFrontendUtility.OnUnsavedTitleCardChangesDetected__DelegateSignature
	 */
	struct ASheikTitleCardFrontendUtility_OnUnsavedTitleCardChangesDetected__DelegateSignature_Params
	{	};

	/**
	 * DelegateFunction Sheik.SheikTitleCardFrontendUtility.OnTitleCardChangesSaved__DelegateSignature
	 */
	struct ASheikTitleCardFrontendUtility_OnTitleCardChangesSaved__DelegateSignature_Params
	{	};

	/**
	 * Function Sheik.SheikTitleCardFrontendUtility.OnPoseMontageLoadFailed
	 */
	struct ASheikTitleCardFrontendUtility_OnPoseMontageLoadFailed_Params
	{	};

	/**
	 * Function Sheik.SheikTitleCardFrontendUtility.OnPoseMontageLoadComplete
	 */
	struct ASheikTitleCardFrontendUtility_OnPoseMontageLoadComplete_Params
	{
	public:
		class UIGMoveMontage*                                      LoadedMontage;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction Sheik.SheikTitleCardFrontendUtility.OnCharacterPreviewReady__DelegateSignature
	 */
	struct ASheikTitleCardFrontendUtility_OnCharacterPreviewReady__DelegateSignature_Params
	{	};

	/**
	 * DelegateFunction Sheik.SheikTitleCardFrontendUtility.OnCharacterPoseReady__DelegateSignature
	 */
	struct ASheikTitleCardFrontendUtility_OnCharacterPoseReady__DelegateSignature_Params
	{	};

	/**
	 * Function Sheik.SheikTitleCardFrontendUtility.LoadPoseMontage
	 */
	struct ASheikTitleCardFrontendUtility_LoadPoseMontage_Params
	{
	public:
		struct FIGTitleCardPlayerPose                              InPoseData;                                              // 0x0000(0x0150)  (Parm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikTitleCardFrontendUtility.LoadCurrentTitleCardLoadout
	 */
	struct ASheikTitleCardFrontendUtility_LoadCurrentTitleCardLoadout_Params
	{	};

	/**
	 * Function Sheik.SheikTitleCardFrontendUtility.Init
	 */
	struct ASheikTitleCardFrontendUtility_Init_Params
	{	};

	/**
	 * Function Sheik.SheikTitleCardFrontendUtility.HandleOnPoseMontageLoadComplete
	 */
	struct ASheikTitleCardFrontendUtility_HandleOnPoseMontageLoadComplete_Params
	{	};

	/**
	 * Function Sheik.SheikTitleCardFrontendUtility.GetWalletSystem
	 */
	struct ASheikTitleCardFrontendUtility_GetWalletSystem_Params
	{
	public:
		class USheikWalletSystem*                                  ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikTitleCardFrontendUtility.GetTitleCardRewardsByType
	 */
	struct ASheikTitleCardFrontendUtility_GetTitleCardRewardsByType_Params
	{
	public:
		ESheikTitleCardDataType                                    RewardType;                                              // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_T5XP[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<struct FIGTitleCardBase>                            OutRewards;                                              // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0018(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikTitleCardFrontendUtility.GetStats
	 */
	struct ASheikTitleCardFrontendUtility_GetStats_Params
	{
	public:
		TArray<struct FIGTitleCardStat>                            OutStats;                                                // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikTitleCardFrontendUtility.GetStatById
	 */
	struct ASheikTitleCardFrontendUtility_GetStatById_Params
	{
	public:
		class FName                                                ID;                                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FIGTitleCardStat                                    OutStat;                                                 // 0x0008(0x0138)  (Parm, OutParm, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0140(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikTitleCardFrontendUtility.GetPlayerTitles
	 */
	struct ASheikTitleCardFrontendUtility_GetPlayerTitles_Params
	{
	public:
		TArray<struct FIGTitleCardPlayerTitle>                     OutTitles;                                               // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikTitleCardFrontendUtility.GetPlayerTitleById
	 */
	struct ASheikTitleCardFrontendUtility_GetPlayerTitleById_Params
	{
	public:
		class FName                                                ID;                                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FIGTitleCardPlayerTitle                             OutPlayerTitle;                                          // 0x0008(0x0100)  (Parm, OutParm, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0108(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikTitleCardFrontendUtility.GetPlayerPoses
	 */
	struct ASheikTitleCardFrontendUtility_GetPlayerPoses_Params
	{
	public:
		TArray<struct FIGTitleCardPlayerPose>                      OutPlayerPoses;                                          // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikTitleCardFrontendUtility.GetPlayerPoseById
	 */
	struct ASheikTitleCardFrontendUtility_GetPlayerPoseById_Params
	{
	public:
		class FName                                                ID;                                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FIGTitleCardPlayerPose                              OutPlayerPoses;                                          // 0x0008(0x0150)  (Parm, OutParm, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0158(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikTitleCardFrontendUtility.GetMedals
	 */
	struct ASheikTitleCardFrontendUtility_GetMedals_Params
	{
	public:
		TArray<struct FIGTitleCardMedal>                           OutMedals;                                               // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikTitleCardFrontendUtility.GetMedalById
	 */
	struct ASheikTitleCardFrontendUtility_GetMedalById_Params
	{
	public:
		class FName                                                ID;                                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FIGTitleCardMedal                                   OutMedal;                                                // 0x0008(0x0120)  (Parm, OutParm, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0128(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikTitleCardFrontendUtility.GetDesiredLoadout
	 */
	struct ASheikTitleCardFrontendUtility_GetDesiredLoadout_Params
	{
	public:
		struct FTitleCardLoadout                                   ReturnValue;                                             // 0x0000(0x04B0)  (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikTitleCardFrontendUtility.GetCurrentlyEquippedStats
	 */
	struct ASheikTitleCardFrontendUtility_GetCurrentlyEquippedStats_Params
	{
	public:
		TMap<ETitleCardStackOrder, struct FIGTitleCardStat>        OutStats;                                                // 0x0000(0x0050)  (Parm, OutParm, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0050(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikTitleCardFrontendUtility.GetCurrentlyEquippedPlayerTitle
	 */
	struct ASheikTitleCardFrontendUtility_GetCurrentlyEquippedPlayerTitle_Params
	{
	public:
		struct FIGTitleCardPlayerTitle                             OutPlayerTitle;                                          // 0x0000(0x0100)  (Parm, OutParm, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0100(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikTitleCardFrontendUtility.GetCurrentlyEquippedPlayerPose
	 */
	struct ASheikTitleCardFrontendUtility_GetCurrentlyEquippedPlayerPose_Params
	{
	public:
		struct FIGTitleCardPlayerPose                              OutPlayerPose;                                           // 0x0000(0x0150)  (Parm, OutParm, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0150(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikTitleCardFrontendUtility.GetCurrentlyEquippedMedals
	 */
	struct ASheikTitleCardFrontendUtility_GetCurrentlyEquippedMedals_Params
	{
	public:
		TMap<ETitleCardStackOrder, struct FIGTitleCardMedal>       OutPlayerMedals;                                         // 0x0000(0x0050)  (Parm, OutParm, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0050(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikTitleCardFrontendUtility.GetCurrentlyEquippedLoadout
	 */
	struct ASheikTitleCardFrontendUtility_GetCurrentlyEquippedLoadout_Params
	{
	public:
		struct FTitleCardLoadout                                   ReturnValue;                                             // 0x0000(0x04B0)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikTitleCardFrontendUtility.GetCurrentlyEquippedBorder
	 */
	struct ASheikTitleCardFrontendUtility_GetCurrentlyEquippedBorder_Params
	{
	public:
		struct FIGTitleCardBorder                                  OutBorder;                                               // 0x0000(0x0120)  (Parm, OutParm, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0120(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikTitleCardFrontendUtility.GetCurrentlyEquippedBackground
	 */
	struct ASheikTitleCardFrontendUtility_GetCurrentlyEquippedBackground_Params
	{
	public:
		struct FIGTitleCardBackground                              OutBackground;                                           // 0x0000(0x0120)  (Parm, OutParm, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0120(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikTitleCardFrontendUtility.GetCurrentlyEquipped
	 */
	struct ASheikTitleCardFrontendUtility_GetCurrentlyEquipped_Params
	{
	public:
		struct FTitleCardLoadoutIds                                ReturnValue;                                             // 0x0000(0x0048)  (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikTitleCardFrontendUtility.GetBorders
	 */
	struct ASheikTitleCardFrontendUtility_GetBorders_Params
	{
	public:
		TArray<struct FIGTitleCardBorder>                          OutBorders;                                              // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikTitleCardFrontendUtility.GetBorderById
	 */
	struct ASheikTitleCardFrontendUtility_GetBorderById_Params
	{
	public:
		class FName                                                ID;                                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FIGTitleCardBorder                                  OutBorder;                                               // 0x0008(0x0120)  (Parm, OutParm, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0128(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikTitleCardFrontendUtility.GetBackgrounds
	 */
	struct ASheikTitleCardFrontendUtility_GetBackgrounds_Params
	{
	public:
		TArray<struct FIGTitleCardBackground>                      OutBackgrounds;                                          // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikTitleCardFrontendUtility.GetBackgroundById
	 */
	struct ASheikTitleCardFrontendUtility_GetBackgroundById_Params
	{
	public:
		class FName                                                ID;                                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FIGTitleCardBackground                              OutBackground;                                           // 0x0008(0x0120)  (Parm, OutParm, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0128(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikTitleCardFrontendUtility.EquipPreviewedReward
	 */
	struct ASheikTitleCardFrontendUtility_EquipPreviewedReward_Params
	{	};

	/**
	 * DelegateFunction Sheik.SheikTitleCardFrontendUtility.DebugOnlyRefreshTitleCardContent__DelegateSignature
	 */
	struct ASheikTitleCardFrontendUtility_DebugOnlyRefreshTitleCardContent__DelegateSignature_Params
	{	};

	/**
	 * Function Sheik.SheikTitleCardFrontendUtility.DebugOnly_UpdateCurrentlyEquippedWithRandom
	 */
	struct ASheikTitleCardFrontendUtility_DebugOnly_UpdateCurrentlyEquippedWithRandom_Params
	{	};

	/**
	 * Function Sheik.SheikTitleCardFrontendUtility.DebugOnly_UpdateCurrentlyEquippedWithDefaults
	 */
	struct ASheikTitleCardFrontendUtility_DebugOnly_UpdateCurrentlyEquippedWithDefaults_Params
	{	};

	/**
	 * Function Sheik.SheikTitleCardFrontendUtility.ClearPreview
	 */
	struct ASheikTitleCardFrontendUtility_ClearPreview_Params
	{	};

	/**
	 * Function Sheik.SheikTitleCardFrontendUtility.ApplyCharacterPreviewLoadout
	 */
	struct ASheikTitleCardFrontendUtility_ApplyCharacterPreviewLoadout_Params
	{	};

	/**
	 * Function Sheik.SheikUIActor.ToggleInputControl
	 */
	struct ASheikUIActor_ToggleInputControl_Params
	{
	public:
		bool                                                       bAllowInput;                                             // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikUIActor.StopMontage
	 */
	struct ASheikUIActor_StopMontage_Params
	{
	public:
		float                                                      BlendOutTime;                                            // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikUIActor.SetRotationAppliesToCharacter
	 */
	struct ASheikUIActor_SetRotationAppliesToCharacter_Params
	{
	public:
		bool                                                       RotationAppliesToCharacter;                              // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikUIActor.SetInputThresholdByBody
	 */
	struct ASheikUIActor_SetInputThresholdByBody_Params
	{
	public:
		struct FSheikAccessoryInfo                                 BodyInfo;                                                // 0x0000(0x05E0)  (Parm, NativeAccessSpecifierPublic)
		float                                                      CameraHeight;                                            // 0x05E0(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikUIActor.SetFixedCamera
	 */
	struct ASheikUIActor_SetFixedCamera_Params
	{
	public:
		struct FVector                                             CamLocation;                                             // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_SWS2[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FQuat                                               CamRotation;                                             // 0x0010(0x0010)  (Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikUIActor.SetCameraToRegion
	 */
	struct ASheikUIActor_SetCameraToRegion_Params
	{
	public:
		struct FSheikBodyRegionInfo                                FocusRegionInfo;                                         // 0x0000(0x0020)  (Parm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikUIActor.SetAllowZoomInput
	 */
	struct ASheikUIActor_SetAllowZoomInput_Params
	{
	public:
		bool                                                       bAllowZoomInput;                                         // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikUIActor.SetAllowRotationInput
	 */
	struct ASheikUIActor_SetAllowRotationInput_Params
	{
	public:
		bool                                                       bAllowRotationInput;                                     // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikUIActor.SetAllowFocusWithoutInput
	 */
	struct ASheikUIActor_SetAllowFocusWithoutInput_Params
	{
	public:
		bool                                                       bAllowFocus;                                             // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikUIActor.PlayOrStopMontage
	 */
	struct ASheikUIActor_PlayOrStopMontage_Params
	{
	public:
		class UAnimMontage*                                        MontageToPlay;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      BlendOutTime;                                            // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikUIActor.OnZoomOutReleased
	 */
	struct ASheikUIActor_OnZoomOutReleased_Params
	{	};

	/**
	 * Function Sheik.SheikUIActor.OnZoomOutPressed
	 */
	struct ASheikUIActor_OnZoomOutPressed_Params
	{	};

	/**
	 * Function Sheik.SheikUIActor.OnZoomInReleased
	 */
	struct ASheikUIActor_OnZoomInReleased_Params
	{	};

	/**
	 * Function Sheik.SheikUIActor.OnZoomInPressed
	 */
	struct ASheikUIActor_OnZoomInPressed_Params
	{	};

	/**
	 * DelegateFunction Sheik.SheikUIActor.OnSkinAssetLoadComplete__DelegateSignature
	 */
	struct ASheikUIActor_OnSkinAssetLoadComplete__DelegateSignature_Params
	{	};

	/**
	 * DelegateFunction Sheik.SheikUIActor.OnEyeColorAssetLoadComplete__DelegateSignature
	 */
	struct ASheikUIActor_OnEyeColorAssetLoadComplete__DelegateSignature_Params
	{	};

	/**
	 * DelegateFunction Sheik.SheikUIActor.OnEyebrowAssetLoadComplete__DelegateSignature
	 */
	struct ASheikUIActor_OnEyebrowAssetLoadComplete__DelegateSignature_Params
	{	};

	/**
	 * DelegateFunction Sheik.SheikUIActor.OnBodyAssetsLoadComplete__DelegateSignature
	 */
	struct ASheikUIActor_OnBodyAssetsLoadComplete__DelegateSignature_Params
	{	};

	/**
	 * Function Sheik.SheikUIActor.HideSkinByZone
	 */
	struct ASheikUIActor_HideSkinByZone_Params
	{
	public:
		TArray<EIGSkinZones>                                       SkinZoneList;                                            // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikUIActor.ForceSetCameraToDefaultPosition
	 */
	struct ASheikUIActor_ForceSetCameraToDefaultPosition_Params
	{
	public:
		float                                                      CameraHeight;                                            // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      CameraPan;                                               // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikUIActor.FocusCameraToRegion
	 */
	struct ASheikUIActor_FocusCameraToRegion_Params
	{
	public:
		struct FSheikBodyRegionInfo                                FocusRegionInfo;                                         // 0x0000(0x0020)  (Parm, NativeAccessSpecifierPublic)
		float                                                      InLerpSpeed;                                             // 0x0020(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikUIActorCustomizer.WillAccessoryExceedMaxBudget
	 */
	struct USheikUIActorCustomizer_WillAccessoryExceedMaxBudget_Params
	{
	public:
		struct FSheikAccessoryInfo                                 Accessory;                                               // 0x0000(0x05E0)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x05E0(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikUIActorCustomizer.UpdateModel
	 */
	struct USheikUIActorCustomizer_UpdateModel_Params
	{	};

	/**
	 * Function Sheik.SheikUIActorCustomizer.UnSetAccessory
	 */
	struct USheikUIActorCustomizer_UnSetAccessory_Params
	{
	public:
		struct FSheikAccessoryInfo                                 Accessory;                                               // 0x0000(0x05E0)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		bool                                                       bUpdateModel;                                            // 0x05E0(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikUIActorCustomizer.StopAccessoryMontage
	 */
	struct USheikUIActorCustomizer_StopAccessoryMontage_Params
	{
	public:
		float                                                      BlendOutTime;                                            // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikUIActorCustomizer.SetModelVisible
	 */
	struct USheikUIActorCustomizer_SetModelVisible_Params
	{
	public:
		bool                                                       bVisible;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       AllowInput;                                              // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikUIActorCustomizer.SetCamera
	 */
	struct USheikUIActorCustomizer_SetCamera_Params
	{
	public:
		float                                                      ZoomDistance;                                            // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      CameraHeight;                                            // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      CameraPan;                                               // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      FOV;                                                     // 0x000C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      Pitch;                                                   // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikUIActorCustomizer.SetBaseLoadout
	 */
	struct USheikUIActorCustomizer_SetBaseLoadout_Params
	{
	public:
		struct FCharacterLoadout                                   InBaseLoadout;                                           // 0x0000(0x0070)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikUIActorCustomizer.SetAccessory
	 */
	struct USheikUIActorCustomizer_SetAccessory_Params
	{
	public:
		struct FSheikAccessoryInfo                                 Accessory;                                               // 0x0000(0x05E0)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		bool                                                       bUpdateModel;                                            // 0x05E0(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikUIActorCustomizer.SaveDesiredLoadoutAsPreset
	 */
	struct USheikUIActorCustomizer_SaveDesiredLoadoutAsPreset_Params
	{
	public:
		int32_t                                                    AddedIndex;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    PresetSlotIndex;                                         // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikUIActorCustomizer.SaveBaseLoadout
	 */
	struct USheikUIActorCustomizer_SaveBaseLoadout_Params
	{	};

	/**
	 * Function Sheik.SheikUIActorCustomizer.ResetLoadouts
	 */
	struct USheikUIActorCustomizer_ResetLoadouts_Params
	{	};

	/**
	 * Function Sheik.SheikUIActorCustomizer.ResetCamera
	 */
	struct USheikUIActorCustomizer_ResetCamera_Params
	{
	public:
		float                                                      Pitch;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      Height;                                                  // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      FOV;                                                     // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      Pan;                                                     // 0x000C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikUIActorCustomizer.PlayOrStopAccessoryMontage
	 */
	struct USheikUIActorCustomizer_PlayOrStopAccessoryMontage_Params
	{
	public:
		struct FSheikAccessoryInfo                                 Accessory;                                               // 0x0000(0x05E0)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		float                                                      BlendOutTime;                                            // 0x05E0(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction Sheik.SheikUIActorCustomizer.OnUpdateComplete__DelegateSignature
	 */
	struct USheikUIActorCustomizer_OnUpdateComplete__DelegateSignature_Params
	{	};

	/**
	 * Function Sheik.SheikUIActorCustomizer.OnTattooLoadedComplete
	 */
	struct USheikUIActorCustomizer_OnTattooLoadedComplete_Params
	{	};

	/**
	 * Function Sheik.SheikUIActorCustomizer.OnSkinColorLoadedComplete
	 */
	struct USheikUIActorCustomizer_OnSkinColorLoadedComplete_Params
	{	};

	/**
	 * Function Sheik.SheikUIActorCustomizer.OnMakeupLoadedComplete
	 */
	struct USheikUIActorCustomizer_OnMakeupLoadedComplete_Params
	{	};

	/**
	 * Function Sheik.SheikUIActorCustomizer.OnHeadShapeLoadedComplete
	 */
	struct USheikUIActorCustomizer_OnHeadShapeLoadedComplete_Params
	{	};

	/**
	 * Function Sheik.SheikUIActorCustomizer.OnEyeColorLoadedComplete
	 */
	struct USheikUIActorCustomizer_OnEyeColorLoadedComplete_Params
	{	};

	/**
	 * Function Sheik.SheikUIActorCustomizer.OnEyebrowLoadedComplete
	 */
	struct USheikUIActorCustomizer_OnEyebrowLoadedComplete_Params
	{	};

	/**
	 * Function Sheik.SheikUIActorCustomizer.OnBodyShapeLoadedComplete
	 */
	struct USheikUIActorCustomizer_OnBodyShapeLoadedComplete_Params
	{	};

	/**
	 * Function Sheik.SheikUIActorCustomizer.OnApparelLoadedComplete
	 */
	struct USheikUIActorCustomizer_OnApparelLoadedComplete_Params
	{	};

	/**
	 * Function Sheik.SheikUIActorCustomizer.MakeDesiredLoadoutBase
	 */
	struct USheikUIActorCustomizer_MakeDesiredLoadoutBase_Params
	{	};

	/**
	 * Function Sheik.SheikUIActorCustomizer.LoadoutWithoutApparel
	 */
	struct USheikUIActorCustomizer_LoadoutWithoutApparel_Params
	{
	public:
		struct FCharacterLoadout                                   Loadout;                                                 // 0x0000(0x0070)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		struct FCharacterLoadout                                   OutLoadout;                                              // 0x0070(0x0070)  (Parm, OutParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikUIActorCustomizer.IsUpdateInProgress
	 */
	struct USheikUIActorCustomizer_IsUpdateInProgress_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikUIActorCustomizer.IsLoadoutEqualToBase
	 */
	struct USheikUIActorCustomizer_IsLoadoutEqualToBase_Params
	{
	public:
		struct FCharacterLoadout                                   InLoadout;                                               // 0x0000(0x0070)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0070(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikUIActorCustomizer.IsEquippedOnLoadout
	 */
	struct USheikUIActorCustomizer_IsEquippedOnLoadout_Params
	{
	public:
		struct FCharacterLoadout                                   Loadout;                                                 // 0x0000(0x0070)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		struct FSheikAccessoryInfo                                 Accessory;                                               // 0x0070(0x05E0)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0650(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikUIActorCustomizer.IsEquippedOnDesired
	 */
	struct USheikUIActorCustomizer_IsEquippedOnDesired_Params
	{
	public:
		struct FSheikAccessoryInfo                                 Accessory;                                               // 0x0000(0x05E0)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x05E0(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikUIActorCustomizer.IsEquippedOnBase
	 */
	struct USheikUIActorCustomizer_IsEquippedOnBase_Params
	{
	public:
		struct FSheikAccessoryInfo                                 Accessory;                                               // 0x0000(0x05E0)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x05E0(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikUIActorCustomizer.IsDesiredOverBudget
	 */
	struct USheikUIActorCustomizer_IsDesiredOverBudget_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikUIActorCustomizer.GetPartySlot
	 */
	struct USheikUIActorCustomizer_GetPartySlot_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikUIActorCustomizer.GetMaxPerfCost
	 */
	struct USheikUIActorCustomizer_GetMaxPerfCost_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikUIActorCustomizer.GetLoadoutClothingAccessories
	 */
	struct USheikUIActorCustomizer_GetLoadoutClothingAccessories_Params
	{
	public:
		struct FCharacterLoadout                                   Loadout;                                                 // 0x0000(0x0070)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		TArray<struct FSheikAccessoryInfo>                         ReturnValue;                                             // 0x0070(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikUIActorCustomizer.GetDesiredLoadoutPerfCost
	 */
	struct USheikUIActorCustomizer_GetDesiredLoadoutPerfCost_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikUIActorCustomizer.GetDesiredLoadout
	 */
	struct USheikUIActorCustomizer_GetDesiredLoadout_Params
	{
	public:
		struct FCharacterLoadout                                   ReturnValue;                                             // 0x0000(0x0070)  (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikUIActorCustomizer.GetConflictingDesiredItemsForAccessory
	 */
	struct USheikUIActorCustomizer_GetConflictingDesiredItemsForAccessory_Params
	{
	public:
		struct FSheikAccessoryInfo                                 ApparelAccessory;                                        // 0x0000(0x05E0)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		TArray<struct FSheikAccessoryInfo>                         Conflicts;                                               // 0x05E0(0x0010)  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikUIActorCustomizer.GetBaseLoadoutPerfCost
	 */
	struct USheikUIActorCustomizer_GetBaseLoadoutPerfCost_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikUIActorCustomizer.GetBaseLoadout
	 */
	struct USheikUIActorCustomizer_GetBaseLoadout_Params
	{
	public:
		struct FCharacterLoadout                                   ReturnValue;                                             // 0x0000(0x0070)  (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikUIActorCustomizer.GetBaseAccessoryByWalletId
	 */
	struct USheikUIActorCustomizer_GetBaseAccessoryByWalletId_Params
	{
	public:
		class FName                                                WalletId;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FSheikAccessoryInfo                                 Accessory;                                               // 0x0008(0x05E0)  (Parm, OutParm, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x05E8(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikUIActorCustomizer.GetActor
	 */
	struct USheikUIActorCustomizer_GetActor_Params
	{
	public:
		class ASheikUIActor*                                       ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikUIActorCustomizer.BulkSetAccessory
	 */
	struct USheikUIActorCustomizer_BulkSetAccessory_Params
	{
	public:
		TArray<struct FSheikAccessoryInfo>                         InAccessories;                                           // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
		bool                                                       bUpdateModel;                                            // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikUIActorCustomizer.ApplyEmoteChanges
	 */
	struct USheikUIActorCustomizer_ApplyEmoteChanges_Params
	{
	public:
		TArray<class FName>                                        InEmoteAccessoryIds;                                     // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikUITitleStorageInterface.RequestUIData
	 */
	struct USheikUITitleStorageInterface_RequestUIData_Params
	{
	public:
		struct FSheikError                                         Error;                                                   // 0x0000(0x000C)  (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x000C(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction Sheik.SheikUITitleStorageInterface.OnGetRequiredLegalDocs__DelegateSignature
	 */
	struct USheikUITitleStorageInterface_OnGetRequiredLegalDocs__DelegateSignature_Params
	{
	public:
		bool                                                       bWasSuccessful;                                          // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_DU3R[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FSheikError                                         Error;                                                   // 0x0004(0x000C)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		TArray<class FString>                                      DocumentPaths;                                           // 0x0010(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction Sheik.SheikUITitleStorageInterface.OnDataRetrieved__DelegateSignature
	 */
	struct USheikUITitleStorageInterface_OnDataRetrieved__DelegateSignature_Params
	{
	public:
		bool                                                       bSuccessful;                                             // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_8KCG[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FSheikError                                         Error;                                                   // 0x0004(0x000C)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction Sheik.SheikUITitleStorageInterface.OnAcceptLegalDocument__DelegateSignature
	 */
	struct USheikUITitleStorageInterface_OnAcceptLegalDocument__DelegateSignature_Params
	{
	public:
		bool                                                       bWasSuccessful;                                          // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_T82H[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FSheikError                                         Error;                                                   // 0x0004(0x000C)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikUITitleStorageInterface.LoadImageForRMTEntitlement
	 */
	struct USheikUITitleStorageInterface_LoadImageForRMTEntitlement_Params
	{
	public:
		class FString                                              RMTOfferId;                                              // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UTexture2D*                                          Texture;                                                 // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       LoadSucceeded;                                           // 0x0018(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikUITitleStorageInterface.IsVCOffer
	 */
	struct USheikUITitleStorageInterface_IsVCOffer_Params
	{
	public:
		class FString                                              RMTOfferId;                                              // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikUITitleStorageInterface.IsFeatureEntitlementEnabled
	 */
	struct USheikUITitleStorageInterface_IsFeatureEntitlementEnabled_Params
	{
	public:
		class FString                                              FeatureEntitlementName;                                  // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikUITitleStorageInterface.IsDevGameModeModule
	 */
	struct USheikUITitleStorageInterface_IsDevGameModeModule_Params
	{
	public:
		class FText                                                GameModeModuleName;                                      // 0x0000(0x0018)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0018(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikUITitleStorageInterface.IsDataRetrievalComplete
	 */
	struct USheikUITitleStorageInterface_IsDataRetrievalComplete_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikUITitleStorageInterface.GetVirtualCurrencyDisplayTitle
	 */
	struct USheikUITitleStorageInterface_GetVirtualCurrencyDisplayTitle_Params
	{
	public:
		class FString                                              RMTOfferId;                                              // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FText                                                ReturnValue;                                             // 0x0010(0x0018)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikUITitleStorageInterface.GetRMTOfferPromoText
	 */
	struct USheikUITitleStorageInterface_GetRMTOfferPromoText_Params
	{
	public:
		class FString                                              RMTOfferId;                                              // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FText                                                ReturnValue;                                             // 0x0010(0x0018)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikUITitleStorageInterface.GetRMTEntitlementImageData
	 */
	struct USheikUITitleStorageInterface_GetRMTEntitlementImageData_Params
	{
	public:
		TArray<struct FSheikRMTEntitlementImageRow>                ReturnValue;                                             // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikUITitleStorageInterface.GetRMTCategoryDefinitionData
	 */
	struct USheikUITitleStorageInterface_GetRMTCategoryDefinitionData_Params
	{
	public:
		TArray<struct FSheikRMTCategoryDefinition>                 ReturnValue;                                             // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikUITitleStorageInterface.GetRequiredLegalDocs
	 */
	struct USheikUITitleStorageInterface_GetRequiredLegalDocs_Params
	{
	public:
		class FString                                              CountryCode;                                             // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              LanguageCode;                                            // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      Delegate;                                                // 0x0020(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikUITitleStorageInterface.GetNoticesDataList
	 */
	struct USheikUITitleStorageInterface_GetNoticesDataList_Params
	{
	public:
		TArray<struct FNoticesUIData>                              ReturnValue;                                             // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikUITitleStorageInterface.GetMaxPartySize
	 */
	struct USheikUITitleStorageInterface_GetMaxPartySize_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikUITitleStorageInterface.GetLegalDocument
	 */
	struct USheikUITitleStorageInterface_GetLegalDocument_Params
	{
	public:
		class FString                                              Filename;                                                // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              Document;                                                // 0x0010(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FSheikError                                         Error;                                                   // 0x0020(0x000C)  (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x002C(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikUITitleStorageInterface.GetGlobalNoticeControls
	 */
	struct USheikUITitleStorageInterface_GetGlobalNoticeControls_Params
	{
	public:
		TArray<struct FGlobalNoticeControl>                        ReturnValue;                                             // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikUITitleStorageInterface.GetGameModeModuleData
	 */
	struct USheikUITitleStorageInterface_GetGameModeModuleData_Params
	{
	public:
		TArray<struct FSheikGameModeModuleData>                    ReturnValue;                                             // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikUITitleStorageInterface.GetFeatureEntitlementData
	 */
	struct USheikUITitleStorageInterface_GetFeatureEntitlementData_Params
	{
	public:
		TArray<struct FSheikFeatureEntitlementRow>                 ReturnValue;                                             // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikUITitleStorageInterface.AcceptLegalDocument
	 */
	struct USheikUITitleStorageInterface_AcceptLegalDocument_Params
	{
	public:
		class FString                                              Filename;                                                // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      Delegate;                                                // 0x0010(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikVFXDepthVolume.GetTopOfVolume
	 */
	struct ASheikVFXDepthVolume_GetTopOfVolume_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikViewportClient.Internal_OnToggleFullscreen
	 */
	struct USheikViewportClient_Internal_OnToggleFullscreen_Params
	{
	public:
		bool                                                       bIsFullscreen;                                           // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikVirtualCurrencyScreen.SetCanNavigateBack
	 */
	struct USheikVirtualCurrencyScreen_SetCanNavigateBack_Params
	{
	public:
		bool                                                       bCanNavigateBack;                                        // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikWalletSystem.IsWalletAssetUnlocked
	 */
	struct USheikWalletSystem_IsWalletAssetUnlocked_Params
	{
	public:
		class FName                                                InWalletId;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikWalletSystem.GetWalletAssetById
	 */
	struct USheikWalletSystem_GetWalletAssetById_Params
	{
	public:
		class FName                                                WalletId;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FIGWalletAssetInfo                                  OutWalletAsset;                                          // 0x0008(0x00F0)  (Parm, OutParm, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x00F8(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikWalletSystem.GetUnlockedWalletAssetsOfType
	 */
	struct USheikWalletSystem_GetUnlockedWalletAssetsOfType_Params
	{
	public:
		TArray<struct FIGWalletAssetInfo>                          OutOwnedWalletAssets;                                    // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
		TArray<EIGWalletAssetType>                                 IncludesAssetType;                                       // 0x0010(0x0010)  (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0020(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikWalletSystem.GetUnlockedWalletAssets
	 */
	struct USheikWalletSystem_GetUnlockedWalletAssets_Params
	{
	public:
		TArray<struct FIGWalletAssetInfo>                          OutOwnedWalletAssets;                                    // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikWalletSystem.GetDefaultEntitlementAssets
	 */
	struct USheikWalletSystem_GetDefaultEntitlementAssets_Params
	{
	public:
		TArray<struct FIGWalletAssetInfo>                          OutWalletAssets;                                         // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikWalletSystem.BuildMapping
	 */
	struct USheikWalletSystem_BuildMapping_Params
	{	};

	/**
	 * Function Sheik.SheikXpSystem.GetMatchXpContributions
	 */
	struct USheikXpSystem_GetMatchXpContributions_Params
	{
	public:
		TMap<class FName, float>                                   OutXpContributions;                                      // 0x0000(0x0050)  (Parm, OutParm, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0050(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikXpSystem.GetMatchXp
	 */
	struct USheikXpSystem_GetMatchXp_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikXpSystem.GetLifetimeXp
	 */
	struct USheikXpSystem_GetLifetimeXp_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Sheik.SheikXpSystem.CalculateMatchXp
	 */
	struct USheikXpSystem_CalculateMatchXp_Params
	{
	public:
		int32_t                                                    Placement;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
