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
	 * Function SheikHotfix.SheikHotfixManager.OnFinishHotfixing
	 */
	struct USheikHotfixManager_OnFinishHotfixing_Params
	{
	public:
		EHotfixResult                                              Result;                                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SheikHotfix.SheikHotfixSystem.StartHotfixCheckToSpecifiedVersion
	 */
	struct USheikHotfixSystem_StartHotfixCheckToSpecifiedVersion_Params
	{
	public:
		int32_t                                                    DesiredVersion;                                          // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SheikHotfix.SheikHotfixSystem.StartHotfixCheck
	 */
	struct USheikHotfixSystem_StartHotfixCheck_Params
	{	};

	/**
	 * Function SheikHotfix.SheikHotfixSystem.StartDeferredHotfixCheck
	 */
	struct USheikHotfixSystem_StartDeferredHotfixCheck_Params
	{	};

	/**
	 * Function SheikHotfix.SheikHotfixSystem.OverrideHotfixVersion
	 */
	struct USheikHotfixSystem_OverrideHotfixVersion_Params
	{
	public:
		int32_t                                                    InVersion;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SheikHotfix.SheikHotfixSystem.IsOnHotfixVersion
	 */
	struct USheikHotfixSystem_IsOnHotfixVersion_Params
	{
	public:
		int32_t                                                    InVersion;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SheikHotfix.SheikHotfixSystem.IsHotfixCheckRunning
	 */
	struct USheikHotfixSystem_IsHotfixCheckRunning_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SheikHotfix.SheikHotfixSystem.IsDeferredCheckRunning
	 */
	struct USheikHotfixSystem_IsDeferredCheckRunning_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SheikHotfix.SheikHotfixSystem.GetHotfixLatestVersionValue
	 */
	struct USheikHotfixSystem_GetHotfixLatestVersionValue_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SheikHotfix.SheikHotfixSystem.GetCurrentHotfixVersion
	 */
	struct USheikHotfixSystem_GetCurrentHotfixVersion_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SheikHotfix.SheikHotfixSystem.FinishDeferredHotfixCheck
	 */
	struct USheikHotfixSystem_FinishDeferredHotfixCheck_Params
	{
	public:
		int32_t                                                    DesiredVersion;                                          // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SheikHotfix.SheikUpdateManager.OnHotfixManagerDeferred
	 */
	struct USheikUpdateManager_OnHotfixManagerDeferred_Params
	{
	public:
		TArray<int32_t>                                            OutVersions;                                             // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
