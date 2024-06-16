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
	 * Class Sheik.BattlePassProgressionManager
	 * Size -> 0x00E0 (FullSize[0x0108] - InheritedSize[0x0028])
	 */
	class UBattlePassProgressionManager : public UObject
	{
	public:
		unsigned char                                              UnknownData_6FL1[0x38];                                  // 0x0028(0x0038) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UIGBattlePassSeasonsMap*                             BattlePassSeasonsMap;                                    // 0x0060(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		TArray<struct FBattlePassTier>                             CurrentBattlePassTiers;                                  // 0x0068(0x0010) ZeroConstructor, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_YKA6[0x90];                                  // 0x0078(0x0090) MISSED OFFSET (PADDING)

	public:
		void PurchaseBattlePassTiersComplete(bool bSuccessful, const struct FSheikError& Error);
		void PurchaseBattlePassComplete(bool bSuccessful, const struct FSheikError& Error);
		void OnEntitlementsRefreshed();
		static UClass* StaticClass();
	};

	/**
	 * Class Sheik.BRLaunchLocation
	 * Size -> 0x0008 (FullSize[0x0228] - InheritedSize[0x0220])
	 */
	class ABRLaunchLocation : public AActor
	{
	public:
		class FName                                                LocationName;                                            // 0x0220(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Sheik.CharacterSkinNameList
	 * Size -> 0x0018 (FullSize[0x0048] - InheritedSize[0x0030])
	 */
	class UCharacterSkinNameList : public UDataAsset
	{
	public:
		class UMaterial*                                           SkinHidingMat;                                           // 0x0030(0x0008) Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                EyeSlotName;                                             // 0x0038(0x0008) Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                EyebrowSlotName;                                         // 0x0040(0x0008) Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Sheik.CloutProgressionManager
	 * Size -> 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
	 */
	class UCloutProgressionManager : public UObject
	{
	public:
		unsigned char                                              UnknownData_CF5U[0x10];                                  // 0x0028(0x0010) MISSED OFFSET (PADDING)

	public:
		void RefreshCloutLevel();
		bool GetNextCloutLevelForDisplayOnly(struct FProgressionLevel* OutNextCloutLevel);
		int32_t GetMaxCloutLevel();
		int32_t GetCurrentNumCloutFans();
		bool GetCloutLevel(struct FProgressionLevel* OutProgressionLevel);
		bool CheckWillCloutLevelUpGivenCurrentFans();
		static UClass* StaticClass();
	};

	/**
	 * Class Sheik.FrontendHUD
	 * Size -> 0x0048 (FullSize[0x0530] - InheritedSize[0x04E8])
	 */
	class AFrontendHUD : public AIGUI_HUDBase
	{
	public:
		class FString                                              DefaultServerIP;                                         // 0x04E8(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UClass*                                              SheikAccessorySystemClass;                               // 0x04F8(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class USheikAccessorySystem*                               SheikAccessorySystem;                                    // 0x0500(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UClass*                                              SheikTitleCardFrontendUtilityClass;                      // 0x0508(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class ASheikTitleCardFrontendUtility*                      SheikTitleCardFrontendUtility;                           // 0x0510(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UClass*                                              SheikStoreSystemClass;                                   // 0x0518(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class USheikStoreSystem*                                   SheikStoreSystem;                                        // 0x0520(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_JGK7[0x8];                                   // 0x0528(0x0008) MISSED OFFSET (PADDING)

	public:
		class ASheikTitleCardFrontendUtility* GetSheikTitleCardFrontendUtility();
		class USheikStoreSystem* GetSheikStoreSystem();
		class USheikAccessorySystem* GetSheikAccessorySystem();
		static UClass* StaticClass();
	};

	/**
	 * Class Sheik.IG_EditableTextBox
	 * Size -> 0x0000 (FullSize[0x0A38] - InheritedSize[0x0A38])
	 */
	class UIG_EditableTextBox : public UEditableTextBox
	{
	public:
		void OpenVirtualKeyboard(int32_t UserIndex);
		static UClass* StaticClass();
	};

	/**
	 * Class Sheik.IGCollisionTransitionState
	 * Size -> 0x00B0 (FullSize[0x0148] - InheritedSize[0x0098])
	 */
	class UIGCollisionTransitionState : public UIGNotifyStateBase
	{
	public:
		bool                                                       bUseLauncherDistance;                                    // 0x0098(0x0001) Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_EJRY[0x7];                                   // 0x0099(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UIGHitData*                                          FrontReaction;                                           // 0x00A0(0x0008) Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UIGHitData*                                          BackReaction;                                            // 0x00A8(0x0008) Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UIGHitData*                                          RightReaction;                                           // 0x00B0(0x0008) Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UIGHitData*                                          LeftReaction;                                            // 0x00B8(0x0008) Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UIGHitData*                                          TopReaction;                                             // 0x00C0(0x0008) Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UIGHitData*                                          BottomReaction;                                          // 0x00C8(0x0008) Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UIGHitData*                                          FrontBouncePadReaction;                                  // 0x00D0(0x0008) Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UIGHitData*                                          BackBouncePadReaction;                                   // 0x00D8(0x0008) Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UIGHitData*                                          RightBouncePadReaction;                                  // 0x00E0(0x0008) Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UIGHitData*                                          LeftBouncePadReaction;                                   // 0x00E8(0x0008) Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		TMap<class UClass*, class UIGHitData*>                     ActorReactions;                                          // 0x00F0(0x0050) Edit, BlueprintReadOnly, Protected, NativeAccessSpecifierProtected
		bool                                                       bApplyDamageStatBoostToSelf;                             // 0x0140(0x0001) Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bKeepTierDuringTransition;                               // 0x0141(0x0001) Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_BUGN[0x6];                                   // 0x0142(0x0006) MISSED OFFSET (PADDING)

	public:
		void TriggerTransitionForTwoWallImpact(class AIGCharacter* Character, const struct FHitResult& Hit, const struct FVector& OldHitNormal, const struct FVector& MoveDelta);
		void TriggerTransitionForImpact(class AIGCharacter* Character, const struct FHitResult& Hit, float TimeSlice, const struct FVector& MoveDelta);
		static UClass* StaticClass();
	};

	/**
	 * Class Sheik.IGSmokeConnectTask
	 * Size -> 0x0030 (FullSize[0x0070] - InheritedSize[0x0040])
	 */
	class UIGSmokeConnectTask : public UIGSmokeTask
	{
	public:
		float                                                      TimeUntilDisconnect;                                     // 0x0040(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      WaitForPlayers;                                          // 0x0044(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              ScriptingTag;                                            // 0x0048(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_7NBS[0x18];                                  // 0x0058(0x0018) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Sheik.IGSmokeContinuousCaptureTask
	 * Size -> 0x0028 (FullSize[0x0068] - InheritedSize[0x0040])
	 */
	class UIGSmokeContinuousCaptureTask : public UIGSmokeTask
	{
	public:
		float                                                      TimeBetweenCaptures;                                     // 0x0040(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      TimeTotalCapture;                                        // 0x0044(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class AActor*                                              ViewTarget;                                              // 0x0048(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_4JKD[0x18];                                  // 0x0050(0x0018) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Sheik.IGSmokeDelayTask
	 * Size -> 0x0008 (FullSize[0x0048] - InheritedSize[0x0040])
	 */
	class UIGSmokeDelayTask : public UIGSmokeTask
	{
	public:
		float                                                      Delay;                                                   // 0x0040(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_PXYT[0x4];                                   // 0x0044(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Sheik.IGSmokeDestroyBotsTask
	 * Size -> 0x0008 (FullSize[0x0048] - InheritedSize[0x0040])
	 */
	class UIGSmokeDestroyBotsTask : public UIGSmokeTask
	{
	public:
		int32_t                                                    BotsToKill;                                              // 0x0040(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_31NT[0x4];                                   // 0x0044(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Sheik.IGSmokeMobileCamera
	 * Size -> 0x0030 (FullSize[0x0830] - InheritedSize[0x0800])
	 */
	class AIGSmokeMobileCamera : public ACameraActor
	{
	public:
		bool                                                       StayAtEnd;                                               // 0x0800(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       UsingTargetTimeFrame;                                    // 0x0801(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_MXOK[0x2];                                   // 0x0802(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      TargetTimeFrame;                                         // 0x0804(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Speed;                                                   // 0x0808(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TWeakObjectPtr<class AActor>                               LookTarget;                                              // 0x080C(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_GW98[0x4];                                   // 0x0814(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class USplineComponent*                                    SplinePath;                                              // 0x0818(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_CF74[0x10];                                  // 0x0820(0x0010) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Sheik.IGSmokePreparePlayerTask
	 * Size -> 0x0028 (FullSize[0x0068] - InheritedSize[0x0040])
	 */
	class UIGSmokePreparePlayerTask : public UIGSmokeTask
	{
	public:
		bool                                                       bForceTeleportLocation;                                  // 0x0040(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_PD4W[0x7];                                   // 0x0041(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class ATeleportLocation*                                   TeleportLocation;                                        // 0x0048(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bEnableScripted;                                         // 0x0050(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_QGNP[0x3];                                   // 0x0051(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                TargetTag;                                               // 0x0054(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bInfiniteHealth;                                         // 0x005C(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bInfiniteStamina;                                        // 0x005D(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bKillPlayer;                                             // 0x005E(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bSwivelCameraAround;                                     // 0x005F(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      SwivelForce;                                             // 0x0060(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_81WL[0x4];                                   // 0x0064(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Sheik.IGSmokeSpawnBotsTask
	 * Size -> 0x0028 (FullSize[0x0068] - InheritedSize[0x0040])
	 */
	class UIGSmokeSpawnBotsTask : public UIGSmokeTask
	{
	public:
		class FName                                                AISpawnerTag;                                            // 0x0040(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              BotProfile;                                              // 0x0048(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    TotalSpawnTriggers;                                      // 0x0058(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      TimeBetweenTriggers;                                     // 0x005C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_3LLK[0x8];                                   // 0x0060(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Sheik.MeshMergeFunctionLibrary
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UMeshMergeFunctionLibrary : public UBlueprintFunctionLibrary
	{
	public:
		class USkeletalMesh* MergeMeshes(const struct FSkeletalMeshMergeParams& Params);
		static UClass* StaticClass();
	};

	/**
	 * Class Sheik.MoveOptionContainer
	 * Size -> 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
	 */
	class UMoveOptionContainer : public UPrimaryDataAsset
	{
	public:
		TArray<class UIGMoveMontage*>                              MoveList;                                                // 0x0030(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Sheik.SheikAccessorySystem
	 * Size -> 0x03B8 (FullSize[0x03E0] - InheritedSize[0x0028])
	 */
	class USheikAccessorySystem : public UObject
	{
	public:
		class FScriptMulticastDelegate                             OnUpdateAccessoryTextureIcon;                            // 0x0028(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class UClass*                                              AssetDataSourcesClass;                                   // 0x0038(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UIGAssetDataSources*                                 AssetDataSources;                                        // 0x0040(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UTexture2D*                                          PlaceholderTexture;                                      // 0x0048(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		TMap<EIGBodyType, class UDataTable*>                       BodyShapeRegionDataTables;                               // 0x0050(0x0050) Edit, BlueprintVisible, Protected, NativeAccessSpecifierProtected
		int32_t                                                    BudgetLimit;                                             // 0x00A0(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_1UMW[0x4];                                   // 0x00A4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TMap<EIGBodyRegion, struct FSheikWeightRegionTypeProbability> AccessoryRegionTypeWeightedProbabilities;                // 0x00A8(0x0050) Edit, BlueprintVisible, Protected, NativeAccessSpecifierProtected
		float                                                      EquipRegionRandomProbability;                            // 0x00F8(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      EquipTattooRandomProbability;                            // 0x00FC(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      EquipMakeupRandomProbability;                            // 0x0100(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      RandomizeAgainChancePercent;                             // 0x0104(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_36W8[0x290];                                 // 0x0108(0x0290) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class USheikWalletSystem*                                  SheikWalletSystem;                                       // 0x0398(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class USheikGameInstance*                                  SheikGameInstance;                                       // 0x03A0(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_9E8X[0x38];                                  // 0x03A8(0x0038) MISSED OFFSET (PADDING)

	public:
		void VerifyUnlockedOutfits();
		void SetSheikWalletSystem(class USheikWalletSystem* InSheikWalletSystem);
		void ProcessDataTables();
		void LoadTextureAccessoryTable(class UIGDataTable* DataTable, TArray<struct FSoftObjectPath>* OutPendingTextureAssets);
		void HandleOnTextureIconsLoadComplete();
		void HandleOnDefaultUndergarmentsLoadComplete();
		void HandleDevOnlyAccessoryLoadComplete();
		bool GetRegionZoomForBody(EIGBodyType BodyType, EIGBodyRegion DesiredRegion, struct FSheikBodyRegionInfo* OutRegionInfo);
		EAccessoryItemRarity GetRarityForOutfit(const struct FSheikOutfitInfo& InOutfit);
		int32_t GetPerfCostForLoadout(const struct FCharacterLoadout& InLoadout);
		bool GetGeneralDataByType(EAccessoryType Type, TArray<struct FSheikAccessoryInfo>* OutAccessories, bool bFilterUnowned);
		int32_t GetBudgetLimit();
		bool GetBodyShapeIdByType(EIGBodyType BodyType, class FName* OutBodyShapeId);
		bool GetAccessoryByWalletId(const class FName& WalletId, EIGBodyType BodyType, struct FSheikAccessoryInfo* Accessory);
		bool GetAccessory(const class FName& ID, EIGBodyType BodyType, struct FSheikAccessoryInfo* Accessory);
		static UClass* StaticClass();
	};

	/**
	 * Class Sheik.SheikAchievementsManager
	 * Size -> 0x0000 (FullSize[0x00D8] - InheritedSize[0x00D8])
	 */
	class USheikAchievementsManager : public UIGAchievementsManager
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Sheik.SheikActorCollisionComponent
	 * Size -> 0x0000 (FullSize[0x00B0] - InheritedSize[0x00B0])
	 */
	class USheikActorCollisionComponent : public UActorComponent
	{
	public:
		void OnSurfaceHitStart(class AActor* OverlappedActor, class AActor* OtherActor, const struct FVector& NormalImpulse, const struct FHitResult& Hit);
		void OnSurfaceCollisionStart(class AActor* OverlappedActor, class AActor* OtherActor);
		void OnSurfaceCollisionEnd(class AActor* OverlappedActor, class AActor* OtherActor);
		void BP_OnSurfaceHitStart(class AActor* OverlappedActor, class AActor* OtherActor, const struct FVector& NormalImpulse, const struct FHitResult& Hit);
		void BP_OnSurfaceCollisionStart(class AActor* OverlappedActor, class AActor* OtherActor);
		void BP_OnSurfaceCollisionEnd(class AActor* OverlappedActor, class AActor* OtherActor);
		static UClass* StaticClass();
	};

	/**
	 * Class Sheik.SheikAgeGatingManager
	 * Size -> 0x00A0 (FullSize[0x00C8] - InheritedSize[0x0028])
	 */
	class USheikAgeGatingManager : public UObject
	{
	public:
		class FScriptMulticastDelegate                             OnPermissionsUpdated;                                    // 0x0028(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, Protected, NativeAccessSpecifierProtected
		bool                                                       bKickForPermissions;                                     // 0x0038(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_X9EW[0x8F];                                  // 0x0039(0x008F) MISSED OFFSET (PADDING)

	public:
		void QueryKidRequirements(const class FScriptDelegate& Delegate);
		void OnQueryKidRequirements__DelegateSignature(bool bDateOfBirthRequired, bool bPermissionsRequired, bool bSuccessful, const struct FSheikError& Error);
		void OnPermissionsUpdated__DelegateSignature(TArray<class FString> Names, TArray<EKWSPermissionStatus> Statuses);
		void OnCommitParentEmail__DelegateSignature(bool bSuccessful, const struct FSheikError& Error);
		void OnCommitDateOfBirth__DelegateSignature(bool bParentEmailRequired);
		void GetPermissions(TArray<class FString>* Names, TArray<EKWSPermissionStatus>* Statuses);
		class FString GetLastCommittedParentEmail();
		void CommitParentEmail(const class FString& ParentEmail, const class FScriptDelegate& Delegate);
		void CommitDateOfBirth(const struct FDateTime& DateOfBirth, const class FScriptDelegate& Delegate);
		static UClass* StaticClass();
	};

	/**
	 * Class Sheik.SheikAIController
	 * Size -> 0x0028 (FullSize[0x0368] - InheritedSize[0x0340])
	 */
	class ASheikAIController : public AIGAIController
	{
	public:
		class FScriptMulticastDelegate                             OnRoundPlacementChanged;                                 // 0x0340(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_3Z7V[0xC];                                   // 0x0350(0x000C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      ClimbCheckFrequency;                                     // 0x035C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_M8GJ[0x8];                                   // 0x0360(0x0008) MISSED OFFSET (PADDING)

	public:
		void OnSpringboardLaunched();
		void OnRoundPlacementChanged__DelegateSignature(int32_t NewPlace);
		bool HasPlayerPlacementBeenProcessed();
		class ASheikGameModeCommon* GetSheikGameMode();
		int32_t GetRoundPlacement();
		class USheikAIManager* GetAIManager();
		void EnableClimbSurfaceChecks(bool bInShouldCheckForClimbableSurfaces);
		bool BPNavAreaHandleEnteringEdgeNavLinkSegment(int32_t SegmentStartIndex, ESheikNavAreaFlag NavLinkType);
		bool BPNavArea4HandleFollowPathSegment(class UIGCharacterMovementComponent* MoveComp, float DeltaTime);
		bool BPNavArea4HandleEnteringNavLinkSegment(int32_t SegmentStartIndex);
		bool BPNavArea3HandleFollowPathSegment(class UIGCharacterMovementComponent* MoveComp, float DeltaTime);
		bool BPNavArea3HandleEnteringNavLinkSegment(int32_t SegmentStartIndex);
		bool BPNavArea2HandleFollowPathSegment(class UIGCharacterMovementComponent* MoveComp, float DeltaTime);
		bool BPNavArea2HandleEnteringNavLinkSegment(int32_t SegmentStartIndex);
		bool BPNavArea1HandleFollowPathSegment(class UIGCharacterMovementComponent* MoveComp, float DeltaTime);
		bool BPNavArea1HandleEnteringNavLinkSegment(int32_t SegmentStartIndex);
		static UClass* StaticClass();
	};

	/**
	 * Class Sheik.SheikAICharacterController
	 * Size -> 0x01D0 (FullSize[0x0538] - InheritedSize[0x0368])
	 */
	class ASheikAICharacterController : public ASheikAIController
	{
	public:
		class FName                                                BehaviorTreeRunning;                                     // 0x0368(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TMap<EMoveTrack, struct FAIButtonInputEvent>               ButtonInputEvents;                                       // 0x0370(0x0050) NativeAccessSpecifierPublic
		struct FAIDirectionInputEvent                              CurrentDirectionInputEvent;                              // 0x03C0(0x0010) NoDestructor, NativeAccessSpecifierPublic
		class UIGSpecialMoveConsumer*                              SpecialMoveConsumerComponent;                            // 0x03D0(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FSheikAIProfileOptions                              ActiveProfile;                                           // 0x03D8(0x0130) NativeAccessSpecifierPrivate
		bool                                                       bShouldOverrideLootSpawn;                                // 0x0508(0x0001) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       bShouldOverrideSpecialMoveDrop;                          // 0x0509(0x0001) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_3BWF[0x2];                                   // 0x050A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FGuid                                               ClaimedInteractableTarget;                               // 0x050C(0x0010) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FGuid                                               ClaimedCharacterTarget;                                  // 0x051C(0x0010) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_QJ6M[0xC];                                   // 0x052C(0x000C) MISSED OFFSET (PADDING)

	public:
		bool UnstashItem(EIGInventorySlot Slot);
		void UnregisterNavigation();
		bool TryClaimInteractable(class AActor* InInteractable);
		bool TryClaimCharacter(class ASheikCharacter* InCharacter, bool bForce);
		void ToggleOverrideLootSpawn(bool bInShouldOverrideInventorySpawn, bool bInShouldOverrideSpecialMoveSpawn);
		void ToggleFallDamageEnabled(bool bEnabled);
		bool StopObjectInteraction();
		void StopBrain();
		bool StashHeldItem();
		bool StartObjectInteraction(class UObject* InObject);
		void StartNewBehaviorTree(const class FName& NewBehaviorProfile);
		void StartNewAIProfile(const class FName& ProfileName);
		void ResetInputDirection();
		void ResetBrain();
		void ReleaseInteractable();
		void ReleaseInputEvent(EMoveTrack InputEventTrack);
		void ReleaseClaimedTargets();
		void ReleaseCharacter();
		void ReleaseBlock();
		void RegisterNavigation();
		void RecordInputDirectionWorld(const struct FVector& WorldDirection, float TimeToPress);
		void RecordInputDirectionLocal(float RightVal, float ForwardVal, float TimeToPress);
		void RecordInputDirection(EMoveInputDirection InputDirection, float TimeToPress);
		void PressInputEvent(EMoveTrack InputEventTrack, float TimeToPress);
		void PressBlock();
		void OnNewAIProfileStarted();
		void OnCharacterInputToggled(bool bIsEnabled);
		void OnAttackConnect(const struct FQueuedAttack& InQueuedAttack);
		bool IsInteractableTargetable(class AActor* InInteractable);
		bool IsCharacterTargetable(class ASheikCharacter* InCharacter);
		void HandleOnMoveMontageStarted(class UAnimMontage* MoveMontage, class AIGCharacter* Char);
		void HandleOnMoveMontageEnded(class UAnimMontage* MoveMontage, bool bInterrupted);
		void HandleOnCharacterDied(ECauseOfDeath Cause);
		class UIGSpecialMoveConsumer* GetSpecialMoveConsumerComponent();
		float GetLaunchAngle(const struct FVector& LaunchTarget);
		float GetDistanceNeededToHaltFreefallVelocity();
		void GetCurrentTargetLocation(struct FVector* OutLocation);
		struct FSheikAIProfileOptions GetActiveAIProfile();
		void ConsumeSpecialMoveMagazine(bool bAssignToSlotOne, class UIGMoveMontage* MoveMontage, EMoveTier ExecutionTier);
		void BPOnMoveMontageFinished(class UAnimMontage* MoveMontage, bool bInterrupted);
		void BPOnAttackResultDetermined(EQueuedAttackResult AttackResult, class AActor* AttackedActor);
		bool AttemptResurrectTeammate(class ASheikCharacter* InTeammate);
		void AssignSpecialMoveToSlot(bool bAssignToSlotOne, class UIGMoveMontage* MoveMontage, EMoveTier ExecutionTier);
		static UClass* StaticClass();
	};

	/**
	 * Class Sheik.SheikAIDeadController
	 * Size -> 0x0000 (FullSize[0x0368] - InheritedSize[0x0368])
	 */
	class ASheikAIDeadController : public ASheikAIController
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Sheik.SheikAIGameInfo
	 * Size -> 0x0030 (FullSize[0x0058] - InheritedSize[0x0028])
	 */
	class USheikAIGameInfo : public UObject
	{
	public:
		class FScriptMulticastDelegate                             OnStartRingShrink;                                       // 0x0028(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnFinishRingShrink;                                      // 0x0038(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnEnterFinalRing;                                        // 0x0048(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Sheik.SheikAIManager
	 * Size -> 0x0180 (FullSize[0x01A8] - InheritedSize[0x0028])
	 */
	class USheikAIManager : public UObject
	{
	public:
		class USheikAIGameInfo*                                    AIGameInfo;                                              // 0x0028(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FVector                                             RingCenter;                                              // 0x0030(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      RingRadius;                                              // 0x003C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		TArray<struct FVector2D>                                   LaunchOffsets;                                           // 0x0040(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPrivate
		TArray<struct FVector2D>                                   UnusedWorldOffsets;                                      // 0x0050(0x0010) ZeroConstructor, NativeAccessSpecifierPrivate
		class UIGMatchTimeLootSelectionProfile*                    MatchTimeLootSelectionProfile;                           // 0x0060(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		int32_t                                                    MaxLootSpawns;                                           // 0x0068(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_MW38[0x4];                                   // 0x006C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class USheikAIProfile*>                             AIProfiles;                                              // 0x0070(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPrivate
		TMap<class FName, class UBehaviorTree*>                    BehaviorTrees;                                           // 0x0080(0x0050) Edit, NativeAccessSpecifierPrivate
		TMap<class FName, class UBehaviorTree*>                    DebugBehaviorTrees;                                      // 0x00D0(0x0050) Edit, NativeAccessSpecifierPrivate
		class USheikAIProfile*                                     DefaultAIProfile;                                        // 0x0120(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      RingNavInvokerPadding;                                   // 0x0128(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_MGGE[0x4];                                   // 0x012C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UClass*                                              RingNavInvokerClass;                                     // 0x0130(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class ASheikNavInvokerActorBase*                           RingNavInvoker;                                          // 0x0138(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UClass*                                              BargeInvokerClass;                                       // 0x0140(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_YYOE[0x20];                                  // 0x0148(0x0020) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FSheikBotEmoteInfo>                          UnlockedEmotes;                                          // 0x0168(0x0010) ZeroConstructor, NativeAccessSpecifierPrivate
		struct FSheikAITargetContainer                             CharacterTargets;                                        // 0x0178(0x0018) Edit, NativeAccessSpecifierPublic
		struct FSheikAITargetContainer                             InteractableTargets;                                     // 0x0190(0x0018) Edit, NativeAccessSpecifierPublic

	public:
		bool ShouldUseStaticNavInvokers();
		bool ShouldUseBotProfileImprovements();
		struct FVector RequestLaunchTarget();
		void ReportTrapped(class ASheikAICharacterController* InBotController, EBotTrappedSource Reason);
		void OnRingShrinkEnd();
		void OnGameFlowStateUpdated(EGameFlowState OldGameFlowState, EGameFlowState NewGameFlowState);
		void OnEnterFinalRing();
		void OnEmoteAssetsLoadedComplete();
		bool IsWeaponCombatAllowed();
		bool IsRingShrinking();
		bool IsActorInPostShrinkRing(class AActor* InActor);
		bool GetUnlockedEmoteByName(const class FName& EmoteDisplayName, struct FSheikBotEmoteInfo* OutEmoteInfo);
		bool GetRandomUnlockedEmote(const struct FGameplayTagContainer& GameplayTags, struct FSheikBotEmoteInfo* OutEmoteInfo);
		void GetBotName(class FString* OutName);
		class USheikAIGameInfo* GetAIGameInfo();
		static UClass* StaticClass();
	};

	/**
	 * Class Sheik.SheikAINavArea
	 * Size -> 0x0000 (FullSize[0x0048] - InheritedSize[0x0048])
	 */
	class USheikAINavArea : public UNavArea
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Sheik.SheikAINavArea_BlueprintCustom1
	 * Size -> 0x0000 (FullSize[0x0048] - InheritedSize[0x0048])
	 */
	class USheikAINavArea_BlueprintCustom1 : public USheikAINavArea
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Sheik.SheikAINavArea_BlueprintCustom2
	 * Size -> 0x0000 (FullSize[0x0048] - InheritedSize[0x0048])
	 */
	class USheikAINavArea_BlueprintCustom2 : public USheikAINavArea
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Sheik.SheikAINavArea_BlueprintCustom3
	 * Size -> 0x0000 (FullSize[0x0048] - InheritedSize[0x0048])
	 */
	class USheikAINavArea_BlueprintCustom3 : public USheikAINavArea
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Sheik.SheikAINavArea_BlueprintCustom4
	 * Size -> 0x0000 (FullSize[0x0048] - InheritedSize[0x0048])
	 */
	class USheikAINavArea_BlueprintCustom4 : public USheikAINavArea
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Sheik.SheikAINavArea_Jump
	 * Size -> 0x0000 (FullSize[0x0048] - InheritedSize[0x0048])
	 */
	class USheikAINavArea_Jump : public USheikAINavArea
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Sheik.SheikAINavArea_Fall
	 * Size -> 0x0000 (FullSize[0x0048] - InheritedSize[0x0048])
	 */
	class USheikAINavArea_Fall : public USheikAINavArea
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Sheik.SheikAIPathFollowingComponent
	 * Size -> 0x0008 (FullSize[0x0258] - InheritedSize[0x0250])
	 */
	class USheikAIPathFollowingComponent : public UPathFollowingComponent
	{
	public:
		unsigned char                                              UnknownData_0A7Z[0x8];                                   // 0x0250(0x0008) MISSED OFFSET (PADDING)

	public:
		struct FVector GetPathLocationByIndex(int32_t SegmentIndex);
		void ForceNextPathSegment();
		static UClass* StaticClass();
	};

	/**
	 * Class Sheik.SheikAISpawner
	 * Size -> 0x0070 (FullSize[0x0290] - InheritedSize[0x0220])
	 */
	class ASheikAISpawner : public AActor
	{
	public:
		class FName                                                SpawnerTag;                                              // 0x0220(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                AIProfileToSpawn;                                        // 0x0228(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bShouldRespawnBotsHere;                                  // 0x0230(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_M6YH[0x3];                                   // 0x0231(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                BotNameOverride;                                         // 0x0234(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                BotOutfitOverride;                                       // 0x023C(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bInfiniteStamina;                                        // 0x0244(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bInfiniteHealth;                                         // 0x0245(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_F1FH[0x2];                                   // 0x0246(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UIGMoveMontage*                                      SpecialOneMove;                                          // 0x0248(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EMoveTier                                                  SpecialOneTier;                                          // 0x0250(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_PP6S[0x7];                                   // 0x0251(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UIGMoveMontage*                                      SpecialTwoMove;                                          // 0x0258(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EMoveTier                                                  SpecialTwoTier;                                          // 0x0260(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_UCX2[0x7];                                   // 0x0261(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FSheikAISpawnerSettings                             SpawnerSettings;                                         // 0x0268(0x0028) Edit, NoDestructor, NativeAccessSpecifierPublic

	public:
		bool TriggerSpawner();
		static UClass* StaticClass();
	};

	/**
	 * Class Sheik.SheikAISpawnerComponent
	 * Size -> 0x0030 (FullSize[0x00E0] - InheritedSize[0x00B0])
	 */
	class USheikAISpawnerComponent : public UActorComponent
	{
	public:
		class UClass*                                              SheikAccessorySystemClass;                               // 0x00B0(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class USheikAccessorySystem*                               SheikAccessorySystem;                                    // 0x00B8(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UClass*                                              SheikWalletSystemClass;                                  // 0x00C0(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class USheikWalletSystem*                                  SheikWalletSystem;                                       // 0x00C8(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FDateTime                                           DefaultUnlockDate;                                       // 0x00D0(0x0008) Edit, ZeroConstructor, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		int32_t                                                    MaxNameRetries;                                          // 0x00D8(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_CV37[0x4];                                   // 0x00DC(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Sheik.SheikBotItemDefinitions
	 * Size -> 0x0070 (FullSize[0x00A0] - InheritedSize[0x0030])
	 */
	class USheikBotItemDefinitions : public UDataAsset
	{
	public:
		TMap<EBotItemCategory, struct FGameplayTagContainer>       ItemCategories;                                          // 0x0030(0x0050) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		struct FGameplayTagContainer                               InvalidItemTags;                                         // 0x0080(0x0020) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Sheik.SheikAIProfile
	 * Size -> 0x0138 (FullSize[0x0168] - InheritedSize[0x0030])
	 */
	class USheikAIProfile : public UDataAsset
	{
	public:
		int32_t                                                    AIProfileVersion;                                        // 0x0030(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_7QAD[0x4];                                   // 0x0034(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FSheikAIProfileOptions                              ProfileOptions;                                          // 0x0038(0x0130) Edit, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Sheik.SheikAnnouncementManager
	 * Size -> 0x0050 (FullSize[0x04D0] - InheritedSize[0x0480])
	 */
	class USheikAnnouncementManager : public UIGUI_ScreenBase
	{
	public:
		class FScriptMulticastDelegate                             OnAnnouncementStarted;                                   // 0x0480(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnAnnouncementClosed;                                    // 0x0490(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnAnnouncementForciblyClosed;                            // 0x04A0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		TArray<struct FSheikAnnouncement>                          AnnouncementQueue;                                       // 0x04B0(0x0010) Edit, BlueprintVisible, ZeroConstructor, Protected, NativeAccessSpecifierProtected
		float                                                      SpeedFactorIncreaseForEachAnnouncementInQueue;           // 0x04C0(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       KeepSpeedUpForAnnouncementsThatSpeedUpInLargeQueues;     // 0x04C4(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_KL3O[0xB];                                   // 0x04C5(0x000B) MISSED OFFSET (PADDING)

	public:
		void UpdateActiveAnnouncement();
		void ShowAnnouncement_BP(const struct FSheikAnnouncement& AnnouncementData);
		void SetSpeedFactor_BP(int32_t AnnouncementId, float NewSpeedFactor);
		int32_t QueueAnnouncement(const struct FSheikAnnouncement& AnnouncementData);
		void OnSheikAnnouncementDelegate__DelegateSignature(int32_t AnnouncementId, ESheikAnnouncementType AnnouncementType);
		bool IsAnnouncementPlaying(int32_t AnnouncementId);
		bool IsAnnouncementBeingShown();
		void HandleOnAnnouncementForciblyClosed(int32_t AnnouncementId);
		void HandleOnAnnouncementClosed(int32_t AnnouncementId);
		int32_t GetCurrentlyActiveAnnouncement();
		ESheikAnnouncementType GetAnnouncementType(int32_t AnnouncementId);
		struct FSheikAnnouncement GetAnnouncementData(int32_t AnnouncementId);
		bool DoesAnnouncementWithIdExist(int32_t AnnouncementId);
		void DeactivateAllAnnouncementWidgets();
		void CloseAnnouncement_BP(int32_t AnnouncementId);
		void CloseAnnouncement(int32_t AnnouncementId);
		void CloseAllAnnouncements();
		void CloseActiveAnnouncement();
		static UClass* StaticClass();
	};

	/**
	 * Class Sheik.SheikAnnouncementWidget
	 * Size -> 0x0250 (FullSize[0x0668] - InheritedSize[0x0418])
	 */
	class USheikAnnouncementWidget : public UIGUI_WidgetBase
	{
	public:
		class FScriptMulticastDelegate                             OnAnnouncementStarted;                                   // 0x0418(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnAnnouncementClosed;                                    // 0x0428(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnAnnouncementForciblyClosed;                            // 0x0438(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnSpeedFactorChanged;                                    // 0x0448(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		bool                                                       bIsCurrentlyPlaying;                                     // 0x0458(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_WKK7[0x3];                                   // 0x0459(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      SpeedFactor;                                             // 0x045C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FSheikAnnouncement                                  AnnouncementData;                                        // 0x0460(0x0200) Edit, BlueprintVisible, Protected, NativeAccessSpecifierProtected
		int32_t                                                    AssociatedAnnouncementId;                                // 0x0660(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_CU77[0x4];                                   // 0x0664(0x0004) MISSED OFFSET (PADDING)

	public:
		void StartAnnouncement_BP(const struct FSheikAnnouncement& SheikAnnouncementData);
		void StartAnnouncement(const struct FSheikAnnouncement& SheikAnnouncementData);
		void SetSpeedFactor_BP(float NewSpeedFactor);
		void SetSpeedFactor(float NewSpeedFactor);
		void OnSpeedFactorChanged__DelegateSignature(float NewSpeedFactor);
		void OnAnnouncementStateChanged__DelegateSignature(int32_t AnnouncementId);
		void OnAnnouncementEnded();
		bool IsAnnouncementPlaying();
		float GetSpeedFactor();
		int32_t GetAnnouncementId();
		void ForciblyCloseAnnouncement();
		void CloseAnnouncement_BP();
		static UClass* StaticClass();
	};

	/**
	 * Class Sheik.SheikAudioHandlerActor
	 * Size -> 0x00F8 (FullSize[0x0318] - InheritedSize[0x0220])
	 */
	class ASheikAudioHandlerActor : public AIGAudioHandlerActor
	{
	public:
		unsigned char                                              UnknownData_GP9F[0x8];                                   // 0x0220(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class USoundBase*>                                  CannonLaunchPreloadSounds;                               // 0x0228(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Protected, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_5A80[0xE0];                                  // 0x0238(0x00E0) MISSED OFFSET (PADDING)

	public:
		void OnTimeTillLaunchChanged(int32_t TimeTillLaunch);
		static UClass* StaticClass();
	};

	/**
	 * Class Sheik.SheikMusicDataAsset
	 * Size -> 0x0050 (FullSize[0x0080] - InheritedSize[0x0030])
	 */
	class USheikMusicDataAsset : public UDataAsset
	{
	public:
		TMap<class FName, struct FSheikMusicInfo>                  NameToMusicMap;                                          // 0x0030(0x0050) Edit, NativeAccessSpecifierPublic

	public:
		void GetSheikMusicInfo(const class FName& MusicName, struct FSheikMusicInfo* SheikMusicInfo, bool* IsFound);
		static UClass* StaticClass();
	};

	/**
	 * Class Sheik.SheikAudioMusicManager
	 * Size -> 0x0018 (FullSize[0x0238] - InheritedSize[0x0220])
	 */
	class ASheikAudioMusicManager : public AActor
	{
	public:
		class USheikMusicDataAsset*                                SheikMusicData;                                          // 0x0220(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TWeakObjectPtr<class UAudioComponent>                      CurrentMusicPlaying;                                     // 0x0228(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                CurrentTriggerNamePlaying;                               // 0x0230(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		void TriggerMusic(const class FName& TriggerName, bool bIsBackgroundMusic);
		void StopCurrentMusic();
		static UClass* StaticClass();
	};

	/**
	 * Class Sheik.SheikAutoLedgeVolume
	 * Size -> 0x0000 (FullSize[0x0258] - InheritedSize[0x0258])
	 */
	class ASheikAutoLedgeVolume : public ATriggerVolume
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Sheik.SheikBasicStructure
	 * Size -> 0x0008 (FullSize[0x0228] - InheritedSize[0x0220])
	 */
	class ASheikBasicStructure : public AActor
	{
	public:
		class USceneComponent*                                     SceneRoot;                                               // 0x0220(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Sheik.SheikScreenBase
	 * Size -> 0x0000 (FullSize[0x0480] - InheritedSize[0x0480])
	 */
	class USheikScreenBase : public UIGUI_ScreenBase
	{
	public:
		void OnUpdateInputGroupEvent(class USheikWidgetBase* Widget);
		static UClass* StaticClass();
	};

	/**
	 * Class Sheik.SheikBattlePassScreen
	 * Size -> 0x0000 (FullSize[0x0480] - InheritedSize[0x0480])
	 */
	class USheikBattlePassScreen : public USheikScreenBase
	{
	public:
		void SimulatePurchaseButtonSelected();
		bool AreFullscreenVirtualCurrencyCelebrationsAllowed();
		static UClass* StaticClass();
	};

	/**
	 * Class Sheik.SheikBlueprintStatics
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class USheikBlueprintStatics : public UBlueprintFunctionLibrary
	{
	public:
		void UpdateMouseLockSettingsForPlayer(class APlayerController* ForPlayer);
		void UnlockMouseFromViewportForPlayer(class APlayerController* ForPlayer);
		class AIGVFXPhysActor* SpawnVFXPhysActorFromPool(class UObject* WorldContextObject, const struct FTransform& SpawnTransform, class UClass* PhysActorToSpawn, float Duration);
		void ShowAccountUpgradeUI();
		void SetServerType(EServerHostType Type);
		void ResetTitleFileStorageEnumerateCounter();
		class FText ReplacePlatformSpecificMatchmakingText(const class FText& InSource);
		class FString PasteStringFromClipboard();
		void LogRuntimeMessage(const class FString& InContext, const class FString& InMessage, bool ShowOnScreen, bool bLogInShipping);
		void LockMouseToViewportForPlayer(class APlayerController* ForPlayer);
		bool IsValidEmail(const class FString& String);
		bool IsUserLoggedIntoEOS();
		bool IsUserLoggedIntoCozmo();
		bool IsGDKUsingSimpleUserModel();
		bool IsGDKUsingAdvancedUserModel();
		bool HasUserPrivilege(ESheikUserPrivilege Type);
		void GetSplitLocale(class UObject* WorldContextObject, class FString* Language, class FString* Script, class FString* CountryCode);
		class USheikGameInstance* GetSheikGameInstance(class UObject* WorldContextObject);
		ESheikPlatformService GetServicePlatformFromString(const class FString& PlatformServiceString);
		class FString GetServicePlatformAsString();
		ESheikPlatformService GetServicePlatform();
		void GetPlatformNickname(class FString* OutNickname);
		ESheikPlatform GetPlatformFromString(const class FString& PlatformString);
		class FString GetPlatformDefaultLanguage();
		int32_t GetPlatformActiveUserIndex();
		bool GetPlatformAccountInfo(ESheikPlatform* OutPlatform, ESheikPlatformService* OutPlatformService, class FString* OutPlatformId, class FString* OutPlatformName, class FString* OutEosId, class FString* OutProductId);
		ESheikPlatform GetPlatform();
		int32_t GetEOSActiveUserIndex();
		int32_t GetCozmoActiveUserIndex();
		void DisplaySonyChatResctrictionDialog();
		void DisplayCrossPlayRestrictedDialog();
		bool DescribeGameSessions(const struct FDescribeGameSessionsRequest& Request, TArray<struct FCozmoGameSession>* GameSessionList, class FString* ErrorString);
		void CopyStringToClipboard(const class FString& StringToCopy);
		bool ConvertRenderTargetToBuffer(class UTextureRenderTarget2D* TextureRenderTarget, TArray<unsigned char>* OutBuffer);
		bool ApplySavedCultureSetting(const class FString& InCulture);
		static UClass* StaticClass();
	};

	/**
	 * Class Sheik.RequestUserPriviligeCallbackProxy
	 * Size -> 0x0028 (FullSize[0x0058] - InheritedSize[0x0030])
	 */
	class URequestUserPriviligeCallbackProxy : public UOnlineBlueprintCallProxyBase
	{
	public:
		class FScriptMulticastDelegate                             OnSuccess;                                               // 0x0030(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnFailure;                                               // 0x0040(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_RFE5[0x8];                                   // 0x0050(0x0008) MISSED OFFSET (PADDING)

	public:
		class URequestUserPriviligeCallbackProxy* RequestUserPrivilege(ESheikUserPrivilege InPrivilegeType);
		static UClass* StaticClass();
	};

	/**
	 * Class Sheik.RequestUserPremiumStatusCallbackProxy
	 * Size -> 0x0020 (FullSize[0x0050] - InheritedSize[0x0030])
	 */
	class URequestUserPremiumStatusCallbackProxy : public UOnlineBlueprintCallProxyBase
	{
	public:
		class FScriptMulticastDelegate                             OnSuccess;                                               // 0x0030(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnFailure;                                               // 0x0040(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic

	public:
		class URequestUserPremiumStatusCallbackProxy* RequestUserPremiumStatus();
		static UClass* StaticClass();
	};

	/**
	 * Class Sheik.SheikButtonBase
	 * Size -> 0x00B0 (FullSize[0x04C8] - InheritedSize[0x0418])
	 */
	class USheikButtonBase : public UIGUI_WidgetBase
	{
	public:
		class FText                                                Label;                                                   // 0x0418(0x0018) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		int32_t                                                    ButtonIndex;                                             // 0x0430(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_N2K9[0x4];                                   // 0x0434(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTextBlock*                                          ButtonLabel;                                             // 0x0438(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UOverlay*                                            RootOverlay;                                             // 0x0440(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UWidgetAnimation*                                    FocusedAnim;                                             // 0x0448(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UWidgetAnimation*                                    SelectedAnim;                                            // 0x0450(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UWidgetAnimation*                                    DisabledAnim;                                            // 0x0458(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bIsFocused;                                              // 0x0460(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_BZSU[0x67];                                  // 0x0461(0x0067) MISSED OFFSET (PADDING)

	public:
		void WidgetUnfocused();
		void WidgetFocused();
		void WidgetEnabled();
		void WidgetDisabled();
		void SetWidgetFocus(bool bSkipAnimations, bool bFocused);
		void SetLabel(const class FText& InText);
		void SetDisabledWithoutAnimation(bool bDisabled);
		void SetDisabled(bool bDisabled);
		void OnSelectedAnimationFinished();
		void HandleSelect(int32_t UserIndex);
		int32_t GetButtonIndex();
		void ApplyContentOnPreConstruct();
		static UClass* StaticClass();
	};

	/**
	 * Class Sheik.SheikCableActor
	 * Size -> 0x0008 (FullSize[0x0228] - InheritedSize[0x0220])
	 */
	class ASheikCableActor : public AActor
	{
	public:
		class USheikCableComponent*                                SheikCableComponent;                                     // 0x0220(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Sheik.SheikCableComponent
	 * Size -> 0x00D8 (FullSize[0x0560] - InheritedSize[0x0488])
	 */
	class USheikCableComponent : public UMeshComponent
	{
	public:
		unsigned char                                              UnknownData_M635[0x8];                                   // 0x0488(0x0008) Fix Super Size
		struct FComponentReference                                 AttachEndTo;                                             // 0x0490(0x0028) Edit, NativeAccessSpecifierPublic
		class FName                                                AttachEndToSocketName;                                   // 0x04B8(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             EndLocation;                                             // 0x04C0(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CableLength;                                             // 0x04CC(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    NumSegments;                                             // 0x04D0(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      SubstepTime;                                             // 0x04D4(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    SolverIterations;                                        // 0x04D8(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bEnableStiffness;                                        // 0x04DC(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_WPXR[0x3];                                   // 0x04DD(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      CableGravityScale;                                       // 0x04E0(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CableWidth;                                              // 0x04E4(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    NumSides;                                                // 0x04E8(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      TileMaterial;                                            // 0x04EC(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_WX9X[0x70];                                  // 0x04F0(0x0070) MISSED OFFSET (PADDING)

	public:
		void SetAttachEndToComponent(class USceneComponent* Component, const class FName& SocketName);
		void SetAttachEndTo(class AActor* Actor, const class FName& ComponentProperty, const class FName& SocketName);
		void GetCableParticleLocations(TArray<struct FVector>* Locations);
		class USceneComponent* GetAttachedComponent();
		class AActor* GetAttachedActor();
		static UClass* StaticClass();
	};

	/**
	 * Class Sheik.SheikCableHandler
	 * Size -> 0x0088 (FullSize[0x02A8] - InheritedSize[0x0220])
	 */
	class ASheikCableHandler : public AInfo
	{
	public:
		float                                                      PlayerRadius;                                            // 0x0220(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      PlayerMinForce;                                          // 0x0224(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      PlayerMaxForce;                                          // 0x0228(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      WindCalculatingDistance;                                 // 0x022C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             WindDir;                                                 // 0x0230(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      BigSinIntensity;                                         // 0x023C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      BigSinSpeed;                                             // 0x0240(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      LittleSinIntensity;                                      // 0x0244(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      LittleSinSpeed;                                          // 0x0248(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_FPQF[0x5C];                                  // 0x024C(0x005C) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Sheik.SheikCallbacksManager
	 * Size -> 0x0010 (FullSize[0x00C0] - InheritedSize[0x00B0])
	 */
	class USheikCallbacksManager : public UActorComponent
	{
	public:
		class USheikMatchmakingCallbacks*                          MatchmakingCallbacks;                                    // 0x00B0(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class USheikEndOfMatchCallbacks*                           EndOfMatchCallbacks;                                     // 0x00B8(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected

	public:
		class USheikMatchmakingCallbacks* GetMatchmakingCallbacks();
		class USheikEndOfMatchCallbacks* GetEndOfMatchCallbacks();
		static UClass* StaticClass();
	};

	/**
	 * Class Sheik.SheikCaptureManager
	 * Size -> 0x00F0 (FullSize[0x0310] - InheritedSize[0x0220])
	 */
	class ASheikCaptureManager : public AActor
	{
	public:
		class USceneCaptureComponent2D*                            Camera;                                                  // 0x0220(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UWidgetComponent*                                    WidgetComponentTest;                                     // 0x0228(0x0008) Edit, BlueprintVisible, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UIGSkeletalMeshComponent*                            CharacterModel;                                          // 0x0230(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UStaticMeshComponent*                                Background;                                              // 0x0238(0x0008) Edit, BlueprintVisible, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FTargetDescription>                          RenderTargetDimensions;                                  // 0x0240(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FTargetDescription>                          TextTargetDimensions;                                    // 0x0250(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, ZeroConstructor, NativeAccessSpecifierPublic
		unsigned char                                              RenderTargetCount;                                       // 0x0260(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              TextTargetCount;                                         // 0x0261(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_NLLQ[0x6];                                   // 0x0262(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnCaptureReady;                                          // 0x0268(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_J5UY[0x98];                                  // 0x0278(0x0098) MISSED OFFSET (PADDING)

	public:
		void SetTextCaptureResolution(unsigned char Target, int32_t NewResX, int32_t NewResY);
		void SetCaptureResolution(unsigned char Target, int32_t NewResX, int32_t NewResY);
		void SetAllCaptureResolutions(int32_t NewResX, int32_t NewResY);
		bool QueueCapture(const struct FCharDesc& CharacterDescription, unsigned char RTIndex, TArray<class UMaterialInterface*>* OverrideMaterials, bool allowLongLoads, bool invalidatePrevCapture);
		bool IsIndexValid(unsigned char RTIndex);
		void InvalidateCapture(unsigned char TargetToInvalidate);
		ECaptureState GetCaptureState(unsigned char RTIndex);
		class UTexture* GetCapture(unsigned char RTIndex, class UTexture** OutUITexture, class UTexture2D* fallbackTexture);
		static UClass* StaticClass();
	};

	/**
	 * Class Sheik.SheikCareersScreen
	 * Size -> 0x0138 (FullSize[0x05B8] - InheritedSize[0x0480])
	 */
	class USheikCareersScreen : public USheikScreenBase
	{
	public:
		struct FIGSeasonDefinition                                 CurrentSeason;                                           // 0x0480(0x0050) BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnPreviewIconSoftPointersLoadSucceeded;                  // 0x04D0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, Protected, NativeAccessSpecifierProtected
		class FScriptMulticastDelegate                             OnPreviewIconSoftPointersLoadFailed;                     // 0x04E0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, Protected, NativeAccessSpecifierProtected
		class FScriptMulticastDelegate                             OnCareerScreenStatsLoaded;                               // 0x04F0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, Protected, NativeAccessSpecifierProtected
		class ASheikTitleCardFrontendUtility*                      TitleCardFrontendUtility;                                // 0x0500(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_F491[0x8];                                   // 0x0508(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FSheikPlayerDataStat>                        PlayerStats;                                             // 0x0510(0x0010) ZeroConstructor, NativeAccessSpecifierPrivate
		TArray<struct FSheikPlayerDataStat>                        SingleGameRecordStats;                                   // 0x0520(0x0010) ZeroConstructor, NativeAccessSpecifierPrivate
		class USheikGameInstance*                                  GameInstance;                                            // 0x0530(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class USheikTitleCardDataManager*                          TitleCardDataManager;                                    // 0x0538(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class USheikStatsAdapter*                                  StatsAdapter;                                            // 0x0540(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UIGStatsSystem*                                      StatsSystem;                                             // 0x0548(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class USheikSeasonalStatsManager*                          SeasonalStatsManager;                                    // 0x0550(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class USheikWalletSystem*                                  WalletSystem;                                            // 0x0558(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_0D51[0x38];                                  // 0x0560(0x0038) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UTexture2D*>                                  LoadedPreviewIcons;                                      // 0x0598(0x0010) ZeroConstructor, NativeAccessSpecifierPrivate
		TArray<class UMaterialInterface*>                          LoadedPreviewIconMaterials;                              // 0x05A8(0x0010) ZeroConstructor, NativeAccessSpecifierPrivate

	public:
		bool VerifyRequiredSeasonalStatsLoaded();
		void SetSheikTitleCardFrontendUtility(class ASheikTitleCardFrontendUtility* InTitleCardFrontendUtility);
		bool RewardIsOutOfSeason(EIGSeasonIdentifier RewardSeason);
		void ReleaseLoadedPreviewIcons();
		void OnPreviewIconSoftPointersLoadSucceeded__DelegateSignature();
		void OnPreviewIconSoftPointersLoadFailed__DelegateSignature();
		void OnCareerScreenStatsLoaded__DelegateSignature();
		void LoadAllPreviewIcons();
		void Init();
		bool HaveCareerScreenStatsLoaded();
		void HandleProgressionDataDownloadComplete();
		void HandleOnPreviewIconLoadComplete();
		class USheikWalletSystem* GetWalletSystemReference();
		class USheikWalletSystem* GetWalletSystem();
		bool GetTimeLeftForTimedRewards(struct FTimespan* OutDaysAndHours);
		bool GetStatByName(const class FName& RawStatName, struct FSheikPlayerDataStat* OutStat);
		TArray<struct FSheikPlayerDataStat> GetSingleGameRecordStats();
		TArray<struct FSheikPlayerDataStat> GetPlayerStats();
		bool GetAllPreviewIconSoftObjectPaths(TArray<struct FSoftObjectPath>* OutIconPaths);
		bool FilterTitleCardData(ESheikCareerScreenFilterOption FilterOption, const struct FIGTitleCardBase& NextReward);
		void DebugOnlySetCurrentlyHoveredReward(const class FName& RewardId);
		bool CompareTitleCardData(ESheikCareerScreenSortCriteria SortCriteria, bool LHSIsDefault, const struct FIGTitleCardBase& LHS, const struct FIGTitleCardBase& RHS);
		void ApplyFilterAndSortStats(ESheikCareerScreenFilterOption FilterOption, ESheikCareerScreenSortCriteria SortCriteria, TArray<struct FIGTitleCardStat>* OutStats);
		void ApplyFilterAndSortPlayerTitles(ESheikCareerScreenFilterOption FilterOption, ESheikCareerScreenSortCriteria SortCriteria, TArray<struct FIGTitleCardPlayerTitle>* OutTitles);
		void ApplyFilterAndSortPlayerPoses(ESheikCareerScreenFilterOption FilterOption, ESheikCareerScreenSortCriteria SortCriteria, TArray<struct FIGTitleCardPlayerPose>* OutPoses);
		void ApplyFilterAndSortMedals(ESheikCareerScreenFilterOption FilterOption, ESheikCareerScreenSortCriteria SortCriteria, TArray<struct FIGTitleCardMedal>* OutMedals);
		void ApplyFilterAndSortItemTypeBase(ESheikTitleCardDataType ItemType, ESheikCareerScreenFilterOption FilterOption, ESheikCareerScreenSortCriteria SortCriteria, TArray<struct FIGTitleCardBase>* OutBaseItems);
		void ApplyFilterAndSortBorders(ESheikCareerScreenFilterOption FilterOption, ESheikCareerScreenSortCriteria SortCriteria, TArray<struct FIGTitleCardBorder>* OutBorders);
		void ApplyFilterAndSortBackgrounds(ESheikCareerScreenFilterOption FilterOption, ESheikCareerScreenSortCriteria SortCriteria, TArray<struct FIGTitleCardBackground>* OutBackgrounds);
		static UClass* StaticClass();
	};

	/**
	 * Class Sheik.SheikCharacter
	 * Size -> 0x02D0 (FullSize[0x12E0] - InheritedSize[0x1010])
	 */
	class ASheikCharacter : public AIGCharacter
	{
	public:
		EIGBodyType                                                CharacterBodyType;                                       // 0x1010(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_BBMB[0x7];                                   // 0x1011(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UMaterialInstanceDynamic*>                    DynamicCreatedMaterialInstances;                         // 0x1018(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic
		float                                                      LastRingExitTimeStamp;                                   // 0x1028(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, EditConst, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ExpectedRingoutTimeStamp;                                // 0x102C(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      SecondsToDeath;                                          // 0x1030(0x0004) Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      SecondsToDeath_MAX;                                      // 0x1034(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    LastSecondsValueUI;                                      // 0x1038(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ExpectedGraceEndTimeStamp;                               // 0x103C(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      GraceSeconds_MAX;                                        // 0x1040(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_FRYS[0x4];                                   // 0x1044(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UIGMoveMontage*>                              BRLaunchMoves;                                           // 0x1048(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic
		class UIGMoveMontage*                                      PerfectLandMove;                                         // 0x1058(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIsAimingCannon;                                         // 0x1060(0x0001) BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIsWaitingToFireCannon;                                  // 0x1061(0x0001) BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIsAllowedtoFireCannon;                                  // 0x1062(0x0001) BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_Q0G9[0x1];                                   // 0x1063(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      DefaultCannonAimingPitch;                                // 0x1064(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FRotator                                            StartingCannonRotation;                                  // 0x1068(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FRotator                                            ReplicatedLaunchMasterCannonAimRotation;                 // 0x1074(0x000C) Net, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		float                                                      SimulatedCannonAimSlerpSpeed;                            // 0x1080(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CannonYawTurnMax;                                        // 0x1084(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CannonPitchMin;                                          // 0x1088(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CannonPitchMax;                                          // 0x108C(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CannonPitchAdditionalOffset;                             // 0x1090(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_7RDM[0x4];                                   // 0x1094(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             ClientIsAimingCannonChanged;                             // 0x1098(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             ClientFiredCannon;                                       // 0x10A8(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             CannonCooldownStarted;                                   // 0x10B8(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		int32_t                                                    EventScore;                                              // 0x10C8(0x0004) Edit, BlueprintVisible, Net, ZeroConstructor, EditConst, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_FRUX[0x4];                                   // 0x10CC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AActor*                                              ParticipatingEventBeacon;                                // 0x10D0(0x0008) BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       IsNonParticipant;                                        // 0x10D8(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, EditConst, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_KUNN[0x3];                                   // 0x10D9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      CannonPreLoadWarmUpTime;                                 // 0x10DC(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_PIGY[0x8];                                   // 0x10E0(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnThrownItemTargetingPlayer;                             // 0x10E8(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnThrownItemNoLongerTargetingPlayer;                     // 0x10F8(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              Tier1Magazine[0x28];                                     // 0x1108(0x0028) UNKNOWN PROPERTY: SoftClassProperty
		unsigned char                                              Tier2Magazine[0x28];                                     // 0x1130(0x0028) UNKNOWN PROPERTY: SoftClassProperty
		unsigned char                                              Tier3Magazine[0x28];                                     // 0x1158(0x0028) UNKNOWN PROPERTY: SoftClassProperty
		float                                                      DropSpecialSpeed;                                        // 0x1180(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      PinDropOneSpecial;                                       // 0x1184(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      PinDropTwoSpecials;                                      // 0x1188(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      TKODropOneSpecial;                                       // 0x118C(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      TKODropTwoSpecials;                                      // 0x1190(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_PNIW[0x78];                                  // 0x1194(0x0078) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      KOInsuranceThreshold;                                    // 0x120C(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      KOInsuranceCost;                                         // 0x1210(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_6WHS[0x4];                                   // 0x1214(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UIGMoveMontage*                                      KOInsuranceRecoverMontage;                               // 0x1218(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIsUsingKOInsurance;                                     // 0x1220(0x0001) Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIsKOInsuranceAllowed;                                   // 0x1221(0x0001) BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EDownedType                                                DownedType;                                              // 0x1222(0x0001) BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_0QZR[0x5];                                   // 0x1223(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class ASheikAICharacterController*                         CachedSuspendedController;                               // 0x1228(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bNeedsToUpdateTeamPowerScaling;                          // 0x1230(0x0001) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_2YQ3[0x27];                                  // 0x1231(0x0027) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UMaterialInterface*>                          MaterialInterfacesToCreate;                              // 0x1258(0x0010) Edit, ZeroConstructor, Protected, NativeAccessSpecifierProtected
		class USheikCharacterStatTierData*                         StatTierData;                                            // 0x1268(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FVector                                             InitialCannonDirection;                                  // 0x1270(0x000C) Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_JQK0[0x2];                                   // 0x127C(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		bool                                                       bClientRequestingCannonPreload;                          // 0x127E(0x0001) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bClientDoingPreMatchPreload;                             // 0x127F(0x0001) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bClientDoingPreMatchLOD1Preload;                         // 0x1280(0x0001) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_SYGC[0x3];                                   // 0x1281(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             InitialDirectionToRingCenter;                            // 0x1284(0x000C) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bClientCannonLaunchSettingsEnabled;                      // 0x1290(0x0001) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_38LW[0x3];                                   // 0x1291(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    CachedTexturePoolSize;                                   // 0x1294(0x0004) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      CannonPreLoadWarmUpTimeRemaining;                        // 0x1298(0x0004) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FRotator                                            LockedCannonRotationToFire;                              // 0x129C(0x000C) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected
		class USheikPinComponent*                                  PinComponent;                                            // 0x12A8(0x0008) Edit, BlueprintVisible, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FGuid                                               AITargetingGuid;                                         // 0x12B0(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_E89V[0x20];                                  // 0x12C0(0x0020) MISSED OFFSET (PADDING)

	public:
		void SetSpectatorInfoVisibility(bool bIsVisible);
		void SetSpectatorInfoHealthbarVisibility(bool bIsVisible);
		void SetKOInsuranceAllowed(bool bIsAllowed);
		void ServerSetAutoClimb(bool bShouldAutoClimb);
		void ServerRequestFireCannon(const struct FRotator& LaunchRotation);
		void ServerProcessLaunchAction(ESheikLaunchActionType LaunchAction);
		void ServerDebugClearStatsAllPlayers();
		void ReloadCharacter(const struct FSheikSpawnParams& NewSpawnParams);
		void OnTheFlyMeshSwap(bool SwappingBaseSkeletalMesh);
		void OnStopAiming();
		void OnStartAiming();
		void OnRep_ParticipatingEventBeacon();
		void OnRep_LastRingExitTimeStamp();
		void OnRep_IsWaitingToFireCannon();
		void OnRep_IsNonParticipant();
		void OnRep_IsKOInsuranceAllowed();
		void OnRep_IsAimingCannon();
		void OnRep_EventScore();
		void OnLaunchedPlayerLanded();
		void OnKOInsuranceMontageEnded(class UAnimMontage* Montage, bool bInterrupted);
		void OnAudioHandlerReady(class ASheikAudioHandlerActor* AudioHandler);
		bool IsShowingDebugPlayerMeshes();
		bool IsResurrectionAllowed(class ASheikCharacter* ResurrectionTarget);
		bool IsKOInsuranceAvailable();
		bool IsCharacterOutsideOfRing();
		bool HasLaunchControl();
		EMoveTier GetSpecialMoveDisplayTier(class UIGMoveMontage* Move, EMoveTier OverridableTier);
		float GetSheikStatBaseValue(ESheikModValueType Type);
		class USheikPinComponent* GetPinComponent();
		void ExecAddSheikStackFloat(ESheikModValueType TargetStat, EIGModType ModType, float ModValue);
		void DebugSetShouldAutoClimb(bool InValue);
		void DebugSetMouseCameraSensitivity(float InValue);
		void DebugSetMouseAimingSensitivity(float InValue);
		void DebugSetInvertMouseCannonCameraY(bool InInvert);
		void DebugSetInvertMouseCameraY(bool InInvert);
		void DebugSetInvertMouseAimingCameraY(bool InInvert);
		void DebugSetInvertGamepadCannonCameraY(bool InInvert);
		void DebugSetInvertGamepadCannonCameraX(bool InInvert);
		void DebugSetInvertGamepadCameraY(bool InInvert);
		void DebugSetInvertGamepadCameraX(bool InInvert);
		void DebugSetInvertGamepadAimingCameraY(bool InInvert);
		void DebugSetInvertGamepadAimingCameraX(bool InInvert);
		void DebugSetGamepadCameraSensitivity(float InValue);
		void DebugSetGamepadAimingSensitivity(float InValue);
		void ClientLaunchMasterFiredCannon();
		bool CanResurrectTeammate();
		void CannonLaunchMe();
		void AddSheikMovementInputLocal(float RightVal, float ForwardVal);
		void AddSheikMovementDirection(EMoveInputDirection LocalDirection);
		static UClass* StaticClass();
	};

	/**
	 * Class Sheik.SheikCharacterInfoWidget
	 * Size -> 0x0050 (FullSize[0x0600] - InheritedSize[0x05B0])
	 */
	class USheikCharacterInfoWidget : public UWidgetComponent
	{
	public:
		unsigned char                                              UnknownData_CNGV[0xC];                                   // 0x05B0(0x000C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      DistanceToShow;                                          // 0x05BC(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bWidgetShouldBeShown;                                    // 0x05C0(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_HKCJ[0x7];                                   // 0x05C1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class ASheikPlayerStateCommon*                             SpectatorPlayerState;                                    // 0x05C8(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class ASheikPlayerControllerCommon*                        OwningPlayerController;                                  // 0x05D0(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class ASheikPlayerStateCommon*                             OwningPlayerState;                                       // 0x05D8(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bDebugHideWidget;                                        // 0x05E0(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_E7CS[0x7];                                   // 0x05E1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnRequestPlayerState;                                    // 0x05E8(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_RRA5[0x8];                                   // 0x05F8(0x0008) MISSED OFFSET (PADDING)

	public:
		void UpdateRenderScale(const struct FVector2D& NewScale);
		void SetHealthbarVisiblity(bool IsVisible);
		void SetDebugHide(bool bHide);
		void OnRequestPlayerState__DelegateSignature();
		bool IsSpectatorPlayerStatePopulated();
		bool IsDebugHidden();
		static UClass* StaticClass();
	};

	/**
	 * Class Sheik.SheikCharacterStatTierData
	 * Size -> 0x00F0 (FullSize[0x0120] - InheritedSize[0x0030])
	 */
	class USheikCharacterStatTierData : public UDataAsset
	{
	public:
		TMap<EIGModValueType, struct FSheikLevelModifier>          CoreLevelModifiers;                                      // 0x0030(0x0050) Edit, NativeAccessSpecifierPublic
		TMap<EIGModValueType, struct FSheikLevelModifier>          ArmsLevelModifiers;                                      // 0x0080(0x0050) Edit, NativeAccessSpecifierPublic
		TMap<EIGModValueType, struct FSheikLevelModifier>          LegsLevelModifiers;                                      // 0x00D0(0x0050) Edit, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Sheik.SheikClientOnlyActor
	 * Size -> 0x0008 (FullSize[0x0228] - InheritedSize[0x0220])
	 */
	class ASheikClientOnlyActor : public AActor
	{
	public:
		class USceneComponent*                                     SceneRoot;                                               // 0x0220(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Sheik.SheikConsolePresenceManager
	 * Size -> 0x0028 (FullSize[0x0050] - InheritedSize[0x0028])
	 */
	class USheikConsolePresenceManager : public UObject
	{
	public:
		unsigned char                                              UnknownData_N2YY[0x20];                                  // 0x0028(0x0020) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class USheikGameInstance*                                  GameInstance;                                            // 0x0048(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		void OnMapStarted();
		void OnMapEnded();
		static UClass* StaticClass();
	};

	/**
	 * Class Sheik.SheikCoreStatsConsumable
	 * Size -> 0x0020 (FullSize[0x06C0] - InheritedSize[0x06A0])
	 */
	class ASheikCoreStatsConsumable : public AIGCoreStatsConsumable
	{
	public:
		TArray<struct FIGConsumableCoreBoost>                      ShiekCoreModsToApply;                                    // 0x06A0(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Protected, NativeAccessSpecifierProtected
		bool                                                       bApplySubstatsToAllOthers;                               // 0x06B0(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_78BM[0xF];                                   // 0x06B1(0x000F) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Sheik.SheikCrystal
	 * Size -> 0x0028 (FullSize[0x02A8] - InheritedSize[0x0280])
	 */
	class ASheikCrystal : public AIGCollectibleBase
	{
	public:
		class UStaticMeshComponent*                                Mesh;                                                    // 0x0280(0x0008) Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    ScoreValue;                                              // 0x0288(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_CST4[0x4];                                   // 0x028C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class ASheikCrystalRunEventBeacon*                         ParentBeacon;                                            // 0x0290(0x0008) BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UMaterialInstance*                                   IntangibleMaterial;                                      // 0x0298(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UMaterialInstance*                                   TangibleMaterial;                                        // 0x02A0(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		void SwapMaterials(bool IsTangible);
		void OnRep_ParentBeacon();
		void OnGameFlowStateChanged(EGameFlowState NewState);
		static UClass* StaticClass();
	};

	/**
	 * Class Sheik.SheikEventBeaconInterface
	 * Size -> 0x0078 (FullSize[0x0298] - InheritedSize[0x0220])
	 */
	class ASheikEventBeaconInterface : public AActor
	{
	public:
		class UStaticMeshComponent*                                RingMeshComponent;                                       // 0x0220(0x0008) Edit, BlueprintVisible, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      RingRadius;                                              // 0x0228(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       ShouldDisplayEventRing;                                  // 0x022C(0x0001) BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       IsEventActive;                                           // 0x022D(0x0001) BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_94X0[0x2];                                   // 0x022E(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class USphereComponent*                                    SafeZone;                                                // 0x0230(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_T19Z[0x60];                                  // 0x0238(0x0060) MISSED OFFSET (PADDING)

	public:
		void StartEvent();
		void StartCountdown();
		void ResizeRingMesh();
		void OnRep_ShouldDisplayEventRing();
		void OnRep_IsEventActive();
		void MulticastEventRewardNotify(TArray<class APlayerState*> WinnerState);
		bool IsPlayerParticipating(class AActor* Player);
		void EndEvent();
		static UClass* StaticClass();
	};

	/**
	 * Class Sheik.SheikCrystalRunEventBeacon
	 * Size -> 0x0070 (FullSize[0x0308] - InheritedSize[0x0298])
	 */
	class ASheikCrystalRunEventBeacon : public ASheikEventBeaconInterface
	{
	public:
		float                                                      CollectibleActorSpacing;                                 // 0x0298(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    BetterCollectibleFrequency;                              // 0x029C(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UClass*                                              CollectibleClass;                                        // 0x02A0(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UClass*                                              BetterCollectibleClass;                                  // 0x02A8(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ZTZX[0x10];                                  // 0x02B0(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             SplineActorCircleOffset;                                 // 0x02C0(0x000C) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      SplineActorRadius;                                       // 0x02CC(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      SplineActorRingDebugHeightOffset;                        // 0x02D0(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    SplineActorRingDebugNumCircleSegments;                   // 0x02D4(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FColor                                              SplineActorRingDebugRingColor;                           // 0x02D8(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      SplineActorRingDebugRingThickness;                       // 0x02DC(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FSheikCollectibleIncrementalSpawnData               IncrementalSpawnData;                                    // 0x02E0(0x0020) Transient, ContainsInstancedReference, NativeAccessSpecifierPublic
		bool                                                       bNeedsIncrementalSpawn;                                  // 0x0300(0x0001) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bNeedsIncrementalRePooling;                              // 0x0301(0x0001) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_DWEL[0x6];                                   // 0x0302(0x0006) MISSED OFFSET (PADDING)

	public:
		void RegisterPlayerScore(class AIGCharacter* Character, class ASheikCrystal* Collectible);
		bool IsOwnedCollectible(class ASheikCrystal* Collectible);
		static UClass* StaticClass();
	};

	/**
	 * Class Sheik.SheikDailyRepStrategy
	 * Size -> 0x0008 (FullSize[0x0030] - InheritedSize[0x0028])
	 */
	class USheikDailyRepStrategy : public UObject
	{
	public:
		unsigned char                                              UnknownData_7GHV[0x8];                                   // 0x0028(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Sheik.SheikDurableStaticInteractable
	 * Size -> 0x0050 (FullSize[0x03D0] - InheritedSize[0x0380])
	 */
	class ASheikDurableStaticInteractable : public AIGItemEquipActor
	{
	public:
		unsigned char                                              UnknownData_790N[0x8];                                   // 0x0380(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    DurabilityPoints;                                        // 0x0388(0x0004) Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_K50N[0x4];                                   // 0x038C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UCapsuleComponent*                                   HitReactCapsuleComponent;                                // 0x0390(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class USkeletalMesh*>                               SkeletalMeshesToAddToCluster;                            // 0x0398(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		bool                                                       bIsTrackable;                                            // 0x03A8(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_E9JR[0x3];                                   // 0x03A9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FGameplayTag                                        OwnedTargetingTag;                                       // 0x03AC(0x0008) Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_CGTO[0x4];                                   // 0x03B4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FIGPickupDurabilityTier>                     CachedDurabilityTiers;                                   // 0x03B8(0x0010) ZeroConstructor, Transient, Protected, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_8Y0W[0x8];                                   // 0x03C8(0x0008) MISSED OFFSET (PADDING)

	public:
		void OnRep_DurabilityChanged(int32_t OldDurability);
		bool NeedsKeyToReact();
		void InteractableHasBeenHit_BP(bool bWasSuccessfulHit);
		class USkeletalMesh* GetSkeletalMeshForDurability();
		void DuarabilityMaxReached_BP();
		void BP_OnDurabilityChanged(int32_t NewDurability);
		static UClass* StaticClass();
	};

	/**
	 * Class Sheik.EasyAntiCheatClientComponent
	 * Size -> 0x0010 (FullSize[0x00C0] - InheritedSize[0x00B0])
	 */
	class UEasyAntiCheatClientComponent : public UActorComponent
	{
	public:
		unsigned char                                              UnknownData_WE4T[0x10];                                  // 0x00B0(0x0010) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Sheik.EasyAntiCheatServerComponent
	 * Size -> 0x0010 (FullSize[0x00C0] - InheritedSize[0x00B0])
	 */
	class UEasyAntiCheatServerComponent : public UActorComponent
	{
	public:
		unsigned char                                              UnknownData_2X0Z[0x10];                                  // 0x00B0(0x0010) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Sheik.SheikEdgeNavLinks
	 * Size -> 0x0000 (FullSize[0x0270] - InheritedSize[0x0270])
	 */
	class ASheikEdgeNavLinks : public AIGEdgeNavLink
	{
	public:
		void GenerateLinks();
		static UClass* StaticClass();
	};

	/**
	 * Class Sheik.SheikEdgeNavLinksRenderingComponent
	 * Size -> 0x0000 (FullSize[0x0460] - InheritedSize[0x0460])
	 */
	class USheikEdgeNavLinksRenderingComponent : public UNavLinkRenderingComponent
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Sheik.SheikEditorOnlyActor
	 * Size -> 0x0000 (FullSize[0x0220] - InheritedSize[0x0220])
	 */
	class ASheikEditorOnlyActor : public AActor
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Sheik.SheikWidgetBase
	 * Size -> 0x00A0 (FullSize[0x04B8] - InheritedSize[0x0418])
	 */
	class USheikWidgetBase : public UIGUI_WidgetBase
	{
	public:
		bool                                                       bIsActivated;                                            // 0x0418(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bHasInputGroup;                                          // 0x0419(0x0001) Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_3507[0x6];                                   // 0x041A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FInputGroup                                         InputGroup;                                              // 0x0420(0x0098) Edit, BlueprintVisible, DisableEditOnTemplate, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected

	public:
		void UpdateInputGroup();
		void SetActivated(bool bActivated);
		void OnDeactivated();
		void OnActivated();
		void GetNavigableWidgets(TArray<class UIGUI_WidgetBase*>* NavigableWidgets);
		void FocusWidgetForInputGroup(class UIGUI_WidgetBase* Widget, int32_t UserIndex);
		void Deactivate();
		void Activate();
		static UClass* StaticClass();
	};

	/**
	 * Class Sheik.SheikEmotePage
	 * Size -> 0x0038 (FullSize[0x04F0] - InheritedSize[0x04B8])
	 */
	class USheikEmotePage : public USheikWidgetBase
	{
	public:
		bool                                                       bCanLoadWhileInactive;                                   // 0x04B8(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_5IXI[0x37];                                  // 0x04B9(0x0037) MISSED OFFSET (PADDING)

	public:
		void ReleaseLoadedEmotes();
		void OnEmoteMontageLoadFailed();
		void OnEmoteMontageLoadComplete(class UIGMoveMontage* LoadedMontage);
		void LoadEmoteMontage();
		void HandleOnEmoteMontageLoadComplete();
		static UClass* StaticClass();
	};

	/**
	 * Class Sheik.SheikEndOfMatchCallbacks
	 * Size -> 0x0058 (FullSize[0x0108] - InheritedSize[0x00B0])
	 */
	class USheikEndOfMatchCallbacks : public UActorComponent
	{
	public:
		class FScriptMulticastDelegate                             OnFollowingPlayerDied;                                   // 0x00B0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnTeamDied;                                              // 0x00C0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class ASheikPlayerStateCommon*                             FollowingPlayerState;                                    // 0x00D0(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class ASheikPlayerStateCommon*                             OldFollowingPlayerState;                                 // 0x00D8(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class USheikGameInstance*                                  SheikGameInstance;                                       // 0x00E0(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      SpectatorInfoUpdateTimeoutDuration;                      // 0x00E8(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_QGK3[0x4];                                   // 0x00EC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTimerHandle                                        SetViewTargetTimer;                                      // 0x00F0(0x0008) NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bHasTeammatesStillAlive;                                 // 0x00F8(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_L5L6[0xF];                                   // 0x00F9(0x000F) MISSED OFFSET (PADDING)

	public:
		void StartSpectating();
		void SetUsingFollowPlayerView(bool UseFollowPlayerView);
		void SetPlayerControllerToSpectatorMode();
		void SetAllowSpectatorMovement(bool AllowMovement);
		void RespawnCharacter();
		void OnTeamDied__DelegateSignature();
		void OnFollowingPlayerDied__DelegateSignature();
		int32_t NumOfTeammatesStillAlive();
		bool IsUsingFollowPlayerView();
		bool IsSpectatorMovementAllowed();
		bool IsSpectatingSelf();
		bool IsLocalPlayerWinner();
		bool IsInFreeCam();
		bool IsInATeam();
		void InitializeLocalPlayerControllerDelegates();
		bool HasTeammatesWhoAreStillAlive();
		void HandleOnSpectatorInfoUpdateTimeout();
		void HandleOnPlayerFollowingChanged(bool IsFollowingPlayer);
		void HandleOnKnockoutOccurred(const struct FIGKnockOutData& KnockOutData);
		void HandleOnFollowingPlayerStateDied();
		void HandleOnEnteredSpectatorMode();
		void HandleOldSpectatorInfoUpdated(const struct FSheikSpectatorInfo& NewSpectatorInfo);
		TArray<class AIGPlayerState*> GetWinners();
		void GetTeammatesStats(TArray<struct FSheikPlayerStateStatInfo>* OutTeammateStats);
		TArray<class AIGPlayerState*> GetTeammates();
		TArray<struct FSheikPlayerStat> GetLocalPlayerStats();
		void FollowNextPlayerFromPlayerState(class ASheikPlayerStateCommon* CurrentPlayerState);
		void FollowNextPlayer();
		void EnterFreeCam();
		void ConvertPlayerStatsToUIStats(TArray<struct FSheikPlayerDataStat>* InPlayerStats, TArray<struct FSheikPlayerStat>* OutPlayerStats);
		static UClass* StaticClass();
	};

	/**
	 * Class Sheik.SheikEOMAnnouncementProcessor
	 * Size -> 0x0050 (FullSize[0x0078] - InheritedSize[0x0028])
	 */
	class USheikEOMAnnouncementProcessor : public UObject
	{
	public:
		bool                                                       bShouldShowFanAnnouncementsDuringMatch;                  // 0x0028(0x0001) ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_09G2[0x4F];                                  // 0x0029(0x004F) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Sheik.SheikErrorManager
	 * Size -> 0x0048 (FullSize[0x0070] - InheritedSize[0x0028])
	 */
	class USheikErrorManager : public UObject
	{
	public:
		TWeakObjectPtr<class USheikGameInstance>                   GameInstance;                                            // 0x0028(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_1OZJ[0x40];                                  // 0x0030(0x0040) MISSED OFFSET (PADDING)

	public:
		struct FSheikError GetLogoutError();
		void DoLogoutError(const struct FSheikError& Error);
		void ConsumeNetworkLogout(bool* LogoutOccurred, class FText* HeaderText, class FText* BodyText);
		void ClearLogoutError();
		static UClass* StaticClass();
	};

	/**
	 * Class Sheik.SheikEventRewardSetData
	 * Size -> 0x0040 (FullSize[0x0070] - InheritedSize[0x0030])
	 */
	class USheikEventRewardSetData : public UDataAsset
	{
	public:
		TArray<struct FIGConsumableBoost>                          IGModsToApply;                                           // 0x0030(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FIGConsumableCoreBoost>                      ShiekModsToApply;                                        // 0x0040(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic
		int32_t                                                    NumPerkRewards;                                          // 0x0050(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_WKQA[0x4];                                   // 0x0054(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UIGPerkDataList*                                     PerksToRandomize;                                        // 0x0058(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      FameForFirst;                                            // 0x0060(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      FameForSecond;                                           // 0x0064(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      FameForThird;                                            // 0x0068(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_5O99[0x4];                                   // 0x006C(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Sheik.SheikEventHistoryWidget
	 * Size -> 0x0018 (FullSize[0x0430] - InheritedSize[0x0418])
	 */
	class USheikEventHistoryWidget : public UIGUI_WidgetBase
	{
	public:
		TArray<class USheikEventLineWidget*>                       LinesArray;                                              // 0x0418(0x0010) Edit, BlueprintVisible, ExportObject, ZeroConstructor, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected
		class UVerticalBox*                                        EventHistoryVerticalBox;                                 // 0x0428(0x0008) Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected

	public:
		void AddTextToEventLine(const class FText& EventText);
		static UClass* StaticClass();
	};

	/**
	 * Class Sheik.SheikEventLineWidget
	 * Size -> 0x0000 (FullSize[0x0418] - InheritedSize[0x0418])
	 */
	class USheikEventLineWidget : public UIGUI_WidgetBase
	{
	public:
		void ShowEvent(const class FText& EventText);
		void ShiftDown();
		class FText GetEventText();
		static UClass* StaticClass();
	};

	/**
	 * Class Sheik.SheikEventSplineActor
	 * Size -> 0x0010 (FullSize[0x0230] - InheritedSize[0x0220])
	 */
	class ASheikEventSplineActor : public AActor
	{
	public:
		bool                                                       ShouldOverrideBeaconTuningValues;                        // 0x0220(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_UBTV[0x3];                                   // 0x0221(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      CollectibleActorSpacing;                                 // 0x0224(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    BetterCollectibleFrequency;                              // 0x0228(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_PM05[0x4];                                   // 0x022C(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Sheik.SheikExecManager
	 * Size -> 0x0008 (FullSize[0x0030] - InheritedSize[0x0028])
	 */
	class USheikExecManager : public UObject
	{
	public:
		unsigned char                                              UnknownData_1BZH[0x8];                                   // 0x0028(0x0008) MISSED OFFSET (PADDING)

	public:
		void ExecTriggerErrorTelemetry(int32_t SystemInt, int32_t SourceInt, int32_t CallCode, int32_t ErrorCode);
		void ExecTestErrorPopup(int32_t SystemInt, int32_t SourceInt, int32_t CallCode, int32_t ErrorCode);
		void ExecTestCozmoBanFlow(const class FString& Reason, const class FString& Expiration, int32_t Duration);
		void ExecStats_UploadSingle_Client();
		void ExecStats_UploadSeasonalStats();
		void ExecStats_UploadCurrentStatsAsSeason(EIGSeasonIdentifier Season);
		void ExecStats_SetAndUploadStatValue_Client(const class FString& StatBaseName, float LifetimeValue, float WatermarkValue, float LiveSeasonLifetimeValue, float LiveSeasonWatermarkValue);
		void ExecStats_ResetSeasonalStatsOnCozmo(EIGSeasonIdentifier Season);
		void ExecStats_ResetAllStatsForLocalPlayer_Client();
		void ExecStats_PrintStatsGameInstance_Client();
		void ExecStats_PrintSingleStat(const class FString& StatBaseName);
		void ExecStats_PrintAllStatBaseNames();
		void ExecStats_DownloadSpecificStatField_Client(const class FString& StatBaseName, const class FString& StatField);
		void ExecStats_DownloadSingle_Client();
		void ExecStats_DownloadSeasonalStats(EIGSeasonIdentifier Season);
		void ExecStats_ClearSeasonalStatsCache();
		void ExecShowNoticesPopup();
		void ExecSheikToggleOverlay(const class FString& OverlayName, bool bOn);
		void ExecSheikSetPresence(int32_t PresenceInt);
		void ExecSheikSetEOSConnectionStatus(int32_t Status);
		void ExecSheikRefreshPresence(const class FString& ID);
		void ExecSheikGetPresence(const class FString& ID);
		void ExecSheikAccountsEOSShowBlockUI(const class FString& EOSId);
		void ExecSetLoginQueueOverride(int32_t TicketId, int32_t ServingNumber, int32_t PollingIntervalSeconds);
		void ExecRep_SetWeeklyChallengeState(const class FString& WeekNumberOrLabel, bool bEnabled);
		void ExecRep_SetAndUploadRepProgress_Client(const class FString& RepName, float ProgressValue, float Completed);
		void ExecRedeemCodes(const class FString& CommaSeparatedCodes);
		void ExecQuerySingleUserInfo(const class FString& EOSId);
		void ExecQueryExternalUserId(const class FString& ExternalId);
		void ExecKWSResetAdultSave();
		void ExecKWSQueryKidRequirements();
		void ExecKWSCommitParentEmail(const class FString& ParentEmail);
		void ExecKWSCommitDOB(int32_t Month, int32_t Day, int32_t Year);
		void ExecClearRecentPlayers();
		void ExecAttemptLogout();
		void ExecAttemptEOSLogin(const class FString& ID, const class FString& Token);
		void ExecAttemptCozmoLogin();
		void ExecAddRecentPlayer(const class FString& EasId, ESheikPlatformService PlatformService);
		void DebugInputSubscriberDataMap(bool bEnabled);
		static UClass* StaticClass();
	};

	/**
	 * Class Sheik.SheikFallDistItemDispenserActor
	 * Size -> 0x0018 (FullSize[0x0410] - InheritedSize[0x03F8])
	 */
	class ASheikFallDistItemDispenserActor : public AIGItemDispenserActor
	{
	public:
		TArray<struct FFallHeightLootData>                         FallHeightLootGroups;                                    // 0x03F8(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		int32_t                                                    LastFallHeightLootIndex;                                 // 0x0408(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_UUCS[0x4];                                   // 0x040C(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Sheik.SheikFanCloutAnnouncementWidget
	 * Size -> 0x0258 (FullSize[0x08C0] - InheritedSize[0x0668])
	 */
	class USheikFanCloutAnnouncementWidget : public USheikAnnouncementWidget
	{
	public:
		int32_t                                                    NumLevelsGained;                                         // 0x0668(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		int32_t                                                    LevelIndex;                                              // 0x066C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      TimePerLevelUp;                                          // 0x0670(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      LoopLevelUpDelay;                                        // 0x0674(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      PostLevelUpDelay;                                        // 0x0678(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      PlayRate;                                                // 0x067C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      TimeToFillClout;                                         // 0x0680(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      TimeToShowAllLevels;                                     // 0x0684(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UTextBlock*                                          CurrentLevelTextBlock;                                   // 0x0688(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UTextBlock*                                          NextLevelTextBlock;                                      // 0x0690(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UTextBlock*                                          FanMailTextBlock;                                        // 0x0698(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UImage*                                              CurrentLevelIcon;                                        // 0x06A0(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UImage*                                              NextLevelIcon;                                           // 0x06A8(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FSheikPayload                                       AnnouncementPayload;                                     // 0x06B0(0x01E0) Edit, BlueprintVisible, Protected, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_4V4G[0x30];                                  // 0x0890(0x0030) MISSED OFFSET (PADDING)

	public:
		void ShowPlayerLeveling();
		void SetLevelUpTiming();
		void SetInitialCloutBarData(bool ShowIcons);
		void SetFinalCloutBarData(bool ShowIcons);
		void SetFanMailText();
		void SetCloutBarData(int32_t CurrentLevel, int32_t NextLevel, bool ShowIcons);
		float GetProgressBarUpdateTime();
		static UClass* StaticClass();
	};

	/**
	 * Class Sheik.SheikFansService
	 * Size -> 0x0030 (FullSize[0x0058] - InheritedSize[0x0028])
	 */
	class USheikFansService : public UObject
	{
	public:
		class USheikGameInstance*                                  SheikGameInstance;                                       // 0x0028(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_Q0K9[0x28];                                  // 0x0030(0x0028) MISSED OFFSET (PADDING)

	public:
		void HandleOnRingFinishedClosingSumFansAndNotify(int32_t Time);
		void HandleOnKnockoutOccurredPotentiallyAwardFans(const struct FIGKnockOutData& KnockOutData);
		void CalculateFansAccrued();
		static UClass* StaticClass();
	};

	/**
	 * Class Sheik.SheikFinalRoundBeacon
	 * Size -> 0x0020 (FullSize[0x0240] - InheritedSize[0x0220])
	 */
	class ASheikFinalRoundBeacon : public AActor
	{
	public:
		bool                                                       IsCircle;                                                // 0x0220(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIgnoreFromPool;                                         // 0x0221(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_23J6[0x2];                                   // 0x0222(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      RingRadius;                                              // 0x0224(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      DebugHeightOffset;                                       // 0x0228(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    DebugNumCircleSegments;                                  // 0x022C(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FColor                                              DebugRingColor;                                          // 0x0230(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      DebugRingThickness;                                      // 0x0234(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       IsDisabledForDemo;                                       // 0x0238(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_TY6Z[0x7];                                   // 0x0239(0x0007) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Sheik.SheikCTFBeacon
	 * Size -> 0x0010 (FullSize[0x0230] - InheritedSize[0x0220])
	 */
	class ASheikCTFBeacon : public AActor
	{
	public:
		struct FVector2D                                           RingSideLengths;                                         // 0x0220(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                MapLoadTag;                                              // 0x0228(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Sheik.SheikFriendsManager
	 * Size -> 0x00C8 (FullSize[0x00F0] - InheritedSize[0x0028])
	 */
	class USheikFriendsManager : public UObject
	{
	public:
		class FScriptMulticastDelegate                             OnFriendsListUpdated;                                    // 0x0028(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnBlockedPlayersUpdated;                                 // 0x0038(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnFriendPresenceUpdated;                                 // 0x0048(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnShowPlatformProfileUIComplete;                         // 0x0058(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_R8AZ[0x88];                                  // 0x0068(0x0088) MISSED OFFSET (PADDING)

	public:
		void UnblockPlayer(const struct FSheikPlayerAccount& Account, const class FScriptDelegate& Callback);
		void OnUnblockPlayerDelegate__DelegateSignature(bool bWasSuccessful, const struct FSheikError& Error, const class FString& CozmoId);
		void OnFriendsListUpdated__DelegateSignature(bool bSuccessful);
		void OnFriendPresenceUpdated__DelegateSignature(const struct FSheikPlayerAccount& Account);
		void OnBlockPlayerDelegate__DelegateSignature(bool bWasSuccessful, const struct FSheikError& Error, const class FString& CozmoId);
		void OnBlockedPlayersUpdated__DelegateSignature();
		TArray<struct FSheikPlayerAccount> GetFriendsList();
		TArray<struct FSheikPlayerAccount> GetBlockedPlayers();
		TArray<struct FSheikCozmoAccount> GetBlockedCozmoPlayers();
		TArray<struct FSheikCozmoAccount> GetBlockedByCozmoPlayers();
		void DisplayPlatformPlayerProfileUI(const struct FSheikPlayerAccount& Account);
		void BlockPlayer(const struct FSheikPlayerAccount& Account, const class FScriptDelegate& Callback);
		static UClass* StaticClass();
	};

	/**
	 * Class Sheik.SheikFrontendPersistentScreen
	 * Size -> 0x0028 (FullSize[0x04A8] - InheritedSize[0x0480])
	 */
	class USheikFrontendPersistentScreen : public UIGUI_ScreenBase
	{
	public:
		class FScriptMulticastDelegate                             OnConfirmStartRestrictedMatch;                           // 0x0480(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, Protected, BlueprintCallable, NativeAccessSpecifierProtected
		class FScriptMulticastDelegate                             OnConfirmJoinRestrictedMatch;                            // 0x0490(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, Protected, BlueprintCallable, NativeAccessSpecifierProtected
		bool                                                       bHasActivityEventPending;                                // 0x04A0(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_BHNS[0x7];                                   // 0x04A1(0x0007) MISSED OFFSET (PADDING)

	public:
		void RedirectFromBattlePassToVirtualCurrency(int32_t PriceToReach);
		void OpenSocialMenu();
		void OpenSettingsMenu();
		void NavigateToTabIndex(int32_t TabIndex);
		void NavigateToTabClass();
		bool IsTabInputEnabled();
		void HandleOnPartyMatchmakingStopped(bool bIsLeader);
		void HandleOnPartyMatchmakingStarted(const class FString& ConfigurationName, bool bIsLeader);
		void HandleOnPartyMatchmakingFound(bool bIsLeader);
		void HandleOnPartyMatchmakingError(const class FText& ErrorText, bool bIsPartyLeader);
		void HandleFocusChanged(bool bIsContextMenuFocused);
		int32_t GetTabIndexFromScreen();
		void ExitSocialMenu();
		void ExitSettingsMenu();
		void ExitGameModesMenu();
		void EnableTabInput(bool bEnableInput, bool bAllowChangeWhileLoading);
		void EnableSocialMenuInput(bool bEnableInput);
		void EnableSettingsMenuInput(bool bEnableInput);
		void DisablePersistentWidgets(bool bHideBattlePass, bool bHideTabs, bool bHideAccountInfo);
		static UClass* StaticClass();
	};

	/**
	 * Class Sheik.SheikGameInfo
	 * Size -> 0x03E0 (FullSize[0x07A0] - InheritedSize[0x03C0])
	 */
	class USheikGameInfo : public UIGGameInfo
	{
	public:
		unsigned char                                              UnknownData_UNDE[0x10];                                  // 0x03C0(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnHealthChanged;                                         // 0x03D0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnStaminaChanged;                                        // 0x03E0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnSpecialStatusChanged;                                  // 0x03F0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnFameChanged;                                           // 0x0400(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnSuperstarModeChanged;                                  // 0x0410(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnKOInsuranceActivated;                                  // 0x0420(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnTeammateKoInsuranceActivated;                          // 0x0430(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnPerkXPChanged;                                         // 0x0440(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnToggleShowPerkXPMeter;                                 // 0x0450(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnNumPlayersAliveChanged;                                // 0x0460(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnNumTeamsAliveChanged;                                  // 0x0470(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnGameFlowStateChanged;                                  // 0x0480(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             DebugUpdateBRTimelineDispatcher;                         // 0x0490(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnRingOutTimeChanged;                                    // 0x04A0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnTimeTillLaunchChanged;                                 // 0x04B0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnTimeTillFreeRoamEnd;                                   // 0x04C0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnSheikModValueChanged;                                  // 0x04D0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnRingStartsShrinking;                                   // 0x04E0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnRoundFinished;                                         // 0x04F0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnFinalRingState;                                        // 0x0500(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnPlayerEnterOrExitRing;                                 // 0x0510(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnRingStartsWaiting;                                     // 0x0520(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnEventStart;                                            // 0x0530(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnEventEnd;                                              // 0x0540(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnEventScoreChanged;                                     // 0x0550(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnEventVictoryRewarded;                                  // 0x0560(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnEventCountdownStart;                                   // 0x0570(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnEventParticipate;                                      // 0x0580(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnEventCountdownDisplayTimeChanged;                      // 0x0590(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnEventEndDisplayTimeChanged;                            // 0x05A0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnPinEvent;                                              // 0x05B0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnPinMinigameInputSuccessEvent;                          // 0x05C0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnDemoRingsValueChanged;                                 // 0x05D0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnFinalRingOverrideChange;                               // 0x05E0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnThrownItemTargetingPlayer;                             // 0x05F0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnThrownItemNoLongerTargetingPlayer;                     // 0x0600(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnRepProgressThresholdPassed;                            // 0x0610(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnTeamCannonLaunchAimStarted;                            // 0x0620(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnSuddenDeathRingStartsShrinking;                        // 0x0630(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnSuddenDeathRingShrinkHalt;                             // 0x0640(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnSuddenDeathRingState;                                  // 0x0650(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnSheikModValueLimitReached;                             // 0x0660(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnSheikModValueExceededLimit;                            // 0x0670(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnNewCratesDropped;                                      // 0x0680(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnBargeEntered;                                          // 0x0690(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnBargeBanterEvent;                                      // 0x06A0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnWaterInstantKill;                                      // 0x06B0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnPlayerBouncedOnSpringboard;                            // 0x06C0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnPingAtLocation;                                        // 0x06D0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnRemoveCurrentMinimapPing;                              // 0x06E0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnPingExpired;                                           // 0x06F0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnEnterPingMode;                                         // 0x0700(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnExitPingMode;                                          // 0x0710(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnKOInsuranceAllowedChanged;                             // 0x0720(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnPlaygroundModeBegin;                                   // 0x0730(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnRequestRespawn;                                        // 0x0740(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnPlayerHitGroundTarget;                                 // 0x0750(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		int32_t                                                    RingOutTimeUIDisplayed;                                  // 0x0760(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    TimeTillLaunchDisplayed;                                 // 0x0764(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    TimeTillFreeRoamEndDisplayed;                            // 0x0768(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    EventCountdownDisplayTime;                               // 0x076C(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    EventEndDisplayTime;                                     // 0x0770(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      DistanceFromEventZoneToBeConsideredNearby;               // 0x0774(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_LYD2[0x28];                                  // 0x0778(0x0028) MISSED OFFSET (PADDING)

	public:
		bool ShouldShowPerkXPMeter();
		float GetSheikModValue(ESheikModValueType Type);
		static UClass* StaticClass();
	};

	/**
	 * Class Sheik.SheikModeDescriptorsAsset
	 * Size -> 0x0050 (FullSize[0x0080] - InheritedSize[0x0030])
	 */
	class USheikModeDescriptorsAsset : public UDataAsset
	{
	public:
		TMap<class FName, struct FSheikModeDescriptors>            ModeDescriptorMap;                                       // 0x0030(0x0050) Edit, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Sheik.SheikGameInstance
	 * Size -> 0x0B40 (FullSize[0x0DD8] - InheritedSize[0x0298])
	 */
	class USheikGameInstance : public UIGGameInstance
	{
	public:
		bool                                                       SpectatorModeEnabled;                                    // 0x0298(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bShouldShowNetworkFailure;                               // 0x0299(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bNetworkFailureWaitingOnTravel;                          // 0x029A(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ENetworkFailure                                            LastNetworkFailure;                                      // 0x029B(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_FZJD[0x4];                                   // 0x029C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FIGSpawnDefaultsData                                SelectedSpawnDefault;                                    // 0x02A0(0x05F0) BlueprintVisible, NativeAccessSpecifierPublic
		ESheikBuildConfig                                          BuildConfig;                                             // 0x0890(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_DOLJ[0x7];                                   // 0x0891(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              PlayerSessionId;                                         // 0x0898(0x0010) BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FMatchStartOptions                                  MatchStartOptions;                                       // 0x08A8(0x0060) NativeAccessSpecifierPublic
		class FString                                              CozmoMatchmakingConfig;                                  // 0x0908(0x0010) BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_QQSL[0x18];                                  // 0x0918(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnKeybindingsChanged;                                    // 0x0930(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, BlueprintCallable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_XULJ[0x20];                                  // 0x0940(0x0020) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnOpeningSplashMovieFinishedDelegate;                    // 0x0960(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnPendingPartyInvite;                                    // 0x0970(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		bool                                                       bIsShowingLoadingScreen;                                 // 0x0980(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIsWaitingOnClientTravel;                                // 0x0981(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_3V88[0x6];                                   // 0x0982(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class USheikModeDescriptorsAsset*                          ModeDescriptorAsset;                                     // 0x0988(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              LoadingScreenClass[0x28];                                // 0x0990(0x0028) UNKNOWN PROPERTY: SoftClassProperty
		class UClass*                                              RepAccrualInfoClass;                                     // 0x09B8(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UClass*                                              FanMailInfo;                                             // 0x09C0(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UClass*                                              RedemptionCodeManagerClass;                              // 0x09C8(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UClass*                                              BattlePassSeasonsMapClass;                               // 0x09D0(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UClass*                                              TitleCardDataManagerClass;                               // 0x09D8(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UIGDataTable*                                        TitleCardFTUELoadouts;                                   // 0x09E0(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class USheikSkillCalculationSettings*                      SkillCalculationSettings;                                // 0x09E8(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class USheikMatchmakingSkillData*                          MatchmakingSkillData;                                    // 0x09F0(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnSetSubtitleTextDelegate;                               // 0x09F8(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnViewportResizeDelegate;                                // 0x0A08(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnNewRepAcquired;                                        // 0x0A18(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_6EU5[0x10];                                  // 0x0A28(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnApplicationWillDeactivateDelegate;                     // 0x0A38(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnApplicationHasReactivatedDelegate;                     // 0x0A48(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnApplicationWillEnterBackgroundDelegate;                // 0x0A58(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnApplicationHasEnteredForegroundDelegate;               // 0x0A68(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnApplicationWillTerminateDelegate;                      // 0x0A78(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnPlatformActiveUserChangedDelegate;                     // 0x0A88(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_J49P[0x8];                                   // 0x0A98(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnControllerConnectionChanged;                           // 0x0AA0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnEnterGameMapDelegate;                                  // 0x0AB0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnLeaveGameMapDelegate;                                  // 0x0AC0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnEnterFrontendMapDelegate;                              // 0x0AD0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnHudRegionVisibilityChanged;                            // 0x0AE0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, BlueprintCallable, NativeAccessSpecifierPublic
		TMap<class FString, class FScriptDelegate>                 RegisteredBPCalls;                                       // 0x0AF0(0x0050) BlueprintVisible, BlueprintReadOnly, ContainsInstancedReference, NativeAccessSpecifierPublic
		class FName                                                StoreTablesPath;                                         // 0x0B40(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnRestrictedMatchHideMatchCodeChanged;                   // 0x0B48(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnUpdateTeamFillSettings;                                // 0x0B58(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_SCLS[0x38];                                  // 0x0B68(0x0038) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class USheikExecManager*                                   ExecManager;                                             // 0x0BA0(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class USheikConsolePresenceManager*                        ConsolePresenceManager;                                  // 0x0BA8(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class USheikStatsAdapter*                                  SheikStatsAdapter;                                       // 0x0BB0(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class USheikLoadingScreen*                                 LoadingScreen;                                           // 0x0BB8(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class USheikCallbacksManager*                              CallbacksManager;                                        // 0x0BC0(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class USheikPartyManager*                                  PartyManager;                                            // 0x0BC8(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class USheikErrorManager*                                  ErrorManager;                                            // 0x0BD0(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class USheikFriendsManager*                                FriendsManager;                                          // 0x0BD8(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class USheikNoticesManager*                                NoticesManager;                                          // 0x0BE0(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class USheikNotificationsManager*                          NotificationsManager;                                    // 0x0BE8(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class USheikPlayerData*                                    PlayerData;                                              // 0x0BF0(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class USheikPlayerAccountsManager*                         PlayerAccountsManager;                                   // 0x0BF8(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_HPGJ[0x10];                                  // 0x0C00(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class USheikPlayerDataManager*                             PlayerDataManager;                                       // 0x0C10(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class USheikSeasonalStatsManager*                          SeasonalStatsManager;                                    // 0x0C18(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class USheikRepSystem*                                     RepSystem;                                               // 0x0C20(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class USheikUITitleStorageInterface*                       UITitleStorageInterface;                                 // 0x0C28(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class USheikLoginManager*                                  LoginManager;                                            // 0x0C30(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class USheikAgeGatingManager*                              AgeGatingManager;                                        // 0x0C38(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class USheikRedemptionCodeManager*                         RedemptionCodeManager;                                   // 0x0C40(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class USheikTitleCardDataManager*                          TitleCardDataManager;                                    // 0x0C48(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class USheikProgressionSystem*                             ProgressionSystem;                                       // 0x0C50(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class USheikHotfixSystem*                                  HotfixSystem;                                            // 0x0C58(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class USheikSavedSettings*                                 SheikSavedSettings;                                      // 0x0C60(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class USheikLiveOpsSystem*                                 SheikLiveOps;                                            // 0x0C68(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_3XTA[0x8];                                   // 0x0C70(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class USheikPlayerSkillManager*                            SkillManager;                                            // 0x0C78(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bIsAutomatingMatchmaking;                                // 0x0C80(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bIsStressingMatchmaking;                                 // 0x0C81(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_X3OG[0x2];                                   // 0x0C82(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    AutomaticMatchmakingOption;                              // 0x0C84(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_0W80[0x10];                                  // 0x0C88(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class USheikStatsSystem*                                   StatsSystem;                                             // 0x0C98(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_5JSB[0x78];                                  // 0x0CA0(0x0078) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              SheikCableHandler[0x28];                                 // 0x0D18(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		unsigned char                                              SheikCaptureManager[0x28];                               // 0x0D40(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		unsigned char                                              UnknownData_VLMQ[0x8];                                   // 0x0D68(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TWeakObjectPtr<class ASheikGameMonitorManager>             RegisteredGameMonitorManager;                            // 0x0D70(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_WE0M[0x8];                                   // 0x0D78(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TMap<class FString, struct FSettingChangeEventData>        SettingChangeEventsBySettingName;                        // 0x0D80(0x0050) NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_57WO[0x8];                                   // 0x0DD0(0x0008) MISSED OFFSET (PADDING)

	public:
		void UpdateTeamFillSettings(bool bTeamFillToggle);
		void UpdateRerollAllowanceForUI();
		void UpdateRepAllowanceForUI();
		void UnregisterExecBPCall(const class FString& CallName);
		void TestUpdatePlayerAttributeData(const class FString& PlayerName, int32_t PlatformService, int32_t CloutLevel, int32_t PlayerSkill, int32_t CrossPlaySettingEnabled);
		void TestUpdateFriends();
		void TestUnlockRestrictedMatchCreationEntitlement();
		void TestSpectatorMode(bool bEnable);
		void TestShowPlayerProfileUI(const class FString& PlayerId);
		void TestShowPartyInviteUI();
		void TestSendMessageToParty(const class FString& Message);
		void TestSaveRecentPlayers();
		void TestNetworkFailure(const class FString& FailureType, bool bLoadIntoFrontend);
		void TestLogVoiceUserInfo();
		void TestLogPartyInfo();
		void TestLogFriendsList();
		void TestLeaveParty();
		void TestKickPlayerFromParty(const class FString& PlayerId);
		void TestJoinParty(const class FString& PartyId);
		void TestInviteToCozmoParty(const class FString& PlayerId);
		void TestEndOfMatchBonusCalculations();
		void TestEndMatchmaking(bool FoundMatch);
		void TestCreateParty(bool bCreatePlatformParty);
		void TestCloutCalculation(int32_t Fans);
		bool ShouldSkipToSpectator();
		bool ShouldSkipEOMAutomatically();
		void SheikPlatformActiveUserChangedDelegate__DelegateSignature();
		void SheikOnViewportResizeDelegate__DelegateSignature();
		void SheikOnSetSubtitleTextDelegate__DelegateSignature(const class FText& SubtitleText);
		void SheikApplicationLifetimeDelegate__DelegateSignature();
		void SetupForSmokeTest(const class FString& TaskName, bool bForever);
		void SetupAutomaticMatchmaking(int32_t MatchmakingIndex);
		void SetSpawnDefaultPlayerName(const class FString& InName);
		void SetRestrictedMatchHideMatchCode(bool bHideInviteCode);
		bool SavePlayerData();
		bool ReRoll(const class FName& RepName, struct FRepUIData* OutNewRep);
		void ReportQueuedSettingChangeTelemetry();
		void ReportPlayer(const struct FSheikPlayerAccount& ReportedPlayer, EReportReason ReportReason, const class FScriptDelegate& OnComplete);
		void ReportAutomaticSettingDetectionTelemetry();
		void RegisterExecBPCall(const class FString& CallName, const class FScriptDelegate& Delegate);
		void QueueSettingChangeTelemetry(const class FString& SettingCategory, const class FString& SettingName, const class FString& OldValue, const class FString& NewValue);
		void PostErrorTelemetryEvent(ESheikErrorSource ErrorSource, ESheikErrorSystem ErrorSystem, int32_t CallCode, int32_t ErrorCode);
		void PickRandomAccessories(bool bForceAccessorySet);
		void OverrideChangelist(int32_t OverrideCl);
		void OnWorldCompositionWentIdleCallback();
		void OnWorldCompositionHighPriorityWentIdleCallback();
		void OnUpdateTeamFillSettings__DelegateSignature(bool bTeamFillToggle);
		void OnTitleScreenEnter();
		void OnSplashMovieFinished__DelegateSignature();
		void OnSetSubtitleText(const class FText& SubtitleText);
		void OnSendPlayerBehaviorReportCompleteCallback__DelegateSignature(bool bWasSuccessful, const struct FSheikError& Error);
		void OnRestrictedMatchHideMatchCodeChanged__DelegateSignature(bool bHideInviteCode);
		void OnPreLoadMap(const class FString& MapName);
		void OnPreClientTravel(const class FString& PendingURL, ETravelType TravelType, bool bIsSeamlessTravel);
		void OnPostLoadMap(class UWorld* InLoadedWorld);
		void OnPendingPartyInvite__DelegateSignature();
		void OnNewRepAcquired__DelegateSignature(const struct FRepUIData& OutNewRep);
		void OnLeaveGameMapDelegate__DelegateSignature();
		void OnHotfixStatsUpdated(const struct FHotfixStatistics& InStats);
		void OnFrontendExit();
		void OnFrontendEnter();
		void OnExecBPCall__DelegateSignature(const class FString& Argument1, const class FString& Argument2, const class FString& Argument3, const class FString& Argument4);
		void OnEnterGameMapDelegate__DelegateSignature();
		void OnEnterFrontendMapDelegate__DelegateSignature();
		void OnEditorProgressionDataRetrieved(bool bSuccessful, const struct FSheikError& Error);
		void OnControllerConnectionChanged__DelegateSignature(bool bConnected, int32_t PlatformUserId, int32_t ControllerId);
		void OnAttemptEditorWorldCozmoLoginSuccess();
		void LoadAchievementProgressFromDisk();
		bool IsStressingMatchmaking();
		bool IsRunningFromEpicLauncher();
		bool IsRunningAutomaticMatchmaking();
		bool IsOpeningSplashMoviePlaying();
		bool IsOnConsole();
		bool IsInMatch();
		bool IsInFrontend();
		bool IsInEntry();
		bool IsDevServerAllowed();
		bool IsCurrentlyMatchmaking();
		void InitializeLiveOps();
		bool HasLiveOpsMessage();
		void HandleLocalPlayerCozmoBanned(const class FString& Reason, const class FString& Expiration, int32_t Duration);
		void HandleLoadFlowError(const class FString& ErrorString);
		void HandleApplicationWillTerminate();
		void HandleApplicationWillEnterBackground();
		void HandleApplicationWillDeactivate();
		void HandleApplicationHasReactivated();
		void HandleApplicationHasEnteredForeground();
		class USheikUITitleStorageInterface* GetUITitleStorageInterface();
		class USheikTitleCardDataManager* GetTitleCardDataManager();
		class USheikStatsAdapter* GetSheikStatsAdapter();
		class USheikSavedSettings* GetSheikSavedSettings();
		class ASheikCaptureManager* GetSheikCaptureManager();
		class USheikSeasonalStatsManager* GetSeasonalStatsManager();
		class FString GetSavedPlayerName();
		class FName GetRestrictedMatchWalletId();
		class UIGRepSystem* GetRepSystem();
		class USheikRedemptionCodeManager* GetRedemptionCodeManager();
		class USheikProgressionSystem* GetProgressionSystem();
		int32_t GetPlayerMatchmakingSkill();
		class USheikPlayerDataManager* GetPlayerDataManager();
		class USheikPlayerData* GetPlayerData();
		class USheikPlayerAccountsManager* GetPlayerAccountsManager();
		class USheikPartyManager* GetPartyManager();
		class USheikNotificationsManager* GetNotificationsManager();
		class USheikNoticesManager* GetNoticesManager();
		class USheikLoginManager* GetLoginManager();
		class USheikLoadingScreen* GetLoadingScreen();
		bool GetIsMilestoneBuild();
		bool GetIsDemoBuild();
		class USheikHotfixSystem* GetHotfixSystem();
		bool GetGroupingForRep(const class FName& RowName, struct FRepGrouping* OutRepGrouping);
		class FName GetFrontendLevelName();
		class USheikFriendsManager* GetFriendsManager();
		void GetErrorText(const struct FSheikError& Error, class FText* HeaderText, class FText* BodyText, class FText* ErrorCodeText);
		class USheikErrorManager* GetErrorManager();
		class FName GetEntryLevelName();
		EMatchConfigType GetDesiredMatchConfigTypeForPlayer();
		TArray<struct FRepUIData> GetCurrentReps();
		bool GetCozmoId(class FString* CozmoId);
		int32_t GetChangelistNumber();
		class USheikCallbacksManager* GetCallbacksManager();
		bool GetAnyRepsIfNeeded(ERepType RepType);
		class USheikAgeGatingManager* GetAgeGatingManager();
		void ExecXpBoosterManager_StopConsuming();
		void ExecXpBoosterManager_StartConsuming();
		void ExecXpBoosterManager_PrintCurrentBoosterPlusCozmoData();
		void ExecXpBoosterManager_PrintCurrentBooster();
		void ExecXpBoosterManager_ConsumeMinutesForCurrentBooster(int32_t Minutes);
		void ExecWriteToFilePlayerData();
		void ExecUploadPlayerData();
		void ExecUploadClientTrackedPlayerStats();
		void ExecUpdateRemotePlayerDataLifetimeXp(float Data);
		void ExecUpdatePlayerSympathyValue(int32_t NewSymapathyValue);
		void ExecUpdatePlayerOnboardingValue(int32_t NewOnboardingValue);
		void ExecUpdatePlayerMatchmakingRank(int32_t NewRank);
		void ExecUpdateLocalPlayerData(int32_t Type, const class FString& Data);
		void ExecUpdateAchievement(int32_t AchievementId, int32_t ProgressToIncreaseBy);
		void ExecToggleMuteVoiceOutput();
		void ExecToggleMuteVoiceInput();
		void ExecToggleFanAccrualAsSeconds(bool bUseSeconds);
		void ExecToggleDisplayPartyInfo(bool bShow);
		void ExecTitleCard_UploadTitleCardLoadout();
		void ExecTitleCard_SoftUnlockHoveredReward();
		void ExecTitleCard_SoftUnlockAllTitleCardRewards();
		void ExecTitleCard_DownloadTitleCardLoadout();
		void ExecTestFindOptimalPurchaseOfferCombination(int32_t NumTiersToPurchase);
		void ExecTestBattlePassCelebration();
		void ExecTestBattlePassCalculation(int32_t Fans);
		void ExecTestAllProgressionCalculation(int32_t Fans);
		void ExecStopAllProgression(bool StopProgression);
		void ExecStartHotfixCheck(int32_t Version);
		void ExecShowPlayerReviewDialog();
		void ExecShowCommerceDialog();
		void ExecSetVoipPlayerMute(const class FString& PlayerId, bool bIsMuted);
		void ExecSetPlayerSympathy(bool bHasSympathyMatch);
		void ExecSetFanMailCount(int32_t NewFanMailCount);
		void ExecSetFanAccrualTime(int32_t Minutes);
		void ExecSetEndOfMatchBonusLedgerMidnightToPast(EEndOfMatchBonusName BonusName);
		void ExecSetConstantNumFansPerAccrual(int32_t FansPerAccrual);
		void ExecSetAllowTeamFill(bool bAllowTeamFill);
		void ExecSetActiveVoipParty(int32_t PartyType);
		void ExecSetAccountPermissionSetting(bool bAccountPerm);
		void ExecResetProgressionToDefaultTitleStorageValues();
		void ExecResetProgressionPlacementAndRoundStatesToDefault();
		void ExecResetPlayerMatchmakingRank();
		void ExecResetLastKnownSeason();
		void ExecResetCloutProgressionLevel();
		void ExecResetBattlePassProgress();
		void ExecResetBattlePassMatchAccumulationData();
		void ExecResetAllProgression();
		void ExecResetAllCozmoEntitlements();
		void ExecRep_SetRerollAllowance(int32_t Allowance);
		void ExecRep_SetRepAllowance(int32_t Allowance);
		void ExecRep_SetLastTimeRepAcquired(int32_t MinutesBack);
		void ExecRep_SetLastTimeGainedReroll(int32_t MinutesBack);
		void ExecRep_RerollDebug();
		void ExecRep_PrintRerollAllowance();
		void ExecRep_PrintRepNames();
		void ExecRep_PrintRepLedger();
		void ExecRep_PrintRepHistory();
		void ExecRep_PrintRepAllowance();
		void ExecRep_PrintLastTimeRerollAcquired();
		void ExecRep_PrintLastTimeRepAcquired();
		void ExecRep_GetReps();
		void ExecRep_GetNewRepByName(const class FName& RepName);
		void ExecRep_GetNewRandomRep();
		void ExecRep_CompleteRepByNameOnClient(const class FName& RepName);
		void ExecRep_CompleteAllWeeklyRepsOnClient();
		void ExecRep_CompleteAllRepsOnClient();
		void ExecRep_CompleteAllFTUE();
		void ExecRep_CompleteAllDailyRepsOnClient();
		void ExecRep_ClearAllRepLedgerData();
		void ExecRep_ClaimRepByName(const class FName& RepName);
		void ExecRefreshAchievementsFromDiskAndPrint();
		void ExecQueryAchievements();
		void ExecQueryAchievementDescriptions();
		void ExecPurchaseBattlePassTiers(int32_t NumTiersToPurchase);
		void ExecPurchaseBattlePass();
		void ExecPrintSeasons();
		void ExecPrintNextCloutLevel();
		void ExecPrintEndOfMatchTracking();
		void ExecPrintCozmoId();
		void ExecPrintAchievementsFromCache();
		void ExecLogSkillValue();
		void ExecLogPlayerData();
		void ExecLogPartyMatchmakingTypes();
		void ExecLogLocalHotfixVersion();
		void ExecLoginClearAcceptedLegalDocs();
		void ExecLoadRepData();
		void ExecLeaveTeamParty();
		void ExecForceStopFanAccrual();
		void ExecForceStartFanAccrual();
		void ExecForceBattlePassTierSelected(int32_t TierId);
		void ExecFireRingStartsClosingDelegate();
		void ExecFireRingFinishedClosingDelegate();
		void ExecFireFinalRingStateDelegate();
		void ExecFindAndJoinTeamParty(const class FString& PartyGuid);
		void ExecEnableLockerRoomAdvanceMode(bool bEnabled);
		void ExecDumpClientTrackedPlayerStats();
		void ExecDownloadProgressionDataTitleStorage();
		void ExecDownloadPlayerData();
		void ExecDownloadClientTrackedPlayerStats();
		void ExecDebugRevertAllHotfixes();
		void ExecDebugRestrictedMatchLogic(bool IsRestrictedMatch);
		void ExecCreateTeamParty();
		void ExecClearRemoteData();
		void ExecCheckWillCloutLevelup();
		void ExecBPCall(const class FString& CallName, const class FString& Argument1, const class FString& Argument2, const class FString& Argument3, const class FString& Argument4);
		void ExecAllowCozmoLogging(bool bAllowLogging);
		void ExecAddVirtualCurrency(int32_t Amount);
		void DevDisableAchievements();
		void DebugTriggerFanAnnouncementWithLevelUp(int32_t CurrentLevelId, int32_t OldFanCount, int32_t NumFansToAdd, int32_t FansNeededToLevelUp, int32_t NumNewFanMail, EReasonFansAwarded ReasonFansAwarded);
		void DebugTriggerFanAnnouncementNoLevelUp(int32_t CurrentLevelId, int32_t OldFanCount, int32_t NumFansToAdd, int32_t FansNeededToLevelUp, EReasonFansAwarded ReasonFansAwarded);
		void CreateLiveOpsPopup();
		bool CommitSavedSettingsChangesForEntryMap();
		void ClearNetworkFailures();
		void ClearAndResetSettingsCacheOnProfileSwitch();
		void ClaimRep(const class FName& RepName);
		void BroadcastHotfixSystemComplete(int32_t ServerVersion);
		bool AttemptSaveAchievementProgress();
		void AttemptEditorWorldCozmoLogin(const class FScriptDelegate& OnCompleteDelegate);
		static UClass* StaticClass();
	};

	/**
	 * Class Sheik.CommonGameplaySettingsData
	 * Size -> 0x00A8 (FullSize[0x00D8] - InheritedSize[0x0030])
	 */
	class UCommonGameplaySettingsData : public UDataAsset
	{
	public:
		unsigned char                                              StatPodsMap[0x50];                                       // 0x0030(0x0050) UNKNOWN PROPERTY: MapProperty
		float                                                      Drop1stPodChance;                                        // 0x0080(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Drop2ndPodChance;                                        // 0x0084(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TMap<EMatchTeamMode, struct FCommonSetting>                TeamCommonSettings;                                      // 0x0088(0x0050) Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Sheik.BRGameplaySettingsData
	 * Size -> 0x0050 (FullSize[0x0128] - InheritedSize[0x00D8])
	 */
	class UBRGameplaySettingsData : public UCommonGameplaySettingsData
	{
	public:
		TMap<EMatchTeamMode, struct FBRSetting>                    TeamBRSettings;                                          // 0x00D8(0x0050) Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Sheik.SheikGameModeCommon
	 * Size -> 0x0280 (FullSize[0x05C0] - InheritedSize[0x0340])
	 */
	class ASheikGameModeCommon : public AIGGameMode
	{
	public:
		class UClass*                                              AIManagerClass;                                          // 0x0340(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class USheikOnlineGameMatchReporter*                       GameMatchReporter;                                       // 0x0348(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      WaitingForPlayersCountdown;                              // 0x0350(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      PercentageOfMaxPlayersBeforeAccelerate;                  // 0x0354(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      AcceleratedStateCountdown;                               // 0x0358(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      WaitToStartCountdown;                                    // 0x035C(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bAllowSkillDataUpload;                                   // 0x0360(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_T6X5[0x7];                                   // 0x0361(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnGameFlowStateUpdated;                                  // 0x0368(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		int32_t                                                    MaxAllowedSpawnedBots;                                   // 0x0378(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ServerCloseCountdownSeconds_MAX;                         // 0x037C(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bAutoRespawn;                                            // 0x0380(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_1J6F[0x3];                                   // 0x0381(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      AutoRespawnTimer;                                        // 0x0384(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_IW65[0x8];                                   // 0x0388(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class FName>                                        GameModeLoadTags;                                        // 0x0390(0x0010) Edit, ZeroConstructor, Protected, NativeAccessSpecifierProtected
		class UEasyAntiCheatServerComponent*                       ServerAntiCheat;                                         // 0x03A0(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class USheikAIManager*                                     AIManager;                                               // 0x03A8(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class USheikAISpawnerComponent*                            AISpawnerComp;                                           // 0x03B0(0x0008) Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_GBHX[0x70];                                  // 0x03B8(0x0070) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		EGameFlowState                                             GameFlowState;                                           // 0x0428(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_IJMH[0xB];                                   // 0x0429(0x000B) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		EMatchTeamMode                                             TeamMode;                                                // 0x0434(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bTeamsAssigned;                                          // 0x0435(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_UAJZ[0xE];                                   // 0x0436(0x000E) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    NumPlayerForMonitorCountdown;                            // 0x0444(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		int32_t                                                    NumSimultaneousBotSpawns;                                // 0x0448(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_CDX3[0x4];                                   // 0x044C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      LastBotSpawnTimeRemaining;                               // 0x0450(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      BotSpawnDuration;                                        // 0x0454(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_GD1V[0x18];                                  // 0x0458(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class AIGPlayerState*>                              WinningPlayers;                                          // 0x0470(0x0010) ZeroConstructor, Protected, NativeAccessSpecifierProtected
		class UCommonGameplaySettingsData*                         GameplaySettings;                                        // 0x0480(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_TJCQ[0x8F];                                  // 0x0488(0x008F) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		bool                                                       bKeepPartyIdForTeams;                                    // 0x0517(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_A67R[0x60];                                  // 0x0518(0x0060) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FSheikAISpawnerSettings                             BotSpawnSettings;                                        // 0x0578(0x0028) Edit, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_325R[0x20];                                  // 0x05A0(0x0020) MISSED OFFSET (PADDING)

	public:
		void SheikBotPlayMoveMontage(const class FString& MoveName);
		void ResetGameMatchReporter();
		void RequestPS5AccessToken();
		void OnSinglePlayerSkillDownloaded(class ASheikPlayerStateCommon* PlayerState);
		void OnGameFlowStateUpdated__DelegateSignature(EGameFlowState PreviousGameFlowState, EGameFlowState CurrentGameFlowState);
		int32_t GetTotalPlayers();
		class UCommonGameplaySettingsData* GetGameplaySettings();
		class USheikAIGameInfo* GetAIGameInfo();
		void CreateGameMatch();
		void BuildInGameRoster();
		static UClass* StaticClass();
	};

	/**
	 * Class Sheik.SheikGameModeBR
	 * Size -> 0x00A0 (FullSize[0x0660] - InheritedSize[0x05C0])
	 */
	class ASheikGameModeBR : public ASheikGameModeCommon
	{
	public:
		TArray<class USheikMapStateTimelineData*>                  TimelineAssets;                                          // 0x05C0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic
		bool                                                       bWinnerElgibleForExtraSpecial;                           // 0x05D0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_4PDU[0x3];                                   // 0x05D1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      BRLaunchCharacterSeparation;                             // 0x05D4(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      BRLaunchLockoutDuration;                                 // 0x05D8(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      BRLaunchAimingDuration;                                  // 0x05DC(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class USheikFinalRingDynamicAdjustmentData*                SuddenDeathRingData;                                     // 0x05E0(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector2D                                           BargeBanterPauseRange;                                   // 0x05E8(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      BargeBanterCutoffBeforeLaunch;                           // 0x05F0(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      TotalPlaygroundLength;                                   // 0x05F4(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class USheikMapStateManager*                               MapStateManagerComp;                                     // 0x05F8(0x0008) Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class USheikRepTitleStorageInterface*                      SheikRepTitleStorageInterface;                           // 0x0600(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		TWeakObjectPtr<class ASheikPlayerStateCommon>              LeaderWithMostKO;                                        // 0x0608(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       bSkipCannons;                                            // 0x0610(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_CIW4[0x17];                                  // 0x0611(0x0017) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		bool                                                       bDontGoToFreeRoamWhenRoundEnds;                          // 0x0628(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_M7VP[0x23];                                  // 0x0629(0x0023) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      AllowPlaygroundJoinsTill;                                // 0x064C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_NBMR[0x10];                                  // 0x0650(0x0010) MISSED OFFSET (PADDING)

	public:
		void SetPlaygroundTimeLeft(float TimeLeft);
		bool IsActorInRing(class AActor* InActor, float PaddedRingRadius);
		void DisplayFromTwoPlayerNames(const class FString& FirstPlayerName, const class FString& SecondPlayerName);
		void DisplayFromPlayerName(const class FString& PlayerName);
		static UClass* StaticClass();
	};

	/**
	 * Class Sheik.SheikGameModeCTF
	 * Size -> 0x0000 (FullSize[0x05C0] - InheritedSize[0x05C0])
	 */
	class ASheikGameModeCTF : public ASheikGameModeCommon
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Sheik.SheikGameModeDeathmatch
	 * Size -> 0x0000 (FullSize[0x05C0] - InheritedSize[0x05C0])
	 */
	class ASheikGameModeDeathmatch : public ASheikGameModeCommon
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Sheik.SheikGameModeSnowballFight
	 * Size -> 0x0000 (FullSize[0x0660] - InheritedSize[0x0660])
	 */
	class ASheikGameModeSnowballFight : public ASheikGameModeBR
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Sheik.SheikGameModesScreen
	 * Size -> 0x0010 (FullSize[0x0490] - InheritedSize[0x0480])
	 */
	class USheikGameModesScreen : public USheikScreenBase
	{
	public:
		class FScriptMulticastDelegate                             OnExitGameModesScreen;                                   // 0x0480(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic

	public:
		void OnExitScreen();
		static UClass* StaticClass();
	};

	/**
	 * Class Sheik.SheikGameMonitor
	 * Size -> 0x0000 (FullSize[0x0220] - InheritedSize[0x0220])
	 */
	class ASheikGameMonitor : public AActor
	{
	public:
		void EnterRequestedState();
		void EnterInactiveState();
		void EnterDisplayState(EIGMonitorLayout MonitorLayout, class ASheikGameMonitorManager* Manager);
		static UClass* StaticClass();
	};

	/**
	 * Class Sheik.SheikGameMonitorManager
	 * Size -> 0x0200 (FullSize[0x0420] - InheritedSize[0x0220])
	 */
	class ASheikGameMonitorManager : public AActor
	{
	public:
		class USheikSkeletalMeshComponent*                         ModelLoader;                                             // 0x0220(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UIGMoveMontage*                                      MontageToUseForQuickPlayerTest;                          // 0x0228(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      TimeOfMontageForQuickPlayerTest;                         // 0x0230(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_0R79[0x4];                                   // 0x0234(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UMaterialInterface*                                  BackgroundMatForQuickPlayerTest;                         // 0x0238(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UMaterialInterface*                                  ParentMaterialToUse;                                     // 0x0240(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UMaterialInterface*                                  ParentMaterialToUseForBackgrounds;                       // 0x0248(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                TextureParameterNameForBackground;                       // 0x0250(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                TextureParameterName;                                    // 0x0258(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                UITextureParameterName;                                  // 0x0260(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UMaterialInstanceDynamic*                            FirstPlayerMI;                                           // 0x0268(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UMaterialInstanceDynamic*                            SecondPlayerMI;                                          // 0x0270(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UMaterialInstanceDynamic*                            FirstPlayerBackgroundMI;                                 // 0x0278(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UMaterialInstanceDynamic*                            SecondPlayerBackgroundMI;                                // 0x0280(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class UMaterialInterface*>                          FirstPlayerCharacterMaterials;                           // 0x0288(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<class UMaterialInterface*>                          SecondPlayerCharacterMaterials;                          // 0x0298(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TMap<EIGMonitorMatchEvent, struct FMonitorEventOptions>    EventOptions;                                            // 0x02A8(0x0050) Edit, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_RHZ3[0x18];                                  // 0x02F8(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FMonitorEvent                                       EventCurrentlyProcessing;                                // 0x0310(0x0058) BlueprintVisible, BlueprintReadOnly, Protected, NativeAccessSpecifierProtected
		struct FMonitorEvent                                       FallbackEvent;                                           // 0x0368(0x0058) Protected, NativeAccessSpecifierProtected
		struct FTimerHandle                                        EventExpireTimer;                                        // 0x03C0(0x0008) NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		TArray<TWeakObjectPtr<class ASheikGameMonitor>>            RegisteredMonitors;                                      // 0x03C8(0x0010) ZeroConstructor, Protected, UObjectWrapper, NativeAccessSpecifierProtected
		EIGMonitorState                                            LocalState;                                              // 0x03D8(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_SGH8[0x47];                                  // 0x03D9(0x0047) MISSED OFFSET (PADDING)

	public:
		void SetupNextCapture();
		void SetupCaptureActors();
		void ResolveNextMeshMerge();
		void ResolveCaptureActors();
		void ResolveAssetLoads();
		void ResetMonitorManagerState();
		void OnTitleCardAssetsLoaded();
		void OnMinTimerExpired();
		void OnMeshMergeReady();
		void OnMaxTimeExpired();
		void OnCaptureReady(int32_t CaptureIndex);
		void NetMulticastIncomingEvent(const struct FMonitorEvent& IncomingEvent);
		class UMaterialInstanceDynamic* GetSecondPlayerMaterialInstance();
		class UMaterialInstanceDynamic* GetFirstPlayerMaterialInstance();
		void GatherAssetsForCapture(class APlayerState* PlayerState, int32_t CaptureIndex);
		void EnteringRequestedState();
		void EnteringInactiveState();
		void EnteringDisplayState();
		void AddAssetsToLoadForPlayerState(class APlayerState* PlayerState, TArray<struct FSoftObjectPath>* InOutAssetsToLoad);
		static UClass* StaticClass();
	};

	/**
	 * Class Sheik.SheikGameStateCommon
	 * Size -> 0x0138 (FullSize[0x0588] - InheritedSize[0x0450])
	 */
	class ASheikGameStateCommon : public AIGGameState
	{
	public:
		class FScriptMulticastDelegate                             OnServerHotfixVersionChanged;                            // 0x0450(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FString                                              MatchActivityId;                                         // 0x0460(0x0010) BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    ServerHotfixVersion;                                     // 0x0470(0x0004) BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_TB6K[0x4];                                   // 0x0474(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FGameFlowData                                       CurrentGameFlow;                                         // 0x0478(0x0028) BlueprintVisible, BlueprintReadOnly, Net, RepNotify, NativeAccessSpecifierPublic
		int32_t                                                    NumPlayersAlive;                                         // 0x04A0(0x0004) BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    NumTeamsAlive;                                           // 0x04A4(0x0004) BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      AutomaticMatchmakingExitTimer;                           // 0x04A8(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_GDIC[0x4];                                   // 0x04AC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnNumberOfPlayersChanged;                                // 0x04B0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		float                                                      ApproximateServerTimeToStart;                            // 0x04C0(0x0004) Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ESheikGameModeType                                         CurrentGameModeType;                                     // 0x04C4(0x0001) BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_P6AP[0x3];                                   // 0x04C5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UCommonGameplaySettingsData*                         GameplaySettings;                                        // 0x04C8(0x0008) Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		EMatchTeamMode                                             CurrentTeamMode;                                         // 0x04D0(0x0001) BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_6KP8[0xF];                                   // 0x04D1(0x000F) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UClass*                                              AssetDataSourcesClass;                                   // 0x04E0(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		TArray<struct FSheikAIVisualizationEntry>                  BotDebugEntries;                                         // 0x04E8(0x0010) ZeroConstructor, NativeAccessSpecifierPrivate
		unsigned char                                              ControllersVisualizingBots[0x10];                        // 0x04F8(0x0010) UNKNOWN PROPERTY: ArrayProperty
		TArray<struct FSoftObjectPath>                             PendingEmoteMontages;                                    // 0x0508(0x0010) ZeroConstructor, Transient, NativeAccessSpecifierPrivate
		TArray<class UIGMoveMontage*>                              ForceLoadedMontages;                                     // 0x0518(0x0010) ZeroConstructor, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_XKS4[0x58];                                  // 0x0528(0x0058) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      StartMatchTime;                                          // 0x0580(0x0004) Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_S111[0x4];                                   // 0x0584(0x0004) MISSED OFFSET (PADDING)

	public:
		void ReportInputSourceChanged(const struct FUserControllerData& OldInputSource, const struct FUserControllerData& NewInputSource);
		void OnServerHotfixVersionChanged__DelegateSignature(int32_t ServerVersion);
		void OnRep_ServerHotfixVersion();
		void OnRep_NumTeamsAliveChanged();
		void OnRep_NumPlayersAliveChanged();
		void OnRep_CurrentTeamMode();
		void OnRep_CurrentGameModeType();
		void OnRep_CurrentGameFlowChanged(const struct FGameFlowData& LastGameFlowData);
		void OnNumberOfPlayersChanged__DelegateSignature(int32_t TotalPlayers, bool HasPlayerBeenAdded);
		class UCommonGameplaySettingsData* GetGameplaySettings();
		void Client_OnNewCratesIncoming();
		void BroadcastNumberOfPlayersChanged(int32_t CurrentTotalPlayers, bool bHasPlayerBeenAdded);
		void AutomaticMatchmakingQuitTimerReached();
		static UClass* StaticClass();
	};

	/**
	 * Class Sheik.SheikGameStateBR
	 * Size -> 0x01F8 (FullSize[0x0780] - InheritedSize[0x0588])
	 */
	class ASheikGameStateBR : public ASheikGameStateCommon
	{
	public:
		class UClass*                                              RingActorClass;                                          // 0x0588(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FSheikRingState                                     LastRingState;                                           // 0x0590(0x0050) BlueprintVisible, BlueprintReadOnly, Net, NoDestructor, NativeAccessSpecifierPublic
		struct FSheikRingState                                     TargetRingState;                                         // 0x05E0(0x0050) BlueprintVisible, BlueprintReadOnly, Net, NoDestructor, NativeAccessSpecifierPublic
		struct FSheikRingState                                     FirstRingState;                                          // 0x0630(0x0050) BlueprintVisible, BlueprintReadOnly, Net, NoDestructor, NativeAccessSpecifierPublic
		int32_t                                                    CurrentRingStateIndex;                                   // 0x0680(0x0004) Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       IsFinalRingState;                                        // 0x0684(0x0001) BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_D8EC[0x3];                                   // 0x0685(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    SuddenDeathRingShrinkCount;                              // 0x0688(0x0004) BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ApproximateServerTimeForFreeRoamEnd;                     // 0x068C(0x0004) Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bPinningEnabled;                                         // 0x0690(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bDUOResurrectionEnabled;                                 // 0x0691(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_RB6I[0x5E];                                  // 0x0692(0x005E) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UMaterialInterface*                                  TargetRingMaterial;                                      // 0x06F0(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UMaterialInterface*                                  PulseRingMaterial;                                       // 0x06F8(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      PulseCount;                                              // 0x0700(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_DSTS[0x4];                                   // 0x0704(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UStaticMesh*                                         CircleMesh;                                              // 0x0708(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UStaticMesh*                                         SquareMesh;                                              // 0x0710(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UClass*                                              RingSoundClass;                                          // 0x0718(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class AAmbientSound*                                       RingSoundActor;                                          // 0x0720(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class USheikMapStateTimelineData*>                  DebugTimelineAssets;                                     // 0x0728(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		float                                                      SecondsPerWrestlingSecond;                               // 0x0738(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CountoutRegenPerSecond;                                  // 0x073C(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       OnlyUseDemoRings;                                        // 0x0740(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_BBF8[0x7];                                   // 0x0741(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class USheikEventRewardSetData*>                    PossibleEventRewards;                                    // 0x0748(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_3IKU[0x20];                                  // 0x0758(0x0020) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		bool                                                       bAnnounceEntranceToBarge;                                // 0x0778(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_7EXT[0x7];                                   // 0x0779(0x0007) MISSED OFFSET (PADDING)

	public:
		void OnRep_SuddenDeathRingShrinkCountChanged();
		void OnRep_OnlyUseDemoRings();
		void OnRep_IsFinalRingStateChanged();
		void OnEventStartHandler(int32_t EventTime, bool bIsParticipating);
		void OnEventCountdownStartHandler(int32_t EventTime);
		struct FSheikMatchTimerHUDInfo GetMatchTimerInfo(class ASheikCharacter* InCharacter);
		void Client_OnBargeBanterEvent();
		static UClass* StaticClass();
	};

	/**
	 * Class Sheik.SheikGameStateCTF
	 * Size -> 0x0068 (FullSize[0x05F0] - InheritedSize[0x0588])
	 */
	class ASheikGameStateCTF : public ASheikGameStateCommon
	{
	public:
		class UClass*                                              RingActorClass;                                          // 0x0588(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UStaticMesh*                                         RingSquareMesh;                                          // 0x0590(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_1POE[0x8];                                   // 0x0598(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FSheikCTFRingState                                  RingState;                                               // 0x05A0(0x0040) BlueprintVisible, BlueprintReadOnly, Net, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_7A00[0x10];                                  // 0x05E0(0x0010) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Sheik.SheikGameStateDeathmatch
	 * Size -> 0x0000 (FullSize[0x0588] - InheritedSize[0x0588])
	 */
	class ASheikGameStateDeathmatch : public ASheikGameStateCommon
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Sheik.SheikGenericPopup
	 * Size -> 0x0000 (FullSize[0x0418] - InheritedSize[0x0418])
	 */
	class USheikGenericPopup : public UIGUI_WidgetBase
	{
	public:
		void SetHeaderText(const class FText& HeaderText);
		void SetErrorCodeText(const class FText& ErrorCodeText);
		void SetDimBackground(bool DimBackground);
		void SetBodyText(const class FText& BodyText, bool bUseDefaultFormatting);
		void AddLegend(TArray<struct FLegendData> LegendPrompts);
		static UClass* StaticClass();
	};

	/**
	 * Class Sheik.SheikHUD
	 * Size -> 0x0208 (FullSize[0x06F0] - InheritedSize[0x04E8])
	 */
	class ASheikHUD : public AIGActorSystemHUD
	{
	public:
		unsigned char                                              BaseWidgetClass[0x28];                                   // 0x04E8(0x0028) UNKNOWN PROPERTY: SoftClassProperty
		unsigned char                                              SpectatorWidgetClass[0x28];                              // 0x0510(0x0028) UNKNOWN PROPERTY: SoftClassProperty
		unsigned char                                              BaseDebugMenuScreen[0x28];                               // 0x0538(0x0028) UNKNOWN PROPERTY: SoftClassProperty
		EPlayingMode                                               PlayingMode;                                             // 0x0560(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ZEET[0x7];                                   // 0x0561(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnUpdateMapLookupInfo;                                   // 0x0568(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnUpdateOwningPlayerInfo;                                // 0x0578(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnUpdateWaypoints;                                       // 0x0588(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnUpdateLaunchCone;                                      // 0x0598(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnCannonFired;                                           // 0x05A8(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnShowPlayZoneDirectPath;                                // 0x05B8(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnHidePlayZoneDirectPath;                                // 0x05C8(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnShowFullMap;                                           // 0x05D8(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnStopShowingFullMap;                                    // 0x05E8(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnTeammateHPAlert;                                       // 0x05F8(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnTeammateRescueAlert;                                   // 0x0608(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnTeammateInCombatAlert;                                 // 0x0618(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnTeammateCannonLanded;                                  // 0x0628(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnAllowCursorInputChanged;                               // 0x0638(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnMinigameStarted;                                       // 0x0648(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, BlueprintCallable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnMinigameInput;                                         // 0x0658(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, BlueprintCallable, NativeAccessSpecifierPublic
		class UDataTable*                                          MapLookupDataTable;                                      // 0x0668(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FVector                                             BargePosition;                                           // 0x0670(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FRotator                                            BargeRotation;                                           // 0x067C(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected
		class ASheikCharacter*                                     PlayerCharacterPawn;                                     // 0x0688(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		TArray<struct FPingContextInfo>                            CurrentPings;                                            // 0x0690(0x0010) ZeroConstructor, Protected, NativeAccessSpecifierProtected
		bool                                                       bFoundMapLookupInfo;                                     // 0x06A0(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_7VLD[0x3B];                                  // 0x06A1(0x003B) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      ResetCheckCannonLaunchTime;                              // 0x06DC(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_MYT5[0x10];                                  // 0x06E0(0x0010) MISSED OFFSET (PADDING)

	public:
		void ToggleDebugMenu();
		void StartMinigame(const struct FSheikMinigameInfo& MinigameInfo);
		bool ShouldShowFullMap();
		bool ShouldShowDirectLine();
		void SetPlayerCharacterPawnToFollow(class ASheikCharacter* SheikCharacter);
		void SetAllowCursorInput(bool bUseMenuInput);
		void SendWaypointInfo();
		void ResetAllowCheckCannonLaunch();
		void OnUpdateWaypoints__DelegateSignature(TArray<struct FSheikWaypointInfo> Waypoints);
		void OnUpdateShowPlayZoneDirectPath__DelegateSignature();
		void OnUpdateShowingFullMap__DelegateSignature();
		void OnUpdateOwningPlayerInfo__DelegateSignature(const struct FSheikOwningPlayerInfo& OwningPlayerInfo);
		void OnUpdateMapLookupInfo__DelegateSignature(const struct FSheikMapLookupInfo& MapLookupInfo);
		void OnUpdateLaunchCone__DelegateSignature(const struct FSheikCannonConeData& CannonConeLaunchData);
		void OnTeammateGameplayEvent__DelegateSignature(class AIGPlayerState* TeammateState, bool bValue);
		void OnTeammateCannonLanded__DelegateSignature(class AIGPlayerState* TeammateState);
		void OnCannonFired__DelegateSignature();
		void OnAllowCursorInputChanged__DelegateSignature(bool UseMenuInput);
		void LoadMapLookupInfo();
		bool IsDisplayingScreenOfType();
		void HideDebugMenu();
		bool HasFoundMapLookupInfo();
		void HandleOnTeammateInCombatAlert(class AIGPlayerState* TeammateState, bool bIsTeammateInCombat);
		void HandleOnTeammateHPAlert(class AIGPlayerState* TeammateState, bool bIsTeammateLowHealth);
		void HandleOnTeammateCannonLanded(class AIGPlayerState* TeammateState);
		void HandleOnPingExpired(int32_t PartyMemberID);
		void HandleOnPingAtLocation(EIGPingType PingType, int32_t PartyMemberID, const struct FVector& PingLocation, const struct FVector& PingNormal);
		void HandleOnPinEvent(ESheikPinEventType EventType, class ASheikCharacter* Attacker, class ASheikCharacter* Victim);
		void HandleOnKnockOutOccured(const struct FIGKnockOutData& KnockOutData);
		void HandleOnGameFlowStateChanged(EGameFlowState NewState);
		void HandleOnClientFiredCannon();
		void GetTexture2DFromPayload(const struct FSheikPayload& Payload, const class FString& KeyName, bool* OutSuccessful);
		class FText GetTextFromPayload(const struct FSheikPayload& Payload, const class FString& KeyName, bool* OutSuccessful);
		class FString GetStringFromPayload(const struct FSheikPayload& Payload, const class FString& KeyName, bool* OutSuccessful);
		struct FSheikDirectLineToPlayZoneData GetPlayZoneDirectPathLineDimensions(const struct FVector2D& MapDimensions, bool IsFullMap, bool* Successful, const struct FVector& UseThisPlayerLocation);
		struct FSheikMapLookupInfo GetMapLookupInfo();
		int32_t GetIntFromPayload(const struct FSheikPayload& Payload, const class FString& KeyName, bool* OutSuccessful);
		float GetFloatFromPayload(const struct FSheikPayload& Payload, const class FString& KeyName, bool* OutSuccessful);
		struct FSheikMinimapOverlapInfo GetDimensionsOfRotatedSquareOverlapInMinimapSection(float WidthOfMinimapSide, float HeightOfMinimapSide, const struct FVector2D& CenterOfSquare, float SquareSideLength, float SquareRotationInDegrees);
		struct FSheikMinimapOverlapInfo GetDimensionsOfCircleOverlapInMinimapSection(float WidthOfMinimapSide, float HeightOfMinimapSide, const struct FVector2D& CenterOfCircle, float CircleRadius);
		struct FCurrentNetSimulationSettings GetCurrentNetSimulationSettings();
		struct FSheikDirectLineCalculatedData GetCalculatedDirectLineData(const struct FVector2D& StartPositionInCanvasPanel, const struct FVector2D& EndPositionInCanvasPanel, const struct FVector2D& TopLeftCornerOfPanel, const struct FVector2D& BottomRightCornerOfPanel);
		bool GetBooleanFromPayload(const struct FSheikPayload& Payload, const class FString& KeyName, bool* OutSuccessful);
		float GetAngleBetweenTwoPoints(const struct FVector2D& PointA, const struct FVector2D& PointB);
		void EndMinigame();
		void EnableGlobalInvalidation(bool bEnabled);
		void DebugStartMinigame(float StartingPosition, float TargetPosition, float TargetSize, float GradientSize, float Speed, bool BounceBackOnHit, int32_t NumOfBounces);
		void DebugOnMinigameResults(const struct FSheikMinigameResults& MinigameResults);
		void DebugEndMinigame();
		void DebugContinueMinigame(bool ResetCursorPosition);
		void ContinueMinigame(bool ResetCursorPosition);
		void AddTexture2DToPayload(struct FSheikPayload* Payload, const class FString& KeyName);
		void AddTextToPayload(struct FSheikPayload* Payload, const class FString& KeyName, const class FText& Value);
		void AddStringToPayload(struct FSheikPayload* Payload, const class FString& KeyName, const class FString& Value);
		void AddIntToPayload(struct FSheikPayload* Payload, const class FString& KeyName, int32_t Value);
		void AddFloatToPayload(struct FSheikPayload* Payload, const class FString& KeyName, float Value);
		void AddBooleanToPayload(struct FSheikPayload* Payload, const class FString& KeyName, bool Value);
		static UClass* StaticClass();
	};

	/**
	 * Class Sheik.SheikImage
	 * Size -> 0x0008 (FullSize[0x0420] - InheritedSize[0x0418])
	 */
	class USheikImage : public UIGUI_WidgetBase
	{
	public:
		class UImage*                                              InnerImage;                                              // 0x0418(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Sheik.SheikInputPrompts
	 * Size -> 0x0060 (FullSize[0x0478] - InheritedSize[0x0418])
	 */
	class USheikInputPrompts : public UIGUI_WidgetBase
	{
	public:
		TMap<ESheikGenericInputPrompt, class FText>                GenericPromptToText;                                     // 0x0418(0x0050) Edit, BlueprintVisible, Protected, NativeAccessSpecifierProtected
		TArray<struct FSheikMovesetPromptToMontages>               MovesetDataToPromptMap;                                  // 0x0468(0x0010) Edit, BlueprintVisible, ZeroConstructor, Protected, NativeAccessSpecifierProtected

	public:
		void HandleOnUpdatedInputPrompts(const struct FSheikInputPromptContainerData& PromptContainerData);
		class FText GetTextForGenericPrompt(ESheikGenericInputPrompt InputPrompt);
		static UClass* StaticClass();
	};

	/**
	 * Class Sheik.SheikInputPromptsCallbacks
	 * Size -> 0x00D8 (FullSize[0x0188] - InheritedSize[0x00B0])
	 */
	class USheikInputPromptsCallbacks : public UActorComponent
	{
	public:
		class FScriptMulticastDelegate                             OnUpdatedInputPrompts;                                   // 0x00B0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class USheikGameInstance*                                  SheikGameInstance;                                       // 0x00C0(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bIsInCannonState;                                        // 0x00C8(0x0001) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bCanFreefall;                                            // 0x00C9(0x0001) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_UTVM[0x6];                                   // 0x00CA(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UIGInteractableBoxComponent*>                 Interactables;                                           // 0x00D0(0x0010) ExportObject, ZeroConstructor, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected
		struct FSheikInputPromptContainerData                      LastPromptContainerData;                                 // 0x00E0(0x0080) Protected, NativeAccessSpecifierProtected
		TArray<struct FSheikMovesetPromptToMontages>               MovesetDataToPromptMap;                                  // 0x0160(0x0010) ZeroConstructor, Protected, NativeAccessSpecifierProtected
		bool                                                       bCanShowComboPrompt;                                     // 0x0170(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_XDZL[0x7];                                   // 0x0171(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTimerHandle                                        ShowComboPromptTimerHandle;                              // 0x0178(0x0008) NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      TimeToShowComboPrompt;                                   // 0x0180(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_VVJB[0x4];                                   // 0x0184(0x0004) MISSED OFFSET (PADDING)

	public:
		bool UpdatePromptDataWithHeldItemPrompts(class ASheikCharacter* PlayerCharacter, struct FSheikInputPromptContainerData* ContainerData, bool UseInAirPrompts, bool IgnoreTopPrompt, bool IgnoreConsume);
		void UpdateInputPrompts();
		void SubscribeToCharacterDelegates(class ASheikCharacter* NewCharacter);
		void OnUpdatedInputPrompts__DelegateSignature(const struct FSheikInputPromptContainerData& PromptContainerData);
		bool IsInMovesetMontage(ESheikMovesetPromptType MovesetPromptType);
		bool IsInCombo(class UIGMovesetComponent* MovesetComponent);
		void HandleShowComboPromptTimerEvent();
		void HandleOnWallGrabPromptChanged(const struct FVector& SurfaceLoc);
		void HandleOnMovesetDataUpdated();
		void HandleOnMovementModeChanged(class ACharacter* Character, EMovementMode PrevMovementMode, unsigned char PreviousCustomMode);
		void HandleOnMontageStarted(class UAnimMontage* Montage);
		void HandleOnMontageChanged(class UAnimMontage* Montage, bool bInteruppted);
		void HandleOnLaunchControlUpdated(bool bLaunchControl);
		void HandleOnInteractVolumeExited(class UIGInteractableBoxComponent* InteractableBoxComponent);
		void HandleOnInteractVolumeEntered(class UIGInteractableBoxComponent* InteractableBoxComponent);
		void HandleOnInteractableStatusChanged(class AIGCharacter* InteractableActor);
		void HandleOnFreefallStart();
		void HandleOnClientIsAimingCannonChanged(bool IsAimingCannon);
		void HandleOnClientFiredCannon();
		void HandleOnCharacterPawnChanged(class ASheikCharacter* NewCharacter);
		void HandleOnCharacterDamaged(const struct FIGInstanceHitData& HitData);
		void HandleOnCannonLaunchPhase2Start();
		void HandleOnCannonLaunchCanEnterFreeFall();
		void BindEventsToLocalPlayerController();
		bool AreInputPromptsEmpty(const struct FSheikInputPromptContainerData& PromptContainerData);
		static UClass* StaticClass();
	};

	/**
	 * Class Sheik.SheikJoinRestrictedMatchScreen
	 * Size -> 0x0010 (FullSize[0x0490] - InheritedSize[0x0480])
	 */
	class USheikJoinRestrictedMatchScreen : public UIGUI_ScreenBase
	{
	public:
		class FScriptMulticastDelegate                             OnJoinRestrictedMatch;                                   // 0x0480(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, BlueprintCallable, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Sheik.SheikKeybindingManager
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class USheikKeybindingManager : public UBlueprintFunctionLibrary
	{
	public:
		void SaveKeyBindings(class UObject* WorldContextObject);
		void ResetKeyboardBindings(class UObject* WorldContextObject);
		void ResetKeyBindings(class UObject* WorldContextObject);
		void ResetGamepadBindings(class UObject* WorldContextObject);
		void RebindActionForKeyboard(class UObject* WorldContextObject, const class FName& ActionName, const struct FKey& OldKey, const struct FKey& NewKey, ESheikActionBindingSlot Slot, TArray<class FName> ActionNameFilter, const class FName& Context);
		void RebindActionForGamepad(class UObject* WorldContextObject, const class FName& ActionName, const struct FKey& OldKey, const struct FKey& NewKey, TArray<class FName> ActionNameFilter, const class FName& Context);
		bool IsActionBound(class UObject* WorldContextObject, const class FName& InActionName);
		class UTexture* GetTextureForKey(const struct FKey& InKey, EInputSource Source, class UDataTable* KeyToTextureDataTable);
		class UTexture* GetTextureForAction(class UObject* WorldContextObject, const class FName& InAction, EInputSource Source, class UDataTable* KeyToTextureDataTable);
		class APlayerController* GetLocalPlayerController(class UObject* WorldContextObject);
		struct FBoundKeyInfo GetKeyboardKeysForActionByName(class UObject* WorldContextObject, const class FName& ActionName);
		TArray<struct FBoundKeyInfo> GetKeyboardBindings(class UObject* WorldContextObject, bool bIncludeUnboundActions);
		struct FBoundKeyInfo GetGamepadKeysForActionByName(class UObject* WorldContextObject, const class FName& ActionName);
		TArray<struct FBoundKeyInfo> GetGamepadBindings(class UObject* WorldContextObject, bool bIncludeUnboundActions);
		class FName GetActionByKey(class UObject* WorldContextObject, const struct FKey& InKey);
		bool DoesActionExist(const class FName& InActionName);
		static UClass* StaticClass();
	};

	/**
	 * Class Sheik.SheikLiveOpsSystem
	 * Size -> 0x01C0 (FullSize[0x01E8] - InheritedSize[0x0028])
	 */
	class USheikLiveOpsSystem : public UObject
	{
	public:
		unsigned char                                              UnknownData_SR1Y[0x1C0];                                 // 0x0028(0x01C0) MISSED OFFSET (PADDING)

	public:
		void KickToTitleScreen();
		static UClass* StaticClass();
	};

	/**
	 * Class Sheik.SheikLoaderGameModeBase
	 * Size -> 0x0008 (FullSize[0x02C8] - InheritedSize[0x02C0])
	 */
	class ASheikLoaderGameModeBase : public AGameModeBase
	{
	public:
		class USheikLoadFlowManager*                               LoadFlowManager;                                         // 0x02C0(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		class USheikLoadFlowManager* GetLoadFlowManager();
		static UClass* StaticClass();
	};

	/**
	 * Class Sheik.SheikLoadFlowManager
	 * Size -> 0x0058 (FullSize[0x0108] - InheritedSize[0x00B0])
	 */
	class USheikLoadFlowManager : public UActorComponent
	{
	public:
		unsigned char                                              UnknownData_VFY7[0x58];                                  // 0x00B0(0x0058) MISSED OFFSET (PADDING)

	public:
		void RestartHotfixCheckForDesiredVersion(EUpdateCompletionStatus Result);
		void OnHotfixDefer(TArray<int32_t> AvailableVersions);
		void OnHotfixComplete(EUpdateCompletionStatus Result);
		void OnDeferredHotfixComplete(EUpdateCompletionStatus Result);
		ELoadFlowState GetCurrentState();
		static UClass* StaticClass();
	};

	/**
	 * Class Sheik.SheikLoadingScreen
	 * Size -> 0x0190 (FullSize[0x03F0] - InheritedSize[0x0260])
	 */
	class USheikLoadingScreen : public UUserWidget
	{
	public:
		class FScriptMulticastDelegate                             OnTriggerLoadFinished;                                   // 0x0260(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, Protected, NativeAccessSpecifierProtected
		class FString                                              EntryMapName;                                            // 0x0270(0x0010) Edit, ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class FString                                              FrontendMapName;                                         // 0x0280(0x0010) Edit, ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_HHLX[0x20];                                  // 0x0290(0x0020) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class FString>                                      MapNamesComposition;                                     // 0x02B0(0x0010) Edit, ZeroConstructor, Protected, NativeAccessSpecifierProtected
		TArray<class FString>                                      MapNamesNonComposition;                                  // 0x02C0(0x0010) Edit, ZeroConstructor, Protected, NativeAccessSpecifierProtected
		class UImage*                                              SpinnerImage;                                            // 0x02D0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              SpinnerTextureSheet[0x28];                               // 0x02D8(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		struct FIntVector                                          SpinnerTextureCellCounts;                                // 0x0300(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      SpinnerFPS;                                              // 0x030C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_9GD4[0x10];                                  // 0x0310(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class URichTextBlock*                                      RichHintTextWidget;                                      // 0x0320(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		TArray<class FText>                                        HintTexts;                                               // 0x0328(0x0010) BlueprintVisible, ZeroConstructor, Protected, NativeAccessSpecifierProtected
		float                                                      HintUpdateTime;                                          // 0x0338(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_NUBP[0xC];                                   // 0x033C(0x000C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UImage*                                              BackgroundImage;                                         // 0x0348(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              BackgroundTextures[0x10];                                // 0x0350(0x0010) UNKNOWN PROPERTY: ArrayProperty
		class UTextBlock*                                          DebugTextWidget;                                         // 0x0360(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		TWeakObjectPtr<class USheikGameInstance>                   GameInstance;                                            // 0x0368(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		TWeakObjectPtr<class AFrontendHUD>                         FrontendHUD;                                             // 0x0370(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_E3QS[0x78];                                  // 0x0378(0x0078) MISSED OFFSET (PADDING)

	public:
		void ShowEstimatedProgress(float EstimatedProgress);
		void OnUITitleStorageDataRetrieved(bool bSuccessful, const struct FSheikError& Error);
		void OnTriggerLoadFinished__DelegateSignature();
		void OnSpinnerFrameUpdated(int32_t Frame);
		void OnSeasonVerificationCompleted(bool bSuccessful, const struct FSheikError& Error);
		void OnProgressionDataRetrieved(bool bSuccessful, const struct FSheikError& Error);
		void OnPlayerDataRetrieved();
		void OnEntitlementsOwnedRefreshComplete();
		void OnAchievementsProgressSaved(bool bSuccessful);
		bool IsLoadFinished();
		static UClass* StaticClass();
	};

	/**
	 * Class Sheik.SheikLockerRoom
	 * Size -> 0x0190 (FullSize[0x0610] - InheritedSize[0x0480])
	 */
	class USheikLockerRoom : public USheikScreenBase
	{
	public:
		class USheikAccessorySystem*                               AccessorySystem;                                         // 0x0480(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       FocusItemsOnSelect;                                      // 0x0488(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_POL4[0x3];                                   // 0x0489(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    ActiveLoadoutForModification;                            // 0x048C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnConflictOccurred;                                      // 0x0490(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, Protected, NativeAccessSpecifierProtected
		class FScriptMulticastDelegate                             OnErrorOccurred;                                         // 0x04A0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, Protected, NativeAccessSpecifierProtected
		class FScriptMulticastDelegate                             OnRefreshAccessoryList;                                  // 0x04B0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, Protected, NativeAccessSpecifierProtected
		class FScriptMulticastDelegate                             OnHideBody;                                              // 0x04C0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, Protected, NativeAccessSpecifierProtected
		class FScriptMulticastDelegate                             OnShowBody;                                              // 0x04D0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, Protected, NativeAccessSpecifierProtected
		class UClass*                                              CharacterPreviewClass;                                   // 0x04E0(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class USheikUIActorCustomizer*                             Customizer;                                              // 0x04E8(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              ClothingFilterToIconMap[0x50];                           // 0x04F0(0x0050) UNKNOWN PROPERTY: MapProperty
		unsigned char                                              EmoteTagsToIconMap[0x50];                                // 0x0540(0x0050) UNKNOWN PROPERTY: MapProperty
		struct FVector                                             PreviewLocation;                                         // 0x0590(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_2QLK[0x4];                                   // 0x059C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FQuat                                               PreviewRotation;                                         // 0x05A0(0x0010) Edit, BlueprintVisible, IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected
		float                                                      CameraPitch;                                             // 0x05B0(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      CameraHeight;                                            // 0x05B4(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      CameraPan;                                               // 0x05B8(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      CameraFieldOfView;                                       // 0x05BC(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       CamRotationResetOnUnequip;                               // 0x05C0(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       CamRotationResetOnBodyChange;                            // 0x05C1(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_FAIB[0x2];                                   // 0x05C2(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      CameraFocusSpeed;                                        // 0x05C4(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      UltrawideRatioThreshold;                                 // 0x05C8(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		int32_t                                                    AccessoryCountForAdvancedMode;                           // 0x05CC(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		int32_t                                                    PresetLimit;                                             // 0x05D0(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_23CY[0xC];                                   // 0x05D4(0x000C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<ESheikFilterType>                                   Filters;                                                 // 0x05E0(0x0010) ZeroConstructor, NativeAccessSpecifierPrivate
		ESheikSortingType                                          CurrentSortingType;                                      // 0x05F0(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_RINE[0x3];                                   // 0x05F1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    ChoosingRandomOptionsPopupId;                            // 0x05F4(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FGuid                                               SessionID;                                               // 0x05F8(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_LMPW[0x8];                                   // 0x0608(0x0008) MISSED OFFSET (PADDING)

	public:
		void ZoomCameraToRegion(EIGBodyType BodyType, EIGBodyRegion ZoomRegion, bool bSmoothZoom);
		void UnPreviewAccessory();
		void ToggleCharacterPreviewVisibility(bool bIsHidden);
		void SpawnCharacterPreview();
		bool SortAccessoryList(TArray<struct FSheikAccessoryInfo>* Accessories);
		void SetSheikAccessorySystem(class USheikAccessorySystem* SheikAccSys);
		void SetCameraPositionByItem(const struct FSheikAccessoryInfo& FocusItem);
		void SetCameraForCurrentBodyType();
		bool SaveCurrentLoadoutAsPreset(int32_t PresetSlotIndex);
		void SaveCharacterLoadout();
		void ResetCamera();
		void RemoveFilter(ESheikFilterType FilterType, bool RefreshAccessories);
		void RemoveAllFilters(bool RefreshAccessories);
		void RemoveAccessory(const class FName& ID);
		void RefreshAccessoryData();
		void RandomizeBodyOptions();
		void RandomizeAccessories();
		void ProcessDataTables();
		void PreviewAccessory(const class FName& ID, bool bIsTogglingUndies);
		void OnRefreshAccessoryList__DelegateSignature();
		void OnErrorOccurred__DelegateSignature(const class FText& ErrorMsg);
		void OnConflictOccurred__DelegateSignature(TArray<struct FSheikAccessoryInfo> ConflictingItems);
		void OnAccessoryLoadUpdate__DelegateSignature();
		void MakePreviewBodyShapeSameAsBase();
		void LogLockerRoomOpenEventOnFirstInteraction();
		bool IsOutfitEqualToLoadout(const struct FSheikOutfitInfo& InOutfitInfo, const struct FCharacterLoadout& InLoadout);
		bool IsFilterLocked(ESheikFilterType FilterType);
		bool IsAnyVariationUnseen(const class FName& VariationGroupName);
		bool IsAdvancedLockerRoomEnabled();
		bool IsAccessoryAlreadyEquipped(const class FName& ID);
		bool HasMultipleVariations(const class FName& VariationGroupName);
		bool HasFilter(ESheikFilterType FilterType);
		void HandleOnVisibilityChangedEvent(ESlateVisibility InVisibility);
		void HandleOnMatchFound(bool bSuccessful, const struct FSheikError& Error);
		void HandleOnCustomizerUpdateComplete();
		void HandleNavigationButtonPressEvent(const struct FInputEventData& InputEvent);
		class USheikWalletSystem* GetWalletSystem();
		TArray<class FName> GetVariationGroupNames();
		TArray<struct FSheikAccessoryInfo> GetVariationGroupAccessories(const class FName& VariationGroupName, bool FilterByCurrentBody);
		TArray<struct FSheikOutfitInfo> GetUnlockedOutfits();
		TArray<struct FSheikAccessoryInfo> GetUngroupedAccessoryVariations();
		TArray<ESheikFilterType> GetSubcategoryFilters(ESheikFilterType InFilterType);
		class USheikStoreSystem* GetStoreSystem();
		int32_t GetPlayersCurrentBudget();
		class USheikPlayerData* GetPlayerData();
		bool GetNewestOutfitStoreOffer(struct FSheikStoreItem* OutStoreOffer);
		TArray<struct FSheikAccessoryInfo> GetListOfAccessories(TArray<EAccessoryType> AccessoryTypes, bool SortAccessories, bool AdvancedMode);
		class FText GetDisplayNameForSort(ESheikSortingType SortingType);
		class FText GetDisplayNameForFilter(ESheikFilterType FilterType);
		ESheikSortingType GetCurrentSortingType();
		int32_t GetCreatedPresetCount();
		void GetConflictsForAccessory(const class FName& ID, TArray<struct FSheikAccessoryInfo>* OutConflicts);
		class FText GetAccessoryLabel(const class FName& ID);
		TArray<struct FSheikAccessoryInfo> FilterEmotesByCategoryTag(TArray<struct FSheikAccessoryInfo> InEmotes, const struct FGameplayTag& InTag);
		void ExecShowAccessories();
		void EquipSavedLoadoutIndex(int32_t InLoadoutIndex);
		void EquipPreset(int32_t PresetIndex);
		void EquipOutfit(const struct FSheikOutfitInfo& InOutfit, bool bIsPreviewing);
		void EquipLoadout(const struct FCharacterLoadout& CharacterLoadout);
		void EquipAccessory(const class FName& ID);
		bool DoesItemPassFilters(const struct FSheikAccessoryInfo& AccessoryInfo);
		bool DoesAccessoryCauseStyleBudgetOverage(const struct FCharacterLoadout& BaseLoadout, const struct FSheikAccessoryInfo& InAccessory);
		void ClearAccessoriesNoSave();
		void ClearAccessories();
		void ChangeSortingType(ESheikSortingType SortingType);
		bool CanCreateNewPreset();
		TArray<bool> CalculateAccessoriesDisallowedByStyleBudget(TArray<struct FSheikAccessoryInfo> InAccessories);
		void AddFilter(ESheikFilterType FilterType, bool RefreshAccessories);
		static UClass* StaticClass();
	};

	/**
	 * Class Sheik.SheikLockerRoomClothingPage
	 * Size -> 0x00A0 (FullSize[0x0558] - InheritedSize[0x04B8])
	 */
	class USheikLockerRoomClothingPage : public USheikWidgetBase
	{
	public:
		TMap<class FName, bool>                                    VariationMap;                                            // 0x04B8(0x0050) Edit, BlueprintVisible, Protected, NativeAccessSpecifierProtected
		TMap<class FName, bool>                                    VariationUnseenMap;                                      // 0x0508(0x0050) Edit, BlueprintVisible, Protected, NativeAccessSpecifierProtected

	public:
		void RefreshUnseenMapEntriesForLoadout(class USheikLockerRoom* LockerRoom, TArray<struct FSheikAccessoryInfo> InAccessories);
		void RefreshStackingDecoratorsNative(class USheikLockerRoom* LockerRoom, TArray<class UIGUI_WidgetBase*> NavigableWidgets);
		TArray<struct FSheikAccessoryInfo> FilterLockedAccessoriesNative(TArray<struct FSheikAccessoryInfo> InAccessories, class USheikWalletSystem* WalletSys);
		static UClass* StaticClass();
	};

	/**
	 * Class Sheik.SheikLockerRoomItemBase
	 * Size -> 0x0638 (FullSize[0x0AF0] - InheritedSize[0x04B8])
	 */
	class USheikLockerRoomItemBase : public USheikWidgetBase
	{
	public:
		int32_t                                                    ItemCost;                                                // 0x04B8(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		int32_t                                                    ItemButtonIndex;                                         // 0x04BC(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class FText                                                ItemLabel;                                               // 0x04C0(0x0018) Edit, BlueprintVisible, Protected, NativeAccessSpecifierProtected
		struct FLinearColor                                        ItemColor;                                               // 0x04D8(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bIsItemNewContent;                                       // 0x04E8(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bIsItemEquipped;                                         // 0x04E9(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_A289[0x6];                                   // 0x04EA(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UOverlay*                                            VariationGroupOverlayRef;                                // 0x04F0(0x0008) Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UTextBlock*                                          NewIconRef;                                              // 0x04F8(0x0008) Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UOverlay*                                            EquippedNewOverlayRef;                                   // 0x0500(0x0008) Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FSheikAccessoryInfo                                 Accessory;                                               // 0x0508(0x05E0) Edit, BlueprintVisible, ExposeOnSpawn, NativeAccessSpecifierPublic
		bool                                                       bIsStackingEnabled;                                      // 0x0AE8(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_U1E1[0x7];                                   // 0x0AE9(0x0007) MISSED OFFSET (PADDING)

	public:
		void SetStackingEnabled(bool StackingEnabled);
		void SetNewContentNative(bool New);
		void SetItemImageNative(class UTexture2D* Texture, class UImage* Image, class UCircularThrobber* Spinner);
		void SetItemColorNative(const struct FLinearColor& Color, class UImage* Image);
		void SetEquippedStylingNative(bool Equipped, class UImage* EquippedFrame, class UImage* EquippedCheckmark, class UTextBlock* NewIcon, class UOverlay* EquippedNewOverlay);
		void SetEquippedNewVisibilityNative(class UOverlay* EquippedNewOverlay);
		void SetCostNative(bool ShowCost, int32_t BudgetCost, class UOverlay* StyleBudgetOverlay, class UTextBlock* CostTextBlock);
		void PushChangesToContentNative(const struct FSheikAccessoryInfo& ItemAccessory, class UImage* Image, class UCircularThrobber* Spinner, class UOverlay* StyleBudgetOverlay, class UTextBlock* CostTextBlock, class UTextBlock* NewIcon, class UOverlay* EquippedNewOverlay, class UImage* EquippedFrame, class UImage* EquippedCheckmark);
		static UClass* StaticClass();
	};

	/**
	 * Class Sheik.SheikLockerRoomUniformGridList
	 * Size -> 0x0000 (FullSize[0x0418] - InheritedSize[0x0418])
	 */
	class USheikLockerRoomUniformGridList : public UIGUI_WidgetBase
	{
	public:
		void RefreshNavigationOverridesNative(TArray<class UIGUI_WidgetBase*> Items, int32_t CountOverride, int32_t NumberOfCells, EOrientation ScrollOrientation, bool WrapUp, bool WrapDown, bool WrapLeft, bool WrapRight);
		static UClass* StaticClass();
	};

	/**
	 * Class Sheik.SheikLoginManager
	 * Size -> 0x01B0 (FullSize[0x01D8] - InheritedSize[0x0028])
	 */
	class USheikLoginManager : public UObject
	{
	public:
		unsigned char                                              UnknownData_37K2[0x30];                                  // 0x0028(0x0030) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TWeakObjectPtr<class USheikGameInstance>                   GameInstance;                                            // 0x0058(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_FY86[0x178];                                 // 0x0060(0x0178) MISSED OFFSET (PADDING)

	public:
		bool QueueIntoCozmo(const class FScriptDelegate& UpdateDelegate, const class FScriptDelegate& CompletionDelegate, struct FSheikError* Error);
		void OnFullLogoutCompleteDelegate__DelegateSignature(int32_t LocalUserNum, bool bWasSuccessful, const struct FSheikError& Error);
		void OnCozmoQueueUpdateDelegate__DelegateSignature(int32_t TicketId, int32_t ServingNumber);
		void OnCozmoQueueCompleteDelegate__DelegateSignature(bool bWasSuccessful, const struct FSheikError& Error);
		void NotifyOnConsoleSubsystemLoginComplete(const class FScriptDelegate& OnComplete);
		bool Logout(const class FScriptDelegate& InDelegate, struct FSheikError* Error);
		bool LoginIntoEOS(const class FString& ID, const class FString& Token, const class FScriptDelegate& InDelegate, struct FSheikError* Error);
		bool LoginIntoCozmo(const class FScriptDelegate& InDelegate, struct FSheikError* Error);
		ESheikLoginStatus IsUserLoggedIntoPlatform();
		bool IsUserLoggedIntoEOS();
		bool IsUserLoggedIntoCozmo();
		bool IsLoggingOut();
		bool DisplayPlatformLoginUI(const class FScriptDelegate& InDelegate);
		bool CozmoBanInfoRequest(const class FScriptDelegate& InDelegate, struct FSheikError* Error);
		void CancelQueueIntoCozmo();
		static UClass* StaticClass();
	};

	/**
	 * Class Sheik.SheikMagazineEquipScreen
	 * Size -> 0x0010 (FullSize[0x0490] - InheritedSize[0x0480])
	 */
	class USheikMagazineEquipScreen : public UIGUI_ScreenBase
	{
	public:
		class UIGMoveMontage*                                      CurrentMoveToEquip;                                      // 0x0480(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		EMoveTier                                                  CurrentTierToEquip;                                      // 0x0488(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_LHL2[0x7];                                   // 0x0489(0x0007) MISSED OFFSET (PADDING)

	public:
		void TakePerk();
		void StopReading();
		void ShowNewMoveToEquip(class UIGMoveMontage* MoveMontage, EMoveTier MoveTier);
		void HandleOnClientIsAimingCannonChanged(bool IsAimingCannon);
		void HandleOnCharacterDied(ECauseOfDeath CauseOfDeath);
		void HandleOnCharacterDamaged(const struct FIGInstanceHitData& HitData);
		class UIGMovesetComponent* GetLocalPlayerMovesetComponent();
		EMoveTier GetExistingSlotTwoTier();
		class UIGMoveMontage* GetExistingSlotTwoMove();
		EMoveTier GetExistingSlotOneTier();
		class UIGMoveMontage* GetExistingSlotOneMove();
		class UIGMoveMontage* GetCurrentMoveToEquip();
		void EnableExtremeLogging(bool bEnable);
		void CloseEquipScreen();
		void BindToCharacterDelegates();
		void AssignMoveToSlotTwo();
		void AssignMoveToSlotOne();
		static UClass* StaticClass();
	};

	/**
	 * Class Sheik.SheikMainMenu
	 * Size -> 0x00E8 (FullSize[0x0568] - InheritedSize[0x0480])
	 */
	class USheikMainMenu : public USheikScreenBase
	{
	public:
		class USheikAccessorySystem*                               SheikAccessorySystem;                                    // 0x0480(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_JKKT[0x8];                                   // 0x0488(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class USheikStoreSystem*                                   SheikStoreSystem;                                        // 0x0490(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UClass*                                              MenuActorClass;                                          // 0x0498(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class ASheikUIActor*                                       MenuActor;                                               // 0x04A0(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FVector                                             MenuCharacterLocation;                                   // 0x04A8(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FRotator                                            MenuCharacterRotation;                                   // 0x04B4(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected
		TArray<class USheikUIActorCustomizer*>                     PartyCustomizers;                                        // 0x04C0(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Protected, NativeAccessSpecifierProtected
		TArray<struct FTransform>                                  PartyCharacterTransforms;                                // 0x04D0(0x0010) Edit, BlueprintVisible, ZeroConstructor, Protected, NativeAccessSpecifierProtected
		struct FRotator                                            CameraRotation;                                          // 0x04E0(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected
		struct FVector                                             CameraLocation;                                          // 0x04EC(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      CameraFieldOfView;                                       // 0x04F8(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      UltrawideRatioThreshold;                                 // 0x04FC(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      UltrawideMenuActorScale;                                 // 0x0500(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_ZF7O[0x24];                                  // 0x0504(0x0024) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnAccessoryLoadComplete;                                 // 0x0528(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, Protected, NativeAccessSpecifierProtected
		class FScriptMulticastDelegate                             OnGrantEntitlementCheckComplete;                         // 0x0538(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, Protected, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_LKN3[0x20];                                  // 0x0548(0x0020) MISSED OFFSET (PADDING)

	public:
		void ToggleMenuActorVisibility(bool bIsHidden);
		void SetupPartyActors();
		void SetSheikWalletSystem(class USheikWalletSystem* InWalletSystem);
		void SetSheikStoreSystem(class USheikStoreSystem* InStoreSystem);
		void SetSheikAccessorySystem(class USheikAccessorySystem* SheikAccSys);
		void OnWalletIdRevocationOccurred(TArray<class FName> RevokedWalledIds);
		void OnGrantEntitlementCheckComplete__DelegateSignature();
		void OnAccessoryLoadComplete__DelegateSignature();
		void HandleMenuActorScaling();
		void GrantEntitlementsCheck();
		class UIGUI_WidgetBase* GetLeaguesWidget();
		void EquipAccessories();
		static UClass* StaticClass();
	};

	/**
	 * Class Sheik.SheikMap
	 * Size -> 0x0198 (FullSize[0x0618] - InheritedSize[0x0480])
	 */
	class USheikMap : public UIGUI_ScreenBase
	{
	public:
		bool                                                       bIsSpectator;                                            // 0x0480(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_DB9I[0x7];                                   // 0x0481(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class ASheikPlayerStateCommon*                             SpectatorPlayerState;                                    // 0x0488(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bShowingFullMap;                                         // 0x0490(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_ITPT[0x7];                                   // 0x0491(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TMap<ESheikWaypointType, struct FSheikWaypointMarkerInfo>  WaypointImages;                                          // 0x0498(0x0050) Edit, BlueprintVisible, Protected, NativeAccessSpecifierProtected
		TArray<struct FSheikPooledWaypoint>                        WaypointPool;                                            // 0x04E8(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected
		class UImage*                                              DirectLine;                                              // 0x04F8(0x0008) Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UImage*                                              LaunchCone;                                              // 0x0500(0x0008) Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UImage*                                              Frustum;                                                 // 0x0508(0x0008) Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UCanvasPanel*                                        WaypointCanvasPanel;                                     // 0x0510(0x0008) Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UCanvasPanel*                                        HigherLayerWaypointCanvasPanel;                          // 0x0518(0x0008) Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UImage*                                              PlayAreaCircle;                                          // 0x0520(0x0008) Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UImage*                                              PlayAreaSquare;                                          // 0x0528(0x0008) Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UImage*                                              NextRingCircle;                                          // 0x0530(0x0008) Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UImage*                                              NextRingSquare;                                          // 0x0538(0x0008) Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UImage*                                              PlayerIcon;                                              // 0x0540(0x0008) Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UClass*                                              MapWaypointWBPClass;                                     // 0x0548(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UMaterialInstanceDynamic*                            MapMaterial;                                             // 0x0550(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UClass*                                              MapSquareRingWaypointWBPClass;                           // 0x0558(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FVector2D                                           MapDimensions;                                           // 0x0560(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FVector2D                                           RingPositionOffset;                                      // 0x0568(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class ASheikHUD*                                           SheikHUD;                                                // 0x0570(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FSheikMapLookupInfo                                 MapLookupInfo;                                           // 0x0578(0x0030) BlueprintVisible, BlueprintReadOnly, Protected, NativeAccessSpecifierProtected
		bool                                                       bLoadedMapLookupInfo;                                    // 0x05A8(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bDrawDirectLine;                                         // 0x05A9(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_LHBI[0x6];                                   // 0x05AA(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UMaterialInstanceDynamic*                            PlayAreaCircleMaterial;                                  // 0x05B0(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UMaterialInstanceDynamic*                            PlayAreaSquareMaterial;                                  // 0x05B8(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UMaterialInstanceDynamic*                            NextRingCircleMaterial;                                  // 0x05C0(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UMaterialInstanceDynamic*                            NextRingSquareMaterial;                                  // 0x05C8(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FTimerHandle                                        HideLaunchConeTimerHandle;                               // 0x05D0(0x0008) NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_MQOS[0x24];                                  // 0x05D8(0x0024) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      TeammateHeightThreshold;                                 // 0x05FC(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FVector2D                                           WaypointAuxiliaryIconPadding;                            // 0x0600(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_0Z9I[0x10];                                  // 0x0608(0x0010) MISSED OFFSET (PADDING)

	public:
		void UpdatePersistentSquareRing(const struct FSheikWaypointInfo& WaypointInfo, class UWidget* RingWaypoint, class UMaterialInstanceDynamic* RingMaterial);
		void UpdatePersistentCircleRing(const struct FSheikWaypointInfo& WaypointInfo, class UWidget* RingWaypoint, class UMaterialInstanceDynamic* RingMaterial);
		void SetWaypoint(const struct FSheikWaypointInfo& WaypointInfo);
		void SetForPlayer(class ASheikPlayerStateCommon* SheikPlayerState);
		void RemoveWaypoint(struct FSheikPooledWaypoint* WaypointWidget);
		void HideLaunchCone();
		void HideDirectLine();
		void HideAllDynamicWaypointWidgets();
		void HandleOnUpdateWaypoints_BP(TArray<struct FSheikWaypointInfo> Waypoints);
		void HandleOnUpdateWaypoints(TArray<struct FSheikWaypointInfo> Waypoints);
		void HandleOnUpdateOwningPlayerInfo_BP(const struct FSheikOwningPlayerInfo& OwningPlayerInfo);
		void HandleOnUpdateOwningPlayerInfo(const struct FSheikOwningPlayerInfo& OwningPlayerInfo);
		void HandleOnUpdateMapLookupInfo_BP(const struct FSheikMapLookupInfo& LookupInfo);
		void HandleOnUpdateMapLookupInfo(const struct FSheikMapLookupInfo& LookupInfo);
		void HandleOnUpdateLaunchCone(const struct FSheikCannonConeData& CannonConeData);
		void HandleOnTeammateRescueAlert(class AIGPlayerState* TeammateState, bool bIsTeammateDowned);
		void HandleOnTeammateInCombatAlert(class AIGPlayerState* TeammateState, bool bIsTeammateInCombat);
		void HandleOnTeammateHPAlert(class AIGPlayerState* TeammateState, bool bIsTeammateLowHealth);
		void HandleOnTeammateCannonLanded(class AIGPlayerState* TeammateState);
		void HandleOnStopShowingFullMap_BP();
		void HandleOnStopShowingFullMap();
		void HandleOnShowPlayZoneDirectPath();
		void HandleOnShowFullMap_BP();
		void HandleOnShowFullMap();
		void HandleOnMapTextureLoaded();
		void HandleOnHidePlayZoneDirectPath();
		void DrawDirectLineToPlayZone();
		struct FSheikPooledWaypoint CreateAndPlaceWaypoint(class UClass* WidgetClass, const struct FSheikWaypointInfo& WaypointInfo, const struct FSheikWaypointMarkerInfo& WaypointMarkerInfo);
		void ClearWaypoints();
		static UClass* StaticClass();
	};

	/**
	 * Class Sheik.SheikMapStateTimelineData
	 * Size -> 0x0020 (FullSize[0x0050] - InheritedSize[0x0030])
	 */
	class USheikMapStateTimelineData : public UDataAsset
	{
	public:
		bool                                                       bIsDebug;                                                // 0x0030(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_05T6[0x3];                                   // 0x0031(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    MinNumberOfPlayers;                                      // 0x0034(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    MaxNumberOfPlayers;                                      // 0x0038(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_IOZ4[0x4];                                   // 0x003C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FSheikRingState>                             Timeline;                                                // 0x0040(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Sheik.SheikFinalRingDynamicAdjustmentData
	 * Size -> 0x0030 (FullSize[0x0060] - InheritedSize[0x0030])
	 */
	class USheikFinalRingDynamicAdjustmentData : public UDataAsset
	{
	public:
		int32_t                                                    PlayerActivationLimit;                                   // 0x0030(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      InitialPreShrinkWaitTime;                                // 0x0034(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CombatShrinkPauseDuration;                               // 0x0038(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ShrinkStartDelay;                                        // 0x003C(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      AbsoluteMinimumRingRadius;                               // 0x0040(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ShrinkSpeed;                                             // 0x0044(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      PersistantShrinkSpeed;                                   // 0x0048(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      RingSpeed;                                               // 0x004C(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      TravelDistance;                                          // 0x0050(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      RingMoveDelay;                                           // 0x0054(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    EnabledBehaviors;                                        // 0x0058(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_SJLW[0x4];                                   // 0x005C(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Sheik.SheikMapStateManager
	 * Size -> 0x0080 (FullSize[0x0130] - InheritedSize[0x00B0])
	 */
	class USheikMapStateManager : public UActorComponent
	{
	public:
		TArray<struct FSheikRingState>                             RingStateTimeline;                                       // 0x00B0(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		class FName                                                BeaconActorTag;                                          // 0x00C0(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class USheikFinalRingDynamicAdjustmentData*                SuddenDeathRingData;                                     // 0x00C8(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    SuddenDeathShrinkCount;                                  // 0x00D0(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      DynamicRingStartShrinkTimestamp;                         // 0x00D4(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_BT0U[0x10];                                  // 0x00D8(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    CurrentRingStateIndex;                                   // 0x00E8(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_LDC0[0x44];                                  // 0x00EC(0x0044) MISSED OFFSET (PADDING)

	public:
		bool GetStartingRingLocation(struct FVector* InLocation);
		int32_t GetRingsSurvived();
		bool GetFinalRingLocation(struct FVector* InLocation);
		static UClass* StaticClass();
	};

	/**
	 * Class Sheik.SheikMapWaypoint
	 * Size -> 0x0008 (FullSize[0x0228] - InheritedSize[0x0220])
	 */
	class ASheikMapWaypoint : public AActor
	{
	public:
		ESheikWaypointType                                         WaypointType;                                            // 0x0220(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_9YOP[0x7];                                   // 0x0221(0x0007) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Sheik.SheikMatchmakingCallbacks
	 * Size -> 0x0118 (FullSize[0x01C8] - InheritedSize[0x00B0])
	 */
	class USheikMatchmakingCallbacks : public UActorComponent
	{
	public:
		class FScriptMulticastDelegate                             OnMatchmakingStarted;                                    // 0x00B0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnMatchmakingComplete;                                   // 0x00C0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnMatchmakingCanceled;                                   // 0x00D0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnRestrictedMatchFound;                                  // 0x00E0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnPlayerJoinsTeam;                                       // 0x00F0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnMatchmakingStatusChanged;                              // 0x0100(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnHotfixingComplete;                                     // 0x0110(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, Protected, NativeAccessSpecifierProtected
		bool                                                       bIsInMatchmaking;                                        // 0x0120(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_ASDZ[0x7];                                   // 0x0121(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              CurrentMatchConfig;                                      // 0x0128(0x0010) Edit, BlueprintVisible, ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bIsRestrictedMatchCreator;                               // 0x0138(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_I9YE[0x7];                                   // 0x0139(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              RestrictedMatchJoinCode;                                 // 0x0140(0x0010) Edit, BlueprintVisible, ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FDateTime                                           MatchmakingStartTime;                                    // 0x0150(0x0008) Edit, BlueprintVisible, ZeroConstructor, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		EMatchmakingStatus                                         LastMatchmakingStatus;                                   // 0x0158(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_S9YK[0x7];                                   // 0x0159(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              FoundGameIpPort;                                         // 0x0160(0x0010) ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class FString                                              FoundGamePlayerSessionId;                                // 0x0170(0x0010) ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class USheikGameInstance*                                  SheikGameInstance;                                       // 0x0180(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		TArray<struct FMatchmakingConfiguration>                   MatchmakingConfigs;                                      // 0x0188(0x0010) ZeroConstructor, Protected, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_E9AD[0x30];                                  // 0x0198(0x0030) MISSED OFFSET (PADDING)

	public:
		void UpdateHotfixesToVersion(int32_t DesiredVersion);
		void UpdateHotfixes();
		bool StartMatchmaking(const class FString& MatchConfig, bool bShouldCreateRestrictedGame, const class FString& RestrictedSessionGameCode, int32_t TimeToRestrictGameSession, bool RestrictedSessionOpenToPublic, struct FSheikError* Error);
		void RefreshMatchmakingConfigsList();
		void OnRestrictedMatchFound__DelegateSignature(const class FString& InviteCode);
		void OnPlayerJoinsTeam__DelegateSignature(bool bIsLeader);
		void OnMatchmakingStatusChanged__DelegateSignature(EMatchmakingStatus NewStatus);
		void OnMatchmakingComplete__DelegateSignature(bool bSuccessful, const struct FSheikError& Error);
		void OnLeftMatchmaking__DelegateSignature(bool bSuccessful, const struct FSheikError& Error);
		void OnJoinedMatchmaking__DelegateSignature(const class FString& MatchConfig);
		void OnHotfixSystemComplete(EUpdateCompletionStatus CompletionStatus);
		void OnHotfixingComplete__DelegateSignature(bool bSuccessful, EUpdateCompletionStatus Result, const struct FSheikError& Error);
		void JoinFoundMatchmakingServer();
		bool IsPlayerTeamLeader();
		bool IsPlayerInTeam();
		bool IsMatchConfigPlayground(const struct FMatchmakingConfiguration& InConfig);
		bool IsMatchConfigForTeams(const struct FMatchmakingConfiguration& InConfig);
		bool IsMatchConfigExcludedFromFiltering(const struct FMatchmakingConfiguration& InConfig);
		bool IsInMatchmaking();
		void GetUpdatedCurrentMatchConfig(class FString* OutConfig);
		TArray<struct FMatchmakingConfiguration> GetUnfilteredListOfMatchmakingConfigs();
		struct FTimespan GetTimeElapsed();
		class FText GetTextForMatchmakingStatus(EMatchmakingStatus MatchmakingStatus);
		class FString GetRestrictedMatchJoinCode();
		EMatchConfigType GetMatchTypeFromConfig(const struct FMatchmakingConfiguration& InConfig);
		EMatchmakingStatus GetMatchmakingStatus();
		void GetMatchConfiguration(const class FString& MatchConfigName, struct FMatchmakingConfiguration* MatchConfig);
		void GetLocalizedStringsFromDisplayName(const class FString& DisplayName, class FText* Title, class FText* SubTitle);
		TArray<struct FMatchmakingConfiguration> GetListOfMatchmakingConfigs();
		struct FMatchmakingConfiguration GetDummyDevServerMatchConfig();
		class FString GetCurrentMatchConfig();
		void Debug_EndMatchmaking(bool bMatchFound);
		void CleanupOldSessions();
		bool CancelMatchmaking(struct FSheikError* Error);
		static UClass* StaticClass();
	};

	/**
	 * Class Sheik.SheikMatchRewardDataAsset
	 * Size -> 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
	 */
	class USheikMatchRewardDataAsset : public UDataAsset
	{
	public:
		TArray<struct FMatchCompletionReward>                      MatchCompletionRewards;                                  // 0x0030(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Sheik.SheikMinigame
	 * Size -> 0x0060 (FullSize[0x0478] - InheritedSize[0x0418])
	 */
	class USheikMinigame : public UIGUI_WidgetBase
	{
	public:
		class FScriptMulticastDelegate                             OnMinigameStarted;                                       // 0x0418(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnMinigameInput;                                         // 0x0428(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		struct FSheikMinigameInfo                                  MinigameInfo;                                            // 0x0438(0x0030) Edit, BlueprintVisible, NoDestructor, Protected, NativeAccessSpecifierProtected
		float                                                      CursorPosition;                                          // 0x0468(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       IsMinigameActive;                                        // 0x046C(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       CurrentlyBouncingBack;                                   // 0x046D(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_DYFU[0x2];                                   // 0x046E(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      TimeSinceLastBounce;                                     // 0x0470(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       CurrentlyInTarget;                                       // 0x0474(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       TargetHitsAllowed;                                       // 0x0475(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_PI5U[0x2];                                   // 0x0476(0x0002) MISSED OFFSET (PADDING)

	public:
		void UpdateMinigame_BP();
		void StartMinigame_BP(const struct FSheikMinigameInfo& MinigameSpecs);
		void StartMinigame(const struct FSheikMinigameInfo& MinigameSpecs);
		void ProcessInputOnMinigame(bool AutoFail);
		bool IsCursorInTarget();
		bool IsCursorInGradient();
		void EndMinigame_BP();
		void EndMinigame();
		void ContinueGame_BP(bool ResetCursorPosition);
		void ContinueGame(bool ResetCursorPosition);
		void AutoSucceedMinigame();
		static UClass* StaticClass();
	};

	/**
	 * Class Sheik.SheikMinimap
	 * Size -> 0x0000 (FullSize[0x0618] - InheritedSize[0x0618])
	 */
	class USheikMinimap : public USheikMap
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Sheik.SheikMinimapIcon
	 * Size -> 0x0010 (FullSize[0x0428] - InheritedSize[0x0418])
	 */
	class USheikMinimapIcon : public UIGUI_WidgetBase
	{
	public:
		bool                                                       bCanRotate;                                              // 0x0418(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_XBGW[0x7];                                   // 0x0419(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class ASheikPlayerStateCommon*                             IconPlayerState;                                         // 0x0420(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		void UpdateTeammateRescueAlert(bool bIsTeammateDowned);
		void UpdateTeammateInCombatAlert(bool bIsTeammateInCombat);
		void UpdateTeammateHPAlert(bool bIsTeammateLowHealth);
		void UpdateTeammateHeightThreshold(ESheikWaypointVerticalDirection TeammateVerticalDirection);
		void SetTopLeft(const struct FVector2D& Value);
		void SetTint(const struct FLinearColor& NewTint);
		void SetSize(const struct FVector2D& NewSize);
		void SetSineOfNegativeRotation(float Value);
		void SetOpacity(float NewOpacity);
		void SetMaskDimensions(float Left, float Top, float Width, float Height);
		void SetImage(class UTexture2D* NewTexture);
		void SetCosineOfNegativeRotation(float Value);
		void SetCenter(const struct FVector2D& Value);
		void SetBottomRight(const struct FVector2D& Value);
		void SetAngle(float Angle);
		void PlayPingAnimation(bool bIsOutOfBounds);
		void OnTeammateLanded();
		void HandleTeamInfoUpdated();
		static UClass* StaticClass();
	};

	/**
	 * Class Sheik.SheikNavigationInvokerComponent
	 * Size -> 0x0008 (FullSize[0x00C0] - InheritedSize[0x00B8])
	 */
	class USheikNavigationInvokerComponent : public UNavigationInvokerComponent
	{
	public:
		bool                                                       bAutoRegisterForNavigation;                              // 0x00B8(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EInvokerShape                                              GenerationShape;                                         // 0x00B9(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_R8KN[0x6];                                   // 0x00BA(0x0006) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Sheik.SheikNavInvokerActorBase
	 * Size -> 0x0010 (FullSize[0x0230] - InheritedSize[0x0220])
	 */
	class ASheikNavInvokerActorBase : public AActor
	{
	public:
		class USheikNavigationInvokerComponent*                    NavInvokerComponent;                                     // 0x0220(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bStartDormant;                                           // 0x0228(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_9QJ9[0x7];                                   // 0x0229(0x0007) MISSED OFFSET (PADDING)

	public:
		void UpdateGenerationShape(EInvokerShape NewShape);
		void UpdateGenerationRadius(float NewGenerationRadius);
		void UpdateBoxGenerationExtents(float Width, float Height);
		void ShutdownInvoker();
		void RegisterInvoker();
		static UClass* StaticClass();
	};

	/**
	 * Class Sheik.SheikNoticesManager
	 * Size -> 0x0020 (FullSize[0x0048] - InheritedSize[0x0028])
	 */
	class USheikNoticesManager : public UObject
	{
	public:
		class USheikGameInstance*                                  SheikGameInstance;                                       // 0x0028(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_3HJQ[0x18];                                  // 0x0030(0x0018) MISSED OFFSET (PADDING)

	public:
		TArray<struct FNoticesUIData> GetProcessedNotices();
		bool CanShowNotices(int32_t HoursBetweenShowingPopupNotices, const struct FIGTimeOfDay& NoticesPopupResetTime);
		static UClass* StaticClass();
	};

	/**
	 * Class Sheik.SheikNotificationsManager
	 * Size -> 0x0040 (FullSize[0x0068] - InheritedSize[0x0028])
	 */
	class USheikNotificationsManager : public UObject
	{
	public:
		class FScriptMulticastDelegate                             OnNotificationsUpdated;                                  // 0x0028(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnNotificationExpired;                                   // 0x0038(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_AFE6[0x8];                                   // 0x0048(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FSheikFrontendNotification>                  Notifications;                                           // 0x0050(0x0010) ZeroConstructor, Protected, NativeAccessSpecifierProtected
		TWeakObjectPtr<class USheikGameInstance>                   GameInstance;                                            // 0x0060(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected

	public:
		void RemoveNotification(const struct FSheikFrontendNotification& NotificationToRemove);
		void QueueNotification(const struct FSheikFrontendNotification& Notification);
		void OnNotificationsUpdated__DelegateSignature();
		void OnNotificationExpired__DelegateSignature(const struct FSheikFrontendNotification& Notification);
		bool HasNotifications();
		int32_t GetNotificationsCount();
		TArray<struct FSheikFrontendNotification> GetNotifications();
		void GetNotification(struct FSheikFrontendNotification* Notification, bool* bValid);
		void AcceptNotificationAction();
		static UClass* StaticClass();
	};

	/**
	 * Class Sheik.SheikOnlineAsyncTaskManager
	 * Size -> 0x0050 (FullSize[0x0078] - InheritedSize[0x0028])
	 */
	class USheikOnlineAsyncTaskManager : public UObject
	{
	public:
		unsigned char                                              UnknownData_63NI[0x50];                                  // 0x0028(0x0050) Fix size for supers

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Sheik.SheikOnlineGameMatchReporter
	 * Size -> 0x01B8 (FullSize[0x0268] - InheritedSize[0x00B0])
	 */
	class USheikOnlineGameMatchReporter : public UActorComponent
	{
	public:
		unsigned char                                              UnknownData_5RDS[0x90];                                  // 0x00B0(0x0090) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    ExpirationTime;                                          // 0x0140(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		int32_t                                                    CancellationTime;                                        // 0x0144(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class FString                                              SoloActivityName;                                        // 0x0148(0x0010) Edit, BlueprintVisible, ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class FString                                              DuoActivityName;                                         // 0x0158(0x0010) Edit, BlueprintVisible, ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class FString                                              TrioActivityName;                                        // 0x0168(0x0010) Edit, BlueprintVisible, ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class FString                                              QuadActivityName;                                        // 0x0178(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class FString                                              PlaygroundActivityName;                                  // 0x0188(0x0010) Edit, BlueprintVisible, ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class FString                                              SnowballFightSoloActivityName;                           // 0x0198(0x0010) Edit, BlueprintVisible, ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class FString                                              SnowballFightDuoActivityName;                            // 0x01A8(0x0010) Edit, BlueprintVisible, ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class FString                                              SnowballFightTrioActivityName;                           // 0x01B8(0x0010) Edit, BlueprintVisible, ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class FString                                              SnowballFightQuadActivityName;                           // 0x01C8(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_3PPF[0x90];                                  // 0x01D8(0x0090) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Sheik.SheikOnlineSession
	 * Size -> 0x0020 (FullSize[0x0048] - InheritedSize[0x0028])
	 */
	class USheikOnlineSession : public UOnlineSession
	{
	public:
		unsigned char                                              UnknownData_3GEE[0x20];                                  // 0x0028(0x0020) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Sheik.SheikOpponentDownedTimer
	 * Size -> 0x0020 (FullSize[0x0438] - InheritedSize[0x0418])
	 */
	class USheikOpponentDownedTimer : public UIGUI_WidgetBase
	{
	public:
		class ASheikCharacter*                                     DownedCharacter;                                         // 0x0418(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UOverlay*                                            Visual;                                                  // 0x0420(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UTextBlock*                                          ReviveTimerText;                                         // 0x0428(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UWidgetAnimation*                                    CountingDownAnim;                                        // 0x0430(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Sheik.SheikPartyManager
	 * Size -> 0x0B68 (FullSize[0x0BE0] - InheritedSize[0x0078])
	 */
	class USheikPartyManager : public USheikOnlineAsyncTaskManager
	{
	public:
		unsigned char                                              UnknownData_JKT3[0x8];                                   // 0x0078(0x0008) Fix Super Size
		unsigned char                                              UnknownData_93H5[0x10];                                  // 0x0080(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnPartyPlayerJoined;                                     // 0x0090(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_VM5J[0x30];                                  // 0x00A0(0x0030) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnPartyPlayerLeft;                                       // 0x00D0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_SYZ4[0x30];                                  // 0x00E0(0x0030) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnPartyPlayerKicked;                                     // 0x0110(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_J8V9[0x30];                                  // 0x0120(0x0030) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnPartyUpdated;                                          // 0x0150(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnPartyCreated;                                          // 0x0160(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_GIFV[0x18];                                  // 0x0170(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnPartyJoined;                                           // 0x0188(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_XZDK[0x18];                                  // 0x0198(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnPartyLeft;                                             // 0x01B0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_37C5[0x18];                                  // 0x01C0(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnPartySearchComplete;                                   // 0x01D8(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_4HUO[0x18];                                  // 0x01E8(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnPartyInvitesSent;                                      // 0x0200(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_W6P9[0x18];                                  // 0x0210(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnPartyInviteResponseSent;                               // 0x0228(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_FO04[0x18];                                  // 0x0238(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnPlayerKickedComplete;                                  // 0x0250(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_MK3P[0x18];                                  // 0x0260(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnPartyMessageSent;                                      // 0x0278(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_TZJO[0x18];                                  // 0x0288(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnPartyMemberPromoted;                                   // 0x02A0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_QIK5[0x18];                                  // 0x02B0(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnCozmoPartyInviteReceived;                              // 0x02C8(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_PENG[0x18];                                  // 0x02D8(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnCozmoPartyInviteReceivedWithAccountInfo;               // 0x02F0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_EFY0[0x18];                                  // 0x0300(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnSetAttributes;                                         // 0x0318(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_11JW[0x18];                                  // 0x0328(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnMatchmakingStarted;                                    // 0x0340(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnMatchmakingStopped;                                    // 0x0350(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnMatchmakingFound;                                      // 0x0360(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnMatchmakingFailed;                                     // 0x0370(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnCozmoPartyPlayerAttributesUpdated;                     // 0x0380(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_VCZT[0x18];                                  // 0x0390(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnPartyHotfixVersionSyncComplete;                        // 0x03A8(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		struct FDateTime                                           PartyMatchmakingStartTime;                               // 0x03B8(0x0008) Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnAcceptedPlatformInviteBypassStartupScreen;             // 0x03C0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnVoiceChatPlayerTalkingUpdated;                         // 0x03D0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnVoiceChatOptionsUpdated;                               // 0x03E0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnVoiceChatMuteListChanged;                              // 0x03F0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnVoiceChatAvailableAudioDevicesChanged;                 // 0x0400(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ZSVN[0x158];                                 // 0x0410(0x0158) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnPSNActivityEventReceived;                              // 0x0568(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_808N[0x668];                                 // 0x0578(0x0668) MISSED OFFSET (PADDING)

	public:
		void UpdateSkillData();
		void UpdatePlayerAttributeData(const class FString& PlayerName, ESheikPlatformService PlatformService, int32_t CloutLevel, int32_t HotfixVersion, int32_t PlayerSkill, int32_t CrossPlaySettingEnabled);
		void UpdateHotfixVersionToParty();
		void UpdateCrossPlayEnabledSetting();
		void UpdateAvailableAudioDevices();
		void ToggleVoiceOutputMute();
		void ToggleVoiceInputMute();
		void ToggleVoiceChatPushToTalkMode();
		void ToggleVoiceChatPushToTalk(bool bCanTalk);
		void ToggleVoiceChatMutedForPlayer(const class FString& PlayerName);
		void ToggleVoiceChatMuted();
		void ToggleVoiceChatEnabled();
		void ToggleVoiceChatDeafened();
		void SyncPartyToLeaderHotfixVersion();
		void ShowPlayerReviewDialog(const class FString& MatchID, const class FScriptDelegate& OnCompleteDelegate);
		void ShowChatRestrictionDialogue();
		void SetVoiceOutputVolume(float Volume);
		void SetVoiceChatPushToTalkMode(bool bIsPushToTalk);
		void SetVoiceChatMuteStatusForPlayer(const class FString& PlayerName, bool bIsMuted);
		void SetVoiceChatEnabled(bool bIsEnabled);
		void SetVoiceChatActiveParty(ESheikVOIPPartyType VoipPartyType);
		void SetUsingMultiplayerFeatures(bool bUsingMP, bool bIsUsingCrossPlay);
		void SetAudioOutputDevice(const class FString& OutputDeviceId);
		void SetAudioInputDevice(const class FString& InputDeviceId);
		void SetAttemptingMatchmaking(bool InAttemptingMatchmaking);
		void SendMessageToParty(const class FString& Message);
		void SendCozmoInviteResponse(const struct FPartyInvitation& PartyInvitation, bool bAcceptedInvite);
		void ReportFailureToSyncToPartyHotfixVersion();
		void PromotePlayerToPartyLeader(const class FString& CozmoId, const class FString& EOSPuid);
		void OnVoiceChatPlayerTalkingUpdated__DelegateSignature(const class FString& ChannelName, const class FString& ProductUserId, bool bIsTalking, bool bIsLocalPlayer);
		void OnVoiceChatOptionsUpdated__DelegateSignature(bool bIsLocalVOIPEnabled, bool bIsLocalVOIPMuted, bool bIsLocalVOIPDeafened, bool bIsLocalVOIPPushToTalk);
		void OnVoiceChatMuteListChanged__DelegateSignature();
		void OnVoiceChatAvailableAudioDevicesChanged__DelegateSignature();
		void OnPSNActivityEventReceived__DelegateSignature();
		void OnPreLoadMap(const class FString& MapUrl);
		void OnPartyUpdated__DelegateSignature();
		void OnPartyPlayerLeft__DelegateSignature(const class FString& PlayerId);
		void OnPartyPlayerKicked__DelegateSignature(const class FString& PlayerId);
		void OnPartyPlayerJoined__DelegateSignature(const class FString& PlayerId, const class FString& MetaData, TArray<struct FMatchmakerPlayerAttribute> Attributes);
		void OnPartyInviteResponseSent__DelegateSignature(const struct FPartyInvitation& PartyInvitation, bool bAccepted);
		void OnPartyHotfixVersionSyncComplete__DelegateSignature(bool bWasSuccessful, const struct FSheikError& Error);
		void OnGameExit();
		void OnEnterGameMap();
		void OnCozmoPartyPlayerAttributesUpdated__DelegateSignature(const class FString& PlayerId, const struct FPlayerPartyAttributesInfo& UpdatedPlayerInfo);
		void OnCozmoPartyInviteReceivedWithAccountInfo__DelegateSignature(const struct FPartyInvitation& PartyInvitation, const struct FSheikPlayerAccount& Account);
		void OnCozmoPartyInviteReceived__DelegateSignature(const struct FPartyInvitation& PartyInvitation);
		void OnCozmoMatchmakingCanceled(bool bSuccessful, const struct FSheikError& Error);
		void OnAcceptedPlatformInviteBypassStartupScreen__DelegateSignature();
		void MuteAllPlayers(bool bMuteAll);
		void LeaveTeamParty();
		void LeaveParty(bool bLeaveCozmoParty, bool bLeaveTeamParty);
		void KickPlayerFromParty(const class FString& PlayerCozmoId);
		void JoinPrivateParty(const class FString& PartyId, bool bJoinCozmoParty);
		void JoinPartyByLeaderId(const class FString& LeaderPlayerId, const class FString& PlatformAccountId, bool bJoinCozmoParty);
		void JoinPartyByGuid(const class FString& PartyGuid, const class FString& PlatformAccountId, bool bJoinCozmoParty);
		void JoinPartyByAccount(const struct FSheikPlayerAccount& Account);
		bool IsVoiceChatMutedForPlayer(const class FString& PlayerName);
		bool IsVoiceChatEnabled();
		bool IsPlayerInVOIPParty(const class FString& PlayerName, ESheikVOIPPartyType VOIPParty);
		bool IsPlayerInMuteList(const class FString& PlayerName);
		bool IsPartyOnSameHotfixVersion(bool* bMemberIsOutOfDate, bool* bLocalIsOutOfDate);
		bool IsPartyFull();
		bool IsPartyChatOnlyEnabled();
		bool IsLocalPlayerVoiceChatMuted();
		bool IsLocalPlayerVoiceChatDeafened();
		bool IsLocalPlayerPartyLeader();
		bool IsLocalPlayerLobbyLeader();
		bool IsInEOSLobby();
		bool IsAttemptingMatchmaking();
		void InviteToPlatformParty(const struct FSheikPlayerAccount& PlayerAccount);
		void InviteToCozmoParty(const class FString& PlayerCozmoId);
		void InitializeVoiceChat();
		bool HasVoiceChatPrivilege();
		bool HasPSNActivityIntent();
		bool HasPlatformParty();
		bool HasEOSParty();
		bool HasCozmoParty();
		void HandleRestrictedMatchFound(const class FString& InviteCode);
		bool GetVoiceChatMuteStatusForPlayer(const class FString& PlayerName);
		ESheikVOIPPartyType GetVoiceChatActiveParty();
		struct FTimespan GetTimeElapsed();
		TArray<class FString> GetPlayersInVoiceChannel();
		class FString GetPlatformPartyId();
		TArray<class FString> GetPartyMemberNames();
		class FString GetLocalProductUserId();
		struct FPlayerPartyAttributesInfo GetLocalPlayerAttributeData();
		void GetLoadoutFromAttributes(TArray<struct FMatchmakerPlayerAttribute> AttributeList, struct FCharacterLoadout* OutLoadout);
		class FString GetEOSPartyId();
		bool GetEosAudioOutputDeviceMuted();
		bool GetEosAudioInputDeviceMuted();
		struct FEOSVoiceChatDeviceInfo GetDefaultAudioOutputDevice();
		struct FEOSVoiceChatDeviceInfo GetDefaultAudioInputDevice();
		struct FEOSVoiceChatDeviceInfo GetCurrentAudioOutputDevice();
		struct FEOSVoiceChatDeviceInfo GetCurrentAudioInputDevice();
		class FString GetCozmoPartyId();
		TArray<struct FEOSVoiceChatDeviceInfo> GetAvailableAudioOutputDevices();
		TArray<struct FEOSVoiceChatDeviceInfo> GetAvailableAudioInputDevices();
		void DisplayPlatformInviteUI();
		void DisplayPartyInfo(class AHUD* HUD, float TextStartX, float TextStartY, float TextVerticalOffset);
		void CreateTeamPartyIfNotRunning();
		void CreatePrivateParty();
		void ClearPSNActivityIntent();
		bool CheckAvailableAudioDevicesForDeviceName(const class FString& AudioDeviceName, TArray<struct FEOSVoiceChatDeviceInfo> AvailableAudioDevices);
		class FString CheckActivityForMatchmakingConfig();
		bool CanInviteToParty(const struct FSheikPlayerAccount& Account);
		bool AreAllPlayersMuted();
		static UClass* StaticClass();
	};

	/**
	 * Class Sheik.SheikPinComponent
	 * Size -> 0x0198 (FullSize[0x0248] - InheritedSize[0x00B0])
	 */
	class USheikPinComponent : public UActorComponent
	{
	public:
		class FScriptMulticastDelegate                             OnPinAbortedDelegate;                                    // 0x00B0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnResurrectionAbortedDelegate;                           // 0x00C0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class ASheikCharacter*                                     SheikOwner;                                              // 0x00D0(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		TArray<struct FSheikPinMinigameSettings>                   PinMinigameSettings;                                     // 0x00D8(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPrivate
		struct FPinAnimationInfo                                   AnimationInfo;                                           // 0x00E8(0x00C8) Edit, DisableEditOnInstance, NativeAccessSpecifierPrivate
		float                                                      DefaultMinigameTime;                                     // 0x01B0(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FVector                                             PinAreaExtents;                                          // 0x01B4(0x000C) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FVector                                             PinNotifyAreaExtents;                                    // 0x01C0(0x000C) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_MXMW[0x4];                                   // 0x01CC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UISheikPinBoxComponent*                              DetectPinBoxComponent;                                   // 0x01D0(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UBoxComponent*                                       NotifyPinBoxComponent;                                   // 0x01D8(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		TArray<class AActor*>                                      ActorsNotifyRange;                                       // 0x01E0(0x0010) ZeroConstructor, NativeAccessSpecifierPrivate
		TArray<class AActor*>                                      ActorsInPinArea;                                         // 0x01F0(0x0010) ZeroConstructor, NativeAccessSpecifierPrivate
		struct FPinStateInfo                                       PinStateInfo;                                            // 0x0200(0x0028) Net, RepNotify, NoDestructor, NativeAccessSpecifierPrivate
		bool                                                       bPinningCollisionEnabled;                                // 0x0228(0x0001) Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_TCGH[0x3];                                   // 0x0229(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             PinSplashTargetDirection;                                // 0x022C(0x000C) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FTimerHandle                                        ReenableMinigameNeedleHandle;                            // 0x0238(0x0008) Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		int32_t                                                    MinigameInputs;                                          // 0x0240(0x0004) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      TimeForSuccessfulPin;                                    // 0x0244(0x0004) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		void VictimMontageEnded(class UAnimMontage* Montage, bool bInterrupted);
		void ServerReportMinigameResultsForVictim(bool bSuccess);
		void ServerReportMinigameInputSuccess(int32_t SuccessfulInputs);
		void ServerReportMinigameHasBegun();
		void ServerReportMinigameAutoSuccessForVictim();
		void OnResInterrupted(const struct FIGInstanceHitData& HitData);
		void OnResAborted();
		void OnRep_PinStateInfo();
		void OnRep_PinningCollisionEnabled();
		void OnPinInterrupted(const struct FIGInstanceHitData& HitData);
		void OnPinAborted();
		void OnOwnerRecovered(class AIGCharacter* InRecovered);
		void OnOwnerDowned(class AIGCharacter* InVictim);
		void OnMinigameTargetHitTimerExpired();
		void OnMinigameStarted(const struct FSheikMinigameInfo& MinigameInfo);
		void OnMinigamePenaltyTimerExpired();
		void OnMinigameInput(const struct FSheikMinigameResults& MinigameResults);
		void OnExitPinNotifyArea(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex);
		void OnExitPinArea(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex);
		void OnEnterPinNotifyArea(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
		void OnEnterPinArea(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
		TArray<struct FSheikPinMinigameSettings> GetPinMinigameSettings();
		int32_t GetPinMinigameHitsNeededForKickout();
		int32_t GetPinMinigameHitsForCurrentPin();
		struct FSheikPinMinigameSettings GetPinMingameSettingsForCurrentKnockdown();
		void ClientStartMinigameForVictim();
		void ClientSetCharacterCollisionEnabled(bool bEnabled, class ASheikCharacter* Attacker, class ASheikCharacter* Victim);
		void ClientEndMinigameForVictim();
		void ClientBroadcastPinMinigameInputSuccess(class ASheikCharacter* Attacker, class ASheikCharacter* Victim, int32_t SuccessfulInputs);
		void ClientBroadcastPinEvent(ESheikPinEventType InType, class ASheikCharacter* Attacker, class ASheikCharacter* Victim);
		void AttackerMontageEnded(class UAnimMontage* Montage, bool bInterrupted);
		static UClass* StaticClass();
	};

	/**
	 * Class Sheik.SheikPing
	 * Size -> 0x0028 (FullSize[0x04E0] - InheritedSize[0x04B8])
	 */
	class USheikPing : public USheikWidgetBase
	{
	public:
		struct FVector                                             WorldLocation;                                           // 0x04B8(0x000C) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FMargin                                             ScreenPadding;                                           // 0x04C4(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_AU0L[0x4];                                   // 0x04D4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UVerticalBox*                                        PingBox;                                                 // 0x04D8(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected

	public:
		struct FVector2D GetReflectedVectorWidgetLocation();
		struct FSheikPingScreenLocation GetDesiredScreenLocation(const struct FVector2D& InWidgetPosition, bool bForceToTopOrBottomEdge);
		static UClass* StaticClass();
	};

	/**
	 * Class Sheik.ISheikPinBoxComponent
	 * Size -> 0x0000 (FullSize[0x0490] - InheritedSize[0x0490])
	 */
	class UISheikPinBoxComponent : public UIGInteractableBoxComponent
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Sheik.SheikAbortPinNotify
	 * Size -> 0x0000 (FullSize[0x0098] - InheritedSize[0x0098])
	 */
	class USheikAbortPinNotify : public UIGNotifyStateBase
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Sheik.SheikOrientForPinState
	 * Size -> 0x0010 (FullSize[0x00A8] - InheritedSize[0x0098])
	 */
	class USheikOrientForPinState : public UIGNotifyStateBase
	{
	public:
		float                                                      NotifyDuration;                                          // 0x0098(0x0004) BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FRotator                                            TargetRotationOffset;                                    // 0x009C(0x000C) Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Sheik.SheikPlayerAccountsManager
	 * Size -> 0x0078 (FullSize[0x00F0] - InheritedSize[0x0078])
	 */
	class USheikPlayerAccountsManager : public USheikOnlineAsyncTaskManager
	{
	public:
		TWeakObjectPtr<class USheikGameInstance>                   GameInstance;                                            // 0x0078(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_S7HK[0x70];                                  // 0x0080(0x0070) MISSED OFFSET (PADDING)

	public:
		void SetPresence(ESheikPresence Presence);
		void SendFunnelTelemetry(ESheikFunnelLocation Location);
		ESheikPlatformService ResolveServiceToDisplay(const struct FSheikPlayerSocialEntry& SocialEntry);
		class FString ResolveDisplayName(const struct FSheikPlayerSocialEntry& SocialEntry);
		void QueryPartyMemberAccountData(const struct FPartyMemberInfo& PartyMemberInfo, const class FScriptDelegate& Delegate);
		void OnQueryPartyMemberAccountData__DelegateSignature(const struct FSheikPlayerAccount& FoundAccount, bool bWasSuccessful);
		void OnGetSocialData__DelegateSignature(TArray<struct FSheikPlayerSocialEntry> SocialEntries, bool bWasSuccessful);
		void OnGetRecentPlayers__DelegateSignature(TArray<struct FSheikPlayerSocialEntry> SocialEntries, bool bWasSuccessful);
		bool IsValidPlayerSocialEntry(const struct FSheikPlayerSocialEntry& PlayerSocialEntry);
		bool IsValidPlayerAccount(const struct FSheikPlayerAccount& Account);
		bool IsValidPartyMemberInfo(const struct FPartyMemberInfo& PartyMemberInfo);
		bool IsValidPartyInvitation(const struct FPartyInvitation& PartyInvitation);
		void GetRecentPlayers(const class FScriptDelegate& Delegate);
		void GetPlayerSocialData(const class FScriptDelegate& Delegate);
		void GetMyPlatformsExternalAccount(const struct FSheikPlayerAccount& Account, struct FSheikExternalAccount* ExternalAccount);
		struct FSheikExternalAccount GetLatestExternalAccount(const struct FSheikPlayerAccount& SheikAccount);
		void GenerateRandomSocialEntry(struct FSheikPlayerSocialEntry* Entry);
		static UClass* StaticClass();
	};

	/**
	 * Class Sheik.SheikPlayerControllerCommon
	 * Size -> 0x06E0 (FullSize[0x0D28] - InheritedSize[0x0648])
	 */
	class ASheikPlayerControllerCommon : public AIGPlayerController
	{
	public:
		TArray<int32_t>                                            PlayerViewHistory;                                       // 0x0648(0x0010) ZeroConstructor, Transient, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_X1JZ[0x4D8];                                 // 0x0658(0x04D8) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UClass*                                              SheikGameInfoClass;                                      // 0x0B30(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnRoundPlacementChanged;                                 // 0x0B38(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnTeamInfoUpdated;                                       // 0x0B48(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnCharacterDied;                                         // 0x0B58(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnCharacterDamaged;                                      // 0x0B68(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnCharacterPawnChanged;                                  // 0x0B78(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnEnteredSpectatorMode;                                  // 0x0B88(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		TMap<int32_t, class USkeletalMesh*>                        CachedCharacterMeshes;                                   // 0x0B98(0x0050) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		float                                                      CullDistanceForSpectatorSquared;                         // 0x0BE8(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bGamepadToggleableDebugMenu;                             // 0x0BEC(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_RORS[0x3];                                   // 0x0BED(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      TimeToWaitBetweenPings;                                  // 0x0BF0(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ContextHoldPressTime;                                    // 0x0BF4(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      PingModeTimeout;                                         // 0x0BF8(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      PingLifetime;                                            // 0x0BFC(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             PingAimOffset;                                           // 0x0C00(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      PingAngleHeight;                                         // 0x0C0C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      PingAngleWidth;                                          // 0x0C10(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaxBoxCastWidthAndHeight;                                // 0x0C14(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaxBoxCastLength;                                        // 0x0C18(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaxPingDistance;                                         // 0x0C1C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_0GUT[0x8];                                   // 0x0C20(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		ECollisionChannel                                          PingCollisionChannel;                                    // 0x0C28(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_Y172[0x7];                                   // 0x0C29(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FSheikAIVisualizationEntry>                  BotDebugEntries;                                         // 0x0C30(0x0010) Net, ZeroConstructor, NativeAccessSpecifierPublic
		unsigned char                                              DefaultMeshesToMerge[0x10];                              // 0x0C40(0x0010) UNKNOWN PROPERTY: ArrayProperty
		unsigned char                                              UnknownData_5DUZ[0x40];                                  // 0x0C50(0x0040) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              CachedSessionId;                                         // 0x0C90(0x0010) ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		int32_t                                                    RoundPlacement;                                          // 0x0CA0(0x0004) Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bHasPlayerPlacementBeenProcessed;                        // 0x0CA4(0x0001) Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bPlayerShouldMoveToSpectator;                            // 0x0CA5(0x0001) Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bMakeTeammatesVisible;                                   // 0x0CA6(0x0001) Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_7CDG[0x1];                                   // 0x0CA7(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class USheikXpSystem*                                      SheikXpSystem;                                           // 0x0CA8(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class FString                                              EOSLobbyToJoinId;                                        // 0x0CB0(0x0010) ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_JNCQ[0x4];                                   // 0x0CC0(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      LastPingRequestFromClient;                               // 0x0CC4(0x0004) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      CurrentPingContextStateTimeElapsed;                      // 0x0CC8(0x0004) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_N3DJ[0x4];                                   // 0x0CCC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FPingContextInfo>                            PingContextList;                                         // 0x0CD0(0x0010) ZeroConstructor, Transient, Protected, NativeAccessSpecifierProtected
		EIGPingContextState                                        PingContextState;                                        // 0x0CE0(0x0001) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_JSUR[0x7];                                   // 0x0CE1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UEasyAntiCheatClientComponent*                       AntiCheatClient;                                         // 0x0CE8(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      SpectatorFadeTime;                                       // 0x0CF0(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_I9JR[0x34];                                  // 0x0CF4(0x0034) MISSED OFFSET (PADDING)

	public:
		void UseIntensiveAccessorySet();
		void UpdateTimePlayed();
		void TriggerNearestEvent(float TimeTillEventStart, float LengthOfEvent);
		void TriggerAISpawnersOfTag(const class FName& Tag);
		void ToggleShowPerkXPMeter();
		void SwapBodyType(int32_t index);
		void SkipWaitForPlayers();
		bool ShouldLeaveParty();
		void SetPlayerShouldMoveToSpectator();
		void ServerTriggerAISpawnersOfTag(const class FName& Tag);
		void ServerToggleBotVisualization(bool bEnable);
		void ServerSwapBodyType(const struct FSheikSpawnParams& NewSpawnParams);
		void ServerStartHotfixCheck();
		void ServerSetEOSLobbyId(const struct FGuid& TeamID, const class FString& InEOSLobbyId);
		void ServerSendPlayerSpawnInfo(const struct FSheikSpawnParams& InSpawnParams, TArray<class FName> InAccessoriesLoadoutIds, const struct FTitleCardLoadoutIds& InTitleCardLoadoutsId, TArray<class FName> InStatsToTrack, TArray<class FName> InSeasonalStatBaseNames, TArray<class FName> InSeasonalFields);
		void ServerSendPlatformAccountInfo(const class FString& CozmoId, ESheikPlatform Platform, ESheikPlatformService PlatformService, const class FString& PlatformId, const class FString& PlatformName, const class FString& EOSId, const class FString& ProductId);
		void ServerSendAntiCheatMessage(TArray<unsigned char> Data);
		void ServerRequestTeleport(class ATeleportLocation* TeleportLocation);
		void ServerRequestSimplePingType(EIGPingType PingType, const struct FVector& OriginLocation, const struct FVector& OriginDirection);
		void ServerRequestRespawn();
		void ServerRequestMapChange(const class FString& MapName);
		void ServerRequestBRLaunch(const class FString& LocationName);
		void ServerNotifyTeamOfPing(bool bIncludeSelf, EIGPingType PingType, const struct FVector& PingLocation, const struct FVector& PingNormal, class UObject* PingedObj);
		void ServerControllerLeavingGameSession(TArray<class FString> PartyMemberIds);
		void ServerClearAllBots();
		void ServerAcceptPlayerSession(const class FString& PlayerSessionId, uint32_t PlayerUniqueID);
		void ReturnToFrontend();
		void RequestTriggerNearestEvent(float TimeTillEventStart, float LengthOfEvent);
		void RequestSkipWaitForPlayers();
		void RequestNewFinalRoundOverrideBeacon(class ASheikFinalRoundBeacon* NewVal);
		void RequestChangeOnlyUseDemoRingsFlag(bool Val);
		void RecieveNewFinalRoundOverrideBeacon(class ASheikFinalRoundBeacon* NewVal);
		void PingContextReset();
		void OnTeamInfoUpdated__DelegateSignature();
		void OnRoundPlacementChanged__DelegateSignature(int32_t NewPlace);
		void OnRep_RoundPlacement();
		void OnRep_MakeTeammatesVisible();
		void OnPlayerSetAsTeamLeader(bool bIsTeamLeader);
		void OnEnteredSpectatorMode__DelegateSignature();
		void OnCharacterPawnChanged__DelegateSignature(class ASheikCharacter* SheikCharacter);
		void OnCharacterDied__DelegateSignature(ECauseOfDeath Cause);
		void OnCharacterDamaged__DelegateSignature(const struct FIGInstanceHitData& HitData);
		void LogServerStateInfo(const struct FServerStateInfo& StateInfo);
		bool IsPlayerInParty(class ASheikPlayerStateCommon* InPlayerState);
		bool IsInTeam();
		bool IsCharacterMeshCached(int32_t PlayerId);
		void InformTeammateOfDeath(ECauseOfDeath Cause);
		bool HasPlayerPlacementBeenProcessed();
		void HandleTeamInfoUpdatedWithoutLobby();
		void HandleTeamInfoUpdated();
		void HandleOnGameFlowStateChanged(EGameFlowState GameFlowState);
		void HandleOnCharacterDied(ECauseOfDeath Cause);
		TArray<class AIGPlayerState*> GetTeammatesInfo(bool bIncludeLocalPlayer);
		class USheikXpSystem* GetSheikXpSystem();
		class ASheikCharacter* GetSheikCharacter();
		int32_t GetRoundPlacement();
		int32_t GetNumTeammatesAlive();
		int32_t GetNumTeammates();
		class USheikGameInfo* GetLocalPlayerGameInfo(class UObject* WorldContextObject);
		int32_t GetAllowedPingVersion();
		void ForceUserToMainMenu_BP();
		void FlushKeys();
		void ExecUploadAllServerTrackedPlayerStats();
		void ExecToggleBotVisualization(bool bEnable);
		void ExecToggleBotSpawnWithTreeOnPing(bool bIsEnabled, const class FString& ProfileToSpawn);
		void ExecToggleBotSpawnOnPing(bool bIsEnabled, const class FString& ProfileToSpawn);
		void ExecStoreXpInPlayerData();
		void ExecStopAllRepProgressOnServer(bool StopRepProgression);
		void ExecStats_UploadSingle_Server();
		void ExecStats_UnlockStatsForRead_Server();
		void ExecStats_SetStatValue_Server(const class FName& StatName, float Value);
		void ExecStats_PrintStatsPlayerController_Server();
		void ExecStats_PrintStatsPlayerController_Client();
		void ExecStats_PrintComplexStats_Client();
		void ExecStats_DownloadSingle_Server();
		void ExecStats_DownloadAll_Server();
		void ExecStartServerHotfixCheck();
		void ExecStartPlayground();
		void ExecStartFromMD_CurrentMap(const class FString& ModeDescriptor);
		void ExecStartFromMD(const class FString& ModeDescriptor);
		void ExecStartCTF_NoMapTransition(unsigned char NumPlayersPerTeam, bool bKeepPartyID, bool bBackFillBots);
		void ExecStartBR_NoMapTransition(unsigned char NumPlayersPerTeam, bool bKeepPartyID, bool bBackFillBots);
		void ExecStartBR(unsigned char NumPlayersPerTeam, bool bKeepPartyID);
		void ExecSkipCannons(bool bSkipCannons);
		void ExecSimulateLongTimeAway();
		void ExecSetTeammatesVisible(bool bVisible);
		void ExecSetNumBackfillBots(int32_t NumBots);
		void ExecSetNewPlayerPolicy(bool bCanAcceptNewPlayers);
		void ExecSetNewFinalRoundBeacon(const class FString& BeaconName);
		void ExecSetBRTeamMode(unsigned char TeamSize);
		void ExecSetAllowSpectateBots(bool bAllow);
		void ExecResetRingStateTimeline();
		void ExecResetMatchXp();
		void ExecResetLifetimeXp();
		void ExecResetAdditionalXp();
		void ExecRep_SetRepProgress(const class FName& RepName, int32_t ProgressValue);
		void ExecRep_ResetAllRepProgressOnServer();
		void ExecRep_RemoveAllRepProgressOnServer();
		void ExecRep_PrintRepProgressOnServer();
		void ExecRep_CompleteRepByNameOnServer(const class FName& RepName);
		void ExecRep_CompleteAllRepsOnServer();
		void ExecPinningEnabled(bool bEnabled);
		void ExecLogServerHotfixVersion();
		void ExecLogPartyStatus();
		void ExecLogCurrentXpValues();
		void ExecLeaveTeam();
		void ExecGetServerStateInfo();
		void ExecForceResetRewards();
		void ExecFireRoundPlacementChangedDelegate(int32_t Placement);
		void ExecEnablePerkXP(bool bEnabled);
		void ExecDownloadAllServerTrackedPlayerStats();
		void ExecDontGoToFreeRoamWhenRoundsEnds(bool NoFreeRoam);
		void ExecDangerZoneEnabled(bool bEnabled);
		void ExecBotBackfillEnabled(bool bEnabled);
		void ExecAssignTeams(unsigned char NumPlayersPerTeam);
		void ExecAssignMeAsLeader();
		void ExecAddRingStateToTimeline(float Radius, float MorphTimeOffset, float WaitTimeOffset, float EventCountdownTimeOffset, float EventTimeOffset, float EventTimeEndOffset, bool WillRerollLoot);
		void ExecAddAdditionalXp(float Value);
		void DebugTriggerRepAnnouncement(int32_t CurrProgress, int32_t Target);
		void DebugRequestBRTimelineString();
		void DebugReceiveBRTimelineString(const class FString& TimelineString);
		void ClientTeammateKOInsuranceActivated();
		void ClientStartAntiCheatSession();
		void ClientRequestPlayerSpawnInfo();
		void ClientReceiveAntiCheatMessage(TArray<unsigned char> Data);
		void ClientProcessPingTypeAtLocation(EIGPingType PingType, class ASheikPlayerStateCommon* OriginPlayerState, const struct FVector& PingLocation, const struct FVector& PingNormal, class UObject* PingedObj);
		void ClientLogStatTransferSummary(const class FString& Filename, const class FString& SummaryString, const class FString& GameSessionId, const class FString& PlayerSessionId);
		void ClientLogServerHotfixVersion(int32_t ServerVersion);
		void ClientLeavingGameSession();
		void ClientForceUserToMainMenu();
		void ClientAddFans(float FansToGive, EReasonFansAwarded Reason);
		void ClientAcceptPlayerSessionPostLogin(uint32_t PlayerUniqueID);
		void ClearAllBots();
		void BroadcastOnCharacterDied(ECauseOfDeath Cause);
		void BroadcastOnCharacterDamaged(const struct FIGInstanceHitData& HitData);
		void BRLaunchAllPlayers(const class FString& LocationName);
		bool AreAnyTeammatesAlive();
		static UClass* StaticClass();
	};

	/**
	 * Class Sheik.SheikPlayerData
	 * Size -> 0x0350 (FullSize[0x03A0] - InheritedSize[0x0050])
	 */
	class USheikPlayerData : public UIGPlayerData
	{
	public:
		class FScriptMulticastDelegate                             OnWalletIdRevocationOccurred;                            // 0x0050(0x0010) ZeroConstructor, InstancedReference, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_VDUZ[0x18];                                  // 0x0060(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UIGDataTable*                                        TitleCardFTUELoadoutsTableRef;                           // 0x0078(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnSavedLoadoutChangedByValidation;                       // 0x0080(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_FEYA[0x2E0];                                 // 0x0090(0x02E0) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class URepAccrualInfo*                                     RepAccrualInfo;                                          // 0x0370(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_CPBN[0x10];                                  // 0x0378(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UWorld*                                              World;                                                   // 0x0388(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class USheikGameInstance*                                  GameInstance;                                            // 0x0390(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		EGameFlowState                                             GameFlowState;                                           // 0x0398(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_PWYG[0x7];                                   // 0x0399(0x0007) MISSED OFFSET (PADDING)

	public:
		bool UpdateWalletAssetSeen(const class FName& InWalletAssetId, bool bUploadData);
		void UpdateCreatorCode();
		bool SetCreatorCode(const class FString& CreatorCode);
		void SetActiveCharacterLoadout(int32_t InActiveLoadout);
		void SaveStoreSeenItems();
		void SaveEmoteIdList(TArray<class FName> EmoteIdList);
		void ResetCharacterProfileToDefault();
		void RemoveCharacterLoadout(int32_t SavedLoadoutIndex);
		void OnPurchaseMultipleOffersComplete(TArray<class FName> WalletIds, bool bSuccessful);
		void OnEntitlementsOwnedRefreshedScrubLoadout();
		bool HasWalletAssetBeenSeen(const class FName& InWalletAssetId);
		void HandlePresetsWithInvalidIndex();
		void HandleOnGameFlowStateChanged(EGameFlowState NewState);
		void GetUnseenItemIds();
		struct FTitleCardLoadoutIds GetTitleCardLoadoutIds();
		struct FTimespan GetTimeTillNextReroll();
		struct FTimespan GetTimeTillNextRepAllowance();
		int32_t GetRerollAllowance();
		int32_t GetRepsQueued();
		struct FRecentPlayers GetRecentPlayers();
		int32_t GetNumCharacterLoadouts();
		bool GetNeedsFirstTimeReps();
		int32_t GetMaxRerollAllowance();
		int32_t GetMaxNumberOfRepsAllowedToTrack();
		struct FDateTime GetLastTimeRepAllowanceUpdated();
		struct FDateTime GetLastTimeGainedReroll();
		TArray<class FName> GetEmoteIdList();
		class FString GetCreatorCode();
		struct FCharacterProfile GetCharacterProfile();
		struct FCharacterLoadout GetActiveCharacterLoadoutBP();
		bool DoesLoadoutExist(const class FString& InLoadoutName);
		bool bHasMaxRerolls();
		int32_t AddNewCharacterLoadout(bool bMakeActive, bool bUpload);
		static UClass* StaticClass();
	};

	/**
	 * Class Sheik.SheikPlayerDataManager
	 * Size -> 0x0130 (FullSize[0x0158] - InheritedSize[0x0028])
	 */
	class USheikPlayerDataManager : public UObject
	{
	public:
		unsigned char                                              UnknownData_C7ID[0x20];                                  // 0x0028(0x0020) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnDownloadPlayerDataComplete;                            // 0x0048(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_FAK8[0x48];                                  // 0x0058(0x0048) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnPlayerMatchmakingTypeChanged;                          // 0x00A0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ULSM[0x80];                                  // 0x00B0(0x0080) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class USheikStatsTransferRequest*>                  CurrentStatTransferRequests;                             // 0x0130(0x0010) ZeroConstructor, NativeAccessSpecifierPrivate
		class USheikStatsDownloadManager*                          StatsDownloadManager;                                    // 0x0140(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class USheikStatsUploadManager*                            StatsUploadManager;                                      // 0x0148(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class USheikStatsDeleteRepProgressManager*                 StatsRepProgressDeleteManager;                           // 0x0150(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		bool UploadServerTrackedStatsSinglePlayer(class APlayerController* PlayerController);
		bool UploadServerTrackedStatsAllPlayers();
		bool UploadPlayerData();
		bool UploadClientTrackedStatsAllPlayers();
		bool UploadCharacterProfileData();
		void OnUploadStatsSingle_Server_Completed(bool bSuccess, const class FString& ErrorString);
		void OnUploadStatsSingle_Client_Completed(bool bSuccess, const class FString& ErrorString);
		void OnDownloadStatsSingle_Server_Completed(bool bSuccess, const class FString& ErrorString);
		void OnDownloadStatsSingle_Client_Completed(bool bSuccess, const class FString& ErrorString);
		void OnDownloadStatsAll_Server_Completed(bool bSuccess, const class FString& ErrorString);
		bool HasPlayerDataDownloadedAtLeastOnce();
		bool DownloadSkillDataSinglePlayer(class APlayerController* PlayerController);
		bool DownloadSkillDataForLoginUpdate();
		bool DownloadSkillDataAllPlayers();
		bool DownloadServerTrackedStatsSinglePlayer(class APlayerController* PlayerController);
		bool DownloadServerTrackedStatsDirectlyToClient();
		bool DownloadServerTrackedStatsAllPlayers();
		bool DownloadPlayerRepDataToTheServer(TArray<class FString>* PlayerIds);
		bool DownloadPlayerDataDirectlyToTheClient();
		bool DownloadClientTrackedStatsSinglePlayer();
		bool DownloadClientTrackedStatsAllPlayers();
		static UClass* StaticClass();
	};

	/**
	 * Class Sheik.SheikPlayerInput
	 * Size -> 0x0008 (FullSize[0x03B0] - InheritedSize[0x03A8])
	 */
	class USheikPlayerInput : public UPlayerInput
	{
	public:
		float                                                      DefaultGamepadCameraSensitivity;                         // 0x03A8(0x0004) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      DefaultMouseCameraSensitivity;                           // 0x03AC(0x0004) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Sheik.SheikSkillCalculationSettings
	 * Size -> 0x0118 (FullSize[0x0148] - InheritedSize[0x0030])
	 */
	class USheikSkillCalculationSettings : public UDataAsset
	{
	public:
		int32_t                                                    SkillValuesToStore;                                      // 0x0030(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    NumberOfGamesForSkillCalculation;                        // 0x0034(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UDataTable*                                          PlayerRankTable;                                         // 0x0038(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUseAbsolutePlacement;                                   // 0x0040(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_UNZP[0x7];                                   // 0x0041(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TMap<struct FIntPoint, struct FAbsolutePlacementSkillDelta> SkillDeltasAbsolutePlacement;                            // 0x0048(0x0050) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		bool                                                       bUseRelativePlacement;                                   // 0x0098(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_OP8V[0x7];                                   // 0x0099(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TMap<struct FIntPoint, struct FRelativePlacementSkillDelta> SkillDeltasRelativePlacement;                            // 0x00A0(0x0050) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		float                                                      DamageThreshold;                                         // 0x00F0(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    SkillPointsPerDamageThreshold;                           // 0x00F4(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TMap<struct FIntPoint, int32_t>                            DaysSinceLastLoginToRankChange;                          // 0x00F8(0x0050) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Sheik.SheikMatchmakingSkillData
	 * Size -> 0x0098 (FullSize[0x00C8] - InheritedSize[0x0030])
	 */
	class USheikMatchmakingSkillData : public UDataAsset
	{
	public:
		int32_t                                                    StartingOnboardGraduationValue;                          // 0x0030(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    PlayerElimOnboardingReduction;                           // 0x0034(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    PlayerElimOnboardingReductionAmount;                     // 0x0038(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    PlacementOnboardingReduction;                            // 0x003C(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    PlacementOnboardingReductionAmount;                      // 0x0040(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    PlacementReductionLimit;                                 // 0x0044(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FIGBotProfileDistribution                           OnboardingBotProfiles;                                   // 0x0048(0x0050) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		int32_t                                                    SympathyMatchPlacementThreshold;                         // 0x0098(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    BadGamesToSympathyMatch;                                 // 0x009C(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    SympathyMatchSkillGraduation;                            // 0x00A0(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_7VEE[0x4];                                   // 0x00A4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FSkillBasedBotSettings>                      SkillBasedMatchmakingSettings;                           // 0x00A8(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic
		float                                                      StartingELORating;                                       // 0x00B8(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      KFactor;                                                 // 0x00BC(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      EliminationWeight;                                       // 0x00C0(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      EliminatedWeight;                                        // 0x00C4(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Sheik.SheikPlayerSkillManager
	 * Size -> 0x0038 (FullSize[0x0060] - InheritedSize[0x0028])
	 */
	class USheikPlayerSkillManager : public UObject
	{
	public:
		class USheikGameInstance*                                  GameInstance;                                            // 0x0028(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FSkillData                                          SkillData;                                               // 0x0030(0x0028) Net, RepNotify, Protected, NativeAccessSpecifierProtected
		bool                                                       bIsUploadingDataFromServer;                              // 0x0058(0x0001) Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bIsWaitingToUploadFromClient;                            // 0x0059(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_7P8V[0x6];                                   // 0x005A(0x0006) MISSED OFFSET (PADDING)

	public:
		void OnRep_SkillData();
		void OnRep_IsUploadingDataFromServer();
		static UClass* StaticClass();
	};

	/**
	 * Class Sheik.SheikPlayerStateCommon
	 * Size -> 0x0680 (FullSize[0x0A78] - InheritedSize[0x03F8])
	 */
	class ASheikPlayerStateCommon : public AIGPlayerState
	{
	public:
		class FScriptMulticastDelegate                             OnSpectatorInfoUpdated;                                  // 0x03F8(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnPlayerDied;                                            // 0x0408(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnNameUpdated;                                           // 0x0418(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnLaunchControlUpdated;                                  // 0x0428(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnLobbyStatusUpdated;                                    // 0x0438(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		struct FSheikSpectatorInfo                                 SpectatorInfo;                                           // 0x0448(0x00E0) BlueprintVisible, Net, RepNotify, NativeAccessSpecifierPublic
		struct FSheikSpawnParams                                   SpawnParams;                                             // 0x0528(0x0480) Net, NativeAccessSpecifierPublic
		TArray<class FName>                                        AccessoriesLoadoutIds;                                   // 0x09A8(0x0010) ZeroConstructor, Transient, NativeAccessSpecifierPublic
		struct FTitleCardLoadoutIds                                TitleCardLoadoutIds;                                     // 0x09B8(0x0048) BlueprintVisible, BlueprintReadOnly, Net, NativeAccessSpecifierPublic
		TArray<class FName>                                        CachedCurrentlyTrackedStats;                             // 0x0A00(0x0010) ZeroConstructor, Transient, NativeAccessSpecifierPublic
		TArray<float>                                              TitleCardTrackStatValue;                                 // 0x0A10(0x0010) BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ENNP[0x1];                                   // 0x0A20(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		EEOSLobbyStatus                                            EOSLobbyStatus;                                          // 0x0A21(0x0001) BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_S6AL[0x6];                                   // 0x0A22(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class FString>                                      AllTeammatesID;                                          // 0x0A28(0x0010) Net, ZeroConstructor, RepNotify, NativeAccessSpecifierPublic
		class USheikRepSystem*                                     RepSystem;                                               // 0x0A38(0x0008) Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class USheikPlayerSkillManager*                            SkillManager;                                            // 0x0A40(0x0008) Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class USheikStatsSystem*                                   StatsSystem;                                             // 0x0A48(0x0008) Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bShowTeammateInfo;                                       // 0x0A50(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bShowSpectatorWidget;                                    // 0x0A51(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bHasLaunchControl;                                       // 0x0A52(0x0001) Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bWaitingToLoadRepData;                                   // 0x0A53(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FELOInfo                                            ELOInfo;                                                 // 0x0A54(0x0020) NoDestructor, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_QXYF[0x4];                                   // 0x0A74(0x0004) MISSED OFFSET (PADDING)

	public:
		void UpdateWithDeath();
		void UpdatePlatformAccountInfo(const class FString& CozmoId, ESheikPlatform Platform, ESheikPlatformService PlatformService, const class FString& PlatformId, const class FString& PlatformName, const class FString& InEosId, const class FString& InProductId);
		void UpdatePawnLocationAndRotation(const struct FVector& PawnLocation, const struct FRotator& PawnRotation);
		void UpdateModValues(float ArmValue, float CoreValue, float LegsValue, float MaxModValue);
		void UpdateHealth(float HealthPercetange, float HealthMax);
		void UpdateDownedInfo(bool bIsDBNO, float DownedTimeLeft);
		void SetTitleCardLoadOutIds(const struct FTitleCardLoadoutIds& InTitleCardLoadoutIds, TArray<class FName> InStatsToTrack, TArray<class FName> InSeasonalStatBaseNames, TArray<class FName> InSeasonalFields);
		void SetShowSpectatorWidget(bool bShow);
		void ServerUpdateAllowRepProgression(bool InAllowRepProgression);
		void ServerUpdateAllowAchievementToUpdate(bool bCanUpdateAchievements);
		void ServerSpectator_UpdateIsOnConsole(bool IsOnConsole);
		void ServerSetEOSLobbyStatus(EEOSLobbyStatus InStatus);
		void OnSpectatorInfoUpdated__DelegateSignature(const struct FSheikSpectatorInfo& NewSpectatorInfo);
		void OnRep_RepSystem();
		void OnRep_OnSpectatorInfoUpdated();
		void OnRep_OnLobbyStatusUpdated();
		void OnRep_OnLaunchControlUpdated();
		void OnRep_AllTeammatesID();
		void OnPlayerDied__DelegateSignature();
		void OnNameUpdated__DelegateSignature();
		void OnLobbyStatusUpdated__DelegateSignature();
		void OnLaunchControlUpdated__DelegateSignature(bool bNewLaunchControlValue);
		void MulticastPlayerStateDeath();
		class USheikPlayerSkillManager* GetSkillManager();
		class USheikRepSystem* GetRepSystem();
		class APawn* GetPlayerStatePawn();
		void ClientTriggerPlayerSkillDataUpdate();
		void ClientSetAllowAchievementToUpdate(bool bCanUpdateAchievements);
		void ClientRepThresholdMetNotify(TArray<struct FRepUIData> NotificationReps);
		void ClientOnConsoleCheck();
		void ClientCheckAllowRepProgression(bool InAllowRepProgression);
		void ClientCheckAllowAchievementToUpdate(bool bCanUpdateAchievements);
		void Client_LoadRepData();
		bool AreCharacterMeshesValidForCapture();
		static UClass* StaticClass();
	};

	/**
	 * Class Sheik.SheikPlaygroundPopupScreen
	 * Size -> 0x0050 (FullSize[0x0468] - InheritedSize[0x0418])
	 */
	class USheikPlaygroundPopupScreen : public UIGUI_WidgetBase
	{
	public:
		unsigned char                                              UnknownData_3YNK[0x20];                                  // 0x0418(0x0020) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             ImageLoadDelegate;                                       // 0x0438(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, Protected, NativeAccessSpecifierProtected
		class FScriptMulticastDelegate                             MovieLoadDelegate;                                       // 0x0448(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, Protected, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_IYTE[0x10];                                  // 0x0458(0x0010) MISSED OFFSET (PADDING)

	public:
		void UnbindCharacterDelegates();
		void ShowNewPlaygroundPopup(const struct FDataTableRowHandle& InPopupRowHandle);
		void OnLoadFailed();
		void LogStatusMessage(const class FString& InMessage);
		void LoadPopupMovie();
		void LoadPopupImage();
		void HandleOnLoadComplete();
		void HandleOnCharacterDied(ECauseOfDeath CauseOfDeath);
		void Dismiss();
		void ClosePlaygroundPopupScreen();
		void CloseFullscreenPopup(const struct FDataTableRowHandle& InPopupRowHandle);
		void BindToCharacterDelegates();
		static UClass* StaticClass();
	};

	/**
	 * Class Sheik.SheikPopupSystem
	 * Size -> 0x0038 (FullSize[0x04B8] - InheritedSize[0x0480])
	 */
	class USheikPopupSystem : public UIGUI_ScreenBase
	{
	public:
		class FScriptMulticastDelegate                             OnPopupInfoUpdated;                                      // 0x0480(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, Protected, NativeAccessSpecifierProtected
		TArray<struct FPopupQueueData>                             PopupQueue;                                              // 0x0490(0x0010) Edit, BlueprintVisible, ZeroConstructor, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected
		class FName                                                ConfirmUIBindingName;                                    // 0x04A0(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class FName                                                CancelUIBindingName;                                     // 0x04A8(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_M31I[0x8];                                   // 0x04B0(0x0008) MISSED OFFSET (PADDING)

	public:
		void ShowPopup(const struct FPopupQueueData& PopupData);
		void ShowNextPopup();
		void SetUpLegendInput(int32_t ID);
		void SetPopupWidget(int32_t PopupId, class UIGUI_WidgetBase* PopupWidget);
		void SetHeaderText(int32_t PopupId, const class FText& HeaderText);
		void SetDimBackground(int32_t PopupId, bool DimBackground);
		void SetBodyText(int32_t PopupId, const class FText& BodyText);
		void RemoveLegendPrompts(int32_t PopupId);
		void OnPopupInfoUpdated__DelegateSignature(int32_t PopupId);
		bool IsPopupBeingShown();
		bool IsPopupActive(int32_t PopupId);
		void HandleInput(const struct FInputEventData& InputEvent);
		class USheikPopupSystem* GetSheikPopupSystem();
		class UIGUI_WidgetBase* GetPopupWidget(int32_t PopupId);
		struct FPopupQueueData GetPopupQueueData(int32_t PopupId);
		int32_t GetCurrentlyActivePopup();
		void GenericCloseCallback(int32_t ID, const class FName& BindingName);
		bool DoesPopupWithIdExist(int32_t PopupId);
		int32_t CreatePopup(EPopupType PopupType, EPopupPriority PopupPriority, const class FText& HeaderText, const class FText& BodyText, const class FText& ErrorCodeText, bool DimBackground, TArray<struct FLegendData> LegendPrompts, bool bUseDefaultFormatting);
		int32_t CreateGenericError();
		int32_t CreateErrorWithCallback(const class FText& HeaderText, const class FText& BodyText, const class FText& ErrorCode, const class FScriptDelegate& ConfirmCallback);
		int32_t CreateError(const class FText& HeaderText, const class FText& BodyText, const class FText& ErrorCode);
		int32_t CreateConfirmPopupWithCallback(const class FText& HeaderText, const class FText& BodyText, const class FScriptDelegate& ConfirmCallback);
		int32_t CreateConfirmPopup(const class FText& HeaderText, const class FText& BodyText);
		int32_t CreateConfirmCancelPopup(const class FText& HeaderText, const class FText& BodyText, const class FScriptDelegate& ConfirmCallback, const class FScriptDelegate& CancelCallback);
		void ClosePopup_BP(int32_t ID);
		void ClosePopup(int32_t PopupId);
		void CloseAllPopups();
		void ClearPopupWidget(int32_t PopupId);
		void AddMultipleLegendPrompts(int32_t PopupId, TArray<struct FLegendData> LegendPrompts);
		void AddLegendPrompt(int32_t PopupId, const struct FLegendData& LegendPrompt);
		int32_t AddCustomPopup(EPopupPriority PopupPriority, class UIGUI_WidgetBase* PopupWidget, TArray<struct FLegendData> LegendPrompts);
		static UClass* StaticClass();
	};

	/**
	 * Class Sheik.SheikPoseSpotActor
	 * Size -> 0x0008 (FullSize[0x0390] - InheritedSize[0x0388])
	 */
	class ASheikPoseSpotActor : public AIGPoseSpotActor
	{
	public:
		float                                                      FansToGive;                                              // 0x0388(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_WICE[0x4];                                   // 0x038C(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Sheik.SheikProgressionSystem
	 * Size -> 0x02F0 (FullSize[0x0318] - InheritedSize[0x0028])
	 */
	class USheikProgressionSystem : public UObject
	{
	public:
		class FScriptMulticastDelegate                             XpBoosterDataChangeOccurred;                             // 0x0028(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnPurchaseBattlePassTiersComplete;                       // 0x0038(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnPurchaseBattlePassComplete;                            // 0x0048(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnCloutFansIncreasedOnlyOccurred;                        // 0x0058(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnCloutLevelUpOccurred;                                  // 0x0068(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnBattlePassFansIncreasedOnlyOccurred;                   // 0x0078(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnBattlePassLevelUpOccurred;                             // 0x0088(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnForceBattlePassTierSelected;                           // 0x0098(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnSeasonVerificationCompleted;                           // 0x00A8(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             FanMailAutoClaimedDueToNewSeason;                        // 0x00B8(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             DownloadProgressionDataCompleted;                        // 0x00C8(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             EOMFansCalculationsCompleted;                            // 0x00D8(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnFanMailRedemptionCompleted;                            // 0x00E8(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnDataRetrieved;                                         // 0x00F8(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		bool                                                       bFinishedCalculatingPostMatchBonuses;                    // 0x0108(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_PV6P[0x7];                                   // 0x0109(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class USheikUIActorCustomizer*                             Customizer;                                              // 0x0110(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bCurrentlyTrackingProgress;                              // 0x0118(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_KTWH[0x7F];                                  // 0x0119(0x007F) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UFanMailLevelDefInfo*                                AllSeasonsFanMailInfo;                                   // 0x0198(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_FMRZ[0x48];                                  // 0x01A0(0x0048) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class USheikGameInstance*                                  SheikGameInstance;                                       // 0x01E8(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class USheikFansService*                                   SheikFansService;                                        // 0x01F0(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class USheikWalletSystem*                                  SheikWalletSystem;                                       // 0x01F8(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class USheikStoreSystem*                                   SheikStoreSystem;                                        // 0x0200(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UCloutProgressionManager*                            CloutProgressionManager;                                 // 0x0208(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UBattlePassProgressionManager*                       BattlePassProgressionManager;                            // 0x0210(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class USheikEOMAnnouncementProcessor*                      SheikEOMAnnouncementProcessor;                           // 0x0218(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_IN8P[0xF8];                                  // 0x0220(0x00F8) MISSED OFFSET (PADDING)

	public:
		void UpdateLastBattlePassCelebrationToCurrent();
		void SetWalletSystem(class USheikWalletSystem* InWalletSystem);
		void SetStoreSystem(class USheikStoreSystem* InStoreSystem);
		void RefreshCloutLevel();
		bool PurchaseBattlePassTiers(int32_t NumOfTiersToPurchase);
		bool PurchaseBattlePass(const struct FSheikStoreItem& Offer, struct FSheikError* Error);
		bool OpenFanMail();
		bool OpenAllFanMail();
		void OnDataRetrieved__DelegateSignature(bool bSuccessful, const struct FSheikError& Error);
		bool IsTodayWithinEndingPeriodOfActiveSeason();
		bool IsTodayWithinActiveSeason();
		bool IsTodayWithinActiveBattlePassSeason();
		bool IsTodayOutsideSeasonDateRange(EIGSeasonIdentifier InSeason);
		bool IsDebugAnnouncementDataEnabled();
		bool IsDateWithinRange(const struct FIGDateRange& DateRange, const struct FDateTime& Date);
		bool IsBattlePassTierComplete(int32_t TierId);
		bool IsBattlePassOwned();
		bool IsAccountProgressionDataDownloaded();
		void InitializeCustomizableActor(class UClass* UIActorClass, const struct FVector& ActorLocation, const struct FQuat& ActorDefaultRotation);
		bool HasAnyXpBoosters();
		void HandleOnPlayerWon(TArray<class AIGPlayerState*> WinningPlayers, bool isLocalPlayer, bool isSpectator);
		void HandleOnPlayerDied(ECauseOfDeath Cause);
		void HandleOnPlacementChanged(int32_t Placement);
		void HandleOnNonFinalRingFinishedClosing(int32_t Time);
		void HandleOnFinalRingSurvivedUntil();
		bool HadAtLeastOneXpBoosterActiveDuringSession();
		int32_t GetTotalXpBoosterTime();
		bool GetTimeLeftInCurrentSeason(struct FTimespan* OutDaysAndHoursLeft);
		bool GetTimeLeftInCurrentBattlePassSeason(struct FTimespan* OutDaysAndHoursLeft);
		EBattlePassCelebrationReason GetTiersToCelebrateOnBattlePassPurchase(TArray<int32_t>* OutTierIds);
		bool GetSingleBattlePassTierPrice(int32_t* OutPrice);
		bool GetNextCloutLevelForDisplayOnly(struct FProgressionLevel* OutNextCloutLevel);
		void GetNewFansAnnouncements(TArray<struct FSheikPayload>* OutAnnouncements);
		int32_t GetMaxCloutLevel();
		int32_t GetFanMailCount();
		bool GetCurrentSeasonDefinition(struct FIGSeasonDefinition* OutCurrentSeasonDef);
		int32_t GetCurrentNumCloutFans();
		int32_t GetCurrentNumBattlePassFans();
		int32_t GetCurrentBattlePassTierId();
		bool GetCurrentBattlePassTier(struct FBattlePassTier* OutCurrentTier);
		bool GetCurrentBattlePassSeasonDefinition(struct FIGSeasonDefinition* OutCurrentSeasonDef);
		EBattlePassCelebrationReason GetCompletedBattlePassTierIdsNeedingCelebration(TArray<int32_t>* OutTierIds);
		bool GetCloutLevel(struct FProgressionLevel* OutProgressionLevel);
		bool GetBattlePassTiers(TArray<struct FBattlePassTier>* BattlePassTiers);
		bool GetBattlePassTierById(int32_t InTierId, struct FBattlePassTier* OutBattlePassTier);
		class FText GetBattlePassRewardTypeLocTextByEnum(EBattlePassRewardType RewardType);
		bool GetBattlePassOffers(TArray<struct FSheikStoreItem>* OutBattlePassOffers);
		struct FBattlePassMatchAccumulationData GetBattlePassMatchAccumulationData();
		void FanMailRollComplete(TArray<class FName> WalletIds, TArray<class FName> FailedCodes, bool bRedeemed);
		void ClearCustomizer();
		bool CheckWillCloutLevelUpGivenCurrentFans();
		void CheckForGameFlowState(EGameFlowState NewState);
		bool CanPurchaseNumTiers(int32_t NumTiersToPurchase);
		bool CanPurchaseBattlePass(const struct FSheikStoreItem& Offer);
		void CalculateAllProgressionAndUpload(float NewFans, EReasonFansAwarded ReasonForAddingFans);
		static UClass* StaticClass();
	};

	/**
	 * Class Sheik.SheikRedemptionCodeDataAsset
	 * Size -> 0x0018 (FullSize[0x0048] - InheritedSize[0x0030])
	 */
	class USheikRedemptionCodeDataAsset : public UDataAsset
	{
	public:
		class FString                                              JsonLocalFilePath;                                       // 0x0030(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UClass*                                              AssetDataSourcesClass;                                   // 0x0040(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Sheik.SheikRedemptionCodeManager
	 * Size -> 0x0048 (FullSize[0x0070] - InheritedSize[0x0028])
	 */
	class USheikRedemptionCodeManager : public UObject
	{
	public:
		unsigned char                                              UnknownData_17M2[0x18];                                  // 0x0028(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class USheikRedemptionCodeDataAsset*                       RedemptionCodeDataAsset;                                 // 0x0040(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class FString                                              NewUserCoinsCode;                                        // 0x0048(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FSheikRedemptionCodeList                            RedemptionCodeList;                                      // 0x0058(0x0010) NativeAccessSpecifierPrivate
		class UIGAssetDataSources*                                 AssetDataSources;                                        // 0x0068(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Sheik.SheikReleaseTeammatesNotify
	 * Size -> 0x0000 (FullSize[0x0098] - InheritedSize[0x0098])
	 */
	class USheikReleaseTeammatesNotify : public UIGNotifyBase
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Sheik.SheikRepSystem
	 * Size -> 0x0070 (FullSize[0x01D8] - InheritedSize[0x0168])
	 */
	class USheikRepSystem : public UIGRepSystem
	{
	public:
		class USheikRepTitleStorageInterface*                      SheikRepTitleStorageInterface;                           // 0x0168(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class USheikGameInstance*                                  UIClientGameInstance;                                    // 0x0170(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_JDFY[0x50];                                  // 0x0178(0x0050) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class USheikDailyRepStrategy*                              DailyRepStrategy;                                        // 0x01C8(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class USheikWeeklyRepStrategy*                             WeeklyRepStrategy;                                       // 0x01D0(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		void OnRepTitleStorageDownloadCompleted();
		static UClass* StaticClass();
	};

	/**
	 * Class Sheik.SheikRepTitleStorageInterface
	 * Size -> 0x0158 (FullSize[0x0180] - InheritedSize[0x0028])
	 */
	class USheikRepTitleStorageInterface : public UObject
	{
	public:
		unsigned char                                              UnknownData_TFMX[0xA0];                                  // 0x0028(0x00A0) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnRepTitleStorageFileDownloadComplete;                   // 0x00C8(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ANWX[0xA8];                                  // 0x00D8(0x00A8) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Sheik.SheikRepTypeStrategy
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class USheikRepTypeStrategy : public UInterface
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Sheik.SheikResurrectionNotify
	 * Size -> 0x0000 (FullSize[0x0098] - InheritedSize[0x0098])
	 */
	class USheikResurrectionNotify : public UIGNotifyBase
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Sheik.SheikResTeammateNotify
	 * Size -> 0x0000 (FullSize[0x0098] - InheritedSize[0x0098])
	 */
	class USheikResTeammateNotify : public UIGNotifyBase
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Sheik.SheikAbortResNotify
	 * Size -> 0x0000 (FullSize[0x0098] - InheritedSize[0x0098])
	 */
	class USheikAbortResNotify : public UIGNotifyBase
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Sheik.SheikRingActor
	 * Size -> 0x0018 (FullSize[0x0238] - InheritedSize[0x0220])
	 */
	class ASheikRingActor : public AActor
	{
	public:
		struct FVector                                             BaseBoxExtent;                                           // 0x0220(0x000C) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      VerticalMovementFactor;                                  // 0x022C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UStaticMeshComponent*                                ClientRingMeshComponent;                                 // 0x0230(0x0008) Edit, BlueprintVisible, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Sheik.SheikSavedLoginToken
	 * Size -> 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
	 */
	class USheikSavedLoginToken : public USaveGame
	{
	public:
		class FString                                              Token;                                                   // 0x0028(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Sheik.SheikSavedSettingBlueprintLibrary
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class USheikSavedSettingBlueprintLibrary : public UBlueprintFunctionLibrary
	{
	public:
		void SetHudRegionVisibility(class UObject* WorldContextObject, ESheikHudRegion HudRegion, bool bVisible);
		void SetGameBrightness(class UObject* WorldContextObject, float InBrightness);
		void SetDamageNumberVisibility(class UObject* WorldContextObject, bool bVisible);
		void RefreshControlMappingsFromSavedSettings(class UObject* WorldContextObject, class UPlayerInput* InPlayerInput);
		bool GetHudRegionVisibility(class UObject* WorldContextObject, ESheikHudRegion HudRegion);
		float GetGameBrightness(class UObject* WorldContextObject);
		bool GetDamageNumberVisibility(class UObject* WorldContextObject);
		static UClass* StaticClass();
	};

	/**
	 * Class Sheik.SheikSavedSettings
	 * Size -> 0x0110 (FullSize[0x0208] - InheritedSize[0x00F8])
	 */
	class USheikSavedSettings : public UIGSavedSettings
	{
	public:
		float                                                      GamepadCameraSensitivity;                                // 0x00F8(0x0004) Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MouseCameraSensitivity;                                  // 0x00FC(0x0004) Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MouseAimingSensitivity;                                  // 0x0100(0x0004) Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      GamepadAimingSensitivity;                                // 0x0104(0x0004) Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bInvertMouseCameraY;                                     // 0x0108(0x0001) Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bInvertGamepadCameraY;                                   // 0x0109(0x0001) Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bInvertGamepadCameraX;                                   // 0x010A(0x0001) Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bInvertMouseAimingCameraY;                               // 0x010B(0x0001) Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bInvertGamepadAimingCameraY;                             // 0x010C(0x0001) Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bInvertGamepadAimingCameraX;                             // 0x010D(0x0001) Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bInvertMouseCannonCameraY;                               // 0x010E(0x0001) Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bInvertGamepadCannonCameraY;                             // 0x010F(0x0001) Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bInvertGamepadCannonCameraX;                             // 0x0110(0x0001) Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bShowPerkXPMeter;                                        // 0x0111(0x0001) Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bEnableCrossplay;                                        // 0x0112(0x0001) Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bEnableSubtitles;                                        // 0x0113(0x0001) Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bNotifyFriendsWhenActive;                                // 0x0114(0x0001) Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_P8LR[0x3];                                   // 0x0115(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      VoiceChatVolume;                                         // 0x0118(0x0004) Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       VoiceChatEnabled;                                        // 0x011C(0x0001) Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ESheikVOIPPartyType                                        VoipPartyType;                                           // 0x011D(0x0001) Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       VoiceChatPushToTalk;                                     // 0x011E(0x0001) Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bTeamFillSettings;                                       // 0x011F(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bHasGivenPermissionToEpicServices;                       // 0x0120(0x0001) Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_MBGX[0x7];                                   // 0x0121(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              CultureSetting;                                          // 0x0128(0x0010) Edit, BlueprintVisible, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bHasCompletedInitialHardwareBenchmarks;                  // 0x0138(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bAgeGatedAdult;                                          // 0x0139(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_XZM6[0x6];                                   // 0x013A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              AgeGatedCountry;                                         // 0x0140(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              AgeGatedEmail;                                           // 0x0150(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ESheikSessionPrivacy                                       SessionPrivacy;                                          // 0x0160(0x0001) Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_DI23[0x7];                                   // 0x0161(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TMap<ESheikHudRegion, bool>                                HudRegionVisibility;                                     // 0x0168(0x0050) Edit, EditConst, NativeAccessSpecifierPublic
		TArray<struct FInputActionKeyMapping>                      UserActionMappings;                                      // 0x01B8(0x0010) Edit, ZeroConstructor, EditConst, NativeAccessSpecifierPublic
		TArray<struct FInputAxisKeyMapping>                        UserAxisMappings;                                        // 0x01C8(0x0010) Edit, ZeroConstructor, EditConst, NativeAccessSpecifierPublic
		bool                                                       bHasOfferedAdvanceLockerRoom;                            // 0x01D8(0x0001) Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIsAdvancedLockerRoomEnabled;                            // 0x01D9(0x0001) Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bPerformAutoClimbInAir;                                  // 0x01DA(0x0001) Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_NBHS[0x5];                                   // 0x01DB(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FPresetPreviewData>                          PresetPreviewData;                                       // 0x01E0(0x0010) Edit, ZeroConstructor, EditConst, NativeAccessSpecifierPublic
		class FString                                              LastPlayedMatchmakingConfig;                             // 0x01F0(0x0010) Edit, BlueprintVisible, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bHideRestrictedMatchInviteCode;                          // 0x0200(0x0001) Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ZXTM[0x3];                                   // 0x0201(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      GameBrightness;                                          // 0x0204(0x0004) Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		void SetDataForPreset(const class FString& InPresetName, TArray<unsigned char> InData);
		void RemoveDataForPreset(const class FString& InPresetName);
		TArray<unsigned char> GetDataForPreset(const class FString& InPresetName);
		bool DoesPresetExist(const class FString& InPresetName);
		static UClass* StaticClass();
	};

	/**
	 * Class Sheik.SheikScriptedActorComponent
	 * Size -> 0x0020 (FullSize[0x0170] - InheritedSize[0x0150])
	 */
	class USheikScriptedActorComponent : public UIGScriptedActorComponent
	{
	public:
		unsigned char                                              UnknownData_W1EW[0x20];                                  // 0x0150(0x0020) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Sheik.SheikScriptTargetingVolume
	 * Size -> 0x0010 (FullSize[0x0288] - InheritedSize[0x0278])
	 */
	class ASheikScriptTargetingVolume : public AIGScriptTargetingVolume
	{
	public:
		unsigned char                                              UnknownData_2FGY[0x10];                                  // 0x0278(0x0010) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Sheik.SheikScriptTargetingWaypoint
	 * Size -> 0x0010 (FullSize[0x0240] - InheritedSize[0x0230])
	 */
	class ASheikScriptTargetingWaypoint : public AIGScriptTargetingWaypoint
	{
	public:
		unsigned char                                              UnknownData_SIBW[0x10];                                  // 0x0230(0x0010) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Sheik.SheikSeasonalStatsManager
	 * Size -> 0x0168 (FullSize[0x0190] - InheritedSize[0x0028])
	 */
	class USheikSeasonalStatsManager : public UObject
	{
	public:
		unsigned char                                              UnknownData_UAMN[0x50];                                  // 0x0028(0x0050) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class USheikGameInstance*                                  GameInstance;                                            // 0x0078(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_F4KY[0x110];                                 // 0x0080(0x0110) MISSED OFFSET (PADDING)

	public:
		void OnUploadPastSeasonsStats(const class FString& ErrorString);
		void OnDownloadSeasonalStats(const struct FGetCozmoStatsResult& Result, const class FString& ErrorString);
		bool IsPreviousSeason(EIGSeasonIdentifier Season);
		EIGSeasonIdentifier GetCurrentSeason();
		static UClass* StaticClass();
	};

	/**
	 * Class Sheik.SheikSkeletalMeshComponent
	 * Size -> 0x05D0 (FullSize[0x14C0] - InheritedSize[0x0EF0])
	 */
	class USheikSkeletalMeshComponent : public UIGSkeletalMeshComponent
	{
	public:
		class UCharacterSkinNameList*                              SkinListAsset;                                           // 0x0EF0(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FIGMeshMerger                                       MeshMerger;                                              // 0x0EF8(0x0068) Edit, NativeAccessSpecifierPublic
		unsigned char                                              BaseSkeletalMesh[0x28];                                  // 0x0F60(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		bool                                                       bMeshMergeOnly;                                          // 0x0F88(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bMaterialMergeOnly;                                      // 0x0F89(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bForceHighestQualityLOD;                                 // 0x0F8A(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ZDX7[0x5];                                   // 0x0F8B(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnMeshMergeReady;                                        // 0x0F90(0x0010) ZeroConstructor, InstancedReference, NativeAccessSpecifierPublic
		struct FSheikSpawnParams                                   CurrentSpawnParams;                                      // 0x0FA0(0x0480) NativeAccessSpecifierPrivate
		TWeakObjectPtr<class APlayerState>                         CurrentPlayerState;                                      // 0x1420(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_F8UY[0x50];                                  // 0x1428(0x0050) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class USkeletalMesh*>                               CachedMeshesToMerge;                                     // 0x1478(0x0010) ZeroConstructor, NativeAccessSpecifierPrivate
		class USkeletalMesh*                                       CachedMergedMesh;                                        // 0x1488(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class USkeletalMesh*                                       CachedBaseMergeMesh;                                     // 0x1490(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class USkeletalMesh*                                       CachedHeadMesh;                                          // 0x1498(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UMaterialInstance*                                   CachedBodyMaterial;                                      // 0x14A0(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UMaterialInstance*                                   CachedHeadMaterial;                                      // 0x14A8(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		TArray<class UMaterialInstance*>                           CachedMaterialOverrides;                                 // 0x14B0(0x0010) ZeroConstructor, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Sheik.SheikSmokeBattleRoyaleMatch
	 * Size -> 0x0008 (FullSize[0x0070] - InheritedSize[0x0068])
	 */
	class USheikSmokeBattleRoyaleMatch : public UIGSmokeContinuousCaptureTask
	{
	public:
		float                                                      TimeToWaitAfterCannonLaunch;                             // 0x0068(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_7OQ6[0x4];                                   // 0x006C(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Sheik.SheikSmokeCannonCaptureTask
	 * Size -> 0x0010 (FullSize[0x0078] - InheritedSize[0x0068])
	 */
	class USheikSmokeCannonCaptureTask : public UIGSmokeContinuousCaptureTask
	{
	public:
		float                                                      TimeToWaitAfterCannonLaunch;                             // 0x0068(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_S7WF[0xC];                                   // 0x006C(0x000C) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Sheik.SheikSmokeTaskManagerActor
	 * Size -> 0x0020 (FullSize[0x02F0] - InheritedSize[0x02D0])
	 */
	class ASheikSmokeTaskManagerActor : public AIGSmokeTaskManagerActor
	{
	public:
		class FString                                              FinalRoundBeaconName;                                    // 0x02D0(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_2X0O[0x10];                                  // 0x02E0(0x0010) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Sheik.IGAccessorySetLists
	 * Size -> 0x0020 (FullSize[0x0050] - InheritedSize[0x0030])
	 */
	class UIGAccessorySetLists : public UDataAsset
	{
	public:
		TArray<struct FIGAccessorySetData>                         AccessoryList;                                           // 0x0030(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic
		unsigned char                                              MaterialInstances[0x10];                                 // 0x0040(0x0010) UNKNOWN PROPERTY: ArrayProperty

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Sheik.IGSpawnDefaultDataAsset
	 * Size -> 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
	 */
	class UIGSpawnDefaultDataAsset : public UDataAsset
	{
	public:
		TArray<struct FIGSpawnDefaultsData>                        SelectedSpawnDefaults;                                   // 0x0030(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Sheik.SheikSpecialMoveConsumable
	 * Size -> 0x0000 (FullSize[0x06C0] - InheritedSize[0x06C0])
	 */
	class ASheikSpecialMoveConsumable : public AIGSpecialMoveConsumable
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Sheik.SheikSpectatorHUDScreen
	 * Size -> 0x0000 (FullSize[0x0480] - InheritedSize[0x0480])
	 */
	class USheikSpectatorHUDScreen : public UIGUI_ScreenBase
	{
	public:
		void SetSpectatorsPawnInfoVisibility(class ASheikCharacter* SheikCharacter, bool bIsVisible);
		void SetOtherSpectatorsPawnInfoVisibility(bool bIsVisible);
		static UClass* StaticClass();
	};

	/**
	 * Class Sheik.SheikSpectatorPawn
	 * Size -> 0x0018 (FullSize[0x02F8] - InheritedSize[0x02E0])
	 */
	class ASheikSpectatorPawn : public AIGSpectatorPawn
	{
	public:
		unsigned char                                              UnknownData_9GFM[0x18];                                  // 0x02E0(0x0018) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Sheik.SheikSpringArmComponent
	 * Size -> 0x0000 (FullSize[0x0600] - InheritedSize[0x0600])
	 */
	class USheikSpringArmComponent : public UIGSpringArmComponent
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Sheik.SheikSpringboardComponent
	 * Size -> 0x0078 (FullSize[0x0500] - InheritedSize[0x0488])
	 */
	class USheikSpringboardComponent : public UBoxComponent
	{
	public:
		unsigned char                                              UnknownData_WIPG[0x8];                                   // 0x0488(0x0008) Fix Super Size
		float                                                      MinHitNormalZDirection;                                  // 0x0490(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      BounceIntensity;                                         // 0x0494(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      BounceIntensityItemRatio;                                // 0x0498(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FRotator                                            OffsetRotation;                                          // 0x049C(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bCarryHorizontalMovement;                                // 0x04A8(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_H44A[0x3];                                   // 0x04A9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      HorizontalMovementDamper;                                // 0x04AC(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      HorizontalMovementDamperItemRatio;                       // 0x04B0(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ReverseHorizontalImpulseThreshold;                       // 0x04B4(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaxHorizontalSpeedCap;                                   // 0x04B8(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    ItemBounceLimit;                                         // 0x04BC(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector2D                                           RandomHorizontalVelocityRange;                           // 0x04C0(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class USoundBase*                                          Sound;                                                   // 0x04C8(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class USoundAttenuation*                                   AttenuationSettings;                                     // 0x04D0(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class USoundConcurrency*                                   ConcurrencySettings;                                     // 0x04D8(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UParticleSystem*                                     EmitterTemplate;                                         // 0x04E0(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUseSpringboardActorRotation;                            // 0x04E8(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUseImpactNormalAsBounceDirection;                       // 0x04E9(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_Q6YB[0x6];                                   // 0x04EA(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnActorBounced;                                          // 0x04F0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic

	public:
		void UpdateArrowTransform();
		static UClass* StaticClass();
	};

	/**
	 * Class Sheik.SheikSpringboardInterface
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class USheikSpringboardInterface : public UIGSpringboardInterface
	{
	public:
		void OnSpringboardHitCallback(class UPrimitiveComponent* HitComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FVector& NormalImpulse, const struct FHitResult& Hit);
		static UClass* StaticClass();
	};

	/**
	 * Class Sheik.SheikSpringboardStaticMeshComp
	 * Size -> 0x0080 (FullSize[0x0570] - InheritedSize[0x04F0])
	 */
	class USheikSpringboardStaticMeshComp : public UStaticMeshComponent
	{
	public:
		unsigned char                                              UnknownData_D0FW[0x8];                                   // 0x04F0(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      MinHitNormalZDirection;                                  // 0x04F8(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      BounceIntensity;                                         // 0x04FC(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FRotator                                            OffsetRotation;                                          // 0x0500(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bCarryHorizontalMovement;                                // 0x050C(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUseImpactNormalAsBounceDirection;                       // 0x050D(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bShouldBounceOnAllDirections;                            // 0x050E(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_MZ6W[0x1];                                   // 0x050F(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      HorizontalMovementDamper;                                // 0x0510(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ReverseHorizontalImpulseThreshold;                       // 0x0514(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaxHorizontalSpeedCap;                                   // 0x0518(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      BounceIntensityItemRatio;                                // 0x051C(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      HorizontalMovementDamperItemRatio;                       // 0x0520(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    ItemBounceLimit;                                         // 0x0524(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector2D                                           RandomHorizontalVelocityRange;                           // 0x0528(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class USoundBase*                                          Sound;                                                   // 0x0530(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class USoundAttenuation*                                   AttenuationSettings;                                     // 0x0538(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class USoundConcurrency*                                   ConcurrencySettings;                                     // 0x0540(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UParticleSystem*                                     EmitterTemplate;                                         // 0x0548(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUseSpringboardActorRotation;                            // 0x0550(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_HRGZ[0x7];                                   // 0x0551(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnActorBounced;                                          // 0x0558(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_26KG[0x8];                                   // 0x0568(0x0008) MISSED OFFSET (PADDING)

	public:
		void UpdateArrowTransform();
		static UClass* StaticClass();
	};

	/**
	 * Class Sheik.SheikStartRestrictedMatchScreen
	 * Size -> 0x0010 (FullSize[0x0490] - InheritedSize[0x0480])
	 */
	class USheikStartRestrictedMatchScreen : public UIGUI_ScreenBase
	{
	public:
		class FScriptMulticastDelegate                             OnStartRestrictedMatch;                                  // 0x0480(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, BlueprintCallable, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Sheik.SheikStaticNavInvokerActor
	 * Size -> 0x0010 (FullSize[0x0240] - InheritedSize[0x0230])
	 */
	class ASheikStaticNavInvokerActor : public ASheikNavInvokerActorBase
	{
	public:
		EInvokerShape                                              Shape;                                                   // 0x0230(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_CIPS[0x3];                                   // 0x0231(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    GenerationRadius;                                        // 0x0234(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		int32_t                                                    GenerationLength;                                        // 0x0238(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		int32_t                                                    GenerationWidth;                                         // 0x023C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Sheik.SheikStatsAdapter
	 * Size -> 0x0060 (FullSize[0x0088] - InheritedSize[0x0028])
	 */
	class USheikStatsAdapter : public UObject
	{
	public:
		unsigned char                                              UnknownData_2VO4[0x60];                                  // 0x0028(0x0060) MISSED OFFSET (PADDING)

	public:
		bool IsComplexStat(class UIGStatsSystem* StatsSystem, const class FName& ComplexStatName);
		bool GetTranslatedStatWithSeasonalData(class UIGStatsSystem* StatsSystem, class USheikSeasonalStatsManager* SeasonalStatsManager, const class FName& Name, EIGSeasonIdentifier StatSeason, struct FSheikPlayerDataStat* OutStat, struct FSheikSeasonalStatFieldsData* OutRequestedSeasonData, bool* OutHasSeasonalData);
		bool GetTranslatedStat(class UIGStatsSystem* StatsSystem, const class FName& Name, struct FSheikPlayerDataStat* OutStat);
		class FText GetFormattedStatValueText(class UIGStatsSystem* StatsSystem, const struct FSheikPlayerDataStat& InStat, EIGSeasonIdentifier StatSeason, float InStatValue);
		bool GetAllTranslatedStats(class UIGStatsSystem* StatsSystem, TArray<struct FSheikPlayerDataStat>* OutStatsArray, bool ShowHiddenStats);
		class FText CalculateComplexStatFromGivenValues(class UIGStatsSystem* StatsSystem, const class FName& ComplexStatName, TArray<float> TrackedTitleCardStatValues);
		static UClass* StaticClass();
	};

	/**
	 * Class Sheik.SheikStatsDataAsset
	 * Size -> 0x0030 (FullSize[0x0060] - InheritedSize[0x0030])
	 */
	class USheikStatsDataAsset : public UDataAsset
	{
	public:
		TArray<struct FSheikPlayerDataStat>                        PlayerDataStats;                                         // 0x0030(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FSheikComplexPlayerDataStat>                 ComplexPlayerDataStats;                                  // 0x0040(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<class FName>                                        SingleGameRecordStatNames;                               // 0x0050(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Sheik.SheikStatsDeleteRepProgressManager
	 * Size -> 0x0060 (FullSize[0x0088] - InheritedSize[0x0028])
	 */
	class USheikStatsDeleteRepProgressManager : public UObject
	{
	public:
		unsigned char                                              UnknownData_1V6M[0x10];                                  // 0x0028(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class USheikGameInstance*                                  GameInstance;                                            // 0x0038(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		TArray<struct FInProgressDeleteCache>                      InProgressDeletions;                                     // 0x0040(0x0010) ZeroConstructor, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_OG4B[0x38];                                  // 0x0050(0x0038) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Sheik.SheikStatsTransferRequest
	 * Size -> 0x0078 (FullSize[0x00A0] - InheritedSize[0x0028])
	 */
	class USheikStatsTransferRequest : public UObject
	{
	public:
		unsigned char                                              UnknownData_HA6W[0x60];                                  // 0x0028(0x0060) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class APlayerController*>                           DebugPlayersWithStats;                                   // 0x0088(0x0010) ZeroConstructor, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_QQ0X[0x8];                                   // 0x0098(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Sheik.SheikStatsDownloadAllRequest
	 * Size -> 0x0020 (FullSize[0x00C0] - InheritedSize[0x00A0])
	 */
	class USheikStatsDownloadAllRequest : public USheikStatsTransferRequest
	{
	public:
		unsigned char                                              UnknownData_SA9K[0x20];                                  // 0x00A0(0x0020) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Sheik.SheikStatsDownloadManager
	 * Size -> 0x00B8 (FullSize[0x00E0] - InheritedSize[0x0028])
	 */
	class USheikStatsDownloadManager : public UObject
	{
	public:
		unsigned char                                              UnknownData_WNFC[0x90];                                  // 0x0028(0x0090) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class USheikGameInstance*                                  GameInstance;                                            // 0x00B8(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_A1QL[0x20];                                  // 0x00C0(0x0020) MISSED OFFSET (PADDING)

	public:
		void TransferRequestTimedOut();
		static UClass* StaticClass();
	};

	/**
	 * Class Sheik.SheikStatsDownloadRequest
	 * Size -> 0x0070 (FullSize[0x0110] - InheritedSize[0x00A0])
	 */
	class USheikStatsDownloadRequest : public USheikStatsTransferRequest
	{
	public:
		unsigned char                                              UnknownData_FO3Q[0x70];                                  // 0x00A0(0x0070) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Sheik.SheikStatsSystem
	 * Size -> 0x0060 (FullSize[0x0108] - InheritedSize[0x00A8])
	 */
	class USheikStatsSystem : public UIGStatsSystem
	{
	public:
		TArray<struct FSheikComplexPlayerDataStat>                 ComplexStatList;                                         // 0x00A8(0x0010) Net, ZeroConstructor, NativeAccessSpecifierPublic
		TMap<class FName, uint16_t>                                ComplexStatNameToListIndex;                              // 0x00B8(0x0050) NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Sheik.SheikStatsUploadManager
	 * Size -> 0x00A0 (FullSize[0x00C8] - InheritedSize[0x0028])
	 */
	class USheikStatsUploadManager : public UObject
	{
	public:
		unsigned char                                              UnknownData_ES9F[0x98];                                  // 0x0028(0x0098) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class USheikGameInstance*                                  GameInstance;                                            // 0x00C0(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		void TransferRequestTimedOut();
		static UClass* StaticClass();
	};

	/**
	 * Class Sheik.SheikStatsUploadRequest
	 * Size -> 0x0010 (FullSize[0x00B0] - InheritedSize[0x00A0])
	 */
	class USheikStatsUploadRequest : public USheikStatsTransferRequest
	{
	public:
		unsigned char                                              UnknownData_M42L[0x10];                                  // 0x00A0(0x0010) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Sheik.SheikStoreScreen
	 * Size -> 0x0050 (FullSize[0x04D0] - InheritedSize[0x0480])
	 */
	class USheikStoreScreen : public USheikScreenBase
	{
	public:
		TMap<class FName, class FString>                           StoreDeepLinkArguments;                                  // 0x0480(0x0050) BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic

	public:
		void SetDeepLinkArguments(TMap<class FName, class FString> InDeepLinkArguments);
		void ClearDeepLinkArguments();
		static UClass* StaticClass();
	};

	/**
	 * Class Sheik.SheikStoreSystem
	 * Size -> 0x02C8 (FullSize[0x0340] - InheritedSize[0x0078])
	 */
	class USheikStoreSystem : public USheikOnlineAsyncTaskManager
	{
	public:
		class UClass*                                              SheikWalletSystemClass;                                  // 0x0078(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnInitialStoreDataRetrieved;                             // 0x0080(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnPlatformOffersRetrieved;                               // 0x0090(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnErrorDuringSyncWithOfflinePurchases;                   // 0x00A0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnEntitlementsOwnedRefreshed;                            // 0x00B0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnEntitlementGiftedSuccess;                              // 0x00C0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnEntitlementGiftedFailure;                              // 0x00D0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_8KUK[0x10];                                  // 0x00E0(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnPurchaseComplete;                                      // 0x00F0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnUnlockMultipleWalletIdsComplete;                       // 0x0100(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnVirtualCurrencyUpdated;                                // 0x0110(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnRefreshStoreForItems;                                  // 0x0120(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class USheikUIActorCustomizer*                             Customizer;                                              // 0x0130(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_QQPH[0x38];                                  // 0x0138(0x0038) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TMap<class FString, struct FSheikStoreCategory>            StoreCategories;                                         // 0x0170(0x0050) NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_LREO[0x70];                                  // 0x01C0(0x0070) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class USheikWalletSystem*                                  SheikWalletSystem;                                       // 0x0230(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_4E7Z[0x108];                                 // 0x0238(0x0108) MISSED OFFSET (PADDING)

	public:
		void TogglePlatformInStoreUi(bool bEnabled);
		void SortItemsForDisplay(TArray<struct FSheikStoreItem> StoreItems, TArray<struct FSheikStoreItem>* SortedStoreItems);
		void SortCategoriesForDisplay(TArray<struct FSheikStoreCategory>* Categories);
		void SaveCharacterLoadout();
		void QueryPlatformStoreData();
		void PurchaseItem(const struct FSheikStoreItem& StoreItem, const class FScriptDelegate& Delegate);
		void PostStoreTelemetryEvent(const class FString& Location, const class FString& EventType);
		void PostStoreItemVCTelemetryEvent(const struct FSheikStoreItem& StoreItem, const struct FSheikStoreItem& VCPackage, const class FString& Location, const class FString& EventType);
		void PostStoreItemTelemetryEvent(const struct FSheikStoreItem& StoreItem, const class FString& Location, const class FString& EventType);
		void OnWalletIdRevocationOccurred(TArray<class FName> RevokedWalledIds);
		void OnVirtualCurrencyUpdated__DelegateSignature(int32_t NewAmount, int32_t OldAmount, ESheikStoreErrorType Error);
		void OnUnlockMultipleWalletIdsComplete__DelegateSignature(TArray<class FName> WalletIds, bool bSuccessful);
		void OnRefreshStoreForItems__DelegateSignature(TArray<struct FSheikStoreItem> StoreItems);
		void OnPurchaseItem__DelegateSignature(bool bSuccessful, const struct FSheikError& Error);
		void OnPurchaseComplete__DelegateSignature(const struct FSheikStoreItem& StoreItem, bool bSuccessful);
		void OnPlatformOffersRetrieved__DelegateSignature();
		void OnInitialStoreDataRetrieved__DelegateSignature();
		void OnEnteredFrontendHandleSyncOfflinePurchasesError();
		void OnApplicationReactivated();
		void LogStorePurchaseEvent(class APlayerState* OwningPlayerState, TArray<struct FSheikStoreItem> StoreItems, bool bSuccessful);
		bool IsPlatformStoreCommunicationEnabled();
		bool IsDataDownloaded();
		bool IsBattlePassStoreCategory(const struct FSheikStoreCategory& InCategory);
		void InitializeCustomizableActor(class UClass* UIActorClass, const struct FVector& ActorLocation, const struct FQuat& ActorDefaultRotation);
		void Initialize();
		bool HasPlatformStoreCategory();
		class USheikWalletSystem* GetWalletSystem();
		int32_t GetVirtualCurrency(ESheikStoreErrorType* Error);
		void GetStoreItems(TArray<struct FSheikStoreItem>* OutItems, ESheikStoreErrorType* Error, ESheikStoreItemType TypeFilter);
		void GetStoreCategory(const class FString& ID, struct FSheikStoreCategory* Category, bool* bFound);
		void GetStoreCategories(TArray<struct FSheikStoreCategory>* Categories, ESheikStoreErrorType* Error, bool bIncludeBattlePassCategories, bool bIncludePlatformRmtCategories);
		bool GetRMTCategoryDefinition(const class FName& InCategoryName, struct FSheikRMTCategoryDefinition* OutCategory);
		bool GetPlatformStoreRmtCategoryByName(const class FName& InName, struct FSheikStoreCategory* OutCategory);
		TArray<class FName> GetPlatformStoreCategoryNames();
		void GetPlatformStoreCategory(struct FSheikStoreCategory* Category, bool bSorted);
		bool GetPlatformRmtCategoryStoreItems(const struct FSheikRMTCategoryDefinition& CategoryDefinition, TArray<struct FSheikStoreItem>* OutItems);
		ESheikStoreErrorType GetPlatformOffersQueryError();
		bool GetCategoryForStoreItem(const class FString& InStoreItemOfferId, struct FSheikStoreCategory* OutCategory, ESheikStoreErrorType* Error);
		void GetBattlePassStoreCategory(struct FSheikStoreCategory* Category);
		void GenerateRandomStoreItem(struct FSheikStoreItem* StoreItem);
		void DebugPurchasePlatformStoreOffer();
		void DebugGiftRandomEntitlement();
		class FName DebugGetRandomEntitlement(int32_t NumToGet);
		void DebugGetAllEntitlements();
		void DebugClearAllEntitlements();
		void DebugAddVirtualCurrency(int32_t Amount);
		static UClass* StaticClass();
	};

	/**
	 * Class Sheik.SheikTabBase
	 * Size -> 0x0058 (FullSize[0x0470] - InheritedSize[0x0418])
	 */
	class USheikTabBase : public UIGUI_WidgetBase
	{
	public:
		class UTextBlock*                                          TextLabel;                                               // 0x0418(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UImage*                                              DefaultBackgroundImage;                                  // 0x0420(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UImage*                                              SelectedBackgroundImage;                                 // 0x0428(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UImage*                                              TabImage;                                                // 0x0430(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UWidgetAnimation*                                    FocusAnimation;                                          // 0x0438(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UWidgetAnimation*                                    SelectAnimation;                                         // 0x0440(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bIsSelected;                                             // 0x0448(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_BDUE[0x7];                                   // 0x0449(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FText                                                TabLabel;                                                // 0x0450(0x0018) Edit, BlueprintVisible, Protected, NativeAccessSpecifierProtected
		class UTexture2D*                                          TabImageTexture;                                         // 0x0468(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected

	public:
		void SetTabImage(class UTexture2D* InTexture, bool bMatchTextureSize);
		void SetLabel(const class FText& InLabel);
		void SelectTab(bool IsSelected, bool SkipAnimation);
		void OnTabUnfocused(class UIGUI_WidgetBase* InWidget, int32_t UserIndex);
		void OnTabSelected(class UIGUI_WidgetBase* InWidget, int32_t UserIndex);
		void OnTabFocused(class UIGUI_WidgetBase* InWidget, int32_t UserIndex);
		class FText GetLabel();
		bool GetIsSelected();
		void FocusTab(bool bFocused);
		void ApplyContentOnPreConstruct();
		static UClass* StaticClass();
	};

	/**
	 * Class Sheik.SheikTeammateLocationPrompt
	 * Size -> 0x0108 (FullSize[0x0520] - InheritedSize[0x0418])
	 */
	class USheikTeammateLocationPrompt : public UIGUI_WidgetBase
	{
	public:
		bool                                                       bIsTeammatePromptVisible;                                // 0x0418(0x0001) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_WSWN[0x7];                                   // 0x0419(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class ASheikPlayerStateCommon*                             TeammateState;                                           // 0x0420(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bDidFirstSet;                                            // 0x0428(0x0001) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_UI5W[0x7];                                   // 0x0429(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UOverlay*                                            Visuals;                                                 // 0x0430(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UTextBlock*                                          ReviveTimerTextBlock;                                    // 0x0438(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FVector2D                                           NewLocation;                                             // 0x0440(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FVector2D                                           OldLocation;                                             // 0x0448(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      CurrentTimeForLerp;                                      // 0x0450(0x0004) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_H2MH[0x4];                                   // 0x0454(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TMap<ESheikTeammatePointerDirection, class UImage*>        TeammatePointers;                                        // 0x0458(0x0050) BlueprintVisible, ExportObject, Transient, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected
		TMap<ESheikTeammateHeightDirection, class UImage*>         TeammateHeightIndicators;                                // 0x04A8(0x0050) BlueprintVisible, ExportObject, Transient, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected
		class UTextBlock*                                          TeammateNameTextBlock;                                   // 0x04F8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      MaxTimeForLerp;                                          // 0x0500(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      ScreenRightPadding;                                      // 0x0504(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      ScreenLeftPadding;                                       // 0x0508(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      ScreenBottomPadding;                                     // 0x050C(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      ScreenTopPadding;                                        // 0x0510(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      TeammateZDistanceMinorVariationRange;                    // 0x0514(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      TeammateZDistanceVariationRange;                         // 0x0518(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		int32_t                                                    TeammateNameVisibleThreshold;                            // 0x051C(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected

	public:
		void UpdateTeammateNameVisibilityOnTeamSize(int32_t NumAliveTeammates);
		void UpdateTeammateNameVisibility();
		void UpdatePromptVisibility();
		void UpdatePromptTimer();
		void UpdatePromptPosition(float DeltaTime);
		static UClass* StaticClass();
	};

	/**
	 * Class Sheik.SheikThrownItemIndicator
	 * Size -> 0x0010 (FullSize[0x0428] - InheritedSize[0x0418])
	 */
	class USheikThrownItemIndicator : public UIGUI_WidgetBase
	{
	public:
		bool                                                       isSpectator;                                             // 0x0418(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_4DVG[0x7];                                   // 0x0419(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class ASheikPlayerStateCommon*                             SpectatorPlayerState;                                    // 0x0420(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected

	public:
		void SetForPlayer(class ASheikPlayerStateCommon* SpectatorState);
		void HideWidget_BP();
		void HandleOnThrownItemTargetingPlayer_BP(class AIGInteractablePickup* ThrownItem);
		void HandleOnThrownItemNoLongerTargetingPlayer_BP(class AIGInteractablePickup* ThrownItem);
		static UClass* StaticClass();
	};

	/**
	 * Class Sheik.SheikTitleCardBase
	 * Size -> 0x00F8 (FullSize[0x05B0] - InheritedSize[0x04B8])
	 */
	class USheikTitleCardBase : public USheikWidgetBase
	{
	public:
		bool                                                       bBackgroundVisible;                                      // 0x04B8(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_7TFO[0x7];                                   // 0x04B9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnVariableImageDataReady;                                // 0x04C0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, Protected, NativeAccessSpecifierProtected
		class FScriptMulticastDelegate                             OnLoadoutSoftPointersLoadSucceeded;                      // 0x04D0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, Protected, NativeAccessSpecifierProtected
		class FScriptMulticastDelegate                             OnLoadoutSoftPointersLoadFailed;                         // 0x04E0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, Protected, NativeAccessSpecifierProtected
		TMap<class FName, struct FEnemyStatValues>                 EnemyStatInfo;                                           // 0x04F0(0x0050) Edit, BlueprintVisible, Protected, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_6BV5[0x40];                                  // 0x0540(0x0040) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UTexture2D*>                                  LoadedTextures;                                          // 0x0580(0x0010) ZeroConstructor, NativeAccessSpecifierPrivate
		TArray<class UMaterialInterface*>                          LoadedMaterials;                                         // 0x0590(0x0010) ZeroConstructor, NativeAccessSpecifierPrivate
		TArray<class UIGMoveMontage*>                              LoadedMontages;                                          // 0x05A0(0x0010) ZeroConstructor, NativeAccessSpecifierPrivate

	public:
		bool TryGetStatByName(const class FName& RawStatName, struct FSheikPlayerDataStat* OutStat, class USheikGameInstance* GameInstanceRef);
		void SetEnemyStatInfo(class UIGStatsSystem* StatsSystem, TArray<struct FIGTitleCardStat> TitleCardStats, TArray<float> TitleCardStatValues);
		void SetCurrentTitleCard(const struct FTitleCardLoadout& TitleCardLoadout, const class FString& UserName, TArray<float> StatArray, bool bPlayerIsDead);
		void SetBackgroundVisible(bool BackgroundVisible);
		void ReleaseLoadedTitleCardData();
		void OnVariableImageLoadFailed();
		void OnVariableImageDataReady__DelegateSignature();
		void OnLoadoutSoftPointersLoadSucceeded__DelegateSignature();
		void OnLoadoutSoftPointersLoadFailed__DelegateSignature();
		void LoadVariableImageData(const struct FIGVariableImageData& InImageData);
		void LoadAllLoadoutSoftPointers(const struct FTitleCardLoadout& InTitleCardLoadout);
		void HandleOnVariableImageDataLoadComplete();
		void HandleOnLoadoutSoftPointersLoadComplete();
		TArray<struct FSoftObjectPath> GetSoftObjectPathsFromLoadout(struct FTitleCardLoadout* InTitleCardLoadout);
		static UClass* StaticClass();
	};

	/**
	 * Class Sheik.SheikTitleCardDataManager
	 * Size -> 0x0230 (FullSize[0x0258] - InheritedSize[0x0028])
	 */
	class USheikTitleCardDataManager : public UObject
	{
	public:
		class UClass*                                              AssetDataSourcesClass;                                   // 0x0028(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_MNK6[0x228];                                 // 0x0030(0x0228) MISSED OFFSET (PADDING)

	public:
		bool TranslateFromIdsToLoadout(const struct FTitleCardLoadoutIds& InLoadoutIds, struct FTitleCardLoadout* OutLoadoutData);
		void HandleOnWalletAssetUnlocked(TArray<class FName> WalletIds, TArray<class FName> FailedCodes);
		static UClass* StaticClass();
	};

	/**
	 * Class Sheik.SheikTitleCardFrontendUtility
	 * Size -> 0x05E0 (FullSize[0x0800] - InheritedSize[0x0220])
	 */
	class ASheikTitleCardFrontendUtility : public AActor
	{
	public:
		class FScriptMulticastDelegate                             DebugOnlyRefreshTitleCardContent;                        // 0x0220(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnUnsavedTitleCardChangesDetected;                       // 0x0230(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, Protected, NativeAccessSpecifierProtected
		class FScriptMulticastDelegate                             OnTitleCardChangesSaved;                                 // 0x0240(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, Protected, NativeAccessSpecifierProtected
		class FScriptMulticastDelegate                             OnCharacterPreviewReady;                                 // 0x0250(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, Protected, NativeAccessSpecifierProtected
		class FScriptMulticastDelegate                             OnCharacterPoseReady;                                    // 0x0260(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, Protected, NativeAccessSpecifierProtected
		class UClass*                                              CharacterPreviewClass;                                   // 0x0270(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class USheikUIActorCustomizer*                             Customizer;                                              // 0x0278(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class USheikAccessorySystem*                               AccessorySystem;                                         // 0x0280(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FVector                                             PreviewLocation;                                         // 0x0288(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_IYZW[0xC];                                   // 0x0294(0x000C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FQuat                                               PreviewRotation;                                         // 0x02A0(0x0010) Edit, BlueprintVisible, IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_HMIS[0x4F8];                                 // 0x02B0(0x04F8) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class USheikGameInstance*                                  GameInstance;                                            // 0x07A8(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class AFrontendHUD*                                        FrontendHUD;                                             // 0x07B0(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class USheikTitleCardDataManager*                          TitleCardDataManager;                                    // 0x07B8(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_S0BO[0x28];                                  // 0x07C0(0x0028) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UIGMoveMontage*>                              LoadedMontages;                                          // 0x07E8(0x0010) ZeroConstructor, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_B8DD[0x8];                                   // 0x07F8(0x0008) MISSED OFFSET (PADDING)

	public:
		void UnequipRewardFromSlot(ESheikTitleCardDataType RewardType, ETitleCardStackOrder SlotToUse);
		void UnequipReward(ESheikTitleCardDataType RewardType);
		void SpawnCharacterPreview();
		void SetupUtility();
		void SetupTitleCardLoadout();
		void SetSheikAccessorySystem(class USheikAccessorySystem* InAccessorySystem);
		void SaveNewLoadout();
		void ReleaseLoadedPoseMontages();
		void RandomizeReward(ESheikTitleCardDataType RewardType);
		void RandomizeAllTitleCardRewards();
		void PreviewTitleCardBackground(const struct FIGTitleCardBackground& NewBackground);
		void PreviewStatInSlot(const struct FIGTitleCardStat& NewStat, ETitleCardStackOrder SlotToUse);
		void PreviewPlayerTitle(const struct FIGTitleCardPlayerTitle& NewPlayerTitle);
		void PreviewPlayerPose(const struct FIGTitleCardPlayerPose& NewPose);
		void PreviewMedalInSlot(const struct FIGTitleCardMedal& NewMedal, ETitleCardStackOrder SlotToUse);
		void PreviewBorder(const struct FIGTitleCardBorder& NewBorder);
		bool PoseCharacter(const struct FIGTitleCardPlayerPose& PoseToUse);
		void OnUnsavedTitleCardChangesDetected__DelegateSignature();
		void OnTitleCardChangesSaved__DelegateSignature();
		void OnPoseMontageLoadFailed();
		void OnPoseMontageLoadComplete(class UIGMoveMontage* LoadedMontage);
		void OnCharacterPreviewReady__DelegateSignature();
		void OnCharacterPoseReady__DelegateSignature();
		void LoadPoseMontage(const struct FIGTitleCardPlayerPose& InPoseData);
		void LoadCurrentTitleCardLoadout();
		void Init();
		void HandleOnPoseMontageLoadComplete();
		class USheikWalletSystem* GetWalletSystem();
		bool GetTitleCardRewardsByType(ESheikTitleCardDataType RewardType, TArray<struct FIGTitleCardBase>* OutRewards);
		bool GetStats(TArray<struct FIGTitleCardStat>* OutStats);
		bool GetStatById(const class FName& ID, struct FIGTitleCardStat* OutStat);
		bool GetPlayerTitles(TArray<struct FIGTitleCardPlayerTitle>* OutTitles);
		bool GetPlayerTitleById(const class FName& ID, struct FIGTitleCardPlayerTitle* OutPlayerTitle);
		bool GetPlayerPoses(TArray<struct FIGTitleCardPlayerPose>* OutPlayerPoses);
		bool GetPlayerPoseById(const class FName& ID, struct FIGTitleCardPlayerPose* OutPlayerPoses);
		bool GetMedals(TArray<struct FIGTitleCardMedal>* OutMedals);
		bool GetMedalById(const class FName& ID, struct FIGTitleCardMedal* OutMedal);
		struct FTitleCardLoadout GetDesiredLoadout();
		bool GetCurrentlyEquippedStats(TMap<ETitleCardStackOrder, struct FIGTitleCardStat>* OutStats);
		bool GetCurrentlyEquippedPlayerTitle(struct FIGTitleCardPlayerTitle* OutPlayerTitle);
		bool GetCurrentlyEquippedPlayerPose(struct FIGTitleCardPlayerPose* OutPlayerPose);
		bool GetCurrentlyEquippedMedals(TMap<ETitleCardStackOrder, struct FIGTitleCardMedal>* OutPlayerMedals);
		struct FTitleCardLoadout GetCurrentlyEquippedLoadout();
		bool GetCurrentlyEquippedBorder(struct FIGTitleCardBorder* OutBorder);
		bool GetCurrentlyEquippedBackground(struct FIGTitleCardBackground* OutBackground);
		struct FTitleCardLoadoutIds GetCurrentlyEquipped();
		bool GetBorders(TArray<struct FIGTitleCardBorder>* OutBorders);
		bool GetBorderById(const class FName& ID, struct FIGTitleCardBorder* OutBorder);
		bool GetBackgrounds(TArray<struct FIGTitleCardBackground>* OutBackgrounds);
		bool GetBackgroundById(const class FName& ID, struct FIGTitleCardBackground* OutBackground);
		void EquipPreviewedReward();
		void DebugOnlyRefreshTitleCardContent__DelegateSignature();
		void DebugOnly_UpdateCurrentlyEquippedWithRandom();
		void DebugOnly_UpdateCurrentlyEquippedWithDefaults();
		void ClearPreview();
		void ApplyCharacterPreviewLoadout();
		static UClass* StaticClass();
	};

	/**
	 * Class Sheik.SheikUIActor
	 * Size -> 0x0440 (FullSize[0x0670] - InheritedSize[0x0230])
	 */
	class ASheikUIActor : public AIGUIActor
	{
	public:
		class UUISkeletalMeshToAnimInstance*                       MeshToAnimInstance;                                      // 0x0230(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CameraRelativeOffsetMax;                                 // 0x0238(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EIGBodyType                                                CurrentBodyType;                                         // 0x023C(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bAllowZoomInputControl;                                  // 0x023D(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bAllowRotationInputControl;                              // 0x023E(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bAllowFocusWithoutInput;                                 // 0x023F(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaxCameraMoveHeight;                                     // 0x0240(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MinCameraMoveHeight;                                     // 0x0244(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CurrentCameraHeight;                                     // 0x0248(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CurrentCameraRotationAngleAroundCharacter;               // 0x024C(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CameraRotationSpeed;                                     // 0x0250(0x0004) Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MinDistanceToCharacter;                                  // 0x0254(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaxDistanceToCharacter;                                  // 0x0258(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CurrentDistance;                                         // 0x025C(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      RotationMaxSpeed;                                        // 0x0260(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ZoomSpeed;                                               // 0x0264(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MouseDragThreshold;                                      // 0x0268(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MouseScrollWheelZoom;                                    // 0x026C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       UseDebugLerpSpeed;                                       // 0x0270(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_HWIY[0x3];                                   // 0x0271(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      DebugFocusSpeed;                                         // 0x0274(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnBodyAssetsLoadedComplete;                              // 0x0278(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnSkinAssetLoadComplete;                                 // 0x0288(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnEyeColorAssetLoadComplete;                             // 0x0298(0x0010) ZeroConstructor, InstancedReference, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnEyebrowAssetLoadComplete;                              // 0x02A8(0x0010) ZeroConstructor, InstancedReference, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_VFIR[0x1E0];                                 // 0x02B8(0x01E0) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class USkeletalMeshComponent*                              BaseSkeletalMeshComponent;                               // 0x0498(0x0008) Edit, BlueprintVisible, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class USkeletalMeshComponent*                              HeadShapeMeshComponent;                                  // 0x04A0(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_6N54[0xF8];                                  // 0x04A8(0x00F8) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UMaterialInterface*                                  CachedBodyMaterial;                                      // 0x05A0(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UMaterialInterface*                                  CachedHeadMaterial;                                      // 0x05A8(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UMaterialInterface*                                  CachedEyeColorMaterial;                                  // 0x05B0(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UMaterialInterface*                                  CachedEyebrowMaterial;                                   // 0x05B8(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UCharacterSkinNameList*                              SkinListAsset;                                           // 0x05C0(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_57LE[0xA8];                                  // 0x05C8(0x00A8) MISSED OFFSET (PADDING)

	public:
		void ToggleInputControl(bool bAllowInput);
		void StopMontage(float BlendOutTime);
		void SetRotationAppliesToCharacter(bool RotationAppliesToCharacter);
		void SetInputThresholdByBody(const struct FSheikAccessoryInfo& BodyInfo, float CameraHeight);
		void SetFixedCamera(const struct FVector& CamLocation, const struct FQuat& CamRotation);
		void SetCameraToRegion(const struct FSheikBodyRegionInfo& FocusRegionInfo);
		void SetAllowZoomInput(bool bAllowZoomInput);
		void SetAllowRotationInput(bool bAllowRotationInput);
		void SetAllowFocusWithoutInput(bool bAllowFocus);
		void PlayOrStopMontage(class UAnimMontage* MontageToPlay, float BlendOutTime);
		void OnZoomOutReleased();
		void OnZoomOutPressed();
		void OnZoomInReleased();
		void OnZoomInPressed();
		void OnSkinAssetLoadComplete__DelegateSignature();
		void OnEyeColorAssetLoadComplete__DelegateSignature();
		void OnEyebrowAssetLoadComplete__DelegateSignature();
		void OnBodyAssetsLoadComplete__DelegateSignature();
		void HideSkinByZone(TArray<EIGSkinZones> SkinZoneList);
		void ForceSetCameraToDefaultPosition(float CameraHeight, float CameraPan);
		void FocusCameraToRegion(const struct FSheikBodyRegionInfo& FocusRegionInfo, float InLerpSpeed);
		static UClass* StaticClass();
	};

	/**
	 * Class Sheik.SheikUIActorAnimInstance
	 * Size -> 0x0008 (FullSize[0x02C0] - InheritedSize[0x02B8])
	 */
	class USheikUIActorAnimInstance : public UAnimInstance
	{
	public:
		unsigned char                                              UnknownData_4XRP[0x8];                                   // 0x02B8(0x0008) Fix Super Size

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Sheik.SheikUIActorCustomizer
	 * Size -> 0x0260 (FullSize[0x0288] - InheritedSize[0x0028])
	 */
	class USheikUIActorCustomizer : public UObject
	{
	public:
		class FScriptMulticastDelegate                             OnUpdateComplete;                                        // 0x0028(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnLoadoutPerfCostChanged;                                // 0x0038(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class ASheikUIActor*                                       Actor;                                                   // 0x0048(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class USheikAccessorySystem*                               AccessorySystem;                                         // 0x0050(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		int32_t                                                    PartySlot;                                               // 0x0058(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_G1ET[0x22C];                                 // 0x005C(0x022C) MISSED OFFSET (PADDING)

	public:
		bool WillAccessoryExceedMaxBudget(const struct FSheikAccessoryInfo& Accessory);
		void UpdateModel();
		void UnSetAccessory(const struct FSheikAccessoryInfo& Accessory, bool bUpdateModel);
		void StopAccessoryMontage(float BlendOutTime);
		void SetModelVisible(bool bVisible, bool AllowInput);
		void SetCamera(float ZoomDistance, float CameraHeight, float CameraPan, float FOV, float Pitch);
		void SetBaseLoadout(const struct FCharacterLoadout& InBaseLoadout);
		void SetAccessory(const struct FSheikAccessoryInfo& Accessory, bool bUpdateModel);
		void SaveDesiredLoadoutAsPreset(int32_t AddedIndex, int32_t PresetSlotIndex);
		void SaveBaseLoadout();
		void ResetLoadouts();
		void ResetCamera(float Pitch, float Height, float FOV, float Pan);
		void PlayOrStopAccessoryMontage(const struct FSheikAccessoryInfo& Accessory, float BlendOutTime);
		void OnUpdateComplete__DelegateSignature();
		void OnTattooLoadedComplete();
		void OnSkinColorLoadedComplete();
		void OnMakeupLoadedComplete();
		void OnHeadShapeLoadedComplete();
		void OnEyeColorLoadedComplete();
		void OnEyebrowLoadedComplete();
		void OnBodyShapeLoadedComplete();
		void OnApparelLoadedComplete();
		void MakeDesiredLoadoutBase();
		void LoadoutWithoutApparel(const struct FCharacterLoadout& Loadout, struct FCharacterLoadout* OutLoadout);
		bool IsUpdateInProgress();
		bool IsLoadoutEqualToBase(const struct FCharacterLoadout& InLoadout);
		bool IsEquippedOnLoadout(const struct FCharacterLoadout& Loadout, const struct FSheikAccessoryInfo& Accessory);
		bool IsEquippedOnDesired(const struct FSheikAccessoryInfo& Accessory);
		bool IsEquippedOnBase(const struct FSheikAccessoryInfo& Accessory);
		bool IsDesiredOverBudget();
		int32_t GetPartySlot();
		int32_t GetMaxPerfCost();
		TArray<struct FSheikAccessoryInfo> GetLoadoutClothingAccessories(const struct FCharacterLoadout& Loadout);
		int32_t GetDesiredLoadoutPerfCost();
		struct FCharacterLoadout GetDesiredLoadout();
		void GetConflictingDesiredItemsForAccessory(const struct FSheikAccessoryInfo& ApparelAccessory, TArray<struct FSheikAccessoryInfo>* Conflicts);
		int32_t GetBaseLoadoutPerfCost();
		struct FCharacterLoadout GetBaseLoadout();
		bool GetBaseAccessoryByWalletId(const class FName& WalletId, struct FSheikAccessoryInfo* Accessory);
		class ASheikUIActor* GetActor();
		void BulkSetAccessory(TArray<struct FSheikAccessoryInfo> InAccessories, bool bUpdateModel);
		void ApplyEmoteChanges(TArray<class FName> InEmoteAccessoryIds);
		static UClass* StaticClass();
	};

	/**
	 * Class Sheik.SheikUITitleStorageInterface
	 * Size -> 0x01D8 (FullSize[0x0200] - InheritedSize[0x0028])
	 */
	class USheikUITitleStorageInterface : public UObject
	{
	public:
		class FScriptMulticastDelegate                             OnDataRetrieved;                                         // 0x0028(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_W9JB[0xB0];                                  // 0x0038(0x00B0) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FNoticesUIData>                              NoticesDataList;                                         // 0x00E8(0x0010) ZeroConstructor, NativeAccessSpecifierPrivate
		TArray<struct FGlobalNoticeControl>                        GlobalNoticeControlsList;                                // 0x00F8(0x0010) ZeroConstructor, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_FUAH[0xA8];                                  // 0x0108(0x00A8) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FSheikRMTEntitlementImageRow>                RMTEntitlementImageDataList;                             // 0x01B0(0x0010) ZeroConstructor, NativeAccessSpecifierPrivate
		TArray<struct FSheikFeatureEntitlementRow>                 FeatureEntitlementDataList;                              // 0x01C0(0x0010) ZeroConstructor, NativeAccessSpecifierPrivate
		TArray<struct FSheikGameModeModuleData>                    GameModeModuleDataList;                                  // 0x01D0(0x0010) ZeroConstructor, NativeAccessSpecifierPrivate
		TArray<struct FSheikRMTCategoryDefinition>                 RMTCategoryDefinitionList;                               // 0x01E0(0x0010) ZeroConstructor, NativeAccessSpecifierPrivate
		int32_t                                                    MaxPartySize;                                            // 0x01F0(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_WRXM[0x4];                                   // 0x01F4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class USheikGameInstance*                                  GameInstance;                                            // 0x01F8(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		bool RequestUIData(struct FSheikError* Error);
		void OnGetRequiredLegalDocs__DelegateSignature(bool bWasSuccessful, const struct FSheikError& Error, TArray<class FString> DocumentPaths);
		void OnDataRetrieved__DelegateSignature(bool bSuccessful, const struct FSheikError& Error);
		void OnAcceptLegalDocument__DelegateSignature(bool bWasSuccessful, const struct FSheikError& Error);
		void LoadImageForRMTEntitlement(const class FString& RMTOfferId, class UTexture2D** Texture, bool* LoadSucceeded);
		bool IsVCOffer(const class FString& RMTOfferId);
		bool IsFeatureEntitlementEnabled(const class FString& FeatureEntitlementName);
		bool IsDevGameModeModule(const class FText& GameModeModuleName);
		bool IsDataRetrievalComplete();
		class FText GetVirtualCurrencyDisplayTitle(const class FString& RMTOfferId);
		class FText GetRMTOfferPromoText(const class FString& RMTOfferId);
		TArray<struct FSheikRMTEntitlementImageRow> GetRMTEntitlementImageData();
		TArray<struct FSheikRMTCategoryDefinition> GetRMTCategoryDefinitionData();
		void GetRequiredLegalDocs(const class FString& CountryCode, const class FString& LanguageCode, const class FScriptDelegate& Delegate);
		TArray<struct FNoticesUIData> GetNoticesDataList();
		int32_t GetMaxPartySize();
		bool GetLegalDocument(const class FString& Filename, class FString* Document, struct FSheikError* Error);
		TArray<struct FGlobalNoticeControl> GetGlobalNoticeControls();
		TArray<struct FSheikGameModeModuleData> GetGameModeModuleData();
		TArray<struct FSheikFeatureEntitlementRow> GetFeatureEntitlementData();
		void AcceptLegalDocument(const class FString& Filename, const class FScriptDelegate& Delegate);
		static UClass* StaticClass();
	};

	/**
	 * Class Sheik.SheikRequiredStringTables
	 * Size -> 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
	 */
	class USheikRequiredStringTables : public UDataAsset
	{
	public:
		TArray<class UStringTable*>                                RequiredStringTables;                                    // 0x0030(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Sheik.SheikVFXDepthVolume
	 * Size -> 0x0000 (FullSize[0x0258] - InheritedSize[0x0258])
	 */
	class ASheikVFXDepthVolume : public ATriggerVolume
	{
	public:
		float GetTopOfVolume();
		static UClass* StaticClass();
	};

	/**
	 * Class Sheik.SheikVFXHandlerActor
	 * Size -> 0x0000 (FullSize[0x0220] - InheritedSize[0x0220])
	 */
	class ASheikVFXHandlerActor : public AIGVFXHandlerActor
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Sheik.SheikViewportClient
	 * Size -> 0x0008 (FullSize[0x0368] - InheritedSize[0x0360])
	 */
	class USheikViewportClient : public UGameViewportClient
	{
	public:
		unsigned char                                              UnknownData_HGAU[0x8];                                   // 0x0360(0x0008) MISSED OFFSET (PADDING)

	public:
		void Internal_OnToggleFullscreen(bool bIsFullscreen);
		static UClass* StaticClass();
	};

	/**
	 * Class Sheik.SheikVirtualCurrencyScreen
	 * Size -> 0x0000 (FullSize[0x0480] - InheritedSize[0x0480])
	 */
	class USheikVirtualCurrencyScreen : public USheikScreenBase
	{
	public:
		void SetCanNavigateBack(bool bCanNavigateBack);
		static UClass* StaticClass();
	};

	/**
	 * Class Sheik.SheikWalletSystem
	 * Size -> 0x0068 (FullSize[0x0090] - InheritedSize[0x0028])
	 */
	class USheikWalletSystem : public UObject
	{
	public:
		class UClass*                                              AssetDataSourcesClass;                                   // 0x0028(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UIGAssetDataSources*                                 AssetDataSources;                                        // 0x0030(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_MNVM[0x58];                                  // 0x0038(0x0058) MISSED OFFSET (PADDING)

	public:
		bool IsWalletAssetUnlocked(const class FName& InWalletId);
		bool GetWalletAssetById(const class FName& WalletId, struct FIGWalletAssetInfo* OutWalletAsset);
		bool GetUnlockedWalletAssetsOfType(TArray<struct FIGWalletAssetInfo>* OutOwnedWalletAssets, TArray<EIGWalletAssetType> IncludesAssetType);
		bool GetUnlockedWalletAssets(TArray<struct FIGWalletAssetInfo>* OutOwnedWalletAssets);
		bool GetDefaultEntitlementAssets(TArray<struct FIGWalletAssetInfo>* OutWalletAssets);
		void BuildMapping();
		static UClass* StaticClass();
	};

	/**
	 * Class Sheik.SheikWaterCollisionComponent
	 * Size -> 0x00E0 (FullSize[0x0190] - InheritedSize[0x00B0])
	 */
	class USheikWaterCollisionComponent : public USheikActorCollisionComponent
	{
	public:
		bool                                                       bInstantKillOnContact;                                   // 0x00B0(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_7Z2T[0x3];                                   // 0x00B1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             RelativeForcedFallVelocity;                              // 0x00B4(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      CharacterHorizontalVelocityScalar;                       // 0x00C0(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      CharacterInverseVerticalVelocityScalar;                  // 0x00C4(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bAutoBounceToLand;                                       // 0x00C8(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_0LRQ[0x3];                                   // 0x00C9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      AutoBounceArc;                                           // 0x00CC(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      ShoreOffset;                                             // 0x00D0(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      MinBounceDistance;                                       // 0x00D4(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_BAAS[0x8];                                   // 0x00D8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FIGMulticastData                                    MulticastData;                                           // 0x00E0(0x0090) Edit, Protected, NativeAccessSpecifierProtected
		class USoundBase*                                          Sound;                                                   // 0x0170(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class USoundAttenuation*                                   AttenuationSettings;                                     // 0x0178(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class USoundConcurrency*                                   ConcurrencySettings;                                     // 0x0180(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UParticleSystem*                                     EmitterTemplate;                                         // 0x0188(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Sheik.SheikWeeklyRepStrategy
	 * Size -> 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
	 */
	class USheikWeeklyRepStrategy : public UObject
	{
	public:
		unsigned char                                              UnknownData_8MCH[0x10];                                  // 0x0028(0x0010) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Sheik.SheikXpSystem
	 * Size -> 0x00B0 (FullSize[0x00D8] - InheritedSize[0x0028])
	 */
	class USheikXpSystem : public UObject
	{
	public:
		unsigned char                                              UnknownData_F1RN[0xB0];                                  // 0x0028(0x00B0) MISSED OFFSET (PADDING)

	public:
		bool GetMatchXpContributions(TMap<class FName, float>* OutXpContributions);
		float GetMatchXp();
		float GetLifetimeXp();
		void CalculateMatchXp(int32_t Placement);
		static UClass* StaticClass();
	};

	/**
	 * Class Sheik.TeleportLocation
	 * Size -> 0x0008 (FullSize[0x0228] - InheritedSize[0x0220])
	 */
	class ATeleportLocation : public AActor
	{
	public:
		class FName                                                LocationName;                                            // 0x0220(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Sheik.UISkeletalMeshToAnimInstance
	 * Size -> 0x0050 (FullSize[0x0080] - InheritedSize[0x0030])
	 */
	class UUISkeletalMeshToAnimInstance : public UDataAsset
	{
	public:
		unsigned char                                              SkeletalMeshToAnimInstanceMap[0x50];                     // 0x0030(0x0050) UNKNOWN PROPERTY: MapProperty

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
