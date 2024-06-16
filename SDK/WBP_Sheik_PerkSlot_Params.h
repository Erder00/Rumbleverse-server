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
	 * Function WBP_Sheik_PerkSlot.WBP_Sheik_PerkSlot_C.GetPerkTextureFromDataTable
	 */
	struct UWBP_Sheik_PerkSlot_C_GetPerkTextureFromDataTable_Params
	{
	public:
		class FName                                                RowName;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UTexture2D*                                          OutTexture;                                              // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Sheik_PerkSlot.WBP_Sheik_PerkSlot_C.UpdateIcon
	 */
	struct UWBP_Sheik_PerkSlot_C_UpdateIcon_Params
	{
	public:
		class UTexture2D*                                          Texture;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Sheik_PerkSlot.WBP_Sheik_PerkSlot_C.Deactivate
	 */
	struct UWBP_Sheik_PerkSlot_C_Deactivate_Params
	{	};

	/**
	 * Function WBP_Sheik_PerkSlot.WBP_Sheik_PerkSlot_C.Activate
	 */
	struct UWBP_Sheik_PerkSlot_C_Activate_Params
	{
	public:
		struct FIGPerkHUDInfo                                      Info;                                                    // 0x0000(0x0048)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function WBP_Sheik_PerkSlot.WBP_Sheik_PerkSlot_C.ConstructOnlyOnce
	 */
	struct UWBP_Sheik_PerkSlot_C_ConstructOnlyOnce_Params
	{	};

	/**
	 * Function WBP_Sheik_PerkSlot.WBP_Sheik_PerkSlot_C.ExecuteUbergraph_WBP_Sheik_PerkSlot
	 */
	struct UWBP_Sheik_PerkSlot_C_ExecuteUbergraph_WBP_Sheik_PerkSlot_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Sheik_PerkSlot.WBP_Sheik_PerkSlot_C.EventFinished__DelegateSignature
	 */
	struct UWBP_Sheik_PerkSlot_C_EventFinished__DelegateSignature_Params
	{
	public:
		class UIGUI_WidgetBase*                                    Source;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
