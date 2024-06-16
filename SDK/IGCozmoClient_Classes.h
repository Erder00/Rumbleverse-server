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
	 * Class IGCozmoClient.IGCozmoClientFriends
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UIGCozmoClientFriends : public UBlueprintFunctionLibrary
	{
	public:
		bool SendFriendRequest(const class FString& PlayerId, const class FScriptDelegate& Callback, class FString* ErrorString);
		bool RemoveFriend(const class FString& PlayerId, const class FScriptDelegate& Callback, class FString* ErrorString);
		bool GetFriends(const class FScriptDelegate& Callback, class FString* ErrorString);
		bool DeclineFriendRequest(const class FString& PlayerId, const class FScriptDelegate& Callback, class FString* ErrorString);
		bool AcceptFriendRequest(const class FString& PlayerId, const class FScriptDelegate& Callback, class FString* ErrorString);
		static UClass* StaticClass();
	};

	/**
	 * Class IGCozmoClient.IGCozmoClientGameClient
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UIGCozmoClientGameClient : public UBlueprintFunctionLibrary
	{
	public:
		bool StopMatchmakingAsync(const class FScriptDelegate& Callback, class FString* ErrorString);
		bool StopMatchmaking(class FString* ErrorString);
		bool StartMatchmakingAsync(const struct FStartMatchmakingRequest& Request, const class FScriptDelegate& Callback, class FString* ErrorString);
		bool StartMatchmaking(const struct FStartMatchmakingRequest& Request, class FString* ErrorString);
		void SetServerType(EServerHostType Type);
		bool SetPlayerAttributes(TArray<struct FMatchmakerPlayerAttribute> AttributeList, const class FString& MetaData, const class FScriptDelegate& Callback, class FString* ErrorString);
		bool SearchGameSessionsAsync(const struct FSearchGameSessionsRequest& Request, const class FScriptDelegate& Callback, class FString* ErrorString);
		bool SearchGameSessions(const struct FSearchGameSessionsRequest& Request, TArray<struct FCozmoGameSession>* GameSessionList, class FString* ErrorString);
		void ResetState();
		bool ListTaskDefinitionsAsync(const class FScriptDelegate& Callback, class FString* ErrorString);
		bool ListTaskDefinitions(TArray<class FString>* TaskDefinitions, class FString* ErrorString);
		bool ListMatchmakingConfigurationsAsync(const class FScriptDelegate& Callback, class FString* ErrorString);
		bool ListMatchmakingConfigurations(TArray<struct FMatchmakingConfiguration>* ConfigurationList, class FString* ErrorString);
		bool Init(const class FString& GameVersionString, const struct FIGCozmoUnifiedServerClientParams& ClientParams);
		bool HasActiveMatchmakingRequest();
		bool DescribePlayerSessionsAsync(const struct FDescribePlayerSessionsRequest& Request, const class FScriptDelegate& Callback, class FString* ErrorString);
		bool DescribePlayerSessions(const struct FDescribePlayerSessionsRequest& Request, TArray<struct FPlayerSession>* PlayerSessionList, class FString* ErrorString);
		bool DescribeGameSessionsAsync(const struct FDescribeGameSessionsRequest& Request, const class FScriptDelegate& Callback, class FString* ErrorString);
		bool DescribeGameSessions(const struct FDescribeGameSessionsRequest& Request, TArray<struct FCozmoGameSession>* GameSessionList, class FString* ErrorString);
		bool CreatePlayerSessionAsync(const struct FCreatePlayerSessionsRequest& Request, const class FScriptDelegate& Callback, class FString* ErrorString);
		bool CreatePlayerSession(const struct FCreatePlayerSessionsRequest& Request, struct FPlayerSession* CreatedPlayerSession, class FString* ErrorString);
		bool CreateGameSessionAsync(const struct FCreateGameSessionsRequest& Request, const class FScriptDelegate& Callback, class FString* ErrorString);
		bool CreateGameSession(const struct FCreateGameSessionsRequest& Request, struct FCozmoGameSession* CreatedGameSession, class FString* ErrorString);
		bool CozmoHasGameClient();
		void ClearGameSession();
		static UClass* StaticClass();
	};

	/**
	 * Class IGCozmoClient.IGCozmoClientLegalDocs
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UIGCozmoClientLegalDocs : public UBlueprintFunctionLibrary
	{
	public:
		bool GetRequiredLegalDocs(const class FString& Country, const class FString& Language, const class FScriptDelegate& Callback, class FString* ErrorString);
		bool ClearAcceptedLegalDocs(const class FScriptDelegate& Callback, class FString* ErrorString);
		bool AcceptLegalDoc(const class FString& DocName, const class FScriptDelegate& Callback, class FString* ErrorString);
		static UClass* StaticClass();
	};

	/**
	 * Class IGCozmoClient.IGCozmoClientLogin
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UIGCozmoClientLogin : public UBlueprintFunctionLibrary
	{
	public:
		bool GetLoginTicket(const struct FGetLoginTicketRequest& Request, const class FScriptDelegate& Callback, class FString* ErrorString);
		static UClass* StaticClass();
	};

	/**
	 * Class IGCozmoClient.IGCozmoClientParty
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UIGCozmoClientParty : public UBlueprintFunctionLibrary
	{
	public:
		bool LeaveParty(const class FScriptDelegate& Callback, class FString* ErrorString);
		bool KickPlayer(const class FString& PlayerId, const class FScriptDelegate& Callback, class FString* ErrorString);
		bool JoinParty(const class FString& PartyId, const class FScriptDelegate& Callback, class FString* ErrorString);
		bool IsPartyLeader();
		bool IsInParty();
		bool InvitePlayer(const class FString& PlayerId, const class FScriptDelegate& Callback, class FString* ErrorString);
		void IgnoreInvitation(const class FString& PartyId);
		TArray<struct FPartyMemberInfo> GetPartyMembers(bool bIncludeCurrentPlayer);
		class FString GetPartyLeaderId();
		class FString GetPartyID();
		TArray<struct FPartyInvitation> GetInvitations();
		bool CreateParty(int32_t MaxPlayers, const class FScriptDelegate& Callback, class FString* ErrorString);
		bool ChangeLeader(const class FString& PlayerId, const class FScriptDelegate& Callback, class FString* ErrorString);
		bool BroadcastToParty(const class FString& Content, const class FScriptDelegate& Callback, class FString* ErrorString);
		static UClass* StaticClass();
	};

	/**
	 * Class IGCozmoClient.IGCozmoClientPlayerPresence
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UIGCozmoClientPlayerPresence : public UBlueprintFunctionLibrary
	{
	public:
		bool SetPresence(const struct FPlayerPresence& PlayerPresence, const class FScriptDelegate& Callback, class FString* ErrorString);
		bool RefreshPresence(TArray<class FString> PlayerIds, class FString* ErrorString);
		bool GetPresence(const class FString& PlayerId, const class FScriptDelegate& Callback, class FString* ErrorString);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
