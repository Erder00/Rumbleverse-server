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
	 * Function WBP_Sheik_InteractionPrompt.WBP_Sheik_InteractionPrompt_C.OnContextInteractableActorChanged
	 */
	struct UWBP_Sheik_InteractionPrompt_C_OnContextInteractableActorChanged_Params
	{
	public:
		class UIGInteractableBoxComponent*                         InteractableBoxComponent;                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UObject*                                             Interactable;                                            // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Sheik_InteractionPrompt.WBP_Sheik_InteractionPrompt_C.UpdateInteractText
	 */
	struct UWBP_Sheik_InteractionPrompt_C_UpdateInteractText_Params
	{	};

	/**
	 * Function WBP_Sheik_InteractionPrompt.WBP_Sheik_InteractionPrompt_C.GetClimbPromptWorldPosition
	 */
	struct UWBP_Sheik_InteractionPrompt_C_GetClimbPromptWorldPosition_Params
	{
	public:
		struct FVector                                             ClimbPromptPosition;                                     // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_727L[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function WBP_Sheik_InteractionPrompt.WBP_Sheik_InteractionPrompt_C.HideWallGrabPrompt_cb
	 */
	struct UWBP_Sheik_InteractionPrompt_C_HideWallGrabPrompt_cb_Params
	{
	public:
		struct FVector                                             ToWall;                                                  // 0x0000(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Sheik_InteractionPrompt.WBP_Sheik_InteractionPrompt_C.ShowWallGrabPrompt_cb
	 */
	struct UWBP_Sheik_InteractionPrompt_C_ShowWallGrabPrompt_cb_Params
	{
	public:
		struct FVector                                             ToWall;                                                  // 0x0000(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_AFJA[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function WBP_Sheik_InteractionPrompt.WBP_Sheik_InteractionPrompt_C.OnPinEvent_cb
	 */
	struct UWBP_Sheik_InteractionPrompt_C_OnPinEvent_cb_Params
	{
	public:
		ESheikPinEventType                                         EventType;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_T8M1[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class ASheikCharacter*                                     Attacker;                                                // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class ASheikCharacter*                                     Victim;                                                  // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Sheik_InteractionPrompt.WBP_Sheik_InteractionPrompt_C.UpdatePinVisibility
	 */
	struct UWBP_Sheik_InteractionPrompt_C_UpdatePinVisibility_Params
	{	};

	/**
	 * Function WBP_Sheik_InteractionPrompt.WBP_Sheik_InteractionPrompt_C.UpdatePromptPosition
	 */
	struct UWBP_Sheik_InteractionPrompt_C_UpdatePromptPosition_Params
	{	};

	/**
	 * Function WBP_Sheik_InteractionPrompt.WBP_Sheik_InteractionPrompt_C.UpatePromptVisibility
	 */
	struct UWBP_Sheik_InteractionPrompt_C_UpatePromptVisibility_Params
	{	};

	/**
	 * Function WBP_Sheik_InteractionPrompt.WBP_Sheik_InteractionPrompt_C.OnInteractableStatusChanged_cb
	 */
	struct UWBP_Sheik_InteractionPrompt_C_OnInteractableStatusChanged_cb_Params
	{
	public:
		class AIGCharacter*                                        InteractableActor;                                       // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Sheik_InteractionPrompt.WBP_Sheik_InteractionPrompt_C.ConstructOnlyOnce
	 */
	struct UWBP_Sheik_InteractionPrompt_C_ConstructOnlyOnce_Params
	{	};

	/**
	 * Function WBP_Sheik_InteractionPrompt.WBP_Sheik_InteractionPrompt_C.Tick
	 */
	struct UWBP_Sheik_InteractionPrompt_C_Tick_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		float                                                      InDeltaTime;                                             // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Sheik_InteractionPrompt.WBP_Sheik_InteractionPrompt_C.ExecuteUbergraph_WBP_Sheik_InteractionPrompt
	 */
	struct UWBP_Sheik_InteractionPrompt_C_ExecuteUbergraph_WBP_Sheik_InteractionPrompt_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
