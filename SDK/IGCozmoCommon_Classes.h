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
	 * Class IGCozmoCommon.IGCozmoCommon
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UIGCozmoCommon : public UBlueprintFunctionLibrary
	{
	public:
		void Shutdown();
		bool ShouldLogUnsupportedPlatformErrors();
		void SetLogUnsupportedPlatformErrors(bool bEnable);
		void SetLoggerMode(ECozmoLoggerMode logMode);
		void SetIsEditor(bool bShouldWait);
		void SetGameVersion(const class FString& GameVersion);
		void SetEnableMemoryLogging(bool bEnabled);
		void SetCozmoTimeouts(const struct FCozmoTimeoutConfig& Config);
		void ResetState();
		bool IsValidCozmoRegion(int32_t Region);
		bool IsNullCozmoBackend();
		bool IsLoggerEnabled();
		bool IsInitialized();
		bool IsEditorWorld(class UObject* WorldContextObject);
		void Init(const class FString& InLogPath, const class FString& InFilePath, bool bCreateCallbackManager);
		bool ImportDLL(class FString* ErrorInfo);
		struct FDateTime GetServerTime();
		class FString GetRegionName(int32_t Region);
		int32_t GetRegionalLatency(int32_t Region);
		class FString GetGameSessionId();
		int32_t GetEstimatedMemoryWatermark();
		int32_t GetEstimatedMemoryUsage();
		bool GetConfigurationInfo(struct FCozmoConfigurationInfo* OutConfigInfo);
		class UIGCozmoCommonCallbackManager* GetCallbackManager();
		TArray<int32_t> GetAvailableRegions();
		void FreeDLL();
		void CreateCallbackManager();
		bool CozmoHasCozmoCommon();
		static UClass* StaticClass();
	};

	/**
	 * Class IGCozmoCommon.IGCozmoCommonAccounts
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UIGCozmoCommonAccounts : public UBlueprintFunctionLibrary
	{
	public:
		bool UnblockPlayer(const class FString& UnblockedPlayer, const class FScriptDelegate& Callback, class FString* ErrorString);
		void SetUsernameSuffix(const class FString& Suffix);
		bool QueryBanInfo(const struct FQueryBanInfoRequest& Request, const class FScriptDelegate& Callback, class FString* ErrorString);
		class FString PasteCozmoIdFromClipboard();
		bool IsAuthenticated(class FString* ErrorString);
		bool GetUniquePlatformUserId(int32_t LocalUserNum, bool bCanShowLoginUI, class FString* UserId, bool bUseNullOSS, bool bAllowLocalUsers);
		bool GetPlatformUsername(int32_t LocalUserNum, class FString* UserName);
		struct FAuthenticationResult GetLastAuthenticationResult();
		bool GetBlockedPlayers(const class FScriptDelegate& Callback, class FString* ErrorString);
		bool GetAccountsInfoAsync(const struct FGetAccountsRequest& Request, const class FScriptDelegate& Callback, class FString* ErrorString);
		bool GetAccountInfoAsync(const struct FGetAccountRequest& Request, const class FScriptDelegate& Callback, class FString* ErrorString);
		bool GetAccountInfo(struct FCozmoUserLoginInfo* OutLoginInfo, class FString* ErrorString);
		void CopyCozmoIdToClipboard();
		bool BlockPlayer(const class FString& BlockedPlayer, const class FScriptDelegate& Callback, class FString* ErrorString);
		bool AuthenticatePlatformToken(const struct FAuthenticatePlatformTokenRequest& Request, const class FScriptDelegate& Callback, class FString* ErrorString);
		bool AuthenticateGuestAsync(const class FString& UserName, const class FScriptDelegate& Callback, class FString* ErrorString);
		bool AuthenticateGuest(const class FString& UserName, class FString* ErrorString);
		static UClass* StaticClass();
	};

	/**
	 * Class IGCozmoCommon.IGCozmoCommonCallbackManager
	 * Size -> 0x06A0 (FullSize[0x06C8] - InheritedSize[0x0028])
	 */
	class UIGCozmoCommonCallbackManager : public UObject
	{
	public:
		unsigned char                                              UnknownData_A3SX[0x8];                                   // 0x0028(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnCozmoServerStartGameSessionDynamic;                    // 0x0030(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_LGIN[0x18];                                  // 0x0040(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnCozmoServerUpdateGameSessionDynamic;                   // 0x0058(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_LY0N[0x18];                                  // 0x0068(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnCozmoServerTerminationDynamic;                         // 0x0080(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_9OQU[0x18];                                  // 0x0090(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnCozmoMessagingClientConnectDynamic;                    // 0x00A8(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ZTS4[0x18];                                  // 0x00B8(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnCozmoMessagingClientFailedDynamic;                     // 0x00D0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_73OQ[0x18];                                  // 0x00E0(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnCozmoMessagingClientDisconnectDynamic;                 // 0x00F8(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_KW7O[0x18];                                  // 0x0108(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnCozmoMessagingClientReconnectingDynamic;               // 0x0120(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_V7MC[0x18];                                  // 0x0130(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnCozmoMessagingClientReconnectDynamic;                  // 0x0148(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_M3TA[0x18];                                  // 0x0158(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnCozmoPartyPlayerJoinedDynamic;                         // 0x0170(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_S5T8[0x18];                                  // 0x0180(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnCozmoPartyPlayerLeftDynamic;                           // 0x0198(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_CC72[0x18];                                  // 0x01A8(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnCozmoPartyPlayerInvitedDynamic;                        // 0x01C0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ENYQ[0x18];                                  // 0x01D0(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnCozmoPartyPlayerKickedDynamic;                         // 0x01E8(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_DKID[0x18];                                  // 0x01F8(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnCozmoLeaderChangedDynamic;                             // 0x0210(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_42SV[0x18];                                  // 0x0220(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnCozmoPartyMemberDataUpdatedDynamic;                    // 0x0238(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_R1GN[0x18];                                  // 0x0248(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnCozmoPartyBroadcastReceivedDynamic;                    // 0x0260(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_QGSX[0x18];                                  // 0x0270(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnCozmoMatchmakingStartedDynamic;                        // 0x0288(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ULDE[0x18];                                  // 0x0298(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnCozmoMatchmakingStoppedDynamic;                        // 0x02B0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_U8U1[0x18];                                  // 0x02C0(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnCozmoPartySessionConnectionInfoReceivedDynamic;        // 0x02D8(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_CA53[0x28];                                  // 0x02E8(0x0028) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnCozmoFriendRequestReceivedDynamic;                     // 0x0310(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_J8ZC[0x18];                                  // 0x0320(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnCozmoFriendRequestAcceptedDynamic;                     // 0x0338(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_88JI[0x18];                                  // 0x0348(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnCozmoFriendsListUpdatedDynamic;                        // 0x0360(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ZJET[0x18];                                  // 0x0370(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnCozmoPresenceUpdatedDynamic;                           // 0x0388(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_LD45[0x18];                                  // 0x0398(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnCozmoMatchmakingUpdatedDynamic;                        // 0x03B0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_FUUR[0x18];                                  // 0x03C0(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnCozmoPlayerAccountBannedDynamic;                       // 0x03D8(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_A5O7[0x18];                                  // 0x03E8(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnCozmoMessageReceivedDynamic;                           // 0x0400(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_1BPE[0x18];                                  // 0x0410(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnCozmoBroadcastReceivedDynamic;                         // 0x0428(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_GUE7[0x18];                                  // 0x0438(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnCozmoForcedLogoutDynamic;                              // 0x0450(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_TVRT[0x268];                                 // 0x0460(0x0268) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class IGCozmoCommon.IGCozmoCommonEntitlements
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UIGCozmoCommonEntitlements : public UBlueprintFunctionLibrary
	{
	public:
		bool UpdatePlatformEntitlements(const struct FUpdatePlatformEntitlementsRequest& Request, const class FScriptDelegate& Callback, class FString* ErrorString);
		bool QueryEntitlements(const struct FQueryEntitlementsRequest& Request, const class FScriptDelegate& Callback, class FString* ErrorString);
		bool GetCoinBalance(const struct FGetCoinBalanceRequest& Request, const class FScriptDelegate& Callback, class FString* ErrorString);
		bool DebugClearEntitlements(const class FScriptDelegate& Callback, class FString* ErrorString);
		bool DebugAddEntitlement(const struct FDebugAddEntitlementRequest& Request, const class FScriptDelegate& Callback, class FString* ErrorString);
		bool DebugAddCoins(const struct FDebugAddCoinsRequest& Request, const class FScriptDelegate& Callback, class FString* ErrorString);
		bool ConsumeEntitlements(const struct FConsumeEntitlementsRequest& Request, const class FScriptDelegate& Callback, class FString* ErrorString);
		static UClass* StaticClass();
	};

	/**
	 * Class IGCozmoCommon.IGCozmoCommonMessages
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UIGCozmoCommonMessages : public UBlueprintFunctionLibrary
	{
	public:
		bool SendPlayerMessage(const class FString& ToPlayerId, const class FString& Message, const class FScriptDelegate& Callback, class FString* ErrorString);
		bool SendPartyMessage(const class FString& Message, const class FScriptDelegate& Callback, class FString* ErrorString);
		bool SendGameMessage(const class FString& Message, const class FScriptDelegate& Callback, class FString* ErrorString);
		static UClass* StaticClass();
	};

	/**
	 * Class IGCozmoCommon.IGCozmoCommonMessagingClient
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UIGCozmoCommonMessagingClient : public UBlueprintFunctionLibrary
	{
	public:
		void MessagingClientEnableLogging(bool bShouldEnable);
		bool MessagingClientEcho(const class FScriptDelegate& Callback, class FString* ErrorString);
		static UClass* StaticClass();
	};

	/**
	 * Class IGCozmoCommon.IGCozmoCommonPlayerData
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UIGCozmoCommonPlayerData : public UBlueprintFunctionLibrary
	{
	public:
		bool UploadPlayerDataAsync(TArray<struct FCozmoPlayerDataItem> ItemsList, const class FScriptDelegate& Callback, class FString* ErrorString);
		bool UploadPlayerData(TArray<struct FCozmoPlayerDataItem>* ItemsList, class FString* ErrorString);
		bool ListPlayerDataTypes(const class FScriptDelegate& Callback, class FString* ErrorString);
		bool DownloadPlayerDataAsync(TArray<struct FCozmoPlayerDataItem> ItemsList, const class FScriptDelegate& Callback, class FString* ErrorString);
		bool DownloadPlayerData(TArray<struct FCozmoPlayerDataItem>* ItemsList, class FString* ErrorString);
		static UClass* StaticClass();
	};

	/**
	 * Class IGCozmoCommon.IGCozmoCommonPurchase
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UIGCozmoCommonPurchase : public UBlueprintFunctionLibrary
	{
	public:
		bool RedeemCodes(const struct FRedeemStoreCodesRequest& Request, const class FScriptDelegate& Callback, class FString* ErrorString);
		bool RedeemCode(const struct FRedeemStoreCodeRequest& Request, const class FScriptDelegate& Callback, class FString* ErrorString);
		bool QueryReceipts(const class FScriptDelegate& Callback, class FString* ErrorString);
		bool Checkout(const struct FCheckoutRequest& Request, const class FScriptDelegate& Callback, class FString* ErrorString);
		bool CheckCreatorStatus(const struct FCheckCreatorStatusRequest& Request, const class FScriptDelegate& Callback, class FString* ErrorString);
		static UClass* StaticClass();
	};

	/**
	 * Class IGCozmoCommon.IGCozmoCommonStats
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UIGCozmoCommonStats : public UBlueprintFunctionLibrary
	{
	public:
		bool SetStatMin(const class FString& StatCategory, const class FString& StatName, float StatValue, bool bIsProtected);
		bool SetStatMax(const class FString& StatCategory, const class FString& StatName, float StatValue, bool bIsProtected);
		bool SetStat(const class FString& StatCategory, const class FString& StatName, float StatValue, bool bIsProtected);
		void ResetState();
		bool RefreshStats(const class FScriptDelegate& Callback, class FString* ErrorString);
		bool IncrementStat(const class FString& StatCategory, const class FString& StatName, float StatValueDelta, bool bIsProtected);
		bool HasStat(const class FString& StatCategory, const class FString& StatName, float StatValue, bool bIsProtected);
		bool GetStat(const class FString& StatCategory, const class FString& StatName, bool bIsProtected, float* OutStatValue);
		bool GetAllStats(const class FString& StatCategory, bool bIsProtected, TMap<class FString, float>* OutStats);
		bool FlushStats(bool bForceUpload, const class FScriptDelegate& Callback, class FString* ErrorString);
		bool DeleteAllStats(const class FScriptDelegate& Callback, class FString* ErrorString);
		static UClass* StaticClass();
	};

	/**
	 * Class IGCozmoCommon.IGCozmoCommonStatsV2
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UIGCozmoCommonStatsV2 : public UBlueprintFunctionLibrary
	{
	public:
		bool UpdateStats(const struct FUpdateCozmoStatsRequest& Request, const class FScriptDelegate& Callback, class FString* ErrorString);
		bool GetStats(const struct FGetCozmoStatsRequest& Request, const class FScriptDelegate& Callback, class FString* ErrorString);
		int32_t GetMaxUserIds();
		int32_t GetMaxStatNames();
		int32_t GetMaxStatFields();
		static UClass* StaticClass();
	};

	/**
	 * Class IGCozmoCommon.IGCozmoCommonStore
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UIGCozmoCommonStore : public UBlueprintFunctionLibrary
	{
	public:
		bool QueryOffersById(const struct FQueryOffersByIdRequest& Request, const class FScriptDelegate& Callback, class FString* ErrorString);
		bool QueryOffersByFilter(const struct FQueryOffersByFilterRequest& Request, const class FScriptDelegate& Callback, class FString* ErrorString);
		bool QueryCodesById(const struct FQueryCodesByIdRequest& Request, const class FScriptDelegate& Callback, class FString* ErrorString);
		bool QueryCategories(const class FScriptDelegate& Callback, class FString* ErrorString);
		static UClass* StaticClass();
	};

	/**
	 * Class IGCozmoCommon.IGCozmoCommonTelemetry
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UIGCozmoCommonTelemetry : public UBlueprintFunctionLibrary
	{
	public:
		bool SetIsTelemetryEnabled(bool bIsEnabled);
		bool PostEvent(const struct FTelemetryEvent& Event, class FString* ErrorString);
		static UClass* StaticClass();
	};

	/**
	 * Class IGCozmoCommon.IGCozmoCommonTitleStorage
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UIGCozmoCommonTitleStorage : public UBlueprintFunctionLibrary
	{
	public:
		bool ListFiles(const class FString& Prefix, const class FScriptDelegate& Callback, class FString* ErrorString);
		bool GenerateHash(const class FString& LocalPath, const class FScriptDelegate& Callback, class FString* ErrorString);
		bool DownloadFileToMemoryAndDisk(const class FString& Filename, const class FString& LocalPath, const class FScriptDelegate& Callback, class FString* ErrorString);
		bool DownloadFileToMemory(const class FString& Filename, const class FScriptDelegate& Callback, class FString* ErrorString);
		bool DownloadFileToDisk(const class FString& Filename, const class FString& LocalPath, const class FScriptDelegate& Callback, class FString* ErrorString);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
