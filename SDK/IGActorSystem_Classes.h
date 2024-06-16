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
	 * Class IGActorSystem.IGNotifyStateBase
	 * Size -> 0x0068 (FullSize[0x0098] - InheritedSize[0x0030])
	 */
	class UIGNotifyStateBase : public UAnimNotifyState
	{
	public:
		int32_t                                                    Priority;                                                // 0x0030(0x0004) BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_98FM[0x4];                                   // 0x0034(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TMap<EMoveTier, class UIGNotifyStateBase*>                 TierMap;                                                 // 0x0038(0x0050) BlueprintReadOnly, NativeAccessSpecifierPublic
		bool                                                       bOnlyProcessIfTiersMatch;                                // 0x0088(0x0001) Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		EMoveTier                                                  MoveTier;                                                // 0x0089(0x0001) BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_M32H[0x2];                                   // 0x008A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                OriginalMontageName;                                     // 0x008C(0x0008) Edit, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_YY5G[0x4];                                   // 0x0094(0x0004) MISSED OFFSET (PADDING)

	public:
		void UpdateMontageName(class UAnimMontage* InInstance);
		bool IsRunningOnOriginalMontage(class UAnimMontage* InInstance);
		static UClass* StaticClass();
	};

	/**
	 * Class IGActorSystem.FameCombatDetectionState
	 * Size -> 0x0020 (FullSize[0x00B8] - InheritedSize[0x0098])
	 */
	class UFameCombatDetectionState : public UIGNotifyStateBase
	{
	public:
		bool                                                       bOverrideDetectionDistance;                              // 0x0098(0x0001) Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_OYP2[0x3];                                   // 0x0099(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      Distance;                                                // 0x009C(0x0004) Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bIncludeTeammate;                                        // 0x00A0(0x0001) Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_EDNL[0x3];                                   // 0x00A1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      FameRate;                                                // 0x00A4(0x0004) Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      FameRateCombat;                                          // 0x00A8(0x0004) Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      FameFinishBonus;                                         // 0x00AC(0x0004) Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      FameFinishBonusCombat;                                   // 0x00B0(0x0004) Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_UA1R[0x4];                                   // 0x00B4(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class IGActorSystem.IGAccessory
	 * Size -> 0x00F0 (FullSize[0x0120] - InheritedSize[0x0030])
	 */
	class UIGAccessory : public UPrimaryDataAsset
	{
	public:
		class FString                                              MetadataFile;                                            // 0x0030(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EIGRegion                                                  Region;                                                  // 0x0040(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_77KQ[0x7];                                   // 0x0041(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<EIGRegion>                                          OverlapRegions;                                          // 0x0048(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic
		struct FGuid                                               GroupId;                                                 // 0x0058(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FText                                                DisplayName;                                             // 0x0068(0x0018) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		TArray<struct FIGLoadedAccessory>                          LoadedAssets;                                            // 0x0080(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic
		bool                                                       NoHair;                                                  // 0x0090(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       AltHair;                                                 // 0x0091(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       CoversMustache;                                          // 0x0092(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       CoversChin;                                              // 0x0093(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       CoversCheeks;                                            // 0x0094(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       RequiresMinimumApparel;                                  // 0x0095(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       OverlapRegionsRequireMinimumApparel;                     // 0x0096(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       IsDefaultUndergarment;                                   // 0x0097(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    PerfScore;                                               // 0x0098(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    SkinZonesToHide;                                         // 0x009C(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              MaterialSlotsToHide[0x50];                               // 0x00A0(0x0050) UNKNOWN PROPERTY: SetProperty
		int32_t                                                    ExceedsLayerThicknessRegions;                            // 0x00F0(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    OccupiesLowerLayersRegions;                              // 0x00F4(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<EIGSkinZones>                                       DebugSkinZonesToHideList;                                // 0x00F8(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, NativeAccessSpecifierPublic
		class FName                                                VariationGroupName;                                      // 0x0108(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FIGMaterialVariation>                        MaterialVariations;                                      // 0x0110(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic

	public:
		void ResolveTextCultureInvariance(const struct FIGContentReleaseVersion& CurrentVersion);
		bool IsTextCultureInvarianceDirty(const struct FIGContentReleaseVersion& CurrentVersion);
		static UClass* StaticClass();
	};

	/**
	 * Class IGActorSystem.IGAccessoryData
	 * Size -> 0x0020 (FullSize[0x0050] - InheritedSize[0x0030])
	 */
	class UIGAccessoryData : public UDataAsset
	{
	public:
		struct FIGContentReleaseVersion                            ReleaseVersion;                                          // 0x0030(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		TArray<struct FIGAccessoryAsset>                           AccessorySet;                                            // 0x0040(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class IGActorSystem.IGAchievementsManager
	 * Size -> 0x00B0 (FullSize[0x00D8] - InheritedSize[0x0028])
	 */
	class UIGAchievementsManager : public UObject
	{
	public:
		TMap<EIGAchievement, int32_t>                              IdMap;                                                   // 0x0028(0x0050) Protected, NativeAccessSpecifierProtected
		TMap<EIGAchievement, int32_t>                              TargetMap;                                               // 0x0078(0x0050) Protected, NativeAccessSpecifierProtected
		class UIGAchievementsProgress*                             SavedAchievementsProgress;                               // 0x00C8(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_08VC[0x8];                                   // 0x00D0(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class IGActorSystem.IGAchievementsProgress
	 * Size -> 0x0050 (FullSize[0x0078] - InheritedSize[0x0028])
	 */
	class UIGAchievementsProgress : public USaveGame
	{
	public:
		TMap<int32_t, int32_t>                                     IdToProgressMap;                                         // 0x0028(0x0050) NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class IGActorSystem.IGAchievementTypes
	 * Size -> 0x01B0 (FullSize[0x01E0] - InheritedSize[0x0030])
	 */
	class UIGAchievementTypes : public UPrimaryDataAsset
	{
	public:
		TMap<EIGAchievement, int32_t>                              AchievementTargetMap;                                    // 0x0030(0x0050) Edit, NativeAccessSpecifierPublic
		bool                                                       bIsXboxAchievementsReady;                                // 0x0080(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_UDOZ[0x7];                                   // 0x0081(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TMap<EIGAchievement, int32_t>                              GDKIdMap;                                                // 0x0088(0x0050) Edit, NativeAccessSpecifierPublic
		bool                                                       bIsPS5AchievementsReady;                                 // 0x00D8(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_EZ76[0x7];                                   // 0x00D9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TMap<EIGAchievement, int32_t>                              PS5IdMap;                                                // 0x00E0(0x0050) Edit, NativeAccessSpecifierPublic
		bool                                                       bIsPS4AchievementsReady;                                 // 0x0130(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_9X49[0x7];                                   // 0x0131(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TMap<EIGAchievement, int32_t>                              PS4IdMap;                                                // 0x0138(0x0050) Edit, NativeAccessSpecifierPublic
		bool                                                       bIsEpicAchievementsReady;                                // 0x0188(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_TNPV[0x7];                                   // 0x0189(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TMap<EIGAchievement, int32_t>                              EpicIdMap;                                               // 0x0190(0x0050) Edit, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class IGActorSystem.IGActionAllowedState
	 * Size -> 0x0050 (FullSize[0x00E8] - InheritedSize[0x0098])
	 */
	class UIGActionAllowedState : public UIGNotifyStateBase
	{
	public:
		unsigned char                                              AllowedActions[0x50];                                    // 0x0098(0x0050) UNKNOWN PROPERTY: SetProperty

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class IGActorSystem.IGActorModValueManager
	 * Size -> 0x0020 (FullSize[0x00D0] - InheritedSize[0x00B0])
	 */
	class UIGActorModValueManager : public UActorComponent
	{
	public:
		TArray<struct FIGModValueFloat>                            ModifiedCharacterStats;                                  // 0x00B0(0x0010) Edit, Net, ZeroConstructor, EditConst, RepNotify, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_QCY3[0x10];                                  // 0x00C0(0x0010) MISSED OFFSET (PADDING)

	public:
		void ServerDebugSetModifiedFloatBaseValue(int32_t index, float BaseValue);
		void ServerDebugRemoveStackFloat(int32_t TargetStat, EIGModType ModType, float ModValue);
		void ServerDebugClearAllStackFloats();
		void ServerDebugAddStackFloatTimed(int32_t TargetStat, EIGModType ModType, float ModValue, float Time);
		void ServerDebugAddStackFloat(int32_t TargetStat, EIGModType ModType, float ModValue);
		void OnRep_ModifiedCharacterStats();
		static UClass* StaticClass();
	};

	/**
	 * Class IGActorSystem.IGPerkData
	 * Size -> 0x0040 (FullSize[0x0070] - InheritedSize[0x0030])
	 */
	class UIGPerkData : public UDataAsset
	{
	public:
		class FName                                                PerkName;                                                // 0x0030(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EPerkActivationType                                        ActivationType;                                          // 0x0038(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EPerkActivationType                                        DeactivationType;                                        // 0x0039(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EPerkActivationType                                        ActiveResetType;                                         // 0x003A(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_EACP[0x1];                                   // 0x003B(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      ThresholdValue;                                          // 0x003C(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       CheckLessThanThreshold;                                  // 0x0040(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       CanDuplicate;                                            // 0x0041(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_87ZC[0x2];                                   // 0x0042(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    MaxDuplicates;                                           // 0x0044(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       ShouldTimedEffectOverride;                               // 0x0048(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_RNLG[0x7];                                   // 0x0049(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FDataTableRowHandle                                 UIData;                                                  // 0x0050(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       ShouldTick;                                              // 0x0060(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       ShouldActOnAddOrRemove;                                  // 0x0061(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_9XT3[0x2];                                   // 0x0062(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      WarmupTime;                                              // 0x0064(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       ShouldTickInPerformMovement;                             // 0x0068(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       ShouldTriggerPerksForSubValues;                          // 0x0069(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_HESH[0x6];                                   // 0x006A(0x0006) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class IGActorSystem.IGActivatedPerkData
	 * Size -> 0x0008 (FullSize[0x0078] - InheritedSize[0x0070])
	 */
	class UIGActivatedPerkData : public UIGPerkData
	{
	public:
		bool                                                       ShouldRemoveOnActivation;                                // 0x0070(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       ShouldUseOtherTarget;                                    // 0x0071(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_5XOB[0x6];                                   // 0x0072(0x0006) MISSED OFFSET (PADDING)

	public:
		bool Deactivate(class UIGActorPerkManager* Owner, EPerkActivationType Type, int32_t CurrentStackLevel, class UIGActorPerkManager* OtherTarget, bool OverrideTriggerCondition);
		bool Activate(class UIGActorPerkManager* Owner, EPerkActivationType Type, int32_t CurrentStackLevel, class UIGActorPerkManager* OtherTarget, bool OverrideTriggerCondition);
		static UClass* StaticClass();
	};

	/**
	 * Class IGActorSystem.IGCombinationPerkData
	 * Size -> 0x0018 (FullSize[0x0090] - InheritedSize[0x0078])
	 */
	class UIGCombinationPerkData : public UIGActivatedPerkData
	{
	public:
		bool                                                       OverrideSubPerksTriggerCondition;                        // 0x0078(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_RC3P[0x7];                                   // 0x0079(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UIGPerkData*>                                 SubPerks;                                                // 0x0080(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class IGActorSystem.IGStackedPerkData
	 * Size -> 0x0010 (FullSize[0x0088] - InheritedSize[0x0078])
	 */
	class UIGStackedPerkData : public UIGActivatedPerkData
	{
	public:
		TArray<class UIGPerkData*>                                 StackValues;                                             // 0x0078(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class IGActorSystem.IGMontagePerkData
	 * Size -> 0x0008 (FullSize[0x0080] - InheritedSize[0x0078])
	 */
	class UIGMontagePerkData : public UIGActivatedPerkData
	{
	public:
		class UIGMoveMontage*                                      Montage;                                                 // 0x0078(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class IGActorSystem.IGStatUpgradeMultiplierPerk
	 * Size -> 0x0008 (FullSize[0x0078] - InheritedSize[0x0070])
	 */
	class UIGStatUpgradeMultiplierPerk : public UIGPerkData
	{
	public:
		float                                                      MainStatMultiplier;                                      // 0x0070(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      SubstatApplicationPercentage;                            // 0x0074(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class IGActorSystem.IGStaminaReductionPerkData
	 * Size -> 0x0030 (FullSize[0x00A0] - InheritedSize[0x0070])
	 */
	class UIGStaminaReductionPerkData : public UIGPerkData
	{
	public:
		EStaminaReductionType                                      PerkReductionType;                                       // 0x0070(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_4WFE[0x7];                                   // 0x0071(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UIGMoveMontage*>                              StaminaReducedMoves;                                     // 0x0078(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic
		TArray<class UIGJumpData*>                                 StaminaReducedJumpTypes;                                 // 0x0088(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic
		float                                                      StaminaModificationMultiplier;                           // 0x0098(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_VF0S[0x4];                                   // 0x009C(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class IGActorSystem.IGRegenerationPerkData
	 * Size -> 0x0010 (FullSize[0x0080] - InheritedSize[0x0070])
	 */
	class UIGRegenerationPerkData : public UIGPerkData
	{
	public:
		bool                                                       IsHealth;                                                // 0x0070(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_U2NC[0x3];                                   // 0x0071(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      RegenRate;                                               // 0x0074(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       UseRegenRateAsRatio;                                     // 0x0078(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_39N1[0x7];                                   // 0x0079(0x0007) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class IGActorSystem.IGHealthAndStaminaConsumablePerk
	 * Size -> 0x0008 (FullSize[0x0078] - InheritedSize[0x0070])
	 */
	class UIGHealthAndStaminaConsumablePerk : public UIGPerkData
	{
	public:
		float                                                      HealthRegenMultiplier;                                   // 0x0070(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      StaminaRegenMultiplier;                                  // 0x0074(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class IGActorSystem.IGStatusApplicationPerk
	 * Size -> 0x0018 (FullSize[0x0090] - InheritedSize[0x0078])
	 */
	class UIGStatusApplicationPerk : public UIGActivatedPerkData
	{
	public:
		TArray<struct FIGPerk>                                     PerksToApplyOnActivation;                                // 0x0078(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic
		bool                                                       ShouldForceUseStatusUI;                                  // 0x0088(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_22Z2[0x7];                                   // 0x0089(0x0007) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class IGActorSystem.IGBurstRestorationPerk
	 * Size -> 0x0008 (FullSize[0x0080] - InheritedSize[0x0078])
	 */
	class UIGBurstRestorationPerk : public UIGActivatedPerkData
	{
	public:
		bool                                                       IsHealth;                                                // 0x0078(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_IHT7[0x3];                                   // 0x0079(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      RestorationPercent;                                      // 0x007C(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class IGActorSystem.IGDamageModificationPerk
	 * Size -> 0x0018 (FullSize[0x0088] - InheritedSize[0x0070])
	 */
	class UIGDamageModificationPerk : public UIGPerkData
	{
	public:
		float                                                      DamageMultiplier;                                        // 0x0070(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_AS5N[0x4];                                   // 0x0074(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<EDamageModifierType>                                ModifierTypes;                                           // 0x0078(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class IGActorSystem.IGModValuePerk
	 * Size -> 0x0050 (FullSize[0x00C0] - InheritedSize[0x0070])
	 */
	class UIGModValuePerk : public UIGPerkData
	{
	public:
		TMap<EIGModValueType, struct FIGModStackFloat>             Mods;                                                    // 0x0070(0x0050) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class IGActorSystem.IGMontageOverridePerk
	 * Size -> 0x0050 (FullSize[0x00C0] - InheritedSize[0x0070])
	 */
	class UIGMontageOverridePerk : public UIGPerkData
	{
	public:
		TMap<class UIGMoveMontage*, class UIGMoveMontage*>         MoveMontageMap;                                          // 0x0070(0x0050) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class IGActorSystem.IGCharacterEventPerk
	 * Size -> 0x0010 (FullSize[0x0080] - InheritedSize[0x0070])
	 */
	class UIGCharacterEventPerk : public UIGPerkData
	{
	public:
		class FName                                                AcquireFuncName;                                         // 0x0070(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                ExpireFuncName;                                          // 0x0078(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class IGActorSystem.IGInventoryModifierPerk
	 * Size -> 0x0000 (FullSize[0x0070] - InheritedSize[0x0070])
	 */
	class UIGInventoryModifierPerk : public UIGPerkData
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class IGActorSystem.IGProjectileModifierPerk
	 * Size -> 0x0050 (FullSize[0x00C0] - InheritedSize[0x0070])
	 */
	class UIGProjectileModifierPerk : public UIGPerkData
	{
	public:
		TMap<class UClass*, class UIGProjectileOverrideSettings*>  ProjectileOverrideMap;                                   // 0x0070(0x0050) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class IGActorSystem.IGPerkDataList
	 * Size -> 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
	 */
	class UIGPerkDataList : public UDataAsset
	{
	public:
		TArray<class UIGPerkData*>                                 PerkList;                                                // 0x0030(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class IGActorSystem.IGPerkGrouping
	 * Size -> 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
	 */
	class UIGPerkGrouping : public UDataAsset
	{
	public:
		TArray<struct FIGPerkGroupingEntry>                        PerkEntries;                                             // 0x0030(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class IGActorSystem.IGPerkProfile
	 * Size -> 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
	 */
	class UIGPerkProfile : public UDataAsset
	{
	public:
		TArray<struct FIGPerkProfileEntry>                         PerkDistributionEntries;                                 // 0x0030(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class IGActorSystem.IGActorPerkManager
	 * Size -> 0x0128 (FullSize[0x01D8] - InheritedSize[0x00B0])
	 */
	class UIGActorPerkManager : public UActorComponent
	{
	public:
		TArray<struct FIGPerk>                                     CharacterPerks;                                          // 0x00B0(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, EditConst, RepNotify, NativeAccessSpecifierPublic
		bool                                                       bCanUsePodsWithStatRestorationPerks;                     // 0x00C0(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_Z1BT[0x3];                                   // 0x00C1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    MaxPermanentPerks;                                       // 0x00C4(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_0XIW[0x110];                                 // 0x00C8(0x0110) MISSED OFFSET (PADDING)

	public:
		void ServerAddPerk(int32_t index);
		void OnRep_CharacterPerks();
		static UClass* StaticClass();
	};

	/**
	 * Class IGActorSystem.IGActorPool
	 * Size -> 0x0100 (FullSize[0x01B0] - InheritedSize[0x00B0])
	 */
	class UIGActorPool : public UActorComponent
	{
	public:
		unsigned char                                              PoolMap[0x50];                                           // 0x00B0(0x0050) UNKNOWN PROPERTY: MapProperty
		unsigned char                                              PoolSettingsOverrides[0x50];                             // 0x0100(0x0050) UNKNOWN PROPERTY: MapProperty
		TMap<class FName, int32_t>                                 DefaultActiveLimitPerGamemode;                           // 0x0150(0x0050) Edit, Protected, NativeAccessSpecifierProtected
		bool                                                       bAllowPoolSizeToChangeDynamically;                       // 0x01A0(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_XRLG[0x3];                                   // 0x01A1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FActorPoolSettings                                  DefaultPoolSettings;                                     // 0x01A4(0x0008) Edit, NoDestructor, Protected, NativeAccessSpecifierProtected
		float                                                      PoolSizeIncreaseFactor;                                  // 0x01AC(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class IGActorSystem.IGActorSystemConfig
	 * Size -> 0x0018 (FullSize[0x0040] - InheritedSize[0x0028])
	 */
	class UIGActorSystemConfig : public UObject
	{
	public:
		float                                                      CapsuleHalfHeight;                                       // 0x0028(0x0004) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      TeammateDamageScale;                                     // 0x002C(0x0004) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bInvertCamera;                                           // 0x0030(0x0001) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_R67M[0x3];                                   // 0x0031(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                WCVersion;                                               // 0x0034(0x0008) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_35AW[0x4];                                   // 0x003C(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class IGActorSystem.IGActorSystemHUD
	 * Size -> 0x0000 (FullSize[0x04E8] - InheritedSize[0x04E8])
	 */
	class AIGActorSystemHUD : public AIGUI_HUDBase
	{
	public:
		bool IsShowMoveInformationEnbabled();
		bool IsShowMoveIndicatorsEnabled();
		bool IsHitboxesEnabled();
		static UClass* StaticClass();
	};

	/**
	 * Class IGActorSystem.IGActorSystemLibrary
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UIGActorSystemLibrary : public UBlueprintFunctionLibrary
	{
	public:
		bool Not_InheritsFrom(class UObject* A, class UClass* B);
		bool Not_HasAllExactTags(const struct FGameplayTagContainer& A, const struct FGameplayTagContainer& B);
		static UClass* StaticClass();
	};

	/**
	 * Class IGActorSystem.IGAddGenericTransitionState
	 * Size -> 0x0010 (FullSize[0x00A8] - InheritedSize[0x0098])
	 */
	class UIGAddGenericTransitionState : public UIGNotifyStateBase
	{
	public:
		class UIGGenericInputEvent*                                TransitionEvent;                                         // 0x0098(0x0008) Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bAllowTransitionOnHit;                                   // 0x00A0(0x0001) Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bAllowTransitionOnBlock;                                 // 0x00A1(0x0001) Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bAllowTransitionOnWhiff;                                 // 0x00A2(0x0001) Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_FOJR[0x5];                                   // 0x00A3(0x0005) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class IGActorSystem.IGAIController
	 * Size -> 0x0018 (FullSize[0x0340] - InheritedSize[0x0328])
	 */
	class AIGAIController : public AAIController
	{
	public:
		class FName                                                WakeUpTransitionName;                                    // 0x0328(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      FreefallDistanceThreshold;                               // 0x0330(0x0004) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_9DT6[0xC];                                   // 0x0334(0x000C) MISSED OFFSET (PADDING)

	public:
		void OnTeamInfoUpdated();
		void OnFreeFallEnabled();
		void BPOnWakeupWindowStarted();
		void BPOnTransitionWindowStarted(class UIGMovesetData* TransitionData);
		static UClass* StaticClass();
	};

	/**
	 * Class IGActorSystem.IGAimIndicatorState
	 * Size -> 0x0010 (FullSize[0x00A8] - InheritedSize[0x0098])
	 */
	class UIGAimIndicatorState : public UIGNotifyStateBase
	{
	public:
		struct FVector                                             CameraOffset;                                            // 0x0098(0x000C) Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_UOTA[0x4];                                   // 0x00A4(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class IGActorSystem.IGAllowMovementOverrideState
	 * Size -> 0x0000 (FullSize[0x0098] - InheritedSize[0x0098])
	 */
	class UIGAllowMovementOverrideState : public UIGNotifyStateBase
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class IGActorSystem.IGAllowRotationOverrideState
	 * Size -> 0x0010 (FullSize[0x00A8] - InheritedSize[0x0098])
	 */
	class UIGAllowRotationOverrideState : public UIGNotifyStateBase
	{
	public:
		struct FRotator                                            OverrideRotationRate;                                    // 0x0098(0x000C) Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_94FR[0x4];                                   // 0x00A4(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class IGActorSystem.IGAnimGraphNotifyState
	 * Size -> 0x0028 (FullSize[0x00C0] - InheritedSize[0x0098])
	 */
	class UIGAnimGraphNotifyState : public UIGNotifyStateBase
	{
	public:
		struct FGameplayTagContainer                               Tags;                                                    // 0x0098(0x0020) Edit, BlueprintReadOnly, NativeAccessSpecifierPublic
		float                                                      BlendInTime;                                             // 0x00B8(0x0004) Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      BlendOutTime;                                            // 0x00BC(0x0004) Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class IGActorSystem.IGAnimInstance
	 * Size -> 0x0168 (FullSize[0x0420] - InheritedSize[0x02B8])
	 */
	class UIGAnimInstance : public UAnimInstance
	{
	public:
		unsigned char                                              UnknownData_8V1P[0x4];                                   // 0x02B8(0x0004) Fix Super Size
		float                                                      SpeedForward;                                            // 0x02BC(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ZAxisLookAngle;                                          // 0x02C0(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      XAxisLookAngle;                                          // 0x02C4(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      VerticalSpeed;                                           // 0x02C8(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIsInAir;                                                // 0x02CC(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIsEnteringApex;                                         // 0x02CD(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIsThrowAiming;                                          // 0x02CE(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIsThrowAimFalling;                                      // 0x02CF(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIsRisingInAir;                                          // 0x02D0(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIsFallingInAir;                                         // 0x02D1(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIsWallJumping;                                          // 0x02D2(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIsWallJumpingFromFall;                                  // 0x02D3(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIsOnGround;                                             // 0x02D4(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIsSkidding;                                             // 0x02D5(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIsClimbing;                                             // 0x02D6(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIsClimbSkidding;                                        // 0x02D7(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIsClimbingDash;                                         // 0x02D8(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIsBlocking;                                             // 0x02D9(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIsSpringboarding;                                       // 0x02DA(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_R7Z4[0x5];                                   // 0x02DB(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UAnimSequenceBase*                                   ClimbingDashAnimation;                                   // 0x02E0(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ClimbingDashAnimationSpeed;                              // 0x02E8(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIsPastMinFallThreshold;                                 // 0x02EC(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIsMountingLedge;                                        // 0x02ED(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIsForcedFalling;                                        // 0x02EE(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIsInCannonShot;                                         // 0x02EF(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bHasCannonAirControl;                                    // 0x02F0(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIsInCannonLaunchSequence;                               // 0x02F1(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIsFreeFalling;                                          // 0x02F2(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIsInMeditativeState;                                    // 0x02F3(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIsInMoveMontage;                                        // 0x02F4(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_5IGI[0x3];                                   // 0x02F5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      CannonAnimationPitchOffset;                              // 0x02F8(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EIGJumpType                                                CurrentJumpType;                                         // 0x02FC(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_EDWQ[0x3];                                   // 0x02FD(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    LastJumpCount;                                           // 0x0300(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EIGWeaponType                                              HeldWeaponType;                                          // 0x0304(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EIGWeaponType                                              LastHeldWeaponType;                                      // 0x0305(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_4UKE[0x2];                                   // 0x0306(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FGameplayTagContainer                               HeldItemTags;                                            // 0x0308(0x0020) BlueprintVisible, BlueprintReadOnly, Transient, NativeAccessSpecifierPublic
		EIGBodyType                                                BodyType;                                                // 0x0328(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EIGGrappleSyncStrategy                                     GrappleSyncStrategy;                                     // 0x0329(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bHasPendingJump;                                         // 0x032A(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_CP69[0x1];                                   // 0x032B(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      MinHeadTurnLerpAlpha;                                    // 0x032C(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaxHeadTurnLerpAlpha;                                    // 0x0330(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      JumpApexMinSpeed;                                        // 0x0334(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      LocalDisableHeadTurnRange;                               // 0x0338(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      SpeedRightAxis;                                          // 0x033C(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CannonShotHorizontalTilt;                                // 0x0340(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CannonShotVerticalTilt;                                  // 0x0344(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      PlatformingFallDistance;                                 // 0x0348(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MinFallDistanceForLandingAnimation;                      // 0x034C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIsWinded;                                               // 0x0350(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ZEK5[0x8B];                                  // 0x0351(0x008B) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      TimeToExpireFromMontageHistory;                          // 0x03DC(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      SampleFrameDeltaAllowance;                               // 0x03E0(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_URVS[0x4];                                   // 0x03E4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FIGMontageHistoryInfo>                       MontageHistory;                                          // 0x03E8(0x0010) ZeroConstructor, Protected, NativeAccessSpecifierProtected
		struct FGameplayTagContainer                               AnimGraphRouteTag;                                       // 0x03F8(0x0020) BlueprintVisible, BlueprintReadOnly, Transient, Protected, NativeAccessSpecifierProtected
		float                                                      AnimGraphRouteBlend;                                     // 0x0418(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_06OC[0x4];                                   // 0x041C(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class IGActorSystem.AOEAttackShape
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UAOEAttackShape : public UObject
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class IGActorSystem.SphereAttackShape
	 * Size -> 0x0008 (FullSize[0x0030] - InheritedSize[0x0028])
	 */
	class USphereAttackShape : public UAOEAttackShape
	{
	public:
		float                                                      Radius;                                                  // 0x0028(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_KP67[0x4];                                   // 0x002C(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class IGActorSystem.BoxAttackShape
	 * Size -> 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
	 */
	class UBoxAttackShape : public UAOEAttackShape
	{
	public:
		struct FVector                                             Dimensions;                                              // 0x0028(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_7F4D[0x4];                                   // 0x0034(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class IGActorSystem.CapsuleAttackShape
	 * Size -> 0x0008 (FullSize[0x0030] - InheritedSize[0x0028])
	 */
	class UCapsuleAttackShape : public UAOEAttackShape
	{
	public:
		float                                                      Radius;                                                  // 0x0028(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      HalfHeight;                                              // 0x002C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class IGActorSystem.CylinderAttackShape
	 * Size -> 0x0008 (FullSize[0x0030] - InheritedSize[0x0028])
	 */
	class UCylinderAttackShape : public UAOEAttackShape
	{
	public:
		float                                                      Radius;                                                  // 0x0028(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      HalfHeight;                                              // 0x002C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class IGActorSystem.IGAttackNotifyStateBase
	 * Size -> 0x0070 (FullSize[0x0108] - InheritedSize[0x0098])
	 */
	class UIGAttackNotifyStateBase : public UIGNotifyStateBase
	{
	public:
		class UIGHitData*                                          HitData;                                                 // 0x0098(0x0008) Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TMap<class UClass*, class UIGHitData*>                     WeaponToHitDataMap;                                      // 0x00A0(0x0050) Edit, BlueprintReadOnly, NativeAccessSpecifierPublic
		class UIGMoveMontage*                                      AttackerHitTransition;                                   // 0x00F0(0x0008) Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UIGMoveMontage*                                      AttackerBlockedHitTransition;                            // 0x00F8(0x0008) Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bAttackerTransitionOnNonCharacters;                      // 0x0100(0x0001) Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bConsumeDurabilityCostOnConnect;                         // 0x0101(0x0001) Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bForceAccept;                                            // 0x0102(0x0001) Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUnblockable;                                            // 0x0103(0x0001) Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bOnTheGroundAttack;                                      // 0x0104(0x0001) Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_GYB3[0x3];                                   // 0x0105(0x0003) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class IGActorSystem.IGAOEAttackTriggerState
	 * Size -> 0x0058 (FullSize[0x0160] - InheritedSize[0x0108])
	 */
	class UIGAOEAttackTriggerState : public UIGAttackNotifyStateBase
	{
	public:
		struct FGameplayTagContainer                               TargetingTypes;                                          // 0x0108(0x0020) Edit, BlueprintReadOnly, NativeAccessSpecifierPublic
		class UIGHitData*                                          TeammateHitData;                                         // 0x0128(0x0008) Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UIGHitData*                                          OnWhiffOverrideFallDamage;                               // 0x0130(0x0008) Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             Offset;                                                  // 0x0138(0x000C) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FRotator                                            Rotation;                                                // 0x0144(0x000C) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		class UAOEAttackShape*                                     Shape;                                                   // 0x0150(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       ShouldTakeScaledFallDamageOnWhiff;                       // 0x0158(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       Continuous;                                              // 0x0159(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUseOldProjectionLogic;                                  // 0x015A(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bCanHitTeammates;                                        // 0x015B(0x0001) Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bCanGoThroughWalls;                                      // 0x015C(0x0001) Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bShouldSpawnScaledImpactEffects;                         // 0x015D(0x0001) Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bStartWallCheckFromAOECenter;                            // 0x015E(0x0001) Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_RH0P[0x1];                                   // 0x015F(0x0001) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class IGActorSystem.IGNotifyBase
	 * Size -> 0x0060 (FullSize[0x0098] - InheritedSize[0x0038])
	 */
	class UIGNotifyBase : public UAnimNotify
	{
	public:
		int32_t                                                    Priority;                                                // 0x0038(0x0004) BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_P6OM[0x4];                                   // 0x003C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TMap<EMoveTier, class UIGNotifyBase*>                      TierMap;                                                 // 0x0040(0x0050) BlueprintReadOnly, NativeAccessSpecifierPublic
		bool                                                       bOnlyProcessIfTiersMatch;                                // 0x0090(0x0001) Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		EMoveTier                                                  MoveTier;                                                // 0x0091(0x0001) BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_YANY[0x6];                                   // 0x0092(0x0006) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class IGActorSystem.IGApplyStatusEffect
	 * Size -> 0x0038 (FullSize[0x00D0] - InheritedSize[0x0098])
	 */
	class UIGApplyStatusEffect : public UIGNotifyBase
	{
	public:
		struct FIGPerk                                             StatusToApply;                                           // 0x0098(0x0038) Edit, BlueprintReadOnly, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class IGActorSystem.IGApproachInteractableDisplacementState
	 * Size -> 0x0040 (FullSize[0x00D8] - InheritedSize[0x0098])
	 */
	class UIGApproachInteractableDisplacementState : public UIGNotifyStateBase
	{
	public:
		ERootMotionFinishVelocityMode                              FinishVelocityMode;                                      // 0x0098(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_F578[0x3];                                   // 0x0099(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             FinishVelocitySet;                                       // 0x009C(0x000C) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      FinishVelocityClamp;                                     // 0x00A8(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bRestrictSpeedToExpected;                                // 0x00AC(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_G44O[0x3];                                   // 0x00AD(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             TargetOffset;                                            // 0x00B0(0x000C) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_ASQG[0x4];                                   // 0x00BC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UCurveVector*                                        PathOffsetCurve;                                         // 0x00C0(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UCurveFloat*                                         TimeMappingCurve;                                        // 0x00C8(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_INUS[0x8];                                   // 0x00D0(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class IGActorSystem.IGRotateToInteractableState
	 * Size -> 0x0010 (FullSize[0x00A8] - InheritedSize[0x0098])
	 */
	class UIGRotateToInteractableState : public UIGNotifyStateBase
	{
	public:
		bool                                                       bDynamicTurnRate;                                        // 0x0098(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_7365[0x3];                                   // 0x0099(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      RotationSpeed;                                           // 0x009C(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      DynamicRotationSpeed;                                    // 0x00A0(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_6TCR[0x4];                                   // 0x00A4(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class IGActorSystem.IGAssetDataSources
	 * Size -> 0x0078 (FullSize[0x00A0] - InheritedSize[0x0028])
	 */
	class UIGAssetDataSources : public UObject
	{
	public:
		class UIGDataTable*                                        TattooTable;                                             // 0x0028(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UIGDataTable*                                        MakeupTable;                                             // 0x0030(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UIGAccessoryData*                                    LoadedAccessoryData;                                     // 0x0038(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UIGDataTable*                                        HeadShapesTable;                                         // 0x0040(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UIGDataTable*                                        EyeColorTable;                                           // 0x0048(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UIGDataTable*                                        EyebrowTable;                                            // 0x0050(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UIGDataTable*                                        SkinColorsTable;                                         // 0x0058(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UIGDataTable*                                        EmotesTable;                                             // 0x0060(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UIGDataTable*                                        BodyShapesTable;                                         // 0x0068(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UIGDataTable*                                        VirtualCurrencyLookupTable;                              // 0x0070(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UIGDataTable*                                        XpBooster;                                               // 0x0078(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UIGDataTable*                                        OutfitsTable;                                            // 0x0080(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UIGDataTable*                                        TitleCardRewardsTable;                                   // 0x0088(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UClass*                                              BattlePassSeasonsMapClass;                               // 0x0090(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UIGDataTable*                                        FeatureOwnershipTable;                                   // 0x0098(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class IGActorSystem.IGAttackTriggerState
	 * Size -> 0x0000 (FullSize[0x0108] - InheritedSize[0x0108])
	 */
	class UIGAttackTriggerState : public UIGAttackNotifyStateBase
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class IGActorSystem.IGAudioHandlerActor
	 * Size -> 0x0000 (FullSize[0x0220] - InheritedSize[0x0220])
	 */
	class AIGAudioHandlerActor : public AInfo
	{
	public:
		void HandleVictimStatusNotificationBP(class AActor* Attacker, class AActor* Victim, EQueuedAttackVictimStatus Status);
		void HandleResetAllFallSFXBP(class AActor* Character);
		void HandleRemoteCharacterDisplaySecondsChangeAudioBP(int32_t Value, class AIGCharacter* Target);
		void HandlePerkRemovedNotifyAudioBP(const struct FIGAudioPerkNotifyInfo& EventInfo);
		void HandlePerkGainedNotifyAudioBP(const struct FIGAudioPerkNotifyInfo& EventInfo);
		void HandlePerkDeactivateNotifyAudioBP(const struct FIGAudioPerkNotifyInfo& EventInfo);
		void HandlePerkActivateNotifyAudioBP(const struct FIGAudioPerkNotifyInfo& EventInfo);
		void HandleHitBlockNotificationBP(const struct FIGAudioHitBlockEventInfo& EventInfo);
		void HandleHitAnnouncementNotificationBP(const struct FIGAudioHitBlockEventInfo& EventInfo);
		void HandleFallTierNotifyAudioBP(const struct FIGAudioFallTierNotifyInfo& EventInfo);
		void HandleFallEndNotifyAudioBP(const class FName& EventName, const struct FIGAudioFallEndNotifyInfo& EventInfo);
		void HandleAnimNotifyVoiceBP(const class FName& EventName, const struct FIGVoiceAnimNotifyEventInfo& EventInfo);
		void HandleAnimNotifyStateEndAudioBP(const class FName& EventName, const struct FIGAudioAnimNotifyEventInfo& EventInfo);
		void HandleAnimNotifyStateBeginAudioBP(const class FName& EventName, const struct FIGAudioAnimNotifyEventInfo& EventInfo);
		void HandleAnimNotifyAudioBP(const class FName& EventName, const struct FIGAudioAnimNotifyEventInfo& EventInfo);
		class AIGAudioHandlerActor* GetGenericAudioHandler(class UObject* WorldContextObject);
		static UClass* StaticClass();
	};

	/**
	 * Class IGActorSystem.IGAudioNotifyState
	 * Size -> 0x0038 (FullSize[0x00D0] - InheritedSize[0x0098])
	 */
	class UIGAudioNotifyState : public UIGNotifyStateBase
	{
	public:
		class FName                                                AudioEventName;                                          // 0x0098(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FIGAdditionalParams                                 AdditionalParams;                                        // 0x00A0(0x0028) Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic
		struct FGameplayTag                                        ParentTag;                                               // 0x00C8(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class IGActorSystem.IGAudioNotify
	 * Size -> 0x0038 (FullSize[0x00D0] - InheritedSize[0x0098])
	 */
	class UIGAudioNotify : public UIGNotifyBase
	{
	public:
		class FName                                                AudioEventName;                                          // 0x0098(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FIGAdditionalParams                                 AdditionalParams;                                        // 0x00A0(0x0028) Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic
		struct FGameplayTag                                        ParentTag;                                               // 0x00C8(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class IGActorSystem.IGPlayLocalAndRemoteSFX
	 * Size -> 0x0080 (FullSize[0x0118] - InheritedSize[0x0098])
	 */
	class UIGPlayLocalAndRemoteSFX : public UIGNotifyBase
	{
	public:
		class USoundBase*                                          Sound;                                                   // 0x0098(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TMap<class UPhysicalMaterial*, class USoundBase*>          OverrideSounds;                                          // 0x00A0(0x0050) Edit, BlueprintReadOnly, NativeAccessSpecifierPublic
		float                                                      VolumeMultiplier;                                        // 0x00F0(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      PitchMultiplier;                                         // 0x00F4(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class USoundAttenuation*                                   AttenuationSettings;                                     // 0x00F8(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class USoundConcurrency*                                   ConcurrencySettings;                                     // 0x0100(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                AttachName;                                              // 0x0108(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bAttached;                                               // 0x0110(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_IOV3[0x7];                                   // 0x0111(0x0007) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class IGActorSystem.IGVoiceNotify
	 * Size -> 0x0038 (FullSize[0x0070] - InheritedSize[0x0038])
	 */
	class UIGVoiceNotify : public UAnimNotify
	{
	public:
		class FName                                                AudioEventName;                                          // 0x0038(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FIGAdditionalParams                                 AdditionalParams;                                        // 0x0040(0x0028) Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic
		struct FGameplayTag                                        ParentTag;                                               // 0x0068(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class IGActorSystem.IGAutoChargeReleaseNotify
	 * Size -> 0x0000 (FullSize[0x0098] - InheritedSize[0x0098])
	 */
	class UIGAutoChargeReleaseNotify : public UIGNotifyBase
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class IGActorSystem.IGBindTargetToMeshSocket
	 * Size -> 0x0010 (FullSize[0x00A8] - InheritedSize[0x0098])
	 */
	class UIGBindTargetToMeshSocket : public UIGNotifyStateBase
	{
	public:
		class FName                                                SocketName;                                              // 0x0098(0x0008) Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EAttachmentRule                                            PosAttachmentRule;                                       // 0x00A0(0x0001) Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EAttachmentRule                                            RotationAttachmentRule;                                  // 0x00A1(0x0001) Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EAttachmentRule                                            ScaleAttachmentRule;                                     // 0x00A2(0x0001) Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       WeldBodies;                                              // 0x00A3(0x0001) Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EDetachmentRule                                            PosDetachmentRule;                                       // 0x00A4(0x0001) Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EDetachmentRule                                            RotationDetachmentRule;                                  // 0x00A5(0x0001) Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EDetachmentRule                                            ScaleDetachmentRule;                                     // 0x00A6(0x0001) Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bSkipWallAdjustment;                                     // 0x00A7(0x0001) Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class IGActorSystem.IGBlockDamageState
	 * Size -> 0x0028 (FullSize[0x00C0] - InheritedSize[0x0098])
	 */
	class UIGBlockDamageState : public UIGNotifyStateBase
	{
	public:
		struct FIGDamageBlockData                                  BlockData;                                               // 0x0098(0x0028) Edit, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class IGActorSystem.IGBodyTypeAnimationOverrideAsset
	 * Size -> 0x0050 (FullSize[0x0080] - InheritedSize[0x0030])
	 */
	class UIGBodyTypeAnimationOverrideAsset : public UDataAsset
	{
	public:
		TMap<EIGBodyType, struct FAnimationSwapMap>                BodyToSequenceMap;                                       // 0x0030(0x0050) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class IGActorSystem.IGChangeMovementModeNotify
	 * Size -> 0x0008 (FullSize[0x00A0] - InheritedSize[0x0098])
	 */
	class UIGChangeMovementModeNotify : public UIGNotifyBase
	{
	public:
		EMovementMode                                              MovementMode;                                            // 0x0098(0x0001) Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ECharacterLocomotionState                                  CustomMode;                                              // 0x0099(0x0001) Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_M923[0x6];                                   // 0x009A(0x0006) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class IGActorSystem.IGCharacter
	 * Size -> 0x0B38 (FullSize[0x1010] - InheritedSize[0x04D8])
	 */
	class AIGCharacter : public ACharacter
	{
	public:
		unsigned char                                              UnknownData_3CL9[0x8];                                   // 0x04D8(0x0008) Fix Super Size
		unsigned char                                              UnknownData_KKA6[0x18];                                  // 0x04E0(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FGameplayTag                                        OwnedTargetingTag;                                       // 0x04F8(0x0008) Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UIGHitManagerComponent*                              HitManager;                                              // 0x0500(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UIGSpringArmComponent*                               SpringArm;                                               // 0x0508(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UCameraComponent*                                    FollowCamera;                                            // 0x0510(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      BaseTurnRate;                                            // 0x0518(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      BaseTurnRateMin;                                         // 0x051C(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      BaseTurnAccelleration;                                   // 0x0520(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      BaseTurnDecceleration;                                   // 0x0524(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      TurnCurrent;                                             // 0x0528(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      BaseLookUpRate;                                          // 0x052C(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      BaseLookUpRateMin;                                       // 0x0530(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      BaseLookUpAccelleration;                                 // 0x0534(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      BaseLookUpDecceleration;                                 // 0x0538(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      LookUpCurrent;                                           // 0x053C(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Health;                                                  // 0x0540(0x0004) BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaxHealth;                                               // 0x0544(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<float>                                              DangerZoneHealthValues;                                  // 0x0548(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic
		TArray<unsigned char>                                      ComboFlagCounts;                                         // 0x0558(0x0010) BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, Transient, NativeAccessSpecifierPublic
		float                                                      CurrentDamageScaling;                                    // 0x0568(0x0004) BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_VK72[0x4];                                   // 0x056C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TMap<EComboLimitFlags, struct FComboLimitSettings>         ComboLimitSettings;                                      // 0x0570(0x0050) Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic
		TArray<struct FHitLimitData>                               CurrentHitLimits;                                        // 0x05C0(0x0010) ZeroConstructor, Transient, NativeAccessSpecifierPublic
		EAttackCancelStatus                                        AttackCancelStatus;                                      // 0x05D0(0x0001) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_AUS8[0x3];                                   // 0x05D1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      JumpDelayRemaining;                                      // 0x05D4(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bWithinRing;                                             // 0x05D8(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bSuspendedForSpectating : 1;                             // 0x05D9(0x0001) BIT_FIELD BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EAudioSelection                                            DefaultAudioSelection;                                   // 0x05DA(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EAudioSelection                                            AudioSelection;                                          // 0x05DB(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_Q5FY[0x4];                                   // 0x05DC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UIGMoveMontage*                                      StrikeClashMontage;                                      // 0x05E0(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UIGMoveMontage*                                      GrappleClashMontage;                                     // 0x05E8(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UIGMoveMontage*                                      DownedMontage;                                           // 0x05F0(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UIGMoveMontage*                                      OnBackDownedMontage;                                     // 0x05F8(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UIGMoveMontage*                                      RecoverMontage;                                          // 0x0600(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UIGMoveMontage*                                      DeathMontage;                                            // 0x0608(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UIGMoveMontage*                                      OnBackDeathMontage;                                      // 0x0610(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UIGHitData*                                          FallEndHit;                                              // 0x0618(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UIGHitData*                                          DefaultPlatformingFallEndHit;                            // 0x0620(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FIGPlatformingFallEndDistanceTierData>       PlatformingFallEndDistanceTiers;                         // 0x0628(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic
		TArray<class UClass*>                                      SafeFallSurfaces;                                        // 0x0638(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, UObjectWrapper, NativeAccessSpecifierPublic
		float                                                      TimeBetweenClimbingPromptChecks;                         // 0x0648(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIsDead;                                                 // 0x064C(0x0001) BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIsDBNO;                                                 // 0x064D(0x0001) BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bPauseCountdownDBNO;                                     // 0x064E(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ECauseOfDeath                                              CauseOfDeath;                                            // 0x064F(0x0001) BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      TimeSpentDead;                                           // 0x0650(0x0004) BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Stamina;                                                 // 0x0654(0x0004) BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      PendingStaminaModification;                              // 0x0658(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_83UM[0x14];                                  // 0x065C(0x0014) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      Fame;                                                    // 0x0670(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ReplicatedFame;                                          // 0x0674(0x0004) BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, Transient, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      TimeSinceSuperstarReady;                                 // 0x0678(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_CIJ9[0x4];                                   // 0x067C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      MaxFame;                                                 // 0x0680(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      FameForKO;                                               // 0x0684(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      FameForTKO;                                              // 0x0688(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      FameForPin;                                              // 0x068C(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      FameForClash;                                            // 0x0690(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      FameForRescue;                                           // 0x0694(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      FameForRescueNonTeammate;                                // 0x0698(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      FameForPinEscape;                                        // 0x069C(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      FameEmoteCooldown;                                       // 0x06A0(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIsSuperstarModeActive;                                  // 0x06A4(0x0001) BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_MKAQ[0x3];                                   // 0x06A5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnEnteredSuperstarMode;                                  // 0x06A8(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnExitedSuperstarMode;                                   // 0x06B8(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		float                                                      TauntDistance;                                           // 0x06C8(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CurrentPerkXP;                                           // 0x06CC(0x0004) BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    CurrentPerkLevel;                                        // 0x06D0(0x0004) BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_JLYJ[0x4];                                   // 0x06D4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<float>                                              PerkXPLevels;                                            // 0x06D8(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic
		float                                                      DamageToPerkXPMultiplier;                                // 0x06E8(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      DamageTakenToPerkXPMultiplier;                           // 0x06EC(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      PerkXPForKO;                                             // 0x06F0(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      PerkXPForTKO;                                            // 0x06F4(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      PerkXPForPin;                                            // 0x06F8(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      PerkXPForDQ;                                             // 0x06FC(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      PerkXPForReading;                                        // 0x0700(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bApplyStatsDamageToPerkXP;                               // 0x0704(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bApplyPerkDamageToPerkXP;                                // 0x0705(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bApplyVictimStatusDamageToPerkXP;                        // 0x0706(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bApplySuperstarDamageToPerkXP;                           // 0x0707(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    DownedCount;                                             // 0x0708(0x0004) BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_TK6N[0x4];                                   // 0x070C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FDownButNotOutInfo                                  DownedButNotOutInfo;                                     // 0x0710(0x0090) Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic
		float                                                      MaxStamina;                                              // 0x07A0(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      StaminaRegenRate;                                        // 0x07A4(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      StaminaWindedRegenRate;                                  // 0x07A8(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_G5ZD[0x4];                                   // 0x07AC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UCurveFloat*                                         AttackerDamageToFameCurve;                               // 0x07B0(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UCurveFloat*                                         VictimDamageToFameCurve;                                 // 0x07B8(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      FameGenerationBlockMultiplier;                           // 0x07C0(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      StaminaRegenCooldown;                                    // 0x07C4(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      StaminaWindedRegenCooldown;                              // 0x07C8(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      StaminaRegenTimer;                                       // 0x07CC(0x0004) BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      StaminaDrainClimbIdle;                                   // 0x07D0(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      StaminaDrainClimbMoving;                                 // 0x07D4(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      StaminaCostClimbDash;                                    // 0x07D8(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ClimbingStaminaGracePeriod;                              // 0x07DC(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UIGMoveMontage*                                      CoreStatsConsumableLimitMontage;                         // 0x07E0(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ClimbingStaminaGraceTimer;                               // 0x07E8(0x0004) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bOverrideMinStamina;                                     // 0x07EC(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_3SIQ[0x3];                                   // 0x07ED(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      MinStaminaOverride;                                      // 0x07F0(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      StartingWindedStamina;                                   // 0x07F4(0x0004) BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UParticleSystem*                                     DamageNumberParticleSystem;                              // 0x07F8(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                DamageNumberAttachmentPoint;                             // 0x0800(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             DamageNumberScale;                                       // 0x0808(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      SprintSpeed;                                             // 0x0814(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             LastInputDir;                                            // 0x0818(0x000C) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      DownedTimeLeft;                                          // 0x0824(0x0004) Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UCurveFloat*                                         JumpHoldVelocityCurve;                                   // 0x0828(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector2D                                           LastMovementInputValues;                                 // 0x0830(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      InputThreasholdTolerance;                                // 0x0838(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      InputDirectionMinMagnitude;                              // 0x083C(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UIGCharacterHitReactComponent*                       HitReact;                                                // 0x0840(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UParticleSystemComponent*                            DamageNumberPSC;                                         // 0x0848(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FTargetingInfo                                      TargetingInfo;                                           // 0x0850(0x0020) NoDestructor, NativeAccessSpecifierPublic
		struct FTargetingInfo                                      ReplicatedTargetingInfo;                                 // 0x0870(0x0020) Net, RepNotify, NoDestructor, NativeAccessSpecifierPublic
		class AIGCharacter*                                        ReplicatedAttachedCharacter;                             // 0x0890(0x0008) Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      SimProxySpringboardVelDotThreshold;                      // 0x0898(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      SimProxySpringboardCheckVelocity;                        // 0x089C(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnMyAttackHit;                                           // 0x08A0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnAttackHitMe;                                           // 0x08B0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_CXMV[0x94];                                  // 0x08C0(0x0094) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		bool                                                       bPendingItemDrop;                                        // 0x0954(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_37MG[0x3];                                   // 0x0955(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      DebugPlayerInfoOffset;                                   // 0x0958(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bInfiniteStamina : 1;                                    // 0x095C(0x0001) BIT_FIELD BlueprintVisible, BlueprintReadOnly, Net, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bInfiniteHealth : 1;                                     // 0x095C(0x0001) BIT_FIELD BlueprintVisible, BlueprintReadOnly, Net, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_GYUQ[0x3];                                   // 0x095D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		EMoveTier                                                  CurrentMoveTier;                                         // 0x0960(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_0XIB[0x7];                                   // 0x0961(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FIGMeterDeltaOverTime>                       HealthDeltaMeter;                                        // 0x0968(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FIGMeterDeltaOverTime>                       StaminaDeltaMeter;                                       // 0x0978(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FIGMeterDeltaOverTime>                       FameDeltaMeter;                                          // 0x0988(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic
		bool                                                       bCanThrownItemTargetSelf;                                // 0x0998(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bTakeTeammateDamageFromSelfThrownItem;                   // 0x0999(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_J0EP[0x6];                                   // 0x099A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UIGActorPerkManager*                                 PerkManager;                                             // 0x09A0(0x0008) Edit, BlueprintVisible, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UIGActorModValueManager*                             ModValueManager;                                         // 0x09A8(0x0008) Edit, BlueprintVisible, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_O3P0[0x80];                                  // 0x09B0(0x0080) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		bool                                                       UnknownData_TMWU : 1;                                    // 0x0A30(0x0001) BIT_FIELD (PADDING)
		bool                                                       bProxyWantsToBlock : 1;                                  // 0x0A30(0x0001) BIT_FIELD Net, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_SO1G[0x3];                                   // 0x0A31(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		EGuidType                                                  LastEventExecutionType;                                  // 0x0A34(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       ShouldIgnoreNextPlatformingFallDamage;                   // 0x0A35(0x0001) Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_CJ7M[0x2];                                   // 0x0A36(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnEnteredAimingMode;                                     // 0x0A38(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnExitedAimingMode;                                      // 0x0A48(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnAimingArcUpdated;                                      // 0x0A58(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnCannonShotMovementStart;                               // 0x0A68(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnCannonShotMovementEnd;                                 // 0x0A78(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnFreeFallMovementStart;                                 // 0x0A88(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnFreeFallMovementEnd;                                   // 0x0A98(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnSwingingMovementEntered;                               // 0x0AA8(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnSwingingMovementExited;                                // 0x0AB8(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnCharacterDied;                                         // 0x0AC8(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnDangerZoneStatusChanged;                               // 0x0AD8(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnCharacterDowned;                                       // 0x0AE8(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnCharacterEnteredDBNO;                                  // 0x0AF8(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnCharacterExitedDBNO;                                   // 0x0B08(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnWinded;                                                // 0x0B18(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnNoLongerWinded;                                        // 0x0B28(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnCharacterRecovered;                                    // 0x0B38(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnCharacterBounced;                                      // 0x0B48(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnFameEvent;                                             // 0x0B58(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnFinisherModeChanged;                                   // 0x0B68(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnCharacterDamaged;                                      // 0x0B78(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnCharacterSelfDamaged;                                  // 0x0B88(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnPerkXPChanged;                                         // 0x0B98(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnPerkLevelChanged;                                      // 0x0BA8(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnItemSlotUpdated;                                       // 0x0BB8(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnItemDurabilityUpdated;                                 // 0x0BC8(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnShouldDisplayUseItemPrompt;                            // 0x0BD8(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		float                                                      HungerThresholdPercent;                                  // 0x0BE8(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_4U3K[0x4];                                   // 0x0BEC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UIGPerkDataList*                                     HungerPerks;                                             // 0x0BF0(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      WindedThresholdPercent;                                  // 0x0BF8(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_68I6[0x4];                                   // 0x0BFC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UIGPerkDataList*                                     WindedPerks;                                             // 0x0C00(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_3S1W[0x8];                                   // 0x0C08(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      CombatTime;                                              // 0x0C10(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_NHX2[0x4];                                   // 0x0C14(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UClass*                                              AIControllerClassForUnpossedPlayer;                      // 0x0C18(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ZAGG[0x28];                                  // 0x0C20(0x0028) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UIGMoveMontage*                                      DefaultStaminaBreakMontage;                              // 0x0C48(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      StaminaReturnPercentage;                                 // 0x0C50(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      StaminaDamageRegenCoolDown;                              // 0x0C54(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      StaminaBreakDamageScaling;                               // 0x0C58(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bDidStaminaBreak;                                        // 0x0C5C(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_F0YH[0x3];                                   // 0x0C5D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UIGPerkData*                                         MeditativePerk;                                          // 0x0C60(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      NameDistance;                                            // 0x0C68(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      EyeOfAHawkHeightThreshold;                               // 0x0C6C(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnCombatModeStateChanged;                                // 0x0C70(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class UIGDistanceTraveledCalculator*                       TotalDistanceCalculator;                                 // 0x0C80(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      TotalDistanceSampleRate;                                 // 0x0C88(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EMoveTrack                                                 ContextActionMoveTrack;                                  // 0x0C8C(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		EMoveTrack                                                 UseItemMoveTrack;                                        // 0x0C8D(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		EMoveTrack                                                 AimThrowTrack;                                           // 0x0C8E(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		EMoveTrack                                                 ThrowTrack;                                              // 0x0C8F(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FVector                                             AutoDropVelocity;                                        // 0x0C90(0x000C) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_U8QR[0x4];                                   // 0x0C9C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TMap<class FName, struct FIGCachedSurfaceData>             CachedSurfaceData;                                       // 0x0CA0(0x0050) Protected, NativeAccessSpecifierProtected
		TArray<struct FIGDamageBlockData>                          LocalBlockData;                                          // 0x0CF0(0x0010) ZeroConstructor, Protected, NativeAccessSpecifierProtected
		ECharacterLocomotionState                                  OverrideLocomotionState;                                 // 0x0D00(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_3V70[0x7];                                   // 0x0D01(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UIGMovesetComponent*                                 Moveset;                                                 // 0x0D08(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UIGSuperstarComponent*                               Superstar;                                               // 0x0D10(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FRepMoveMontageInfo                                 ReplicatedMoveMontage;                                   // 0x0D18(0x0058) Net, RepNotify, NoDestructor, Protected, NativeAccessSpecifierProtected
		struct FIGJumpMoveReplicationInfo                          IGJumpMoveInfo;                                          // 0x0D70(0x0010) Net, RepNotify, NoDestructor, Protected, NativeAccessSpecifierProtected
		unsigned char                                              RemoteViewYaw;                                           // 0x0D80(0x0001) Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_4L0R[0x7];                                   // 0x0D81(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UIGInventory*                                        Inventory;                                               // 0x0D88(0x0008) Edit, BlueprintVisible, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		EMoveTier                                                  DebugOverrideTier;                                       // 0x0D90(0x0001) Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_OKIL[0x3];                                   // 0x0D91(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		bool                                                       bRemoteIsAiming : 1;                                     // 0x0D94(0x0001) BIT_FIELD Net, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_69OC[0x3];                                   // 0x0D95(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UIGScriptedActorComponent*                           ScriptedComponent;                                       // 0x0D98(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		TArray<struct FCombatInfo>                                 PlayersInCombat;                                         // 0x0DA0(0x0010) Net, ZeroConstructor, Protected, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_469H[0x28];                                  // 0x0DB0(0x0028) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              MapZoneId;                                               // 0x0DD8(0x0001) BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_29W6[0x3];                                   // 0x0DD9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      MapZoneCheckTime;                                        // 0x0DDC(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_LAVP[0x4];                                   // 0x0DE0(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FHitResult                                          CachedClimbableSurfaceCheckResult;                       // 0x0DE4(0x0088) IsPlainOldData, NoDestructor, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_2XRF[0xC];                                   // 0x0E6C(0x000C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		bool                                                       bIsInCombatMode;                                         // 0x0E78(0x0001) Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_ZE4K[0x7];                                   // 0x0E79(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UIGCharacterSFXComponent*                            SFXComponent;                                            // 0x0E80(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UIGCharacterVFXComponent*                            VFXComponent;                                            // 0x0E88(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		TArray<unsigned char>                                      VisitedMapZones;                                         // 0x0E90(0x0010) ZeroConstructor, NativeAccessSpecifierPrivate
		bool                                                       bReactionLimitEnabled;                                   // 0x0EA0(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_RPOG[0x3];                                   // 0x0EA1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      ReactionTimeLimitSeconds;                                // 0x0EA4(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_EW0W[0x4];                                   // 0x0EA8(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      StuckMovementTimeLimitSeconds;                           // 0x0EAC(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_7G23[0x10];                                  // 0x0EB0(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		bool                                                       bFallDamageEnabled;                                      // 0x0EC0(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bShouldShowDamageDebug;                                  // 0x0EC1(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_BM05[0x2];                                   // 0x0EC2(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TWeakObjectPtr<class UObject>                              LocalAuthorativeContextInteractableActor;                // 0x0EC4(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		TWeakObjectPtr<class UObject>                              LastLocalAuthorativeContextInteractableActor;            // 0x0ECC(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       bCharacterCollisionIsEnabled;                            // 0x0ED4(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       bCharacterWantsToPhysicallyKO;                           // 0x0ED5(0x0001) Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       bCharacterIsPhysicallyKO;                                // 0x0ED6(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       bIsInHealthDangerZone;                                   // 0x0ED7(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_262K[0x8];                                   // 0x0ED8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          InitialMeshRelativeTransformAtSpawn;                     // 0x0EE0(0x0030) IsPlainOldData, NoDestructor, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_2LLF[0x10];                                  // 0x0F10(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AIGCharacter*                                        LastPinAttacker;                                         // 0x0F20(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_KPOF[0x10];                                  // 0x0F28(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class AIGCharacter*>                                CurrentlyIgnoredActors;                                  // 0x0F38(0x0010) ZeroConstructor, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_9E8Z[0x58];                                  // 0x0F48(0x0058) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              PendingUniqueEmoteAttempts[0x50];                        // 0x0FA0(0x0050) UNKNOWN PROPERTY: SetProperty
		float                                                      MeditativeMaxHealthPercent;                              // 0x0FF0(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_TN69[0x4];                                   // 0x0FF4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                ActiveAIProfile;                                         // 0x0FF8(0x0008) Net, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_FCF7[0x1];                                   // 0x1000(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		bool                                                       bSpecialMovesAllowed;                                    // 0x1001(0x0001) Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_HI53[0xE];                                   // 0x1002(0x000E) MISSED OFFSET (PADDING)

	public:
		void WindedStateUpdated(bool bIsWinded, bool bUseZeroStamina);
		void TryInteract(class UObject* Target);
		bool TryGetCurrentMagazineMoveInfo(class UIGMoveMontage** OutMoveMontage, EMoveTier* OutMoveTier);
		void StopSprintRPC();
		void StopServerMoveTracking();
		void StopScriptedMode();
		void StartSprintRPC();
		void StartServerMoveTracking();
		void SetSpecialTwo(const class FString& InName, int32_t InTier);
		void SetSpecialOne(const class FString& InName, int32_t InTier);
		void SetShouldShowDamageDebug(bool IsInCombatMode);
		void SetScriptedWaypointMode(const class FString& TargetTag);
		void SetScriptedFollowMode(class AIGCharacter* FollowCharacter);
		void SetModifiedStatBaseValue(EIGModValueType ValueType, float BaseValue);
		void SetIsInCombatMode(bool IsInCombatMode);
		void SetInfiniteStaminaOnAuthority(bool Enabled);
		void SetInfiniteStamina(bool Enabled);
		void SetInfiniteHealthOnAuthority(bool Enabled);
		void SetInfiniteHealth(bool Enabled);
		void SetDebugMoveTier(int32_t Tier);
		void ServerStopSpeedingUpDownedTime();
		void ServerStopServerMoveTracking();
		void ServerStartSpeedingUpDownedTime();
		void ServerStartServerMoveTracking();
		void ServerSetMoveTier(int32_t Tier);
		void ServerSetMoveExecutionParams(const struct FServerMoveExecutionParamsMsg& ServerMoveExecutionParamsMsg);
		void ServerSetInfiniteStamina(bool bEnabled);
		void ServerSetInfiniteHealth(bool bEnabled);
		void ServerMoveWithParams(float Timestamp, const struct FVector_NetQuantize10& InAccel, const struct FVector_NetQuantize100& ClientLoc, unsigned char CompressedMoveFlags, unsigned char ClientRoll, uint32_t View, class UPrimitiveComponent* ClientMovementBase, const class FName& ClientBaseBoneName, unsigned char ClientMovementMode, const struct FServerMoveValidationParams& ClientParams);
		void ServerMoveNoBaseWithParams(float Timestamp, const struct FVector_NetQuantize10& InAccel, const struct FVector_NetQuantize100& ClientLoc, unsigned char CompressedMoveFlags, unsigned char ClientRoll, uint32_t View, unsigned char ClientMovementMode, const struct FServerMoveValidationParams& ClientParams);
		void ServerMoveDualWithParams(float TimeStamp0, const struct FVector_NetQuantize10& InAccel0, unsigned char PendingFlags, uint32_t View0, float Timestamp, const struct FVector_NetQuantize10& InAccel, const struct FVector_NetQuantize100& ClientLoc, unsigned char NewFlags, unsigned char ClientRoll, uint32_t View, class UPrimitiveComponent* ClientMovementBase, const class FName& ClientBaseBoneName, unsigned char ClientMovementMode, const struct FServerMoveValidationParams& ClientParams);
		void ServerMoveDualNoBaseWithParams(float TimeStamp0, const struct FVector_NetQuantize10& InAccel0, unsigned char PendingFlags, uint32_t View0, float Timestamp, const struct FVector_NetQuantize10& InAccel, const struct FVector_NetQuantize100& ClientLoc, unsigned char NewFlags, unsigned char ClientRoll, uint32_t View, unsigned char ClientMovementMode, const struct FServerMoveValidationParams& ClientParams);
		void ServerMoveDualHybridRootMotionWithParams(float TimeStamp0, const struct FVector_NetQuantize10& InAccel0, unsigned char PendingFlags, uint32_t View0, float Timestamp, const struct FVector_NetQuantize10& InAccel, const struct FVector_NetQuantize100& ClientLoc, unsigned char NewFlags, unsigned char ClientRoll, uint32_t View, class UPrimitiveComponent* ClientMovementBase, const class FName& ClientBaseBoneName, unsigned char ClientMovementMode, const struct FServerMoveValidationParams& ClientParams);
		void ServerDumpServerMoveTracking();
		void ServerDebugClearStackFloatsAllPlayers();
		void ServerApplyLoadout(const class FName& LoadoutName);
		void Respawn();
		void ResetMoveTier();
		void ResetCharacterTransition(class UIGGenericInputEvent* InEvent, int32_t AdditionalDurationMS);
		void PostNetReceiveRole();
		bool PocketSwap(class UObject* Target);
		void PlaySoundForOwnership(class USoundBase* Sound, const struct FVector& Location, const struct FRotator& Rotation, float VolumeMultiplier, float PitchMultiplier, float StartTime, class USoundAttenuation* AttenuationSettings, class USoundConcurrency* ConcurrencySettings, class AActor* OwningActor);
		void OverrideStaminaRegenValues(float InStaminaRegenRate, float InStaminaRegenCooldown);
		void OverrideMinStamina(bool bShouldOverride, float NewMinStamina);
		void OrientToSurface(const struct FVector& surfaceNormal);
		void OnWinded__DelegateSignature(float StaminaPercentage);
		void OnSwingingMovementExited__DelegateSignature();
		void OnSwingingMovementEntered__DelegateSignature();
		void OnRep_WantsToBlock();
		void OnRep_Stamina(float OldStamina);
		void OnRep_ReplicatedTargetingInfo();
		void OnRep_ReplicatedMoveMontage();
		void OnRep_ReplicatedFame();
		void OnRep_MapZoneId();
		void OnRep_IsSuperstarModeActive();
		void OnRep_IsInCombatMode();
		void OnRep_IsDBNO();
		void OnRep_IGMovementInfo();
		void OnRep_Health(float OldHealth);
		void OnRep_DownedTimeLeftChanged();
		void OnRep_DownedCountChanged();
		void OnRep_CurrentPerkXP();
		void OnRep_CurrentPerkLevel();
		void OnPerkXPChanged__DelegateSignature(float PerkXP);
		void OnPerkLevelChanged__DelegateSignature(int32_t PerkLevel);
		void OnNoLongerWinded__DelegateSignature();
		void OnMontageEnded(class UAnimMontage* Montage, bool bInterrupted);
		void OnHitReact(class UIGHitData* ReactMove, const struct FIGInstanceHitData& InstanceHitData);
		void OnGrabComplete(class UAnimMontage* Montage, bool bInterrupted);
		void OnFreeFallMovementStart__DelegateSignature();
		void OnFreeFallMovementEnd__DelegateSignature();
		void OnFinisherModeChanged__DelegateSignature(bool FinisherModeActive);
		void OnFameEvent__DelegateSignature(float FameAmount, float FameMax, float FamePercentage, EFameSource FameSource);
		void OnExitedSupertarMode__DelegateSignature();
		void OnEnteredSuperstarMode__DelegateSignature();
		void OnCombatModeStateChanged__DelegateSignature(bool IsInCombatMode);
		void OnCharacterSelfDamaged__DelegateSignature(const struct FIGInstanceHitData& HitData);
		void OnCharacterRecovered__DelegateSignature(class AIGCharacter* RevivedCharacter);
		void OnCharacterExitedDBNO__DelegateSignature(class AIGCharacter* Victim);
		void OnCharacterEnteredDBNO__DelegateSignature(class AIGCharacter* Victim);
		void OnCharacterDowned__DelegateSignature(class AIGCharacter* Victim);
		void OnCharacterDied__DelegateSignature(ECauseOfDeath Cause);
		void OnCharacterDangerZoneStatusChanged__DelegateSignature(bool DangerZoneStatus);
		void OnCharacterDamaged__DelegateSignature(const struct FIGInstanceHitData& HitData);
		void OnCharacterBounced__DelegateSignature(float BounceIntensity);
		void OnCannonShotMovementStart__DelegateSignature();
		void OnCannonShotMovementEnd__DelegateSignature();
		void OnAutoPocketComplete(class UAnimMontage* Montage, bool bInterrupted);
		void OnAttackHit__DelegateSignature(bool bClashed, bool bCrushed, bool bStaminaBreak, bool bUnblockable, float BaseDamage, float FinalDamage, EIGClashPriorityTier AttackerPriority, EIGClashPriorityTier VictimPriority);
		void OnAttackConnect(const struct FQueuedAttack& InQueuedAttack);
		void OnAimingArcUpdated__DelegateSignature(const struct FVector& StartPoint, const struct FVector& EndPoint, const struct FVector& StartTangent, const struct FVector& EndTangent, const struct FVector& ImpactNormal);
		void MulticastPerkRemoved(class UIGPerkData* Data);
		void MulticastPerkDeactivated(class UIGPerkData* Data, float Value);
		void MulticastPerkAdded(class UIGPerkData* Data);
		void MulticastPerkActivated(class UIGPerkData* Data, int32_t NumStacks, float Value);
		void MulticastHealingVFX(float HealingAmount);
		void MulticastDeathMessage(class AActor* Attacker);
		void MulticastDangerZoneEvent(bool bNewStatus);
		void ModifyHealth(float Delta);
		bool IsWinded();
		bool IsTeamLeader();
		bool IsSwinging();
		bool IsStaminaBoosted();
		bool IsSafeZone();
		bool IsPlayingTagTeamMatch();
		bool IsPlayerATeammate(class AIGCharacter* PlayerCharacter);
		bool IsPerformingPin();
		bool IsMeditating();
		bool IsLocalPlayerATeammate();
		bool IsInSpecialIdleMontage();
		bool IsInHealthDangerZone();
		bool IsInCombatMode();
		bool IsFalling();
		bool IsClimbing();
		bool IsCharacterLocalOrSpectated();
		bool IsCharacterDead();
		bool IsCharacterDBNO();
		bool IsBlockingStateVulnerableToOnTheGroundAttacks();
		bool IsBlocking(class AIGInteractableBase* Weapon);
		bool IsBeingPinned();
		bool IsAttachedToSurface();
		bool IsAiming();
		bool IsAIControlled();
		void InvalidateLastClimbSurfaceCheck();
		bool HasTarget();
		bool HasInteractableObject();
		bool HasContextInteractable();
		void HandleOnThrownItemTargetingPlayer(class AIGInteractablePickup* ThrownItem);
		void HandleOnThrownItemNoLongerTargetingPlayer(class AIGInteractablePickup* ThrownItem);
		void HandleOnMoveMontageStarted(class UAnimMontage* MoveMontag, class AIGCharacter* Character);
		void HandleOnMoveMontageEnded(class UAnimMontage* MoveMontage, bool bInterrupted);
		void HandleOnKnockoutOccurred(const struct FIGKnockOutData& KnockOutData);
		class UIGCharacterVFXComponent* GetVFXComponent();
		void GetTeammates(TArray<class AIGPlayerState*>* Teammates, bool bFilterSelf);
		class AIGCharacter* GetTeamLeader();
		EMoveTier GetSpecialTwoTier();
		class FName GetSpecialTwoName();
		EMoveTier GetSpecialOneTier();
		class FName GetSpecialOneName();
		float GetSheikModMaxValue();
		float GetSheikModCombinedMaxValue();
		class UIGCharacterSFXComponent* GetSFXComponent();
		class UIGScriptedActorComponent* GetScriptedComponent();
		float GetModifiedStatValue(EIGModValueType ValueType);
		float GetModifiedMaxStamina();
		float GetModifiedMaxHealth();
		float GetModifiedMaxFame();
		float GetModifiedLookUpRate(float InRate);
		class UPhysicalMaterial* GetLastSurfaceMaterial(const class FName& FromBoneName, bool bFallbackToRestingSurface);
		struct FVector GetLastFallingVelocity();
		class UObject* GetLastContextInteractable();
		int32_t GetKnockdownsRemaining();
		struct FIGItemDisplayInfo GetItemDisplayInfo(EIGInventorySlot Slot);
		class UIGCharacterMovementComponent* GetIGCharaterMovementComponent();
		EIGWeaponType GetHeldWeaponType();
		class AIGWeaponBase* GetHeldWeapon();
		class AIGInteractablePickup* GetHeldItem();
		class UObject* GetCurrentTarget();
		float GetCurrentStamiaPercentage();
		EMoveTier GetCurrentMoveTier();
		class UIGMoveMontage* GetCurrentMoveMontage();
		float GetCurrentMaxPerkXP();
		EIGJumpType GetCurrentJumpType();
		float GetCurrentHealthPercentage();
		float GetCurrentFamePercentage();
		float GetCurrentDangerZoneThreshold();
		struct FIGItemDisplayInfo GetContextInteractableItemDisplayInfo();
		class UObject* GetContextInteractable();
		void GetContextAvailableInteractableActor(class UObject* OutInteractableActor);
		float GetCombinedStatsValue();
		struct FHitResult GetCachedClimbableSurfaceCheck();
		struct FVector GetBaseTargetingDirection();
		EMoveTier GetBaseMoveTier();
		void ForceTaunt();
		void ForceReleaseAll();
		void ForceMove(const struct FVector& Direction, float Value);
		void ForceLook(const struct FRotator& Rotate);
		void ForceInteract();
		void ForceGrab();
		void ForceDashRelease();
		void ForceDash();
		void ForceBlockRelease();
		void ForceBlockPress();
		void ForceAttack();
		void ExecuteMove(class UIGMoveMontage* InMove, EGuidType SyncType, EMoveTier ExecutionTier, EMoveTrack ExecutionMoveTrack, float StaminaCostOverride);
		void ExecTestFinisherModeEvent();
		void ExecRemoveStackFloat(EIGModValueType TargetStat, EIGModType ModType, float ModValue);
		void ExecClearStackFloatsAllPlayers();
		void ExecClearStackFloats();
		void ExecApplyLoadout(const class FName& LoadoutName);
		void ExecAddStackFloatTimed(EIGModValueType TargetStat, EIGModType ModType, float ModValue, float Timer);
		void ExecAddStackFloat(EIGModValueType TargetStat, EIGModType ModType, float ModValue);
		void EndForcedFall();
		void DumpServerMoveTracking();
		bool DropSwap(class UObject* Target);
		bool DropPickup(class AActor* Target, bool bInstant, EIGCauseOfPickupDrop CauseOfDrop);
		void DoWallOrAirJump();
		void DoStandardJump();
		void DoSideFlipJump();
		void DoOffWallJump();
		void DoLongJump();
		bool DoJumpWithData(EIGJumpType InType);
		void DoBoostJump();
		void DoBlockFlipJump();
		void DisallowSpecialMoves();
		void DisallowInterceptions();
		void DealDamageToSelf(class UIGHitData* InHitData, const struct FVector& InDamageDirection, bool bUseSelfStats, float FallDistance, EFallDamageSource FallDamageSource, bool bKeepCurrentTier);
		void ConsumeWeaponPendingDurabilityCost();
		void ConsumeDamage();
		void ClientSetRotation(const struct FRotator& NewRotation);
		void ClientReset();
		void ClientDebugMessage(const class FString& DebugString);
		void ClientAdjustMoveMontage(const struct FMoveMontageCorrection& MontageCorrectionInfo);
		void ClearTarget();
		void ClearComboLimit();
		struct FHitResult CheckForClimbableSurface();
		bool CanStashHeldItem();
		bool CanSpeedUpDownedTime();
		bool CanPinEscape();
		void AllowSpecialMoves();
		void AllowInterceptions();
		void AimingModeEvent__DelegateSignature();
		void AddCharacterTransition(class UIGGenericInputEvent* InEvent, int32_t AdditionalDurationMS);
		static UClass* StaticClass();
	};

	/**
	 * Class IGActorSystem.IGHitReactComponent
	 * Size -> 0x0060 (FullSize[0x0110] - InheritedSize[0x00B0])
	 */
	class UIGHitReactComponent : public UActorComponent
	{
	public:
		class FScriptMulticastDelegate                             OnHitReaction;                                           // 0x00B0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		struct FIGInstanceHitData                                  LastHitData;                                             // 0x00C0(0x0048) BlueprintVisible, BlueprintReadOnly, NoDestructor, Protected, NativeAccessSpecifierProtected
		bool                                                       bLastHitDataIsStale;                                     // 0x0108(0x0001) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_8HMX[0x7];                                   // 0x0109(0x0007) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class IGActorSystem.IGCharacterHitReactComponent
	 * Size -> 0x0040 (FullSize[0x0150] - InheritedSize[0x0110])
	 */
	class UIGCharacterHitReactComponent : public UIGHitReactComponent
	{
	public:
		unsigned char                                              UnknownData_GW32[0x28];                                  // 0x0110(0x0028) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FRotator                                            LastExecuteActorRot;                                     // 0x0138(0x000C) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_B6OG[0xC];                                   // 0x0144(0x000C) MISSED OFFSET (PADDING)

	public:
		bool IsStunned();
		bool IsPushedBack();
		float GetHitStunDuration();
		float ConsumeDamage(float* OutDamagePerkXP);
		static UClass* StaticClass();
	};

	/**
	 * Class IGActorSystem.IGCharacterMovementComponent
	 * Size -> 0x0FB0 (FullSize[0x1AC0] - InheritedSize[0x0B10])
	 */
	class UIGCharacterMovementComponent : public UCharacterMovementComponent
	{
	public:
		unsigned char                                              UnknownData_FYLU[0x30];                                  // 0x0B10(0x0030) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      CharacterJumpRotateTime;                                 // 0x0B40(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      JumpRotationDegreesTotal;                                // 0x0B44(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      JumpRotationDuration;                                    // 0x0B48(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      JumpRotationDelay;                                       // 0x0B4C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_OKNQ[0x8];                                   // 0x0B50(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FVector>                                     CannonOffsetForPartners;                                 // 0x0B58(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic
		struct FCannonShotData                                     CannonShotMovementData;                                  // 0x0B68(0x0084) Edit, NoDestructor, NativeAccessSpecifierPublic
		struct FCannonShotDynamicData                              CannonDynamicData;                                       // 0x0BEC(0x0040) Net, NoDestructor, NativeAccessSpecifierPublic
		struct FFreeFallData                                       CannonFreeFallMovementData;                              // 0x0C2C(0x0024) Edit, NoDestructor, NativeAccessSpecifierPublic
		struct FMovementNetworkSettings                            CannonMovementNetworkSettings;                           // 0x0C50(0x0010) Edit, NoDestructor, NativeAccessSpecifierPublic
		class UIGGenericInputEvent*                                BoostJumpEvent;                                          // 0x0C60(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UIGGenericInputEvent*                                StandardJumpEvent;                                       // 0x0C68(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UIGGenericInputEvent*                                ClimbingJumpEvent;                                       // 0x0C70(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UIGGenericInputEvent*                                SideFlipJumpEvent;                                       // 0x0C78(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UIGGenericInputEvent*                                AirJumpEvent;                                            // 0x0C80(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TMap<EIGJumpType, class UIGJumpData*>                      JumpDataSet;                                             // 0x0C88(0x0050) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		EIGJumpType                                                CurrentJumpType;                                         // 0x0CD8(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EIGJumpType                                                PendingJumpType;                                         // 0x0CD9(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_K9TB[0x2];                                   // 0x0CDA(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      LastLongJumpEndTime;                                     // 0x0CDC(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      DefaultPendingJumpMaxDeltaRotationPerSec;                // 0x0CE0(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_637O[0x4];                                   // 0x0CE4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UIGJumpData*                                         CurrentJumpData;                                         // 0x0CE8(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    JumpWindowPostRunOffEdgeMS;                              // 0x0CF0(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_673O[0x4];                                   // 0x0CF4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<EIGJumpType>                                        FrictionlessPreJumpTypes;                                // 0x0CF8(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		TMap<EContextActionType, float>                            ContextActionBuffers;                                    // 0x0D08(0x0050) Edit, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ZCJJ[0x10];                                  // 0x0D58(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UIGCharacterMovementData*>                    MovementDataStack;                                       // 0x0D68(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		class UIGCharacterMovementData*                            DefaultMovementData;                                     // 0x0D78(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    UnclimbableItemTypes;                                    // 0x0D80(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_3K8J[0x4];                                   // 0x0D84(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FIGItemFilter                                       NonClimbableItems;                                       // 0x0D88(0x0068) Edit, DisableEditOnInstance, NativeAccessSpecifierPublic
		struct FIGItemFilter                                       ForcedFallDropItems;                                     // 0x0DF0(0x0068) Edit, DisableEditOnInstance, NativeAccessSpecifierPublic
		float                                                      ForcedFallAirControl;                                    // 0x0E58(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_RBCM[0x4];                                   // 0x0E5C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FIGMulticastData                                    ClimbingSweepCastInfo;                                   // 0x0E60(0x0090) Edit, NativeAccessSpecifierPublic
		struct FIGMulticastData                                    SurfaceGrabSweepCastInfo;                                // 0x0EF0(0x0090) Edit, NativeAccessSpecifierPublic
		ESweepCastShape                                            ClimbingSweepCastShape;                                  // 0x0F80(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_MDV4[0x3];                                   // 0x0F81(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      AutoClimbPlayerAccelDotThresholdMax;                     // 0x0F84(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      AutoClimbPlayerDirectionDotThresholdMax;                 // 0x0F88(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      AutoClimbDropDelay;                                      // 0x0F8C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ClimbInputDelayMaxTime;                                  // 0x0F90(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ClimbDropDelayTime;                                      // 0x0F94(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      SkidConsumeStaminaThreshold;                             // 0x0F98(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ClimbSkidAccelerationDotMin;                             // 0x0F9C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ValidSteepSurfaceCheckDistance;                          // 0x0FA0(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ValidSteepSurfaceCheckDistanceToWall;                    // 0x0FA4(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    ValidSteepSurfaceCheckCastCount;                         // 0x0FA8(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ValidSteepSurfaceMinSafeHorizontalDistance;              // 0x0FAC(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ValidSteepSurfaceDuration;                               // 0x0FB0(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_JD2O[0xC];                                   // 0x0FB4(0x000C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FIGMulticastData                                    ValidSteepSurfaceCastInfo;                               // 0x0FC0(0x0090) Edit, NativeAccessSpecifierPublic
		float                                                      TimeSinceLastClimbEvent;                                 // 0x1050(0x0004) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_CVWN[0xC];                                   // 0x1054(0x000C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      TimeSinceLastSteepSurfaceCheck;                          // 0x1060(0x0004) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_TT0K[0x4];                                   // 0x1064(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      ClimbOverHeight;                                         // 0x1068(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ClimbingFriction;                                        // 0x106C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ClimbingFrictionUpwardsMultiplier;                       // 0x1070(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ClimbingBrakingFriction;                                 // 0x1074(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ClimbingBrakingFrictionFactor;                           // 0x1078(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      BrakingDecelerationClimbing;                             // 0x107C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UCurveFloat*                                         ClimbBreakingDeceleration;                               // 0x1080(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ClimbingMaxSpeed;                                        // 0x1088(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bEnableDirectionalClimbDash;                             // 0x108C(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_V6E3[0x3];                                   // 0x108D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      ClimbingDashSpeed;                                       // 0x1090(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ACIU[0x4];                                   // 0x1094(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UCurveFloat*                                         ClimbingDashVelocityCurve;                               // 0x1098(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ClimbingDashDuration;                                    // 0x10A0(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ClimbingFloorAngle;                                      // 0x10A4(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ClimbingFloorSearchBuffer;                               // 0x10A8(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ClimbingCornerSearchFrontBuffer;                         // 0x10AC(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ClimbingCornerSearchSideBuffer;                          // 0x10B0(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bWantsToClimbingDash;                                    // 0x10B4(0x0001) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_J4S8[0x3];                                   // 0x10B5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      ClimbingDashTimer;                                       // 0x10B8(0x0004) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ExitLedgeMountTimer;                                     // 0x10BC(0x0004) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             ClimbingDashDirection;                                   // 0x10C0(0x000C) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      HitStopDuration;                                         // 0x10CC(0x0004) Net, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      SurfaceClimbToleranceMax;                                // 0x10D0(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      SurfaceClimbToleranceMin;                                // 0x10D4(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<EPhysicalSurface>                                   UnClimbableSurfaces;                                     // 0x10D8(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		float                                                      ClimbingJumpAngle;                                       // 0x10E8(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ClimbingAirControlHorizontalDampening;                   // 0x10EC(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector2D                                           ClimbingSpeedModifiers;                                  // 0x10F0(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             SweepBoxHalfExtents;                                     // 0x10F8(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      SweepSphereRadius;                                       // 0x1104(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      SweepCapsuleHalfHeight;                                  // 0x1108(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      SweepCapsuleRadius;                                      // 0x110C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bStopAtEdges;                                            // 0x1110(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUseLedgeVolumes;                                        // 0x1111(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bInstantLedgeMount;                                      // 0x1112(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUseLedgeSweepCasts;                                     // 0x1113(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      LedgeCastCheckDistance;                                  // 0x1114(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      WallJumpCheckDistance;                                   // 0x1118(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      LedgeDownCheckDistance;                                  // 0x111C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      LedgeCheckAboveHeadDistance;                             // 0x1120(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      LedgeCheckWallSeekModifier;                              // 0x1124(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      LedgeMountHorizontalSpeedMax;                            // 0x1128(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      LedgeMountZAccel;                                        // 0x112C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      LedgeMountZMax;                                          // 0x1130(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      TimeAutoExitLedgeMount;                                  // 0x1134(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FIGGenericTransitionState                           AutoLedgeUpTransitionInfo;                               // 0x1138(0x0090) Edit, NativeAccessSpecifierPublic
		float                                                      LedgeMountAngle;                                         // 0x11C8(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      WallCheckSweepArc;                                       // 0x11CC(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    WallCheckCastCount;                                      // 0x11D0(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      WallCheckCapsuleHalfHeight;                              // 0x11D4(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      WallCheckCapsuleRadius;                                  // 0x11D8(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_GFHU[0x4];                                   // 0x11DC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FIGMulticastData                                    WallCheckSweepCastInfo;                                  // 0x11E0(0x0090) Edit, NativeAccessSpecifierPublic
		float                                                      WallCheckMaxAllowedPitchDifference;                      // 0x1270(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      RotationRateScale;                                       // 0x1274(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      SkidStartVelocity;                                       // 0x1278(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      SkidStopVelocity;                                        // 0x127C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      SkidAngleWindow;                                         // 0x1280(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      LocalDistSinceSurfaceCheck;                              // 0x1284(0x0004) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             HorizontalJumpDirection;                                 // 0x1288(0x000C) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      HorizontalJumpSpeed;                                     // 0x1294(0x0004) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIsSkidding : 1;                                         // 0x1298(0x0001) BIT_FIELD Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_BDBR[0x3];                                   // 0x1299(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      LongJumpLandingVelocityCheck;                            // 0x129C(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      AimingRotationSpeed;                                     // 0x12A0(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      AimingMovementSpeedMultiplier;                           // 0x12A4(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      AimingTransitionDuration;                                // 0x12A8(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bAdjustingRootMotionSources : 1;                         // 0x12AC(0x0001) BIT_FIELD Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_MXQV[0x3];                                   // 0x12AD(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FRootMotionSourceGroup                              IncomingServerRootMotionSource;                          // 0x12B0(0x0038) Transient, NativeAccessSpecifierPublic
		struct FRootMotionSourceGroup                              LastFrameRootMotionSource;                               // 0x12E8(0x0038) Transient, NativeAccessSpecifierPublic
		bool                                                       bClientResimulateServerAuthorativeRootMotionSources : 1; // 0x1320(0x0001) BIT_FIELD Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_M0LE[0x7];                                   // 0x1321(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FExecuteMoveInfo                                    MontageInfo;                                             // 0x1328(0x0048) NoDestructor, NativeAccessSpecifierPublic
		struct FSavedEventMontageTransition                        EventMontageTransition;                                  // 0x1370(0x0020) NoDestructor, NativeAccessSpecifierPublic
		struct FVector                                             HomingTargetLocation;                                    // 0x1390(0x000C) Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bHasClientHomingTargetLocation : 1;                      // 0x139C(0x0001) BIT_FIELD Net, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_21HS[0x3];                                   // 0x139D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             RotationTarget;                                          // 0x13A0(0x000C) Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bHasClientRotationTarget : 1;                            // 0x13AC(0x0001) BIT_FIELD Net, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_MDY4[0xB];                                   // 0x13AD(0x000B) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FFallData                                           CurrentFallData;                                         // 0x13B8(0x0048) Net, RepNotify, NativeAccessSpecifierPublic
		struct FFallData                                           ReplicatedFallLandingData;                               // 0x1400(0x0048) Net, RepNotify, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnAirMaximaSet;                                          // 0x1448(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ZY7O[0x4];                                   // 0x1458(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             TrajectoryVelocity;                                      // 0x145C(0x000C) Net, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             TrajectoryLocation;                                      // 0x1468(0x000C) Net, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_0AYU[0x4];                                   // 0x1474(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UIGMoveMontage*                                      LaunchLimitReachedMontage;                               // 0x1478(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    NumberOfLaunchesInMontageLimit;                          // 0x1480(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    LaunchesInMontage;                                       // 0x1484(0x0004) Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FHitResult                                          PreviousStuckFloorResult;                                // 0x1488(0x0088) Net, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_JE0G[0x8];                                   // 0x1510(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             CachedSwingPoint;                                        // 0x1518(0x000C) Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             SwingAxis;                                               // 0x1524(0x000C) Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      SwingPointChoiceVerticalOffset;                          // 0x1530(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      SwingPointChoiceVelocityOffsetMax;                       // 0x1534(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      SwingPointChoiceHighSpeedBenchmark;                      // 0x1538(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      AdjustedSwingSpeed;                                      // 0x153C(0x0004) Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_N1HT[0x8];                                   // 0x1540(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UIGDistanceTraveledCalculator*                       KeybatDistanceCalculator;                                // 0x1548(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FMovementNetworkSettings                            DefaultNetworkSettings;                                  // 0x1550(0x0010) NoDestructor, Protected, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_9IVP[0x30];                                  // 0x1560(0x0030) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<float>                                              DefaultPlatformingDistanceTiers;                         // 0x1590(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected
		float                                                      LastInAirMaxima;                                         // 0x15A0(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      LastGrappleMaxima;                                       // 0x15A4(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      FallDistanceBonusSpringboardDistance;                    // 0x15A8(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       UseGrappleBonusSpringboardDistance;                      // 0x15AC(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       UseLauncherBonusSpringboardDistance;                     // 0x15AD(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_S4AK[0x2];                                   // 0x15AE(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      PendingCombatMaxima;                                     // 0x15B0(0x0004) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      PendingGrappleMaximaTolerance;                           // 0x15B4(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      LastLauncherMaxima;                                      // 0x15B8(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FColor                                              ThrowEndDonutColor;                                      // 0x15BC(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		int32_t                                                    ThrowEndDonutSegments;                                   // 0x15C0(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      ThrowEndDonutWidth;                                      // 0x15C4(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      ThrowEndDonutThickness;                                  // 0x15C8(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      RecentlyOnScreenThreshold;                               // 0x15CC(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		TWeakObjectPtr<class UObject>                              IntendedTarget;                                          // 0x15D0(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_U4YR[0x2E8];                                 // 0x15D8(0x02E8) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      CachedDeltaTime;                                         // 0x18C0(0x0004) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_KEK9[0x10];                                  // 0x18C4(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FHitResult                                          CachedSweepSurfaceHitData;                               // 0x18D4(0x0088) IsPlainOldData, NoDestructor, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected
		struct FHitResult                                          CachedClimbingHitData;                                   // 0x195C(0x0088) IsPlainOldData, NoDestructor, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected
		TWeakObjectPtr<class UPhysicalMaterial>                    SurfacePhysMatRef;                                       // 0x19E4(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FVector                                             ClimbSurfaceNormal;                                      // 0x19EC(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      ClientUpdatingTimeStamp;                                 // 0x19F8(0x0004) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_NYW3[0x34];                                  // 0x19FC(0x0034) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      WallClimbDistanceSampleRate;                             // 0x1A30(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      WalkDistanceSampleRate;                                  // 0x1A34(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      WalkStrideLengthEstimateMeters;                          // 0x1A38(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      KeybatDistanceSampleRate;                                // 0x1A3C(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UIGDistanceTraveledCalculator*                       WallClimbDistanceCalculator;                             // 0x1A40(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UIGDistanceTraveledCalculator*                       WalkDistanceCalculator;                                  // 0x1A48(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_EIMU[0xC];                                   // 0x1A50(0x000C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      VerticalSwingSteepness;                                  // 0x1A5C(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      SwingVelocityAdditionMod;                                // 0x1A60(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      SwingBaseSpeed;                                          // 0x1A64(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      SwingMinSpeed;                                           // 0x1A68(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      SwingMaxSpeed;                                           // 0x1A6C(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      SwingRadius;                                             // 0x1A70(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      DefaultSwingLaunchXY;                                    // 0x1A74(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      DefaultSwingLaunchZ;                                     // 0x1A78(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       bAllowBackwardsVerticalSwinging;                         // 0x1A7C(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       bUseDelayedLaunch;                                       // 0x1A7D(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_DBTL[0x2];                                   // 0x1A7E(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      LaunchWindow;                                            // 0x1A80(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_R8OJ[0x4];                                   // 0x1A84(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UIGMoveMontage*                                      ClockwiseHorizontalSwingMontage;                         // 0x1A88(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UIGMoveMontage*                                      CCHorizontalSwingMontage;                                // 0x1A90(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UIGMoveMontage*                                      VerticalSwingMontage;                                    // 0x1A98(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_A43R[0x20];                                  // 0x1AA0(0x0020) MISSED OFFSET (PADDING)

	public:
		void StartForcedFall(const struct FVector& NewVelocity);
		struct FVector ProjectGroundMovement(const struct FVector& Delta, const struct FHitResult& RampHit, bool bHitFromLineTrace);
		void OnRep_ReplicatedFallLandingData(struct FFallData* OldData);
		void OnRep_CurrentFallData(struct FFallData* OldData);
		bool IsClimbSkidding();
		float GetMinSafeSurfaceAttachDistance();
		float GetLauncherDistance();
		EIGJumpType GetJumpType();
		float GetGrappleDistance();
		float GetFallDistance();
		float GetCurrentSwingSpeed();
		float GetClimbMaxSpeedModifier();
		struct FVector GetActorHeadLocation();
		bool CheckForWallJumpTarget(struct FVector* OutNormal);
		void CheckForEdge();
		bool CanProcessClimbingInput();
		bool CanDropFromClimbing();
		struct FVector BPGetActorFeetLocation();
		static UClass* StaticClass();
	};

	/**
	 * Class IGActorSystem.IGCharacterMovementData
	 * Size -> 0x0040 (FullSize[0x0070] - InheritedSize[0x0030])
	 */
	class UIGCharacterMovementData : public UDataAsset
	{
	public:
		class UClass*                                              CharacterValueRef;                                       // 0x0030(0x0008) Edit, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      RotationRateScale;                                       // 0x0038(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FRotator                                            RotationRate;                                            // 0x003C(0x000C) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		float                                                      GravityScale;                                            // 0x0048(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaxAcceleration;                                         // 0x004C(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      BrakingFrictionFactor;                                   // 0x0050(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      BrakingFriction;                                         // 0x0054(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      GroundFriction;                                          // 0x0058(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      BrakingDecelerationWalking;                              // 0x005C(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      AirControl;                                              // 0x0060(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      AirControlBoostMultiplier;                               // 0x0064(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      AirControlBoostVelocityThreshold;                        // 0x0068(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_HIM2[0x4];                                   // 0x006C(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class IGActorSystem.IGNetworkCharacterSyncComponent
	 * Size -> 0x0000 (FullSize[0x00B0] - InheritedSize[0x00B0])
	 */
	class UIGNetworkCharacterSyncComponent : public UActorComponent
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class IGActorSystem.IGCharacterSFXComponent
	 * Size -> 0x0018 (FullSize[0x00C8] - InheritedSize[0x00B0])
	 */
	class UIGCharacterSFXComponent : public UActorComponent
	{
	public:
		TArray<struct FAudioReceipt>                               AudioReceipts;                                           // 0x00B0(0x0010) ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_GC1R[0x8];                                   // 0x00C0(0x0008) MISSED OFFSET (PADDING)

	public:
		void ProcessUnstashingAudio();
		void ProcessStashingAudio();
		void OnBrokenByViciousAttack();
		class UAudioComponent* IGCharacterSpawnSoundAttached(class USoundBase* Sound, class USceneComponent* AttachToComponent, const class FName& AttachPointName, const struct FVector& Location, const struct FRotator& Rotation, EAttachLocation LocationType, bool bStopWhenAttachedToDestroyed, float VolumeMultiplier, float PitchMultiplier, float StartTime, class USoundAttenuation* AttenuationSettings, class USoundConcurrency* ConcurrencySettings, bool bAutoDestroy);
		class UAudioComponent* IGCharacterSpawnSoundAtLocation(class UObject* WorldContextObject, class USoundBase* Sound, const struct FVector& Location, const struct FRotator& Rotation, float VolumeMultiplier, float PitchMultiplier, float StartTime, class USoundAttenuation* AttenuationSettings, class USoundConcurrency* ConcurrencySettings, bool bAutoDestroy);
		class UAudioComponent* IGCharacterSpawnSound2D(class UObject* WorldContextObject, class USoundBase* Sound, float VolumeMultiplier, float PitchMultiplier, float StartTime, class USoundConcurrency* ConcurrencySettings, bool bPersistAcrossLevelTransition, bool bAutoDestroy);
		void IGCharacterPlaySoundAtLocation(class UObject* WorldContextObject, class USoundBase* Sound, const struct FVector& Location, const struct FRotator& Rotation, float VolumeMultiplier, float PitchMultiplier, float StartTime, class USoundAttenuation* AttenuationSettings, class USoundConcurrency* ConcurrencySettings, class AActor* OwningActor);
		void IGCharacterPlaySound2D(class UObject* WorldContextObject, class USoundBase* Sound, float VolumeMultiplier, float PitchMultiplier, float StartTime, class USoundConcurrency* ConcurrencySettings, class AActor* OwningActor, bool bIsUISound);
		void HandleUnpocketSFXBP(class AActor* Attacker, class AActor* Victim, bool DroppedAnItem);
		void HandleStashUnstashAudioBP(bool IsStashing, bool IsLargeItem);
		void HandleClashAudioBP(class AActor* Attacker, class AActor* Victim);
		void HandleCharacterReset();
		void HandleCannonLaunchEnd();
		void HandleAnimNotifyStateEndAudioBP(const class FName& EventName, const struct FIGCharacterAudioAnimNotifyEventInfo& EventInfo);
		void HandleAnimNotifyStateBeginAudioBP(const class FName& EventName, const struct FIGCharacterAudioAnimNotifyEventInfo& EventInfo);
		void HandleAnimNotifyAudioBP(const class FName& EventName, const struct FIGCharacterAudioAnimNotifyEventInfo& EventInfo);
		bool CheckCharacterForPerk(class UIGPerkData* Perk);
		static UClass* StaticClass();
	};

	/**
	 * Class IGActorSystem.IGCharacterVFXComponent
	 * Size -> 0x0078 (FullSize[0x0128] - InheritedSize[0x00B0])
	 */
	class UIGCharacterVFXComponent : public UActorComponent
	{
	public:
		TArray<struct FParticleReceipt>                            ParticleReceipts;                                        // 0x00B0(0x0010) ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic
		float                                                      DamageForCameraShake;                                    // 0x00C0(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      DamageForLevel2Shake;                                    // 0x00C4(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MinimumCameraShake;                                      // 0x00C8(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaximumCameraShake;                                      // 0x00CC(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bFlipClimbingSlidingDecals;                              // 0x00D0(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_K4PY[0x3];                                   // 0x00D1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      SlidingDecalStartingOffset;                              // 0x00D4(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UClass*                                              ImpactShakeLvl1;                                         // 0x00D8(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UClass*                                              ImpactShakeLvl2;                                         // 0x00E0(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_4TMY[0x10];                                  // 0x00E8(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UParticleSystem*                                     GenericEffectParticle;                                   // 0x00F8(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FLinearColor                                        GenericHitColor;                                         // 0x0100(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FLinearColor                                        GenericBlockColor;                                       // 0x0110(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TWeakObjectPtr<class UParticleSystemComponent>             DamageNumberPSC;                                         // 0x0120(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected

	public:
		void ProcessUnstashingVFX();
		void ProcessStashingVFX();
		void OnBrokenByViciousAttack();
		void HandleUnpocketVFXBP(class AActor* Attacker, class AActor* Victim, bool DroppedAnItem);
		void HandleStashUnstashVFXBP(bool IsStashing, bool IsLargeItem);
		void HandleDamageNumberNotification(float DamageValue, class UParticleSystem* DamageNumberEffect, const struct FVector& NumberSpawnLocation, const struct FVector& NumberSpawnScale, bool bAttackerWasInSuper);
		void HandleClashVFXBP(class AActor* Attacker, class AActor* Victim);
		void HandleCharacterReset();
		void HandleCannonLaunchEnd();
		void HandleAnimNotifyVFXBP(const class FName& EventName, const struct FIGVFXCharacterAnimNotifyEventInfo& EventInfo);
		void HandleAnimNotifyStateTickVFXBP(const class FName& EventName, const struct FIGVFXCharacterAnimNotifyEventInfo& EventInfo);
		void HandleAnimNotifyStateEndVFXBP(const class FName& EventName, const struct FIGVFXCharacterAnimNotifyEventInfo& EventInfo);
		void HandleAnimNotifyStateBeginVFXBP(const class FName& EventName, const struct FIGVFXCharacterAnimNotifyEventInfo& EventInfo);
		float GetClimbingSlideRollValue();
		bool CheckCharacterForPerk(class UIGPerkData* Perk);
		bool AreDamageNumbersEnabled();
		static UClass* StaticClass();
	};

	/**
	 * Class IGActorSystem.IGClimbDetachNotify
	 * Size -> 0x0000 (FullSize[0x0098] - InheritedSize[0x0098])
	 */
	class UIGClimbDetachNotify : public UIGNotifyBase
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class IGActorSystem.IGClimbingAllowedState
	 * Size -> 0x0000 (FullSize[0x0098] - InheritedSize[0x0098])
	 */
	class UIGClimbingAllowedState : public UIGNotifyStateBase
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class IGActorSystem.IGCoinSpline
	 * Size -> 0x0048 (FullSize[0x0268] - InheritedSize[0x0220])
	 */
	class AIGCoinSpline : public AActor
	{
	public:
		unsigned char                                              UnknownData_HGGS[0x8];                                   // 0x0220(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    NumberOfCoins;                                           // 0x0228(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_2VCD[0x4];                                   // 0x022C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UClass*                                              CoinType;                                                // 0x0230(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      PercentageToSpawn;                                       // 0x0238(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_HXSC[0x4];                                   // 0x023C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              Coins[0x10];                                             // 0x0240(0x0010) UNKNOWN PROPERTY: ArrayProperty
		TArray<struct FVector>                                     CoinPositions;                                           // 0x0250(0x0010) ZeroConstructor, Protected, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_O3C1[0x8];                                   // 0x0260(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class IGActorSystem.IGCollectibleBase
	 * Size -> 0x0060 (FullSize[0x0280] - InheritedSize[0x0220])
	 */
	class AIGCollectibleBase : public AActor
	{
	public:
		unsigned char                                              UnknownData_JRL6[0x18];                                  // 0x0220(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UBoxComponent*                                       HitBox;                                                  // 0x0238(0x0008) Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TWeakObjectPtr<class AIGCharacter>                         CharacterRewarded;                                       // 0x0240(0x0008) BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EIGCollectibleState                                        CollectibleState;                                        // 0x0248(0x0001) BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_42ZM[0x3];                                   // 0x0249(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      VanishTime;                                              // 0x024C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      VanishWarningTime;                                       // 0x0250(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CollectibleDelayTime;                                    // 0x0254(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bShouldTriggerPerkActivation;                            // 0x0258(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EPerkActivationType                                        PerkTypeToActivate;                                      // 0x0259(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bAlwaysInformOnCollected;                                // 0x025A(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_8PNB[0x25];                                  // 0x025B(0x0025) MISSED OFFSET (PADDING)

	public:
		void Vanish();
		void StartVanishWarning();
		void OnVanish();
		void OnStartVanishWarning();
		void OnRep_CollectibleState(EIGCollectibleState OldCollectibleState);
		void OnOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
		void OnHiddenInGameChanged(bool bNewHiddenInGame);
		void OnCollected();
		void EndCollectibleDelay();
		static UClass* StaticClass();
	};

	/**
	 * Class IGActorSystem.IGConsumeWeaponDurability
	 * Size -> 0x0000 (FullSize[0x0098] - InheritedSize[0x0098])
	 */
	class UIGConsumeWeaponDurability : public UIGNotifyStateBase
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class IGActorSystem.IGInteractableCommon
	 * Size -> 0x00A0 (FullSize[0x02C0] - InheritedSize[0x0220])
	 */
	class AIGInteractableCommon : public AActor
	{
	public:
		unsigned char                                              UnknownData_ZO5X[0x20];                                  // 0x0220(0x0020) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		bool                                                       bOverrideHalfHeight;                                     // 0x0240(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_AWAM[0x3];                                   // 0x0241(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      OverriddenHalfHeight;                                    // 0x0244(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bOverrideRadius;                                         // 0x0248(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_3N9F[0x3];                                   // 0x0249(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      OverriddenRadius;                                        // 0x024C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bOverrideTransform;                                      // 0x0250(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_5EOS[0xF];                                   // 0x0251(0x000F) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          OverriddenPingTransform;                                 // 0x0260(0x0030) Edit, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FDataTableRowHandle                                 PromptTextRow;                                           // 0x0290(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, Protected, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_MWHP[0x18];                                  // 0x02A0(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    PromptPriorityTier;                                      // 0x02B8(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bCanEverBePinged;                                        // 0x02BC(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_327A[0x3];                                   // 0x02BD(0x0003) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class IGActorSystem.IGInteractableBase
	 * Size -> 0x0198 (FullSize[0x0458] - InheritedSize[0x02C0])
	 */
	class AIGInteractableBase : public AIGInteractableCommon
	{
	public:
		unsigned char                                              UnknownData_I6C8[0x18];                                  // 0x02C0(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UIGInteractableBoxComponent*                         InteractableBoxComponent;                                // 0x02D8(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UCapsuleComponent*                                   CapsuleComponent;                                        // 0x02E0(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_VALF[0x30];                                  // 0x02E8(0x0030) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnInteractableUseStarted;                                // 0x0318(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnInteractableUseCompleted;                              // 0x0328(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnInteractableStartInteraction;                          // 0x0338(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class UIGMoveMontage*                                      ObjectStartInteractSequence;                             // 0x0348(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UIGMoveMontage*                                      ObjectUseSequence;                                       // 0x0350(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UIGMoveMontage*                                      ObjectStopInteractSequence;                              // 0x0358(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UIGMoveMontage*                                      ObjectStashSequence;                                     // 0x0360(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UIGMoveMontage*                                      ObjectAutoStashSequence;                                 // 0x0368(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UIGMoveMontage*                                      ObjectUnstashSequence;                                   // 0x0370(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UParticleSystem*                                     AlwaysOnParticleEffect;                                  // 0x0378(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class USoundBase*                                          AlwaysOnSoundEffect;                                     // 0x0380(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FGameplayTagContainer                               GameplayTags;                                            // 0x0388(0x0020) Edit, BlueprintVisible, BlueprintReadOnly, Protected, NativeAccessSpecifierProtected
		int32_t                                                    MaxDurability;                                           // 0x03A8(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FDurabilityInfo                                     DurabilityInfo;                                          // 0x03AC(0x0008) BlueprintVisible, BlueprintReadOnly, Net, RepNotify, NoDestructor, Protected, NativeAccessSpecifierProtected
		bool                                                       bMaxDurabilityReached;                                   // 0x03B4(0x0001) BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_TU5W[0x7];                                   // 0x03B5(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		bool                                                       bStopAutomatically;                                      // 0x03BC(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_CIYQ[0x3];                                   // 0x03BD(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    UseableLocomotionStates;                                 // 0x03C0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_WHJ2[0x4];                                   // 0x03C4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FText                                                FaceButtonLeftPrompt;                                    // 0x03C8(0x0018) Edit, BlueprintVisible, Protected, NativeAccessSpecifierProtected
		class FText                                                FaceButtonTopPrompt;                                     // 0x03E0(0x0018) Edit, BlueprintVisible, Protected, NativeAccessSpecifierProtected
		class FText                                                InAirFaceButtonLeftPrompt;                               // 0x03F8(0x0018) Edit, BlueprintVisible, Protected, NativeAccessSpecifierProtected
		class FText                                                InAirFaceButtonTopPrompt;                                // 0x0410(0x0018) Edit, BlueprintVisible, Protected, NativeAccessSpecifierProtected
		EMoveTier                                                  InteractableMoveTier;                                    // 0x0428(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_HCYQ[0x7];                                   // 0x0429(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UParticleSystemComponent*                            AlwaysOnParticleSystemComponent;                         // 0x0430(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UAudioComponent*                                     AlwaysOnAudioComponent;                                  // 0x0438(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bRepIsInPool;                                            // 0x0440(0x0001) Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_75C8[0x7];                                   // 0x0441(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AIGCharacter*                                        CachedInteractingCharacter;                              // 0x0448(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       bIsInProcessOfBeingUsed;                                 // 0x0450(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       bIsBeingSwapped;                                         // 0x0451(0x0001) Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       bSavedPreNetIsInPool;                                    // 0x0452(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_XLZ2[0x5];                                   // 0x0453(0x0005) Fix size for supers

	public:
		bool Use(class AIGCharacter* InChar);
		bool StopInteract(bool bForceInstant);
		void SetPendingDurabilityCost(int32_t PendingDurability);
		void OnUseSequenceEnded(class UAnimMontage* Montage, bool bInterrupted);
		void OnUse();
		void OnUnstashSequenceEnded(class UAnimMontage* Montage, bool bInterrupted);
		void OnStopInteractSequenceEnded(class UAnimMontage* Montage, bool bInterrupted);
		void OnStashSequenceEnded(class UAnimMontage* Montage, bool bInterrupted);
		void OnStartInteractSequenceEnded(class UAnimMontage* Montage, bool bInterrupted);
		void OnRep_MaxDurabilityReached(bool bOldDurabilityReached);
		void OnRep_DurabilityInfo();
		void OnMaxDurabilityReached();
		void OnInteractionStarted();
		void OnInteractionEnded();
		void OnDurabilityChanged();
		bool IsPendingMaxDurablity();
		bool IsInteractable();
		bool IsBeingSwapped();
		class AIGCharacter* GetInteractingCharacter();
		class FText GetInAirFaceButtonTopPrompt();
		class FText GetInAirFaceButtonLeftPrompt();
		class FText GetFaceButtonTopPrompt();
		class FText GetFaceButtonLeftPrompt();
		void DoLocalInteractionEffects(EIGInteractionType InType);
		void ConsumePendingDurability();
		bool CanInteractWithCharacter(class AIGCharacter* InChar);
		void ApplySpawnOptions(struct FIGLootSpawnOptions* SpawnOpts);
		static UClass* StaticClass();
	};

	/**
	 * Class IGActorSystem.IGInteractablePickup
	 * Size -> 0x0230 (FullSize[0x0688] - InheritedSize[0x0458])
	 */
	class AIGInteractablePickup : public AIGInteractableBase
	{
	public:
		class UIGProjectileMovementComponent*                      ProjectileMovementComponent;                             // 0x0458(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UIGHitManagerComponent*                              HitManager;                                              // 0x0460(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FDataTableRowHandle                                 UIData;                                                  // 0x0468(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic
		EIGItemType                                                ItemTypeOverride;                                        // 0x0478(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_L32S[0xF];                                   // 0x0479(0x000F) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      PendingResetTime;                                        // 0x0488(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bShouldHideMeshAtUsed;                                   // 0x048C(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_8SAG[0xF];                                   // 0x048D(0x000F) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		bool                                                       bBreakableOnThrow;                                       // 0x049C(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_JV13[0x3];                                   // 0x049D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FIGPhysActorEffect>                          BreakEffects;                                            // 0x04A0(0x0010) Edit, ZeroConstructor, Protected, NativeAccessSpecifierProtected
		float                                                      MaxHomingTargetAngle;                                    // 0x04B0(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FVector                                             DropLocationOffset;                                      // 0x04B4(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FVector                                             ThrowLocationOffset;                                     // 0x04C0(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FVector                                             InitialDropVelocity;                                     // 0x04CC(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FVector                                             AimingCameraOffset;                                      // 0x04D8(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		EIGStashabilityType                                        Stashability;                                            // 0x04E4(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_6JTS[0x3];                                   // 0x04E5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      TargetingSizePadding;                                    // 0x04E8(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		uint32_t                                                   ThrowCost;                                               // 0x04EC(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FTransform                                          OriginalSkeletalMeshTransform;                           // 0x04F0(0x0030) Edit, EditConst, IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected
		TArray<struct FIGPickupDurabilityTier>                     DurabilityTiers;                                         // 0x0520(0x0010) Edit, ZeroConstructor, Protected, NativeAccessSpecifierProtected
		bool                                                       bShouldDestroyOnMaxDurabilityReached;                    // 0x0530(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_76VL[0x3];                                   // 0x0531(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TWeakObjectPtr<class USkeletalMeshComponent>               CachedSkeletalMeshComponent;                             // 0x0534(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FVector                                             QuickThrowForce;                                         // 0x053C(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		TMap<class FName, struct FIGQuickThrowEntry>               QuickThrowOverrideOptions;                               // 0x0548(0x0050) Edit, NativeAccessSpecifierPublic
		struct FVector                                             AimThrowForce;                                           // 0x0598(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             HitBounceForce;                                          // 0x05A4(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FRotator                                            ThrowOrientation;                                        // 0x05B0(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_W0YH[0x4];                                   // 0x05BC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AIGCharacter*                                        DamageOwner;                                             // 0x05C0(0x0008) Net, ZeroConstructor, Transient, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UParticleSystemComponent*                            AttachedParticleSystemInstance;                          // 0x05C8(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UIGHitData*                                          HitData;                                                 // 0x05D0(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class AIGCharacter*                                        HomingTarget;                                            // 0x05D8(0x0008) Edit, BlueprintVisible, Net, ZeroConstructor, Transient, IsPlainOldData, RepNotify, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIsActiveProjectile;                                     // 0x05E0(0x0001) Edit, Net, ZeroConstructor, Transient, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bLastDetachWasThrown;                                    // 0x05E1(0x0001) Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_8AHN[0x6];                                   // 0x05E2(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AIGCharacter*                                        LastHomingTarget;                                        // 0x05E8(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_AFTK[0xC];                                   // 0x05F0(0x000C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		bool                                                       bMovementEnabled;                                        // 0x05FC(0x0001) Edit, Net, ZeroConstructor, Transient, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_FLIW[0x3];                                   // 0x05FD(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UIGHitData*                                          HitDataOverride;                                         // 0x0600(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FGuid                                               ItemId;                                                  // 0x0608(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class USkeletalMesh*                                       OriginalMesh;                                            // 0x0618(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    SpringBoardBounceCount;                                  // 0x0620(0x0004) BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_8RHG[0x4];                                   // 0x0624(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UIGProjectileOverrideSettings*                       OverriddenProjectileSettings;                            // 0x0628(0x0008) Net, ZeroConstructor, Transient, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TMap<class UIGMoveMontage*, class UIGMoveMontage*>         MontageOverrides;                                        // 0x0630(0x0050) Edit, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_DGZB[0x8];                                   // 0x0680(0x0008) Fix size for supers

	public:
		void SweepForHits(float DeltaTime);
		void SelectTargetAlongPath(struct FPredictProjectilePathResult* Result);
		void OnRep_ProjectileOverride();
		void OnRep_MovementEnabledChanged();
		void OnRep_IsActiveProjectile();
		void OnRep_HomingTarget();
		void OnRep_DamageOwner();
		void OnProjectileStop(const struct FHitResult& ImpactResult);
		void OnProjectileHit(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FVector& NormalImpulse, const struct FHitResult& Hit);
		void OnProjectileEndOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex);
		void OnProjectileBounce(const struct FHitResult& ImpactResult, const struct FVector& ImpactVelocity);
		void OnProjectileBeginOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
		void OnPickedUp();
		void OnDropped();
		void OnDeactivateProjectile();
		void OnAttackConnect(const struct FQueuedAttack& InQueuedAttack);
		void OnActivateProjectile();
		EIGWeaponType GetWeaponType();
		void ActivateProjectile(class AIGCharacter* InDamageOwner, class AIGCharacter* TargetCharacter);
		static UClass* StaticClass();
	};

	/**
	 * Class IGActorSystem.IGCoreStatsConsumable
	 * Size -> 0x0018 (FullSize[0x06A0] - InheritedSize[0x0688])
	 */
	class AIGCoreStatsConsumable : public AIGInteractablePickup
	{
	public:
		TArray<struct FIGConsumableBoost>                          ModsToApply;                                             // 0x0688(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Protected, NativeAccessSpecifierProtected
		class USkeletalMeshComponent*                              SkeletalMeshComponent;                                   // 0x0698(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class IGActorSystem.IGStatUpdateNotify
	 * Size -> 0x0000 (FullSize[0x0098] - InheritedSize[0x0098])
	 */
	class UIGStatUpdateNotify : public UIGNotifyBase
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class IGActorSystem.IGDashStatNotify
	 * Size -> 0x0000 (FullSize[0x0098] - InheritedSize[0x0098])
	 */
	class UIGDashStatNotify : public UIGStatUpdateNotify
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class IGActorSystem.IGDebugLogState
	 * Size -> 0x0000 (FullSize[0x0098] - InheritedSize[0x0098])
	 */
	class UIGDebugLogState : public UIGNotifyStateBase
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class IGActorSystem.IGDisableCharacterCollisionState
	 * Size -> 0x0000 (FullSize[0x0098] - InheritedSize[0x0098])
	 */
	class UIGDisableCharacterCollisionState : public UIGNotifyStateBase
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class IGActorSystem.IGDisableSwingTargetCollision
	 * Size -> 0x0000 (FullSize[0x0098] - InheritedSize[0x0098])
	 */
	class UIGDisableSwingTargetCollision : public UIGNotifyStateBase
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class IGActorSystem.IGDistanceTraveledCalculator
	 * Size -> 0x0020 (FullSize[0x0048] - InheritedSize[0x0028])
	 */
	class UIGDistanceTraveledCalculator : public UObject
	{
	public:
		class AActor*                                              ActorOwner;                                              // 0x0028(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_735W[0xC];                                   // 0x0030(0x000C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             LastSamplePosition;                                      // 0x003C(0x000C) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class IGActorSystem.IGDodgeCancelStatNotify
	 * Size -> 0x0000 (FullSize[0x0098] - InheritedSize[0x0098])
	 */
	class UIGDodgeCancelStatNotify : public UIGStatUpdateNotify
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class IGActorSystem.IGDodgeRollStatNotify
	 * Size -> 0x0000 (FullSize[0x0098] - InheritedSize[0x0098])
	 */
	class UIGDodgeRollStatNotify : public UIGStatUpdateNotify
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class IGActorSystem.IGDropCollectibleNotify
	 * Size -> 0x0050 (FullSize[0x00E8] - InheritedSize[0x0098])
	 */
	class UIGDropCollectibleNotify : public UIGNotifyBase
	{
	public:
		unsigned char                                              CollectibleType[0x28];                                   // 0x0098(0x0028) UNKNOWN PROPERTY: SoftClassProperty
		int32_t                                                    MinNumToSpawn;                                           // 0x00C0(0x0004) Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    MaxNumToSpawn;                                           // 0x00C4(0x0004) Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bOnlyDropInSuperstar;                                    // 0x00C8(0x0001) Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_1B38[0x3];                                   // 0x00C9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector2D                                           VerticalSpeedRange;                                      // 0x00CC(0x0008) Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector2D                                           HorizontalSpeedRange;                                    // 0x00D4(0x0008) Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CollectibleDelayTime;                                    // 0x00DC(0x0004) Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      VanishTime;                                              // 0x00E0(0x0004) Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      VanishWarningTime;                                       // 0x00E4(0x0004) Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class IGActorSystem.IGDropFameNotify
	 * Size -> 0x0010 (FullSize[0x00F8] - InheritedSize[0x00E8])
	 */
	class UIGDropFameNotify : public UIGDropCollectibleNotify
	{
	public:
		bool                                                       bShouldDrainFame;                                        // 0x00E8(0x0001) Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_6TNO[0x3];                                   // 0x00E9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      FameToCollectibleRatio;                                  // 0x00EC(0x0004) Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      PercentFameToConsider;                                   // 0x00F0(0x0004) Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_LWV9[0x4];                                   // 0x00F4(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class IGActorSystem.IGDropShadowComponent
	 * Size -> 0x0030 (FullSize[0x0520] - InheritedSize[0x04F0])
	 */
	class UIGDropShadowComponent : public UStaticMeshComponent
	{
	public:
		class UMaterialInstanceConstant*                           ShadowSourceMaterial;                                    // 0x04F0(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UMaterialInstanceDynamic*                            ShadowMaterial;                                          // 0x04F8(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                ShadowSizeParameterName;                                 // 0x0500(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      OffFloorHeight;                                          // 0x0508(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MinShadowSize;                                           // 0x050C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaxShadowHeight;                                         // 0x0510(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ZGOH[0xC];                                   // 0x0514(0x000C) MISSED OFFSET (PADDING)

	public:
		void OnMoveWalk();
		static UClass* StaticClass();
	};

	/**
	 * Class IGActorSystem.IGDropStashNotify
	 * Size -> 0x0008 (FullSize[0x00A0] - InheritedSize[0x0098])
	 */
	class UIGDropStashNotify : public UIGNotifyStateBase
	{
	public:
		EIGIventoryDropType                                        InventoryDropType;                                       // 0x0098(0x0001) Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_K2K7[0x7];                                   // 0x0099(0x0007) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class IGActorSystem.IGDynamicObjCluster
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UIGDynamicObjCluster : public UObject
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class IGActorSystem.IGEdgeDetectionState
	 * Size -> 0x0000 (FullSize[0x0098] - InheritedSize[0x0098])
	 */
	class UIGEdgeDetectionState : public UIGNotifyStateBase
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class IGActorSystem.IGEdgeNavLink
	 * Size -> 0x0000 (FullSize[0x0270] - InheritedSize[0x0270])
	 */
	class AIGEdgeNavLink : public ANavLinkProxy
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class IGActorSystem.IGEmoteHandlerComponent
	 * Size -> 0x00E0 (FullSize[0x0190] - InheritedSize[0x00B0])
	 */
	class UIGEmoteHandlerComponent : public UActorComponent
	{
	public:
		class FScriptMulticastDelegate                             OnEmoteUIOpen;                                           // 0x00B0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnEmoteUINextPage;                                       // 0x00C0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		TMap<EEmoteSlot, class UIGMoveMontage*>                    Emotes_PageOne;                                          // 0x00D0(0x0050) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		TMap<EEmoteSlot, class UIGMoveMontage*>                    Emotes_PageTwo;                                          // 0x0120(0x0050) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_CN0R[0x4];                                   // 0x0170(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    CurrentPage;                                             // 0x0174(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    NumPages;                                                // 0x0178(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      QueueTimeLimit;                                          // 0x017C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_KVPD[0x10];                                  // 0x0180(0x0010) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class IGActorSystem.IGFaceTargetState
	 * Size -> 0x0038 (FullSize[0x00D0] - InheritedSize[0x0098])
	 */
	class UIGFaceTargetState : public UIGNotifyStateBase
	{
	public:
		bool                                                       bOnHit;                                                  // 0x0098(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_N4YG[0x3];                                   // 0x0099(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      MinDistance;                                             // 0x009C(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      MaxDistance;                                             // 0x00A0(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bIgnoreTargetsInAir;                                     // 0x00A4(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bIgnoreTargetsOnGround;                                  // 0x00A5(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_L3LF[0x2];                                   // 0x00A6(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      DegreeArc;                                               // 0x00A8(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      ArcWeight;                                               // 0x00AC(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      RotationSpeed;                                           // 0x00B0(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FRotator                                            DgreeArcRotation;                                        // 0x00B4(0x000C) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected
		float                                                      DistanceOffset;                                          // 0x00C0(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bUseTargetLossCone;                                      // 0x00C4(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_1911[0x3];                                   // 0x00C5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      TargetLossConeScale;                                     // 0x00C8(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_OZO9[0x4];                                   // 0x00CC(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class IGActorSystem.IGFallEffectsOverride
	 * Size -> 0x0008 (FullSize[0x00A0] - InheritedSize[0x0098])
	 */
	class UIGFallEffectsOverride : public UIGNotifyStateBase
	{
	public:
		bool                                                       bShouldSpawnLandingFX;                                   // 0x0098(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bShouldSpawnFallingFX;                                   // 0x0099(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_8NHS[0x6];                                   // 0x009A(0x0006) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class IGActorSystem.IGFallTierNotifyState
	 * Size -> 0x0020 (FullSize[0x00B8] - InheritedSize[0x0098])
	 */
	class UIGFallTierNotifyState : public UIGNotifyStateBase
	{
	public:
		class FName                                                VFXEventName;                                            // 0x0098(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<float>                                              DistanceTiers;                                           // 0x00A0(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic
		EFallTierNotifyType                                        NotifyType;                                              // 0x00B0(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_96MB[0x3];                                   // 0x00B1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    FallTierNotifyPriority;                                  // 0x00B4(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		void OnFallTierPassedNotify(int32_t Tier, class UWorld* World, const struct FFallData& FallData);
		static UClass* StaticClass();
	};

	/**
	 * Class IGActorSystem.IGFameConsumable
	 * Size -> 0x0018 (FullSize[0x06A0] - InheritedSize[0x0688])
	 */
	class AIGFameConsumable : public AIGInteractablePickup
	{
	public:
		struct FIGMeterDeltaOverTime                               FameRegen;                                               // 0x0688(0x0010) Edit, NoDestructor, Protected, NativeAccessSpecifierProtected
		class USkeletalMeshComponent*                              SkeletalMeshComponent;                                   // 0x0698(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class IGActorSystem.IGFanMailRarityData
	 * Size -> 0x0000 (FullSize[0x00C8] - InheritedSize[0x00C8])
	 */
	class UIGFanMailRarityData : public UIGDataTable
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class IGActorSystem.IGFindTargetState
	 * Size -> 0x0060 (FullSize[0x00F8] - InheritedSize[0x0098])
	 */
	class UIGFindTargetState : public UIGNotifyStateBase
	{
	public:
		struct FGameplayTagContainer                               TargetingTypes;                                          // 0x0098(0x0020) Edit, BlueprintReadOnly, Protected, NativeAccessSpecifierProtected
		bool                                                       bIgnoreTargetsInAir;                                     // 0x00B8(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bIgnoreTargetsOnGround;                                  // 0x00B9(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bCanTrackOnTheGroundTargets;                             // 0x00BA(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bAlwaysHitReactionMontages;                              // 0x00BB(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      ArcWeight;                                               // 0x00BC(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      MinDistance;                                             // 0x00C0(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      MaxDistance;                                             // 0x00C4(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FRotator                                            ConeRotation;                                            // 0x00C8(0x000C) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected
		struct FVector                                             ConeOffset;                                              // 0x00D4(0x000C) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      ConeArcX;                                                // 0x00E0(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      ConeArcY;                                                // 0x00E4(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bUseTargetLossCone;                                      // 0x00E8(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_38A9[0x3];                                   // 0x00E9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      TargetLossConeScale;                                     // 0x00EC(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_0PQY[0x4];                                   // 0x00F0(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		bool                                                       bAttemptChangeTargets;                                   // 0x00F4(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_JQTA[0x3];                                   // 0x00F5(0x0003) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class IGActorSystem.IGFXSurfaceCheck
	 * Size -> 0x00B8 (FullSize[0x00F0] - InheritedSize[0x0038])
	 */
	class UIGFXSurfaceCheck : public UAnimNotify
	{
	public:
		unsigned char                                              UnknownData_E3WZ[0x8];                                   // 0x0038(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FIGVFXSurfaceCheckData                              SurfaceCheckCast;                                        // 0x0040(0x00A0) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		int32_t                                                    CachedSurfaceValidityDuration;                           // 0x00E0(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_FZR3[0xC];                                   // 0x00E4(0x000C) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class IGActorSystem.IGGameInfo
	 * Size -> 0x0310 (FullSize[0x03C0] - InheritedSize[0x00B0])
	 */
	class UIGGameInfo : public UActorComponent
	{
	public:
		class FScriptMulticastDelegate                             OnContextInteractableActorChanged;                       // 0x00B0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnInteractableVolumeEntered;                             // 0x00C0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnInteractableVolumeExited;                              // 0x00D0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnInteractableStatusChanged;                             // 0x00E0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnShowWallGrabPrompt;                                    // 0x00F0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnHideWallGrabPrompt;                                    // 0x0100(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		bool                                                       bIsShowingWallGrabPrompt;                                // 0x0110(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_S6IO[0x7];                                   // 0x0111(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnKnockoutOccured;                                       // 0x0118(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnIGModValueChanged;                                     // 0x0128(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnSpecialMoveChanged;                                    // 0x0138(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnPlayerFollowingChanged;                                // 0x0148(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnSpectatorFollowViewChanged;                            // 0x0158(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnTagTeamEliminated;                                     // 0x0168(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnTagTeammateEliminated;                                 // 0x0178(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnTagTeammatePlayerStateAdded;                           // 0x0188(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnTagTeammatePlayerStateEliminated;                      // 0x0198(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnTeammateLeftServer;                                    // 0x01A8(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnTeammateHPAlert;                                       // 0x01B8(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnTeammateInCombatAlert;                                 // 0x01C8(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnTeammateCannonLanded;                                  // 0x01D8(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnPerkAcquired;                                          // 0x01E8(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnPerkExpired;                                           // 0x01F8(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnStatusAcquired;                                        // 0x0208(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnPoseSpotUsed;                                          // 0x0218(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_PGGO[0x20];                                  // 0x0228(0x0020) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnStatusTimerChanged;                                    // 0x0248(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnPerkStackUpdate;                                       // 0x0258(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnKnockoutRemainingChanged;                              // 0x0268(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnStaminaAttemptedUse;                                   // 0x0278(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnCannonLaunchCanEnterFreeFall;                          // 0x0288(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnCannonLaunchPhase2Start;                               // 0x0298(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnCannonLaunchEnd;                                       // 0x02A8(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnFreeFallStart;                                         // 0x02B8(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnEnteredDangerZone;                                     // 0x02C8(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnExitedDangerZone;                                      // 0x02D8(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnToggleShowFameValue;                                   // 0x02E8(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnDownedRecoverTimeChanged;                              // 0x02F8(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnTransitionWindowChanged;                               // 0x0308(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnMapZoneUpdated;                                        // 0x0318(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnStartResurrectionHealthRegen;                          // 0x0328(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnEndResurrectionHealthRegen;                            // 0x0338(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnPlayerLanded;                                          // 0x0348(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnPlayerStartReadTutorial;                               // 0x0358(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnPlayerEndReadTutorial;                                 // 0x0368(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnPlayerLeaveTutorialArea;                               // 0x0378(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnTeamDied;                                              // 0x0388(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnTeamComboHit;                                          // 0x0398(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnLockedCrateOpened;                                     // 0x03A8(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_M2GL[0x8];                                   // 0x03B8(0x0008) MISSED OFFSET (PADDING)

	public:
		bool IsCombatNotificationsEnabled();
		static UClass* StaticClass();
	};

	/**
	 * Class IGActorSystem.IGGameInstance
	 * Size -> 0x0090 (FullSize[0x0298] - InheritedSize[0x0208])
	 */
	class UIGGameInstance : public UGameInstance
	{
	public:
		class FScriptMulticastDelegate                             OnGameInfoReady;                                         // 0x0208(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class UIGSavedSettings*                                    IGSavedSettings;                                         // 0x0218(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UIGAchievementsManager*                              AchievementsManager;                                     // 0x0220(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              GenericAudioHandler[0x28];                               // 0x0228(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		unsigned char                                              GenericVFXHandler[0x28];                                 // 0x0250(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		bool                                                       bIsLookInverted;                                         // 0x0278(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_Y7GQ[0x3];                                   // 0x0279(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    WCCurrentVersion;                                        // 0x027C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class FName                                                WCMapTagToUseAsOverride;                                 // 0x0280(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		TArray<class FName>                                        WCMapTagsToUseAsOverride;                                // 0x0288(0x0010) ZeroConstructor, NativeAccessSpecifierPrivate

	public:
		void SetInvertLook(bool bNewInvert);
		void Set60FPSProfile();
		void Set30FPSProfile();
		bool PostTelemetryEventBP(const class FString& EventType, TMap<class FString, class FString> AdditionalProperties, const class FString& Category);
		bool IsLookInverted();
		void InitializeAudioSettings();
		class UIGStatsSystem* GetStatsSystem();
		class UIGSavedSettings* GetSavedSettings();
		void CommitSavedSettingsChanges();
		static UClass* StaticClass();
	};

	/**
	 * Class IGActorSystem.IGGameMode
	 * Size -> 0x0080 (FullSize[0x0340] - InheritedSize[0x02C0])
	 */
	class AIGGameMode : public AGameModeBase
	{
	public:
		class UIGLootManagerComponent*                             LootManager;                                             // 0x02C0(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UIGActorPool*                                        ActorPool;                                               // 0x02C8(0x0008) Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       RoundStartClearsStats;                                   // 0x02D0(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_00Q9[0x7];                                   // 0x02D1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TMap<class FName, float>                                   GameModeToResetOverride;                                 // 0x02D8(0x0050) Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic
		int32_t                                                    StartingCoreValue;                                       // 0x0328(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    StartingArmsValue;                                       // 0x032C(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    StartingLegsValue;                                       // 0x0330(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_2JO9[0xC];                                   // 0x0334(0x000C) MISSED OFFSET (PADDING)

	public:
		void DumpLootInfoToLog();
		static UClass* StaticClass();
	};

	/**
	 * Class IGActorSystem.IGGameplayLoadoutData
	 * Size -> 0x0050 (FullSize[0x0080] - InheritedSize[0x0030])
	 */
	class UIGGameplayLoadoutData : public UDataAsset
	{
	public:
		TMap<class FName, struct FIGGameplayLoadout>               LoadoutMap;                                              // 0x0030(0x0050) Edit, Protected, NativeAccessSpecifierProtected

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class IGActorSystem.IGMapZoningInfo
	 * Size -> 0x0038 (FullSize[0x0068] - InheritedSize[0x0030])
	 */
	class UIGMapZoningInfo : public UDataAsset
	{
	public:
		class FName                                                LevelName;                                               // 0x0030(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class FName>                                        IdNameMap;                                               // 0x0038(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		struct FVector2D                                           MapGridXRange;                                           // 0x0048(0x0008) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector2D                                           MapGridYRange;                                           // 0x0050(0x0008) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FIGMapZoneRow>                               MapZoneGrid;                                             // 0x0058(0x0010) Edit, ZeroConstructor, EditConst, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class IGActorSystem.IGGameState
	 * Size -> 0x01E0 (FullSize[0x0450] - InheritedSize[0x0270])
	 */
	class AIGGameState : public AGameStateBase
	{
	public:
		float                                                      ServerUpdateTimerSyncRate;                               // 0x0270(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ServerUpdateStatUnitRate;                                // 0x0274(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FIGReplicatedServerStats                            ReplicatedServerStats;                                   // 0x0278(0x003C) BlueprintVisible, BlueprintReadOnly, Net, Transient, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bReplicateServerStats;                                   // 0x02B4(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_KAT3[0x3];                                   // 0x02B5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UIGPerkDataList*                                     AllPerkData;                                             // 0x02B8(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UIGPerkDataList*                                     RandomPerkData;                                          // 0x02C0(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UIGPerkProfile*                                      RandomPerkProfile;                                       // 0x02C8(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UIGRumbleData*                                       RumbleData;                                              // 0x02D0(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UIGDynamicObjCluster*                                DynamicLootCluster;                                      // 0x02D8(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUseOldSpectatorFlow;                                    // 0x02E0(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bDangerZoneEnabled;                                      // 0x02E1(0x0001) Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bKnockoutLimitEnabled;                                   // 0x02E2(0x0001) Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_G5UI[0x5];                                   // 0x02E3(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UDataTable*                                          PerkUITable;                                             // 0x02E8(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bDebugForceSpectatorMovementAllowed;                     // 0x02F0(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIsFameEnabled;                                          // 0x02F1(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bDropMagazines;                                          // 0x02F2(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIsPerkXPEnabled;                                        // 0x02F3(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bForceShowPerkXPMeter;                                   // 0x02F4(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_88C1[0x3];                                   // 0x02F5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    KOStreakMultiple;                                        // 0x02F8(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    NumberOfLines;                                           // 0x02FC(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UIGMapZoningInfo*                                    MapZoningInfo;                                           // 0x0300(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnKnockoutOccured;                                       // 0x0308(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		int32_t                                                    WCVersionUsed;                                           // 0x0318(0x0004) BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_0TV7[0x4];                                   // 0x031C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class FName>                                        WCMapLoadTags;                                           // 0x0320(0x0010) BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, NativeAccessSpecifierPublic
		struct FGameplayTagContainer                               DisallowedMontageTags;                                   // 0x0330(0x0020) Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic
		bool                                                       bShouldDisableAOEDamage;                                 // 0x0350(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bShouldDisableFallDamage;                                // 0x0351(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bShouldDisablePoseSpots;                                 // 0x0352(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bShouldDisableInteractables;                             // 0x0353(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_V0Z7[0x4];                                   // 0x0354(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              AllowedInteractableClasses[0x50];                        // 0x0358(0x0050) UNKNOWN PROPERTY: SetProperty
		float                                                      ServerTimeAtLastSync;                                    // 0x03A8(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      TimeStampOfLastSync;                                     // 0x03AC(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		TArray<struct FIGKnockOutData>                             KnockoutList;                                            // 0x03B0(0x0010) ZeroConstructor, Protected, NativeAccessSpecifierProtected
		TArray<struct FTeamInfo>                                   TeamsInMatch;                                            // 0x03C0(0x0010) Net, ZeroConstructor, RepNotify, Protected, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_4LEE[0x20];                                  // 0x03D0(0x0020) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FIGSimplePerformanceCollector                       SimplePerformanceCollector;                              // 0x03F0(0x0060) NoDestructor, NativeAccessSpecifierPrivate

	public:
		void OnRep_TeamInfoUpdated();
		void MulticastKnockoutEvent(const struct FIGKnockOutData& Knockout);
		int32_t GetNumKnockouts();
		struct FIGKnockOutData GetKnockoutAt(int32_t I);
		void ExecLogTeamInfo();
		static UClass* StaticClass();
	};

	/**
	 * Class IGActorSystem.IGGenericInputEvent
	 * Size -> 0x00C0 (FullSize[0x00F0] - InheritedSize[0x0030])
	 */
	class UIGGenericInputEvent : public UDataAsset
	{
	public:
		struct FIGStateTransitionConditions                        TransitionInfo;                                          // 0x0030(0x0080) Edit, NativeAccessSpecifierPublic
		EMoveTrack                                                 MoveTrack;                                               // 0x00B0(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_SQ60[0x3];                                   // 0x00B1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    LookbackMS;                                              // 0x00B4(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UClass*                                              TargetActorClass;                                        // 0x00B8(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    DurationMS;                                              // 0x00C0(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int16_t                                                    TransitionPriority;                                      // 0x00C4(0x0002) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_FJVY[0x2];                                   // 0x00C6(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class FName>                                        ClassFunctionNames;                                      // 0x00C8(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		class FName                                                FuncName;                                                // 0x00D8(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UFunction*                                           SelectedFunction;                                        // 0x00E0(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bAllowTransitionOnHit;                                   // 0x00E8(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bAllowTransitionOnBlock;                                 // 0x00E9(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bAllowTransitionOnWhiff;                                 // 0x00EA(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_7JVL[0x5];                                   // 0x00EB(0x0005) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class IGActorSystem.IGHitData
	 * Size -> 0x02C0 (FullSize[0x02F0] - InheritedSize[0x0030])
	 */
	class UIGHitData : public UDataAsset
	{
	public:
		class UIGMoveMontage*                                      ReactMove;                                               // 0x0030(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UIGMoveMontage*                                      OnTheGroundReactMove;                                    // 0x0038(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UIGMoveMontage*                                      KOReactMove;                                             // 0x0040(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      Damage;                                                  // 0x0048(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bOverrideStatsAttackPower;                               // 0x004C(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		EStatDamageType                                            DamageBoostType;                                         // 0x004D(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_ZN6G[0x2];                                   // 0x004E(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<float>                                              StatLevelDamageBoostPercentages;                         // 0x0050(0x0010) Edit, ZeroConstructor, Protected, NativeAccessSpecifierProtected
		float                                                      AttackerFameReward;                                      // 0x0060(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      VictimFameReward;                                        // 0x0064(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      DamageCap;                                               // 0x0068(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		int32_t                                                    DurabilityCost;                                          // 0x006C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		TArray<ECharacterLocomotionState>                          LocomotionStateRequirement;                              // 0x0070(0x0010) Edit, BlueprintVisible, ZeroConstructor, Protected, NativeAccessSpecifierProtected
		bool                                                       bHasRadialKnockback;                                     // 0x0080(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bVictimFaceAttacker;                                     // 0x0081(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bUseGroundBasedHitSparkRotation;                         // 0x0082(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bOverrideDamageScaleForTeammates;                        // 0x0083(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      TeammateDamageReductionModifier;                         // 0x0084(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UIGMoveMontage*                                      StaminaBreakMontageOverride;                             // 0x0088(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      StamBreakHitStopDuration;                                // 0x0090(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      StaminaDamageOnHit;                                      // 0x0094(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bCanStaminaBreakOnHit;                                   // 0x0098(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_7ITH[0x7];                                   // 0x0099(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UClass*                                              CombatInteractionOnHit;                                  // 0x00A0(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UForceFeedbackEffect*                                RumbleEffect;                                            // 0x00A8(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UForceFeedbackEffect*                                RumbleEffectOnBlock;                                     // 0x00B0(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class FName                                                Tag;                                                     // 0x00B8(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bLooping;                                                // 0x00C0(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bIgnoreTimeDilation;                                     // 0x00C1(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bPlayWhilePaused;                                        // 0x00C2(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_WX4U[0x5];                                   // 0x00C3(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FIGPerk                                             StatusApplied;                                           // 0x00C8(0x0038) Edit, Protected, NativeAccessSpecifierProtected
		float                                                      HitStopDuration;                                         // 0x0100(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      HitStunDuration;                                         // 0x0104(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      PushBackDuration;                                        // 0x0108(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FVector                                             PushBack;                                                // 0x010C(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      PushBackFriction;                                        // 0x0118(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bShouldPushbackBeAdditive;                               // 0x011C(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_4441[0x3];                                   // 0x011D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      StaminaDamageOnBlock;                                    // 0x0120(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bCanStaminaBreakOnBlock;                                 // 0x0124(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_61JV[0x3];                                   // 0x0125(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      BlockHitStopDuration;                                    // 0x0128(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      BlockStunDuration;                                       // 0x012C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      BlockPushBackDuration;                                   // 0x0130(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FVector                                             BlockPushBack;                                           // 0x0134(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      BlockPushBackFriction;                                   // 0x0140(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_RIAU[0x4];                                   // 0x0144(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UParticleSystem*                                     OverrideGenericEffect;                                   // 0x0148(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UClass*                                              OverrideCameraShake;                                     // 0x0150(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      OverrideCameraShakeScale;                                // 0x0158(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_E6R4[0x4];                                   // 0x015C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FSoundHitData                                       SoundOnHit;                                              // 0x0160(0x0048) Edit, BlueprintVisible, NoDestructor, Protected, NativeAccessSpecifierProtected
		struct FEffectHitData                                      EffectOnHit;                                             // 0x01A8(0x0048) Edit, BlueprintVisible, NoDestructor, Protected, NativeAccessSpecifierProtected
		struct FSoundHitData                                       SoundOnBlock;                                            // 0x01F0(0x0048) Edit, BlueprintVisible, NoDestructor, Protected, NativeAccessSpecifierProtected
		struct FEffectHitData                                      EffectOnBlock;                                           // 0x0238(0x0048) Edit, BlueprintVisible, NoDestructor, Protected, NativeAccessSpecifierProtected
		class UCurveFloat*                                         FallScalingCurve;                                        // 0x0280(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UCurveFloat*                                         FallScalingStaminaDamageCurve;                           // 0x0288(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UCurveFloat*                                         FallScalingAoECurve;                                     // 0x0290(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UCurveFloat*                                         FallScalingHitStunCurve;                                 // 0x0298(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bScaleStaminaDamageWithFallScaling;                      // 0x02A0(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_851E[0x7];                                   // 0x02A1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UIGHitData*                                          LauncherHitData;                                         // 0x02A8(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UCurveFloat*                                         FallDistanceKnockbackCurve;                              // 0x02B0(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		EIGDownedReactionType                                      DownedReactionType;                                      // 0x02B8(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bCanClash;                                               // 0x02B9(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_3CHJ[0x6];                                   // 0x02BA(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UIGMoveMontage*                                      ClashMontageOverride;                                    // 0x02C0(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		uint32_t                                                   ComboLimitFlags;                                         // 0x02C8(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_K24L[0x4];                                   // 0x02CC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UIGMoveMontage*                                      ComboLimitOverride;                                      // 0x02D0(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class FName                                                HitLimitGroup;                                           // 0x02D8(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      HitLimitTimer;                                           // 0x02E0(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class FName                                                StatToIncrement;                                         // 0x02E4(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bIsVicious;                                              // 0x02EC(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_03BU[0x3];                                   // 0x02ED(0x0003) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class IGActorSystem.IGGrappleData
	 * Size -> 0x0008 (FullSize[0x02F8] - InheritedSize[0x02F0])
	 */
	class UIGGrappleData : public UIGHitData
	{
	public:
		class UIGMoveMontage*                                      AttackMove;                                              // 0x02F0(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class IGActorSystem.IGWeaponBase
	 * Size -> 0x0078 (FullSize[0x0700] - InheritedSize[0x0688])
	 */
	class AIGWeaponBase : public AIGInteractablePickup
	{
	public:
		struct FIGModStackFloat                                    ClimbingSpeedMod;                                        // 0x0688(0x000C) Edit, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic
		struct FIGModStackFloat                                    MaxSpeedMod;                                             // 0x0694(0x000C) Edit, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic
		struct FIGModStackFloat                                    MaxAccelerationMod;                                      // 0x06A0(0x000C) Edit, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic
		struct FIGModStackFloat                                    JumpHeightMod;                                           // 0x06AC(0x000C) Edit, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic
		struct FIGModStackFloat                                    TargetOffsetDistanceMod;                                 // 0x06B8(0x000C) Edit, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic
		EIGWeaponType                                              WeaponType;                                              // 0x06C4(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_83IZ[0x3];                                   // 0x06C5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UIGMovesetData*                                      Attacks;                                                 // 0x06C8(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bIsConsideredWeaponByStats;                              // 0x06D0(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_WJIL[0x3];                                   // 0x06D1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                DamageStatName;                                          // 0x06D4(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_EAKI[0x4];                                   // 0x06DC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<float>                                              LockedCrateRadarDistances;                               // 0x06E0(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected
		bool                                                       bShowRadarFXWhenDamaged;                                 // 0x06F0(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bShowRadarFXWithLockedCrateInPocket;                     // 0x06F1(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_T328[0x2];                                   // 0x06F2(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    RadarEffectTier;                                         // 0x06F4(0x0004) Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_HD3U[0x8];                                   // 0x06F8(0x0008) MISSED OFFSET (PADDING)

	public:
		void OnRep_LockedCrateRadarTiers();
		void OnLockedCrateRadarTierChanged(int32_t EffectTiers);
		static UClass* StaticClass();
	};

	/**
	 * Class IGActorSystem.IGGrenadeBase
	 * Size -> 0x0060 (FullSize[0x0760] - InheritedSize[0x0700])
	 */
	class AIGGrenadeBase : public AIGWeaponBase
	{
	public:
		class UIGGrenadeLingerData*                                LingerData;                                              // 0x0700(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAOEAttackShape*                                     DetonateShape;                                           // 0x0708(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, Protected, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bCanDetonateOnWall;                                      // 0x0710(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bOnlyDetonateWhenStopped;                                // 0x0711(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_N9E8[0x2];                                   // 0x0712(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      DetonateTime;                                            // 0x0714(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UIGHitData*                                          InitialHitData;                                          // 0x0718(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bHitUnblockable;                                         // 0x0720(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_8TI3[0x7];                                   // 0x0721(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FIGPerk>                                     StatusEffectsToApply;                                    // 0x0728(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected
		bool                                                       bStatusEffectsUnblockable;                               // 0x0738(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bStatusEffectsUndodgable;                                // 0x0739(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bCanTrackOnThrow;                                        // 0x073A(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bCanAffectTeammates;                                     // 0x073B(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bCanAffectEnemies;                                       // 0x073C(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_1BYF[0x23];                                  // 0x073D(0x0023) MISSED OFFSET (PADDING)

	public:
		void OnRep_GrenadeState(EIGGrenadeState OldGrenadeState);
		void OnLingerFinished();
		void OnDetonateTimerStart();
		void OnDetonate();
		float GetLingerTime();
		static UClass* StaticClass();
	};

	/**
	 * Class IGActorSystem.IGStatusEffectAOEData
	 * Size -> 0x0018 (FullSize[0x0048] - InheritedSize[0x0030])
	 */
	class UIGStatusEffectAOEData : public UDataAsset
	{
	public:
		TArray<struct FIGPerk>                                     StatusEffects;                                           // 0x0030(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic
		float                                                      CylinderCheckFrequency;                                  // 0x0040(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_B08D[0x4];                                   // 0x0044(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class IGActorSystem.IGGrenadeLingerData
	 * Size -> 0x0010 (FullSize[0x0058] - InheritedSize[0x0048])
	 */
	class UIGGrenadeLingerData : public UIGStatusEffectAOEData
	{
	public:
		class UClass*                                              LingerActorClass;                                        // 0x0048(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      LingerTime;                                              // 0x0050(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bCanAffectTeammates;                                     // 0x0054(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bCanAffectEnemies;                                       // 0x0055(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_EUNA[0x2];                                   // 0x0056(0x0002) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class IGActorSystem.IGStatusEffectAOEActor
	 * Size -> 0x00D0 (FullSize[0x02F0] - InheritedSize[0x0220])
	 */
	class AIGStatusEffectAOEActor : public AActor
	{
	public:
		class UShapeComponent*                                     LingerCollision;                                         // 0x0220(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UIGStatusEffectAOEData*                              LingerData;                                              // 0x0228(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bIsCylinder;                                             // 0x0230(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_OQVL[0x3];                                   // 0x0231(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      CylinderHalfHeight;                                      // 0x0234(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      CylinderRadius;                                          // 0x0238(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_ZK0Y[0xAC];                                  // 0x023C(0x00AC) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		bool                                                       bIsCylinderValid;                                        // 0x02E8(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_53E2[0x7];                                   // 0x02E9(0x0007) MISSED OFFSET (PADDING)

	public:
		void OnEndOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex);
		void OnBeginOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
		static UClass* StaticClass();
	};

	/**
	 * Class IGActorSystem.IGGrenadeLingerActor
	 * Size -> 0x0030 (FullSize[0x0320] - InheritedSize[0x02F0])
	 */
	class AIGGrenadeLingerActor : public AIGStatusEffectAOEActor
	{
	public:
		unsigned char                                              UnknownData_JBHA[0x28];                                  // 0x02F0(0x0028) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AIGCharacter*                                        DamageOwner;                                             // 0x0318(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class IGActorSystem.IGHealthAndStaminaConsumable
	 * Size -> 0x0078 (FullSize[0x0700] - InheritedSize[0x0688])
	 */
	class AIGHealthAndStaminaConsumable : public AIGInteractablePickup
	{
	public:
		struct FIGMeterDeltaOverTime                               HealthRegen;                                             // 0x0688(0x0010) Edit, NoDestructor, Protected, NativeAccessSpecifierProtected
		struct FIGMeterDeltaOverTime                               StaminaRegen;                                            // 0x0698(0x0010) Edit, NoDestructor, Protected, NativeAccessSpecifierProtected
		class USkeletalMeshComponent*                              SkeletalMeshComponent;                                   // 0x06A8(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bAlwaysApplyOvereatingPerk;                              // 0x06B0(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_TDS8[0x3];                                   // 0x06B1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      OvereatingThresholdHealth;                               // 0x06B4(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      OvereatingThresholdStamina;                              // 0x06B8(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_5L9E[0x4];                                   // 0x06BC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FIGPerk                                             OvereatingPerk;                                          // 0x06C0(0x0038) Edit, Protected, NativeAccessSpecifierProtected
		class FName                                                StatToIncrement;                                         // 0x06F8(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class IGActorSystem.IGCombatInteractionDefinition
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UIGCombatInteractionDefinition : public UObject
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class IGActorSystem.IGMultiCombatInteraction
	 * Size -> 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
	 */
	class UIGMultiCombatInteraction : public UIGCombatInteractionDefinition
	{
	public:
		TArray<class UClass*>                                      Interactions;                                            // 0x0028(0x0010) Edit, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class IGActorSystem.IGUnpocketCombatInteraction
	 * Size -> 0x0008 (FullSize[0x0030] - InheritedSize[0x0028])
	 */
	class UIGUnpocketCombatInteraction : public UIGCombatInteractionDefinition
	{
	public:
		int32_t                                                    ItemDropMin;                                             // 0x0028(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    ItemDropMax;                                             // 0x002C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class IGActorSystem.IGForceItemStashCombatInteraction
	 * Size -> 0x0018 (FullSize[0x0040] - InheritedSize[0x0028])
	 */
	class UIGForceItemStashCombatInteraction : public UIGCombatInteractionDefinition
	{
	public:
		class UClass*                                              ItemStashOverride;                                       // 0x0028(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bOverrideDurability;                                     // 0x0030(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_W638[0x3];                                   // 0x0031(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    OverrideCurrentDurabilityPoints;                         // 0x0034(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bDeSpawnAttackingItem;                                   // 0x0038(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bCanOverwriteExistingSlot;                               // 0x0039(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_1QXD[0x6];                                   // 0x003A(0x0006) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class IGActorSystem.IGHitManagerComponent
	 * Size -> 0x0038 (FullSize[0x00E8] - InheritedSize[0x00B0])
	 */
	class UIGHitManagerComponent : public UActorComponent
	{
	public:
		float                                                      QueuedAttackLatencyCompensationOverride;                 // 0x00B0(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_VRE5[0x14];                                  // 0x00B4(0x0014) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FQueuedAttack>                               ServerQueuedAttacks;                                     // 0x00C8(0x0010) Net, ZeroConstructor, RepNotify, Protected, NativeAccessSpecifierProtected
		class FScriptMulticastDelegate                             OnAttackConnect;                                         // 0x00D8(0x0010) ZeroConstructor, InstancedReference, NativeAccessSpecifierPublic

	public:
		void ResolvePendingHitBlocks(struct FQueuedAttack* QueuedAttack, bool bFinalCheck);
		void ResolvePendingBlocks(struct FQueuedAttack* QueuedAttack);
		void ProcessQueuedAttack(struct FQueuedAttack* QueuedAttack);
		void OnRep_ServerQueuedAttacks();
		void LockQueuedAttack(struct FQueuedAttack* QueuedAttack, float TimeBeforeActivation);
		void HitManagerDelegate__DelegateSignature(const struct FQueuedAttack& InQueuedAttack);
		void CheckForClashes(struct FQueuedAttack* QueuedAttack, float TimeBeforeActivation);
		static UClass* StaticClass();
	};

	/**
	 * Class IGActorSystem.IGHitReactor
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UIGHitReactor : public UInterface
	{
	public:
		void OnReceivedHitWithKnockbackDirection(const struct FVector& KnockbackDirection);
		static UClass* StaticClass();
	};

	/**
	 * Class IGActorSystem.IGHitStunTimeDilation
	 * Size -> 0x0008 (FullSize[0x00A0] - InheritedSize[0x0098])
	 */
	class UIGHitStunTimeDilation : public UIGNotifyStateBase
	{
	public:
		unsigned char                                              UnknownData_D437[0x8];                                   // 0x0098(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class IGActorSystem.IGInteractable
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UIGInteractable : public UInterface
	{
	public:
		struct FVector GetInteractionPromptLocation(class AActor* InteractingActor);
		EInteractablePromptBehavior GetInteractablePromptBehavior();
		static UClass* StaticClass();
	};

	/**
	 * Class IGActorSystem.IGInteractableBoxComponent
	 * Size -> 0x0008 (FullSize[0x0490] - InheritedSize[0x0488])
	 */
	class UIGInteractableBoxComponent : public UBoxComponent
	{
	public:
		unsigned char                                              UnknownData_BKOF[0x8];                                   // 0x0488(0x0008) Fix Super Size

	public:
		void OnOverlapEnd(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex);
		void OnOverlapBegin(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
		static UClass* StaticClass();
	};

	/**
	 * Class IGActorSystem.IGInteractableComponent
	 * Size -> 0x0090 (FullSize[0x0520] - InheritedSize[0x0490])
	 */
	class UIGInteractableComponent : public UIGInteractableBoxComponent
	{
	public:
		unsigned char                                              UnknownData_OT9V[0x18];                                  // 0x0490(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		bool                                                       bOverrideHalfHeight;                                     // 0x04A8(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_FFID[0x3];                                   // 0x04A9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      OverriddenHalfHeight;                                    // 0x04AC(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bOverrideRadius;                                         // 0x04B0(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_POBZ[0x3];                                   // 0x04B1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      OverriddenRadius;                                        // 0x04B4(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bOverrideTransform;                                      // 0x04B8(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_JKXJ[0x7];                                   // 0x04B9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          OverriddenPingTransform;                                 // 0x04C0(0x0030) Edit, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FDataTableRowHandle                                 PromptTextRow;                                           // 0x04F0(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, Protected, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_PQIA[0x18];                                  // 0x0500(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    PromptPriorityTier;                                      // 0x0518(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_TUXF[0x4];                                   // 0x051C(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class IGActorSystem.IGStaticInteractableActor
	 * Size -> 0x0090 (FullSize[0x0350] - InheritedSize[0x02C0])
	 */
	class AIGStaticInteractableActor : public AIGInteractableCommon
	{
	public:
		float                                                      ServerResetTime;                                         // 0x02C0(0x0004) BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUseInteractPointForLineOfSight;                         // 0x02C4(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_N0YP[0x3];                                   // 0x02C5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             InteractPoint;                                           // 0x02C8(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             CachedInteractionPoint;                                  // 0x02D4(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUseFocalPoint;                                          // 0x02E0(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_522Q[0x3];                                   // 0x02E1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             FocalPoint;                                              // 0x02E4(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             CachedFocalPoint;                                        // 0x02F0(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EIGStaticInteractableActorState                            RepInteractableActorState;                               // 0x02FC(0x0001) Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		EIGStaticInteractableActorState                            LocalInteractableActorState;                             // 0x02FD(0x0001) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_U6D4[0x2];                                   // 0x02FE(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class USceneComponent*                                     InteractableActorRootComponent;                          // 0x0300(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UIGInteractableBoxComponent*                         InteracatableOverlap;                                    // 0x0308(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UIGMoveMontage*                                      InteractionMontage;                                      // 0x0310(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class FScriptMulticastDelegate                             OnStaticInteractableStartInteraction;                    // 0x0318(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, Protected, NativeAccessSpecifierProtected
		float                                                      TimeToReset;                                             // 0x0328(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_U0NI[0x4];                                   // 0x032C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTimerHandle                                        ResetTimer;                                              // 0x0330(0x0008) NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		TWeakObjectPtr<class AIGCharacter>                         CachedInteractingCharacter;                              // 0x0338(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FGuid                                               StaticInteractableID;                                    // 0x0340(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected

	public:
		float TimeTillResetToInteractable();
		void StopInteract();
		bool ShouldBeVisible(EIGStaticInteractableActorState PreviousState, EIGStaticInteractableActorState NewState);
		void ResetTimerExpired();
		void OnStartInteractSequenceEnded(class UAnimMontage* Montage, bool bInterrupted);
		void OnRep_InteractableActorStateChanged();
		bool IsInteractable();
		void HandleInteractableStateChanged_BP(EIGStaticInteractableActorState PreviousState, EIGStaticInteractableActorState NewState);
		void HandleInteractableReset_BP();
		struct FGuid GetInteractableID();
		EIGStaticInteractableActorState GetInteractableActorState();
		class AIGCharacter* GetCachedInteractingCharacter();
		static UClass* StaticClass();
	};

	/**
	 * Class IGActorSystem.IGItemEquipActor
	 * Size -> 0x0030 (FullSize[0x0380] - InheritedSize[0x0350])
	 */
	class AIGItemEquipActor : public AIGStaticInteractableActor
	{
	public:
		class UClass*                                              ItemClass;                                               // 0x0350(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              SelectedItemClass[0x28];                                 // 0x0358(0x0028) UNKNOWN PROPERTY: SoftClassProperty

	public:
		void UnpickupableStartInteraction_BP(class AIGCharacter* InteractingCharacter);
		static UClass* StaticClass();
	};

	/**
	 * Class IGActorSystem.IGInteractableLootSpawner
	 * Size -> 0x0050 (FullSize[0x03D0] - InheritedSize[0x0380])
	 */
	class AIGInteractableLootSpawner : public AIGItemEquipActor
	{
	public:
		unsigned char                                              UnknownData_QYBP[0x10];                                  // 0x0380(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UIGLootProfile*                                      LootProfile;                                             // 0x0390(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      SpawnTimer;                                              // 0x0398(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bSpawnAfterWarning;                                      // 0x039C(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bCanBeHit;                                               // 0x039D(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIsTrackable;                                            // 0x039E(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_K4U9[0x1];                                   // 0x039F(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UClass*                                              SelectedActorForSpawner;                                 // 0x03A0(0x0008) BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FIGLootSpawnOptions                                 SelectedSpawnOptions;                                    // 0x03A8(0x0004) BlueprintVisible, BlueprintReadOnly, Net, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bLateSpawner;                                            // 0x03AC(0x0001) BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bSpawnIncoming;                                          // 0x03AD(0x0001) BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_DX5J[0x2];                                   // 0x03AE(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      ServerSpawnTime;                                         // 0x03B0(0x0004) BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_8IX8[0x4];                                   // 0x03B4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UCapsuleComponent*                                   HitReactCapsuleComponent;                                // 0x03B8(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FGameplayTag                                        OwnedTargetingTag;                                       // 0x03C0(0x0008) Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ZW3N[0x8];                                   // 0x03C8(0x0008) MISSED OFFSET (PADDING)

	public:
		float TimeTillSpawnInteractable();
		void SpawnTimerComplete();
		void SpawnerHasBeenHit_BP(bool bSuccessfulHit);
		void OnRep_SpawnIncoming();
		bool NeedsKeyToReact();
		void HandleSpawnIncomingEvent_BP(bool bSpawnIncomingEvent);
		static UClass* StaticClass();
	};

	/**
	 * Class IGActorSystem.IGProjectileOverrideSettings
	 * Size -> 0x0180 (FullSize[0x01B0] - InheritedSize[0x0030])
	 */
	class UIGProjectileOverrideSettings : public UDataAsset
	{
	public:
		bool                                                       bOverrideBreakableOnThrow;                               // 0x0030(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bBreakableOnThrow;                                       // 0x0031(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bOverrideMaxHomingTargetAngle;                           // 0x0032(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_RB4W[0x1];                                   // 0x0033(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      MaxHomingTargetAngle;                                    // 0x0034(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bOverrideDropLocationOffset;                             // 0x0038(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_FP53[0x3];                                   // 0x0039(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             DropLocationOffset;                                      // 0x003C(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bOverrideThrowLocationOffset;                            // 0x0048(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_96DV[0x3];                                   // 0x0049(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             ThrowLocationOffset;                                     // 0x004C(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bOverrideInitialDropVelocity;                            // 0x0058(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_UJZO[0x3];                                   // 0x0059(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             InitialDropVelocity;                                     // 0x005C(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bOverrideAimingCameraOffset;                             // 0x0068(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_PH9K[0x3];                                   // 0x0069(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             AimingCameraOffset;                                      // 0x006C(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bOverrideStashability;                                   // 0x0078(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EIGStashabilityType                                        Stashability;                                            // 0x0079(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bOverrideTargetingSizePadding;                           // 0x007A(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_QRK8[0x1];                                   // 0x007B(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      TargetingSizePadding;                                    // 0x007C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bOverrideThrowCost;                                      // 0x0080(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_A9ZM[0x3];                                   // 0x0081(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		uint32_t                                                   ThrowCost;                                               // 0x0084(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bOverrideQuickThrowForce;                                // 0x0088(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_39DO[0x3];                                   // 0x0089(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             QuickThrowForce;                                         // 0x008C(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bOverrideAimThrowForce;                                  // 0x0098(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_7M8R[0x3];                                   // 0x0099(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             AimThrowForce;                                           // 0x009C(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bOverrideHitBounceForce;                                 // 0x00A8(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_EZLT[0x3];                                   // 0x00A9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             HitBounceForce;                                          // 0x00AC(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bOverrideThrowOrientation;                               // 0x00B8(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_89PI[0x3];                                   // 0x00B9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FRotator                                            ThrowOrientation;                                        // 0x00BC(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bOverrideHitData;                                        // 0x00C8(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_1T7S[0x7];                                   // 0x00C9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UIGHitData*                                          HitData;                                                 // 0x00D0(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bOverrideMontageOverrides;                               // 0x00D8(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_JLR0[0x7];                                   // 0x00D9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TMap<class UIGMoveMontage*, class UIGMoveMontage*>         MontageOverrides;                                        // 0x00E0(0x0050) Edit, NativeAccessSpecifierPublic
		bool                                                       bOverrideHomingVelocityRotation;                         // 0x0130(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_WAYQ[0x3];                                   // 0x0131(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      HomingVelocityRotation;                                  // 0x0134(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bOverrideAirDrag;                                        // 0x0138(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_IIXF[0x3];                                   // 0x0139(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      AirDrag;                                                 // 0x013C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bOverrideActiveProjectileRotation;                       // 0x0140(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_342B[0x3];                                   // 0x0141(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FRotator                                            ActiveProjectileRotation;                                // 0x0144(0x000C) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bOverrideBounceOverrideSettings;                         // 0x0150(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_WKVE[0x7];                                   // 0x0151(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FBounceOverrideSettings>                     BounceOverrideSettings;                                  // 0x0158(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		bool                                                       bOverrideStopBounceOverridesOnHit;                       // 0x0168(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bStopBounceOverridesOnHit;                               // 0x0169(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bOverrideCanTargetDamageOwner;                           // 0x016A(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bCanTargetDamageOwner;                                   // 0x016B(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bOverrideCharacterBounceAngleMin;                        // 0x016C(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_4CJK[0x3];                                   // 0x016D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      CharacterBounceAngleMin;                                 // 0x0170(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bOverrideCharacterBounceAngleMax;                        // 0x0174(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_9M6S[0x3];                                   // 0x0175(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      CharacterBounceAngleMax;                                 // 0x0178(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bOverrideProjectileGravityScale;                         // 0x017C(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_9G7M[0x3];                                   // 0x017D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      ProjectileGravityScale;                                  // 0x0180(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bOverrideBounciness;                                     // 0x0184(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_7GNA[0x3];                                   // 0x0185(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      Bounciness;                                              // 0x0188(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bOverrideFriction;                                       // 0x018C(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_9W1R[0x3];                                   // 0x018D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      Friction;                                                // 0x0190(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bOverrideBounceVelocityStopSimulatingThreshold;          // 0x0194(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_QDRG[0x3];                                   // 0x0195(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      BounceVelocityStopSimulatingThreshold;                   // 0x0198(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bOverrideMinFrictionFraction;                            // 0x019C(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_WHBJ[0x3];                                   // 0x019D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      MinFrictionFraction;                                     // 0x01A0(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bOverrideHomingAccelerationMagnitude;                    // 0x01A4(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_SPHX[0x3];                                   // 0x01A5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      HomingAccelerationMagnitude;                             // 0x01A8(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_0SOK[0x4];                                   // 0x01AC(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class IGActorSystem.IGInteractiveObjectReactComponent
	 * Size -> 0x0000 (FullSize[0x0110] - InheritedSize[0x0110])
	 */
	class UIGInteractiveObjectReactComponent : public UIGHitReactComponent
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class IGActorSystem.IGInventory
	 * Size -> 0x0070 (FullSize[0x0120] - InheritedSize[0x00B0])
	 */
	class UIGInventory : public UActorComponent
	{
	public:
		unsigned char                                              UnknownData_GC0I[0x10];                                  // 0x00B0(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    StashInputBufferDurationMS;                              // 0x00C0(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_J5KX[0x10];                                  // 0x00C4(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             DropVelocity;                                            // 0x00D4(0x000C) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UDataTable*                                          ItemDataTable;                                           // 0x00E0(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		TArray<struct FIGInventoryItem>                            Inventory;                                               // 0x00E8(0x0010) Net, ZeroConstructor, Transient, RepNotify, Protected, NativeAccessSpecifierProtected
		TArray<struct FIGInventoryItem>                            LocalInventory;                                          // 0x00F8(0x0010) ZeroConstructor, Transient, Protected, NativeAccessSpecifierProtected
		class AIGInteractablePickup*                               ItemInHand;                                              // 0x0108(0x0008) Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bIsSwapping;                                             // 0x0110(0x0001) Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_EMM0[0x3];                                   // 0x0111(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      SwapBufferWindow;                                        // 0x0114(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_FKQ3[0x4];                                   // 0x0118(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		bool                                                       bIgnoreStashingCondition;                                // 0x011C(0x0001) Net, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		EIGStashabilityType                                        PendingStashType;                                        // 0x011D(0x0001) Net, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		EIGStashabilityType                                        PendingUnstashType;                                      // 0x011E(0x0001) Net, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_CHDY[0x1];                                   // 0x011F(0x0001) MISSED OFFSET (PADDING)

	public:
		void UpdateItemDurability(int32_t NewDurability);
		void TriggerSlotUpdateEvent(EIGInventorySlot Slot, bool bSuccess);
		void TriggerDurabilityUpdate(EIGInventorySlot Slot);
		void ServerSwapWithHand(EIGInventorySlot InSlot, EIGStashType InStashType);
		void OnRep_ItemInHand();
		void OnRep_Inventory();
		void OnFinishUnstash(bool bInterrupted);
		void OnFinishStashHand(bool bInterrupted);
		bool IsItemStashable(class AIGInteractablePickup* Item);
		bool IsItemInHandStashable();
		bool IsItemClassStashable(class UClass* ItemClass);
		bool HasEmptySlot();
		void HandleInventoryUpdated();
		EIGStashabilityType GetPendingUnstashType();
		EIGStashabilityType GetPendingStashType();
		struct FIGInventoryItem GetItemInSlot(EIGInventorySlot Slot);
		bool GetIsSwapping();
		struct FIGItemDisplayInfo GetDisplayInfoForSlot(EIGInventorySlot Slot);
		struct FIGItemDisplayInfo GetDisplayInfoForPickup(class AIGInteractablePickup* InPickup);
		struct FIGItemDisplayInfo GetDisplayInfoForItem(const struct FIGInventoryItem& Item);
		void FinishDelayedSwap(class UAnimMontage* Montage, bool bInterrupted);
		int32_t DropItems(int32_t Count);
		void DropItemFromSlot(EIGInventorySlot Slot);
		void DropAllItems();
		void ClientTriggerFailedSwap(EIGInventorySlot Slot);
		bool CanSwapWithHand(EIGInventorySlot Slot);
		bool CanPossiblySwapWithHand(EIGInventorySlot Slot);
		static UClass* StaticClass();
	};

	/**
	 * Class IGActorSystem.IGStaticInteractableActorHitReact
	 * Size -> 0x0048 (FullSize[0x0398] - InheritedSize[0x0350])
	 */
	class AIGStaticInteractableActorHitReact : public AIGStaticInteractableActor
	{
	public:
		unsigned char                                              UnknownData_8P8O[0x8];                                   // 0x0350(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		bool                                                       bAllowContextInteraction;                                // 0x0358(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bOnTheGroundAttackOnly;                                  // 0x0359(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIsTrackable;                                            // 0x035A(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bTriggerCosmeticHitEffects;                              // 0x035B(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_GU9B[0x4];                                   // 0x035C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UClass*                                              ValidKeyClass;                                           // 0x0360(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    KeyDurabilityCost;                                       // 0x0368(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    KeyDurabilityThreshold;                                  // 0x036C(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FGameplayTag                                        OwnedTargetingTag;                                       // 0x0370(0x0008) Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TWeakObjectPtr<class USceneComponent>                      HitReactAssignedComponent;                               // 0x0378(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FIGStaticInteractableInstanceHitData                CachedHitData;                                           // 0x0380(0x0014) BlueprintVisible, BlueprintReadOnly, NoDestructor, Protected, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_1WTX[0x4];                                   // 0x0394(0x0004) Fix size for supers

	public:
		void InteractableHasBeenHit_BP(bool bWasSuccessfulHit);
		void AssignHitReactComponent(class USceneComponent* SceneComponentHitReact);
		static UClass* StaticClass();
	};

	/**
	 * Class IGActorSystem.IGItemDispenserActor
	 * Size -> 0x0060 (FullSize[0x03F8] - InheritedSize[0x0398])
	 */
	class AIGItemDispenserActor : public AIGStaticInteractableActorHitReact
	{
	public:
		struct FGameplayTag                                        DispenserType;                                           // 0x0398(0x0008) Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UClass*                                              ItemClass;                                               // 0x03A0(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UIGLootProfile*                                      LootProfile;                                             // 0x03A8(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      LaunchVelocity;                                          // 0x03B0(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             LaunchOffset;                                            // 0x03B4(0x000C) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FRotator                                            LaunchRotation;                                          // 0x03C0(0x000C) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FRotator                                            LaunchRotationVariance;                                  // 0x03CC(0x000C) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bRecordStatOnInteraction;                                // 0x03D8(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_TH63[0x3];                                   // 0x03D9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                StatNameToUpdateOnInteraction;                           // 0x03DC(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bAutoEquipDispensedItem;                                 // 0x03E4(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_2SPB[0x3];                                   // 0x03E5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UCapsuleComponent*                                   PingCapsule;                                             // 0x03E8(0x0008) Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                PingCollisionProfileName;                                // 0x03F0(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class IGActorSystem.IGItemDropComplete
	 * Size -> 0x0000 (FullSize[0x0098] - InheritedSize[0x0098])
	 */
	class UIGItemDropComplete : public UIGNotifyStateBase
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class IGActorSystem.IGItemPickupComplete
	 * Size -> 0x0000 (FullSize[0x0098] - InheritedSize[0x0098])
	 */
	class UIGItemPickupComplete : public UIGNotifyStateBase
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class IGActorSystem.IGItemStartInteractComplete
	 * Size -> 0x0008 (FullSize[0x00A0] - InheritedSize[0x0098])
	 */
	class UIGItemStartInteractComplete : public UIGNotifyStateBase
	{
	public:
		bool                                                       bTriggerLocalEffects;                                    // 0x0098(0x0001) Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bTriggerGameplayEffect;                                  // 0x0099(0x0001) Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_PXSF[0x6];                                   // 0x009A(0x0006) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class IGActorSystem.IGItemStashComplete
	 * Size -> 0x0000 (FullSize[0x0098] - InheritedSize[0x0098])
	 */
	class UIGItemStashComplete : public UIGNotifyStateBase
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class IGActorSystem.IGItemStopInteractComplete
	 * Size -> 0x0008 (FullSize[0x00A0] - InheritedSize[0x0098])
	 */
	class UIGItemStopInteractComplete : public UIGNotifyStateBase
	{
	public:
		bool                                                       bTriggerLocalEffects;                                    // 0x0098(0x0001) Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bTriggerGameplayEffect;                                  // 0x0099(0x0001) Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_5NU8[0x6];                                   // 0x009A(0x0006) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class IGActorSystem.IGItemUseNotify
	 * Size -> 0x0008 (FullSize[0x00A0] - InheritedSize[0x0098])
	 */
	class UIGItemUseNotify : public UIGNotifyStateBase
	{
	public:
		bool                                                       bTriggerLocalEffects;                                    // 0x0098(0x0001) Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bTriggerGameplayEffect;                                  // 0x0099(0x0001) Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_D8G7[0x6];                                   // 0x009A(0x0006) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class IGActorSystem.IGJumpData
	 * Size -> 0x0078 (FullSize[0x00A8] - InheritedSize[0x0030])
	 */
	class UIGJumpData : public UDataAsset
	{
	public:
		bool                                                       bHorizontalVelocityOverwrite;                            // 0x0030(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_A0TG[0x3];                                   // 0x0031(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             HorizontalDirection;                                     // 0x0034(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      HorizontalForce;                                         // 0x0040(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MinHorizontalSpeed;                                      // 0x0044(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaxHorizontalSpeed;                                      // 0x0048(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      VerticalForce;                                           // 0x004C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ForwardAirControlDuringStartup;                          // 0x0050(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      RightAirControlDuringStartup;                            // 0x0054(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bRotateToDirectionDuringStartup;                         // 0x0058(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_DSDK[0x3];                                   // 0x0059(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      ForwardAirControl;                                       // 0x005C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      RightAirControl;                                         // 0x0060(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bRotateToDirection;                                      // 0x0064(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_FZSO[0x3];                                   // 0x0065(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      StartupTimeToApplyAirControl;                            // 0x0068(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaxJumpHoldTime;                                         // 0x006C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUseOverrideInAirMaxAcceleration;                        // 0x0070(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_FM9V[0x3];                                   // 0x0071(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      OverrideInAirMaxAcceleration;                            // 0x0074(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UCurveFloat*                                         JumpHoldVelocityCurve;                                   // 0x0078(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    RotationStartTime;                                       // 0x0080(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      RotationAmt;                                             // 0x0084(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    RotaitonDurationMS;                                      // 0x0088(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      StaminaCost;                                             // 0x008C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bOverrideGravity : 1;                                    // 0x0090(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_OJTQ[0x3];                                   // 0x0091(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      GravityScale;                                            // 0x0094(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIgnoreJumpCount;                                        // 0x0098(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bStompZAcceleration;                                     // 0x0099(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_Y2UT[0x2];                                   // 0x009A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    JumpDelayMS;                                             // 0x009C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    JumpDelayRotationRate;                                   // 0x00A0(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIsAllowedToBlock;                                       // 0x00A4(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_Y2M1[0x3];                                   // 0x00A5(0x0003) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class IGActorSystem.IGStatUpdateStateNotify
	 * Size -> 0x0000 (FullSize[0x0098] - InheritedSize[0x0098])
	 */
	class UIGStatUpdateStateNotify : public UIGNotifyStateBase
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class IGActorSystem.IGKeybatFlyDistanceStatNotify
	 * Size -> 0x0010 (FullSize[0x00A8] - InheritedSize[0x0098])
	 */
	class UIGKeybatFlyDistanceStatNotify : public UIGStatUpdateStateNotify
	{
	public:
		unsigned char                                              UnknownData_GZ91[0x10];                                  // 0x0098(0x0010) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class IGActorSystem.IGLedgeUpBoxComponent
	 * Size -> 0x0008 (FullSize[0x0490] - InheritedSize[0x0488])
	 */
	class UIGLedgeUpBoxComponent : public UBoxComponent
	{
	public:
		unsigned char                                              UnknownData_FBWC[0x8];                                   // 0x0488(0x0008) Fix Super Size

	public:
		void OnOverlapBegin(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
		static UClass* StaticClass();
	};

	/**
	 * Class IGActorSystem.IGLedgeUpTriggerVolume
	 * Size -> 0x0000 (FullSize[0x0258] - InheritedSize[0x0258])
	 */
	class AIGLedgeUpTriggerVolume : public ATriggerVolume
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class IGActorSystem.IGLocalActorPoolList
	 * Size -> 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
	 */
	class UIGLocalActorPoolList : public UDataAsset
	{
	public:
		TArray<struct FIGLocalVFXPoolData>                         LocalVFXPool;                                            // 0x0030(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class IGActorSystem.IGLootableModuleMeshComponent
	 * Size -> 0x0020 (FullSize[0x0510] - InheritedSize[0x04F0])
	 */
	class UIGLootableModuleMeshComponent : public UStaticMeshComponent
	{
	public:
		class UStaticMesh*                                         UnlootableMesh;                                          // 0x04F0(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UStaticMesh*                                         LootableMesh;                                            // 0x04F8(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UStaticMesh*                                         LootedMesh;                                              // 0x0500(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EModuleLootState                                           CurrentLootState;                                        // 0x0508(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_KDEN[0x7];                                   // 0x0509(0x0007) MISSED OFFSET (PADDING)

	public:
		void OnLootableStateChanged(EModuleLootState NewLootState);
		void ChangeModuleLootState(EModuleLootState NewLootState);
		static UClass* StaticClass();
	};

	/**
	 * Class IGActorSystem.IGLootGrouping
	 * Size -> 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
	 */
	class UIGLootGrouping : public UDataAsset
	{
	public:
		TArray<struct FIGLootGroupingEntry>                        LootEntries;                                             // 0x0030(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class IGActorSystem.IGLootProfileBase
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	class UIGLootProfileBase : public UDataAsset
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class IGActorSystem.IGSpecialMoveProfile
	 * Size -> 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
	 */
	class UIGSpecialMoveProfile : public UIGLootProfileBase
	{
	public:
		TArray<struct FIGSpeicalMoveDistributionEntry>             MoveEntries;                                             // 0x0030(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class IGActorSystem.IGLootProfile
	 * Size -> 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
	 */
	class UIGLootProfile : public UIGLootProfileBase
	{
	public:
		TArray<struct FIGLootDistributionEntry>                    LootEntries;                                             // 0x0030(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic

	public:
		void GetAllUniqueLootTypes();
		static UClass* StaticClass();
	};

	/**
	 * Class IGActorSystem.IGDisperseLootChanceTable
	 * Size -> 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
	 */
	class UIGDisperseLootChanceTable : public UDataAsset
	{
	public:
		TArray<struct FIGDisperseLootChanceEntry>                  ChanceEntries;                                           // 0x0030(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class IGActorSystem.IGCollectibleProfile
	 * Size -> 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
	 */
	class UIGCollectibleProfile : public UIGLootProfileBase
	{
	public:
		TArray<struct FIGCollectibleDistributionEntry>             CollectibleEntries;                                      // 0x0030(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class IGActorSystem.IGMatchTimeLootSelectionProfile
	 * Size -> 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
	 */
	class UIGMatchTimeLootSelectionProfile : public UDataAsset
	{
	public:
		TArray<struct FIGMatchTimeLootCollection>                  LootCollections;                                         // 0x0030(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class IGActorSystem.IGLootManagerComponent
	 * Size -> 0x00F0 (FullSize[0x01A0] - InheritedSize[0x00B0])
	 */
	class UIGLootManagerComponent : public UActorComponent
	{
	public:
		TArray<class UIGLootProfileBase*>                          PrecachedLootProfile;                                    // 0x00B0(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		class UIGSpecialMoveProfile*                               DefaultMasterSpeicalMoveProfile;                         // 0x00C0(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    NumberOfActorsToProcessPerFrame;                         // 0x00C8(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      UnreachableDistanceOutsideRing;                          // 0x00CC(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UIGDynamicObjCluster*                                DynamicLootCluster;                                      // 0x00D0(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_5QHP[0x4];                                   // 0x00D8(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		bool                                                       bIsModifierLinear;                                       // 0x00DC(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_18B6[0x3];                                   // 0x00DD(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      LinearModifierStartProbability;                          // 0x00E0(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      LinearModifierIncrement;                                 // 0x00E4(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FIGLootProbabilityEntry>                     ProbabilityEntries;                                      // 0x00E8(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_NAC1[0xA8];                                  // 0x00F8(0x00A8) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class IGActorSystem.IGRollableLootActor
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UIGRollableLootActor : public UInterface
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class IGActorSystem.IGLootSpawner
	 * Size -> 0x0030 (FullSize[0x0250] - InheritedSize[0x0220])
	 */
	class AIGLootSpawner : public AActor
	{
	public:
		unsigned char                                              UnknownData_LCDG[0x8];                                   // 0x0220(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UIGLootProfile*                                      LootProfile;                                             // 0x0228(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      AdditionalHeightClearance;                               // 0x0230(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      SpawnTimer;                                              // 0x0234(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bSpawnAfterWarning;                                      // 0x0238(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EIGSpawnerState                                            RepSpawnerState;                                         // 0x0239(0x0001) Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		EIGSpawnerState                                            LocalSpawnerState;                                       // 0x023A(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_I3Y3[0xD];                                   // 0x023B(0x000D) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TWeakObjectPtr<class AIGInteractablePickup>                SelectedSpawnedItem;                                     // 0x0248(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected

	public:
		void SpawnTimerComplete();
		void OnRep_SpawnStateChanged();
		void HandleSpawnerStateChanged_BP(EIGSpawnerState PreviousState, EIGSpawnerState NewState);
		static UClass* StaticClass();
	};

	/**
	 * Class IGActorSystem.IGModUtils
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UIGModUtils : public UObject
	{
	public:
		void RemoveIntMod(struct FIGModValueInt* InVal, const struct FIGModStackInt& ModToApply);
		void RemoveFloatMod(struct FIGModValueFloat* InVal, const struct FIGModStackFloat& ModToApply);
		int32_t GetIntMod(const struct FIGModValueInt& InVal);
		float GetFloatMod(const struct FIGModValueFloat& InVal);
		void ApplyIntMod(struct FIGModValueInt* InVal, const struct FIGModStackInt& ModToApply);
		void ApplyFloatMod(struct FIGModValueFloat* InVal, const struct FIGModStackFloat& ModToApply);
		static UClass* StaticClass();
	};

	/**
	 * Class IGActorSystem.IGMoveDisplacementState
	 * Size -> 0x0060 (FullSize[0x00F8] - InheritedSize[0x0098])
	 */
	class UIGMoveDisplacementState : public UIGNotifyStateBase
	{
	public:
		ERootMotionAccumulateMode                                  AccumulateMode;                                          // 0x0098(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		ERootMotionFinishVelocityMode                              FinishVelocityMode;                                      // 0x0099(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_L4QZ[0x2];                                   // 0x009A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             FinishVelocitySet;                                       // 0x009C(0x000C) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      FinishVelocityClamp;                                     // 0x00A8(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FVector                                             Velocity;                                                // 0x00AC(0x000C) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FVector                                             Acceleration;                                            // 0x00B8(0x000C) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      Friction;                                                // 0x00C4(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       ApplySpeedModifiers;                                     // 0x00C8(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bUseMaxSpeed;                                            // 0x00C9(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_L3AD[0x2];                                   // 0x00CA(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      MaxSpeed;                                                // 0x00CC(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bUseVelocityClamp;                                       // 0x00D0(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_9KFX[0x3];                                   // 0x00D1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             VelocityClamp;                                           // 0x00D4(0x000C) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_H606[0x18];                                  // 0x00E0(0x0018) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class IGActorSystem.IGMovementInterruptState
	 * Size -> 0x0008 (FullSize[0x00A0] - InheritedSize[0x0098])
	 */
	class UIGMovementInterruptState : public UIGNotifyStateBase
	{
	public:
		bool                                                       bAllowTransitionBeforeContact;                           // 0x0098(0x0001) Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bAllowTransitionAfterBlocked;                            // 0x0099(0x0001) Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bAllowTransitionAfterHit;                                // 0x009A(0x0001) Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_BA3B[0x5];                                   // 0x009B(0x0005) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class IGActorSystem.IGMoveMontage
	 * Size -> 0x0200 (FullSize[0x03D8] - InheritedSize[0x01D8])
	 */
	class UIGMoveMontage : public UAnimMontage
	{
	public:
		unsigned char                                              UnknownData_XGIP[0x8];                                   // 0x01D8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FDataTableRowHandle                                 UIData;                                                  // 0x01E0(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic
		EIGMoveType                                                MoveType;                                                // 0x01F0(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_HDSC[0x7];                                   // 0x01F1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TMap<EMoveTier, EIGMoveType>                               TierToMoveTypeOverride;                                  // 0x01F8(0x0050) Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic
		EIGClashPriorityTier                                       ClashPriorityTier;                                       // 0x0248(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_6WBV[0x7];                                   // 0x0249(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TMap<EMoveTier, EIGClashPriorityTier>                      TierToClashPriorityOverride;                             // 0x0250(0x0050) Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic
		EIGCameraBehavior                                          CameraBehavior;                                          // 0x02A0(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EIGBodyType                                                DisplayBodyType;                                         // 0x02A1(0x0001) Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EIGReactionEndLocationType                                 ReactionEndLocation;                                     // 0x02A2(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_AF9Z[0x1];                                   // 0x02A3(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    WeaponDropTypes;                                         // 0x02A4(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bAllowMovementInput;                                     // 0x02A8(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_BRO1[0x3];                                   // 0x02A9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      MovementInputSpeedMultiplier;                            // 0x02AC(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bEnableAnimationRootMotion;                              // 0x02B0(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bClearJumpDataOnExecute;                                 // 0x02B1(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_HB41[0x2];                                   // 0x02B2(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      MaxInputRotationAllowed;                                 // 0x02B4(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      StaminaRequired;                                         // 0x02B8(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      StaminaRequiredTier2;                                    // 0x02BC(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      StaminaRequiredTier3;                                    // 0x02C0(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      FameRequired;                                            // 0x02C4(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UIGMovesetEventTransitions*                          EventTransitionDefinition;                               // 0x02C8(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bShouldResetAirMaxima;                                   // 0x02D0(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIsLandingMove;                                          // 0x02D1(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bShouldResetDelayedAoE;                                  // 0x02D2(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bShouldRetainPreviousTarget;                             // 0x02D3(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bShouldRetainPreviousTargetUnlessDead;                   // 0x02D4(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bShouldRetainPreviousAttackCancelStatus;                 // 0x02D5(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bShouldClearComboLimit;                                  // 0x02D6(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_27CU[0x1];                                   // 0x02D7(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UIGMoveMontage*                                      GrappleReactionAnim;                                     // 0x02D8(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bVulnerableToPinning;                                    // 0x02E0(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bDoesFallDamage;                                         // 0x02E1(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_EFQE[0x6];                                   // 0x02E2(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FGameplayTagContainer                               MoveTags;                                                // 0x02E8(0x0020) Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic
		bool                                                       bApplyBlockData;                                         // 0x0308(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_F6ZN[0x7];                                   // 0x0309(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FIGDamageBlockData                                  BlockData;                                               // 0x0310(0x0028) Edit, NoDestructor, NativeAccessSpecifierPublic
		int32_t                                                    LaunchLimitOverride;                                     // 0x0338(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bOverrideFallType;                                       // 0x033C(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EFallingType                                               FallingTypeOverride;                                     // 0x033D(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       ShouldCountout;                                          // 0x033E(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bOverrideAnimationsDirty;                                // 0x033F(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UIGBodyTypeAnimationOverrideAsset*                   BodyTypeOverrideAsset;                                   // 0x0340(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		TMap<EIGBodyType, struct FIGSlotAnimationTrackList>        BodyTypeOverrideMap;                                     // 0x0348(0x0050) Protected, NativeAccessSpecifierProtected
		TArray<struct FAnimNotifyEvent>                            SortedGameplayNotifies;                                  // 0x0398(0x0010) ZeroConstructor, Transient, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected
		struct FIGSimpleMoveMontageData                            SimpleMoveMontageData;                                   // 0x03A8(0x0030) BlueprintVisible, BlueprintReadOnly, Protected, NativeAccessSpecifierProtected

	public:
		struct FIGSimpleMoveMontageData GetSimpleMoveMontageData();
		static UClass* StaticClass();
	};

	/**
	 * Class IGActorSystem.IGMovesetComponent
	 * Size -> 0x03C0 (FullSize[0x0470] - InheritedSize[0x00B0])
	 */
	class UIGMovesetComponent : public UActorComponent
	{
	public:
		int32_t                                                    CurrentTimeMS;                                           // 0x00B0(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    BufferSize;                                              // 0x00B4(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      InputDirectionMinAxisMag;                                // 0x00B8(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MovementCancelMinAxisMag;                                // 0x00BC(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UIGMovesetData*                                      BaseMoveData;                                            // 0x00C0(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UIGMovesetData*                                      WeaponMoveData;                                          // 0x00C8(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UIGMovesetData*                                      ItemTossData;                                            // 0x00D0(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    BaseMoveDataBacktickCheck;                               // 0x00D8(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    ContextActionsBacktickCheck;                             // 0x00DC(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    AimThrowBacktickCheck;                                   // 0x00E0(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_BN5G[0x4];                                   // 0x00E4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UIGMovesetSpecial*                                   SpecialMoveData;                                         // 0x00E8(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FIGSpecialMoveRepData                               SpecialOneRepData;                                       // 0x00F0(0x0010) Edit, BlueprintVisible, Net, RepNotify, NoDestructor, NativeAccessSpecifierPublic
		struct FIGSpecialMoveRepData                               SpecialTwoRepData;                                       // 0x0100(0x0010) Edit, BlueprintVisible, Net, RepNotify, NoDestructor, NativeAccessSpecifierPublic
		class UIGMoveMontage*                                      BlockMove;                                               // 0x0110(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UIGMoveMontage*                                      AirBlockMove;                                            // 0x0118(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TMap<EIGWeaponType, class UIGMoveMontage*>                 AirBlockMoveOverrides;                                   // 0x0120(0x0050) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		TMap<EIGWeaponType, class UIGMoveMontage*>                 BlockMoveOverrides;                                      // 0x0170(0x0050) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		class UIGCombatContextData*                                CombatContextData;                                       // 0x01C0(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    WeaponAimPressLookback;                                  // 0x01C8(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_EDD5[0xAC];                                  // 0x01CC(0x00AC) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    MoveTrackHoldBitflag;                                    // 0x0278(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EMoveTrack                                                 LastConfirmedMoveTrack;                                  // 0x027C(0x0001) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       AllowMovementInterrupt;                                  // 0x027D(0x0001) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_595X[0x6];                                   // 0x027E(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      JumpingMoveActivationDelay;                              // 0x0284(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UIGMoveMontage*                                      QueuedMoveTransition;                                    // 0x0288(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_9FQM[0x8];                                   // 0x0290(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FIGMoveStack>                                MoveTransitions;                                         // 0x0298(0x0010) ZeroConstructor, Protected, NativeAccessSpecifierProtected
		TArray<struct FIGInputBufferEntry>                         InputBuffer;                                             // 0x02A8(0x0010) ZeroConstructor, Protected, NativeAccessSpecifierProtected
		TArray<struct FIGGenTransitionEvent>                       CharacterTransitions;                                    // 0x02B8(0x0010) ZeroConstructor, Protected, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_0EIV[0x10];                                  // 0x02C8(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FIGMoveMontageDriver                                MoveMontageDriver;                                       // 0x02D8(0x0198) Transient, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected

	public:
		void SetSpecialTwo(class UIGMoveMontage* InSpecialTwo, EMoveTier InTier);
		void SetSpecialOne(class UIGMoveMontage* InSpecialOne, EMoveTier InTier);
		void SetNextSpecialSlot(class UIGMoveMontage* InSpecial);
		void ResetCharacterTransition(class UIGGenericInputEvent* InEvent, int32_t AdditionalDurationMS);
		void RemoveCharacterTransition(class UIGGenericInputEvent* InEvent);
		void RecordInput(EMoveTrack RequestedTrack, EInputEvent EventType, EMoveInputDirection InputDirection);
		void PrepareForNewTransition(class UIGMoveMontage* NewMontage);
		void PopMoveTransitions(const class FName& MovesetDataName, int32_t DelayMS);
		void OnRep_SpecialTwo();
		void OnRep_SpecialOne();
		void ObtainPerk();
		bool IsInCombo();
		bool IsHolding(EMoveTrack TestedTrack);
		EMoveTier GetSpecialTwoTier();
		class UIGMoveMontage* GetSpecialTwo();
		EMoveTier GetSpecialOneTier();
		class UIGMoveMontage* GetSpecialOne();
		class FName GetSpecialMovesetName();
		int32_t GetOldestTimestamp();
		class FName GetAimingContextname();
		void ClearCharacterTransitions();
		void ClearAllPendingInputs();
		int32_t CharacterTransitionsInTrack(EMoveTrack InTrack);
		void AddCharacterTransition(class UIGGenericInputEvent* InEvent, int32_t AdditionalDurationMS);
		static UClass* StaticClass();
	};

	/**
	 * Class IGActorSystem.IGMovesetEventTransitions
	 * Size -> 0x0050 (FullSize[0x0080] - InheritedSize[0x0030])
	 */
	class UIGMovesetEventTransitions : public UDataAsset
	{
	public:
		TMap<EMoveTransitionEvents, class UIGMoveMontage*>         MoveEventTransitions;                                    // 0x0030(0x0050) Edit, BlueprintVisible, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class IGActorSystem.IGMovesetData
	 * Size -> 0x0078 (FullSize[0x00A8] - InheritedSize[0x0030])
	 */
	class UIGMovesetData : public UDataAsset
	{
	public:
		unsigned char                                              UnknownData_77F9[0x8];                                   // 0x0030(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TMap<EMoveTrack, struct FIGTransitionContainer>            MovesAndConditions;                                      // 0x0038(0x0050) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		TArray<EMoveTrack>                                         TrackCache;                                              // 0x0088(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FIGBotComboString>                           CachedComboStrings;                                      // 0x0098(0x0010) ZeroConstructor, NativeAccessSpecifierPrivate

	public:
		bool GetComboStrings(TArray<struct FIGBotComboString>* OutComboStrings, ECharacterLocomotionState StartingState);
		static UClass* StaticClass();
	};

	/**
	 * Class IGActorSystem.IGMovesetSpecial
	 * Size -> 0x00B8 (FullSize[0x00E0] - InheritedSize[0x0028])
	 */
	class UIGMovesetSpecial : public UObject
	{
	public:
		unsigned char                                              UnknownData_CW6V[0x8];                                   // 0x0028(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TMap<EMoveTrack, struct FIGTransitionContainer>            MovesAndConditions;                                      // 0x0030(0x0050) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		TMap<EMoveTrack, EMoveTier>                                SpecialTiers;                                            // 0x0080(0x0050) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		TArray<EMoveTrack>                                         TrackCache;                                              // 0x00D0(0x0010) ZeroConstructor, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class IGActorSystem.IGMoveTargetDisplacementState
	 * Size -> 0x0048 (FullSize[0x00E0] - InheritedSize[0x0098])
	 */
	class UIGMoveTargetDisplacementState : public UIGNotifyStateBase
	{
	public:
		ERootMotionFinishVelocityMode                              FinishVelocityMode;                                      // 0x0098(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_T29T[0x3];                                   // 0x0099(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             FinishVelocitySet;                                       // 0x009C(0x000C) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      FinishVelocityClamp;                                     // 0x00A8(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bRestrictSpeedToExpected;                                // 0x00AC(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bNoZForce;                                               // 0x00AD(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bUseTargetFacingOffset;                                  // 0x00AE(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_N0CK[0x1];                                   // 0x00AF(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             TargetOffset;                                            // 0x00B0(0x000C) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_9FH4[0x4];                                   // 0x00BC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UCurveVector*                                        PathOffsetCurve;                                         // 0x00C0(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UCurveFloat*                                         TimeMappingCurve;                                        // 0x00C8(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		EEasingFunc                                                EasingFunction;                                          // 0x00D0(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_5GQT[0xF];                                   // 0x00D1(0x000F) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class IGActorSystem.IGMoveTransitionWindow
	 * Size -> 0x0040 (FullSize[0x00D8] - InheritedSize[0x0098])
	 */
	class UIGMoveTransitionWindow : public UIGNotifyStateBase
	{
	public:
		bool                                                       bAllowTransitionBeforeContact;                           // 0x0098(0x0001) Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bAllowTransitionAfterBlocked;                            // 0x0099(0x0001) Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bAllowTransitionAfterHit;                                // 0x009A(0x0001) Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_B6WY[0x5];                                   // 0x009B(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UIGMovesetData*                                      MoveTransitionData;                                      // 0x00A0(0x0008) Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UIGMovesetData*                                      SuperstarMoveTransitionData;                             // 0x00A8(0x0008) Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		int32_t                                                    LookbackMS;                                              // 0x00B0(0x0004) Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		int32_t                                                    TransitionCloseDelayMS;                                  // 0x00B4(0x0004) Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bTransitionMaintainsTier;                                // 0x00B8(0x0001) Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bCheckVerticalVelocity;                                  // 0x00B9(0x0001) Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_Z7P6[0x2];                                   // 0x00BA(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      VerticalVelocityThreshold;                               // 0x00BC(0x0004) Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bVerticalCheckLessThan;                                  // 0x00C0(0x0001) Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bCheckHorizontalVelocity;                                // 0x00C1(0x0001) Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_XWM4[0x2];                                   // 0x00C2(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      HorizontalVelocityThreshold;                             // 0x00C4(0x0004) Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bHorizontalCheckLessThan;                                // 0x00C8(0x0001) Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_90SK[0x3];                                   // 0x00C9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                BroadcastTransitionEvent;                                // 0x00CC(0x0008) Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_SIJU[0x4];                                   // 0x00D4(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class IGActorSystem.IGMoveTransitionOnLocomotionState
	 * Size -> 0x0010 (FullSize[0x00A8] - InheritedSize[0x0098])
	 */
	class UIGMoveTransitionOnLocomotionState : public UIGNotifyStateBase
	{
	public:
		ECharacterLocomotionState                                  LocationRequirement;                                     // 0x0098(0x0001) Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_KBAI[0x7];                                   // 0x0099(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UIGMoveMontage*                                      TransitionMontage;                                       // 0x00A0(0x0008) Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class IGActorSystem.IGMoveTransitionOnStaminaState
	 * Size -> 0x0010 (FullSize[0x00A8] - InheritedSize[0x0098])
	 */
	class UIGMoveTransitionOnStaminaState : public UIGNotifyStateBase
	{
	public:
		float                                                      StaminaThreshold;                                        // 0x0098(0x0004) Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_090S[0x4];                                   // 0x009C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UIGMoveMontage*                                      TransitionMontage;                                       // 0x00A0(0x0008) Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class IGActorSystem.IGMoveTransitionOnTargetState
	 * Size -> 0x0020 (FullSize[0x00B8] - InheritedSize[0x0098])
	 */
	class UIGMoveTransitionOnTargetState : public UIGNotifyStateBase
	{
	public:
		bool                                                       bTransitionOnTargetMontageMismatch;                      // 0x0098(0x0001) Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_8F94[0x7];                                   // 0x0099(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UIGMoveMontage*>                              MontagesToCompare;                                       // 0x00A0(0x0010) Edit, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic
		class UIGMoveMontage*                                      TransitionMontage;                                       // 0x00B0(0x0008) Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class IGActorSystem.IGTargetable
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UIGTargetable : public UInterface
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class IGActorSystem.IGCombatContextData
	 * Size -> 0x0050 (FullSize[0x0080] - InheritedSize[0x0030])
	 */
	class UIGCombatContextData : public UDataAsset
	{
	public:
		TMap<class FName, struct FIGCombatContextConditionsContainer> CombatContextConditions;                                 // 0x0030(0x0050) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class IGActorSystem.IGPingable
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UIGPingable : public UInterface
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class IGActorSystem.IGOverrideFallDamageNotifyState
	 * Size -> 0x0008 (FullSize[0x00A0] - InheritedSize[0x0098])
	 */
	class UIGOverrideFallDamageNotifyState : public UIGNotifyStateBase
	{
	public:
		class UIGHitData*                                          OverrideHitData;                                         // 0x0098(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class IGActorSystem.IGOverrideLocomotionState
	 * Size -> 0x0008 (FullSize[0x00A0] - InheritedSize[0x0098])
	 */
	class UIGOverrideLocomotionState : public UIGNotifyStateBase
	{
	public:
		ECharacterLocomotionState                                  OverrideState;                                           // 0x0098(0x0001) Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_PU1L[0x7];                                   // 0x0099(0x0007) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class IGActorSystem.IGPauseSuperstarPassives
	 * Size -> 0x0008 (FullSize[0x00A0] - InheritedSize[0x0098])
	 */
	class UIGPauseSuperstarPassives : public UIGNotifyStateBase
	{
	public:
		bool                                                       bPauseFameDrain;                                         // 0x0098(0x0001) Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bPauseHealthRegen;                                       // 0x0099(0x0001) Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ENYY[0x6];                                   // 0x009A(0x0006) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class IGActorSystem.IGPlayerController
	 * Size -> 0x00D8 (FullSize[0x0648] - InheritedSize[0x0570])
	 */
	class AIGPlayerController : public APlayerController
	{
	public:
		class UIGEmoteHandlerComponent*                            EmoteHandler;                                            // 0x0570(0x0008) Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UIGGameInfo*                                         IGGameInfo;                                              // 0x0578(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ONHC[0x8];                                   // 0x0580(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              PlayerNameFollowing;                                     // 0x0588(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      RelativeYawClamp;                                        // 0x0598(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_97CH[0x4];                                   // 0x059C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AIGPlayerState*                                      PlayerStateFollowing;                                    // 0x05A0(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUsingFollowPlayerView;                                  // 0x05A8(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_9OCO[0x7];                                   // 0x05A9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnPerformSpecialMoveEquipChoice;                         // 0x05B0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnSpecialMoveConsumableConsumed;                         // 0x05C0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		float                                                      TimeDiscrepancy;                                         // 0x05D0(0x0004) Net, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      LifetimeRawTimeDiscrepancy;                              // 0x05D4(0x0004) Net, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UIGActorPool*                                        LocalActorPool;                                          // 0x05D8(0x0008) Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UIGLocalActorPoolList*                               LocallyPooledActors;                                     // 0x05E0(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		TArray<struct FSimultaneousPressConfiguration>             SimultaneousPressConfig;                                 // 0x05E8(0x0010) Edit, ZeroConstructor, Protected, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_UYK4[0x8];                                   // 0x05F8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UIGSpecialMoveConsumer*                              SpecialMoveConsumerComponent;                            // 0x0600(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_0CW3[0x40];                                  // 0x0608(0x0040) MISSED OFFSET (PADDING)

	public:
		void ToggleStaminaRegen();
		void ToggleSpectatorMode(bool bShouldSpectate);
		void ToggleShowFameValue();
		void ToggleScriptedNetPlayerWaypoints(const class FString& TargetTag);
		void TakeAPerk();
		void TagMe(const class FName& NameTag);
		void StopSpecialMoveConsumableLoopAnimation();
		void StopReading();
		void StopAllScriptedPlayers();
		void SetHUDToSpectatorState();
		void SetAllToFollowMe();
		void ServerTagMe(const class FName& NameTag);
		void ServerSpawnBots(const class FString& Params, int32_t Count, const struct FVector& SpawnPos, int32_t TeamSize);
		void ServerSetViewTarget(class APlayerState* NewTarget);
		void ServerRescueMe();
		void ServerRequestServerTime(class APlayerController* requester, float requestWorldTime);
		void ServerRequestReplicateServerStats(bool bShouldReplicate);
		void ServerRequestLevelRestart();
		void ServerRequestChangeState(const class FName& NewState);
		void ServerReplicateStats(bool bShouldReplicate);
		void ServerKillMe();
		void ServerExecuteCmd(const class FString& Cmd);
		void ServerDestroyBot();
		void ServerDebugToggleStaminaRegen();
		void ServerDebugSpawnRandomItem();
		void ServerDebugSpawnItem(class UClass* InteractableType);
		void ServerDebugSpawnAllCoinSplines();
		void ServerDebugSetStamina(float TargetStamina);
		void ServerDebugSetPlayerSizeModifier(float Modifier);
		void ServerDebugSetHealth(float TargetHealth);
		void ServerDebugSetFame(float TargetFame);
		void ServerDebugRerollLoots();
		void ServerDebugInitializeLootTableDummies();
		void ServerDebugAddPerkXP(float PerkXPAmount);
		void ServerCleanUpAllPooledActor();
		void ServerAckedGuidSync();
		void RescueMe();
		void RequestSpawnBotWithTree(const class FString& BehaviorTreeName);
		void RequestSpawnBotTeams(const class FString& ProfileName, int32_t TeamSize, int32_t TeamCount);
		void RequestSpawnBotsWithTree(const class FString& BehaviorTreeName, int32_t Count);
		void RequestSpawnBots(const class FString& ProfileName, int32_t Count);
		void RequestSpawnBot(const class FString& ProfileName);
		void RequestLevelRestart();
		void RequestDestroyBot();
		void KillMe();
		void HandleOnClientIsAimingCannonChanged(bool IsAimingCannon);
		class UIGActorPool* GetLocalActorPool();
		void ExecVanishAllCoins();
		void ExecSpawnRandomItem();
		void ExecSpawnAllCoinSplines();
		void ExecShowLockedCrateRadar(bool bShouldShow);
		void ExecShowDamageDebug(bool bShouldShow);
		void ExecSetStamina(float TargetStamina);
		void ExecSetPlayerSizeModifier(float Modifier);
		void ExecSetHealth(float TargetHealth);
		void ExecSetFame(float TargetFame);
		void ExecSetCombatMode(bool IsInCombatMode);
		void ExecRerollLoots();
		void ExecLogIfTeammateIsNetRelevant();
		void ExecInitializeLootTableDummies();
		void ExecEnableFame(bool bEnabled);
		void ExecDropMagazines(bool bDrop);
		void ExecCleanUpAllPooledActor();
		void ExecAddPerkXP(float PerkXPAmount);
		void DownTeammate();
		void ClientStopScriptedNetPlayer();
		void ClientSetScriptedNetPlayerWaypoints(const class FString& TargetTag);
		void ClientSetScriptedNetPlayerToFollow(class AIGCharacter* FollowCharacter);
		void ClientRequestAckOfGuidSync();
		void ClientReportServerTime(float requestWorldTime, float serverTime);
		void ClientPerformSpecialMoveEquipChoice(class UIGMoveMontage* MoveMontage, EMoveTier SpecialTier);
		void ClientForceExit();
		void ClearPendingCombatInput();
		void ChangeCombatContextBehavior(const class FName& ContextName, int32_t Behavior);
		void ChangeAutoChargeReleaseBehavior(const class FName& ContextName, bool bShouldTurnOn);
		void BroadcastOnSpecialMoveConsumableConsumed();
		void AssignMoveToEquipToSlotTwo();
		void AssignMoveToEquipToSlotOne();
		static UClass* StaticClass();
	};

	/**
	 * Class IGActorSystem.IGPlayerData
	 * Size -> 0x0028 (FullSize[0x0050] - InheritedSize[0x0028])
	 */
	class UIGPlayerData : public UObject
	{
	public:
		unsigned char                                              UnknownData_6N2G[0x28];                                  // 0x0028(0x0028) MISSED OFFSET (PADDING)

	public:
		bool TryGetStringJsonValue(const class FString& ValueName, class FString* OutValue);
		bool TryGetIntJsonValue(const class FString& ValueName, int32_t* OutValue);
		bool TryGetFloatJsonValue(const class FString& ValueName, float* OutValue);
		bool TryGetBoolJsonValue(const class FString& ValueName, bool* OutValue);
		bool SetStringJsonValue(const class FString& ValueName, const class FString& Value);
		bool SetIntJsonValue(const class FString& ValueName, int32_t Value);
		bool SetFloatJsonValue(const class FString& ValueName, float Value);
		bool SetBoolJsonValue(const class FString& ValueName, bool Value);
		void LogJsonData();
		bool IsJsonDataInitialized();
		static UClass* StaticClass();
	};

	/**
	 * Class IGActorSystem.IGPlayerState
	 * Size -> 0x00D8 (FullSize[0x03F8] - InheritedSize[0x0320])
	 */
	class AIGPlayerState : public APlayerState
	{
	public:
		class FScriptMulticastDelegate                             OnTeamLeaderUpdated;                                     // 0x0320(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_4CR8[0x5C];                                  // 0x0330(0x005C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FGuid                                               TeamID;                                                  // 0x038C(0x0010) Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       bIsTeamLeader;                                           // 0x039C(0x0001) Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_CR0E[0x3];                                   // 0x039D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    PartyMemberID;                                           // 0x03A0(0x0004) Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       bIsLowHealth;                                            // 0x03A4(0x0001) Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       bIsInCombat;                                             // 0x03A5(0x0001) Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_9NBP[0x52];                                  // 0x03A6(0x0052) MISSED OFFSET (PADDING)

	public:
		void UpdateKillerPlayerState(class APlayerState* KillerPlayerState);
		void OnTeamLeaderUpdated__DelegateSignature(bool bIsTeamLeader);
		void OnRep_TeamID();
		void OnRep_IsTeamLeader();
		void OnRep_IsLowHealth();
		void OnRep_IsInCombat();
		bool IsTeamLeader();
		bool IsLocalPlayerState();
		bool HasLaunchControl();
		void HandleOnTeammateLeftServer(class AIGPlayerState* ExitingTeammate);
		void HandleOnTeammateDied(class AIGPlayerState* TeammatePlayerState);
		void HandleOnTeammateCannonLanded(class AIGPlayerState* TeammatePlayerState);
		void HandleOnTeammateAdded(class AIGPlayerState* TeammatePlayerState);
		void GetTeamInfoForPlayerState(struct FTeamInfo* OutTeamInfo);
		struct FGuid GetTeamID();
		class UIGStatsSystem* GetStatsSystem();
		int32_t GetPartyMemberID();
		void ClientUpdateAchievement(EIGAchievement Achievement, int32_t NewProgress, EIGAchievementStatProgressionType ProgressionType);
		void ClientSetEOSLobbyId(const class FString& InEOSLobbyId);
		void Client_DumpServerTrackedStatsStoredOnClient();
		static UClass* StaticClass();
	};

	/**
	 * Class IGActorSystem.IGPooledActor
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UIGPooledActor : public UInterface
	{
	public:
		void OnReturnedToPool();
		void OnRemovedFromPool();
		static UClass* StaticClass();
	};

	/**
	 * Class IGActorSystem.IGPoseSpotActor
	 * Size -> 0x0168 (FullSize[0x0388] - InheritedSize[0x0220])
	 */
	class AIGPoseSpotActor : public AActor
	{
	public:
		unsigned char                                              UnknownData_WYQG[0x10];                                  // 0x0220(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		EIGPoseSpotActorState                                      RepPoseSpotActorState;                                   // 0x0230(0x0001) BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		EIGPoseSpotActorState                                      LocalPoseSpotActorState;                                 // 0x0231(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_PH1X[0x6];                                   // 0x0232(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              PerfectEmotes[0x50];                                     // 0x0238(0x0050) UNKNOWN PROPERTY: SetProperty
		float                                                      ActivatedDuration;                                       // 0x0288(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      RewardDelay;                                             // 0x028C(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      CooldownDuration;                                        // 0x0290(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bHasActivatingCharacters;                                // 0x0294(0x0001) BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_8EEO[0x3];                                   // 0x0295(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    ItemsToSpawn;                                            // 0x0298(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_Y3P6[0x4];                                   // 0x029C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UIGLootProfile*                                      LootProfile;                                             // 0x02A0(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		int32_t                                                    CollectiblesToSpawn;                                     // 0x02A8(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_U3J9[0x4];                                   // 0x02AC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UIGCollectibleProfile*                               CollectibleProfile;                                      // 0x02B0(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FVector                                             LaunchOffset;                                            // 0x02B8(0x000C) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FVector2D                                           SpawnItemVerticalSpeed;                                  // 0x02C4(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FVector2D                                           SpawnItemHorizontalSpeed;                                // 0x02CC(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_EHCP[0x4];                                   // 0x02D4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UDataTable*                                          EmotesTable;                                             // 0x02D8(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class USceneComponent*                                     ActorRootComponent;                                      // 0x02E0(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UBoxComponent*                                       OverlapVolume;                                           // 0x02E8(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UCapsuleComponent*                                   PingCapsule;                                             // 0x02F0(0x0008) Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class FName                                                PingCollisionProfileName;                                // 0x02F8(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		TWeakObjectPtr<class AIGCharacter>                         ActivatingCharacter;                                     // 0x0300(0x0008) Net, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_9K87[0x80];                                  // 0x0308(0x0080) MISSED OFFSET (PADDING)

	public:
		void UpdatePoseSpotHighlight_BP(float PlayerDistance, bool IsInRange);
		void SetInitialState();
		void OnRep_PoseSpotActorStateChanged();
		void OnRep_HasActivatingCharactersChanged();
		void OnOverlapEnd(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex);
		void OnOverlapBegin(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
		void OnMontageStarted(class UAnimMontage* Montage, class AIGCharacter* Char);
		void HandlePoseSpotActorStateChanged_BP(EIGPoseSpotActorState PreviousState, EIGPoseSpotActorState NewState);
		void HandleHasCharactersOnPoseSpot_BP(bool HasCharactersOnPoseSpot);
		EIGPoseSpotActorState GetPoseSpotActorState();
		void CooldownStateOnTimerFinished();
		void CompletedStateOnTimerFinished();
		void ActivatedStateOnTimerFinished();
		void ActivatedStateOnMontageEnded(class UAnimMontage* Montage, bool bInterrupted);
		static UClass* StaticClass();
	};

	/**
	 * Class IGActorSystem.IGPoseSpotDetectComponent
	 * Size -> 0x0010 (FullSize[0x0490] - InheritedSize[0x0480])
	 */
	class UIGPoseSpotDetectComponent : public USphereComponent
	{
	public:
		class AIGPoseSpotActor*                                    Posespot;                                                // 0x0480(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class AIGCharacter*                                        LocallyControlledCharacter;                              // 0x0488(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected

	public:
		void OnOverlapEnd(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex);
		void OnOverlapBegin(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
		static UClass* StaticClass();
	};

	/**
	 * Class IGActorSystem.IGPostProcessAnimInstance
	 * Size -> 0x10E8 (FullSize[0x13A0] - InheritedSize[0x02B8])
	 */
	class UIGPostProcessAnimInstance : public UAnimInstance
	{
	public:
		unsigned char                                              UnknownData_TVVP[0x8];                                   // 0x02B8(0x0008) Fix Super Size
		unsigned char                                              UnknownData_FX0I[0x34];                                  // 0x02C0(0x0034) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		bool                                                       bEnableIGFootIKSolution;                                 // 0x02F4(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bEnableIGClimbingIKSolution;                             // 0x02F5(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_6UG3[0xA];                                   // 0x02F6(0x000A) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                LeftThighBoneName;                                       // 0x0300(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                LeftCalfBoneName;                                        // 0x0308(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                LeftFootBoneName;                                        // 0x0310(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                RightThighBoneName;                                      // 0x0318(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                RightCalfBoneName;                                       // 0x0320(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                RightFootBoneName;                                       // 0x0328(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                LeftArmBoneName;                                         // 0x0330(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                LeftElbowBoneName;                                       // 0x0338(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                LeftHandBoneName;                                        // 0x0340(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                RightArmBoneName;                                        // 0x0348(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                RightElbowBoneName;                                      // 0x0350(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                RightHandBoneName;                                       // 0x0358(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                LeftIKThighBoneName;                                     // 0x0360(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                LeftIKFootBoneName;                                      // 0x0368(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                RightIKThighBoneName;                                    // 0x0370(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                RightIKFootBoneName;                                     // 0x0378(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                LeftIKArmBoneName;                                       // 0x0380(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                LeftIKHandBoneName;                                      // 0x0388(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                RightIKArmBoneName;                                      // 0x0390(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                RightIKHandBoneName;                                     // 0x0398(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                PelvisBoneName;                                          // 0x03A0(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                PelvisIKBoneName;                                        // 0x03A8(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                CIK_TorsoSocketName;                                     // 0x03B0(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                FlexyLeftElbow01BoneName;                                // 0x03B8(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                FlexyLeftElbow02BoneName;                                // 0x03C0(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                FlexyLeftElbow03BoneName;                                // 0x03C8(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                FlexyLeftElbow04BoneName;                                // 0x03D0(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                FlexyRightElbow01BoneName;                               // 0x03D8(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                FlexyRightElbow02BoneName;                               // 0x03E0(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                FlexyRightElbow03BoneName;                               // 0x03E8(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                FlexyRightElbow04BoneName;                               // 0x03F0(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                FlexyLeftCalf01BoneName;                                 // 0x03F8(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                FlexyLeftCalf02BoneName;                                 // 0x0400(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                FlexyLeftCalf03BoneName;                                 // 0x0408(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                FlexyLeftCalf04BoneName;                                 // 0x0410(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                FlexyRightCalf01BoneName;                                // 0x0418(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                FlexyRightCalf02BoneName;                                // 0x0420(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                FlexyRightCalf03BoneName;                                // 0x0428(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                FlexyRightCalf04BoneName;                                // 0x0430(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                GrappleBoneName;                                         // 0x0438(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TMap<class FName, class FName>                             FootIKJointToBallIKSocketMap;                            // 0x0440(0x0050) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		TMap<class FName, class FName>                             FootIKJointToSocketMap;                                  // 0x0490(0x0050) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		class FName                                                LeftIKHandGrappleSocketName;                             // 0x04E0(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                RightIKHandGrappleSocketName;                            // 0x04E8(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bEnableChoreographedMoveAttachment;                      // 0x04F0(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIsInChoreographedAnimation;                             // 0x04F1(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIsAttacker;                                             // 0x04F2(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EIGBodyType                                                OwnerBodyType;                                           // 0x04F3(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EIGBodyType                                                OpponentBodyType;                                        // 0x04F4(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_47WJ[0x3];                                   // 0x04F5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TWeakObjectPtr<class UIGPostProcessAnimInstance>           OpponentPPAnimInstance;                                  // 0x04F8(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TWeakObjectPtr<class USkeletalMeshComponent>               OpponentSkelMeshComponent;                               // 0x0500(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bCM_IsInChoreographedAnimation;                          // 0x0508(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bCM_DebugDraw;                                           // 0x0509(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bAG_ProcessAttackerHandAttachment;                       // 0x050A(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bAG_ProcessAttackerCrotchAttachment;                     // 0x050B(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bAG_ProcessReactorAttachment;                            // 0x050C(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bCM_DrivingHand_SkipPVInterp;                            // 0x050D(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_B2GA[0x2];                                   // 0x050E(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      CM_EffectorInterpSpeed;                                  // 0x0510(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CM_PelvisInterpSpeed;                                    // 0x0514(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CM_PoleVectorInterpSpeed;                                // 0x0518(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CM_AttackerCrotchAttachmentAlpha;                        // 0x051C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FRotator                                            CM_AttackerCrotchAttachmentLeftThighRotator;             // 0x0520(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FRotator                                            CM_AttackerCrotchAttachmentRightThighRotator;            // 0x052C(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		float                                                      CM_AttackerCrotchAttachmentThighRotation;                // 0x0538(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_HOY1[0x4];                                   // 0x053C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UDataTable*                                          CM_CrotchAttachmentThighRotationTable;                   // 0x0540(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CM_CrotchAttachmentThighRotationInterpSpeed;             // 0x0548(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bCM_ReactorIsAttachedToCrotch;                           // 0x054C(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_BWOG[0x3];                                   // 0x054D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TMap<EIGBodyType, class FName>                             CM_BodyTypeToCrotchAttachmentHeightOffsetCurveNameMap;   // 0x0550(0x0050) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		float                                                      CM_CrotchAttachmentThighRotationAlpha;                   // 0x05A0(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                CM_LeftHandIsHoldingReactorCurve;                        // 0x05A4(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                CM_RightHandIsHoldingReactorCurve;                       // 0x05AC(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                CM_AttachLeftHandToReactorCurve;                         // 0x05B4(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                CM_AttachRightHandToReactorCurve;                        // 0x05BC(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                CM_NonDrivingLeftHandSocketCurve;                        // 0x05C4(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                CM_NonDrivingRightHandSocketCurve;                       // 0x05CC(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                CM_SecondaryPointOfHoldSocketCurve;                      // 0x05D4(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                CM_AttachToAttackerLeftHandCurve;                        // 0x05DC(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                CM_AttachToAttackerRightHandCurve;                       // 0x05E4(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                CM_CrotchAttachmentSocketCurve;                          // 0x05EC(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                CM_AttachToAttackerCrotchCurve;                          // 0x05F4(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                CM_CrotchAttachmentThighRotationCurve;                   // 0x05FC(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                CM_DrivingHandAttachmentSocketCurve;                     // 0x0604(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CM_DrivingLeftHandAlpha;                                 // 0x060C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CM_DrivingRightHandAlpha;                                // 0x0610(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bCM_ReactorIsAttachedToLeftHand;                         // 0x0614(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bCM_ReactorIsAttachedToRightHand;                        // 0x0615(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_5T2D[0x2];                                   // 0x0616(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TMap<EIGBodyType, class FName>                             CM_ThicknessofHoldCurveNameMap;                          // 0x0618(0x0050) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		float                                                      CM_ThicknessOfHold;                                      // 0x0668(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             CM_DrivingHand_LocationDelta;                            // 0x066C(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             CM_DrivingLeftHand_EffectorLocation;                     // 0x0678(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             CM_DrivingRightHand_EffectorLocation;                    // 0x0684(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CM_NonDrivingLeftHandAlpha;                              // 0x0690(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CM_NonDrivingRightHandAlpha;                             // 0x0694(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             CM_NonDrivingLeftHand_EffectorLocation;                  // 0x0698(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             CM_NonDrivingRightHand_EffectorLocation;                 // 0x06A4(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             CM_AttackerHipOffsetFromFPIK;                            // 0x06B0(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             CM_ReactorPelvisLocation;                                // 0x06BC(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             CM_ReactorPelvisLocationDelta;                           // 0x06C8(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CM_ReactorTranslatePelvisAlpha;                          // 0x06D4(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             CM_AttackerPelvisLocation;                               // 0x06D8(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             CM_AttackerPelvisLocationDelta;                          // 0x06E4(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             CM_LeftArmPoleVectorLocation;                            // 0x06F0(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             CM_RightArmPoleVectorLocation;                           // 0x06FC(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bCM_NonDrivingLeftHandSkipPVInterp;                      // 0x0708(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bCM_NonDrivingRightHandSkipPVInterp;                     // 0x0709(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_VHJ4[0x6];                                   // 0x070A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class FName>                                        CM_AttachmentSocketNames;                                // 0x0710(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		class FName                                                CM_NonDrivingLeftHandSocket;                             // 0x0720(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                CM_NonDrivingRightHandSocket;                            // 0x0728(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                CM_SecondaryPointOfHoldSocket;                           // 0x0730(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                CM_DrivingHandAttachmentSocket;                          // 0x0738(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                CM_CrotchAttachmentSocket;                               // 0x0740(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                CM_CrotchSocketName;                                     // 0x0748(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                CM_StableFakePelvisBoneName;                             // 0x0750(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       PostProcessMeshOffsetModified;                           // 0x0758(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_SL3F[0x3];                                   // 0x0759(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      CIK_EffectorLocationInterpSpeed;                         // 0x075C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bDebug_Climbing_IK;                                      // 0x0760(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIsClimbing;                                             // 0x0761(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bAG_ProcessClimbingIK;                                   // 0x0762(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_QYY3[0x1];                                   // 0x0763(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      CIK_ActorSpeed;                                          // 0x0764(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FIGClimbingIKData                                   STRUCT_ClimbingIKData;                                   // 0x0768(0x008C) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		float                                                      CIK_Trace_Length;                                        // 0x07F4(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                LeftFootWallCurveName;                                   // 0x07F8(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                RightFootWallCurveName;                                  // 0x0800(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                LeftHandWallCurveName;                                   // 0x0808(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                RightHandWallCurveName;                                  // 0x0810(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      WallToAnkleBoneOffset;                                   // 0x0818(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_328B[0x4];                                   // 0x081C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UCurveFloat*                                         CIK_LegHyperextensionCorrectionAlphaCurve;               // 0x0820(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UCurveFloat*                                         CIK_LegHyperextensionLengthMultiplierCurve;              // 0x0828(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             CIK_LeftFootEffectorWorldSpace;                          // 0x0830(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             CIK_RightFootEffectorWorldSpace;                         // 0x083C(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             CIK_LeftFootLocationDelta;                               // 0x0848(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             CIK_RightFootLocationDelta;                              // 0x0854(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FVector>                                     CIK_LeftFootEffectorLocation_History;                    // 0x0860(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FVector>                                     CIK_RightFootEffectorLocation_History;                   // 0x0870(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		struct FVector                                             CIK_LeftFootEffectorLocation_HistorySum;                 // 0x0880(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             CIK_RightFootEffectorLocation_HistorySum;                // 0x088C(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CIK_LeftFootAlpha;                                       // 0x0898(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CIK_RightFootAlpha;                                      // 0x089C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      WallToWristBoneOffset;                                   // 0x08A0(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_3V9D[0x4];                                   // 0x08A4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UCurveFloat*                                         CIK_ArmHyperextensionCorrectionAlphaCurve;               // 0x08A8(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UCurveFloat*                                         CIK_ArmHyperextensionLengthMultiplierCurve;              // 0x08B0(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             CIK_LeftHandEffectorWorldSpace;                          // 0x08B8(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             CIK_RightHandEffectorWorldSpace;                         // 0x08C4(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             CIK_LeftHandLocationDelta;                               // 0x08D0(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             CIK_RightHandLocationDelta;                              // 0x08DC(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FVector>                                     CIK_LeftHandEffectorLocation_History;                    // 0x08E8(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FVector>                                     CIK_RightHandEffectorLocation_History;                   // 0x08F8(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		struct FVector                                             CIK_LeftHandEffectorLocation_HistorySum;                 // 0x0908(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             CIK_RightHandEffectorLocation_HistorySum;                // 0x0914(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CIK_LeftHandAlpha;                                       // 0x0920(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CIK_RightHandAlpha;                                      // 0x0924(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      WallToPelvisMinimumOffset;                               // 0x0928(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             CIK_HipLocationDelta;                                    // 0x092C(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FVector>                                     CIK_HipLocationDelta_History;                            // 0x0938(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		int32_t                                                    CIK_HipLocationDelta_MaxHistoryStates;                   // 0x0948(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             CIK_HipLocationDelta_HistorySum;                         // 0x094C(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CIK_HipLocationWeightedAverage_MaxActorSpeed;            // 0x0958(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CIK_MinimumHipInterpSpeed;                               // 0x095C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CIK_HipInterpSpeed;                                      // 0x0960(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CIK_HipWeightedAverage_Alpha;                            // 0x0964(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CIK_HipAlpha;                                            // 0x0968(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FRotator                                            CIK_PelvisRotationDelta;                                 // 0x096C(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		float                                                      CIK_MaxPelvicTilt;                                       // 0x0978(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CIK_MinPelvicTilt;                                       // 0x097C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CIK_PelvicTilt_InterpSpeed;                              // 0x0980(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CIK_PelvicTilt_MinInterpSpeed;                           // 0x0984(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CIK_PelvicTilt_MaxInterpSpeed;                           // 0x0988(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             CIK_WorldLocationOffsetFromPelvisTilt;                   // 0x098C(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UCurveFloat*                                         CIK_WallAngleToPelvicTilt_Curve;                         // 0x0998(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             CIK_HipLocationWorldSpace;                               // 0x09A0(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CIK_PelvicTilt;                                          // 0x09AC(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TMap<EIGBodyType, float>                                   WallToAnkleBoneOffsetMap;                                // 0x09B0(0x0050) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		TMap<EIGBodyType, float>                                   WallToWristBoneOffsetMap;                                // 0x0A00(0x0050) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		TMap<EIGBodyType, float>                                   WallToPelvisMinimumOffsetMap;                            // 0x0A50(0x0050) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		TMap<EIGBodyType, class UCurveFloat*>                      CIK_LegHyperextensionCorrectionAlphaCurveMap;            // 0x0AA0(0x0050) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		TMap<EIGBodyType, class UCurveFloat*>                      CIK_LegHyperextensionLengthMultiplierCurveMap;           // 0x0AF0(0x0050) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		TMap<EIGBodyType, class UCurveFloat*>                      CIK_ArmHyperextensionCorrectionAlphaCurveMap;            // 0x0B40(0x0050) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		TMap<EIGBodyType, class UCurveFloat*>                      CIK_ArmHyperextensionLengthMultiplierCurveMap;           // 0x0B90(0x0050) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		TMap<EIGBodyType, class UCurveFloat*>                      CIK_WallAngleToPelvicTiltCurveMap;                       // 0x0BE0(0x0050) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		TMap<EIGBodyType, float>                                   CIK_ArmPoleVectorLateralOffsetMap;                       // 0x0C30(0x0050) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		bool                                                       bCIK_SkipPVInterpolation;                                // 0x0C80(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_D6BP[0x3];                                   // 0x0C81(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      MaxPoleVectorInterpolationSpeed;                         // 0x0C84(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MinPoleVectorInterpolationSpeed;                         // 0x0C88(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             CIK_LeftHandPoleVectorLocation;                          // 0x0C8C(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             CIK_RightHandPoleVectorLocation;                         // 0x0C98(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             CIK_LeftFootPoleVectorLocation;                          // 0x0CA4(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             CIK_RightFootPoleVectorLocation;                         // 0x0CB0(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CIK_ArmPoleVectorLateralOffset;                          // 0x0CBC(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    CIK_WeightedAverage_MaxHistoryStates;                    // 0x0CC0(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CIK_InterpSpeed_InterSpeed;                              // 0x0CC4(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CIK_EffectorLocation_WeightedAverage_Alpha;              // 0x0CC8(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CIK_EffectorLocationWeightedAverage_MaxActorSpeed;       // 0x0CCC(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CIK_EffectorLocation_MaxInterpSpeed;                     // 0x0CD0(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CIK_EffectorLocation_MinInterpSpeed;                     // 0x0CD4(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CIK_EffectorLocationWeightedAlpha_IdleSpeedThreshold;    // 0x0CD8(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_BVA0[0x4];                                   // 0x0CDC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UCurveFloat*                                         CIK_IdleElapsedTime_to_WeightedAverageAlpha_Curve;       // 0x0CE0(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CIK_EffectorLocationWeightedAlpha_IdleElapsedTime;       // 0x0CE8(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      FlexyArmJointsDistance;                                  // 0x0CEC(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bEnableFlexyArmScale;                                    // 0x0CF0(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_DSEZ[0x3];                                   // 0x0CF1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FIGFlexyScaleHolder                                 ScaleInfoArms;                                           // 0x0CF4(0x0060) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		float                                                      FlexyLegJointsDistance;                                  // 0x0D54(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bEnableFlexyLegScale;                                    // 0x0D58(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_T9CT[0x3];                                   // 0x0D59(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FIGFlexyScaleHolder                                 ScaleInfoLegs;                                           // 0x0D5C(0x0060) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bEnableMidLimbSnapping;                                  // 0x0DBC(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_A6KS[0x3];                                   // 0x0DBD(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TMap<EIGBodyType, float>                                   DistanceBetweenFlexyArmJointMap;                         // 0x0DC0(0x0050) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		TMap<EIGBodyType, float>                                   DistanceBetweenFlexyLegJointMap;                         // 0x0E10(0x0050) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		struct FIGFootPlacement                                    STRUCT_FootPlacement;                                    // 0x0E60(0x0064) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bDebug_FootPlantingIK;                                   // 0x0EC4(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bAG_ProcessFootPlantingIK;                               // 0x0EC5(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bFPIK_DisableForEditorPreviewing;                        // 0x0EC6(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_9LVC[0x1];                                   // 0x0EC7(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                RightFootAlphaCurveName;                                 // 0x0EC8(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                LeftFootAlphaCurveName;                                  // 0x0ED0(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                StandingIdleCurveName;                                   // 0x0ED8(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      FPIK_FootRotationInterpSpeed;                            // 0x0EE0(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      FPIK_FootLocationInterpSpeed;                            // 0x0EE4(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      FPIK_FootToGroundOffset;                                 // 0x0EE8(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      FPIK_AnkleToBallOffset;                                  // 0x0EEC(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FRotator>                                    FPIK_FootRotationLimits;                                 // 0x0EF0(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		struct FRotator                                            FPIK_FeetDownRotation;                                   // 0x0F00(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_QEO6[0x4];                                   // 0x0F0C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UCurveFloat*                                         FPIK_CRV_FootDownRotationAlpha;                          // 0x0F10(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      FPIK_FeetLocation_MaxInterpSpeed;                        // 0x0F18(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      FPIK_FeetLocation_MinInterpSpeed;                        // 0x0F1C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      FPIK_InterpSpeed_InterpSpeed;                            // 0x0F20(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      FPIK_FootRotation_MaxInterpSpeed;                        // 0x0F24(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      FPIK_FootRotation_MinInterpSpeed;                        // 0x0F28(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      TraceLengthBelowFootMultiplier;                          // 0x0F2C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      TraceLengthBelowFoot;                                    // 0x0F30(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      TraceLengthAboveFootMultiplier;                          // 0x0F34(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      TraceLengthAboveFoot;                                    // 0x0F38(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      FPIK_LeftFootAlpha;                                      // 0x0F3C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             FPIK_LeftEffectorWorldLocation;                          // 0x0F40(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             FPIK_LeftFootTargetLocation;                             // 0x0F4C(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FRotator                                            FPIK_LeftFootRotation;                                   // 0x0F58(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FRotator                                            FPIK_LeftFootDownRotation;                               // 0x0F64(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FRotator                                            FPIK_LeftFootSurfaceRotation;                            // 0x0F70(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		float                                                      HipOffsetMinDistance;                                    // 0x0F7C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      FPIK_HipOffsetInterpSpeed;                               // 0x0F80(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      FPIK_HipAlpha;                                           // 0x0F84(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      FPIK_HipOffset;                                          // 0x0F88(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      FPIK_LeftHipOffset;                                      // 0x0F8C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      FPIK_RightHipOffset;                                     // 0x0F90(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_M97I[0x4];                                   // 0x0F94(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UCurveFloat*                                         FPIK_CRV_HyperextensionCorrectionAlpha;                  // 0x0F98(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UCurveFloat*                                         FPIK_CRV_HyperextensionLengthMultiplier;                 // 0x0FA0(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TMap<EIGBodyType, class UCurveFloat*>                      FPIK_CRV_PVLateralOffsetAlphaMap;                        // 0x0FA8(0x0050) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		TMap<EIGBodyType, class UCurveFloat*>                      FPIK_CRV_HyperextensionLengthMultiplierMap;              // 0x0FF8(0x0050) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		TMap<EIGBodyType, class UCurveFloat*>                      FPIK_CRV_HyperextensionCorrectionAlphaMap;               // 0x1048(0x0050) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		TMap<EIGBodyType, float>                                   FPIK_TraceLengthAboveFootMultiplierMap;                  // 0x1098(0x0050) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		TMap<EIGBodyType, float>                                   FPIK_TraceLengthBelowFootMultiplierMap;                  // 0x10E8(0x0050) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		TMap<EIGBodyType, float>                                   FPIK_AnkleToBallOffsetMap;                               // 0x1138(0x0050) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		TMap<EIGBodyType, float>                                   FPIK_FootToGroundOffsetMap;                              // 0x1188(0x0050) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		TMap<EIGBodyType, float>                                   FPIK_MaxPVLateralOffsetsMap;                             // 0x11D8(0x0050) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		struct FVector                                             FPIK_LeftLegPoleVector;                                  // 0x1228(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             FPIK_RightLegPoleVector;                                 // 0x1234(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UCurveFloat*                                         FPIK_CRV_PVLateralOffsetAlpha;                           // 0x1240(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      FPIK_MaxPVLateralOffset;                                 // 0x1248(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      FPIK_RightFootAlpha;                                     // 0x124C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             FPIK_RightEffectorWorldLocation;                         // 0x1250(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             FPIK_RightFootTargetLocation;                            // 0x125C(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FRotator                                            FPIK_RightFootRotation;                                  // 0x1268(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FRotator                                            FPIK_RightFootDownRotation;                              // 0x1274(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FRotator                                            FPIK_RightFootSurfaceRotation;                           // 0x1280(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_LREW[0x4];                                   // 0x128C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FVector>                                     FPIK_LeftFootLocation_History;                           // 0x1290(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FVector>                                     FPIK_RightFootLocation_History;                          // 0x12A0(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		struct FVector                                             FPIK_LeftFootLocation_HistorySum;                        // 0x12B0(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             FPIK_RightFootLocation_HistorySum;                       // 0x12BC(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    FPIK_WeightedAverage_MaxHistoryStates;                   // 0x12C8(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      FPIK_WeightedAverage_Alpha;                              // 0x12CC(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      FPIK_WeightedAverage_IdleSpeedThreshold;                 // 0x12D0(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      FPIK_ActorSpeed;                                         // 0x12D4(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      FPIK_WeightedAverage_IdleElapsedTime;                    // 0x12D8(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_5XA7[0x4];                                   // 0x12DC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UCurveFloat*                                         FPIK_IdleElapsedTime_to_WeightedAverageAlpha_Curve;      // 0x12E0(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      FPIK_WeightedAverage_MaxActorSpeed;                      // 0x12E8(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FRotator                                            FPIK_LeftFootRotation_PrevValue;                         // 0x12EC(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FRotator                                            FPIK_RightFootRotation_PrevValue;                        // 0x12F8(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_3BGR[0x4];                                   // 0x1304(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class USkeletalMeshComponent*                              SkeletalMesh;                                            // 0x1308(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class AActor*                                              CharacterActor;                                          // 0x1310(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Delta_Time;                                              // 0x1318(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      AlphaBlend_InterpSpeed;                                  // 0x131C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      PoleVectorInterpSpeed_Max;                               // 0x1320(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             ActorForwardVector;                                      // 0x1324(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      PoleVectorForwardVectorOffset;                           // 0x1330(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      PoleVectorUpVectorOffset;                                // 0x1334(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      PV_InterpSpeed_VelocityCoefficient;                      // 0x1338(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ArmLength;                                               // 0x133C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      LegLength;                                               // 0x1340(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_MBBF[0x4];                                   // 0x1344(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TMap<EIGBodyType, class FName>                             CM_BodyTypeToName;                                       // 0x1348(0x0050) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_5M91[0x8];                                   // 0x1398(0x0008) MISSED OFFSET (PADDING)

	public:
		bool IsUsingBlueprintPath();
		void InitFlexySystemBP();
		struct FVector GetSocketScale(const class FName& SocketName);
		struct FRotator GetSocketRotation(const class FName& SocketName);
		struct FVector GetSocketLocation(const class FName& SocketName);
		void FPIK_InitBP();
		void FPIK_DebugDisplayBP();
		void Foot_Placement_TickNative();
		void Foot_Placement_TickBP();
		void FlexyLegCalculationNative();
		void FlexyLegCalculationBP();
		void FlexyArmCalculationNative();
		void FlexyArmCalculationBP();
		void Climbing_IK_TickNative();
		void Climbing_IK_TickBP();
		void CIKOnBeginClimbingBP();
		void CIK_TraceFromLimb(float WallToBoneOffset, const class FName& BoneName, struct FVector* EffectorLocation, struct FVector* LocationDelta);
		void CIK_InitBP();
		void CIK_DebugDisplayBP();
		void CIK_CalculateEffectorLocationDelta(const struct FVector& TargetLocation, const class FName& BoneName, struct FVector* LocationDelta);
		void ChoreographedMoveTickBP();
		void CalculateLengthOfLimbsBP();
		static UClass* StaticClass();
	};

	/**
	 * Class IGActorSystem.RepAccrualInfo
	 * Size -> 0x0030 (FullSize[0x0058] - InheritedSize[0x0028])
	 */
	class URepAccrualInfo : public UObject
	{
	public:
		int32_t                                                    MaxNumberOfRepsAllowedToTrack;                           // 0x0028(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    MaxRepAllowance;                                         // 0x002C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUseMinutesInsteadOfHoursForRepAccrual;                  // 0x0030(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_PI78[0x3];                                   // 0x0031(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    AllowRepEveryX;                                          // 0x0034(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    MaxHistoryLength;                                        // 0x0038(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    RepAccrualQuantity;                                      // 0x003C(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUseMinutesInsteadOfHoursForFTUERepAccrual;              // 0x0040(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_UJPR[0x3];                                   // 0x0041(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    AllowFTUERepEveryX;                                      // 0x0044(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    MaxRerollAllowance;                                      // 0x0048(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    AllowRerollEveryX;                                       // 0x004C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUseMinutesInsteadOfHoursForRerollAccrual;               // 0x0050(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_8J1T[0x7];                                   // 0x0051(0x0007) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class IGActorSystem.FanMailLevelDefInfo
	 * Size -> 0x0050 (FullSize[0x0078] - InheritedSize[0x0028])
	 */
	class UFanMailLevelDefInfo : public UObject
	{
	public:
		TMap<EIGSeasonIdentifier, struct FanMailInfo>              FanMailSeasonsInfoMap;                                   // 0x0028(0x0050) Edit, BlueprintVisible, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class IGActorSystem.IGBattlePassSeasonsMap
	 * Size -> 0x00A0 (FullSize[0x00C8] - InheritedSize[0x0028])
	 */
	class UIGBattlePassSeasonsMap : public UObject
	{
	public:
		TMap<EIGSeasonIdentifier, struct FIGBattlePassSeasonData>  BattlePassSeasons;                                       // 0x0028(0x0050) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		TMap<EBattlePassRewardType, class FText>                   BattlePassRewardTypeLocTextMap;                          // 0x0078(0x0050) Edit, BlueprintVisible, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class IGActorSystem.IGProjectile
	 * Size -> 0x0048 (FullSize[0x0268] - InheritedSize[0x0220])
	 */
	class AIGProjectile : public AActor
	{
	public:
		unsigned char                                              UnknownData_93C2[0x8];                                   // 0x0220(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class USphereComponent*                                    CollisionComponent;                                      // 0x0228(0x0008) Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class USceneComponent*                                     InterpolatedComponent;                                   // 0x0230(0x0008) Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UIGProjectileMovementComponent*                      ProjectileMovement;                                      // 0x0238(0x0008) Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UIGProjectileData*                                   ProjectileData;                                          // 0x0240(0x0008) Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ServerSpawnTimestamp;                                    // 0x0248(0x0004) Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             InitialVelocity;                                         // 0x024C(0x000C) Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class AIGCharacter*                                        HomingTarget;                                            // 0x0258(0x0008) Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bTriggeredDestroyVisuals;                                // 0x0260(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_M44W[0x7];                                   // 0x0261(0x0007) MISSED OFFSET (PADDING)

	public:
		void TriggerDestroyVisuals();
		void OnProjectileStop(const struct FHitResult& ImpactResult);
		void OnProjectileHit(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FVector& NormalImpulse, const struct FHitResult& Hit);
		void OnProjectileEndOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex);
		void OnProjectileBounce(const struct FHitResult& ImpactResult, const struct FVector& ImpactVelocity);
		void OnProjectileBeginOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
		static UClass* StaticClass();
	};

	/**
	 * Class IGActorSystem.IGProjectileData
	 * Size -> 0x00A0 (FullSize[0x00D0] - InheritedSize[0x0030])
	 */
	class UIGProjectileData : public UDataAsset
	{
	public:
		float                                                      InitialSpeed;                                            // 0x0030(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaxSpeed;                                                // 0x0034(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      GravityScale;                                            // 0x0038(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      HomingVelocityRotation;                                  // 0x003C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      HomingAccelerationMagnitude;                             // 0x0040(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bRotationFollowsVelocity;                                // 0x0044(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_TZ4U[0x3];                                   // 0x0045(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FRotator                                            SpinRotation;                                            // 0x0048(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_C093[0xC];                                   // 0x0054(0x000C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          MeshTransform;                                           // 0x0060(0x0030) Edit, BlueprintVisible, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		class UStaticMesh*                                         StaticMesh;                                              // 0x0090(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class USkeletalMesh*                                       SkeletalMesh;                                            // 0x0098(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UParticleSystem*                                     AttachedParticleSystem;                                  // 0x00A0(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UParticleSystem*                                     OnSpawnParticleSystem;                                   // 0x00A8(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UParticleSystem*                                     OnDestroyParticleSystem;                                 // 0x00B0(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      SphereRadius;                                            // 0x00B8(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_XRVC[0x4];                                   // 0x00BC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UIGHitData*                                          HitData;                                                 // 0x00C0(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UClass*                                              Replacement;                                             // 0x00C8(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		bool SuggestProjectileVelocity(class UObject* WorldContextObject, struct FVector* TossVelocity, const struct FVector& StartLocation, const struct FVector& EndLocation, ESuggestProjVelocityTraceOption TraceOption, bool bFavorHighArc, bool bDrawDebug);
		static UClass* StaticClass();
	};

	/**
	 * Class IGActorSystem.IGProjectileMovementComponent
	 * Size -> 0x0060 (FullSize[0x0230] - InheritedSize[0x01D0])
	 */
	class UIGProjectileMovementComponent : public UProjectileMovementComponent
	{
	public:
		class FScriptMulticastDelegate                             OnHitOcean;                                              // 0x01D0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		float                                                      HomingVelocityRotation;                                  // 0x01E0(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      AirDrag;                                                 // 0x01E4(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      RestableFloorAngle;                                      // 0x01E8(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      RestableFloorZ;                                          // 0x01EC(0x0004) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FRotator                                            ActiveProjectileRotation;                                // 0x01F0(0x000C) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		EAxis                                                      ThrownAxisUp;                                            // 0x01FC(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EAxis                                                      DroppedAxisUp;                                           // 0x01FD(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_FIKX[0x2];                                   // 0x01FE(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FBounceOverrideSettings>                     BounceOverrideSettings;                                  // 0x0200(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		bool                                                       bStopBounceOverridesOnHit;                               // 0x0210(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bCanTargetDamageOwner;                                   // 0x0211(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_RSXT[0x2];                                   // 0x0212(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      CharacterBounceAngleMin;                                 // 0x0214(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CharacterBounceAngleMax;                                 // 0x0218(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_R3A6[0x14];                                  // 0x021C(0x0014) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class IGActorSystem.IGRaycastTransitionWindow
	 * Size -> 0x0038 (FullSize[0x00D0] - InheritedSize[0x0098])
	 */
	class UIGRaycastTransitionWindow : public UIGNotifyStateBase
	{
	public:
		ECollisionChannel                                          CollisionChannel;                                        // 0x0098(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_SMY1[0x3];                                   // 0x0099(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             RelativeDirection;                                       // 0x009C(0x000C) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FVector                                             RaycastOriginOffset;                                     // 0x00A8(0x000C) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      RaycastDistance;                                         // 0x00B4(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bIgnoreOverlaps;                                         // 0x00B8(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bIgnoreBlocks;                                           // 0x00B9(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_Q56F[0x2];                                   // 0x00BA(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    NumRaycasts;                                             // 0x00BC(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      MulticastSeperation;                                     // 0x00C0(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FVector                                             RelativeMulticastAxis;                                   // 0x00C4(0x000C) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class IGActorSystem.IGRaycastApplyHitWindow
	 * Size -> 0x0010 (FullSize[0x00E0] - InheritedSize[0x00D0])
	 */
	class UIGRaycastApplyHitWindow : public UIGRaycastTransitionWindow
	{
	public:
		class UIGHitData*                                          OnRaycastHit;                                            // 0x00D0(0x0008) Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bApplyDamageStatBoostToSelf;                             // 0x00D8(0x0001) Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_DGAW[0x7];                                   // 0x00D9(0x0007) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class IGActorSystem.IGReadableInteractable
	 * Size -> 0x0030 (FullSize[0x02F0] - InheritedSize[0x02C0])
	 */
	class AIGReadableInteractable : public AIGInteractableCommon
	{
	public:
		struct FDataTableRowHandle                                 ReadableContent;                                         // 0x02C0(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic
		class USceneComponent*                                     SceneRoot;                                               // 0x02D0(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UIGInteractableBoxComponent*                         InteractableBox;                                         // 0x02D8(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class USphereComponent*                                    VisibleArea;                                             // 0x02E0(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_675T[0x8];                                   // 0x02E8(0x0008) MISSED OFFSET (PADDING)

	public:
		void OnVisibilityOverlapEnd(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex);
		static UClass* StaticClass();
	};

	/**
	 * Class IGActorSystem.IGReplicationGraph
	 * Size -> 0x0138 (FullSize[0x05E0] - InheritedSize[0x04A8])
	 */
	class UIGReplicationGraph : public UReplicationGraph
	{
	public:
		TArray<class UClass*>                                      SpatializedClasses;                                      // 0x04A8(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<class UClass*>                                      NonSpatializedChildClasses;                              // 0x04B8(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<class UClass*>                                      AlwaysRelevantClasses;                                   // 0x04C8(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		class UReplicationGraphNode_GridSpatialization2D*          GridNode;                                                // 0x04D8(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UIGReplicationGraphNode_SpawnedDormantGridSpatial*   SpawnedStaticGrid;                                       // 0x04E0(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UIGReplicationGraphNode_GridSpatial2DKeepAlive*      GridNodeKeepAlive;                                       // 0x04E8(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UIGReplicationGraphNode_GridSpatial2DKeepAlive*      GridNodeCharactersKeepAlive;                             // 0x04F0(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UReplicationGraphNode_ActorList*                     AlwaysRelevantNode;                                      // 0x04F8(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_NO2B[0xE0];                                  // 0x0500(0x00E0) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class IGActorSystem.IGReplicationGraphNode_SpawnedDormantGridSpatial
	 * Size -> 0x0000 (FullSize[0x0230] - InheritedSize[0x0230])
	 */
	class UIGReplicationGraphNode_SpawnedDormantGridSpatial : public UReplicationGraphNode_GridSpatialization2D
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class IGActorSystem.IGReplicationGraphNode_GridSpatial2DKeepAlive
	 * Size -> 0x0070 (FullSize[0x02A0] - InheritedSize[0x0230])
	 */
	class UIGReplicationGraphNode_GridSpatial2DKeepAlive : public UReplicationGraphNode_GridSpatialization2D
	{
	public:
		TArray<class UIGReplicationGraphNode_DormancyNode*>        GlobalDormancyArray;                                     // 0x0230(0x0010) ZeroConstructor, NativeAccessSpecifierPrivate
		class UIGActorListFrequencyBucket_KeepAlive*               KeepAliveNode;                                           // 0x0240(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_ULF1[0x58];                                  // 0x0248(0x0058) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class IGActorSystem.IGActorListFrequencyBucket_KeepAlive
	 * Size -> 0x0000 (FullSize[0x0108] - InheritedSize[0x0108])
	 */
	class UIGActorListFrequencyBucket_KeepAlive : public UReplicationGraphNode_ActorListFrequencyBuckets
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class IGActorSystem.IGReplicationGraphNode_AlwaysRelevant_ForConnection
	 * Size -> 0x0238 (FullSize[0x0288] - InheritedSize[0x0050])
	 */
	class UIGReplicationGraphNode_AlwaysRelevant_ForConnection : public UReplicationGraphNode
	{
	public:
		unsigned char                                              UnknownData_B57F[0x228];                                 // 0x0050(0x0228) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AActor*                                              LastPawn;                                                // 0x0278(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_B1GQ[0x8];                                   // 0x0280(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class IGActorSystem.IGReplicationGraphNode_PlayerStateFrequencyLimiter
	 * Size -> 0x0028 (FullSize[0x0078] - InheritedSize[0x0050])
	 */
	class UIGReplicationGraphNode_PlayerStateFrequencyLimiter : public UReplicationGraphNode
	{
	public:
		unsigned char                                              UnknownData_KV1S[0x28];                                  // 0x0050(0x0028) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class IGActorSystem.IGReplicationGraphNode_DormancyNode
	 * Size -> 0x0000 (FullSize[0x00E0] - InheritedSize[0x00E0])
	 */
	class UIGReplicationGraphNode_DormancyNode : public UReplicationGraphNode_DormancyNode
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class IGActorSystem.IGReplicationGraphNode_ConnectionForceSpawnNode
	 * Size -> 0x0010 (FullSize[0x00E0] - InheritedSize[0x00D0])
	 */
	class UIGReplicationGraphNode_ConnectionForceSpawnNode : public UReplicationGraphNode_ActorList
	{
	public:
		unsigned char                                              UnknownData_HGMZ[0x10];                                  // 0x00D0(0x0010) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class IGActorSystem.IGReplicationGraphNode_ForceSpawnNode
	 * Size -> 0x0010 (FullSize[0x00E0] - InheritedSize[0x00D0])
	 */
	class UIGReplicationGraphNode_ForceSpawnNode : public UReplicationGraphNode_ActorList
	{
	public:
		unsigned char                                              UnknownData_EQL5[0x10];                                  // 0x00D0(0x0010) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class IGActorSystem.IGReportNoiseEventNotify
	 * Size -> 0x0010 (FullSize[0x00A8] - InheritedSize[0x0098])
	 */
	class UIGReportNoiseEventNotify : public UIGNotifyBase
	{
	public:
		class FName                                                EventName;                                               // 0x0098(0x0008) Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      Loudness;                                                // 0x00A0(0x0004) Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      MaxRange;                                                // 0x00A4(0x0004) Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class IGActorSystem.IGRepSystem
	 * Size -> 0x0140 (FullSize[0x0168] - InheritedSize[0x0028])
	 */
	class UIGRepSystem : public UObject
	{
	public:
		class FScriptMulticastDelegate                             OnRepPoolDownloadComplete;                               // 0x0028(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		TArray<struct FRepProgress>                                RepProgressList;                                         // 0x0038(0x0010) Net, ZeroConstructor, RepNotify, Protected, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_3WJ6[0x108];                                 // 0x0048(0x0108) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              RepProgressDataVersion;                                  // 0x0150(0x0010) Net, ZeroConstructor, RepNotify, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_XP6X[0x8];                                   // 0x0160(0x0008) MISSED OFFSET (PADDING)

	public:
		void UpdateReps();
		TArray<struct FRepGrouping> SortRepGroupings();
		void OnRep_RepProgressList();
		void OnRep_RepProgressDataVersion();
		bool IsRepPoolDownloadComplete();
		bool GetRepProgressForUI(TArray<struct FRepUIData>* OutRepUiData);
		void DebugOnlyStopAllRepProgress(bool StopRepProgression);
		void DebugOnlySetRepProgress(const class FName& RepName, int32_t ProgressValue);
		void DebugOnlyResetAllRepProgress();
		void DebugOnlyRemoveAllRepProgress();
		void DebugOnlyDumpRepProgress();
		void CleanRepTrackingDataInFrontend();
		static UClass* StaticClass();
	};

	/**
	 * Class IGActorSystem.IGResurrectHealthNotifyState
	 * Size -> 0x0000 (FullSize[0x0098] - InheritedSize[0x0098])
	 */
	class UIGResurrectHealthNotifyState : public UIGNotifyStateBase
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class IGActorSystem.IGRewardCollectibleBase
	 * Size -> 0x0008 (FullSize[0x0288] - InheritedSize[0x0280])
	 */
	class AIGRewardCollectibleBase : public AIGCollectibleBase
	{
	public:
		EIGCollectibleRewardType                                   RewardType;                                              // 0x0280(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_9TZ3[0x3];                                   // 0x0281(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      RewardValue;                                             // 0x0284(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class IGActorSystem.IGRewardCollectible
	 * Size -> 0x0018 (FullSize[0x02A0] - InheritedSize[0x0288])
	 */
	class AIGRewardCollectible : public AIGRewardCollectibleBase
	{
	public:
		class UCapsuleComponent*                                   CapsuleComponent;                                        // 0x0288(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UProjectileMovementComponent*                        ProjectileMovement;                                      // 0x0290(0x0008) Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bMovementEnabled;                                        // 0x0298(0x0001) Net, ZeroConstructor, Transient, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_PDNO[0x1];                                   // 0x0299(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		bool                                                       bRepIsInPool;                                            // 0x029A(0x0001) Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bSavedPreNetIsInPool;                                    // 0x029B(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_G14T[0x4];                                   // 0x029C(0x0004) MISSED OFFSET (PADDING)

	public:
		void OnRep_MovementEnabledChanged();
		void OnProjectileStop(const struct FHitResult& ImpactResult);
		static UClass* StaticClass();
	};

	/**
	 * Class IGActorSystem.IGRotateToTargetState
	 * Size -> 0x0010 (FullSize[0x00A8] - InheritedSize[0x0098])
	 */
	class UIGRotateToTargetState : public UIGNotifyStateBase
	{
	public:
		float                                                      RotationSpeed;                                           // 0x0098(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      DynamicRotationSpeed;                                    // 0x009C(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bDynamicTurnRate;                                        // 0x00A0(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_CF8J[0x7];                                   // 0x00A1(0x0007) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class IGActorSystem.IGRumbleData
	 * Size -> 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
	 */
	class UIGRumbleData : public UDataAsset
	{
	public:
		TArray<struct FRumbleInfo>                                 RumbleInfo;                                              // 0x0030(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class IGActorSystem.IGRumbleNotify
	 * Size -> 0x0018 (FullSize[0x00B0] - InheritedSize[0x0098])
	 */
	class UIGRumbleNotify : public UIGNotifyBase
	{
	public:
		class UForceFeedbackEffect*                                Effect;                                                  // 0x0098(0x0008) Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                Tag;                                                     // 0x00A0(0x0008) Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bLooping;                                                // 0x00A8(0x0001) Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIgnoreTimeDilation;                                     // 0x00A9(0x0001) Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bPlayWhilePaused;                                        // 0x00AA(0x0001) Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_T59R[0x5];                                   // 0x00AB(0x0005) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class IGActorSystem.IGSavedSettings
	 * Size -> 0x00D0 (FullSize[0x00F8] - InheritedSize[0x0028])
	 */
	class UIGSavedSettings : public USaveGame
	{
	public:
		int32_t                                                    SaveDataVersion;                                         // 0x0028(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bShowDamageNumbers;                                      // 0x002C(0x0001) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_JET2[0x3];                                   // 0x002D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      MasterVolume;                                            // 0x0030(0x0004) Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MusicVolume;                                             // 0x0034(0x0004) Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      SoundEffectVolume;                                       // 0x0038(0x0004) Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      DialogVolume;                                            // 0x003C(0x0004) Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      UserInterfaceVolume;                                     // 0x0040(0x0004) Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      EnemyFootstepsVolume;                                    // 0x0044(0x0004) Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bEnableInputHolds;                                       // 0x0048(0x0001) Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bEnableVibration;                                        // 0x0049(0x0001) Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EColorVisionDeficiency                                     ColorDeficiency;                                         // 0x004A(0x0001) Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_JLPH[0x1];                                   // 0x004B(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      ColorDeficiencySeverity;                                 // 0x004C(0x0004) Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TMap<class FName, EIGCombatContextBehavior>                CombatBehaviorSettings;                                  // 0x0050(0x0050) Edit, BlueprintVisible, EditConst, NativeAccessSpecifierPublic
		TMap<class FName, bool>                                    AutoChargeReleaseSettings;                               // 0x00A0(0x0050) Edit, BlueprintVisible, EditConst, NativeAccessSpecifierPublic
		bool                                                       bEnableCameraClimbFollow;                                // 0x00F0(0x0001) Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bEnableCameraTraversalFollow;                            // 0x00F1(0x0001) Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bEnableCameraCombatFollow;                               // 0x00F2(0x0001) Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_M0VM[0x5];                                   // 0x00F3(0x0005) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class IGActorSystem.IGScriptedActorComponent
	 * Size -> 0x00A0 (FullSize[0x0150] - InheritedSize[0x00B0])
	 */
	class UIGScriptedActorComponent : public UActorComponent
	{
	public:
		unsigned char                                              UnknownData_U6IH[0xA0];                                  // 0x00B0(0x00A0) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class IGActorSystem.IGScriptTargetingVolume
	 * Size -> 0x0010 (FullSize[0x0278] - InheritedSize[0x0268])
	 */
	class AIGScriptTargetingVolume : public APhysicsVolume
	{
	public:
		class FName                                                Tag;                                                     // 0x0268(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_DNXH[0x8];                                   // 0x0270(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class IGActorSystem.IGScriptTargetingWaypoint
	 * Size -> 0x0010 (FullSize[0x0230] - InheritedSize[0x0220])
	 */
	class AIGScriptTargetingWaypoint : public AActor
	{
	public:
		class FName                                                Tag;                                                     // 0x0220(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      DistanceToWaypointAllowed;                               // 0x0228(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_Y0G5[0x4];                                   // 0x022C(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class IGActorSystem.IGSetWeaponDurability
	 * Size -> 0x0008 (FullSize[0x00A0] - InheritedSize[0x0098])
	 */
	class UIGSetWeaponDurability : public UIGNotifyStateBase
	{
	public:
		int32_t                                                    PendingDurability;                                       // 0x0098(0x0004) Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bConsumeAtEnd;                                           // 0x009C(0x0001) Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ZOHE[0x3];                                   // 0x009D(0x0003) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class IGActorSystem.IGShapeCastTransitionWindow
	 * Size -> 0x0040 (FullSize[0x00D8] - InheritedSize[0x0098])
	 */
	class UIGShapeCastTransitionWindow : public UIGNotifyStateBase
	{
	public:
		EIGShapeCastType                                           ShapeType;                                               // 0x0098(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_UOVS[0x3];                                   // 0x0099(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      SphereRadius;                                            // 0x009C(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      CapsuleRadius;                                           // 0x00A0(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      CapsuleHalfHeight;                                       // 0x00A4(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FVector                                             BoxHalfExtents;                                          // 0x00A8(0x000C) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		ECollisionChannel                                          CollisionChannel;                                        // 0x00B4(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_BFEP[0x3];                                   // 0x00B5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             RelativeDirection;                                       // 0x00B8(0x000C) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FVector                                             ShapeCastOriginOffset;                                   // 0x00C4(0x000C) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      ShapeCastDistance;                                       // 0x00D0(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bIgnoreOverlaps;                                         // 0x00D4(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bIgnoreBlocks;                                           // 0x00D5(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_T85M[0x2];                                   // 0x00D6(0x0002) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class IGActorSystem.IGShapeCastApplyHitWindow
	 * Size -> 0x0010 (FullSize[0x00E8] - InheritedSize[0x00D8])
	 */
	class UIGShapeCastApplyHitWindow : public UIGShapeCastTransitionWindow
	{
	public:
		class UIGHitData*                                          OnRaycastHit;                                            // 0x00D8(0x0008) Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bApplyDamageStatBoostToSelf;                             // 0x00E0(0x0001) Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_T8TR[0x7];                                   // 0x00E1(0x0007) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class IGActorSystem.IGSkeletalMeshComponent
	 * Size -> 0x0010 (FullSize[0x0EF0] - InheritedSize[0x0EE0])
	 */
	class UIGSkeletalMeshComponent : public USkeletalMeshComponent
	{
	public:
		class UIGSkeletalMeshToAnimInstance*                       MeshToAnimInstance;                                      // 0x0EE0(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_YNP1[0x8];                                   // 0x0EE8(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class IGActorSystem.IGSkeletalMeshToAnimInstance
	 * Size -> 0x0050 (FullSize[0x0080] - InheritedSize[0x0030])
	 */
	class UIGSkeletalMeshToAnimInstance : public UDataAsset
	{
	public:
		unsigned char                                              SkeletalMeshToAnimInstanceMap[0x50];                     // 0x0030(0x0050) UNKNOWN PROPERTY: MapProperty

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class IGActorSystem.IGSpecialMoveConsumable
	 * Size -> 0x0038 (FullSize[0x06C0] - InheritedSize[0x0688])
	 */
	class AIGSpecialMoveConsumable : public AIGInteractablePickup
	{
	public:
		unsigned char                                              UnknownData_ZBII[0x8];                                   // 0x0688(0x0008) Fix Super Size
		class UIGSpecialMoveProfile*                               SpecialMoveProfile;                                      // 0x0690(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UIGMoveMontage*                                      SpecialMoveToSet;                                        // 0x0698(0x0008) Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		EMoveTier                                                  SpecialMoveTier;                                         // 0x06A0(0x0001) Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_NQCY[0x7];                                   // 0x06A1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class USkeletalMeshComponent*                              SkeletalMeshComponent;                                   // 0x06A8(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UIGMoveMontage*                                      ObjectLoopSequence;                                      // 0x06B0(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UIGMoveMontage*                                      ObjectChoiceMadeSequence;                                // 0x06B8(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected

	public:
		void StopLoopAnimation();
		EMoveTier GetCurrentTier();
		class UIGMoveMontage* GetCurrentMove();
		void ConsumeSpecialMoveConsumable();
		static UClass* StaticClass();
	};

	/**
	 * Class IGActorSystem.IGSpecialMoveConsumer
	 * Size -> 0x0040 (FullSize[0x00F0] - InheritedSize[0x00B0])
	 */
	class UIGSpecialMoveConsumer : public UActorComponent
	{
	public:
		class FScriptMulticastDelegate                             OnPerformSpecialMoveEquipChoice;                         // 0x00B0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnSpecialMoveConsumableConsumed;                         // 0x00C0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class AIGCharacter*                                        IGCharacter;                                             // 0x00D0(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_LCZ3[0x18];                                  // 0x00D8(0x0018) MISSED OFFSET (PADDING)

	public:
		void TakeAPerk();
		void StopSpecialMoveConsumableLoopAnimation();
		void StopReading();
		void PerformSpecialMoveEquipChoice(class AIGSpecialMoveConsumable* Magazine, class UIGMoveMontage* MoveMontage, EMoveTier ExecutionTier);
		void OnSpecialMoveConsumableConsumed__DelegateSignature();
		void OnPerformSpecialMoveEquipChoice__DelegateSignature(class UIGMoveMontage* MoveMontage, EMoveTier ExecutionTier);
		void AssignMoveToEquipToSlotTwo();
		void AssignMoveToEquipToSlotOne();
		static UClass* StaticClass();
	};

	/**
	 * Class IGActorSystem.IGSpecialMoveEquipActor
	 * Size -> 0x0010 (FullSize[0x0390] - InheritedSize[0x0380])
	 */
	class AIGSpecialMoveEquipActor : public AIGItemEquipActor
	{
	public:
		class UIGMoveMontage*                                      SpecialMoveToUse;                                        // 0x0380(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		EMoveTier                                                  SpecialMoveTierToUse;                                    // 0x0388(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_4C2T[0x7];                                   // 0x0389(0x0007) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class IGActorSystem.IGSpecialTransitionWindow
	 * Size -> 0x0020 (FullSize[0x00B8] - InheritedSize[0x0098])
	 */
	class UIGSpecialTransitionWindow : public UIGNotifyStateBase
	{
	public:
		int32_t                                                    LookbackMS;                                              // 0x0098(0x0004) Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		int32_t                                                    TransitionCloseDelayMS;                                  // 0x009C(0x0004) Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bAllowTransitionOnHit;                                   // 0x00A0(0x0001) Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bAllowTransitionOnBlock;                                 // 0x00A1(0x0001) Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bAllowTransitionOnWhiff;                                 // 0x00A2(0x0001) Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bCheckVerticalVelocity;                                  // 0x00A3(0x0001) Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      VerticalVelocityThreshold;                               // 0x00A4(0x0004) Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bVerticalCheckLessThan;                                  // 0x00A8(0x0001) Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bCheckHorizontalVelocity;                                // 0x00A9(0x0001) Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_DBV7[0x2];                                   // 0x00AA(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      HorizontalVelocityThreshold;                             // 0x00AC(0x0004) Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bHorizontalCheckLessThan;                                // 0x00B0(0x0001) Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_W9FP[0x7];                                   // 0x00B1(0x0007) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class IGActorSystem.IGSpectatorPawn
	 * Size -> 0x0010 (FullSize[0x02E0] - InheritedSize[0x02D0])
	 */
	class AIGSpectatorPawn : public ASpectatorPawn
	{
	public:
		float                                                      PanUpDownValue;                                          // 0x02D0(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      SpeedMultiplier;                                         // 0x02D4(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_8JRH[0x8];                                   // 0x02D8(0x0008) MISSED OFFSET (PADDING)

	public:
		void SetAllowMovement(bool AllowMovement);
		bool IsMovementAllowed();
		static UClass* StaticClass();
	};

	/**
	 * Class IGActorSystem.IGSpringArmComponent
	 * Size -> 0x0350 (FullSize[0x0600] - InheritedSize[0x02B0])
	 */
	class UIGSpringArmComponent : public USpringArmComponent
	{
	public:
		bool                                                       bCameraManuallyMoved;                                    // 0x02B0(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bOwnerControllingCamera;                                 // 0x02B1(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUseMotionInfluence;                                     // 0x02B2(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_7G44[0x1];                                   // 0x02B3(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      MotionInfluenceWeight;                                   // 0x02B4(0x0004) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MinimumMotionInfluence;                                  // 0x02B8(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaximumMotionInfluence;                                  // 0x02BC(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_OMIL[0x14];                                  // 0x02C0(0x0014) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      ManualPeekSpeedModifier;                                 // 0x02D4(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      PeekDistance;                                            // 0x02D8(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       DrawDebugPeekCapsules;                                   // 0x02DC(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_IMSO[0x3];                                   // 0x02DD(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      PeekColliderDistanceMultiplier;                          // 0x02E0(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      PeekMinAngle;                                            // 0x02E4(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      PeekMaxAngle;                                            // 0x02E8(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIsCurrentlyPlayerControlled;                            // 0x02EC(0x0001) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_JMKK[0x3];                                   // 0x02ED(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      MaxTimeBetweenFollowUpAttacks;                           // 0x02F0(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bClashCamShakeEnabled;                                   // 0x02F4(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ECRB[0x3];                                   // 0x02F5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      ClashCamShakeScale;                                      // 0x02F8(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_FOS9[0x4];                                   // 0x02FC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UClass*                                              ClashCamShakeClass;                                      // 0x0300(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      PitchRotateSpeed;                                        // 0x0308(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      PitchRotateMaxSpeed;                                     // 0x030C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      YawRotateSpeed;                                          // 0x0310(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      YawRotateMaxSpeed;                                       // 0x0314(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      DefaultTargetArmLength;                                  // 0x0318(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      CannonLaunchArmLength;                                   // 0x031C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      CannonLaunchLerpAlpha;                                   // 0x0320(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      CannonLaunchLerpBufferDistance;                          // 0x0324(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FVector                                             OriginalTargetOffset;                                    // 0x0328(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_M7T7[0x15];                                  // 0x0334(0x0015) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		EIGCameraState                                             CameraState;                                             // 0x0349(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_675O[0x2];                                   // 0x034A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      TimeLastCamInput;                                        // 0x034C(0x0004) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      PlayerMoveInput;                                         // 0x0350(0x0004) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FVector                                             DefaultSpringArmPosition;                                // 0x0354(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FVector                                             DefaultClimbingSpringArmPosition;                        // 0x0360(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       EnforceClimbingYawLimit;                                 // 0x036C(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_4BBS[0x3];                                   // 0x036D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      ClimbingYawLimit;                                        // 0x0370(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      TimeStartedClimbing;                                     // 0x0374(0x0004) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bIsLedgeUp;                                              // 0x0378(0x0001) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_1HNQ[0x3];                                   // 0x0379(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    ClimbDirectionHorizontal;                                // 0x037C(0x0004) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		int32_t                                                    ClimbDirectionVertical;                                  // 0x0380(0x0004) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      TimeClimbDirectionHorizontalUpdated;                     // 0x0384(0x0004) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      TimeClimbDirectionVerticalUpdated;                       // 0x0388(0x0004) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      TimeClimbingAngleNeedsAdjustment;                        // 0x038C(0x0004) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bBehindPlayer;                                           // 0x0390(0x0001) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_OCAU[0x3];                                   // 0x0391(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      ClimbAutoCamDisableDuration;                             // 0x0394(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bClimbCamCanReenableItself;                              // 0x0398(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_8K3A[0x3];                                   // 0x0399(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      TimeToReenableClimbingCamera;                            // 0x039C(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bAutoYawClimbEnabled;                                    // 0x03A0(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bAutoPitchClimbEnabled;                                  // 0x03A1(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bClimbCamOffsetEnabled;                                  // 0x03A2(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_A2JH[0x1];                                   // 0x03A3(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      AutoRotateClimbInitialWaitDuration;                      // 0x03A4(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      MinSpeedPercentageForClimbOffset;                        // 0x03A8(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bMaintainClimbOffsetWhenPlayerNotMoving;                 // 0x03AC(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_2FC3[0x3];                                   // 0x03AD(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      ClimbPlayerOffsetHorizontal;                             // 0x03B0(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      ClimbPlayerOffsetVertical;                               // 0x03B4(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      ClimbLineTraceDistanceHorizontal;                        // 0x03B8(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      ClimbLineTraceDistanceVertical;                          // 0x03BC(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      WallForwardCastHorizontalOffset;                         // 0x03C0(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      WallForwardCastDistance;                                 // 0x03C4(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      ClimbWaitTimeBeforeMoving;                               // 0x03C8(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      ClimbWaitTimeBeforeRotating;                             // 0x03CC(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      RecenterNearWallSpeed;                                   // 0x03D0(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      MoveSpeedClimb;                                          // 0x03D4(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      ClimbCorniceOffset;                                      // 0x03D8(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_34G8[0x4];                                   // 0x03DC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UCurveFloat*                                         ClimbYawCurve;                                           // 0x03E0(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UCurveFloat*                                         ClimbPitchCurve;                                         // 0x03E8(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      ClimbTargetYaw;                                          // 0x03F0(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      ClimbTargetPitch;                                        // 0x03F4(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      ClimbMaxPitchChange;                                     // 0x03F8(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      AutoYawClimbSpeed;                                       // 0x03FC(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      AutoPitchClimbSpeed;                                     // 0x0400(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      InvalidYawClimbCorrectionSpeed;                          // 0x0404(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      ClimbYawCenterThresholdWhenMoving;                       // 0x0408(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      ClimbYawCenterThresholdWhenNotMoving;                    // 0x040C(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      ClimbYawBigTurnThreshold;                                // 0x0410(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      ClimbYawBigTurnDelay;                                    // 0x0414(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      ClimbSpringDelayArmLength;                               // 0x0418(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      ClimbSpringDelayTimeLimit;                               // 0x041C(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bCameraReactedToSwingStart;                              // 0x0420(0x0001) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_50NA[0x3];                                   // 0x0421(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      CombatDashDuration;                                      // 0x0424(0x0004) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class AIGCharacter*                                        CombatTarget;                                            // 0x0428(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bIsAttacker;                                             // 0x0430(0x0001) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_2JHB[0x3];                                   // 0x0431(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      TimeLastHit;                                             // 0x0434(0x0004) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      TimeCombatStateEntered;                                  // 0x0438(0x0004) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bTargetYawReachedCombat;                                 // 0x043C(0x0001) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bTargetPitchReachedCombat;                               // 0x043D(0x0001) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_9X7O[0x2];                                   // 0x043E(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             TargetHitPositionLocal;                                  // 0x0440(0x000C) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bIsFollowUpAttack;                                       // 0x044C(0x0001) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_Q6SH[0x3];                                   // 0x044D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      CombatTargetValidDuration;                               // 0x0450(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      CombatDashTimeMultiplier;                                // 0x0454(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bCombatCamCanReenableItself;                             // 0x0458(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_ZLR0[0x3];                                   // 0x0459(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      TimeToReenableCombatCamera;                              // 0x045C(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bAutoPitchInCombatEnabled;                               // 0x0460(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bAutoYawInCombatEnabled;                                 // 0x0461(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_P49Z[0x6];                                   // 0x0462(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UCurveFloat*                                         CombatYawCurveNewTarget;                                 // 0x0468(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UCurveFloat*                                         CombatYawCurveExistingTarget;                            // 0x0470(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      MaxYawRotationCombat;                                    // 0x0478(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      MaxPitchRotationCombat;                                  // 0x047C(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      MaxCombatRotationTime;                                   // 0x0480(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      AutoYawInCombatSpeed;                                    // 0x0484(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      AutoPitchInCombatSpeed;                                  // 0x0488(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      CombatTargetPitch;                                       // 0x048C(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      CombatCameraFlipLength;                                  // 0x0490(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      CombatCameraFlipCooldown;                                // 0x0494(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      TimeLastFlippedCamera;                                   // 0x0498(0x0004) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bDeathCamInterruptible;                                  // 0x049C(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bDeathCamEnabled;                                        // 0x049D(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_YROR[0x2];                                   // 0x049E(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      DeathPitchCorrectionSpeed;                               // 0x04A0(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      DeathSpinSpeed;                                          // 0x04A4(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      DeathSpinTargetPitch;                                    // 0x04A8(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bWaterInstakillCamEnabled;                               // 0x04AC(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bWaterInstakillCamInterruptible;                         // 0x04AD(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_ODNK[0x2];                                   // 0x04AE(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector2D                                           WaterInstakillPitchRange;                                // 0x04B0(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      WaterInstakillRotationChangeSpeed;                       // 0x04B8(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_HFVT[0x1C];                                  // 0x04BC(0x001C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		bool                                                       bFallCamEnabled;                                         // 0x04D8(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_FNWW[0x3];                                   // 0x04D9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      AutoPitchFallSpeed;                                      // 0x04DC(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      AutoPitchElbowDropSpeed;                                 // 0x04E0(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      FallTargetPitch;                                         // 0x04E4(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      ElbowDropTargetPitch;                                    // 0x04E8(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      ElbowDropMinDistance;                                    // 0x04EC(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      TimeAttachToAttackerEnded;                               // 0x04F0(0x0004) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      PostAttachToAttackerReturnDuration;                      // 0x04F4(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      PostAttachToAttackerReturnMaxSpeed;                      // 0x04F8(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      TimeStartedPinning;                                      // 0x04FC(0x0004) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UCameraAnimInst*                                     CurrentPinAnimation;                                     // 0x0500(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      LastHandledPinTimeStamp;                                 // 0x0508(0x0004) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bPinCamEnabled;                                          // 0x050C(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_0J0B[0x3];                                   // 0x050D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UCameraAnim*                                         PinCameraAnim;                                           // 0x0510(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      ResetCamTargetPitch;                                     // 0x0518(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      ResetPitchMaxAngle;                                      // 0x051C(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      ResetPitchMinAngle;                                      // 0x0520(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_86SN[0x4];                                   // 0x0524(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class AIGPlayerState*>                              Players;                                                 // 0x0528(0x0010) BlueprintVisible, ZeroConstructor, Transient, Protected, NativeAccessSpecifierProtected
		float                                                      MinPlayerVisibleDistance;                                // 0x0538(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      VisibilityChangeSpeed;                                   // 0x053C(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bIsElbowDropping;                                        // 0x0540(0x0001) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_MWQB[0x3];                                   // 0x0541(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      TimeStoppedClimbing;                                     // 0x0544(0x0004) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bReorientCamEnabled;                                     // 0x0548(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_WAIP[0x3];                                   // 0x0549(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      ReorientStateDuration;                                   // 0x054C(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      ReorientTargetPitch;                                     // 0x0550(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      ReorientPitchSpeed;                                      // 0x0554(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      TraversalAutoCamDisableDuration;                         // 0x0558(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bTraversalCamEnabled;                                    // 0x055C(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_0E07[0x3];                                   // 0x055D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      DashCamOffset;                                           // 0x0560(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      CamOffsetDefaultMoveSpeed;                               // 0x0564(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      DashSpeedMultiplier;                                     // 0x0568(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      AutoYawTraversalSpeed;                                   // 0x056C(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UCurveFloat*                                         TraversalYawCurveDotInfluence;                           // 0x0570(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      TimeZoomStateChanged;                                    // 0x0578(0x0004) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		EIGCameraZoomState                                         ZoomState;                                               // 0x057C(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		EIGCameraZoomState                                         LastZoomState;                                           // 0x057D(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_I0FX[0x2];                                   // 0x057E(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      CurrentZoomSpeed;                                        // 0x0580(0x0004) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      DefaultZoomSpeed;                                        // 0x0584(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      DesiredArmLength;                                        // 0x0588(0x0004) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      DefaultArmLength;                                        // 0x058C(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bOnlyZoomingOut;                                         // 0x0590(0x0001) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_W5EE[0x7];                                   // 0x0591(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TMap<EIGCameraZoomState, struct FIGCameraZoomModeInfo>     ZoomModesInfo;                                           // 0x0598(0x0050) Edit, BlueprintVisible, BlueprintReadOnly, Protected, NativeAccessSpecifierProtected
		class UCurveFloat*                                         DefaultZoomDistanceCurve;                                // 0x05E8(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      CombatZoomMinMoveSpeedPercentage;                        // 0x05F0(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      CombatZoomInDurationWhenNotMoving;                       // 0x05F4(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      CombatZoomInDurationWhenMoving;                          // 0x05F8(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_XRT5[0x4];                                   // 0x05FC(0x0004) MISSED OFFSET (PADDING)

	public:
		void SetupForPinning(class AIGCharacter* OtherCharacter, bool bIsPerformingPin);
		void SetupForClimbing(bool bIsAttaching);
		void SetupForClash(class AIGCharacter* ClashingCharacter);
		void SetupForAttackHit(class AIGCharacter* InCombatTarget, bool bInIsAttacker, bool bIsSpecialMove, bool bIsVictimStunned, const struct FVector& AttackMoveDirection, bool bIsGrapple);
		void RotateCameraYawNoAdjustmentNative(float RotationValue);
		void RotateCameraYawNative(float Value, bool bIsKeyboardInput);
		void RotateCameraPitchNoAdjustmentNative(float RotationValue);
		void RotateCameraPitchNative(float Value, bool bIsKeyboardInput);
		void ResetEdgePeeking();
		void HandleRotateCameraUpInput(bool bPressed);
		void HandleRotateCameraRightInput(bool bPressed);
		void HandleRotateCameraLeftInput(bool bPressed);
		void HandleRotateCameraDownInput(bool bPressed);
		void HandleResetCameraInput(bool bPressed);
		void HandleCameraTurnRaw(float Value, class AIGCharacter* OwnerCharacter);
		void HandleCameraTurn(float Rate, float TurnCurrent, class AIGCharacter* OwnerCharacter);
		void HandleCameraLookUpRaw(float Value, class AIGCharacter* OwnerCharacter);
		void HandleCameraLookUp(float Rate, float LookUpCurrent, class AIGCharacter* OwnerCharacter);
		float GetFallDistance();
		void ExitAimingMode(float InTransitionDuration);
		void EventTickComponent(float DeltaTime);
		void EnterAimingMode(float InTransitionDuration, const struct FVector& InAimingModeOffset);
		void CameraMoveInputReceived(float InYaw, float InPitch);
		static UClass* StaticClass();
	};

	/**
	 * Class IGActorSystem.IGSpringboardInterface
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UIGSpringboardInterface : public UInterface
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class IGActorSystem.IGStaticRewardCollectible
	 * Size -> 0x0018 (FullSize[0x02A0] - InheritedSize[0x0288])
	 */
	class AIGStaticRewardCollectible : public AIGRewardCollectibleBase
	{
	public:
		struct FTimerHandle                                        ResetTimer;                                              // 0x0288(0x0008) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      TimeToReset;                                             // 0x0290(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                RenderGroupName;                                         // 0x0294(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_R0LC[0x4];                                   // 0x029C(0x0004) MISSED OFFSET (PADDING)

	public:
		void ResetTimerExpired();
		void OnCollectibleReset();
		static UClass* StaticClass();
	};

	/**
	 * Class IGActorSystem.IGStaticRandomRewardCollectible
	 * Size -> 0x0058 (FullSize[0x02F8] - InheritedSize[0x02A0])
	 */
	class AIGStaticRandomRewardCollectible : public AIGStaticRewardCollectible
	{
	public:
		TMap<EIGCollectibleRewardType, struct FIGRandomRewardCollectibleInfo> RewardTypeMap;                                           // 0x02A0(0x0050) Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, ContainsInstancedReference, NativeAccessSpecifierPublic
		class USceneComponent*                                     CurrentRepresentationComponent;                          // 0x02F0(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, InstancedReference, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		void OnRep_CurrentRepresentationComponent();
		static UClass* StaticClass();
	};

	/**
	 * Class IGActorSystem.IGStatsDataAsset
	 * Size -> 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
	 */
	class UIGStatsDataAsset : public UDataAsset
	{
	public:
		TArray<struct FIGStat>                                     Stats;                                                   // 0x0030(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class IGActorSystem.IGStatsSystem
	 * Size -> 0x0080 (FullSize[0x00A8] - InheritedSize[0x0028])
	 */
	class UIGStatsSystem : public UObject
	{
	public:
		TArray<struct FIGStat>                                     ReplicatedStatList;                                      // 0x0028(0x0010) Net, ZeroConstructor, RepNotify, NativeAccessSpecifierPublic
		bool                                                       bIsUnlocked;                                             // 0x0038(0x0001) Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_L99C[0x7];                                   // 0x0039(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnStatsUnlockedAndSafeForReads;                          // 0x0040(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		TMap<class FName, uint16_t>                                StatNameToReplicatedListIndex;                           // 0x0050(0x0050) NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_1V04[0x8];                                   // 0x00A0(0x0008) MISSED OFFSET (PADDING)

	public:
		void ResetStatValues();
		void OnStatsUnlockedAndSafeForReads__DelegateSignature();
		void OnRep_ReplicatedStatList();
		bool GetAllStats(TMap<class FName, float>* OutCurrentStats);
		void DumpStats();
		void DebugDumpStatNames();
		static UClass* StaticClass();
	};

	/**
	 * Class IGActorSystem.IGSuperstarComponent
	 * Size -> 0x0078 (FullSize[0x0128] - InheritedSize[0x00B0])
	 */
	class UIGSuperstarComponent : public UActorComponent
	{
	public:
		float                                                      FameDrainRate;                                           // 0x00B0(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      SpecialMoveFameCost;                                     // 0x00B4(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		TMap<EIGModValueType, struct FIGModStackFloat>             Mods;                                                    // 0x00B8(0x0050) Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected
		float                                                      AttackMultiplier;                                        // 0x0108(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_A7LG[0x4];                                   // 0x010C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UIGMovesetData*                                      SuperstarMoveset;                                        // 0x0110(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      HealthRegen;                                             // 0x0118(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_D1V7[0xC];                                   // 0x011C(0x000C) MISSED OFFSET (PADDING)

	public:
		bool IsSuperstarModeActive();
		static UClass* StaticClass();
	};

	/**
	 * Class IGActorSystem.IGSuperstarNotify
	 * Size -> 0x0008 (FullSize[0x00A0] - InheritedSize[0x0098])
	 */
	class UIGSuperstarNotify : public UIGNotifyBase
	{
	public:
		EIGSuperstarNotifyType                                     Type;                                                    // 0x0098(0x0001) Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bShouldDrainFameOnDeactivation;                          // 0x0099(0x0001) Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_7PVC[0x6];                                   // 0x009A(0x0006) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class IGActorSystem.IGSwingableComponent
	 * Size -> 0x0030 (FullSize[0x0550] - InheritedSize[0x0520])
	 */
	class UIGSwingableComponent : public UIGInteractableComponent
	{
	public:
		unsigned char                                              UnknownData_VBF1[0x8];                                   // 0x0520(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      MaxDistanceToSwingPoint;                                 // 0x0528(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      InteractFacingThreshold;                                 // 0x052C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      LaunchXYOverride;                                        // 0x0530(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      LaunchZOverride;                                         // 0x0534(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_MXO2[0x18];                                  // 0x0538(0x0018) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class IGActorSystem.IGSwingingAllowedState
	 * Size -> 0x0000 (FullSize[0x0098] - InheritedSize[0x0098])
	 */
	class UIGSwingingAllowedState : public UIGNotifyStateBase
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class IGActorSystem.IGSwingLaunchNotify
	 * Size -> 0x0000 (FullSize[0x0098] - InheritedSize[0x0098])
	 */
	class UIGSwingLaunchNotify : public UIGNotifyBase
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class IGActorSystem.IGSwingStartNotify
	 * Size -> 0x0000 (FullSize[0x0098] - InheritedSize[0x0098])
	 */
	class UIGSwingStartNotify : public UIGNotifyBase
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class IGActorSystem.IGTeleportNotify
	 * Size -> 0x0038 (FullSize[0x00D0] - InheritedSize[0x0098])
	 */
	class UIGTeleportNotify : public UIGNotifyBase
	{
	public:
		unsigned char                                              UnknownData_4QHD[0x8];                                   // 0x0098(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          TeleportDestination;                                     // 0x00A0(0x0030) Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class IGActorSystem.IGTitleStorageBase
	 * Size -> 0x0048 (FullSize[0x0070] - InheritedSize[0x0028])
	 */
	class UIGTitleStorageBase : public UObject
	{
	public:
		unsigned char                                              UnknownData_3L2X[0x48];                                  // 0x0028(0x0048) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class IGActorSystem.IGUIActor
	 * Size -> 0x0010 (FullSize[0x0230] - InheritedSize[0x0220])
	 */
	class AIGUIActor : public AActor
	{
	public:
		class UIGCharacterSFXComponent*                            SFXComponent;                                            // 0x0220(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UIGCharacterVFXComponent*                            VFXComponent;                                            // 0x0228(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		class UIGCharacterVFXComponent* GetVFXComponent();
		class UIGCharacterSFXComponent* GetSFXComponent();
		static UClass* StaticClass();
	};

	/**
	 * Class IGActorSystem.IGVFXHandlerActor
	 * Size -> 0x0000 (FullSize[0x0220] - InheritedSize[0x0220])
	 */
	class AIGVFXHandlerActor : public AActor
	{
	public:
		void HandleVictimStatusNotificationBP(class AActor* Attacker, class AActor* Victim, EQueuedAttackVictimStatus Status);
		void HandleResetAllFallVFXBP(class AActor* Character);
		void HandleRemoteCharacterDisplaySecondsChangeVFXBP(int32_t Value, class AIGCharacter* Target);
		void HandlePerkRemovedNotifyVFXBP(const struct FIGVFXPerkNotifyInfo& EventInfo);
		void HandlePerkGainedNotifyVFXBP(const struct FIGVFXPerkNotifyInfo& EventInfo);
		void HandlePerkDeactivateNotifyVFXBP(const struct FIGVFXPerkNotifyInfo& EventInfo);
		void HandlePerkActivateNotifyVFXBP(const struct FIGVFXPerkNotifyInfo& EventInfo);
		void HandleHitBlockNotificationBP(const struct FIGVFXHitBlockEventInfo& HitBlockInfo);
		void HandleHealingNotifyVFXBP(class AActor* TargetHealed, float HealedAmount);
		void HandleFallTierNotifyVFXBP(const struct FIGVFXFallTierNotifyInfo& EventInfo);
		void HandleFallEndNotifyVFXBP(const class FName& EventName, const struct FIGVFXFallEndNotifyInfo& EventInfo);
		void HandleAnimNotifyVFXBP(const class FName& EventName, const struct FIGVFXAnimNotifyEventInfo& EventInfo);
		void HandleAnimNotifyStateTickVFXBP(const class FName& EventName, const struct FIGVFXAnimNotifyEventInfo& EventInfo);
		void HandleAnimNotifyStateEndVFXBP(const class FName& EventName, const struct FIGVFXAnimNotifyEventInfo& EventInfo);
		void HandleAnimNotifyStateBeginVFXBP(const class FName& EventName, const struct FIGVFXAnimNotifyEventInfo& EventInfo);
		class AIGVFXHandlerActor* GetGenericVFXHandler(class UObject* WorldContextObject);
		static UClass* StaticClass();
	};

	/**
	 * Class IGActorSystem.IGVFXNotify
	 * Size -> 0x0038 (FullSize[0x00D0] - InheritedSize[0x0098])
	 */
	class UIGVFXNotify : public UIGNotifyBase
	{
	public:
		class FName                                                VFXEventName;                                            // 0x0098(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FIGAdditionalParams                                 AdditionalParams;                                        // 0x00A0(0x0028) Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic
		struct FGameplayTag                                        ParentTag;                                               // 0x00C8(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class IGActorSystem.IGVFXNotifyState
	 * Size -> 0x0040 (FullSize[0x00D8] - InheritedSize[0x0098])
	 */
	class UIGVFXNotifyState : public UIGNotifyStateBase
	{
	public:
		class FName                                                VFXEventName;                                            // 0x0098(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FIGAdditionalParams                                 AdditionalParams;                                        // 0x00A0(0x0028) Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic
		struct FGameplayTag                                        ParentTag;                                               // 0x00C8(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bSendTickUpdates;                                        // 0x00D0(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_7I8C[0x7];                                   // 0x00D1(0x0007) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class IGActorSystem.IGPlayParticleEffect
	 * Size -> 0x00C0 (FullSize[0x0150] - InheritedSize[0x0090])
	 */
	class UIGPlayParticleEffect : public UAnimNotify_PlayParticleEffect
	{
	public:
		bool                                                       bEnableCastShadow;                                       // 0x0090(0x0001) Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIsPlayerMesh;                                           // 0x0091(0x0001) Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bLocalPlayerOnly;                                        // 0x0092(0x0001) Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_A68J[0x5];                                   // 0x0093(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TMap<class UPhysicalMaterial*, class UParticleSystem*>     OverridePS;                                              // 0x0098(0x0050) Edit, BlueprintReadOnly, NativeAccessSpecifierPublic
		TMap<class UIGPerkData*, struct FIGPerkBasedPlayParticleEffect> PerkBasedParticleOptions;                                // 0x00E8(0x0050) Edit, BlueprintReadOnly, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_7N2R[0x18];                                  // 0x0138(0x0018) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class IGActorSystem.IGTieredPlayParticleEffect
	 * Size -> 0x00F8 (FullSize[0x0190] - InheritedSize[0x0098])
	 */
	class UIGTieredPlayParticleEffect : public UIGNotifyBase
	{
	public:
		bool                                                       bEnableCastShadow;                                       // 0x0098(0x0001) Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIsPlayerMesh;                                           // 0x0099(0x0001) Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_WBQ8[0x6];                                   // 0x009A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TMap<class UPhysicalMaterial*, class UParticleSystem*>     OverridePS;                                              // 0x00A0(0x0050) Edit, BlueprintReadOnly, NativeAccessSpecifierPublic
		TMap<class UIGPerkData*, struct FIGPerkBasedPlayParticleEffect> PerkBasedParticleOptions;                                // 0x00F0(0x0050) Edit, BlueprintReadOnly, NativeAccessSpecifierPublic
		class UParticleSystem*                                     PSTemplate;                                              // 0x0140(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             LocationOffset;                                          // 0x0148(0x000C) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FRotator                                            RotationOffset;                                          // 0x0154(0x000C) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FVector                                             Scale;                                                   // 0x0160(0x000C) Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_6OQ8[0x14];                                  // 0x016C(0x0014) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		bool                                                       Attached : 1;                                            // 0x0180(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_9LBH[0x3];                                   // 0x0181(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                SocketName;                                              // 0x0184(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_U5ZY[0x4];                                   // 0x018C(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class IGActorSystem.IGTieredTimedParticleEffect
	 * Size -> 0x00D0 (FullSize[0x0168] - InheritedSize[0x0098])
	 */
	class UIGTieredTimedParticleEffect : public UIGNotifyStateBase
	{
	public:
		class UParticleSystem*                                     PSTemplate;                                              // 0x0098(0x0008) Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TMap<class UPhysicalMaterial*, class UParticleSystem*>     OverridePS;                                              // 0x00A0(0x0050) Edit, BlueprintReadOnly, NativeAccessSpecifierPublic
		class FName                                                SocketName;                                              // 0x00F0(0x0008) Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             LocationOffset;                                          // 0x00F8(0x000C) Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FRotator                                            RotationOffset;                                          // 0x0104(0x000C) Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bDestroyAtEnd;                                           // 0x0110(0x0001) Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bEnableCastShadow;                                       // 0x0111(0x0001) Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIsPlayerMesh;                                           // 0x0112(0x0001) Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bLocalPlayerOnly;                                        // 0x0113(0x0001) Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_2KT8[0x4];                                   // 0x0114(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TMap<class UIGPerkData*, struct FIGPerkBasedTimedParticleEffect> PerkBasedParticleOptions;                                // 0x0118(0x0050) Edit, BlueprintReadOnly, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class IGActorSystem.IGVFXPhysActor
	 * Size -> 0x0048 (FullSize[0x0268] - InheritedSize[0x0220])
	 */
	class AIGVFXPhysActor : public AActor
	{
	public:
		unsigned char                                              UnknownData_94XP[0x20];                                  // 0x0220(0x0020) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      BeforeReturnToPoolEventDelay;                            // 0x0240(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_0T87[0xC];                                   // 0x0244(0x000C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnActorAboutToReturnToPool;                              // 0x0250(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class UStaticMeshComponent*                                StaticMeshComp;                                          // 0x0260(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected

	public:
		void OnActorAboutToReturnToPool__DelegateSignature();
		void ImmediateDespawn();
		void AddImpulse(const struct FVector& RelativeImpulse);
		static UClass* StaticClass();
	};

	/**
	 * Class IGActorSystem.IGWakeupAttackStatNotify
	 * Size -> 0x0000 (FullSize[0x0098] - InheritedSize[0x0098])
	 */
	class UIGWakeupAttackStatNotify : public UIGStatUpdateNotify
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class IGActorSystem.IGWakeupBlockStatNotify
	 * Size -> 0x0000 (FullSize[0x0098] - InheritedSize[0x0098])
	 */
	class UIGWakeupBlockStatNotify : public UIGStatUpdateNotify
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class IGActorSystem.IGWakeupRollStatNotify
	 * Size -> 0x0000 (FullSize[0x0098] - InheritedSize[0x0098])
	 */
	class UIGWakeupRollStatNotify : public UIGStatUpdateNotify
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class IGActorSystem.IGWalletAsset
	 * Size -> 0x0018 (FullSize[0x0048] - InheritedSize[0x0030])
	 */
	class UIGWalletAsset : public UPrimaryDataAsset
	{
	public:
		class FName                                                WalletId;                                                // 0x0030(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              LiveOpsName;                                             // 0x0038(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class IGActorSystem.IGWalletAssetUtils
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UIGWalletAssetUtils : public UObject
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class IGActorSystem.IGWeaponContainer
	 * Size -> 0x0070 (FullSize[0x0770] - InheritedSize[0x0700])
	 */
	class AIGWeaponContainer : public AIGWeaponBase
	{
	public:
		bool                                                       bConsumable;                                             // 0x0700(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIsTrackable;                                            // 0x0701(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIsPickupable;                                           // 0x0702(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ITYE[0x5];                                   // 0x0703(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UIGMoveMontage*                                      UnpickupableMontage;                                     // 0x0708(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class UIGLootProfile*>                              LootProfiles;                                            // 0x0710(0x0010) Edit, ZeroConstructor, Protected, NativeAccessSpecifierProtected
		TArray<class UIGCollectibleProfile*>                       CollectibleProfiles;                                     // 0x0720(0x0010) Edit, ZeroConstructor, Protected, NativeAccessSpecifierProtected
		struct FVector2D                                           SpawnItemVerticalSpeed;                                  // 0x0730(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FVector2D                                           SpawnItemHorizontalSpeed;                                // 0x0738(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_U214[0x8];                                   // 0x0740(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                SmashedStatName;                                         // 0x0748(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UClass*                                              ValidKeyClass;                                           // 0x0750(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		int32_t                                                    KeyDurabilityCost;                                       // 0x0758(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		int32_t                                                    KeyDurabilityThreshold;                                  // 0x075C(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FGameplayTag                                        OwnedTargetingTag;                                       // 0x0760(0x0008) Edit, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_EN7D[0x8];                                   // 0x0768(0x0008) MISSED OFFSET (PADDING)

	public:
		void OnWeaponContainerHit_BP(bool bWasSuccessfulHit);
		bool NeedsKeyToReact();
		static UClass* StaticClass();
	};

	/**
	 * Class IGActorSystem.ItemThrowNotify
	 * Size -> 0x0010 (FullSize[0x00A8] - InheritedSize[0x0098])
	 */
	class UItemThrowNotify : public UIGNotifyBase
	{
	public:
		bool                                                       bUseCameraDirection;                                     // 0x0098(0x0001) Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_1NJ3[0x3];                                   // 0x0099(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                QuickThrowOverrideProfileName;                           // 0x009C(0x0008) Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_NN8O[0x4];                                   // 0x00A4(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class IGActorSystem.ModifyCharacterResourceState
	 * Size -> 0x0018 (FullSize[0x00B0] - InheritedSize[0x0098])
	 */
	class UModifyCharacterResourceState : public UIGNotifyStateBase
	{
	public:
		bool                                                       bInstant;                                                // 0x0098(0x0001) Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_GB4G[0x3];                                   // 0x0099(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      Health;                                                  // 0x009C(0x0004) Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      Stamina;                                                 // 0x00A0(0x0004) Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       DoNotLowerStaminaIfWinded;                               // 0x00A4(0x0001) Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       PreventSelfKO;                                           // 0x00A5(0x0001) Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_QMI0[0x2];                                   // 0x00A6(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      Fame;                                                    // 0x00A8(0x0004) Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_LYWR[0x4];                                   // 0x00AC(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class IGActorSystem.MovesetInterface
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UMovesetInterface : public UInterface
	{
	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
