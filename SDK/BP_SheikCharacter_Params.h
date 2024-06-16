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
	 * Function BP_SheikCharacter.BP_SheikCharacter_C.GetSpecialMoveDisplayTier
	 */
	struct ABP_SheikCharacter_C_GetSpecialMoveDisplayTier_Params
	{
	public:
		class UIGMoveMontage*                                      Move;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		EMoveTier                                                  OverridableTier;                                         // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		EMoveTier                                                  ReturnValue;                                             // 0x0009(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_B1I3[0x6];                                   // 0x000A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_SheikCharacter.BP_SheikCharacter_C.OnClientIsAimingCannonChanged
	 */
	struct ABP_SheikCharacter_C_OnClientIsAimingCannonChanged_Params
	{
	public:
		bool                                                       NewIsAimingCannon;                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_SheikCharacter.BP_SheikCharacter_C.ReceiveBeginPlay
	 */
	struct ABP_SheikCharacter_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BP_SheikCharacter.BP_SheikCharacter_C.OnClientFiredCannon
	 */
	struct ABP_SheikCharacter_C_OnClientFiredCannon_Params
	{	};

	/**
	 * Function BP_SheikCharacter.BP_SheikCharacter_C.SetSpectatorInfoVisibility
	 */
	struct ABP_SheikCharacter_C_SetSpectatorInfoVisibility_Params
	{
	public:
		bool                                                       bIsVisible;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_SheikCharacter.BP_SheikCharacter_C.OnProjectileAimEnter
	 */
	struct ABP_SheikCharacter_C_OnProjectileAimEnter_Params
	{	};

	/**
	 * Function BP_SheikCharacter.BP_SheikCharacter_C.OnProjectileAimExit
	 */
	struct ABP_SheikCharacter_C_OnProjectileAimExit_Params
	{	};

	/**
	 * Function BP_SheikCharacter.BP_SheikCharacter_C.SupplyPlayerStateToSpectatorInfo
	 */
	struct ABP_SheikCharacter_C_SupplyPlayerStateToSpectatorInfo_Params
	{	};

	/**
	 * Function BP_SheikCharacter.BP_SheikCharacter_C.ExecuteUbergraph_BP_SheikCharacter
	 */
	struct ABP_SheikCharacter_C_ExecuteUbergraph_BP_SheikCharacter_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
