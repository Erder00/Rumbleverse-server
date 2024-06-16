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
	 * Function WBP_Sheik_SpecialMoveProperty.WBP_Sheik_SpecialMoveProperty_C.UpdatePropertyInfo
	 */
	struct UWBP_Sheik_SpecialMoveProperty_C_UpdatePropertyInfo_Params
	{
	public:
		struct FS_Sheik_SpecialMoveProperty                        PropertyInfo;                                            // 0x0000(0x0020)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Sheik_SpecialMoveProperty.WBP_Sheik_SpecialMoveProperty_C.ConstructOnlyOnce
	 */
	struct UWBP_Sheik_SpecialMoveProperty_C_ConstructOnlyOnce_Params
	{	};

	/**
	 * Function WBP_Sheik_SpecialMoveProperty.WBP_Sheik_SpecialMoveProperty_C.PreConstruct
	 */
	struct UWBP_Sheik_SpecialMoveProperty_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_Sheik_SpecialMoveProperty.WBP_Sheik_SpecialMoveProperty_C.ExecuteUbergraph_WBP_Sheik_SpecialMoveProperty
	 */
	struct UWBP_Sheik_SpecialMoveProperty_C_ExecuteUbergraph_WBP_Sheik_SpecialMoveProperty_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
