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
	 * Function BP_Sheik_EntryHUD.BP_Sheik_EntryHUD_C.ReceiveBeginPlay
	 */
	struct ABP_Sheik_EntryHUD_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BP_Sheik_EntryHUD.BP_Sheik_EntryHUD_C.ReceiveDrawHUD
	 */
	struct ABP_Sheik_EntryHUD_C_ReceiveDrawHUD_Params
	{
	public:
		int32_t                                                    SizeX;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    SizeY;                                                   // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Sheik_EntryHUD.BP_Sheik_EntryHUD_C.NotifyReadyToInitialize
	 */
	struct ABP_Sheik_EntryHUD_C_NotifyReadyToInitialize_Params
	{	};

	/**
	 * Function BP_Sheik_EntryHUD.BP_Sheik_EntryHUD_C.ExecuteUbergraph_BP_Sheik_EntryHUD
	 */
	struct ABP_Sheik_EntryHUD_C_ExecuteUbergraph_BP_Sheik_EntryHUD_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
