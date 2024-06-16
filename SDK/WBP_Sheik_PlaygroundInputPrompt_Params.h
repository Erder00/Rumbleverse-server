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
	 * Function WBP_Sheik_PlaygroundInputPrompt.WBP_Sheik_PlaygroundInputPrompt_C.GetTextureForAction
	 */
	struct UWBP_Sheik_PlaygroundInputPrompt_C_GetTextureForAction_Params
	{
	public:
		class FName                                                InActionName;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UTexture2D*                                          OutTexture;                                              // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Sheik_PlaygroundInputPrompt.WBP_Sheik_PlaygroundInputPrompt_C.SetActionName
	 */
	struct UWBP_Sheik_PlaygroundInputPrompt_C_SetActionName_Params
	{
	public:
		class FName                                                InActionName;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Sheik_PlaygroundInputPrompt.WBP_Sheik_PlaygroundInputPrompt_C.ConstructOnlyOnce
	 */
	struct UWBP_Sheik_PlaygroundInputPrompt_C_ConstructOnlyOnce_Params
	{	};

	/**
	 * Function WBP_Sheik_PlaygroundInputPrompt.WBP_Sheik_PlaygroundInputPrompt_C.OnInputSourceChanged
	 */
	struct UWBP_Sheik_PlaygroundInputPrompt_C_OnInputSourceChanged_Params
	{
	public:
		struct FUserControllerData                                 OldInputSource;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
		struct FUserControllerData                                 NewInputSource;                                          // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	};

	/**
	 * Function WBP_Sheik_PlaygroundInputPrompt.WBP_Sheik_PlaygroundInputPrompt_C.PreConstruct
	 */
	struct UWBP_Sheik_PlaygroundInputPrompt_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_Sheik_PlaygroundInputPrompt.WBP_Sheik_PlaygroundInputPrompt_C.ExecuteUbergraph_WBP_Sheik_PlaygroundInputPrompt
	 */
	struct UWBP_Sheik_PlaygroundInputPrompt_C_ExecuteUbergraph_WBP_Sheik_PlaygroundInputPrompt_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
