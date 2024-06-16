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
	 * 		Name   -> Function AudioFunctionLibrary.AudioFunctionLibrary_C.GetPlayerCharReference
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class ABP_SheikCharacter_C*                        BPCharacter                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAudioFunctionLibrary_C::GetPlayerCharReference(class UObject* __WorldContext, class ABP_SheikCharacter_C** BPCharacter)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AudioFunctionLibrary.AudioFunctionLibrary_C.GetPlayerCharReference");
		
		UAudioFunctionLibrary_C_GetPlayerCharReference_Params params {};
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (BPCharacter != nullptr)
			*BPCharacter = params.BPCharacter;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AudioFunctionLibrary.AudioFunctionLibrary_C.Handle Scrollable List Sound
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UWidget*                                     CallingWidget                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              ScrollOffset                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              ScrollSoundOffset                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              NewScrollSoundOffset                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAudioFunctionLibrary_C::HandleScrollableListSound(class UWidget* CallingWidget, float ScrollOffset, float ScrollSoundOffset, class UObject* __WorldContext, float* NewScrollSoundOffset)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AudioFunctionLibrary.AudioFunctionLibrary_C.Handle Scrollable List Sound");
		
		UAudioFunctionLibrary_C_HandleScrollableListSound_Params params {};
		params.CallingWidget = CallingWidget;
		params.ScrollOffset = ScrollOffset;
		params.ScrollSoundOffset = ScrollSoundOffset;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (NewScrollSoundOffset != nullptr)
			*NewScrollSoundOffset = params.NewScrollSoundOffset;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AudioFunctionLibrary.AudioFunctionLibrary_C.Handle ButtonReleased Sound
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UWidget*                                     CallingWidget                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UAudioComponent*                             inHoldButtonLoop                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAudioFunctionLibrary_C::HandleButtonReleasedSound(class UWidget* CallingWidget, class UAudioComponent* inHoldButtonLoop, class UObject* __WorldContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AudioFunctionLibrary.AudioFunctionLibrary_C.Handle ButtonReleased Sound");
		
		UAudioFunctionLibrary_C_HandleButtonReleasedSound_Params params {};
		params.CallingWidget = CallingWidget;
		params.inHoldButtonLoop = inHoldButtonLoop;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AudioFunctionLibrary.AudioFunctionLibrary_C.Handle Button Held Sound
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UWidget*                                     CallingWidget                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UAudioComponent*                             outHoldButtonLoop                                          (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAudioFunctionLibrary_C::HandleButtonHeldSound(class UWidget* CallingWidget, class UObject* __WorldContext, class UAudioComponent** outHoldButtonLoop)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AudioFunctionLibrary.AudioFunctionLibrary_C.Handle Button Held Sound");
		
		UAudioFunctionLibrary_C_HandleButtonHeldSound_Params params {};
		params.CallingWidget = CallingWidget;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (outHoldButtonLoop != nullptr)
			*outHoldButtonLoop = params.outHoldButtonLoop;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AudioFunctionLibrary.AudioFunctionLibrary_C.Play UISound
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UWidget*                                     CallingWidget                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		EUISounds                                          SoundType                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAudioFunctionLibrary_C::PlayUISound(class UWidget* CallingWidget, EUISounds SoundType, class UObject* __WorldContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AudioFunctionLibrary.AudioFunctionLibrary_C.Play UISound");
		
		UAudioFunctionLibrary_C_PlayUISound_Params params {};
		params.CallingWidget = CallingWidget;
		params.SoundType = SoundType;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAudioFunctionLibrary_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAudioFunctionLibrary_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass AudioFunctionLibrary.AudioFunctionLibrary_C");
		return ptr;
	}

}


