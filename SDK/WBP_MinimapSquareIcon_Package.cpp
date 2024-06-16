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
	 * 		Name   -> Function WBP_MinimapSquareIcon.WBP_MinimapSquareIcon_C.Construct
	 * 		Flags  -> ()
	 */
	void UWBP_MinimapSquareIcon_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_MinimapSquareIcon.WBP_MinimapSquareIcon_C.Construct");
		
		UWBP_MinimapSquareIcon_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_MinimapSquareIcon.WBP_MinimapSquareIcon_C.SetTopLeft
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector2D                                   Value                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_MinimapSquareIcon_C::SetTopLeft(const struct FVector2D& Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_MinimapSquareIcon.WBP_MinimapSquareIcon_C.SetTopLeft");
		
		UWBP_MinimapSquareIcon_C_SetTopLeft_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_MinimapSquareIcon.WBP_MinimapSquareIcon_C.SetCenter
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector2D                                   Value                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_MinimapSquareIcon_C::SetCenter(const struct FVector2D& Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_MinimapSquareIcon.WBP_MinimapSquareIcon_C.SetCenter");
		
		UWBP_MinimapSquareIcon_C_SetCenter_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_MinimapSquareIcon.WBP_MinimapSquareIcon_C.SetCosineOfNegativeRotation
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Value                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_MinimapSquareIcon_C::SetCosineOfNegativeRotation(float Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_MinimapSquareIcon.WBP_MinimapSquareIcon_C.SetCosineOfNegativeRotation");
		
		UWBP_MinimapSquareIcon_C_SetCosineOfNegativeRotation_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_MinimapSquareIcon.WBP_MinimapSquareIcon_C.SetOpacity
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              NewOpacity                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_MinimapSquareIcon_C::SetOpacity(float NewOpacity)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_MinimapSquareIcon.WBP_MinimapSquareIcon_C.SetOpacity");
		
		UWBP_MinimapSquareIcon_C_SetOpacity_Params params {};
		params.NewOpacity = NewOpacity;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_MinimapSquareIcon.WBP_MinimapSquareIcon_C.SetImage
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UTexture2D*                                  NewTexture                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_MinimapSquareIcon_C::SetImage(class UTexture2D* NewTexture)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_MinimapSquareIcon.WBP_MinimapSquareIcon_C.SetImage");
		
		UWBP_MinimapSquareIcon_C_SetImage_Params params {};
		params.NewTexture = NewTexture;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_MinimapSquareIcon.WBP_MinimapSquareIcon_C.SetSize
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector2D                                   NewSize                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_MinimapSquareIcon_C::SetSize(const struct FVector2D& NewSize)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_MinimapSquareIcon.WBP_MinimapSquareIcon_C.SetSize");
		
		UWBP_MinimapSquareIcon_C_SetSize_Params params {};
		params.NewSize = NewSize;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_MinimapSquareIcon.WBP_MinimapSquareIcon_C.SetBottomRight
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector2D                                   Value                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_MinimapSquareIcon_C::SetBottomRight(const struct FVector2D& Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_MinimapSquareIcon.WBP_MinimapSquareIcon_C.SetBottomRight");
		
		UWBP_MinimapSquareIcon_C_SetBottomRight_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_MinimapSquareIcon.WBP_MinimapSquareIcon_C.SetSineOfNegativeRotation
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Value                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_MinimapSquareIcon_C::SetSineOfNegativeRotation(float Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_MinimapSquareIcon.WBP_MinimapSquareIcon_C.SetSineOfNegativeRotation");
		
		UWBP_MinimapSquareIcon_C_SetSineOfNegativeRotation_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_MinimapSquareIcon.WBP_MinimapSquareIcon_C.ExecuteUbergraph_WBP_MinimapSquareIcon
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_MinimapSquareIcon_C::ExecuteUbergraph_WBP_MinimapSquareIcon(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_MinimapSquareIcon.WBP_MinimapSquareIcon_C.ExecuteUbergraph_WBP_MinimapSquareIcon");
		
		UWBP_MinimapSquareIcon_C_ExecuteUbergraph_WBP_MinimapSquareIcon_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWBP_MinimapSquareIcon_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWBP_MinimapSquareIcon_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_MinimapSquareIcon.WBP_MinimapSquareIcon_C");
		return ptr;
	}

}


