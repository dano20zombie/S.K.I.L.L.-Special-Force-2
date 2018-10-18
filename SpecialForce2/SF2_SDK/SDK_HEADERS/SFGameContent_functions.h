/*
#############################################################################################
# Special Force 2 (1.0.46397.0) SDK
# Generated with TheFeckless UE3 SDK Generator v1.4_Beta-Rev.51
# ========================================================================================= #
# File: SFGameContent_functions.h
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
# Functions
# ========================================================================================= #
*/

// Function SFGameContent.SFCWeaponRIS_ActionCamo_Kill.OwnerKill
// [0x00020102] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool USFCWeaponRIS_ActionCamo_Kill::OwnerKill ( )
{
	static UFunction* pFnOwnerKill = NULL;

	if ( ! pFnOwnerKill )
		pFnOwnerKill = (UFunction*) UObject::GObjObjects()->Data[ 138708 ];

	USFCWeaponRIS_ActionCamo_Kill_execOwnerKill_Parms OwnerKill_Parms;

	this->ProcessEvent ( pFnOwnerKill, &OwnerKill_Parms, NULL );

	return OwnerKill_Parms.ReturnValue;
};

// Function SFGameContent.SFCItem_Common_ChickenBoots.ApplyItemToHostPawn
// [0x00022002] 
// Parameters infos:
// class ASFPawn*                 AppliedPawn                    ( CPF_Parm )

void USFCItem_Common_ChickenBoots::ApplyItemToHostPawn ( class ASFPawn* AppliedPawn )
{
	static UFunction* pFnApplyItemToHostPawn = NULL;

	if ( ! pFnApplyItemToHostPawn )
		pFnApplyItemToHostPawn = (UFunction*) UObject::GObjObjects()->Data[ 138793 ];

	USFCItem_Common_ChickenBoots_execApplyItemToHostPawn_Parms ApplyItemToHostPawn_Parms;
	ApplyItemToHostPawn_Parms.AppliedPawn = AppliedPawn;

	this->ProcessEvent ( pFnApplyItemToHostPawn, &ApplyItemToHostPawn_Parms, NULL );
};

// Function SFGameContent.SFCWeaponRIS_ActionCamo_Equip.OwnerAttached
// [0x00020102] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool USFCWeaponRIS_ActionCamo_Equip::OwnerAttached ( )
{
	static UFunction* pFnOwnerAttached = NULL;

	if ( ! pFnOwnerAttached )
		pFnOwnerAttached = (UFunction*) UObject::GObjObjects()->Data[ 139015 ];

	USFCWeaponRIS_ActionCamo_Equip_execOwnerAttached_Parms OwnerAttached_Parms;

	this->ProcessEvent ( pFnOwnerAttached, &OwnerAttached_Parms, NULL );

	return OwnerAttached_Parms.ReturnValue;
};

// Function SFGameContent.SFCItem_Func_WeaponCamo_Removal.GetSpecificIndexWithDataByID
// [0x00426002] 
// Parameters infos:
// class UObject*                 SpecificObject                 ( CPF_OptionalParm | CPF_Parm | CPF_OutParm )
// class UObject*                 SpecificObjectEx               ( CPF_OptionalParm | CPF_Parm | CPF_OutParm )
// int                            SpecificIndex                  ( CPF_OptionalParm | CPF_Parm | CPF_OutParm )
// int                            SpecificIndexEx                ( CPF_OptionalParm | CPF_Parm | CPF_OutParm )

void USFCItem_Func_WeaponCamo_Removal::GetSpecificIndexWithDataByID ( class UObject** SpecificObject, class UObject** SpecificObjectEx, int* SpecificIndex, int* SpecificIndexEx )
{
	static UFunction* pFnGetSpecificIndexWithDataByID = NULL;

	if ( ! pFnGetSpecificIndexWithDataByID )
		pFnGetSpecificIndexWithDataByID = (UFunction*) UObject::GObjObjects()->Data[ 139175 ];

	USFCItem_Func_WeaponCamo_Removal_execGetSpecificIndexWithDataByID_Parms GetSpecificIndexWithDataByID_Parms;

	this->ProcessEvent ( pFnGetSpecificIndexWithDataByID, &GetSpecificIndexWithDataByID_Parms, NULL );

	if ( SpecificObject )
		*SpecificObject = GetSpecificIndexWithDataByID_Parms.SpecificObject;

	if ( SpecificObjectEx )
		*SpecificObjectEx = GetSpecificIndexWithDataByID_Parms.SpecificObjectEx;

	if ( SpecificIndex )
		*SpecificIndex = GetSpecificIndexWithDataByID_Parms.SpecificIndex;

	if ( SpecificIndexEx )
		*SpecificIndexEx = GetSpecificIndexWithDataByID_Parms.SpecificIndexEx;
};

// Function SFGameContent.SFCItem_CheyTac_Def_Scope.ApplyItemToWeap
// [0x00022002] 
// Parameters infos:
// class ASFWeapon*               AppliedWeap                    ( CPF_Parm )

void USFCItem_CheyTac_Def_Scope::ApplyItemToWeap ( class ASFWeapon* AppliedWeap )
{
	static UFunction* pFnApplyItemToWeap = NULL;

	if ( ! pFnApplyItemToWeap )
		pFnApplyItemToWeap = (UFunction*) UObject::GObjObjects()->Data[ 140759 ];

	USFCItem_CheyTac_Def_Scope_execApplyItemToWeap_Parms ApplyItemToWeap_Parms;
	ApplyItemToWeap_Parms.AppliedWeap = AppliedWeap;

	this->ProcessEvent ( pFnApplyItemToWeap, &ApplyItemToWeap_Parms, NULL );
};

// Function SFGameContent.SFCItem_Common_Scope_Kar98k.ApplyItemToWeap
// [0x00022002] 
// Parameters infos:
// class ASFWeapon*               AppliedWeap                    ( CPF_Parm )

void USFCItem_Common_Scope_Kar98k::ApplyItemToWeap ( class ASFWeapon* AppliedWeap )
{
	static UFunction* pFnApplyItemToWeap = NULL;

	if ( ! pFnApplyItemToWeap )
		pFnApplyItemToWeap = (UFunction*) UObject::GObjObjects()->Data[ 140900 ];

	USFCItem_Common_Scope_Kar98k_execApplyItemToWeap_Parms ApplyItemToWeap_Parms;
	ApplyItemToWeap_Parms.AppliedWeap = AppliedWeap;

	this->ProcessEvent ( pFnApplyItemToWeap, &ApplyItemToWeap_Parms, NULL );
};

// Function SFGameContent.SFCItem_Common_Scope_Dragunov.ApplyItemToWeap
// [0x00022002] 
// Parameters infos:
// class ASFWeapon*               AppliedWeap                    ( CPF_Parm )

void USFCItem_Common_Scope_Dragunov::ApplyItemToWeap ( class ASFWeapon* AppliedWeap )
{
	static UFunction* pFnApplyItemToWeap = NULL;

	if ( ! pFnApplyItemToWeap )
		pFnApplyItemToWeap = (UFunction*) UObject::GObjObjects()->Data[ 141895 ];

	USFCItem_Common_Scope_Dragunov_execApplyItemToWeap_Parms ApplyItemToWeap_Parms;
	ApplyItemToWeap_Parms.AppliedWeap = AppliedWeap;

	this->ProcessEvent ( pFnApplyItemToWeap, &ApplyItemToWeap_Parms, NULL );
};

// Function SFGameContent.SFCItem_Cz700_Def_Scope.ApplyItemToWeap
// [0x00022002] 
// Parameters infos:
// class ASFWeapon*               AppliedWeap                    ( CPF_Parm )

void USFCItem_Cz700_Def_Scope::ApplyItemToWeap ( class ASFWeapon* AppliedWeap )
{
	static UFunction* pFnApplyItemToWeap = NULL;

	if ( ! pFnApplyItemToWeap )
		pFnApplyItemToWeap = (UFunction*) UObject::GObjObjects()->Data[ 142019 ];

	USFCItem_Cz700_Def_Scope_execApplyItemToWeap_Parms ApplyItemToWeap_Parms;
	ApplyItemToWeap_Parms.AppliedWeap = AppliedWeap;

	this->ProcessEvent ( pFnApplyItemToWeap, &ApplyItemToWeap_Parms, NULL );
};

// Function SFGameContent.SFCItem_Common_Scope_S2S.ApplyItemToWeap
// [0x00022002] 
// Parameters infos:
// class ASFWeapon*               AppliedWeap                    ( CPF_Parm )

void USFCItem_Common_Scope_S2S::ApplyItemToWeap ( class ASFWeapon* AppliedWeap )
{
	static UFunction* pFnApplyItemToWeap = NULL;

	if ( ! pFnApplyItemToWeap )
		pFnApplyItemToWeap = (UFunction*) UObject::GObjObjects()->Data[ 142038 ];

	USFCItem_Common_Scope_S2S_execApplyItemToWeap_Parms ApplyItemToWeap_Parms;
	ApplyItemToWeap_Parms.AppliedWeap = AppliedWeap;

	this->ProcessEvent ( pFnApplyItemToWeap, &ApplyItemToWeap_Parms, NULL );
};

// Function SFGameContent.SFCItem_Common_Scope_Zeiess.ApplyItemToWeap
// [0x00022002] 
// Parameters infos:
// class ASFWeapon*               AppliedWeap                    ( CPF_Parm )

void USFCItem_Common_Scope_Zeiess::ApplyItemToWeap ( class ASFWeapon* AppliedWeap )
{
	static UFunction* pFnApplyItemToWeap = NULL;

	if ( ! pFnApplyItemToWeap )
		pFnApplyItemToWeap = (UFunction*) UObject::GObjObjects()->Data[ 142108 ];

	USFCItem_Common_Scope_Zeiess_execApplyItemToWeap_Parms ApplyItemToWeap_Parms;
	ApplyItemToWeap_Parms.AppliedWeap = AppliedWeap;

	this->ProcessEvent ( pFnApplyItemToWeap, &ApplyItemToWeap_Parms, NULL );
};

// Function SFGameContent.SFCItem_PSG1_Def_Scope.ApplyItemToWeap
// [0x00022002] 
// Parameters infos:
// class ASFWeapon*               AppliedWeap                    ( CPF_Parm )

void USFCItem_PSG1_Def_Scope::ApplyItemToWeap ( class ASFWeapon* AppliedWeap )
{
	static UFunction* pFnApplyItemToWeap = NULL;

	if ( ! pFnApplyItemToWeap )
		pFnApplyItemToWeap = (UFunction*) UObject::GObjObjects()->Data[ 142148 ];

	USFCItem_PSG1_Def_Scope_execApplyItemToWeap_Parms ApplyItemToWeap_Parms;
	ApplyItemToWeap_Parms.AppliedWeap = AppliedWeap;

	this->ProcessEvent ( pFnApplyItemToWeap, &ApplyItemToWeap_Parms, NULL );
};

// Function SFGameContent.SFCItem_Barret_Def_Scope.ApplyItemToWeap
// [0x00022002] 
// Parameters infos:
// class ASFWeapon*               AppliedWeap                    ( CPF_Parm )

void USFCItem_Barret_Def_Scope::ApplyItemToWeap ( class ASFWeapon* AppliedWeap )
{
	static UFunction* pFnApplyItemToWeap = NULL;

	if ( ! pFnApplyItemToWeap )
		pFnApplyItemToWeap = (UFunction*) UObject::GObjObjects()->Data[ 142346 ];

	USFCItem_Barret_Def_Scope_execApplyItemToWeap_Parms ApplyItemToWeap_Parms;
	ApplyItemToWeap_Parms.AppliedWeap = AppliedWeap;

	this->ProcessEvent ( pFnApplyItemToWeap, &ApplyItemToWeap_Parms, NULL );
};

// Function SFGameContent.SFCItem_FAMAS_Def_Sight.ApplyItemToWeap
// [0x00022000] 
// Parameters infos:
// class ASFWeapon*               AppliedWeap                    ( CPF_Parm )

void USFCItem_FAMAS_Def_Sight::ApplyItemToWeap ( class ASFWeapon* AppliedWeap )
{
	static UFunction* pFnApplyItemToWeap = NULL;

	if ( ! pFnApplyItemToWeap )
		pFnApplyItemToWeap = (UFunction*) UObject::GObjObjects()->Data[ 143287 ];

	USFCItem_FAMAS_Def_Sight_execApplyItemToWeap_Parms ApplyItemToWeap_Parms;
	ApplyItemToWeap_Parms.AppliedWeap = AppliedWeap;

	this->ProcessEvent ( pFnApplyItemToWeap, &ApplyItemToWeap_Parms, NULL );
};

// Function SFGameContent.SFCItem_MurderKnife.ApplyItemToWeapByPenalty
// [0x00022002] 
// Parameters infos:
// class ASFWeapon*               AppliedWeap                    ( CPF_Parm )

void USFCItem_MurderKnife::ApplyItemToWeapByPenalty ( class ASFWeapon* AppliedWeap )
{
	static UFunction* pFnApplyItemToWeapByPenalty = NULL;

	if ( ! pFnApplyItemToWeapByPenalty )
		pFnApplyItemToWeapByPenalty = (UFunction*) UObject::GObjObjects()->Data[ 143647 ];

	USFCItem_MurderKnife_execApplyItemToWeapByPenalty_Parms ApplyItemToWeapByPenalty_Parms;
	ApplyItemToWeapByPenalty_Parms.AppliedWeap = AppliedWeap;

	this->ProcessEvent ( pFnApplyItemToWeapByPenalty, &ApplyItemToWeapByPenalty_Parms, NULL );
};

// Function SFGameContent.SFCItem_Common_Scope_Bender.ApplyItemToWeap
// [0x00022002] 
// Parameters infos:
// class ASFWeapon*               AppliedWeap                    ( CPF_Parm )

void USFCItem_Common_Scope_Bender::ApplyItemToWeap ( class ASFWeapon* AppliedWeap )
{
	static UFunction* pFnApplyItemToWeap = NULL;

	if ( ! pFnApplyItemToWeap )
		pFnApplyItemToWeap = (UFunction*) UObject::GObjObjects()->Data[ 143711 ];

	USFCItem_Common_Scope_Bender_execApplyItemToWeap_Parms ApplyItemToWeap_Parms;
	ApplyItemToWeap_Parms.AppliedWeap = AppliedWeap;

	this->ProcessEvent ( pFnApplyItemToWeap, &ApplyItemToWeap_Parms, NULL );
};

// Function SFGameContent.SFCItem_AWP_Def_Scope.ApplyItemToWeap
// [0x00022002] 
// Parameters infos:
// class ASFWeapon*               AppliedWeap                    ( CPF_Parm )

void USFCItem_AWP_Def_Scope::ApplyItemToWeap ( class ASFWeapon* AppliedWeap )
{
	static UFunction* pFnApplyItemToWeap = NULL;

	if ( ! pFnApplyItemToWeap )
		pFnApplyItemToWeap = (UFunction*) UObject::GObjObjects()->Data[ 144177 ];

	USFCItem_AWP_Def_Scope_execApplyItemToWeap_Parms ApplyItemToWeap_Parms;
	ApplyItemToWeap_Parms.AppliedWeap = AppliedWeap;

	this->ProcessEvent ( pFnApplyItemToWeap, &ApplyItemToWeap_Parms, NULL );
};

// Function SFGameContent.SFCItem_Common_Scope_PM2.ApplyItemToWeap
// [0x00022002] 
// Parameters infos:
// class ASFWeapon*               AppliedWeap                    ( CPF_Parm )

void USFCItem_Common_Scope_PM2::ApplyItemToWeap ( class ASFWeapon* AppliedWeap )
{
	static UFunction* pFnApplyItemToWeap = NULL;

	if ( ! pFnApplyItemToWeap )
		pFnApplyItemToWeap = (UFunction*) UObject::GObjObjects()->Data[ 144942 ];

	USFCItem_Common_Scope_PM2_execApplyItemToWeap_Parms ApplyItemToWeap_Parms;
	ApplyItemToWeap_Parms.AppliedWeap = AppliedWeap;

	this->ProcessEvent ( pFnApplyItemToWeap, &ApplyItemToWeap_Parms, NULL );
};

// Function SFGameContent.SFCItem_BowieKnife.ApplyItemToWeapByPenalty
// [0x00022002] 
// Parameters infos:
// class ASFWeapon*               AppliedWeap                    ( CPF_Parm )

void USFCItem_BowieKnife::ApplyItemToWeapByPenalty ( class ASFWeapon* AppliedWeap )
{
	static UFunction* pFnApplyItemToWeapByPenalty = NULL;

	if ( ! pFnApplyItemToWeapByPenalty )
		pFnApplyItemToWeapByPenalty = (UFunction*) UObject::GObjObjects()->Data[ 144990 ];

	USFCItem_BowieKnife_execApplyItemToWeapByPenalty_Parms ApplyItemToWeapByPenalty_Parms;
	ApplyItemToWeapByPenalty_Parms.AppliedWeap = AppliedWeap;

	this->ProcessEvent ( pFnApplyItemToWeapByPenalty, &ApplyItemToWeapByPenalty_Parms, NULL );
};

// Function SFGameContent.SFCItem_SR25_Def_Scope.ApplyItemToWeap
// [0x00022002] 
// Parameters infos:
// class ASFWeapon*               AppliedWeap                    ( CPF_Parm )

void USFCItem_SR25_Def_Scope::ApplyItemToWeap ( class ASFWeapon* AppliedWeap )
{
	static UFunction* pFnApplyItemToWeap = NULL;

	if ( ! pFnApplyItemToWeap )
		pFnApplyItemToWeap = (UFunction*) UObject::GObjObjects()->Data[ 145122 ];

	USFCItem_SR25_Def_Scope_execApplyItemToWeap_Parms ApplyItemToWeap_Parms;
	ApplyItemToWeap_Parms.AppliedWeap = AppliedWeap;

	this->ProcessEvent ( pFnApplyItemToWeap, &ApplyItemToWeap_Parms, NULL );
};

// Function SFGameContent.SFCItem_P226_Def_Body.ApplyItemToWeap
// [0x00022000] 
// Parameters infos:
// class ASFWeapon*               AppliedWeap                    ( CPF_Parm )

void USFCItem_P226_Def_Body::ApplyItemToWeap ( class ASFWeapon* AppliedWeap )
{
	static UFunction* pFnApplyItemToWeap = NULL;

	if ( ! pFnApplyItemToWeap )
		pFnApplyItemToWeap = (UFunction*) UObject::GObjObjects()->Data[ 145581 ];

	USFCItem_P226_Def_Body_execApplyItemToWeap_Parms ApplyItemToWeap_Parms;
	ApplyItemToWeap_Parms.AppliedWeap = AppliedWeap;

	this->ProcessEvent ( pFnApplyItemToWeap, &ApplyItemToWeap_Parms, NULL );
};

// Function SFGameContent.SFCItem_P226_Def_Magazine.ApplyItemToWeap
// [0x00022000] 
// Parameters infos:
// class ASFWeapon*               AppliedWeap                    ( CPF_Parm )

void USFCItem_P226_Def_Magazine::ApplyItemToWeap ( class ASFWeapon* AppliedWeap )
{
	static UFunction* pFnApplyItemToWeap = NULL;

	if ( ! pFnApplyItemToWeap )
		pFnApplyItemToWeap = (UFunction*) UObject::GObjObjects()->Data[ 145592 ];

	USFCItem_P226_Def_Magazine_execApplyItemToWeap_Parms ApplyItemToWeap_Parms;
	ApplyItemToWeap_Parms.AppliedWeap = AppliedWeap;

	this->ProcessEvent ( pFnApplyItemToWeap, &ApplyItemToWeap_Parms, NULL );
};

// Function SFGameContent.SFCItem_P226_Def_Sight.ApplyItemToWeap
// [0x00022000] 
// Parameters infos:
// class ASFWeapon*               AppliedWeap                    ( CPF_Parm )

void USFCItem_P226_Def_Sight::ApplyItemToWeap ( class ASFWeapon* AppliedWeap )
{
	static UFunction* pFnApplyItemToWeap = NULL;

	if ( ! pFnApplyItemToWeap )
		pFnApplyItemToWeap = (UFunction*) UObject::GObjObjects()->Data[ 145599 ];

	USFCItem_P226_Def_Sight_execApplyItemToWeap_Parms ApplyItemToWeap_Parms;
	ApplyItemToWeap_Parms.AppliedWeap = AppliedWeap;

	this->ProcessEvent ( pFnApplyItemToWeap, &ApplyItemToWeap_Parms, NULL );
};

// Function SFGameContent.SFCItem_Dagger.ApplyItemToWeapByPenalty
// [0x00022002] 
// Parameters infos:
// class ASFWeapon*               AppliedWeap                    ( CPF_Parm )

void USFCItem_Dagger::ApplyItemToWeapByPenalty ( class ASFWeapon* AppliedWeap )
{
	static UFunction* pFnApplyItemToWeapByPenalty = NULL;

	if ( ! pFnApplyItemToWeapByPenalty )
		pFnApplyItemToWeapByPenalty = (UFunction*) UObject::GObjObjects()->Data[ 145895 ];

	USFCItem_Dagger_execApplyItemToWeapByPenalty_Parms ApplyItemToWeapByPenalty_Parms;
	ApplyItemToWeapByPenalty_Parms.AppliedWeap = AppliedWeap;

	this->ProcessEvent ( pFnApplyItemToWeapByPenalty, &ApplyItemToWeapByPenalty_Parms, NULL );
};

// Function SFGameContent.SFCItem_Func_AddPrimaryMagazine.ApplyMagazine
// [0x00022002] 
// Parameters infos:
// class ASFWeapon*               SFW                            ( CPF_Parm )

void USFCItem_Func_AddPrimaryMagazine::ApplyMagazine ( class ASFWeapon* SFW )
{
	static UFunction* pFnApplyMagazine = NULL;

	if ( ! pFnApplyMagazine )
		pFnApplyMagazine = (UFunction*) UObject::GObjObjects()->Data[ 146212 ];

	USFCItem_Func_AddPrimaryMagazine_execApplyMagazine_Parms ApplyMagazine_Parms;
	ApplyMagazine_Parms.SFW = SFW;

	this->ProcessEvent ( pFnApplyMagazine, &ApplyMagazine_Parms, NULL );
};

// Function SFGameContent.SFCItem_Func_AddPrimaryMagazine.ApplyItemToHostActor
// [0x00022002] 
// Parameters infos:
// class AActor*                  AppliedActor                   ( CPF_Parm )

void USFCItem_Func_AddPrimaryMagazine::ApplyItemToHostActor ( class AActor* AppliedActor )
{
	static UFunction* pFnApplyItemToHostActor = NULL;

	if ( ! pFnApplyItemToHostActor )
		pFnApplyItemToHostActor = (UFunction*) UObject::GObjObjects()->Data[ 146213 ];

	USFCItem_Func_AddPrimaryMagazine_execApplyItemToHostActor_Parms ApplyItemToHostActor_Parms;
	ApplyItemToHostActor_Parms.AppliedActor = AppliedActor;

	this->ProcessEvent ( pFnApplyItemToHostActor, &ApplyItemToHostActor_Parms, NULL );
};

// Function SFGameContent.SFCItem_Beacon_RequestUAV.ApplyItemToHostActor
// [0x00022002] 
// Parameters infos:
// class AActor*                  AppliedActor                   ( CPF_Parm )

void USFCItem_Beacon_RequestUAV::ApplyItemToHostActor ( class AActor* AppliedActor )
{
	static UFunction* pFnApplyItemToHostActor = NULL;

	if ( ! pFnApplyItemToHostActor )
		pFnApplyItemToHostActor = (UFunction*) UObject::GObjObjects()->Data[ 146269 ];

	USFCItem_Beacon_RequestUAV_execApplyItemToHostActor_Parms ApplyItemToHostActor_Parms;
	ApplyItemToHostActor_Parms.AppliedActor = AppliedActor;

	this->ProcessEvent ( pFnApplyItemToHostActor, &ApplyItemToHostActor_Parms, NULL );
};

// Function SFGameContent.SFCItem_Func_InstantShockWave.ApplyItemToHostActor
// [0x00022002] 
// Parameters infos:
// class AActor*                  AppliedActor                   ( CPF_Parm )

void USFCItem_Func_InstantShockWave::ApplyItemToHostActor ( class AActor* AppliedActor )
{
	static UFunction* pFnApplyItemToHostActor = NULL;

	if ( ! pFnApplyItemToHostActor )
		pFnApplyItemToHostActor = (UFunction*) UObject::GObjObjects()->Data[ 146279 ];

	USFCItem_Func_InstantShockWave_execApplyItemToHostActor_Parms ApplyItemToHostActor_Parms;
	ApplyItemToHostActor_Parms.AppliedActor = AppliedActor;

	this->ProcessEvent ( pFnApplyItemToHostActor, &ApplyItemToHostActor_Parms, NULL );
};

// Function SFGameContent.SFCItem_Func_RecoveryHP.CanPurchaseInGameStore
// [0x00022002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class ASFPawn*                 ApplidedPawn                   ( CPF_Parm )

bool USFCItem_Func_RecoveryHP::CanPurchaseInGameStore ( class ASFPawn* ApplidedPawn )
{
	static UFunction* pFnCanPurchaseInGameStore = NULL;

	if ( ! pFnCanPurchaseInGameStore )
		pFnCanPurchaseInGameStore = (UFunction*) UObject::GObjObjects()->Data[ 146293 ];

	USFCItem_Func_RecoveryHP_execCanPurchaseInGameStore_Parms CanPurchaseInGameStore_Parms;
	CanPurchaseInGameStore_Parms.ApplidedPawn = ApplidedPawn;

	this->ProcessEvent ( pFnCanPurchaseInGameStore, &CanPurchaseInGameStore_Parms, NULL );

	return CanPurchaseInGameStore_Parms.ReturnValue;
};

// Function SFGameContent.SFCItem_Func_RecoveryHP.ApplyItemToActor
// [0x00022002] 
// Parameters infos:
// class AActor*                  AppliedActor                   ( CPF_Parm )

void USFCItem_Func_RecoveryHP::ApplyItemToActor ( class AActor* AppliedActor )
{
	static UFunction* pFnApplyItemToActor = NULL;

	if ( ! pFnApplyItemToActor )
		pFnApplyItemToActor = (UFunction*) UObject::GObjObjects()->Data[ 146294 ];

	USFCItem_Func_RecoveryHP_execApplyItemToActor_Parms ApplyItemToActor_Parms;
	ApplyItemToActor_Parms.AppliedActor = AppliedActor;

	this->ProcessEvent ( pFnApplyItemToActor, &ApplyItemToActor_Parms, NULL );
};

// Function SFGameContent.SFCItem_Func_PrimaryMagazineUp.ApplyItemToHostActor
// [0x00022002] 
// Parameters infos:
// class AActor*                  AppliedActor                   ( CPF_Parm )

void USFCItem_Func_PrimaryMagazineUp::ApplyItemToHostActor ( class AActor* AppliedActor )
{
	static UFunction* pFnApplyItemToHostActor = NULL;

	if ( ! pFnApplyItemToHostActor )
		pFnApplyItemToHostActor = (UFunction*) UObject::GObjObjects()->Data[ 146358 ];

	USFCItem_Func_PrimaryMagazineUp_execApplyItemToHostActor_Parms ApplyItemToHostActor_Parms;
	ApplyItemToHostActor_Parms.AppliedActor = AppliedActor;

	this->ProcessEvent ( pFnApplyItemToHostActor, &ApplyItemToHostActor_Parms, NULL );
};

// Function SFGameContent.SFCItem_Func_MiniMapPing.ApplyItemToActor
// [0x00022002] 
// Parameters infos:
// class AActor*                  AppliedActor                   ( CPF_Parm )

void USFCItem_Func_MiniMapPing::ApplyItemToActor ( class AActor* AppliedActor )
{
	static UFunction* pFnApplyItemToActor = NULL;

	if ( ! pFnApplyItemToActor )
		pFnApplyItemToActor = (UFunction*) UObject::GObjObjects()->Data[ 146368 ];

	USFCItem_Func_MiniMapPing_execApplyItemToActor_Parms ApplyItemToActor_Parms;
	ApplyItemToActor_Parms.AppliedActor = AppliedActor;

	this->ProcessEvent ( pFnApplyItemToActor, &ApplyItemToActor_Parms, NULL );
};

// Function SFGameContent.SFCItem_Func_ProvideHumanHealth.IsPossibleToUse
// [0x00022002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class ASFPawn*                 AppliedPawn                    ( CPF_Parm )

bool USFCItem_Func_ProvideHumanHealth::IsPossibleToUse ( class ASFPawn* AppliedPawn )
{
	static UFunction* pFnIsPossibleToUse = NULL;

	if ( ! pFnIsPossibleToUse )
		pFnIsPossibleToUse = (UFunction*) UObject::GObjObjects()->Data[ 146381 ];

	USFCItem_Func_ProvideHumanHealth_execIsPossibleToUse_Parms IsPossibleToUse_Parms;
	IsPossibleToUse_Parms.AppliedPawn = AppliedPawn;

	this->ProcessEvent ( pFnIsPossibleToUse, &IsPossibleToUse_Parms, NULL );

	return IsPossibleToUse_Parms.ReturnValue;
};

// Function SFGameContent.SFCItem_GAFE_SpecialSuit.ApplyItemToHostPawn
// [0x00022000] 
// Parameters infos:
// class ASFPawn*                 AppliedPawn                    ( CPF_Parm )

void USFCItem_GAFE_SpecialSuit::ApplyItemToHostPawn ( class ASFPawn* AppliedPawn )
{
	static UFunction* pFnApplyItemToHostPawn = NULL;

	if ( ! pFnApplyItemToHostPawn )
		pFnApplyItemToHostPawn = (UFunction*) UObject::GObjObjects()->Data[ 146691 ];

	USFCItem_GAFE_SpecialSuit_execApplyItemToHostPawn_Parms ApplyItemToHostPawn_Parms;
	ApplyItemToHostPawn_Parms.AppliedPawn = AppliedPawn;

	this->ProcessEvent ( pFnApplyItemToHostPawn, &ApplyItemToHostPawn_Parms, NULL );
};

// Function SFGameContent.SFCItem_GIGN_SpeicalSuit.ApplyItemToHostPawn
// [0x00022000] 
// Parameters infos:
// class ASFPawn*                 AppliedPawn                    ( CPF_Parm )

void USFCItem_GIGN_SpeicalSuit::ApplyItemToHostPawn ( class ASFPawn* AppliedPawn )
{
	static UFunction* pFnApplyItemToHostPawn = NULL;

	if ( ! pFnApplyItemToHostPawn )
		pFnApplyItemToHostPawn = (UFunction*) UObject::GObjObjects()->Data[ 146720 ];

	USFCItem_GIGN_SpeicalSuit_execApplyItemToHostPawn_Parms ApplyItemToHostPawn_Parms;
	ApplyItemToHostPawn_Parms.AppliedPawn = AppliedPawn;

	this->ProcessEvent ( pFnApplyItemToHostPawn, &ApplyItemToHostPawn_Parms, NULL );
};

// Function SFGameContent.SFCItem_DeltaForce_ScoutSuit.ApplyItemToHostPawn
// [0x00022000] 
// Parameters infos:
// class ASFPawn*                 AppliedPawn                    ( CPF_Parm )

void USFCItem_DeltaForce_ScoutSuit::ApplyItemToHostPawn ( class ASFPawn* AppliedPawn )
{
	static UFunction* pFnApplyItemToHostPawn = NULL;

	if ( ! pFnApplyItemToHostPawn )
		pFnApplyItemToHostPawn = (UFunction*) UObject::GObjObjects()->Data[ 146820 ];

	USFCItem_DeltaForce_ScoutSuit_execApplyItemToHostPawn_Parms ApplyItemToHostPawn_Parms;
	ApplyItemToHostPawn_Parms.AppliedPawn = AppliedPawn;

	this->ProcessEvent ( pFnApplyItemToHostPawn, &ApplyItemToHostPawn_Parms, NULL );
};

// Function SFGameContent.SFCItem_Common_SpeedUpBoots.ApplyItemToHostPawn
// [0x00022002] 
// Parameters infos:
// class ASFPawn*                 AppliedPawn                    ( CPF_Parm )

void USFCItem_Common_SpeedUpBoots::ApplyItemToHostPawn ( class ASFPawn* AppliedPawn )
{
	static UFunction* pFnApplyItemToHostPawn = NULL;

	if ( ! pFnApplyItemToHostPawn )
		pFnApplyItemToHostPawn = (UFunction*) UObject::GObjObjects()->Data[ 146892 ];

	USFCItem_Common_SpeedUpBoots_execApplyItemToHostPawn_Parms ApplyItemToHostPawn_Parms;
	ApplyItemToHostPawn_Parms.AppliedPawn = AppliedPawn;

	this->ProcessEvent ( pFnApplyItemToHostPawn, &ApplyItemToHostPawn_Parms, NULL );
};

// Function SFGameContent.SFCItem_UDT_CombatSuit.ApplyItemToHostPawn
// [0x00022002] 
// Parameters infos:
// class ASFPawn*                 AppliedPawn                    ( CPF_Parm )

void USFCItem_UDT_CombatSuit::ApplyItemToHostPawn ( class ASFPawn* AppliedPawn )
{
	static UFunction* pFnApplyItemToHostPawn = NULL;

	if ( ! pFnApplyItemToHostPawn )
		pFnApplyItemToHostPawn = (UFunction*) UObject::GObjObjects()->Data[ 147363 ];

	USFCItem_UDT_CombatSuit_execApplyItemToHostPawn_Parms ApplyItemToHostPawn_Parms;
	ApplyItemToHostPawn_Parms.AppliedPawn = AppliedPawn;

	this->ProcessEvent ( pFnApplyItemToHostPawn, &ApplyItemToHostPawn_Parms, NULL );
};

// Function SFGameContent.SFCItem_UDT_NormalSuit.ApplyItemToHostPawn
// [0x00022002] 
// Parameters infos:
// class ASFPawn*                 AppliedPawn                    ( CPF_Parm )

void USFCItem_UDT_NormalSuit::ApplyItemToHostPawn ( class ASFPawn* AppliedPawn )
{
	static UFunction* pFnApplyItemToHostPawn = NULL;

	if ( ! pFnApplyItemToHostPawn )
		pFnApplyItemToHostPawn = (UFunction*) UObject::GObjObjects()->Data[ 147368 ];

	USFCItem_UDT_NormalSuit_execApplyItemToHostPawn_Parms ApplyItemToHostPawn_Parms;
	ApplyItemToHostPawn_Parms.AppliedPawn = AppliedPawn;

	this->ProcessEvent ( pFnApplyItemToHostPawn, &ApplyItemToHostPawn_Parms, NULL );
};

// Function SFGameContent.SFCItem_GAFE_CombatSuit.ApplyItemToHostPawn
// [0x00022002] 
// Parameters infos:
// class ASFPawn*                 AppliedPawn                    ( CPF_Parm )

void USFCItem_GAFE_CombatSuit::ApplyItemToHostPawn ( class ASFPawn* AppliedPawn )
{
	static UFunction* pFnApplyItemToHostPawn = NULL;

	if ( ! pFnApplyItemToHostPawn )
		pFnApplyItemToHostPawn = (UFunction*) UObject::GObjObjects()->Data[ 147373 ];

	USFCItem_GAFE_CombatSuit_execApplyItemToHostPawn_Parms ApplyItemToHostPawn_Parms;
	ApplyItemToHostPawn_Parms.AppliedPawn = AppliedPawn;

	this->ProcessEvent ( pFnApplyItemToHostPawn, &ApplyItemToHostPawn_Parms, NULL );
};

// Function SFGameContent.SFCItem_GAFE_NormalSuit.ApplyItemToHostPawn
// [0x00022002] 
// Parameters infos:
// class ASFPawn*                 AppliedPawn                    ( CPF_Parm )

void USFCItem_GAFE_NormalSuit::ApplyItemToHostPawn ( class ASFPawn* AppliedPawn )
{
	static UFunction* pFnApplyItemToHostPawn = NULL;

	if ( ! pFnApplyItemToHostPawn )
		pFnApplyItemToHostPawn = (UFunction*) UObject::GObjObjects()->Data[ 147378 ];

	USFCItem_GAFE_NormalSuit_execApplyItemToHostPawn_Parms ApplyItemToHostPawn_Parms;
	ApplyItemToHostPawn_Parms.AppliedPawn = AppliedPawn;

	this->ProcessEvent ( pFnApplyItemToHostPawn, &ApplyItemToHostPawn_Parms, NULL );
};

// Function SFGameContent.SFCItem_GIGN_CombatSuit.ApplyItemToHostPawn
// [0x00022002] 
// Parameters infos:
// class ASFPawn*                 AppliedPawn                    ( CPF_Parm )

void USFCItem_GIGN_CombatSuit::ApplyItemToHostPawn ( class ASFPawn* AppliedPawn )
{
	static UFunction* pFnApplyItemToHostPawn = NULL;

	if ( ! pFnApplyItemToHostPawn )
		pFnApplyItemToHostPawn = (UFunction*) UObject::GObjObjects()->Data[ 147383 ];

	USFCItem_GIGN_CombatSuit_execApplyItemToHostPawn_Parms ApplyItemToHostPawn_Parms;
	ApplyItemToHostPawn_Parms.AppliedPawn = AppliedPawn;

	this->ProcessEvent ( pFnApplyItemToHostPawn, &ApplyItemToHostPawn_Parms, NULL );
};

// Function SFGameContent.SFCItem_GIGN_NormalSuit.ApplyItemToHostPawn
// [0x00022002] 
// Parameters infos:
// class ASFPawn*                 AppliedPawn                    ( CPF_Parm )

void USFCItem_GIGN_NormalSuit::ApplyItemToHostPawn ( class ASFPawn* AppliedPawn )
{
	static UFunction* pFnApplyItemToHostPawn = NULL;

	if ( ! pFnApplyItemToHostPawn )
		pFnApplyItemToHostPawn = (UFunction*) UObject::GObjObjects()->Data[ 147388 ];

	USFCItem_GIGN_NormalSuit_execApplyItemToHostPawn_Parms ApplyItemToHostPawn_Parms;
	ApplyItemToHostPawn_Parms.AppliedPawn = AppliedPawn;

	this->ProcessEvent ( pFnApplyItemToHostPawn, &ApplyItemToHostPawn_Parms, NULL );
};

// Function SFGameContent.SFCItem_SAS_CombatSuit.ApplyItemToHostPawn
// [0x00022002] 
// Parameters infos:
// class ASFPawn*                 AppliedPawn                    ( CPF_Parm )

void USFCItem_SAS_CombatSuit::ApplyItemToHostPawn ( class ASFPawn* AppliedPawn )
{
	static UFunction* pFnApplyItemToHostPawn = NULL;

	if ( ! pFnApplyItemToHostPawn )
		pFnApplyItemToHostPawn = (UFunction*) UObject::GObjObjects()->Data[ 147393 ];

	USFCItem_SAS_CombatSuit_execApplyItemToHostPawn_Parms ApplyItemToHostPawn_Parms;
	ApplyItemToHostPawn_Parms.AppliedPawn = AppliedPawn;

	this->ProcessEvent ( pFnApplyItemToHostPawn, &ApplyItemToHostPawn_Parms, NULL );
};

// Function SFGameContent.SFCItem_SAS_NormalSuit.ApplyItemToHostPawn
// [0x00022002] 
// Parameters infos:
// class ASFPawn*                 AppliedPawn                    ( CPF_Parm )

void USFCItem_SAS_NormalSuit::ApplyItemToHostPawn ( class ASFPawn* AppliedPawn )
{
	static UFunction* pFnApplyItemToHostPawn = NULL;

	if ( ! pFnApplyItemToHostPawn )
		pFnApplyItemToHostPawn = (UFunction*) UObject::GObjObjects()->Data[ 147398 ];

	USFCItem_SAS_NormalSuit_execApplyItemToHostPawn_Parms ApplyItemToHostPawn_Parms;
	ApplyItemToHostPawn_Parms.AppliedPawn = AppliedPawn;

	this->ProcessEvent ( pFnApplyItemToHostPawn, &ApplyItemToHostPawn_Parms, NULL );
};

// Function SFGameContent.SFCItem_Spetsnaz_CombatSuit.ApplyItemToHostPawn
// [0x00022002] 
// Parameters infos:
// class ASFPawn*                 AppliedPawn                    ( CPF_Parm )

void USFCItem_Spetsnaz_CombatSuit::ApplyItemToHostPawn ( class ASFPawn* AppliedPawn )
{
	static UFunction* pFnApplyItemToHostPawn = NULL;

	if ( ! pFnApplyItemToHostPawn )
		pFnApplyItemToHostPawn = (UFunction*) UObject::GObjObjects()->Data[ 147403 ];

	USFCItem_Spetsnaz_CombatSuit_execApplyItemToHostPawn_Parms ApplyItemToHostPawn_Parms;
	ApplyItemToHostPawn_Parms.AppliedPawn = AppliedPawn;

	this->ProcessEvent ( pFnApplyItemToHostPawn, &ApplyItemToHostPawn_Parms, NULL );
};

// Function SFGameContent.SFCItem_Spetsnaz_NormalSuit.ApplyItemToHostPawn
// [0x00022002] 
// Parameters infos:
// class ASFPawn*                 AppliedPawn                    ( CPF_Parm )

void USFCItem_Spetsnaz_NormalSuit::ApplyItemToHostPawn ( class ASFPawn* AppliedPawn )
{
	static UFunction* pFnApplyItemToHostPawn = NULL;

	if ( ! pFnApplyItemToHostPawn )
		pFnApplyItemToHostPawn = (UFunction*) UObject::GObjObjects()->Data[ 147408 ];

	USFCItem_Spetsnaz_NormalSuit_execApplyItemToHostPawn_Parms ApplyItemToHostPawn_Parms;
	ApplyItemToHostPawn_Parms.AppliedPawn = AppliedPawn;

	this->ProcessEvent ( pFnApplyItemToHostPawn, &ApplyItemToHostPawn_Parms, NULL );
};

// Function SFGameContent.SFCItem_DeltaForce_CombatSuit.ApplyItemToHostPawn
// [0x00022002] 
// Parameters infos:
// class ASFPawn*                 AppliedPawn                    ( CPF_Parm )

void USFCItem_DeltaForce_CombatSuit::ApplyItemToHostPawn ( class ASFPawn* AppliedPawn )
{
	static UFunction* pFnApplyItemToHostPawn = NULL;

	if ( ! pFnApplyItemToHostPawn )
		pFnApplyItemToHostPawn = (UFunction*) UObject::GObjObjects()->Data[ 147413 ];

	USFCItem_DeltaForce_CombatSuit_execApplyItemToHostPawn_Parms ApplyItemToHostPawn_Parms;
	ApplyItemToHostPawn_Parms.AppliedPawn = AppliedPawn;

	this->ProcessEvent ( pFnApplyItemToHostPawn, &ApplyItemToHostPawn_Parms, NULL );
};

// Function SFGameContent.SFCItem_DeltaForce_NormalSuit.ApplyItemToHostPawn
// [0x00022002] 
// Parameters infos:
// class ASFPawn*                 AppliedPawn                    ( CPF_Parm )

void USFCItem_DeltaForce_NormalSuit::ApplyItemToHostPawn ( class ASFPawn* AppliedPawn )
{
	static UFunction* pFnApplyItemToHostPawn = NULL;

	if ( ! pFnApplyItemToHostPawn )
		pFnApplyItemToHostPawn = (UFunction*) UObject::GObjObjects()->Data[ 147418 ];

	USFCItem_DeltaForce_NormalSuit_execApplyItemToHostPawn_Parms ApplyItemToHostPawn_Parms;
	ApplyItemToHostPawn_Parms.AppliedPawn = AppliedPawn;

	this->ProcessEvent ( pFnApplyItemToHostPawn, &ApplyItemToHostPawn_Parms, NULL );
};

// Function SFGameContent.SFCItem_GPM30A1.ApplyItemToWeapByPenalty
// [0x00022002] 
// Parameters infos:
// class ASFWeapon*               AppliedWeap                    ( CPF_Parm )

void USFCItem_GPM30A1::ApplyItemToWeapByPenalty ( class ASFWeapon* AppliedWeap )
{
	static UFunction* pFnApplyItemToWeapByPenalty = NULL;

	if ( ! pFnApplyItemToWeapByPenalty )
		pFnApplyItemToWeapByPenalty = (UFunction*) UObject::GObjObjects()->Data[ 147471 ];

	USFCItem_GPM30A1_execApplyItemToWeapByPenalty_Parms ApplyItemToWeapByPenalty_Parms;
	ApplyItemToWeapByPenalty_Parms.AppliedWeap = AppliedWeap;

	this->ProcessEvent ( pFnApplyItemToWeapByPenalty, &ApplyItemToWeapByPenalty_Parms, NULL );
};


#ifdef _MSC_VER
	#pragma pack ( pop )
#endif