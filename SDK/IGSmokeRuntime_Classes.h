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
	 * Class IGSmokeRuntime.IGSmokeActor
	 * Size -> 0x0038 (FullSize[0x0258] - InheritedSize[0x0220])
	 */
	class AIGSmokeActor : public AActor
	{
	public:
		unsigned char                                              UnknownData_Q3F6[0x38];                                  // 0x0220(0x0038) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class IGSmokeRuntime.IGSmokeTask
	 * Size -> 0x0018 (FullSize[0x0040] - InheritedSize[0x0028])
	 */
	class UIGSmokeTask : public UObject
	{
	public:
		class FName                                                TaskName;                                                // 0x0028(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                AreaCode;                                                // 0x0030(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_A1GS[0x8];                                   // 0x0038(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class IGSmokeRuntime.IGSmokeCameraTask
	 * Size -> 0x0020 (FullSize[0x0060] - InheritedSize[0x0040])
	 */
	class UIGSmokeCameraTask : public UIGSmokeTask
	{
	public:
		class ACameraActor*                                        CameraToGoTo;                                            // 0x0040(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    NumOfCaptures;                                           // 0x0048(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      TimeBetweenCaptures;                                     // 0x004C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      TimeTillFirstCapture;                                    // 0x0050(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_28QZ[0xC];                                   // 0x0054(0x000C) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class IGSmokeRuntime.IGSmokeSettings
	 * Size -> 0x0060 (FullSize[0x0088] - InheritedSize[0x0028])
	 */
	class UIGSmokeSettings : public UObject
	{
	public:
		class FString                                              ProxyAddress;                                            // 0x0028(0x0010) Edit, ZeroConstructor, Config, DisableEditOnInstance, GlobalConfig, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              DBAddress;                                               // 0x0038(0x0010) Edit, ZeroConstructor, Config, DisableEditOnInstance, GlobalConfig, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              DBUser;                                                  // 0x0048(0x0010) Edit, ZeroConstructor, Config, DisableEditOnInstance, GlobalConfig, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              DBPassword;                                              // 0x0058(0x0010) Edit, ZeroConstructor, Config, DisableEditOnInstance, GlobalConfig, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              DBDatabase;                                              // 0x0068(0x0010) Edit, ZeroConstructor, Config, DisableEditOnInstance, GlobalConfig, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       DBIntegrityCheck;                                        // 0x0078(0x0001) Edit, ZeroConstructor, Config, DisableEditOnInstance, GlobalConfig, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_G347[0x7];                                   // 0x0079(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		uint64_t                                                   BatchedCommandsBufferSize;                               // 0x0080(0x0008) Edit, ZeroConstructor, Config, DisableEditOnInstance, GlobalConfig, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class IGSmokeRuntime.IGSmokeStaticCamera
	 * Size -> 0x0040 (FullSize[0x0840] - InheritedSize[0x0800])
	 */
	class AIGSmokeStaticCamera : public ACameraActor
	{
	public:
		double                                                     SettleTime;                                              // 0x0800(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    NumFramesToCapture;                                      // 0x0808(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_2MHD[0x34];                                  // 0x080C(0x0034) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class IGSmokeRuntime.IGSmokeTaskManagerActor
	 * Size -> 0x00B0 (FullSize[0x02D0] - InheritedSize[0x0220])
	 */
	class AIGSmokeTaskManagerActor : public AActor
	{
	public:
		TArray<class UIGSmokeTask*>                                TasksToRun;                                              // 0x0220(0x0010) Edit, ExportObject, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic
		float                                                      TimeTillStartOfSmoke;                                    // 0x0230(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      TimeBetweenTasks;                                        // 0x0234(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      TimeBetweenDataFlushes;                                  // 0x0238(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                ManagerTag;                                              // 0x023C(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_E3TZ[0x24];                                  // 0x0244(0x0024) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		ESmokeTaskManagerState                                     ManagerState;                                            // 0x0268(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_R602[0x67];                                  // 0x0269(0x0067) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class IGSmokeRuntime.PerfCaptureGameMode
	 * Size -> 0x0030 (FullSize[0x02F0] - InheritedSize[0x02C0])
	 */
	class APerfCaptureGameMode : public AGameModeBase
	{
	public:
		unsigned char                                              UnknownData_7HIB[0x30];                                  // 0x02C0(0x0030) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
