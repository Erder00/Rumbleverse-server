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
	 * Function BPFL_Sheik_SpecialMoves.BPFL_Sheik_SpecialMoves_C.GetSpecialMoveDisplayTier
	 */
	struct UBPFL_Sheik_SpecialMoves_C_GetSpecialMoveDisplayTier_Params
	{
	public:
		class UIGMoveMontage*                                      Move;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		EMoveTier                                                  FunctionalTier;                                          // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_FRJE[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UObject*                                             __WorldContext;                                          // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		EMoveTier                                                  DisplayTier;                                             // 0x0018(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPFL_Sheik_SpecialMoves.BPFL_Sheik_SpecialMoves_C.GetSpecialMoveEffects
	 */
	struct UBPFL_Sheik_SpecialMoves_C_GetSpecialMoveEffects_Params
	{
	public:
		class UIGMoveMontage*                                      Move;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		EMoveTier                                                  Tier;                                                    // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_QQG5[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UObject*                                             __WorldContext;                                          // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		TArray<EIGSpecialMoveEffect>                               SpecialMoveEffectsDescriptions;                          // 0x0018(0x0010)  (Parm, OutParm)
	};

	/**
	 * Function BPFL_Sheik_SpecialMoves.BPFL_Sheik_SpecialMoves_C.GetSpecialMoveTierInfo
	 */
	struct UBPFL_Sheik_SpecialMoves_C_GetSpecialMoveTierInfo_Params
	{
	public:
		class UIGMoveMontage*                                      Move;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		EMoveTier                                                  Tier;                                                    // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_EPJJ[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UObject*                                             __WorldContext;                                          // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UTexture2D*                                          BGColor;                                                 // 0x0018(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UTexture2D*                                          CoinTireIcon;                                            // 0x0020(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPFL_Sheik_SpecialMoves.BPFL_Sheik_SpecialMoves_C.GetTierDisplayInfo
	 */
	struct UBPFL_Sheik_SpecialMoves_C_GetTierDisplayInfo_Params
	{
	public:
		struct FS_Sheik_SpecialMoveLookupRow                       LookupRow;                                               // 0x0000(0x0130)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
		EMoveTier                                                  ExecutionTier;                                           // 0x0130(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_M687[0x7];                                   // 0x0131(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UObject*                                             __WorldContext;                                          // 0x0138(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FText                                                OutName;                                                 // 0x0140(0x0018)  (Parm, OutParm)
		class UTexture2D*                                          OutTier;                                                 // 0x0158(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UTexture2D*                                          OutBGColor;                                              // 0x0160(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPFL_Sheik_SpecialMoves.BPFL_Sheik_SpecialMoves_C.GetWeaponDisplayName
	 */
	struct UBPFL_Sheik_SpecialMoves_C_GetWeaponDisplayName_Params
	{
	public:
		class UClass*                                              WeaponClass;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UObject*                                             __WorldContext;                                          // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FText                                                DisplayText;                                             // 0x0010(0x0018)  (Parm, OutParm)
	};

	/**
	 * Function BPFL_Sheik_SpecialMoves.BPFL_Sheik_SpecialMoves_C.GetStatColor
	 */
	struct UBPFL_Sheik_SpecialMoves_C_GetStatColor_Params
	{
	public:
		ESheikMoveType                                             MoveType;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_VDSH[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UObject*                                             __WorldContext;                                          // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FLinearColor                                        SlateColor;                                              // 0x0010(0x0010)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPFL_Sheik_SpecialMoves.BPFL_Sheik_SpecialMoves_C.GetSpecialMoveType
	 */
	struct UBPFL_Sheik_SpecialMoves_C_GetSpecialMoveType_Params
	{
	public:
		class UIGMoveMontage*                                      Move;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UObject*                                             __WorldContext;                                          // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		ESheikMoveType                                             MoveType;                                                // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_CY5B[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BPFL_Sheik_SpecialMoves.BPFL_Sheik_SpecialMoves_C.GetSpecialMoveData
	 */
	struct UBPFL_Sheik_SpecialMoves_C_GetSpecialMoveData_Params
	{
	public:
		class UIGMoveMontage*                                      Move;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UObject*                                             __WorldContext;                                          // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FS_Sheik_SpecialMoveLookupRow                       Description;                                             // 0x0010(0x0130)  (Parm, OutParm, HasGetValueTypeHash)
	};

	/**
	 * Function BPFL_Sheik_SpecialMoves.BPFL_Sheik_SpecialMoves_C.GetSpecialMoveDescription
	 */
	struct UBPFL_Sheik_SpecialMoves_C_GetSpecialMoveDescription_Params
	{
	public:
		class UIGMoveMontage*                                      Move;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		EMoveTier                                                  Tier;                                                    // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_AZ48[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UObject*                                             __WorldContext;                                          // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		TArray<class FText>                                        Descriptions;                                            // 0x0018(0x0010)  (Parm, OutParm)
	};

	/**
	 * Function BPFL_Sheik_SpecialMoves.BPFL_Sheik_SpecialMoves_C.IsMoveUIDataValid
	 */
	struct UBPFL_Sheik_SpecialMoves_C_IsMoveUIDataValid_Params
	{
	public:
		class UIGMoveMontage*                                      Move;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UObject*                                             __WorldContext;                                          // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       IsValid;                                                 // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BPFL_Sheik_SpecialMoves.BPFL_Sheik_SpecialMoves_C.GetSpecialMoveIcon
	 */
	struct UBPFL_Sheik_SpecialMoves_C_GetSpecialMoveIcon_Params
	{
	public:
		class UIGMoveMontage*                                      Move;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		EMoveTier                                                  Tier;                                                    // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_H90U[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UObject*                                             __WorldContext;                                          // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UTexture2D*                                          Icon;                                                    // 0x0018(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPFL_Sheik_SpecialMoves.BPFL_Sheik_SpecialMoves_C.GetSpecialMoveDisplayName
	 */
	struct UBPFL_Sheik_SpecialMoves_C_GetSpecialMoveDisplayName_Params
	{
	public:
		class UIGMoveMontage*                                      Move;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		EMoveTier                                                  Tier;                                                    // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_UMZ1[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UObject*                                             __WorldContext;                                          // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FText                                                DisplayText;                                             // 0x0018(0x0018)  (Parm, OutParm)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
