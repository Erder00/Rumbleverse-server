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
	 * 		Name   -> Function WBP_MinimapIcon.WBP_MinimapIcon_C.HidePingVisuals
	 * 		Flags  -> ()
	 */
	void UWBP_MinimapIcon_C::HidePingVisuals()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_MinimapIcon.WBP_MinimapIcon_C.HidePingVisuals");
		
		UWBP_MinimapIcon_C_HidePingVisuals_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_MinimapIcon.WBP_MinimapIcon_C.SetPingColor
	 * 		Flags  -> ()
	 */
	void UWBP_MinimapIcon_C::SetPingColor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_MinimapIcon.WBP_MinimapIcon_C.SetPingColor");
		
		UWBP_MinimapIcon_C_SetPingColor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_MinimapIcon.WBP_MinimapIcon_C.SetOpacity
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              NewOpacity                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_MinimapIcon_C::SetOpacity(float NewOpacity)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_MinimapIcon.WBP_MinimapIcon_C.SetOpacity");
		
		UWBP_MinimapIcon_C_SetOpacity_Params params {};
		params.NewOpacity = NewOpacity;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_MinimapIcon.WBP_MinimapIcon_C.SetMaskDimensions
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Left                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Top                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Width                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Height                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_MinimapIcon_C::SetMaskDimensions(float Left, float Top, float Width, float Height)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_MinimapIcon.WBP_MinimapIcon_C.SetMaskDimensions");
		
		UWBP_MinimapIcon_C_SetMaskDimensions_Params params {};
		params.Left = Left;
		params.Top = Top;
		params.Width = Width;
		params.Height = Height;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_MinimapIcon.WBP_MinimapIcon_C.SetImage
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UTexture2D*                                  NewTexture                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_MinimapIcon_C::SetImage(class UTexture2D* NewTexture)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_MinimapIcon.WBP_MinimapIcon_C.SetImage");
		
		UWBP_MinimapIcon_C_SetImage_Params params {};
		params.NewTexture = NewTexture;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_MinimapIcon.WBP_MinimapIcon_C.SetSize
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector2D                                   NewSize                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_MinimapIcon_C::SetSize(const struct FVector2D& NewSize)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_MinimapIcon.WBP_MinimapIcon_C.SetSize");
		
		UWBP_MinimapIcon_C_SetSize_Params params {};
		params.NewSize = NewSize;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_MinimapIcon.WBP_MinimapIcon_C.SetTint
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FLinearColor                                NewTint                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_MinimapIcon_C::SetTint(const struct FLinearColor& NewTint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_MinimapIcon.WBP_MinimapIcon_C.SetTint");
		
		UWBP_MinimapIcon_C_SetTint_Params params {};
		params.NewTint = NewTint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_MinimapIcon.WBP_MinimapIcon_C.UpdateTeammateHPAlert
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bIsTeammateLowHealth                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_MinimapIcon_C::UpdateTeammateHPAlert(bool bIsTeammateLowHealth)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_MinimapIcon.WBP_MinimapIcon_C.UpdateTeammateHPAlert");
		
		UWBP_MinimapIcon_C_UpdateTeammateHPAlert_Params params {};
		params.bIsTeammateLowHealth = bIsTeammateLowHealth;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_MinimapIcon.WBP_MinimapIcon_C.SetAngle
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Angle                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_MinimapIcon_C::SetAngle(float Angle)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_MinimapIcon.WBP_MinimapIcon_C.SetAngle");
		
		UWBP_MinimapIcon_C_SetAngle_Params params {};
		params.Angle = Angle;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_MinimapIcon.WBP_MinimapIcon_C.UpdateTeammateInCombatAlert
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bIsTeammateInCombat                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_MinimapIcon_C::UpdateTeammateInCombatAlert(bool bIsTeammateInCombat)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_MinimapIcon.WBP_MinimapIcon_C.UpdateTeammateInCombatAlert");
		
		UWBP_MinimapIcon_C_UpdateTeammateInCombatAlert_Params params {};
		params.bIsTeammateInCombat = bIsTeammateInCombat;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_MinimapIcon.WBP_MinimapIcon_C.UpdateTeammateRescueAlert
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bIsTeammateDowned                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_MinimapIcon_C::UpdateTeammateRescueAlert(bool bIsTeammateDowned)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_MinimapIcon.WBP_MinimapIcon_C.UpdateTeammateRescueAlert");
		
		UWBP_MinimapIcon_C_UpdateTeammateRescueAlert_Params params {};
		params.bIsTeammateDowned = bIsTeammateDowned;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_MinimapIcon.WBP_MinimapIcon_C.UpdateTeammateHeightThreshold
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESheikWaypointVerticalDirection                    TeammateVerticalDirection                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_MinimapIcon_C::UpdateTeammateHeightThreshold(ESheikWaypointVerticalDirection TeammateVerticalDirection)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_MinimapIcon.WBP_MinimapIcon_C.UpdateTeammateHeightThreshold");
		
		UWBP_MinimapIcon_C_UpdateTeammateHeightThreshold_Params params {};
		params.TeammateVerticalDirection = TeammateVerticalDirection;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_MinimapIcon.WBP_MinimapIcon_C.Construct
	 * 		Flags  -> ()
	 */
	void UWBP_MinimapIcon_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_MinimapIcon.WBP_MinimapIcon_C.Construct");
		
		UWBP_MinimapIcon_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_MinimapIcon.WBP_MinimapIcon_C.OnTeammateLanded
	 * 		Flags  -> ()
	 */
	void UWBP_MinimapIcon_C::OnTeammateLanded()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_MinimapIcon.WBP_MinimapIcon_C.OnTeammateLanded");
		
		UWBP_MinimapIcon_C_OnTeammateLanded_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_MinimapIcon.WBP_MinimapIcon_C.PlayPingAnimation
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bIsOutOfBounds                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_MinimapIcon_C::PlayPingAnimation(bool bIsOutOfBounds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_MinimapIcon.WBP_MinimapIcon_C.PlayPingAnimation");
		
		UWBP_MinimapIcon_C_PlayPingAnimation_Params params {};
		params.bIsOutOfBounds = bIsOutOfBounds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_MinimapIcon.WBP_MinimapIcon_C.ExecuteUbergraph_WBP_MinimapIcon
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_MinimapIcon_C::ExecuteUbergraph_WBP_MinimapIcon(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_MinimapIcon.WBP_MinimapIcon_C.ExecuteUbergraph_WBP_MinimapIcon");
		
		UWBP_MinimapIcon_C_ExecuteUbergraph_WBP_MinimapIcon_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWBP_MinimapIcon_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWBP_MinimapIcon_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_MinimapIcon.WBP_MinimapIcon_C");
		return ptr;
	}

}


