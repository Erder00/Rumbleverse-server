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
	 * Class IGCozmoServer.IGCozmoServerDedicatedServer
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UIGCozmoServerDedicatedServer : public UBlueprintFunctionLibrary
	{
	public:
		bool RemovePlayerSessionAsync(const class FString& PlayerSessionId, const class FScriptDelegate& Callback, class FString* ErrorString);
		bool RemovePlayerSession(const class FString& PlayerSessionId, class FString* ErrorString);
		bool HasFinishedPreauthorization();
		bool GrantCode(const struct FCozmoGrantCodeRequest& Request, const class FScriptDelegate& Callback, class FString* ErrorString);
		bool CozmoHasDedicatedServer();
		bool AcceptPlayerSessionAsync(const class FString& PlayerSessionId, const class FScriptDelegate& Callback, class FString* ErrorString);
		bool AcceptPlayerSession(const class FString& PlayerSessionId, class FString* ErrorString);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
