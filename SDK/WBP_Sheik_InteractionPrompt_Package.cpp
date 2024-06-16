/**
 * Name: Rumbleverse
 * Version: Latest
 */

#include "pch.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_InteractionPrompt.WBP_Sheik_InteractionPrompt_C.OnContextInteractableActorChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UIGInteractableBoxComponent*                 InteractableBoxComponent                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     Interactable                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_InteractionPrompt_C::OnContextInteractableActorChanged(class UIGInteractableBoxComponent* InteractableBoxComponent, class UObject* Interactable)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_InteractionPrompt.WBP_Sheik_InteractionPrompt_C.OnContextInteractableActorChanged");
		
		UWBP_Sheik_InteractionPrompt_C_OnContextInteractableActorChanged_Params params {};
		params.InteractableBoxComponent = InteractableBoxComponent;
		params.Interactable = Interactable;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_InteractionPrompt.WBP_Sheik_InteractionPrompt_C.UpdateInteractText
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_InteractionPrompt_C::UpdateInteractText()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_InteractionPrompt.WBP_Sheik_InteractionPrompt_C.UpdateInteractText");
		
		UWBP_Sheik_InteractionPrompt_C_UpdateInteractText_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_InteractionPrompt.WBP_Sheik_InteractionPrompt_C.GetClimbPromptWorldPosition
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                                     ClimbPromptPosition                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_InteractionPrompt_C::GetClimbPromptWorldPosition(struct FVector* ClimbPromptPosition)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_InteractionPrompt.WBP_Sheik_InteractionPrompt_C.GetClimbPromptWorldPosition");
		
		UWBP_Sheik_InteractionPrompt_C_GetClimbPromptWorldPosition_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ClimbPromptPosition != nullptr)
			*ClimbPromptPosition = params.ClimbPromptPosition;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_InteractionPrompt.WBP_Sheik_InteractionPrompt_C.HideWallGrabPrompt_cb
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                                     ToWall                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_InteractionPrompt_C::HideWallGrabPrompt_cb(const struct FVector& ToWall)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_InteractionPrompt.WBP_Sheik_InteractionPrompt_C.HideWallGrabPrompt_cb");
		
		UWBP_Sheik_InteractionPrompt_C_HideWallGrabPrompt_cb_Params params {};
		params.ToWall = ToWall;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_InteractionPrompt.WBP_Sheik_InteractionPrompt_C.ShowWallGrabPrompt_cb
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                                     ToWall                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_InteractionPrompt_C::ShowWallGrabPrompt_cb(const struct FVector& ToWall)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_InteractionPrompt.WBP_Sheik_InteractionPrompt_C.ShowWallGrabPrompt_cb");
		
		UWBP_Sheik_InteractionPrompt_C_ShowWallGrabPrompt_cb_Params params {};
		params.ToWall = ToWall;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_InteractionPrompt.WBP_Sheik_InteractionPrompt_C.OnPinEvent_cb
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESheikPinEventType                                 EventType                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class ASheikCharacter*                             Attacker                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class ASheikCharacter*                             Victim                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_InteractionPrompt_C::OnPinEvent_cb(ESheikPinEventType EventType, class ASheikCharacter* Attacker, class ASheikCharacter* Victim)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_InteractionPrompt.WBP_Sheik_InteractionPrompt_C.OnPinEvent_cb");
		
		UWBP_Sheik_InteractionPrompt_C_OnPinEvent_cb_Params params {};
		params.EventType = EventType;
		params.Attacker = Attacker;
		params.Victim = Victim;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_InteractionPrompt.WBP_Sheik_InteractionPrompt_C.UpdatePinVisibility
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_InteractionPrompt_C::UpdatePinVisibility()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_InteractionPrompt.WBP_Sheik_InteractionPrompt_C.UpdatePinVisibility");
		
		UWBP_Sheik_InteractionPrompt_C_UpdatePinVisibility_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_InteractionPrompt.WBP_Sheik_InteractionPrompt_C.UpdatePromptPosition
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_InteractionPrompt_C::UpdatePromptPosition()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_InteractionPrompt.WBP_Sheik_InteractionPrompt_C.UpdatePromptPosition");
		
		UWBP_Sheik_InteractionPrompt_C_UpdatePromptPosition_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_InteractionPrompt.WBP_Sheik_InteractionPrompt_C.UpatePromptVisibility
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_InteractionPrompt_C::UpatePromptVisibility()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_InteractionPrompt.WBP_Sheik_InteractionPrompt_C.UpatePromptVisibility");
		
		UWBP_Sheik_InteractionPrompt_C_UpatePromptVisibility_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_InteractionPrompt.WBP_Sheik_InteractionPrompt_C.OnInteractableStatusChanged_cb
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AIGCharacter*                                InteractableActor                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_InteractionPrompt_C::OnInteractableStatusChanged_cb(class AIGCharacter* InteractableActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_InteractionPrompt.WBP_Sheik_InteractionPrompt_C.OnInteractableStatusChanged_cb");
		
		UWBP_Sheik_InteractionPrompt_C_OnInteractableStatusChanged_cb_Params params {};
		params.InteractableActor = InteractableActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_InteractionPrompt.WBP_Sheik_InteractionPrompt_C.ConstructOnlyOnce
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_InteractionPrompt_C::ConstructOnlyOnce()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_InteractionPrompt.WBP_Sheik_InteractionPrompt_C.ConstructOnlyOnce");
		
		UWBP_Sheik_InteractionPrompt_C_ConstructOnlyOnce_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_InteractionPrompt.WBP_Sheik_InteractionPrompt_C.Tick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_InteractionPrompt_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_InteractionPrompt.WBP_Sheik_InteractionPrompt_C.Tick");
		
		UWBP_Sheik_InteractionPrompt_C_Tick_Params params {};
		params.MyGeometry = MyGeometry;
		params.InDeltaTime = InDeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_InteractionPrompt.WBP_Sheik_InteractionPrompt_C.ExecuteUbergraph_WBP_Sheik_InteractionPrompt
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_InteractionPrompt_C::ExecuteUbergraph_WBP_Sheik_InteractionPrompt(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_InteractionPrompt.WBP_Sheik_InteractionPrompt_C.ExecuteUbergraph_WBP_Sheik_InteractionPrompt");
		
		UWBP_Sheik_InteractionPrompt_C_ExecuteUbergraph_WBP_Sheik_InteractionPrompt_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWBP_Sheik_InteractionPrompt_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWBP_Sheik_InteractionPrompt_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_Sheik_InteractionPrompt.WBP_Sheik_InteractionPrompt_C");
		return ptr;
	}

}


