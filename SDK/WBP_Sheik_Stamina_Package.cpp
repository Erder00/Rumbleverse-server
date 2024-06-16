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
	 * 		Name   -> Function WBP_Sheik_Stamina.WBP_Sheik_Stamina_C.GetStartingWindedValue
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              StartingWindedValue                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_Stamina_C::GetStartingWindedValue(float* StartingWindedValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Stamina.WBP_Sheik_Stamina_C.GetStartingWindedValue");
		
		UWBP_Sheik_Stamina_C_GetStartingWindedValue_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (StartingWindedValue != nullptr)
			*StartingWindedValue = params.StartingWindedValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Stamina.WBP_Sheik_Stamina_C.OnWindedUpdated
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsWinded                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              StaminaPercentage                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_Stamina_C::OnWindedUpdated(bool IsWinded, float StaminaPercentage)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Stamina.WBP_Sheik_Stamina_C.OnWindedUpdated");
		
		UWBP_Sheik_Stamina_C_OnWindedUpdated_Params params {};
		params.IsWinded = IsWinded;
		params.StaminaPercentage = StaminaPercentage;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Stamina.WBP_Sheik_Stamina_C.OnInsufficientStamina_cb
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Stam                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_Stamina_C::OnInsufficientStamina_cb(float Stam)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Stamina.WBP_Sheik_Stamina_C.OnInsufficientStamina_cb");
		
		UWBP_Sheik_Stamina_C_OnInsufficientStamina_cb_Params params {};
		params.Stam = Stam;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Stamina.WBP_Sheik_Stamina_C.SetForPlayer
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ASheikPlayerStateCommon*                     SheikPlayerState                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_Stamina_C::SetForPlayer(class ASheikPlayerStateCommon* SheikPlayerState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Stamina.WBP_Sheik_Stamina_C.SetForPlayer");
		
		UWBP_Sheik_Stamina_C_SetForPlayer_Params params {};
		params.SheikPlayerState = SheikPlayerState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Stamina.WBP_Sheik_Stamina_C.OnStaminaChanged_cb
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              StaminaPecentage                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              StaminaMax                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_Stamina_C::OnStaminaChanged_cb(float StaminaPecentage, float StaminaMax)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Stamina.WBP_Sheik_Stamina_C.OnStaminaChanged_cb");
		
		UWBP_Sheik_Stamina_C_OnStaminaChanged_cb_Params params {};
		params.StaminaPecentage = StaminaPecentage;
		params.StaminaMax = StaminaMax;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Stamina.WBP_Sheik_Stamina_C.Tick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_Stamina_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Stamina.WBP_Sheik_Stamina_C.Tick");
		
		UWBP_Sheik_Stamina_C_Tick_Params params {};
		params.MyGeometry = MyGeometry;
		params.InDeltaTime = InDeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Stamina.WBP_Sheik_Stamina_C.HandleOnWinded
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              StaminaPercentage                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_Stamina_C::HandleOnWinded(float StaminaPercentage)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Stamina.WBP_Sheik_Stamina_C.HandleOnWinded");
		
		UWBP_Sheik_Stamina_C_HandleOnWinded_Params params {};
		params.StaminaPercentage = StaminaPercentage;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Stamina.WBP_Sheik_Stamina_C.HandleOnNoLongerWinded
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_Stamina_C::HandleOnNoLongerWinded()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Stamina.WBP_Sheik_Stamina_C.HandleOnNoLongerWinded");
		
		UWBP_Sheik_Stamina_C_HandleOnNoLongerWinded_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Stamina.WBP_Sheik_Stamina_C.ConstructOnlyOnce
	 * 		Flags  -> ()
	 */
	void UWBP_Sheik_Stamina_C::ConstructOnlyOnce()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Stamina.WBP_Sheik_Stamina_C.ConstructOnlyOnce");
		
		UWBP_Sheik_Stamina_C_ConstructOnlyOnce_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sheik_Stamina.WBP_Sheik_Stamina_C.ExecuteUbergraph_WBP_Sheik_Stamina
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Sheik_Stamina_C::ExecuteUbergraph_WBP_Sheik_Stamina(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Sheik_Stamina.WBP_Sheik_Stamina_C.ExecuteUbergraph_WBP_Sheik_Stamina");
		
		UWBP_Sheik_Stamina_C_ExecuteUbergraph_WBP_Sheik_Stamina_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWBP_Sheik_Stamina_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWBP_Sheik_Stamina_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_Sheik_Stamina.WBP_Sheik_Stamina_C");
		return ptr;
	}

}


