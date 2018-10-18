/*
#############################################################################################
# Special Force 2 (1.0.46397.0) SDK
# Generated with TheFeckless UE3 SDK Generator v1.4_Beta-Rev.51
# ========================================================================================= #
# File: SFGameContent_f_structs.h
# ========================================================================================= #
# Credits: uNrEaL, Tamimego, SystemFiles, R00T88, _silencer, the1domo, K@N@VEL, crylessdomore
# Thanks: HOOAH07, lowHertz
# Forums: www.uc-forum.com, www.gamedeception.net
#############################################################################################
*/

#ifdef _MSC_VER
	#pragma pack ( push, 0x4 )
#endif

/*
# ========================================================================================= #
# Function Structs
# ========================================================================================= #
*/

// Function SFGameContent.SFCWeaponRIS_ActionCamo_Kill.OwnerKill
// [0x00020102] 
struct USFCWeaponRIS_ActionCamo_Kill_execOwnerKill_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFGameContent.SFCItem_Common_ChickenBoots.ApplyItemToHostPawn
// [0x00022002] 
struct USFCItem_Common_ChickenBoots_execApplyItemToHostPawn_Parms
{
	class ASFPawn*                                     AppliedPawn;                                      		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function SFGameContent.SFCWeaponRIS_ActionCamo_Equip.OwnerAttached
// [0x00020102] 
struct USFCWeaponRIS_ActionCamo_Equip_execOwnerAttached_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFGameContent.SFCItem_Func_WeaponCamo_Removal.GetSpecificIndexWithDataByID
// [0x00426002] 
struct USFCItem_Func_WeaponCamo_Removal_execGetSpecificIndexWithDataByID_Parms
{
	class UObject*                                     SpecificObject;                                   		// 0x0000 (0x0004) [0x0000000000000190]              ( CPF_OptionalParm | CPF_Parm | CPF_OutParm )
	class UObject*                                     SpecificObjectEx;                                 		// 0x0004 (0x0004) [0x0000000000000190]              ( CPF_OptionalParm | CPF_Parm | CPF_OutParm )
	int                                                SpecificIndex;                                    		// 0x0008 (0x0004) [0x0000000000000190]              ( CPF_OptionalParm | CPF_Parm | CPF_OutParm )
	int                                                SpecificIndexEx;                                  		// 0x000C (0x0004) [0x0000000000000190]              ( CPF_OptionalParm | CPF_Parm | CPF_OutParm )
};

// Function SFGameContent.SFCItem_CheyTac_Def_Scope.ApplyItemToWeap
// [0x00022002] 
struct USFCItem_CheyTac_Def_Scope_execApplyItemToWeap_Parms
{
	class ASFWeapon*                                   AppliedWeap;                                      		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function SFGameContent.SFCItem_Common_Scope_Kar98k.ApplyItemToWeap
// [0x00022002] 
struct USFCItem_Common_Scope_Kar98k_execApplyItemToWeap_Parms
{
	class ASFWeapon*                                   AppliedWeap;                                      		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function SFGameContent.SFCItem_Common_Scope_Dragunov.ApplyItemToWeap
// [0x00022002] 
struct USFCItem_Common_Scope_Dragunov_execApplyItemToWeap_Parms
{
	class ASFWeapon*                                   AppliedWeap;                                      		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function SFGameContent.SFCItem_Cz700_Def_Scope.ApplyItemToWeap
// [0x00022002] 
struct USFCItem_Cz700_Def_Scope_execApplyItemToWeap_Parms
{
	class ASFWeapon*                                   AppliedWeap;                                      		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function SFGameContent.SFCItem_Common_Scope_S2S.ApplyItemToWeap
// [0x00022002] 
struct USFCItem_Common_Scope_S2S_execApplyItemToWeap_Parms
{
	class ASFWeapon*                                   AppliedWeap;                                      		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function SFGameContent.SFCItem_Common_Scope_Zeiess.ApplyItemToWeap
// [0x00022002] 
struct USFCItem_Common_Scope_Zeiess_execApplyItemToWeap_Parms
{
	class ASFWeapon*                                   AppliedWeap;                                      		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function SFGameContent.SFCItem_PSG1_Def_Scope.ApplyItemToWeap
// [0x00022002] 
struct USFCItem_PSG1_Def_Scope_execApplyItemToWeap_Parms
{
	class ASFWeapon*                                   AppliedWeap;                                      		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function SFGameContent.SFCItem_Barret_Def_Scope.ApplyItemToWeap
// [0x00022002] 
struct USFCItem_Barret_Def_Scope_execApplyItemToWeap_Parms
{
	class ASFWeapon*                                   AppliedWeap;                                      		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function SFGameContent.SFCItem_FAMAS_Def_Sight.ApplyItemToWeap
// [0x00022000] 
struct USFCItem_FAMAS_Def_Sight_execApplyItemToWeap_Parms
{
	class ASFWeapon*                                   AppliedWeap;                                      		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function SFGameContent.SFCItem_MurderKnife.ApplyItemToWeapByPenalty
// [0x00022002] 
struct USFCItem_MurderKnife_execApplyItemToWeapByPenalty_Parms
{
	class ASFWeapon*                                   AppliedWeap;                                      		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function SFGameContent.SFCItem_Common_Scope_Bender.ApplyItemToWeap
// [0x00022002] 
struct USFCItem_Common_Scope_Bender_execApplyItemToWeap_Parms
{
	class ASFWeapon*                                   AppliedWeap;                                      		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function SFGameContent.SFCItem_AWP_Def_Scope.ApplyItemToWeap
// [0x00022002] 
struct USFCItem_AWP_Def_Scope_execApplyItemToWeap_Parms
{
	class ASFWeapon*                                   AppliedWeap;                                      		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function SFGameContent.SFCItem_Common_Scope_PM2.ApplyItemToWeap
// [0x00022002] 
struct USFCItem_Common_Scope_PM2_execApplyItemToWeap_Parms
{
	class ASFWeapon*                                   AppliedWeap;                                      		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function SFGameContent.SFCItem_BowieKnife.ApplyItemToWeapByPenalty
// [0x00022002] 
struct USFCItem_BowieKnife_execApplyItemToWeapByPenalty_Parms
{
	class ASFWeapon*                                   AppliedWeap;                                      		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function SFGameContent.SFCItem_SR25_Def_Scope.ApplyItemToWeap
// [0x00022002] 
struct USFCItem_SR25_Def_Scope_execApplyItemToWeap_Parms
{
	class ASFWeapon*                                   AppliedWeap;                                      		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function SFGameContent.SFCItem_P226_Def_Body.ApplyItemToWeap
// [0x00022000] 
struct USFCItem_P226_Def_Body_execApplyItemToWeap_Parms
{
	class ASFWeapon*                                   AppliedWeap;                                      		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function SFGameContent.SFCItem_P226_Def_Magazine.ApplyItemToWeap
// [0x00022000] 
struct USFCItem_P226_Def_Magazine_execApplyItemToWeap_Parms
{
	class ASFWeapon*                                   AppliedWeap;                                      		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function SFGameContent.SFCItem_P226_Def_Sight.ApplyItemToWeap
// [0x00022000] 
struct USFCItem_P226_Def_Sight_execApplyItemToWeap_Parms
{
	class ASFWeapon*                                   AppliedWeap;                                      		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function SFGameContent.SFCItem_Dagger.ApplyItemToWeapByPenalty
// [0x00022002] 
struct USFCItem_Dagger_execApplyItemToWeapByPenalty_Parms
{
	class ASFWeapon*                                   AppliedWeap;                                      		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function SFGameContent.SFCItem_Func_AddPrimaryMagazine.ApplyMagazine
// [0x00022002] 
struct USFCItem_Func_AddPrimaryMagazine_execApplyMagazine_Parms
{
	class ASFWeapon*                                   SFW;                                              		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function SFGameContent.SFCItem_Func_AddPrimaryMagazine.ApplyItemToHostActor
// [0x00022002] 
struct USFCItem_Func_AddPrimaryMagazine_execApplyItemToHostActor_Parms
{
	class AActor*                                      AppliedActor;                                     		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// class ASFWeapon*                                SFW;                                              		// 0x0004 (0x0004) [0x0000000000000000]              
	// int                                             I;                                                		// 0x0008 (0x0004) [0x0000000000000000]              
	// int                                             J;                                                		// 0x000C (0x0004) [0x0000000000000000]              
};

// Function SFGameContent.SFCItem_Beacon_RequestUAV.ApplyItemToHostActor
// [0x00022002] 
struct USFCItem_Beacon_RequestUAV_execApplyItemToHostActor_Parms
{
	class AActor*                                      AppliedActor;                                     		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function SFGameContent.SFCItem_Func_InstantShockWave.ApplyItemToHostActor
// [0x00022002] 
struct USFCItem_Func_InstantShockWave_execApplyItemToHostActor_Parms
{
	class AActor*                                      AppliedActor;                                     		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// int                                             I;                                                		// 0x0004 (0x0004) [0x0000000000000000]              
	// class ASFPawn*                                  AppliedPawn;                                      		// 0x0008 (0x0004) [0x0000000000000000]              
};

// Function SFGameContent.SFCItem_Func_RecoveryHP.CanPurchaseInGameStore
// [0x00022002] 
struct USFCItem_Func_RecoveryHP_execCanPurchaseInGameStore_Parms
{
	class ASFPawn*                                     ApplidedPawn;                                     		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFGameContent.SFCItem_Func_RecoveryHP.ApplyItemToActor
// [0x00022002] 
struct USFCItem_Func_RecoveryHP_execApplyItemToActor_Parms
{
	class AActor*                                      AppliedActor;                                     		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function SFGameContent.SFCItem_Func_PrimaryMagazineUp.ApplyItemToHostActor
// [0x00022002] 
struct USFCItem_Func_PrimaryMagazineUp_execApplyItemToHostActor_Parms
{
	class AActor*                                      AppliedActor;                                     		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// class ASFWeapon*                                TempWeapon;                                       		// 0x0004 (0x0004) [0x0000000000000000]              
	// class ASFGameReplicationInfo*                   SFGRI;                                            		// 0x0008 (0x0004) [0x0000000000000000]              
};

// Function SFGameContent.SFCItem_Func_MiniMapPing.ApplyItemToActor
// [0x00022002] 
struct USFCItem_Func_MiniMapPing_execApplyItemToActor_Parms
{
	class AActor*                                      AppliedActor;                                     		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// class ASFPlayerReplicationInfo*                 SFPRI;                                            		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function SFGameContent.SFCItem_Func_ProvideHumanHealth.IsPossibleToUse
// [0x00022002] 
struct USFCItem_Func_ProvideHumanHealth_execIsPossibleToUse_Parms
{
	class ASFPawn*                                     AppliedPawn;                                      		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFGameContent.SFCItem_GAFE_SpecialSuit.ApplyItemToHostPawn
// [0x00022000] 
struct USFCItem_GAFE_SpecialSuit_execApplyItemToHostPawn_Parms
{
	class ASFPawn*                                     AppliedPawn;                                      		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function SFGameContent.SFCItem_GIGN_SpeicalSuit.ApplyItemToHostPawn
// [0x00022000] 
struct USFCItem_GIGN_SpeicalSuit_execApplyItemToHostPawn_Parms
{
	class ASFPawn*                                     AppliedPawn;                                      		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function SFGameContent.SFCItem_DeltaForce_ScoutSuit.ApplyItemToHostPawn
// [0x00022000] 
struct USFCItem_DeltaForce_ScoutSuit_execApplyItemToHostPawn_Parms
{
	class ASFPawn*                                     AppliedPawn;                                      		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function SFGameContent.SFCItem_Common_SpeedUpBoots.ApplyItemToHostPawn
// [0x00022002] 
struct USFCItem_Common_SpeedUpBoots_execApplyItemToHostPawn_Parms
{
	class ASFPawn*                                     AppliedPawn;                                      		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function SFGameContent.SFCItem_UDT_CombatSuit.ApplyItemToHostPawn
// [0x00022002] 
struct USFCItem_UDT_CombatSuit_execApplyItemToHostPawn_Parms
{
	class ASFPawn*                                     AppliedPawn;                                      		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function SFGameContent.SFCItem_UDT_NormalSuit.ApplyItemToHostPawn
// [0x00022002] 
struct USFCItem_UDT_NormalSuit_execApplyItemToHostPawn_Parms
{
	class ASFPawn*                                     AppliedPawn;                                      		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function SFGameContent.SFCItem_GAFE_CombatSuit.ApplyItemToHostPawn
// [0x00022002] 
struct USFCItem_GAFE_CombatSuit_execApplyItemToHostPawn_Parms
{
	class ASFPawn*                                     AppliedPawn;                                      		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function SFGameContent.SFCItem_GAFE_NormalSuit.ApplyItemToHostPawn
// [0x00022002] 
struct USFCItem_GAFE_NormalSuit_execApplyItemToHostPawn_Parms
{
	class ASFPawn*                                     AppliedPawn;                                      		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function SFGameContent.SFCItem_GIGN_CombatSuit.ApplyItemToHostPawn
// [0x00022002] 
struct USFCItem_GIGN_CombatSuit_execApplyItemToHostPawn_Parms
{
	class ASFPawn*                                     AppliedPawn;                                      		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function SFGameContent.SFCItem_GIGN_NormalSuit.ApplyItemToHostPawn
// [0x00022002] 
struct USFCItem_GIGN_NormalSuit_execApplyItemToHostPawn_Parms
{
	class ASFPawn*                                     AppliedPawn;                                      		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function SFGameContent.SFCItem_SAS_CombatSuit.ApplyItemToHostPawn
// [0x00022002] 
struct USFCItem_SAS_CombatSuit_execApplyItemToHostPawn_Parms
{
	class ASFPawn*                                     AppliedPawn;                                      		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function SFGameContent.SFCItem_SAS_NormalSuit.ApplyItemToHostPawn
// [0x00022002] 
struct USFCItem_SAS_NormalSuit_execApplyItemToHostPawn_Parms
{
	class ASFPawn*                                     AppliedPawn;                                      		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function SFGameContent.SFCItem_Spetsnaz_CombatSuit.ApplyItemToHostPawn
// [0x00022002] 
struct USFCItem_Spetsnaz_CombatSuit_execApplyItemToHostPawn_Parms
{
	class ASFPawn*                                     AppliedPawn;                                      		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function SFGameContent.SFCItem_Spetsnaz_NormalSuit.ApplyItemToHostPawn
// [0x00022002] 
struct USFCItem_Spetsnaz_NormalSuit_execApplyItemToHostPawn_Parms
{
	class ASFPawn*                                     AppliedPawn;                                      		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function SFGameContent.SFCItem_DeltaForce_CombatSuit.ApplyItemToHostPawn
// [0x00022002] 
struct USFCItem_DeltaForce_CombatSuit_execApplyItemToHostPawn_Parms
{
	class ASFPawn*                                     AppliedPawn;                                      		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function SFGameContent.SFCItem_DeltaForce_NormalSuit.ApplyItemToHostPawn
// [0x00022002] 
struct USFCItem_DeltaForce_NormalSuit_execApplyItemToHostPawn_Parms
{
	class ASFPawn*                                     AppliedPawn;                                      		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function SFGameContent.SFCItem_GPM30A1.ApplyItemToWeapByPenalty
// [0x00022002] 
struct USFCItem_GPM30A1_execApplyItemToWeapByPenalty_Parms
{
	class ASFWeapon*                                   AppliedWeap;                                      		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};


#ifdef _MSC_VER
	#pragma pack ( pop )
#endif