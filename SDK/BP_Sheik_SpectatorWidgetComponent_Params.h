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
	 * Function BP_Sheik_SpectatorWidgetComponent.BP_Sheik_SpectatorWidgetComponent_C.SetHealthbarVisibility22
	 */
	struct UBP_Sheik_SpectatorWidgetComponent_C_SetHealthbarVisibility22_Params
	{
	public:
		bool                                                       IsVisible;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_PZFB[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_Sheik_SpectatorWidgetComponent.BP_Sheik_SpectatorWidgetComponent_C.SetWidgetShouldBeShown
	 */
	struct UBP_Sheik_SpectatorWidgetComponent_C_SetWidgetShouldBeShown_Params
	{
	public:
		bool                                                       NewVisibility;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_Sheik_SpectatorWidgetComponent.BP_Sheik_SpectatorWidgetComponent_C.SetForPlayer
	 */
	struct UBP_Sheik_SpectatorWidgetComponent_C_SetForPlayer_Params
	{
	public:
		class ASheikPlayerStateCommon*                             SheikPlayerState;                                        // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Sheik_SpectatorWidgetComponent.BP_Sheik_SpectatorWidgetComponent_C.UpdateRenderScale
	 */
	struct UBP_Sheik_SpectatorWidgetComponent_C_UpdateRenderScale_Params
	{
	public:
		struct FVector2D                                           NewScale;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Sheik_SpectatorWidgetComponent.BP_Sheik_SpectatorWidgetComponent_C.SetHealthbarVisiblity
	 */
	struct UBP_Sheik_SpectatorWidgetComponent_C_SetHealthbarVisiblity_Params
	{
	public:
		bool                                                       IsVisible;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_Sheik_SpectatorWidgetComponent.BP_Sheik_SpectatorWidgetComponent_C.ExecuteUbergraph_BP_Sheik_SpectatorWidgetComponent
	 */
	struct UBP_Sheik_SpectatorWidgetComponent_C_ExecuteUbergraph_BP_Sheik_SpectatorWidgetComponent_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_6Q2T[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
