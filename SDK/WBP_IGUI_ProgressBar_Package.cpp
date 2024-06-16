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
	 * 		Name   -> Function WBP_IGUI_ProgressBar.WBP_IGUI_ProgressBar_C.GetProgressAnimationTimeRemaining
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              TimeRemaining                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_IGUI_ProgressBar_C::GetProgressAnimationTimeRemaining(float* TimeRemaining)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_IGUI_ProgressBar.WBP_IGUI_ProgressBar_C.GetProgressAnimationTimeRemaining");
		
		UWBP_IGUI_ProgressBar_C_GetProgressAnimationTimeRemaining_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (TimeRemaining != nullptr)
			*TimeRemaining = params.TimeRemaining;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_IGUI_ProgressBar.WBP_IGUI_ProgressBar_C.GetIsProgressAnimationPlaying
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsPlaying                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_IGUI_ProgressBar_C::GetIsProgressAnimationPlaying(bool* IsPlaying)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_IGUI_ProgressBar.WBP_IGUI_ProgressBar_C.GetIsProgressAnimationPlaying");
		
		UWBP_IGUI_ProgressBar_C_GetIsProgressAnimationPlaying_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (IsPlaying != nullptr)
			*IsPlaying = params.IsPlaying;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_IGUI_ProgressBar.WBP_IGUI_ProgressBar_C.GetPotentialValue
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              RawValue                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              PercentValue                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_IGUI_ProgressBar_C::GetPotentialValue(float* RawValue, float* PercentValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_IGUI_ProgressBar.WBP_IGUI_ProgressBar_C.GetPotentialValue");
		
		UWBP_IGUI_ProgressBar_C_GetPotentialValue_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (RawValue != nullptr)
			*RawValue = params.RawValue;
		if (PercentValue != nullptr)
			*PercentValue = params.PercentValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_IGUI_ProgressBar.WBP_IGUI_ProgressBar_C.StartDelayFinished
	 * 		Flags  -> ()
	 */
	void UWBP_IGUI_ProgressBar_C::StartDelayFinished()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_IGUI_ProgressBar.WBP_IGUI_ProgressBar_C.StartDelayFinished");
		
		UWBP_IGUI_ProgressBar_C_StartDelayFinished_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_IGUI_ProgressBar.WBP_IGUI_ProgressBar_C.GetPotentialColor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FLinearColor                                Color                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_IGUI_ProgressBar_C::GetPotentialColor(struct FLinearColor* Color)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_IGUI_ProgressBar.WBP_IGUI_ProgressBar_C.GetPotentialColor");
		
		UWBP_IGUI_ProgressBar_C_GetPotentialColor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Color != nullptr)
			*Color = params.Color;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_IGUI_ProgressBar.WBP_IGUI_ProgressBar_C.GetFillColor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FLinearColor                                Color                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_IGUI_ProgressBar_C::GetFillColor(struct FLinearColor* Color)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_IGUI_ProgressBar.WBP_IGUI_ProgressBar_C.GetFillColor");
		
		UWBP_IGUI_ProgressBar_C_GetFillColor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Color != nullptr)
			*Color = params.Color;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_IGUI_ProgressBar.WBP_IGUI_ProgressBar_C.GetFillImage
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UTexture*                                    Image                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_IGUI_ProgressBar_C::GetFillImage(class UTexture** Image)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_IGUI_ProgressBar.WBP_IGUI_ProgressBar_C.GetFillImage");
		
		UWBP_IGUI_ProgressBar_C_GetFillImage_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Image != nullptr)
			*Image = params.Image;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_IGUI_ProgressBar.WBP_IGUI_ProgressBar_C.GetGradientImage
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UTexture*                                    Image                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_IGUI_ProgressBar_C::GetGradientImage(class UTexture** Image)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_IGUI_ProgressBar.WBP_IGUI_ProgressBar_C.GetGradientImage");
		
		UWBP_IGUI_ProgressBar_C_GetGradientImage_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Image != nullptr)
			*Image = params.Image;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_IGUI_ProgressBar.WBP_IGUI_ProgressBar_C.GetMinMax
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              MinValue                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              MaxValue                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_IGUI_ProgressBar_C::GetMinMax(float* MinValue, float* MaxValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_IGUI_ProgressBar.WBP_IGUI_ProgressBar_C.GetMinMax");
		
		UWBP_IGUI_ProgressBar_C_GetMinMax_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (MinValue != nullptr)
			*MinValue = params.MinValue;
		if (MaxValue != nullptr)
			*MaxValue = params.MaxValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_IGUI_ProgressBar.WBP_IGUI_ProgressBar_C.GetCurrentValue
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              RawValue                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              PercentValue                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_IGUI_ProgressBar_C::GetCurrentValue(float* RawValue, float* PercentValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_IGUI_ProgressBar.WBP_IGUI_ProgressBar_C.GetCurrentValue");
		
		UWBP_IGUI_ProgressBar_C_GetCurrentValue_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (RawValue != nullptr)
			*RawValue = params.RawValue;
		if (PercentValue != nullptr)
			*PercentValue = params.PercentValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_IGUI_ProgressBar.WBP_IGUI_ProgressBar_C.SetMinMax
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              MinValue                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              MaxValue                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_IGUI_ProgressBar_C::SetMinMax(float MinValue, float MaxValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_IGUI_ProgressBar.WBP_IGUI_ProgressBar_C.SetMinMax");
		
		UWBP_IGUI_ProgressBar_C_SetMinMax_Params params {};
		params.MinValue = MinValue;
		params.MaxValue = MaxValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_IGUI_ProgressBar.WBP_IGUI_ProgressBar_C.SetGradientReferenceImage
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UTexture*                                    Value                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_IGUI_ProgressBar_C::SetGradientReferenceImage(class UTexture* Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_IGUI_ProgressBar.WBP_IGUI_ProgressBar_C.SetGradientReferenceImage");
		
		UWBP_IGUI_ProgressBar_C_SetGradientReferenceImage_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_IGUI_ProgressBar.WBP_IGUI_ProgressBar_C.SetFillImage
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UTexture*                                    Value                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_IGUI_ProgressBar_C::SetFillImage(class UTexture* Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_IGUI_ProgressBar.WBP_IGUI_ProgressBar_C.SetFillImage");
		
		UWBP_IGUI_ProgressBar_C_SetFillImage_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_IGUI_ProgressBar.WBP_IGUI_ProgressBar_C.SetPotentialColor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FLinearColor                                Color                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_IGUI_ProgressBar_C::SetPotentialColor(const struct FLinearColor& Color)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_IGUI_ProgressBar.WBP_IGUI_ProgressBar_C.SetPotentialColor");
		
		UWBP_IGUI_ProgressBar_C_SetPotentialColor_Params params {};
		params.Color = Color;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_IGUI_ProgressBar.WBP_IGUI_ProgressBar_C.SetFillColor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FLinearColor                                Color                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_IGUI_ProgressBar_C::SetFillColor(const struct FLinearColor& Color)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_IGUI_ProgressBar.WBP_IGUI_ProgressBar_C.SetFillColor");
		
		UWBP_IGUI_ProgressBar_C_SetFillColor_Params params {};
		params.Color = Color;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_IGUI_ProgressBar.WBP_IGUI_ProgressBar_C.SetRawPotentialValue
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Value                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_IGUI_ProgressBar_C::SetRawPotentialValue(float Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_IGUI_ProgressBar.WBP_IGUI_ProgressBar_C.SetRawPotentialValue");
		
		UWBP_IGUI_ProgressBar_C_SetRawPotentialValue_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_IGUI_ProgressBar.WBP_IGUI_ProgressBar_C.SetPercentPotentialValue
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Value                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_IGUI_ProgressBar_C::SetPercentPotentialValue(float Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_IGUI_ProgressBar.WBP_IGUI_ProgressBar_C.SetPercentPotentialValue");
		
		UWBP_IGUI_ProgressBar_C_SetPercentPotentialValue_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_IGUI_ProgressBar.WBP_IGUI_ProgressBar_C.UpdateRawValue
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              PotentialValue                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Time                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              StartDelay                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_IGUI_ProgressBar_C::UpdateRawValue(float PotentialValue, float Time, float StartDelay)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_IGUI_ProgressBar.WBP_IGUI_ProgressBar_C.UpdateRawValue");
		
		UWBP_IGUI_ProgressBar_C_UpdateRawValue_Params params {};
		params.PotentialValue = PotentialValue;
		params.Time = Time;
		params.StartDelay = StartDelay;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_IGUI_ProgressBar.WBP_IGUI_ProgressBar_C.TimerFinished
	 * 		Flags  -> ()
	 */
	void UWBP_IGUI_ProgressBar_C::TimerFinished()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_IGUI_ProgressBar.WBP_IGUI_ProgressBar_C.TimerFinished");
		
		UWBP_IGUI_ProgressBar_C_TimerFinished_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_IGUI_ProgressBar.WBP_IGUI_ProgressBar_C.TimerUpdateTick
	 * 		Flags  -> ()
	 */
	void UWBP_IGUI_ProgressBar_C::TimerUpdateTick()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_IGUI_ProgressBar.WBP_IGUI_ProgressBar_C.TimerUpdateTick");
		
		UWBP_IGUI_ProgressBar_C_TimerUpdateTick_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_IGUI_ProgressBar.WBP_IGUI_ProgressBar_C.UpdatePercentValue
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              PotentialValue                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Time                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              DelayStart                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_IGUI_ProgressBar_C::UpdatePercentValue(float PotentialValue, float Time, float DelayStart)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_IGUI_ProgressBar.WBP_IGUI_ProgressBar_C.UpdatePercentValue");
		
		UWBP_IGUI_ProgressBar_C_UpdatePercentValue_Params params {};
		params.PotentialValue = PotentialValue;
		params.Time = Time;
		params.DelayStart = DelayStart;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_IGUI_ProgressBar.WBP_IGUI_ProgressBar_C.ResumeDebugProgressAnim
	 * 		Flags  -> ()
	 */
	void UWBP_IGUI_ProgressBar_C::ResumeDebugProgressAnim()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_IGUI_ProgressBar.WBP_IGUI_ProgressBar_C.ResumeDebugProgressAnim");
		
		UWBP_IGUI_ProgressBar_C_ResumeDebugProgressAnim_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_IGUI_ProgressBar.WBP_IGUI_ProgressBar_C.PauseDebugProgressAnim
	 * 		Flags  -> ()
	 */
	void UWBP_IGUI_ProgressBar_C::PauseDebugProgressAnim()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_IGUI_ProgressBar.WBP_IGUI_ProgressBar_C.PauseDebugProgressAnim");
		
		UWBP_IGUI_ProgressBar_C_PauseDebugProgressAnim_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_IGUI_ProgressBar.WBP_IGUI_ProgressBar_C.PlayDebugProgressAnim
	 * 		Flags  -> ()
	 */
	void UWBP_IGUI_ProgressBar_C::PlayDebugProgressAnim()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_IGUI_ProgressBar.WBP_IGUI_ProgressBar_C.PlayDebugProgressAnim");
		
		UWBP_IGUI_ProgressBar_C_PlayDebugProgressAnim_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_IGUI_ProgressBar.WBP_IGUI_ProgressBar_C.SetRawValue
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Value                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_IGUI_ProgressBar_C::SetRawValue(float Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_IGUI_ProgressBar.WBP_IGUI_ProgressBar_C.SetRawValue");
		
		UWBP_IGUI_ProgressBar_C_SetRawValue_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_IGUI_ProgressBar.WBP_IGUI_ProgressBar_C.SetPercentValue
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Value                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_IGUI_ProgressBar_C::SetPercentValue(float Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_IGUI_ProgressBar.WBP_IGUI_ProgressBar_C.SetPercentValue");
		
		UWBP_IGUI_ProgressBar_C_SetPercentValue_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_IGUI_ProgressBar.WBP_IGUI_ProgressBar_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_IGUI_ProgressBar_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_IGUI_ProgressBar.WBP_IGUI_ProgressBar_C.PreConstruct");
		
		UWBP_IGUI_ProgressBar_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_IGUI_ProgressBar.WBP_IGUI_ProgressBar_C.Tick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_IGUI_ProgressBar_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_IGUI_ProgressBar.WBP_IGUI_ProgressBar_C.Tick");
		
		UWBP_IGUI_ProgressBar_C_Tick_Params params {};
		params.MyGeometry = MyGeometry;
		params.InDeltaTime = InDeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_IGUI_ProgressBar.WBP_IGUI_ProgressBar_C.ExecuteUbergraph_WBP_IGUI_ProgressBar
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_IGUI_ProgressBar_C::ExecuteUbergraph_WBP_IGUI_ProgressBar(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_IGUI_ProgressBar.WBP_IGUI_ProgressBar_C.ExecuteUbergraph_WBP_IGUI_ProgressBar");
		
		UWBP_IGUI_ProgressBar_C_ExecuteUbergraph_WBP_IGUI_ProgressBar_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_IGUI_ProgressBar.WBP_IGUI_ProgressBar_C.OnPotentialValueChanged__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UIGUI_WidgetBase*                            Source                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              RawValue                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              PercentValue                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_IGUI_ProgressBar_C::OnPotentialValueChanged__DelegateSignature(class UIGUI_WidgetBase* Source, float RawValue, float PercentValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_IGUI_ProgressBar.WBP_IGUI_ProgressBar_C.OnPotentialValueChanged__DelegateSignature");
		
		UWBP_IGUI_ProgressBar_C_OnPotentialValueChanged__DelegateSignature_Params params {};
		params.Source = Source;
		params.RawValue = RawValue;
		params.PercentValue = PercentValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_IGUI_ProgressBar.WBP_IGUI_ProgressBar_C.OnBarEmpty__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UIGUI_WidgetBase*                            Source                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_IGUI_ProgressBar_C::OnBarEmpty__DelegateSignature(class UIGUI_WidgetBase* Source)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_IGUI_ProgressBar.WBP_IGUI_ProgressBar_C.OnBarEmpty__DelegateSignature");
		
		UWBP_IGUI_ProgressBar_C_OnBarEmpty__DelegateSignature_Params params {};
		params.Source = Source;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_IGUI_ProgressBar.WBP_IGUI_ProgressBar_C.OnBarFull__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UIGUI_WidgetBase*                            Source                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_IGUI_ProgressBar_C::OnBarFull__DelegateSignature(class UIGUI_WidgetBase* Source)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_IGUI_ProgressBar.WBP_IGUI_ProgressBar_C.OnBarFull__DelegateSignature");
		
		UWBP_IGUI_ProgressBar_C_OnBarFull__DelegateSignature_Params params {};
		params.Source = Source;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_IGUI_ProgressBar.WBP_IGUI_ProgressBar_C.OnFillAnimationFinished__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UIGUI_WidgetBase*                            Source                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_IGUI_ProgressBar_C::OnFillAnimationFinished__DelegateSignature(class UIGUI_WidgetBase* Source)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_IGUI_ProgressBar.WBP_IGUI_ProgressBar_C.OnFillAnimationFinished__DelegateSignature");
		
		UWBP_IGUI_ProgressBar_C_OnFillAnimationFinished__DelegateSignature_Params params {};
		params.Source = Source;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_IGUI_ProgressBar.WBP_IGUI_ProgressBar_C.OnValueChanged__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UIGUI_WidgetBase*                            Source                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              RawValue                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              PercentValue                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_IGUI_ProgressBar_C::OnValueChanged__DelegateSignature(class UIGUI_WidgetBase* Source, float RawValue, float PercentValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_IGUI_ProgressBar.WBP_IGUI_ProgressBar_C.OnValueChanged__DelegateSignature");
		
		UWBP_IGUI_ProgressBar_C_OnValueChanged__DelegateSignature_Params params {};
		params.Source = Source;
		params.RawValue = RawValue;
		params.PercentValue = PercentValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWBP_IGUI_ProgressBar_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWBP_IGUI_ProgressBar_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_IGUI_ProgressBar.WBP_IGUI_ProgressBar_C");
		return ptr;
	}

}


