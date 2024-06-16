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
	 * Function WBP_Sheik_Login_DevStep.WBP_Sheik_Login_DevStep_C.IsEditing
	 */
	struct UWBP_Sheik_Login_DevStep_C_IsEditing_Params
	{
	public:
		bool                                                       IsEditing;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_Sheik_Login_DevStep.WBP_Sheik_Login_DevStep_C.GetInputData
	 */
	struct UWBP_Sheik_Login_DevStep_C_GetInputData_Params
	{
	public:
		class FString                                              ID;                                                      // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
		class FString                                              Token;                                                   // 0x0010(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
