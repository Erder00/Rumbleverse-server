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
	 * Function WBP_Sheik_Stat_Pip.WBP_Sheik_Stat_Pip_C.SetData
	 */
	struct UWBP_Sheik_Stat_Pip_C_SetData_Params
	{
	public:
		ESheikModValueType                                         StatType;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       Base;                                                    // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_Sheik_Stat_Pip.WBP_Sheik_Stat_Pip_C.Set Pip Color
	 */
	struct UWBP_Sheik_Stat_Pip_C_SetPipColor_Params
	{
	public:
		ESheikModValueType                                         StatType;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       Base;                                                    // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_Sheik_Stat_Pip.WBP_Sheik_Stat_Pip_C.SetImage
	 */
	struct UWBP_Sheik_Stat_Pip_C_SetImage_Params
	{
	public:
		bool                                                       Empty;                                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
