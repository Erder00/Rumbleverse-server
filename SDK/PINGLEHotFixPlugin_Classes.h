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
	 * Class PINGLEHotFixPlugin.HotFixManagerSettings
	 * Size -> 0x0050 (FullSize[0x0080] - InheritedSize[0x0030])
	 */
	class UHotFixManagerSettings : public UDataAsset
	{
	public:
		TMap<class UClass*, EAutoApplyPatch>                       AutoApplyPatch;                                          // 0x0030(0x0050) Edit, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class PINGLEHotFixPlugin.HotfixManager
	 * Size -> 0x0080 (FullSize[0x00A8] - InheritedSize[0x0028])
	 */
	class UHotfixManager : public UObject
	{
	public:
		unsigned char                                              UnknownData_8YKW[0x10];                                  // 0x0028(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TMap<EPatchType, class UPatchInfo*>                        LoadedPatches;                                           // 0x0038(0x0050) NativeAccessSpecifierPrivate
		TArray<class UPatchRequestProxy*>                          InProcessRequests;                                       // 0x0088(0x0010) ZeroConstructor, NativeAccessSpecifierPrivate
		class FScriptMulticastDelegate                             OnPatchLoaded;                                           // 0x0098(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic

	public:
		class UPatchRequestProxy* RequestPatchFromBackend(EPatchType InPatchType, bool bSaveLocallyAfterLoad);
		class FString MakeActorWorldPath(class UObject* Object);
		bool IsPatchLoaded(EPatchType InPatchType);
		class UHotfixManager* Get();
		bool ApplyPatchLocalization();
		bool ApplyPatchForUObject(class UObject* InObjectPtr);
		static UClass* StaticClass();
	};

	/**
	 * Class PINGLEHotFixPlugin.PatchInfo
	 * Size -> 0x0018 (FullSize[0x0040] - InheritedSize[0x0028])
	 */
	class UPatchInfo : public UObject
	{
	public:
		unsigned char                                              UnknownData_R04B[0x18];                                  // 0x0028(0x0018) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class PINGLEHotFixPlugin.PatchInfoSaveGame
	 * Size -> 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
	 */
	class UPatchInfoSaveGame : public USaveGame
	{
	public:
		class FString                                              JsonValue;                                               // 0x0028(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class PINGLEHotFixPlugin.PatchRequestProxy
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UPatchRequestProxy : public UObject
	{
	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
