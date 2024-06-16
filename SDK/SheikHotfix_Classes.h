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
	 * Class SheikHotfix.SheikHotfixManager
	 * Size -> 0x0058 (FullSize[0x0280] - InheritedSize[0x0228])
	 */
	class USheikHotfixManager : public UOnlineHotfixManager
	{
	public:
		unsigned char                                              UnknownData_MGSY[0x28];                                  // 0x0228(0x0028) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class FString>                                      CommonAssetPaths;                                        // 0x0250(0x0010) ZeroConstructor, Config, Protected, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_FVED[0x20];                                  // 0x0260(0x0020) MISSED OFFSET (PADDING)

	public:
		void OnFinishHotfixing(EHotfixResult Result);
		static UClass* StaticClass();
	};

	/**
	 * Class SheikHotfix.SheikHotfixSystem
	 * Size -> 0x0088 (FullSize[0x00B0] - InheritedSize[0x0028])
	 */
	class USheikHotfixSystem : public UObject
	{
	public:
		class FScriptMulticastDelegate                             OnHotfixVersionUpdated;                                  // 0x0028(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ASBY[0x30];                                  // 0x0038(0x0030) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnHotfixBegin;                                           // 0x0068(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPrivate
		class FScriptMulticastDelegate                             OnHotfixSystemDeferred;                                  // 0x0078(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPrivate
		class FScriptMulticastDelegate                             OnHotfixSystemComplete;                                  // 0x0088(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPrivate
		class USheikUpdateManager*                                 UpdateManager;                                           // 0x0098(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_JN5Z[0x10];                                  // 0x00A0(0x0010) MISSED OFFSET (PADDING)

	public:
		void StartHotfixCheckToSpecifiedVersion(int32_t DesiredVersion);
		void StartHotfixCheck();
		void StartDeferredHotfixCheck();
		void OverrideHotfixVersion(int32_t InVersion);
		bool IsOnHotfixVersion(int32_t InVersion);
		bool IsHotfixCheckRunning();
		bool IsDeferredCheckRunning();
		int32_t GetHotfixLatestVersionValue();
		int32_t GetCurrentHotfixVersion();
		void FinishDeferredHotfixCheck(int32_t DesiredVersion);
		static UClass* StaticClass();
	};

	/**
	 * Class SheikHotfix.IGHotfixInterface
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UIGHotfixInterface : public UInterface
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class SheikHotfix.SheikUpdateManager
	 * Size -> 0x0030 (FullSize[0x0140] - InheritedSize[0x0110])
	 */
	class USheikUpdateManager : public UUpdateManager
	{
	public:
		unsigned char                                              UnknownData_R85Q[0x30];                                  // 0x0110(0x0030) MISSED OFFSET (PADDING)

	public:
		void OnHotfixManagerDeferred(TArray<int32_t> OutVersions);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
