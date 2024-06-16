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
	 * Function WBP_Sheik_PromoTag.WBP_Sheik_PromoTag_C.SetStoreData
	 */
	struct UWBP_Sheik_PromoTag_C_SetStoreData_Params
	{
	public:
		struct FSheikStoreItem                                     StoreItem;                                               // 0x0000(0x0320)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function WBP_Sheik_PromoTag.WBP_Sheik_PromoTag_C.UpdateStore
	 */
	struct UWBP_Sheik_PromoTag_C_UpdateStore_Params
	{	};

	/**
	 * Function WBP_Sheik_PromoTag.WBP_Sheik_PromoTag_C.HideBottomWrapTexture
	 */
	struct UWBP_Sheik_PromoTag_C_HideBottomWrapTexture_Params
	{
	public:
		bool                                                       HideTexture;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_Sheik_PromoTag.WBP_Sheik_PromoTag_C.SetTitle
	 */
	struct UWBP_Sheik_PromoTag_C_SetTitle_Params
	{
	public:
		class FText                                                InTitle;                                                 // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function WBP_Sheik_PromoTag.WBP_Sheik_PromoTag_C.PreConstruct
	 */
	struct UWBP_Sheik_PromoTag_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_Sheik_PromoTag.WBP_Sheik_PromoTag_C.ExecuteUbergraph_WBP_Sheik_PromoTag
	 */
	struct UWBP_Sheik_PromoTag_C_ExecuteUbergraph_WBP_Sheik_PromoTag_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
