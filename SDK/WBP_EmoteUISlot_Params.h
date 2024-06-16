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
	 * Function WBP_EmoteUISlot.WBP_EmoteUISlot_C.PlayEmoteSelectSound
	 */
	struct UWBP_EmoteUISlot_C_PlayEmoteSelectSound_Params
	{
	public:
		struct FInputEventData                                     InputEventData;                                          // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function WBP_EmoteUISlot.WBP_EmoteUISlot_C.UpdateEmoteUISlotProperties
	 */
	struct UWBP_EmoteUISlot_C_UpdateEmoteUISlotProperties_Params
	{
	public:
		class FText                                                DisplayName;                                             // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		unsigned char                                              UnknownData_2T9Q[0x28];                                  // 0x0018(0x0028) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function WBP_EmoteUISlot.WBP_EmoteUISlot_C.ConstructOnlyOnce
	 */
	struct UWBP_EmoteUISlot_C_ConstructOnlyOnce_Params
	{	};

	/**
	 * Function WBP_EmoteUISlot.WBP_EmoteUISlot_C.ExecuteUbergraph_WBP_EmoteUISlot
	 */
	struct UWBP_EmoteUISlot_C_ExecuteUbergraph_WBP_EmoteUISlot_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
