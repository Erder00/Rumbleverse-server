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
	 * Function WBP_Sheik_Legend.WBP_Sheik_Legend_C.CreateKeyFromBindingName
	 */
	struct UWBP_Sheik_Legend_C_CreateKeyFromBindingName_Params
	{
	public:
		class FName                                                BindingName;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FText                                                LabelOverride;                                           // 0x0008(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function WBP_Sheik_Legend.WBP_Sheik_Legend_C.ClearKeys
	 */
	struct UWBP_Sheik_Legend_C_ClearKeys_Params
	{	};

	/**
	 * Function WBP_Sheik_Legend.WBP_Sheik_Legend_C.CreateKey
	 */
	struct UWBP_Sheik_Legend_C_CreateKey_Params
	{
	public:
		struct FS_Sheik_InputBindingKeyEntry                       KeyEntry;                                                // 0x0000(0x0028)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Sheik_Legend.WBP_Sheik_Legend_C.GetKeys
	 */
	struct UWBP_Sheik_Legend_C_GetKeys_Params
	{
	public:
		TArray<struct FS_Sheik_InputBindingKeyEntry>               Keys;                                                    // 0x0000(0x0010)  (Parm, OutParm)
	};

	/**
	 * Function WBP_Sheik_Legend.WBP_Sheik_Legend_C.SetKeys
	 */
	struct UWBP_Sheik_Legend_C_SetKeys_Params
	{
	public:
		TArray<struct FS_Sheik_InputBindingKeyEntry>               InputBindingKeys;                                        // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function WBP_Sheik_Legend.WBP_Sheik_Legend_C.PreConstruct
	 */
	struct UWBP_Sheik_Legend_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_Sheik_Legend.WBP_Sheik_Legend_C.ExecuteUbergraph_WBP_Sheik_Legend
	 */
	struct UWBP_Sheik_Legend_C_ExecuteUbergraph_WBP_Sheik_Legend_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
