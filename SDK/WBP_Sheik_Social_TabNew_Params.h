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
	 * Function WBP_Sheik_Social_TabNew.WBP_Sheik_Social_TabNew_C.SelectTab
	 */
	struct UWBP_Sheik_Social_TabNew_C_SelectTab_Params
	{
	public:
		bool                                                       IsSelected;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       SkipAnimation;                                           // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_IL0O[0x6];                                   // 0x0002(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function WBP_Sheik_Social_TabNew.WBP_Sheik_Social_TabNew_C.ConstructOnlyOnce
	 */
	struct UWBP_Sheik_Social_TabNew_C_ConstructOnlyOnce_Params
	{	};

	/**
	 * Function WBP_Sheik_Social_TabNew.WBP_Sheik_Social_TabNew_C.ExecuteUbergraph_WBP_Sheik_Social_TabNew
	 */
	struct UWBP_Sheik_Social_TabNew_C_ExecuteUbergraph_WBP_Sheik_Social_TabNew_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_0OLE[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
