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
	 * 		Name   -> Function BPFL_Sheik_SpecialMoves.BPFL_Sheik_SpecialMoves_C.GetSpecialMoveDisplayTier
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UIGMoveMontage*                              Move                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		EMoveTier                                          FunctionalTier                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		EMoveTier                                          DisplayTier                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPFL_Sheik_SpecialMoves_C::GetSpecialMoveDisplayTier(class UIGMoveMontage* Move, EMoveTier FunctionalTier, class UObject* __WorldContext, EMoveTier* DisplayTier)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPFL_Sheik_SpecialMoves.BPFL_Sheik_SpecialMoves_C.GetSpecialMoveDisplayTier");
		
		UBPFL_Sheik_SpecialMoves_C_GetSpecialMoveDisplayTier_Params params {};
		params.Move = Move;
		params.FunctionalTier = FunctionalTier;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (DisplayTier != nullptr)
			*DisplayTier = params.DisplayTier;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPFL_Sheik_SpecialMoves.BPFL_Sheik_SpecialMoves_C.GetSpecialMoveEffects
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UIGMoveMontage*                              Move                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		EMoveTier                                          Tier                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		TArray<EIGSpecialMoveEffect>                       SpecialMoveEffectsDescriptions                             (Parm, OutParm)
	 */
	void UBPFL_Sheik_SpecialMoves_C::GetSpecialMoveEffects(class UIGMoveMontage* Move, EMoveTier Tier, class UObject* __WorldContext, TArray<EIGSpecialMoveEffect>* SpecialMoveEffectsDescriptions)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPFL_Sheik_SpecialMoves.BPFL_Sheik_SpecialMoves_C.GetSpecialMoveEffects");
		
		UBPFL_Sheik_SpecialMoves_C_GetSpecialMoveEffects_Params params {};
		params.Move = Move;
		params.Tier = Tier;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (SpecialMoveEffectsDescriptions != nullptr)
			*SpecialMoveEffectsDescriptions = params.SpecialMoveEffectsDescriptions;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPFL_Sheik_SpecialMoves.BPFL_Sheik_SpecialMoves_C.GetSpecialMoveTierInfo
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UIGMoveMontage*                              Move                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		EMoveTier                                          Tier                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UTexture2D*                                  BGColor                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UTexture2D*                                  CoinTireIcon                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPFL_Sheik_SpecialMoves_C::GetSpecialMoveTierInfo(class UIGMoveMontage* Move, EMoveTier Tier, class UObject* __WorldContext, class UTexture2D** BGColor, class UTexture2D** CoinTireIcon)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPFL_Sheik_SpecialMoves.BPFL_Sheik_SpecialMoves_C.GetSpecialMoveTierInfo");
		
		UBPFL_Sheik_SpecialMoves_C_GetSpecialMoveTierInfo_Params params {};
		params.Move = Move;
		params.Tier = Tier;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (BGColor != nullptr)
			*BGColor = params.BGColor;
		if (CoinTireIcon != nullptr)
			*CoinTireIcon = params.CoinTireIcon;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPFL_Sheik_SpecialMoves.BPFL_Sheik_SpecialMoves_C.GetTierDisplayInfo
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FS_Sheik_SpecialMoveLookupRow               LookupRow                                                  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 * 		EMoveTier                                          ExecutionTier                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FText                                        OutName                                                    (Parm, OutParm)
	 * 		class UTexture2D*                                  OutTier                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UTexture2D*                                  OutBGColor                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPFL_Sheik_SpecialMoves_C::GetTierDisplayInfo(const struct FS_Sheik_SpecialMoveLookupRow& LookupRow, EMoveTier ExecutionTier, class UObject* __WorldContext, class FText* OutName, class UTexture2D** OutTier, class UTexture2D** OutBGColor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPFL_Sheik_SpecialMoves.BPFL_Sheik_SpecialMoves_C.GetTierDisplayInfo");
		
		UBPFL_Sheik_SpecialMoves_C_GetTierDisplayInfo_Params params {};
		params.LookupRow = LookupRow;
		params.ExecutionTier = ExecutionTier;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutName != nullptr)
			*OutName = params.OutName;
		if (OutTier != nullptr)
			*OutTier = params.OutTier;
		if (OutBGColor != nullptr)
			*OutBGColor = params.OutBGColor;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPFL_Sheik_SpecialMoves.BPFL_Sheik_SpecialMoves_C.GetWeaponDisplayName
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UClass*                                      WeaponClass                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FText                                        DisplayText                                                (Parm, OutParm)
	 */
	void UBPFL_Sheik_SpecialMoves_C::GetWeaponDisplayName(class UClass* WeaponClass, class UObject* __WorldContext, class FText* DisplayText)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPFL_Sheik_SpecialMoves.BPFL_Sheik_SpecialMoves_C.GetWeaponDisplayName");
		
		UBPFL_Sheik_SpecialMoves_C_GetWeaponDisplayName_Params params {};
		params.WeaponClass = WeaponClass;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (DisplayText != nullptr)
			*DisplayText = params.DisplayText;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPFL_Sheik_SpecialMoves.BPFL_Sheik_SpecialMoves_C.GetStatColor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESheikMoveType                                     MoveType                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FLinearColor                                SlateColor                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPFL_Sheik_SpecialMoves_C::GetStatColor(ESheikMoveType MoveType, class UObject* __WorldContext, struct FLinearColor* SlateColor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPFL_Sheik_SpecialMoves.BPFL_Sheik_SpecialMoves_C.GetStatColor");
		
		UBPFL_Sheik_SpecialMoves_C_GetStatColor_Params params {};
		params.MoveType = MoveType;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (SlateColor != nullptr)
			*SlateColor = params.SlateColor;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPFL_Sheik_SpecialMoves.BPFL_Sheik_SpecialMoves_C.GetSpecialMoveType
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UIGMoveMontage*                              Move                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		ESheikMoveType                                     MoveType                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPFL_Sheik_SpecialMoves_C::GetSpecialMoveType(class UIGMoveMontage* Move, class UObject* __WorldContext, ESheikMoveType* MoveType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPFL_Sheik_SpecialMoves.BPFL_Sheik_SpecialMoves_C.GetSpecialMoveType");
		
		UBPFL_Sheik_SpecialMoves_C_GetSpecialMoveType_Params params {};
		params.Move = Move;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (MoveType != nullptr)
			*MoveType = params.MoveType;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPFL_Sheik_SpecialMoves.BPFL_Sheik_SpecialMoves_C.GetSpecialMoveData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UIGMoveMontage*                              Move                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FS_Sheik_SpecialMoveLookupRow               Description                                                (Parm, OutParm, HasGetValueTypeHash)
	 */
	void UBPFL_Sheik_SpecialMoves_C::GetSpecialMoveData(class UIGMoveMontage* Move, class UObject* __WorldContext, struct FS_Sheik_SpecialMoveLookupRow* Description)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPFL_Sheik_SpecialMoves.BPFL_Sheik_SpecialMoves_C.GetSpecialMoveData");
		
		UBPFL_Sheik_SpecialMoves_C_GetSpecialMoveData_Params params {};
		params.Move = Move;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Description != nullptr)
			*Description = params.Description;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPFL_Sheik_SpecialMoves.BPFL_Sheik_SpecialMoves_C.GetSpecialMoveDescription
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UIGMoveMontage*                              Move                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		EMoveTier                                          Tier                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		TArray<class FText>                                Descriptions                                               (Parm, OutParm)
	 */
	void UBPFL_Sheik_SpecialMoves_C::GetSpecialMoveDescription(class UIGMoveMontage* Move, EMoveTier Tier, class UObject* __WorldContext, TArray<class FText>* Descriptions)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPFL_Sheik_SpecialMoves.BPFL_Sheik_SpecialMoves_C.GetSpecialMoveDescription");
		
		UBPFL_Sheik_SpecialMoves_C_GetSpecialMoveDescription_Params params {};
		params.Move = Move;
		params.Tier = Tier;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Descriptions != nullptr)
			*Descriptions = params.Descriptions;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPFL_Sheik_SpecialMoves.BPFL_Sheik_SpecialMoves_C.IsMoveUIDataValid
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UIGMoveMontage*                              Move                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               IsValid                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBPFL_Sheik_SpecialMoves_C::IsMoveUIDataValid(class UIGMoveMontage* Move, class UObject* __WorldContext, bool* IsValid)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPFL_Sheik_SpecialMoves.BPFL_Sheik_SpecialMoves_C.IsMoveUIDataValid");
		
		UBPFL_Sheik_SpecialMoves_C_IsMoveUIDataValid_Params params {};
		params.Move = Move;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (IsValid != nullptr)
			*IsValid = params.IsValid;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPFL_Sheik_SpecialMoves.BPFL_Sheik_SpecialMoves_C.GetSpecialMoveIcon
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UIGMoveMontage*                              Move                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		EMoveTier                                          Tier                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UTexture2D*                                  Icon                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPFL_Sheik_SpecialMoves_C::GetSpecialMoveIcon(class UIGMoveMontage* Move, EMoveTier Tier, class UObject* __WorldContext, class UTexture2D** Icon)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPFL_Sheik_SpecialMoves.BPFL_Sheik_SpecialMoves_C.GetSpecialMoveIcon");
		
		UBPFL_Sheik_SpecialMoves_C_GetSpecialMoveIcon_Params params {};
		params.Move = Move;
		params.Tier = Tier;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Icon != nullptr)
			*Icon = params.Icon;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPFL_Sheik_SpecialMoves.BPFL_Sheik_SpecialMoves_C.GetSpecialMoveDisplayName
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UIGMoveMontage*                              Move                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		EMoveTier                                          Tier                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FText                                        DisplayText                                                (Parm, OutParm)
	 */
	void UBPFL_Sheik_SpecialMoves_C::GetSpecialMoveDisplayName(class UIGMoveMontage* Move, EMoveTier Tier, class UObject* __WorldContext, class FText* DisplayText)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPFL_Sheik_SpecialMoves.BPFL_Sheik_SpecialMoves_C.GetSpecialMoveDisplayName");
		
		UBPFL_Sheik_SpecialMoves_C_GetSpecialMoveDisplayName_Params params {};
		params.Move = Move;
		params.Tier = Tier;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (DisplayText != nullptr)
			*DisplayText = params.DisplayText;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBPFL_Sheik_SpecialMoves_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBPFL_Sheik_SpecialMoves_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BPFL_Sheik_SpecialMoves.BPFL_Sheik_SpecialMoves_C");
		return ptr;
	}

}


